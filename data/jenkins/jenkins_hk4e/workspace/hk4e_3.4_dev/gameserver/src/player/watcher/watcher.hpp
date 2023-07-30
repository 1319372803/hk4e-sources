// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/watcher/watcher.hpp

// Line 20: range 0000000014CD2FD6-0000000014CD3023
void __cdecl CombatMulticondConfigCommonWatcher::CombatMulticondConfigCommonWatcher(
        CombatMulticondConfigCommonWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<CombatMulticondConfigCommonWatcher,CombatMulticondConfigCommonEvent,CombatMulticondConfigCommonWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'CombatMulticondConfigCommonWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 20: range 0000000014D24438-0000000014D24485
void __cdecl CombatMulticondConfigCommonWatcher::~CombatMulticondConfigCommonWatcher(
        CombatMulticondConfigCommonWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'CombatMulticondConfigCommonWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<CombatMulticondConfigCommonWatcher,CombatMulticondConfigCommonEvent,CombatMulticondConfigCommonWatcherParam>::~ServerWatcher(this);
};

// Line 20: range 0000000014D24486-0000000014D244B0
void __cdecl CombatMulticondConfigCommonWatcher::~CombatMulticondConfigCommonWatcher(
        CombatMulticondConfigCommonWatcher *const this)
{
  CombatMulticondConfigCommonWatcher::~CombatMulticondConfigCommonWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 29: range 0000000014CD33C4-0000000014CD3411
void __cdecl ElementBallWatcher::ElementBallWatcher(ElementBallWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<ElementBallWatcher,UseElementEnergyItemEvent,ElementBallWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'ElementBallWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 29: range 0000000014D243BE-0000000014D2440B
void __cdecl ElementBallWatcher::~ElementBallWatcher(ElementBallWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'ElementBallWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<ElementBallWatcher,UseElementEnergyItemEvent,ElementBallWatcherParam>::~ServerWatcher(this);
};

// Line 29: range 0000000014D2440C-0000000014D24436
void __cdecl ElementBallWatcher::~ElementBallWatcher(ElementBallWatcher *const this)
{
  ElementBallWatcher::~ElementBallWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 36: range 0000000014CD387A-0000000014CD38C7
void __cdecl WorldLevelUpWatcher::WorldLevelUpWatcher(WorldLevelUpWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  RefreshableServerWatcher<WorldLevelUpWatcher,PlayerWorldLevelLimitUpEvent,WorldLevelUpWatcherParam>::RefreshableServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'WorldLevelUpWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 36: range 0000000014D24344-0000000014D24391
void __cdecl WorldLevelUpWatcher::~WorldLevelUpWatcher(WorldLevelUpWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'WorldLevelUpWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  RefreshableServerWatcher<WorldLevelUpWatcher,PlayerWorldLevelLimitUpEvent,WorldLevelUpWatcherParam>::~RefreshableServerWatcher(this);
};

// Line 36: range 0000000014D24392-0000000014D243BC
void __cdecl WorldLevelUpWatcher::~WorldLevelUpWatcher(WorldLevelUpWatcher *const this)
{
  WorldLevelUpWatcher::~WorldLevelUpWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 45: range 0000000014CD3C68-0000000014CD3CB5
void __cdecl DungeonEntryToBeExploredWatcher::DungeonEntryToBeExploredWatcher(
        DungeonEntryToBeExploredWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<DungeonEntryToBeExploredWatcher,DungeonEntryChangeToBeExploredEvent,DungeonEntryToBeExploredWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'DungeonEntryToBeExploredWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 45: range 0000000014D24318-0000000014D24342
void __cdecl DungeonEntryToBeExploredWatcher::~DungeonEntryToBeExploredWatcher(
        DungeonEntryToBeExploredWatcher *const this)
{
  DungeonEntryToBeExploredWatcher::~DungeonEntryToBeExploredWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 45: range 0000000014D242CA-0000000014D24317
void __cdecl DungeonEntryToBeExploredWatcher::~DungeonEntryToBeExploredWatcher(
        DungeonEntryToBeExploredWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'DungeonEntryToBeExploredWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<DungeonEntryToBeExploredWatcher,DungeonEntryChangeToBeExploredEvent,DungeonEntryToBeExploredWatcherParam>::~ServerWatcher(this);
};

// Line 52: range 0000000014CD411E-0000000014CD416B
void __cdecl UnlockGateTempleWatcher::UnlockGateTempleWatcher(UnlockGateTempleWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  RefreshableServerWatcher<UnlockGateTempleWatcher,InteractConsumeGadgetEvent,UnlockGateTempleWatcherParam>::RefreshableServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'UnlockGateTempleWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 52: range 0000000014D24250-0000000014D2429D
void __cdecl UnlockGateTempleWatcher::~UnlockGateTempleWatcher(UnlockGateTempleWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'UnlockGateTempleWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  RefreshableServerWatcher<UnlockGateTempleWatcher,InteractConsumeGadgetEvent,UnlockGateTempleWatcherParam>::~RefreshableServerWatcher(this);
};

// Line 52: range 0000000014D2429E-0000000014D242C8
void __cdecl UnlockGateTempleWatcher::~UnlockGateTempleWatcher(UnlockGateTempleWatcher *const this)
{
  UnlockGateTempleWatcher::~UnlockGateTempleWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 60: range 0000000014CD45D4-0000000014CD4621
void __cdecl UnlockAreaWatcher::UnlockAreaWatcher(UnlockAreaWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  RefreshableServerWatcher<UnlockAreaWatcher,UnlockAreaEvent,UnlockAreaWatcherParam>::RefreshableServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'UnlockAreaWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 60: range 0000000014D24224-0000000014D2424E
void __cdecl UnlockAreaWatcher::~UnlockAreaWatcher(UnlockAreaWatcher *const this)
{
  UnlockAreaWatcher::~UnlockAreaWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 60: range 0000000014D241D6-0000000014D24223
void __cdecl UnlockAreaWatcher::~UnlockAreaWatcher(UnlockAreaWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'UnlockAreaWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  RefreshableServerWatcher<UnlockAreaWatcher,UnlockAreaEvent,UnlockAreaWatcherParam>::~RefreshableServerWatcher(this);
};

// Line 70: range 0000000014CD4A8A-0000000014CD4AD7
void __cdecl UnlockTransPointWatcher::UnlockTransPointWatcher(UnlockTransPointWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  RefreshableServerWatcher<UnlockTransPointWatcher,UnlockTransPointEvent,UnlockTransPointWatcherParam>::RefreshableServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'UnlockTransPointWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 70: range 0000000014D2415C-0000000014D241A9
void __cdecl UnlockTransPointWatcher::~UnlockTransPointWatcher(UnlockTransPointWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'UnlockTransPointWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  RefreshableServerWatcher<UnlockTransPointWatcher,UnlockTransPointEvent,UnlockTransPointWatcherParam>::~RefreshableServerWatcher(this);
};

// Line 70: range 0000000014D241AA-0000000014D241D4
void __cdecl UnlockTransPointWatcher::~UnlockTransPointWatcher(UnlockTransPointWatcher *const this)
{
  UnlockTransPointWatcher::~UnlockTransPointWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 80: range 0000000014CD4F40-0000000014CD4F8D
void __cdecl OpenChestWithGadgetIdWatcher::OpenChestWithGadgetIdWatcher(OpenChestWithGadgetIdWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  RefreshableServerWatcher<OpenChestWithGadgetIdWatcher,ChestOpenEvent,OpenChestWithGadgetIdWatcherParam>::RefreshableServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'OpenChestWithGadgetIdWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 80: range 0000000014D24130-0000000014D2415A
void __cdecl OpenChestWithGadgetIdWatcher::~OpenChestWithGadgetIdWatcher(OpenChestWithGadgetIdWatcher *const this)
{
  OpenChestWithGadgetIdWatcher::~OpenChestWithGadgetIdWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 80: range 0000000014D240E2-0000000014D2412F
void __cdecl OpenChestWithGadgetIdWatcher::~OpenChestWithGadgetIdWatcher(OpenChestWithGadgetIdWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'OpenChestWithGadgetIdWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  RefreshableServerWatcher<OpenChestWithGadgetIdWatcher,ChestOpenEvent,OpenChestWithGadgetIdWatcherParam>::~RefreshableServerWatcher(this);
};

// Line 88: range 0000000014CD532E-0000000014CD537B
void __cdecl OpenWorldChestWatcher::OpenWorldChestWatcher(OpenWorldChestWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<OpenWorldChestWatcher,ChestOpenEvent,OpenWorldChestWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'OpenWorldChestWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 88: range 0000000014D240B6-0000000014D240E0
void __cdecl OpenWorldChestWatcher::~OpenWorldChestWatcher(OpenWorldChestWatcher *const this)
{
  OpenWorldChestWatcher::~OpenWorldChestWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 88: range 0000000014D24068-0000000014D240B5
void __cdecl OpenWorldChestWatcher::~OpenWorldChestWatcher(OpenWorldChestWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'OpenWorldChestWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<OpenWorldChestWatcher,ChestOpenEvent,OpenWorldChestWatcherParam>::~ServerWatcher(this);
};

// Line 95: range 0000000014CD571C-0000000014CD5769
void __cdecl EnterClimateAreaWatcher::EnterClimateAreaWatcher(EnterClimateAreaWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<EnterClimateAreaWatcher,EnterClimateAreaEvent,EnterClimateAreaWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'EnterClimateAreaWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 95: range 0000000014D2403C-0000000014D24066
void __cdecl EnterClimateAreaWatcher::~EnterClimateAreaWatcher(EnterClimateAreaWatcher *const this)
{
  EnterClimateAreaWatcher::~EnterClimateAreaWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 95: range 0000000014D23FEE-0000000014D2403B
void __cdecl EnterClimateAreaWatcher::~EnterClimateAreaWatcher(EnterClimateAreaWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'EnterClimateAreaWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<EnterClimateAreaWatcher,EnterClimateAreaEvent,EnterClimateAreaWatcherParam>::~ServerWatcher(this);
};

// Line 103: range 0000000014CD5BD2-0000000014CD5C1F
void __cdecl CityLevelUpWatcher::CityLevelUpWatcher(CityLevelUpWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  RefreshableServerWatcher<CityLevelUpWatcher,CityLevelupEvent,CityLevelUpWatcherParam>::RefreshableServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'CityLevelUpWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 103: range 0000000014D23FC2-0000000014D23FEC
void __cdecl CityLevelUpWatcher::~CityLevelUpWatcher(CityLevelUpWatcher *const this)
{
  CityLevelUpWatcher::~CityLevelUpWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 103: range 0000000014D23F74-0000000014D23FC1
void __cdecl CityLevelUpWatcher::~CityLevelUpWatcher(CityLevelUpWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'CityLevelUpWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  RefreshableServerWatcher<CityLevelUpWatcher,CityLevelupEvent,CityLevelUpWatcherParam>::~RefreshableServerWatcher(this);
};

// Line 111: range 0000000014CD5FC0-0000000014CD600D
void __cdecl MonsterDieWatcher::MonsterDieWatcher(MonsterDieWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<MonsterDieWatcher,RoundMonsterDieEvent,MonsterDieWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'MonsterDieWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 111: range 0000000014D23F48-0000000014D23F72
void __cdecl MonsterDieWatcher::~MonsterDieWatcher(MonsterDieWatcher *const this)
{
  MonsterDieWatcher::~MonsterDieWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 111: range 0000000014D23EFA-0000000014D23F47
void __cdecl MonsterDieWatcher::~MonsterDieWatcher(MonsterDieWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'MonsterDieWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<MonsterDieWatcher,RoundMonsterDieEvent,MonsterDieWatcherParam>::~ServerWatcher(this);
};

// Line 118: range 0000000014CD63AE-0000000014CD63FB
void __cdecl MonsterCategoryDieWatcher::MonsterCategoryDieWatcher(MonsterCategoryDieWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<MonsterCategoryDieWatcher,RoundMonsterDieEvent,MonsterCategoryDieWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'MonsterCategoryDieWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 118: range 0000000014D23E80-0000000014D23ECD
void __cdecl MonsterCategoryDieWatcher::~MonsterCategoryDieWatcher(MonsterCategoryDieWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'MonsterCategoryDieWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<MonsterCategoryDieWatcher,RoundMonsterDieEvent,MonsterCategoryDieWatcherParam>::~ServerWatcher(this);
};

// Line 118: range 0000000014D23ECE-0000000014D23EF8
void __cdecl MonsterCategoryDieWatcher::~MonsterCategoryDieWatcher(MonsterCategoryDieWatcher *const this)
{
  MonsterCategoryDieWatcher::~MonsterCategoryDieWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 125: range 0000000014CD6864-0000000014CD68B1
void __cdecl UnlockSpecificTransPointWatcher::UnlockSpecificTransPointWatcher(
        UnlockSpecificTransPointWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  RefreshableServerWatcher<UnlockSpecificTransPointWatcher,UnlockTransPointEvent,UnlockSpecificTransPointWatcherParam>::RefreshableServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'UnlockSpecificTransPointWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 125: range 0000000014D23E06-0000000014D23E53
void __cdecl UnlockSpecificTransPointWatcher::~UnlockSpecificTransPointWatcher(
        UnlockSpecificTransPointWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'UnlockSpecificTransPointWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  RefreshableServerWatcher<UnlockSpecificTransPointWatcher,UnlockTransPointEvent,UnlockSpecificTransPointWatcherParam>::~RefreshableServerWatcher(this);
};

// Line 125: range 0000000014D23E54-0000000014D23E7E
void __cdecl UnlockSpecificTransPointWatcher::~UnlockSpecificTransPointWatcher(
        UnlockSpecificTransPointWatcher *const this)
{
  UnlockSpecificTransPointWatcher::~UnlockSpecificTransPointWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 133: range 0000000014CD6C52-0000000014CD6C9F
void __cdecl PlatformStartMoveWatcher::PlatformStartMoveWatcher(PlatformStartMoveWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<PlatformStartMoveWatcher,PlatformStartMoveEvent,PlatformStartMoveWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'PlatformStartMoveWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 133: range 0000000014D23D8C-0000000014D23DD9
void __cdecl PlatformStartMoveWatcher::~PlatformStartMoveWatcher(PlatformStartMoveWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'PlatformStartMoveWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<PlatformStartMoveWatcher,PlatformStartMoveEvent,PlatformStartMoveWatcherParam>::~ServerWatcher(this);
};

// Line 133: range 0000000014D23DDA-0000000014D23E04
void __cdecl PlatformStartMoveWatcher::~PlatformStartMoveWatcher(PlatformStartMoveWatcher *const this)
{
  PlatformStartMoveWatcher::~PlatformStartMoveWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 139: range 0000000014CD7040-0000000014CD708D
void __cdecl WorldGatherWatcher::WorldGatherWatcher(WorldGatherWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<WorldGatherWatcher,WorldGatherEvent,WorldGatherWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'WorldGatherWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 139: range 0000000014D23D60-0000000014D23D8A
void __cdecl WorldGatherWatcher::~WorldGatherWatcher(WorldGatherWatcher *const this)
{
  WorldGatherWatcher::~WorldGatherWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 139: range 0000000014D23D12-0000000014D23D5F
void __cdecl WorldGatherWatcher::~WorldGatherWatcher(WorldGatherWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'WorldGatherWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<WorldGatherWatcher,WorldGatherEvent,WorldGatherWatcherParam>::~ServerWatcher(this);
};

// Line 145: range 0000000014CD742E-0000000014CD747B
void __cdecl TakeGeneralRewardWatcher::TakeGeneralRewardWatcher(TakeGeneralRewardWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<TakeGeneralRewardWatcher,TakeGeneralRewardEvent,TakeGeneralRewardWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'TakeGeneralRewardWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 145: range 0000000014D23C98-0000000014D23CE5
void __cdecl TakeGeneralRewardWatcher::~TakeGeneralRewardWatcher(TakeGeneralRewardWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'TakeGeneralRewardWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<TakeGeneralRewardWatcher,TakeGeneralRewardEvent,TakeGeneralRewardWatcherParam>::~ServerWatcher(this);
};

// Line 145: range 0000000014D23CE6-0000000014D23D10
void __cdecl TakeGeneralRewardWatcher::~TakeGeneralRewardWatcher(TakeGeneralRewardWatcher *const this)
{
  TakeGeneralRewardWatcher::~TakeGeneralRewardWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 151: range 0000000014CD781C-0000000014CD7869
void __cdecl InteractGadgetWithInteractIdWatcher::InteractGadgetWithInteractIdWatcher(
        InteractGadgetWithInteractIdWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<InteractGadgetWithInteractIdWatcher,InteractConsumeGadgetEvent,InteractGadgetWithInteractIdWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'InteractGadgetWithInteractIdWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 151: range 0000000014D23C6C-0000000014D23C96
void __cdecl InteractGadgetWithInteractIdWatcher::~InteractGadgetWithInteractIdWatcher(
        InteractGadgetWithInteractIdWatcher *const this)
{
  InteractGadgetWithInteractIdWatcher::~InteractGadgetWithInteractIdWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 151: range 0000000014D23C1E-0000000014D23C6B
void __cdecl InteractGadgetWithInteractIdWatcher::~InteractGadgetWithInteractIdWatcher(
        InteractGadgetWithInteractIdWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'InteractGadgetWithInteractIdWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<InteractGadgetWithInteractIdWatcher,InteractConsumeGadgetEvent,InteractGadgetWithInteractIdWatcherParam>::~ServerWatcher(this);
};

// Line 158: range 0000000014CD7CD2-0000000014CD7D1F
void __cdecl TakeDungeonFirstPassRewardWatcher::TakeDungeonFirstPassRewardWatcher(
        TakeDungeonFirstPassRewardWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  RefreshableServerWatcher<TakeDungeonFirstPassRewardWatcher,FinishDungeonEvent,TakeDungeonFirstPassRewardWatcherParam>::RefreshableServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'TakeDungeonFirstPassRewardWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 158: range 0000000014D23BA4-0000000014D23BF1
void __cdecl TakeDungeonFirstPassRewardWatcher::~TakeDungeonFirstPassRewardWatcher(
        TakeDungeonFirstPassRewardWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'TakeDungeonFirstPassRewardWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  RefreshableServerWatcher<TakeDungeonFirstPassRewardWatcher,FinishDungeonEvent,TakeDungeonFirstPassRewardWatcherParam>::~RefreshableServerWatcher(this);
};

// Line 158: range 0000000014D23BF2-0000000014D23C1C
void __cdecl TakeDungeonFirstPassRewardWatcher::~TakeDungeonFirstPassRewardWatcher(
        TakeDungeonFirstPassRewardWatcher *const this)
{
  TakeDungeonFirstPassRewardWatcher::~TakeDungeonFirstPassRewardWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 168: range 0000000014CD80C0-0000000014CD810D
void __cdecl ObtainAvatarWatcher::ObtainAvatarWatcher(ObtainAvatarWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<ObtainAvatarWatcher,ObtainAvatarEvent,ObtainAvatarWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'ObtainAvatarWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 168: range 0000000014D23B2A-0000000014D23B77
void __cdecl ObtainAvatarWatcher::~ObtainAvatarWatcher(ObtainAvatarWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'ObtainAvatarWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<ObtainAvatarWatcher,ObtainAvatarEvent,ObtainAvatarWatcherParam>::~ServerWatcher(this);
};

// Line 168: range 0000000014D23B78-0000000014D23BA2
void __cdecl ObtainAvatarWatcher::~ObtainAvatarWatcher(ObtainAvatarWatcher *const this)
{
  ObtainAvatarWatcher::~ObtainAvatarWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 175: range 0000000014CD8576-0000000014CD85C3
void __cdecl PlayerLevelWatcher::PlayerLevelWatcher(PlayerLevelWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  RefreshableServerWatcher<PlayerLevelWatcher,PlayerLevelupEvent,PlayerLevelWatcherParam>::RefreshableServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'PlayerLevelWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 175: range 0000000014D23AFE-0000000014D23B28
void __cdecl PlayerLevelWatcher::~PlayerLevelWatcher(PlayerLevelWatcher *const this)
{
  PlayerLevelWatcher::~PlayerLevelWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 175: range 0000000014D23AB0-0000000014D23AFD
void __cdecl PlayerLevelWatcher::~PlayerLevelWatcher(PlayerLevelWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'PlayerLevelWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  RefreshableServerWatcher<PlayerLevelWatcher,PlayerLevelupEvent,PlayerLevelWatcherParam>::~RefreshableServerWatcher(this);
};

// Line 183: range 0000000014CD8A2C-0000000014CD8A79
void __cdecl AvatarUpgradeWatcher::AvatarUpgradeWatcher(AvatarUpgradeWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  RefreshableServerWatcher<AvatarUpgradeWatcher,AvatarLevelupEvent,AvatarUpgradeWatcherParam>::RefreshableServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'AvatarUpgradeWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 183: range 0000000014D23A84-0000000014D23AAE
void __cdecl AvatarUpgradeWatcher::~AvatarUpgradeWatcher(AvatarUpgradeWatcher *const this)
{
  AvatarUpgradeWatcher::~AvatarUpgradeWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 183: range 0000000014D23A36-0000000014D23A83
void __cdecl AvatarUpgradeWatcher::~AvatarUpgradeWatcher(AvatarUpgradeWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'AvatarUpgradeWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  RefreshableServerWatcher<AvatarUpgradeWatcher,AvatarLevelupEvent,AvatarUpgradeWatcherParam>::~RefreshableServerWatcher(this);
};

// Line 191: range 0000000014CD8EE2-0000000014CD8F2F
void __cdecl AvatarPromoteWatcher::AvatarPromoteWatcher(AvatarPromoteWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  RefreshableServerWatcher<AvatarPromoteWatcher,AvatarPromoteEvent,AvatarPromoteWatcherParam>::RefreshableServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'AvatarPromoteWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 191: range 0000000014D239BC-0000000014D23A09
void __cdecl AvatarPromoteWatcher::~AvatarPromoteWatcher(AvatarPromoteWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'AvatarPromoteWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  RefreshableServerWatcher<AvatarPromoteWatcher,AvatarPromoteEvent,AvatarPromoteWatcherParam>::~RefreshableServerWatcher(this);
};

// Line 191: range 0000000014D23A0A-0000000014D23A34
void __cdecl AvatarPromoteWatcher::~AvatarPromoteWatcher(AvatarPromoteWatcher *const this)
{
  AvatarPromoteWatcher::~AvatarPromoteWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 199: range 0000000014CD9398-0000000014CD93E5
void __cdecl WeaponUpgradeWatcher::WeaponUpgradeWatcher(WeaponUpgradeWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  RefreshableServerWatcher<WeaponUpgradeWatcher,WeaponLevelupEvent,WeaponUpgradeWatcherParam>::RefreshableServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'WeaponUpgradeWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 199: range 0000000014D23942-0000000014D2398F
void __cdecl WeaponUpgradeWatcher::~WeaponUpgradeWatcher(WeaponUpgradeWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'WeaponUpgradeWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  RefreshableServerWatcher<WeaponUpgradeWatcher,WeaponLevelupEvent,WeaponUpgradeWatcherParam>::~RefreshableServerWatcher(this);
};

// Line 199: range 0000000014D23990-0000000014D239BA
void __cdecl WeaponUpgradeWatcher::~WeaponUpgradeWatcher(WeaponUpgradeWatcher *const this)
{
  WeaponUpgradeWatcher::~WeaponUpgradeWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 207: range 0000000014CD984E-0000000014CD989B
void __cdecl WeaponPromoteWatcher::WeaponPromoteWatcher(WeaponPromoteWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  RefreshableServerWatcher<WeaponPromoteWatcher,WeaponPromoteEvent,WeaponPromoteWatcherParam>::RefreshableServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'WeaponPromoteWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 207: range 0000000014D23916-0000000014D23940
void __cdecl WeaponPromoteWatcher::~WeaponPromoteWatcher(WeaponPromoteWatcher *const this)
{
  WeaponPromoteWatcher::~WeaponPromoteWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 207: range 0000000014D238C8-0000000014D23915
void __cdecl WeaponPromoteWatcher::~WeaponPromoteWatcher(WeaponPromoteWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'WeaponPromoteWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  RefreshableServerWatcher<WeaponPromoteWatcher,WeaponPromoteEvent,WeaponPromoteWatcherParam>::~RefreshableServerWatcher(this);
};

// Line 215: range 0000000014CD9D04-0000000014CD9D51
void __cdecl ReliquaryUpgradeWatcher::ReliquaryUpgradeWatcher(ReliquaryUpgradeWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  RefreshableServerWatcher<ReliquaryUpgradeWatcher,ReliquaryLevelupEvent,ReliquaryUpgradeWatcherParam>::RefreshableServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'ReliquaryUpgradeWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 215: range 0000000014D2389C-0000000014D238C6
void __cdecl ReliquaryUpgradeWatcher::~ReliquaryUpgradeWatcher(ReliquaryUpgradeWatcher *const this)
{
  ReliquaryUpgradeWatcher::~ReliquaryUpgradeWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 215: range 0000000014D2384E-0000000014D2389B
void __cdecl ReliquaryUpgradeWatcher::~ReliquaryUpgradeWatcher(ReliquaryUpgradeWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'ReliquaryUpgradeWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  RefreshableServerWatcher<ReliquaryUpgradeWatcher,ReliquaryLevelupEvent,ReliquaryUpgradeWatcherParam>::~RefreshableServerWatcher(this);
};

// Line 223: range 0000000014CDA1BA-0000000014CDA207
void __cdecl ReliquaryUpgradeEqualRankLevelWatcher::ReliquaryUpgradeEqualRankLevelWatcher(
        ReliquaryUpgradeEqualRankLevelWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  RefreshableServerWatcher<ReliquaryUpgradeEqualRankLevelWatcher,ReliquaryLevelupEvent,ReliquaryUpgradeEqualRankLevelWatcherParam>::RefreshableServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'ReliquaryUpgradeEqualRankLevelWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 223: range 0000000014D23822-0000000014D2384C
void __cdecl ReliquaryUpgradeEqualRankLevelWatcher::~ReliquaryUpgradeEqualRankLevelWatcher(
        ReliquaryUpgradeEqualRankLevelWatcher *const this)
{
  ReliquaryUpgradeEqualRankLevelWatcher::~ReliquaryUpgradeEqualRankLevelWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 223: range 0000000014D237D4-0000000014D23821
void __cdecl ReliquaryUpgradeEqualRankLevelWatcher::~ReliquaryUpgradeEqualRankLevelWatcher(
        ReliquaryUpgradeEqualRankLevelWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'ReliquaryUpgradeEqualRankLevelWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  RefreshableServerWatcher<ReliquaryUpgradeEqualRankLevelWatcher,ReliquaryLevelupEvent,ReliquaryUpgradeEqualRankLevelWatcherParam>::~RefreshableServerWatcher(this);
};

// Line 231: range 0000000014CDA670-0000000014CDA6BD
void __cdecl SpecifiedWeaponUpgradeWatcher::SpecifiedWeaponUpgradeWatcher(SpecifiedWeaponUpgradeWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  RefreshableServerWatcher<SpecifiedWeaponUpgradeWatcher,WeaponLevelupEvent,SpecifiedWeaponUpgradeWatcherParam>::RefreshableServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'SpecifiedWeaponUpgradeWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 231: range 0000000014D237A8-0000000014D237D2
void __cdecl SpecifiedWeaponUpgradeWatcher::~SpecifiedWeaponUpgradeWatcher(SpecifiedWeaponUpgradeWatcher *const this)
{
  SpecifiedWeaponUpgradeWatcher::~SpecifiedWeaponUpgradeWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 231: range 0000000014D2375A-0000000014D237A7
void __cdecl SpecifiedWeaponUpgradeWatcher::~SpecifiedWeaponUpgradeWatcher(SpecifiedWeaponUpgradeWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'SpecifiedWeaponUpgradeWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  RefreshableServerWatcher<SpecifiedWeaponUpgradeWatcher,WeaponLevelupEvent,SpecifiedWeaponUpgradeWatcherParam>::~RefreshableServerWatcher(this);
};

// Line 239: range 0000000014CDAB26-0000000014CDAB73
void __cdecl WearReliquaryWatcher::WearReliquaryWatcher(WearReliquaryWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  RefreshableServerWatcher<WearReliquaryWatcher,WearOrTakeOffEquipEvent,WearReliquaryWatcherParam>::RefreshableServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'WearReliquaryWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 239: range 0000000014D2372E-0000000014D23758
void __cdecl WearReliquaryWatcher::~WearReliquaryWatcher(WearReliquaryWatcher *const this)
{
  WearReliquaryWatcher::~WearReliquaryWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 239: range 0000000014D236E0-0000000014D2372D
void __cdecl WearReliquaryWatcher::~WearReliquaryWatcher(WearReliquaryWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'WearReliquaryWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  RefreshableServerWatcher<WearReliquaryWatcher,WearOrTakeOffEquipEvent,WearReliquaryWatcherParam>::~RefreshableServerWatcher(this);
};

// Line 247: range 0000000014CDAFDC-0000000014CDB029
void __cdecl UpgradeTalentWatcher::UpgradeTalentWatcher(UpgradeTalentWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  RefreshableServerWatcher<UpgradeTalentWatcher,AvatarSkillOrProudSkillLevelupEvent,UpgradeTalentWatcherParam>::RefreshableServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'UpgradeTalentWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 247: range 0000000014D23666-0000000014D236B3
void __cdecl UpgradeTalentWatcher::~UpgradeTalentWatcher(UpgradeTalentWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'UpgradeTalentWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  RefreshableServerWatcher<UpgradeTalentWatcher,AvatarSkillOrProudSkillLevelupEvent,UpgradeTalentWatcherParam>::~RefreshableServerWatcher(this);
};

// Line 247: range 0000000014D236B4-0000000014D236DE
void __cdecl UpgradeTalentWatcher::~UpgradeTalentWatcher(UpgradeTalentWatcher *const this)
{
  UpgradeTalentWatcher::~UpgradeTalentWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 255: range 0000000014CDB492-0000000014CDB4DF
void __cdecl UnlockRecipeWatcher::UnlockRecipeWatcher(UnlockRecipeWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  RefreshableServerWatcher<UnlockRecipeWatcher,UnlockRecipeEvent,UnlockRecipeWatcherParam>::RefreshableServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'UnlockRecipeWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 255: range 0000000014D235EC-0000000014D23639
void __cdecl UnlockRecipeWatcher::~UnlockRecipeWatcher(UnlockRecipeWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'UnlockRecipeWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  RefreshableServerWatcher<UnlockRecipeWatcher,UnlockRecipeEvent,UnlockRecipeWatcherParam>::~RefreshableServerWatcher(this);
};

// Line 255: range 0000000014D2363A-0000000014D23664
void __cdecl UnlockRecipeWatcher::~UnlockRecipeWatcher(UnlockRecipeWatcher *const this)
{
  UnlockRecipeWatcher::~UnlockRecipeWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 263: range 0000000014CDB948-0000000014CDB995
void __cdecl ReliquarySetNumWatcher::ReliquarySetNumWatcher(ReliquarySetNumWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  RefreshableServerWatcher<ReliquarySetNumWatcher,WearOrTakeOffEquipEvent,ReliquarySetNumWatcherParam>::RefreshableServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'ReliquarySetNumWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 263: range 0000000014D235C0-0000000014D235EA
void __cdecl ReliquarySetNumWatcher::~ReliquarySetNumWatcher(ReliquarySetNumWatcher *const this)
{
  ReliquarySetNumWatcher::~ReliquarySetNumWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 263: range 0000000014D23572-0000000014D235BF
void __cdecl ReliquarySetNumWatcher::~ReliquarySetNumWatcher(ReliquarySetNumWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'ReliquarySetNumWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  RefreshableServerWatcher<ReliquarySetNumWatcher,WearOrTakeOffEquipEvent,ReliquarySetNumWatcherParam>::~RefreshableServerWatcher(this);
};

// Line 274: range 0000000014CDBD36-0000000014CDBD83
void __cdecl ObtainMaterialNumWatcher::ObtainMaterialNumWatcher(ObtainMaterialNumWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<ObtainMaterialNumWatcher,ObtainItemEvent,ObtainMaterialNumWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'ObtainMaterialNumWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 274: range 0000000014D23546-0000000014D23570
void __cdecl ObtainMaterialNumWatcher::~ObtainMaterialNumWatcher(ObtainMaterialNumWatcher *const this)
{
  ObtainMaterialNumWatcher::~ObtainMaterialNumWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 274: range 0000000014D234F8-0000000014D23545
void __cdecl ObtainMaterialNumWatcher::~ObtainMaterialNumWatcher(ObtainMaterialNumWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'ObtainMaterialNumWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<ObtainMaterialNumWatcher,ObtainItemEvent,ObtainMaterialNumWatcherParam>::~ServerWatcher(this);
};

// Line 280: range 0000000014CDC1EC-0000000014CDC239
void __cdecl PossessMaterialNumWatcher::PossessMaterialNumWatcher(PossessMaterialNumWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  RefreshableServerWatcher<PossessMaterialNumWatcher,ObtainItemEvent,PossessMaterialNumWatcherParam>::RefreshableServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'PossessMaterialNumWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 280: range 0000000014D2347E-0000000014D234CB
void __cdecl PossessMaterialNumWatcher::~PossessMaterialNumWatcher(PossessMaterialNumWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'PossessMaterialNumWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  RefreshableServerWatcher<PossessMaterialNumWatcher,ObtainItemEvent,PossessMaterialNumWatcherParam>::~RefreshableServerWatcher(this);
};

// Line 280: range 0000000014D234CC-0000000014D234F6
void __cdecl PossessMaterialNumWatcher::~PossessMaterialNumWatcher(PossessMaterialNumWatcher *const this)
{
  PossessMaterialNumWatcher::~PossessMaterialNumWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 287: range 0000000014CDC5DA-0000000014CDC627
void __cdecl ObtainReliquaryNumWatcher::ObtainReliquaryNumWatcher(ObtainReliquaryNumWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<ObtainReliquaryNumWatcher,ObtainItemEvent,ObtainReliquaryNumWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'ObtainReliquaryNumWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 287: range 0000000014D23404-0000000014D23451
void __cdecl ObtainReliquaryNumWatcher::~ObtainReliquaryNumWatcher(ObtainReliquaryNumWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'ObtainReliquaryNumWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<ObtainReliquaryNumWatcher,ObtainItemEvent,ObtainReliquaryNumWatcherParam>::~ServerWatcher(this);
};

// Line 287: range 0000000014D23452-0000000014D2347C
void __cdecl ObtainReliquaryNumWatcher::~ObtainReliquaryNumWatcher(ObtainReliquaryNumWatcher *const this)
{
  ObtainReliquaryNumWatcher::~ObtainReliquaryNumWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 293: range 0000000014CDC9C8-0000000014CDCA15
void __cdecl GachaNumWatcher::GachaNumWatcher(GachaNumWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<GachaNumWatcher,DoGachaEvent,GachaNumWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'GachaNumWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 293: range 0000000014D2338A-0000000014D233D7
void __cdecl GachaNumWatcher::~GachaNumWatcher(GachaNumWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'GachaNumWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<GachaNumWatcher,DoGachaEvent,GachaNumWatcherParam>::~ServerWatcher(this);
};

// Line 293: range 0000000014D233D8-0000000014D23402
void __cdecl GachaNumWatcher::~GachaNumWatcher(GachaNumWatcher *const this)
{
  GachaNumWatcher::~GachaNumWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 299: range 0000000014CDCE7E-0000000014CDCECB
void __cdecl FetterMaxLevelAvatarNumWatcher::FetterMaxLevelAvatarNumWatcher(FetterMaxLevelAvatarNumWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  RefreshableServerWatcher<FetterMaxLevelAvatarNumWatcher,FetterLevelUpdateEvent,FetterMaxLevelAvatarNumWatcherParam>::RefreshableServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'FetterMaxLevelAvatarNumWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 299: range 0000000014D23310-0000000014D2335D
void __cdecl FetterMaxLevelAvatarNumWatcher::~FetterMaxLevelAvatarNumWatcher(
        FetterMaxLevelAvatarNumWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'FetterMaxLevelAvatarNumWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  RefreshableServerWatcher<FetterMaxLevelAvatarNumWatcher,FetterLevelUpdateEvent,FetterMaxLevelAvatarNumWatcherParam>::~RefreshableServerWatcher(this);
};

// Line 299: range 0000000014D2335E-0000000014D23388
void __cdecl FetterMaxLevelAvatarNumWatcher::~FetterMaxLevelAvatarNumWatcher(
        FetterMaxLevelAvatarNumWatcher *const this)
{
  FetterMaxLevelAvatarNumWatcher::~FetterMaxLevelAvatarNumWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 307: range 0000000014CDD334-0000000014CDD381
void __cdecl AvatarPromoteExcludingPlayerWatcher::AvatarPromoteExcludingPlayerWatcher(
        AvatarPromoteExcludingPlayerWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  RefreshableServerWatcher<AvatarPromoteExcludingPlayerWatcher,AvatarPromoteEvent,AvatarPromoteExcludingPlayerWatcherParam>::RefreshableServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'AvatarPromoteExcludingPlayerWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 307: range 0000000014D232E4-0000000014D2330E
void __cdecl AvatarPromoteExcludingPlayerWatcher::~AvatarPromoteExcludingPlayerWatcher(
        AvatarPromoteExcludingPlayerWatcher *const this)
{
  AvatarPromoteExcludingPlayerWatcher::~AvatarPromoteExcludingPlayerWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 307: range 0000000014D23296-0000000014D232E3
void __cdecl AvatarPromoteExcludingPlayerWatcher::~AvatarPromoteExcludingPlayerWatcher(
        AvatarPromoteExcludingPlayerWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'AvatarPromoteExcludingPlayerWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  RefreshableServerWatcher<AvatarPromoteExcludingPlayerWatcher,AvatarPromoteEvent,AvatarPromoteExcludingPlayerWatcherParam>::~RefreshableServerWatcher(this);
};

// Line 317: range 0000000014CDD722-0000000014CDD76F
void __cdecl DailyTaskWatcher::DailyTaskWatcher(DailyTaskWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<DailyTaskWatcher,DailyTaskRewardEvent,DailyTaskWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'DailyTaskWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 317: range 0000000014D2326A-0000000014D23294
void __cdecl DailyTaskWatcher::~DailyTaskWatcher(DailyTaskWatcher *const this)
{
  DailyTaskWatcher::~DailyTaskWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 317: range 0000000014D2321C-0000000014D23269
void __cdecl DailyTaskWatcher::~DailyTaskWatcher(DailyTaskWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'DailyTaskWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<DailyTaskWatcher,DailyTaskRewardEvent,DailyTaskWatcherParam>::~ServerWatcher(this);
};

// Line 324: range 0000000014CDDB10-0000000014CDDB5D
void __cdecl RandTaskWatcher::RandTaskWatcher(RandTaskWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<RandTaskWatcher,RandTaskFinishEvent,RandTaskWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'RandTaskWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 324: range 0000000014D231F0-0000000014D2321A
void __cdecl RandTaskWatcher::~RandTaskWatcher(RandTaskWatcher *const this)
{
  RandTaskWatcher::~RandTaskWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 324: range 0000000014D231A2-0000000014D231EF
void __cdecl RandTaskWatcher::~RandTaskWatcher(RandTaskWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'RandTaskWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<RandTaskWatcher,RandTaskFinishEvent,RandTaskWatcherParam>::~ServerWatcher(this);
};

// Line 331: range 0000000014CDDEFE-0000000014CDDF4B
void __cdecl AvatarExpeditionWatcher::AvatarExpeditionWatcher(AvatarExpeditionWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<AvatarExpeditionWatcher,AvatarExpeditionFinishEvent,AvatarExpeditionWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'AvatarExpeditionWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 331: range 0000000014D23176-0000000014D231A0
void __cdecl AvatarExpeditionWatcher::~AvatarExpeditionWatcher(AvatarExpeditionWatcher *const this)
{
  AvatarExpeditionWatcher::~AvatarExpeditionWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 331: range 0000000014D23128-0000000014D23175
void __cdecl AvatarExpeditionWatcher::~AvatarExpeditionWatcher(AvatarExpeditionWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'AvatarExpeditionWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<AvatarExpeditionWatcher,AvatarExpeditionFinishEvent,AvatarExpeditionWatcherParam>::~ServerWatcher(this);
};

// Line 338: range 0000000014CDE3B4-0000000014CDE401
void __cdecl FinishTowerLevelWatcher::FinishTowerLevelWatcher(FinishTowerLevelWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  RefreshableServerWatcher<FinishTowerLevelWatcher,FinishTowerLevelEvent,FinishTowerLevelWatcherParam>::RefreshableServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'FinishTowerLevelWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 338: range 0000000014D230AE-0000000014D230FB
void __cdecl FinishTowerLevelWatcher::~FinishTowerLevelWatcher(FinishTowerLevelWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'FinishTowerLevelWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  RefreshableServerWatcher<FinishTowerLevelWatcher,FinishTowerLevelEvent,FinishTowerLevelWatcherParam>::~RefreshableServerWatcher(this);
};

// Line 338: range 0000000014D230FC-0000000014D23126
void __cdecl FinishTowerLevelWatcher::~FinishTowerLevelWatcher(FinishTowerLevelWatcher *const this)
{
  FinishTowerLevelWatcher::~FinishTowerLevelWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 346: range 0000000014CDE86A-0000000014CDE8B7
void __cdecl WorldBossRewardWatcher::WorldBossRewardWatcher(WorldBossRewardWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  RefreshableServerWatcher<WorldBossRewardWatcher,BossChestTakeEvent,WorldBossRewardWatcherParam>::RefreshableServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'WorldBossRewardWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 346: range 0000000014D23034-0000000014D23081
void __cdecl WorldBossRewardWatcher::~WorldBossRewardWatcher(WorldBossRewardWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'WorldBossRewardWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  RefreshableServerWatcher<WorldBossRewardWatcher,BossChestTakeEvent,WorldBossRewardWatcherParam>::~RefreshableServerWatcher(this);
};

// Line 346: range 0000000014D23082-0000000014D230AC
void __cdecl WorldBossRewardWatcher::~WorldBossRewardWatcher(WorldBossRewardWatcher *const this)
{
  WorldBossRewardWatcher::~WorldBossRewardWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 354: range 0000000014CDEC58-0000000014CDECA5
void __cdecl FinishDungeonWatcher::FinishDungeonWatcher(FinishDungeonWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<FinishDungeonWatcher,FinishDungeonEvent,FinishDungeonWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'FinishDungeonWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 354: range 0000000014D23008-0000000014D23032
void __cdecl FinishDungeonWatcher::~FinishDungeonWatcher(FinishDungeonWatcher *const this)
{
  FinishDungeonWatcher::~FinishDungeonWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 354: range 0000000014D22FBA-0000000014D23007
void __cdecl FinishDungeonWatcher::~FinishDungeonWatcher(FinishDungeonWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'FinishDungeonWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<FinishDungeonWatcher,FinishDungeonEvent,FinishDungeonWatcherParam>::~ServerWatcher(this);
};

// Line 360: range 0000000014CDF046-0000000014CDF093
void __cdecl AnyRequaryUpgradeWatcher::AnyRequaryUpgradeWatcher(AnyRequaryUpgradeWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<AnyRequaryUpgradeWatcher,ReliquaryAddExpEvent,AnyRequaryUpgradeWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'AnyRequaryUpgradeWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 360: range 0000000014D22F40-0000000014D22F8D
void __cdecl AnyRequaryUpgradeWatcher::~AnyRequaryUpgradeWatcher(AnyRequaryUpgradeWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'AnyRequaryUpgradeWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<AnyRequaryUpgradeWatcher,ReliquaryAddExpEvent,AnyRequaryUpgradeWatcherParam>::~ServerWatcher(this);
};

// Line 360: range 0000000014D22F8E-0000000014D22FB8
void __cdecl AnyRequaryUpgradeWatcher::~AnyRequaryUpgradeWatcher(AnyRequaryUpgradeWatcher *const this)
{
  AnyRequaryUpgradeWatcher::~AnyRequaryUpgradeWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 366: range 0000000014CDF434-0000000014CDF481
void __cdecl StartAvatarExpeditionWatcher::StartAvatarExpeditionWatcher(StartAvatarExpeditionWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<StartAvatarExpeditionWatcher,AvatarExpeditionStartEvent,StartAvatarExpeditionWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'StartAvatarExpeditionWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 366: range 0000000014D22F14-0000000014D22F3E
void __cdecl StartAvatarExpeditionWatcher::~StartAvatarExpeditionWatcher(StartAvatarExpeditionWatcher *const this)
{
  StartAvatarExpeditionWatcher::~StartAvatarExpeditionWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 366: range 0000000014D22EC6-0000000014D22F13
void __cdecl StartAvatarExpeditionWatcher::~StartAvatarExpeditionWatcher(StartAvatarExpeditionWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'StartAvatarExpeditionWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<StartAvatarExpeditionWatcher,AvatarExpeditionStartEvent,StartAvatarExpeditionWatcherParam>::~ServerWatcher(this);
};

// Line 372: range 0000000014CDF822-0000000014CDF86F
void __cdecl OpenBlossomChestWatcher::OpenBlossomChestWatcher(OpenBlossomChestWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<OpenBlossomChestWatcher,OpenBlossomChestEvent,OpenBlossomChestWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'OpenBlossomChestWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 372: range 0000000014D22E9A-0000000014D22EC4
void __cdecl OpenBlossomChestWatcher::~OpenBlossomChestWatcher(OpenBlossomChestWatcher *const this)
{
  OpenBlossomChestWatcher::~OpenBlossomChestWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 372: range 0000000014D22E4C-0000000014D22E99
void __cdecl OpenBlossomChestWatcher::~OpenBlossomChestWatcher(OpenBlossomChestWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'OpenBlossomChestWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<OpenBlossomChestWatcher,OpenBlossomChestEvent,OpenBlossomChestWatcherParam>::~ServerWatcher(this);
};

// Line 378: range 0000000014CDFC10-0000000014CDFC5D
void __cdecl FinishBlossomProgressWatcher::FinishBlossomProgressWatcher(FinishBlossomProgressWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<FinishBlossomProgressWatcher,FinishBlossomProgressEvent,FinishBlossomProgressWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'FinishBlossomProgressWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 378: range 0000000014D22DD2-0000000014D22E1F
void __cdecl FinishBlossomProgressWatcher::~FinishBlossomProgressWatcher(FinishBlossomProgressWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'FinishBlossomProgressWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<FinishBlossomProgressWatcher,FinishBlossomProgressEvent,FinishBlossomProgressWatcherParam>::~ServerWatcher(this);
};

// Line 378: range 0000000014D22E20-0000000014D22E4A
void __cdecl FinishBlossomProgressWatcher::~FinishBlossomProgressWatcher(FinishBlossomProgressWatcher *const this)
{
  FinishBlossomProgressWatcher::~FinishBlossomProgressWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 385: range 0000000014CDFFFE-0000000014CE004B
void __cdecl FinishRoutineWatcher::FinishRoutineWatcher(FinishRoutineWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<FinishRoutineWatcher,RoutineFinishEvent,FinishRoutineWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'FinishRoutineWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 385: range 0000000014D22D58-0000000014D22DA5
void __cdecl FinishRoutineWatcher::~FinishRoutineWatcher(FinishRoutineWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'FinishRoutineWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<FinishRoutineWatcher,RoutineFinishEvent,FinishRoutineWatcherParam>::~ServerWatcher(this);
};

// Line 385: range 0000000014D22DA6-0000000014D22DD0
void __cdecl FinishRoutineWatcher::~FinishRoutineWatcher(FinishRoutineWatcher *const this)
{
  FinishRoutineWatcher::~FinishRoutineWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 391: range 0000000014CE04B4-0000000014CE0501
void __cdecl ActivityExpeditionFinishWatcher::ActivityExpeditionFinishWatcher(
        ActivityExpeditionFinishWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  RefreshableServerWatcher<ActivityExpeditionFinishWatcher,ActivityExpeditionFinishEvent,ActivityExpeditionFinishWatcherParam>::RefreshableServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'ActivityExpeditionFinishWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 391: range 0000000014D22CDE-0000000014D22D2B
void __cdecl ActivityExpeditionFinishWatcher::~ActivityExpeditionFinishWatcher(
        ActivityExpeditionFinishWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'ActivityExpeditionFinishWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  RefreshableServerWatcher<ActivityExpeditionFinishWatcher,ActivityExpeditionFinishEvent,ActivityExpeditionFinishWatcherParam>::~RefreshableServerWatcher(this);
};

// Line 391: range 0000000014D22D2C-0000000014D22D56
void __cdecl ActivityExpeditionFinishWatcher::~ActivityExpeditionFinishWatcher(
        ActivityExpeditionFinishWatcher *const this)
{
  ActivityExpeditionFinishWatcher::~ActivityExpeditionFinishWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 399: range 0000000014CE096A-0000000014CE09B7
void __cdecl ActivityChannellerSlabLoopDungeonTotalScoreWatcher::ActivityChannellerSlabLoopDungeonTotalScoreWatcher(
        ActivityChannellerSlabLoopDungeonTotalScoreWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  RefreshableServerWatcher<ActivityChannellerSlabLoopDungeonTotalScoreWatcher,ChannellerSlabLoopDungeonScoreEvent,ActivityChannellerSlabLoopDungeonTotalScoreWatcherParam>::RefreshableServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'ActivityChannellerSlabLoopDungeonTotalScoreWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 399: range 0000000014D22C64-0000000014D22CB1
void __cdecl ActivityChannellerSlabLoopDungeonTotalScoreWatcher::~ActivityChannellerSlabLoopDungeonTotalScoreWatcher(
        ActivityChannellerSlabLoopDungeonTotalScoreWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'ActivityChannellerSlabLoopDungeonTotalScoreWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  RefreshableServerWatcher<ActivityChannellerSlabLoopDungeonTotalScoreWatcher,ChannellerSlabLoopDungeonScoreEvent,ActivityChannellerSlabLoopDungeonTotalScoreWatcherParam>::~RefreshableServerWatcher(this);
};

// Line 399: range 0000000014D22CB2-0000000014D22CDC
void __cdecl ActivityChannellerSlabLoopDungeonTotalScoreWatcher::~ActivityChannellerSlabLoopDungeonTotalScoreWatcher(
        ActivityChannellerSlabLoopDungeonTotalScoreWatcher *const this)
{
  ActivityChannellerSlabLoopDungeonTotalScoreWatcher::~ActivityChannellerSlabLoopDungeonTotalScoreWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 409: range 0000000014CE0D58-0000000014CE0DA5
void __cdecl DoCookWatcher::DoCookWatcher(DoCookWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<DoCookWatcher,PlayerCookEvent,DoCookWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'DoCookWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 409: range 0000000014D22BEA-0000000014D22C37
void __cdecl DoCookWatcher::~DoCookWatcher(DoCookWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'DoCookWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<DoCookWatcher,PlayerCookEvent,DoCookWatcherParam>::~ServerWatcher(this);
};

// Line 409: range 0000000014D22C38-0000000014D22C62
void __cdecl DoCookWatcher::~DoCookWatcher(DoCookWatcher *const this)
{
  DoCookWatcher::~DoCookWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 416: range 0000000014CE1146-0000000014CE1193
void __cdecl DoForgeWatcher::DoForgeWatcher(DoForgeWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<DoForgeWatcher,PlayerForgeEvent,DoForgeWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'DoForgeWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 416: range 0000000014D22BBE-0000000014D22BE8
void __cdecl DoForgeWatcher::~DoForgeWatcher(DoForgeWatcher *const this)
{
  DoForgeWatcher::~DoForgeWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 416: range 0000000014D22B70-0000000014D22BBD
void __cdecl DoForgeWatcher::~DoForgeWatcher(DoForgeWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'DoForgeWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<DoForgeWatcher,PlayerForgeEvent,DoForgeWatcherParam>::~ServerWatcher(this);
};

// Line 423: range 0000000014CE1534-0000000014CE1581
void __cdecl DoCompoundWatcher::DoCompoundWatcher(DoCompoundWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<DoCompoundWatcher,PlayerCompoundEvent,DoCompoundWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'DoCompoundWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 423: range 0000000014D22B44-0000000014D22B6E
void __cdecl DoCompoundWatcher::~DoCompoundWatcher(DoCompoundWatcher *const this)
{
  DoCompoundWatcher::~DoCompoundWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 423: range 0000000014D22AF6-0000000014D22B43
void __cdecl DoCompoundWatcher::~DoCompoundWatcher(DoCompoundWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'DoCompoundWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<DoCompoundWatcher,PlayerCompoundEvent,DoCompoundWatcherParam>::~ServerWatcher(this);
};

// Line 430: range 0000000014CE1922-0000000014CE196F
void __cdecl DoCombineWatcher::DoCombineWatcher(DoCombineWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<DoCombineWatcher,PlayerCombineEvent,DoCombineWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'DoCombineWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 430: range 0000000014D22A7C-0000000014D22AC9
void __cdecl DoCombineWatcher::~DoCombineWatcher(DoCombineWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'DoCombineWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<DoCombineWatcher,PlayerCombineEvent,DoCombineWatcherParam>::~ServerWatcher(this);
};

// Line 430: range 0000000014D22ACA-0000000014D22AF4
void __cdecl DoCombineWatcher::~DoCombineWatcher(DoCombineWatcher *const this)
{
  DoCombineWatcher::~DoCombineWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 437: range 0000000014CE1D10-0000000014CE1D5D
void __cdecl BuyShopGoodsWatcher::BuyShopGoodsWatcher(BuyShopGoodsWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<BuyShopGoodsWatcher,PlayerBuyShopEvent,BuyShopGoodsWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'BuyShopGoodsWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 437: range 0000000014D22A02-0000000014D22A4F
void __cdecl BuyShopGoodsWatcher::~BuyShopGoodsWatcher(BuyShopGoodsWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'BuyShopGoodsWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<BuyShopGoodsWatcher,PlayerBuyShopEvent,BuyShopGoodsWatcherParam>::~ServerWatcher(this);
};

// Line 437: range 0000000014D22A50-0000000014D22A7A
void __cdecl BuyShopGoodsWatcher::~BuyShopGoodsWatcher(BuyShopGoodsWatcher *const this)
{
  BuyShopGoodsWatcher::~BuyShopGoodsWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 444: range 0000000014CE20FE-0000000014CE214B
void __cdecl ForgeWeaponWatcher::ForgeWeaponWatcher(ForgeWeaponWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<ForgeWeaponWatcher,PlayerForgeEvent,ForgeWeaponWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'ForgeWeaponWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 444: range 0000000014D22988-0000000014D229D5
void __cdecl ForgeWeaponWatcher::~ForgeWeaponWatcher(ForgeWeaponWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'ForgeWeaponWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<ForgeWeaponWatcher,PlayerForgeEvent,ForgeWeaponWatcherParam>::~ServerWatcher(this);
};

// Line 444: range 0000000014D229D6-0000000014D22A00
void __cdecl ForgeWeaponWatcher::~ForgeWeaponWatcher(ForgeWeaponWatcher *const this)
{
  ForgeWeaponWatcher::~ForgeWeaponWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 451: range 0000000014CE24EC-0000000014CE2539
void __cdecl BuyShopGoodsAndWatcher::BuyShopGoodsAndWatcher(BuyShopGoodsAndWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<BuyShopGoodsAndWatcher,PlayerBuyShopEvent,BuyShopGoodsAndWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'BuyShopGoodsAndWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 451: range 0000000014D2290E-0000000014D2295B
void __cdecl BuyShopGoodsAndWatcher::~BuyShopGoodsAndWatcher(BuyShopGoodsAndWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'BuyShopGoodsAndWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<BuyShopGoodsAndWatcher,PlayerBuyShopEvent,BuyShopGoodsAndWatcherParam>::~ServerWatcher(this);
};

// Line 451: range 0000000014D2295C-0000000014D22986
void __cdecl BuyShopGoodsAndWatcher::~BuyShopGoodsAndWatcher(BuyShopGoodsAndWatcher *const this)
{
  BuyShopGoodsAndWatcher::~BuyShopGoodsAndWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 459: range 0000000014CE28DA-0000000014CE2927
void __cdecl MpPlayBattleWinWatcher::MpPlayBattleWinWatcher(MpPlayBattleWinWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<MpPlayBattleWinWatcher,ScenePlayBattleSettleEvent,MpPlayBattleWinWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'MpPlayBattleWinWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 459: range 0000000014D22894-0000000014D228E1
void __cdecl MpPlayBattleWinWatcher::~MpPlayBattleWinWatcher(MpPlayBattleWinWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'MpPlayBattleWinWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<MpPlayBattleWinWatcher,ScenePlayBattleSettleEvent,MpPlayBattleWinWatcherParam>::~ServerWatcher(this);
};

// Line 459: range 0000000014D228E2-0000000014D2290C
void __cdecl MpPlayBattleWinWatcher::~MpPlayBattleWinWatcher(MpPlayBattleWinWatcher *const this)
{
  MpPlayBattleWinWatcher::~MpPlayBattleWinWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 466: range 0000000014CE2CC8-0000000014CE2D15
void __cdecl KillGroupMonsterWatcher::KillGroupMonsterWatcher(KillGroupMonsterWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<KillGroupMonsterWatcher,KillMonsterEvent,KillGroupMonsterWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'KillGroupMonsterWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 466: range 0000000014D22868-0000000014D22892
void __cdecl KillGroupMonsterWatcher::~KillGroupMonsterWatcher(KillGroupMonsterWatcher *const this)
{
  KillGroupMonsterWatcher::~KillGroupMonsterWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 466: range 0000000014D2281A-0000000014D22867
void __cdecl KillGroupMonsterWatcher::~KillGroupMonsterWatcher(KillGroupMonsterWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'KillGroupMonsterWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<KillGroupMonsterWatcher,KillMonsterEvent,KillGroupMonsterWatcherParam>::~ServerWatcher(this);
};

// Line 473: range 0000000014CE30B6-0000000014CE3103
void __cdecl KillGroupSpecificMonsterWatcher::KillGroupSpecificMonsterWatcher(
        KillGroupSpecificMonsterWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<KillGroupSpecificMonsterWatcher,KillMonsterEvent,KillGroupSpecificMonsterWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'KillGroupSpecificMonsterWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 473: range 0000000014D227EE-0000000014D22818
void __cdecl KillGroupSpecificMonsterWatcher::~KillGroupSpecificMonsterWatcher(
        KillGroupSpecificMonsterWatcher *const this)
{
  KillGroupSpecificMonsterWatcher::~KillGroupSpecificMonsterWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 473: range 0000000014D227A0-0000000014D227ED
void __cdecl KillGroupSpecificMonsterWatcher::~KillGroupSpecificMonsterWatcher(
        KillGroupSpecificMonsterWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'KillGroupSpecificMonsterWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<KillGroupSpecificMonsterWatcher,KillMonsterEvent,KillGroupSpecificMonsterWatcherParam>::~ServerWatcher(this);
};

// Line 479: range 0000000014CE34A4-0000000014CE34F1
void __cdecl MpPlayGroupStatisticWatcher::MpPlayGroupStatisticWatcher(MpPlayGroupStatisticWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<MpPlayGroupStatisticWatcher,ScenePlayBattleSettleEvent,MpPlayGroupStatisticWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'MpPlayGroupStatisticWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 479: range 0000000014D22726-0000000014D22773
void __cdecl MpPlayGroupStatisticWatcher::~MpPlayGroupStatisticWatcher(MpPlayGroupStatisticWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'MpPlayGroupStatisticWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<MpPlayGroupStatisticWatcher,ScenePlayBattleSettleEvent,MpPlayGroupStatisticWatcherParam>::~ServerWatcher(this);
};

// Line 479: range 0000000014D22774-0000000014D2279E
void __cdecl MpPlayGroupStatisticWatcher::~MpPlayGroupStatisticWatcher(MpPlayGroupStatisticWatcher *const this)
{
  MpPlayGroupStatisticWatcher::~MpPlayGroupStatisticWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 485: range 0000000014CE3892-0000000014CE38DF
void __cdecl MpPlayReachScoreWatcher::MpPlayReachScoreWatcher(MpPlayReachScoreWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<MpPlayReachScoreWatcher,ScenePlayBattleSettleResultEvent,MpPlayReachScoreWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'MpPlayReachScoreWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 485: range 0000000014D226AC-0000000014D226F9
void __cdecl MpPlayReachScoreWatcher::~MpPlayReachScoreWatcher(MpPlayReachScoreWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'MpPlayReachScoreWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<MpPlayReachScoreWatcher,ScenePlayBattleSettleResultEvent,MpPlayReachScoreWatcherParam>::~ServerWatcher(this);
};

// Line 485: range 0000000014D226FA-0000000014D22724
void __cdecl MpPlayReachScoreWatcher::~MpPlayReachScoreWatcher(MpPlayReachScoreWatcher *const this)
{
  MpPlayReachScoreWatcher::~MpPlayReachScoreWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 491: range 0000000014CE3C80-0000000014CE3CCD
void __cdecl MpPlayReachRecordWatcher::MpPlayReachRecordWatcher(MpPlayReachRecordWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<MpPlayReachRecordWatcher,ScenePlayBattleSettleResultEvent,MpPlayReachRecordWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'MpPlayReachRecordWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 491: range 0000000014D22632-0000000014D2267F
void __cdecl MpPlayReachRecordWatcher::~MpPlayReachRecordWatcher(MpPlayReachRecordWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'MpPlayReachRecordWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<MpPlayReachRecordWatcher,ScenePlayBattleSettleResultEvent,MpPlayReachRecordWatcherParam>::~ServerWatcher(this);
};

// Line 491: range 0000000014D22680-0000000014D226AA
void __cdecl MpPlayReachRecordWatcher::~MpPlayReachRecordWatcher(MpPlayReachRecordWatcher *const this)
{
  MpPlayReachRecordWatcher::~MpPlayReachRecordWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 498: range 0000000014CE406E-0000000014CE40BB
void __cdecl LoginWatcher::LoginWatcher(LoginWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<LoginWatcher,PlayerLoginEvent,LoginWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'LoginWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 498: range 0000000014D1E0EC-0000000014D1E116
void __cdecl LoginWatcher::~LoginWatcher(LoginWatcher *const this)
{
  LoginWatcher::~LoginWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 498: range 0000000014D1E09E-0000000014D1E0EB
void __cdecl LoginWatcher::~LoginWatcher(LoginWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'LoginWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<LoginWatcher,PlayerLoginEvent,LoginWatcherParam>::~ServerWatcher(this);
};

// Line 505: range 0000000014CE445C-0000000014CE44A9
void __cdecl CostMaterialWatcher::CostMaterialWatcher(CostMaterialWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<CostMaterialWatcher,LoseItemEvent,CostMaterialWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'CostMaterialWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 505: range 0000000014D225B8-0000000014D22605
void __cdecl CostMaterialWatcher::~CostMaterialWatcher(CostMaterialWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'CostMaterialWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<CostMaterialWatcher,LoseItemEvent,CostMaterialWatcherParam>::~ServerWatcher(this);
};

// Line 505: range 0000000014D22606-0000000014D22630
void __cdecl CostMaterialWatcher::~CostMaterialWatcher(CostMaterialWatcher *const this)
{
  CostMaterialWatcher::~CostMaterialWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 511: range 0000000014CE484A-0000000014CE4897
void __cdecl FinishChallengeWatcher::FinishChallengeWatcher(FinishChallengeWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<FinishChallengeWatcher,DungeonChallengeSuccessEvent,FinishChallengeWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'FinishChallengeWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 511: range 0000000014D2258C-0000000014D225B6
void __cdecl FinishChallengeWatcher::~FinishChallengeWatcher(FinishChallengeWatcher *const this)
{
  FinishChallengeWatcher::~FinishChallengeWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 511: range 0000000014D2253E-0000000014D2258B
void __cdecl FinishChallengeWatcher::~FinishChallengeWatcher(FinishChallengeWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'FinishChallengeWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<FinishChallengeWatcher,DungeonChallengeSuccessEvent,FinishChallengeWatcherParam>::~ServerWatcher(this);
};

// Line 517: range 0000000014CE4C38-0000000014CE4C85
void __cdecl UseItemWatcher::UseItemWatcher(UseItemWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<UseItemWatcher,UseItemEvent,UseItemWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'UseItemWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 517: range 0000000014D224C4-0000000014D22511
void __cdecl UseItemWatcher::~UseItemWatcher(UseItemWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'UseItemWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<UseItemWatcher,UseItemEvent,UseItemWatcherParam>::~ServerWatcher(this);
};

// Line 517: range 0000000014D22512-0000000014D2253C
void __cdecl UseItemWatcher::~UseItemWatcher(UseItemWatcher *const this)
{
  UseItemWatcher::~UseItemWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 523: range 0000000014CE5026-0000000014CE5073
void __cdecl LevelAvatarFinishDungeonCountWatcher::LevelAvatarFinishDungeonCountWatcher(
        LevelAvatarFinishDungeonCountWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<LevelAvatarFinishDungeonCountWatcher,FinishDungeonEvent,LevelAvatarFinishDungeonCountWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'LevelAvatarFinishDungeonCountWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 523: range 0000000014D2244A-0000000014D22497
void __cdecl LevelAvatarFinishDungeonCountWatcher::~LevelAvatarFinishDungeonCountWatcher(
        LevelAvatarFinishDungeonCountWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'LevelAvatarFinishDungeonCountWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<LevelAvatarFinishDungeonCountWatcher,FinishDungeonEvent,LevelAvatarFinishDungeonCountWatcherParam>::~ServerWatcher(this);
};

// Line 523: range 0000000014D22498-0000000014D224C2
void __cdecl LevelAvatarFinishDungeonCountWatcher::~LevelAvatarFinishDungeonCountWatcher(
        LevelAvatarFinishDungeonCountWatcher *const this)
{
  LevelAvatarFinishDungeonCountWatcher::~LevelAvatarFinishDungeonCountWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 529: range 0000000014CE54DC-0000000014CE5529
void __cdecl FinishQuestAndWatcher::FinishQuestAndWatcher(FinishQuestAndWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  RefreshableServerWatcher<FinishQuestAndWatcher,FinishQuestEvent,FinishQuestAndWatcherParam>::RefreshableServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'FinishQuestAndWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 529: range 0000000014D2241E-0000000014D22448
void __cdecl FinishQuestAndWatcher::~FinishQuestAndWatcher(FinishQuestAndWatcher *const this)
{
  FinishQuestAndWatcher::~FinishQuestAndWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 529: range 0000000014D223D0-0000000014D2241D
void __cdecl FinishQuestAndWatcher::~FinishQuestAndWatcher(FinishQuestAndWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'FinishQuestAndWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  RefreshableServerWatcher<FinishQuestAndWatcher,FinishQuestEvent,FinishQuestAndWatcherParam>::~RefreshableServerWatcher(this);
};

// Line 539: range 0000000014CE5992-0000000014CE59DF
void __cdecl FinishQuestOrWatcher::FinishQuestOrWatcher(FinishQuestOrWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  RefreshableServerWatcher<FinishQuestOrWatcher,FinishQuestEvent,FinishQuestOrWatcherParam>::RefreshableServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'FinishQuestOrWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 539: range 0000000014D22356-0000000014D223A3
void __cdecl FinishQuestOrWatcher::~FinishQuestOrWatcher(FinishQuestOrWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'FinishQuestOrWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  RefreshableServerWatcher<FinishQuestOrWatcher,FinishQuestEvent,FinishQuestOrWatcherParam>::~RefreshableServerWatcher(this);
};

// Line 539: range 0000000014D223A4-0000000014D223CE
void __cdecl FinishQuestOrWatcher::~FinishQuestOrWatcher(FinishQuestOrWatcher *const this)
{
  FinishQuestOrWatcher::~FinishQuestOrWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 547: range 0000000014CE5E48-0000000014CE5E95
void __cdecl DailyTaskVarEqualWatcher::DailyTaskVarEqualWatcher(DailyTaskVarEqualWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  RefreshableServerWatcher<DailyTaskVarEqualWatcher,DailyTaskVarUpdateEvent,DailyTaskVarEqualWatcherParam>::RefreshableServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'DailyTaskVarEqualWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 547: range 0000000014D2232A-0000000014D22354
void __cdecl DailyTaskVarEqualWatcher::~DailyTaskVarEqualWatcher(DailyTaskVarEqualWatcher *const this)
{
  DailyTaskVarEqualWatcher::~DailyTaskVarEqualWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 547: range 0000000014D222DC-0000000014D22329
void __cdecl DailyTaskVarEqualWatcher::~DailyTaskVarEqualWatcher(DailyTaskVarEqualWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'DailyTaskVarEqualWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  RefreshableServerWatcher<DailyTaskVarEqualWatcher,DailyTaskVarUpdateEvent,DailyTaskVarEqualWatcherParam>::~RefreshableServerWatcher(this);
};

// Line 555: range 0000000014CE62FE-0000000014CE634B
void __cdecl QuestGlobalVarEqualWatcher::QuestGlobalVarEqualWatcher(QuestGlobalVarEqualWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  RefreshableServerWatcher<QuestGlobalVarEqualWatcher,QuestGlobalVarUpdateEvent,QuestGlobalVarEqualWatcherParam>::RefreshableServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'QuestGlobalVarEqualWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 555: range 0000000014D22262-0000000014D222AF
void __cdecl QuestGlobalVarEqualWatcher::~QuestGlobalVarEqualWatcher(QuestGlobalVarEqualWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'QuestGlobalVarEqualWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  RefreshableServerWatcher<QuestGlobalVarEqualWatcher,QuestGlobalVarUpdateEvent,QuestGlobalVarEqualWatcherParam>::~RefreshableServerWatcher(this);
};

// Line 555: range 0000000014D222B0-0000000014D222DA
void __cdecl QuestGlobalVarEqualWatcher::~QuestGlobalVarEqualWatcher(QuestGlobalVarEqualWatcher *const this)
{
  QuestGlobalVarEqualWatcher::~QuestGlobalVarEqualWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 563: range 0000000014CE66EC-0000000014CE6739
void __cdecl TalkNumWatcher::TalkNumWatcher(TalkNumWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<TalkNumWatcher,CompleteTalkEvent,TalkNumWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'TalkNumWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 563: range 0000000014D22236-0000000014D22260
void __cdecl TalkNumWatcher::~TalkNumWatcher(TalkNumWatcher *const this)
{
  TalkNumWatcher::~TalkNumWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 563: range 0000000014D221E8-0000000014D22235
void __cdecl TalkNumWatcher::~TalkNumWatcher(TalkNumWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'TalkNumWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<TalkNumWatcher,CompleteTalkEvent,TalkNumWatcherParam>::~ServerWatcher(this);
};

// Line 569: range 0000000014CE6BA2-0000000014CE6BEF
void __cdecl FinishParentQuestAndWatcher::FinishParentQuestAndWatcher(FinishParentQuestAndWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  RefreshableServerWatcher<FinishParentQuestAndWatcher,FinishParentQuestEvent,FinishParentQuestAndWatcherParam>::RefreshableServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'FinishParentQuestAndWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 569: range 0000000014D221BC-0000000014D221E6
void __cdecl FinishParentQuestAndWatcher::~FinishParentQuestAndWatcher(FinishParentQuestAndWatcher *const this)
{
  FinishParentQuestAndWatcher::~FinishParentQuestAndWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 569: range 0000000014D2216E-0000000014D221BB
void __cdecl FinishParentQuestAndWatcher::~FinishParentQuestAndWatcher(FinishParentQuestAndWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'FinishParentQuestAndWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  RefreshableServerWatcher<FinishParentQuestAndWatcher,FinishParentQuestEvent,FinishParentQuestAndWatcherParam>::~RefreshableServerWatcher(this);
};

// Line 578: range 0000000014CE7058-0000000014CE70A5
void __cdecl FinishParentQuestOrWatcher::FinishParentQuestOrWatcher(FinishParentQuestOrWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  RefreshableServerWatcher<FinishParentQuestOrWatcher,FinishParentQuestEvent,FinishParentQuestOrWatcherParam>::RefreshableServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'FinishParentQuestOrWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 578: range 0000000014D22142-0000000014D2216C
void __cdecl FinishParentQuestOrWatcher::~FinishParentQuestOrWatcher(FinishParentQuestOrWatcher *const this)
{
  FinishParentQuestOrWatcher::~FinishParentQuestOrWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 578: range 0000000014D220F4-0000000014D22141
void __cdecl FinishParentQuestOrWatcher::~FinishParentQuestOrWatcher(FinishParentQuestOrWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'FinishParentQuestOrWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  RefreshableServerWatcher<FinishParentQuestOrWatcher,FinishParentQuestEvent,FinishParentQuestOrWatcherParam>::~RefreshableServerWatcher(this);
};

// Line 585: range 0000000014CE7446-0000000014CE7493
void __cdecl GroupNotifyWatcher::GroupNotifyWatcher(GroupNotifyWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<GroupNotifyWatcher,GroupMarkPlayerActionEvent,GroupNotifyWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'GroupNotifyWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 585: range 0000000014D220C8-0000000014D220F2
void __cdecl GroupNotifyWatcher::~GroupNotifyWatcher(GroupNotifyWatcher *const this)
{
  GroupNotifyWatcher::~GroupNotifyWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 585: range 0000000014D2207A-0000000014D220C7
void __cdecl GroupNotifyWatcher::~GroupNotifyWatcher(GroupNotifyWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'GroupNotifyWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<GroupNotifyWatcher,GroupMarkPlayerActionEvent,GroupNotifyWatcherParam>::~ServerWatcher(this);
};

// Line 591: range 0000000014CE7834-0000000014CE78B2
void __cdecl ElementReactionTimeLimitNumWatcher::ElementReactionTimeLimitNumWatcher(
        ElementReactionTimeLimitNumWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<ElementReactionTimeLimitNumWatcher,ElementReactionStatUpdateEvent,ElementReactionTimeLimitNumWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'ElementReactionTimeLimitNumWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_time_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->last_time_ms_, v1);
  this->last_time_ms_ = 0LL;
};

// Line 591: range 0000000014D2204E-0000000014D22078
void __cdecl ElementReactionTimeLimitNumWatcher::~ElementReactionTimeLimitNumWatcher(
        ElementReactionTimeLimitNumWatcher *const this)
{
  ElementReactionTimeLimitNumWatcher::~ElementReactionTimeLimitNumWatcher(this);
  operator delete(this, 0x80uLL);
};

// Line 591: range 0000000014D22000-0000000014D2204D
void __cdecl ElementReactionTimeLimitNumWatcher::~ElementReactionTimeLimitNumWatcher(
        ElementReactionTimeLimitNumWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'ElementReactionTimeLimitNumWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<ElementReactionTimeLimitNumWatcher,ElementReactionStatUpdateEvent,ElementReactionTimeLimitNumWatcherParam>::~ServerWatcher(this);
};

// Line 600: range 0000000014CE7C62-0000000014CE7CE0
void __cdecl ElementReactionTimeLimitKillNumWatcher::ElementReactionTimeLimitKillNumWatcher(
        ElementReactionTimeLimitKillNumWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<ElementReactionTimeLimitKillNumWatcher,ElementReactionStatUpdateEvent,ElementReactionTimeLimitKillNumWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'ElementReactionTimeLimitKillNumWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_time_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->last_time_ms_, v1);
  this->last_time_ms_ = 0LL;
};

// Line 600: range 0000000014D21FD4-0000000014D21FFE
void __cdecl ElementReactionTimeLimitKillNumWatcher::~ElementReactionTimeLimitKillNumWatcher(
        ElementReactionTimeLimitKillNumWatcher *const this)
{
  ElementReactionTimeLimitKillNumWatcher::~ElementReactionTimeLimitKillNumWatcher(this);
  operator delete(this, 0x80uLL);
};

// Line 600: range 0000000014D21F86-0000000014D21FD3
void __cdecl ElementReactionTimeLimitKillNumWatcher::~ElementReactionTimeLimitKillNumWatcher(
        ElementReactionTimeLimitKillNumWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'ElementReactionTimeLimitKillNumWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<ElementReactionTimeLimitKillNumWatcher,ElementReactionStatUpdateEvent,ElementReactionTimeLimitKillNumWatcherParam>::~ServerWatcher(this);
};

// Line 608: range 0000000014CE8082-0000000014CE8100
void __cdecl ElementReactionTimeLimitDamageNumWatcher::ElementReactionTimeLimitDamageNumWatcher(
        ElementReactionTimeLimitDamageNumWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<ElementReactionTimeLimitDamageNumWatcher,ElementReactionStatUpdateEvent,ElementReactionTimeLimitDamageNumWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'ElementReactionTimeLimitDamageNumWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_time_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->last_time_ms_, v1);
  this->last_time_ms_ = 0LL;
};

// Line 608: range 0000000014D21F0C-0000000014D21F59
void __cdecl ElementReactionTimeLimitDamageNumWatcher::~ElementReactionTimeLimitDamageNumWatcher(
        ElementReactionTimeLimitDamageNumWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'ElementReactionTimeLimitDamageNumWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<ElementReactionTimeLimitDamageNumWatcher,ElementReactionStatUpdateEvent,ElementReactionTimeLimitDamageNumWatcherParam>::~ServerWatcher(this);
};

// Line 608: range 0000000014D21F5A-0000000014D21F84
void __cdecl ElementReactionTimeLimitDamageNumWatcher::~ElementReactionTimeLimitDamageNumWatcher(
        ElementReactionTimeLimitDamageNumWatcher *const this)
{
  ElementReactionTimeLimitDamageNumWatcher::~ElementReactionTimeLimitDamageNumWatcher(this);
  operator delete(this, 0x80uLL);
};

// Line 616: range 0000000014CE84A2-0000000014CE84EF
void __cdecl AbilityStatePassTimeWatcher::AbilityStatePassTimeWatcher(AbilityStatePassTimeWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<AbilityStatePassTimeWatcher,AbilityStatePassTimeEvent,AbilityStatePassTimeWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'AbilityStatePassTimeWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 616: range 0000000014D21EE0-0000000014D21F0A
void __cdecl AbilityStatePassTimeWatcher::~AbilityStatePassTimeWatcher(AbilityStatePassTimeWatcher *const this)
{
  AbilityStatePassTimeWatcher::~AbilityStatePassTimeWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 616: range 0000000014D21E92-0000000014D21EDF
void __cdecl AbilityStatePassTimeWatcher::~AbilityStatePassTimeWatcher(AbilityStatePassTimeWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'AbilityStatePassTimeWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<AbilityStatePassTimeWatcher,AbilityStatePassTimeEvent,AbilityStatePassTimeWatcherParam>::~ServerWatcher(this);
};

// Line 622: range 0000000014CE8958-0000000014CE89A5
void __cdecl MaxCriticalDamageWatcher::MaxCriticalDamageWatcher(MaxCriticalDamageWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  RefreshableServerWatcher<MaxCriticalDamageWatcher,RecordMaxCriticalDamageUpdateEvent,MaxCriticalDamageWatcherParam>::RefreshableServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'MaxCriticalDamageWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 622: range 0000000014D21E66-0000000014D21E90
void __cdecl MaxCriticalDamageWatcher::~MaxCriticalDamageWatcher(MaxCriticalDamageWatcher *const this)
{
  MaxCriticalDamageWatcher::~MaxCriticalDamageWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 622: range 0000000014D21E18-0000000014D21E65
void __cdecl MaxCriticalDamageWatcher::~MaxCriticalDamageWatcher(MaxCriticalDamageWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'MaxCriticalDamageWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  RefreshableServerWatcher<MaxCriticalDamageWatcher,RecordMaxCriticalDamageUpdateEvent,MaxCriticalDamageWatcherParam>::~RefreshableServerWatcher(this);
};

// Line 630: range 0000000014CE8E0E-0000000014CE8E5B
void __cdecl FullSatiationTeamAvatarNumWatcher::FullSatiationTeamAvatarNumWatcher(
        FullSatiationTeamAvatarNumWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  RefreshableServerWatcher<FullSatiationTeamAvatarNumWatcher,FullSatiationEvent,FullSatiationTeamAvatarNumWatcherParam>::RefreshableServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'FullSatiationTeamAvatarNumWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 630: range 0000000014D21D9E-0000000014D21DEB
void __cdecl FullSatiationTeamAvatarNumWatcher::~FullSatiationTeamAvatarNumWatcher(
        FullSatiationTeamAvatarNumWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'FullSatiationTeamAvatarNumWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  RefreshableServerWatcher<FullSatiationTeamAvatarNumWatcher,FullSatiationEvent,FullSatiationTeamAvatarNumWatcherParam>::~RefreshableServerWatcher(this);
};

// Line 630: range 0000000014D21DEC-0000000014D21E16
void __cdecl FullSatiationTeamAvatarNumWatcher::~FullSatiationTeamAvatarNumWatcher(
        FullSatiationTeamAvatarNumWatcher *const this)
{
  FullSatiationTeamAvatarNumWatcher::~FullSatiationTeamAvatarNumWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 637: range 0000000014CE91FC-0000000014CE9249
void __cdecl DeliverItemToSalesmanWatcher::DeliverItemToSalesmanWatcher(DeliverItemToSalesmanWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<DeliverItemToSalesmanWatcher,DeliverItemToSalesmanEvent,DeliverItemToSalesmanWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'DeliverItemToSalesmanWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 637: range 0000000014D21D24-0000000014D21D71
void __cdecl DeliverItemToSalesmanWatcher::~DeliverItemToSalesmanWatcher(DeliverItemToSalesmanWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'DeliverItemToSalesmanWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<DeliverItemToSalesmanWatcher,DeliverItemToSalesmanEvent,DeliverItemToSalesmanWatcherParam>::~ServerWatcher(this);
};

// Line 637: range 0000000014D21D72-0000000014D21D9C
void __cdecl DeliverItemToSalesmanWatcher::~DeliverItemToSalesmanWatcher(DeliverItemToSalesmanWatcher *const this)
{
  DeliverItemToSalesmanWatcher::~DeliverItemToSalesmanWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 643: range 0000000014CE96B2-0000000014CE96FF
void __cdecl MaxDashTimeWatcher::MaxDashTimeWatcher(MaxDashTimeWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  RefreshableServerWatcher<MaxDashTimeWatcher,RecordMaxDashTimeUpdateEvent,MaxDashTimeWatcherParam>::RefreshableServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'MaxDashTimeWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 643: range 0000000014D21CAA-0000000014D21CF7
void __cdecl MaxDashTimeWatcher::~MaxDashTimeWatcher(MaxDashTimeWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'MaxDashTimeWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  RefreshableServerWatcher<MaxDashTimeWatcher,RecordMaxDashTimeUpdateEvent,MaxDashTimeWatcherParam>::~RefreshableServerWatcher(this);
};

// Line 643: range 0000000014D21CF8-0000000014D21D22
void __cdecl MaxDashTimeWatcher::~MaxDashTimeWatcher(MaxDashTimeWatcher *const this)
{
  MaxDashTimeWatcher::~MaxDashTimeWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 651: range 0000000014CE9B68-0000000014CE9BB5
void __cdecl MaxFlyTimeWatcher::MaxFlyTimeWatcher(MaxFlyTimeWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  RefreshableServerWatcher<MaxFlyTimeWatcher,RecordMaxFlyTimeUpdateEvent,MaxFlyTimeWatcherParam>::RefreshableServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'MaxFlyTimeWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 651: range 0000000014D21C30-0000000014D21C7D
void __cdecl MaxFlyTimeWatcher::~MaxFlyTimeWatcher(MaxFlyTimeWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'MaxFlyTimeWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  RefreshableServerWatcher<MaxFlyTimeWatcher,RecordMaxFlyTimeUpdateEvent,MaxFlyTimeWatcherParam>::~RefreshableServerWatcher(this);
};

// Line 651: range 0000000014D21C7E-0000000014D21CA8
void __cdecl MaxFlyTimeWatcher::~MaxFlyTimeWatcher(MaxFlyTimeWatcher *const this)
{
  MaxFlyTimeWatcher::~MaxFlyTimeWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 659: range 0000000014CEA01E-0000000014CEA06B
void __cdecl MaxFlyMapDistanceWatcher::MaxFlyMapDistanceWatcher(MaxFlyMapDistanceWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  RefreshableServerWatcher<MaxFlyMapDistanceWatcher,RecordMaxFlyMapDistanceUpdateEvent,MaxFlyMapDistanceWatcherParam>::RefreshableServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'MaxFlyMapDistanceWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 659: range 0000000014D21C04-0000000014D21C2E
void __cdecl MaxFlyMapDistanceWatcher::~MaxFlyMapDistanceWatcher(MaxFlyMapDistanceWatcher *const this)
{
  MaxFlyMapDistanceWatcher::~MaxFlyMapDistanceWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 659: range 0000000014D21BB6-0000000014D21C03
void __cdecl MaxFlyMapDistanceWatcher::~MaxFlyMapDistanceWatcher(MaxFlyMapDistanceWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'MaxFlyMapDistanceWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  RefreshableServerWatcher<MaxFlyMapDistanceWatcher,RecordMaxFlyMapDistanceUpdateEvent,MaxFlyMapDistanceWatcherParam>::~RefreshableServerWatcher(this);
};

// Line 667: range 0000000014CEA40C-0000000014CEA459
void __cdecl SitDownInPointWatcher::SitDownInPointWatcher(SitDownInPointWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<SitDownInPointWatcher,SitDownEvent,SitDownInPointWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'SitDownInPointWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 667: range 0000000014D21B8A-0000000014D21BB4
void __cdecl SitDownInPointWatcher::~SitDownInPointWatcher(SitDownInPointWatcher *const this)
{
  SitDownInPointWatcher::~SitDownInPointWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 667: range 0000000014D21B3C-0000000014D21B89
void __cdecl SitDownInPointWatcher::~SitDownInPointWatcher(SitDownInPointWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'SitDownInPointWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<SitDownInPointWatcher,SitDownEvent,SitDownInPointWatcherParam>::~ServerWatcher(this);
};

// Line 673: range 0000000014CEA7FA-0000000014CEA847
void __cdecl ElementTypeChangeWatcher::ElementTypeChangeWatcher(ElementTypeChangeWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<ElementTypeChangeWatcher,ElementTypeChangeEvent,ElementTypeChangeWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'ElementTypeChangeWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 673: range 0000000014D21B10-0000000014D21B3A
void __cdecl ElementTypeChangeWatcher::~ElementTypeChangeWatcher(ElementTypeChangeWatcher *const this)
{
  ElementTypeChangeWatcher::~ElementTypeChangeWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 673: range 0000000014D21AC2-0000000014D21B0F
void __cdecl ElementTypeChangeWatcher::~ElementTypeChangeWatcher(ElementTypeChangeWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'ElementTypeChangeWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<ElementTypeChangeWatcher,ElementTypeChangeEvent,ElementTypeChangeWatcherParam>::~ServerWatcher(this);
};

// Line 679: range 0000000014CEABE8-0000000014CEAC35
void __cdecl GadgetInteractableWatcher::GadgetInteractableWatcher(GadgetInteractableWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<GadgetInteractableWatcher,GadgetInteractableEvent,GadgetInteractableWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'GadgetInteractableWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 679: range 0000000014D21A48-0000000014D21A95
void __cdecl GadgetInteractableWatcher::~GadgetInteractableWatcher(GadgetInteractableWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'GadgetInteractableWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<GadgetInteractableWatcher,GadgetInteractableEvent,GadgetInteractableWatcherParam>::~ServerWatcher(this);
};

// Line 679: range 0000000014D21A96-0000000014D21AC0
void __cdecl GadgetInteractableWatcher::~GadgetInteractableWatcher(GadgetInteractableWatcher *const this)
{
  GadgetInteractableWatcher::~GadgetInteractableWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 685: range 0000000014CEB09E-0000000014CEB0EB
void __cdecl SkilledAtRecipeWatcher::SkilledAtRecipeWatcher(SkilledAtRecipeWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  RefreshableServerWatcher<SkilledAtRecipeWatcher,SkilledAtRecipeEvent,SkilledAtRecipeWatcherParam>::RefreshableServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'SkilledAtRecipeWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 685: range 0000000014D219CE-0000000014D21A1B
void __cdecl SkilledAtRecipeWatcher::~SkilledAtRecipeWatcher(SkilledAtRecipeWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'SkilledAtRecipeWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  RefreshableServerWatcher<SkilledAtRecipeWatcher,SkilledAtRecipeEvent,SkilledAtRecipeWatcherParam>::~RefreshableServerWatcher(this);
};

// Line 685: range 0000000014D21A1C-0000000014D21A46
void __cdecl SkilledAtRecipeWatcher::~SkilledAtRecipeWatcher(SkilledAtRecipeWatcher *const this)
{
  SkilledAtRecipeWatcher::~SkilledAtRecipeWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 692: range 0000000014CEB48C-0000000014CEB4D9
void __cdecl KilledByCertainMonsterWatcher::KilledByCertainMonsterWatcher(KilledByCertainMonsterWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<KilledByCertainMonsterWatcher,KilledByCertainMonsterEvent,KilledByCertainMonsterWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'KilledByCertainMonsterWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 692: range 0000000014D21954-0000000014D219A1
void __cdecl KilledByCertainMonsterWatcher::~KilledByCertainMonsterWatcher(KilledByCertainMonsterWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'KilledByCertainMonsterWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<KilledByCertainMonsterWatcher,KilledByCertainMonsterEvent,KilledByCertainMonsterWatcherParam>::~ServerWatcher(this);
};

// Line 692: range 0000000014D219A2-0000000014D219CC
void __cdecl KilledByCertainMonsterWatcher::~KilledByCertainMonsterWatcher(KilledByCertainMonsterWatcher *const this)
{
  KilledByCertainMonsterWatcher::~KilledByCertainMonsterWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 699: range 0000000014CEB87A-0000000014CEB8C7
void __cdecl TeleportWithCertainPortalWatcher::TeleportWithCertainPortalWatcher(
        TeleportWithCertainPortalWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<TeleportWithCertainPortalWatcher,TeleportWithCertainPortalEvent,TeleportWithCertainPortalWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'TeleportWithCertainPortalWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 699: range 0000000014D218DA-0000000014D21927
void __cdecl TeleportWithCertainPortalWatcher::~TeleportWithCertainPortalWatcher(
        TeleportWithCertainPortalWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'TeleportWithCertainPortalWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<TeleportWithCertainPortalWatcher,TeleportWithCertainPortalEvent,TeleportWithCertainPortalWatcherParam>::~ServerWatcher(this);
};

// Line 699: range 0000000014D21928-0000000014D21952
void __cdecl TeleportWithCertainPortalWatcher::~TeleportWithCertainPortalWatcher(
        TeleportWithCertainPortalWatcher *const this)
{
  TeleportWithCertainPortalWatcher::~TeleportWithCertainPortalWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 706: range 0000000014CEBD30-0000000014CEBD7D
void __cdecl CollectSetOfReadingsWatcher::CollectSetOfReadingsWatcher(CollectSetOfReadingsWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  RefreshableServerWatcher<CollectSetOfReadingsWatcher,CollectSetOfReadingsEvent,CollectSetOfReadingsWatcherParam>::RefreshableServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'CollectSetOfReadingsWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 706: range 0000000014D21860-0000000014D218AD
void __cdecl CollectSetOfReadingsWatcher::~CollectSetOfReadingsWatcher(CollectSetOfReadingsWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'CollectSetOfReadingsWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  RefreshableServerWatcher<CollectSetOfReadingsWatcher,CollectSetOfReadingsEvent,CollectSetOfReadingsWatcherParam>::~RefreshableServerWatcher(this);
};

// Line 706: range 0000000014D218AE-0000000014D218D8
void __cdecl CollectSetOfReadingsWatcher::~CollectSetOfReadingsWatcher(CollectSetOfReadingsWatcher *const this)
{
  CollectSetOfReadingsWatcher::~CollectSetOfReadingsWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 714: range 0000000014CEC11E-0000000014CEC16B
void __cdecl MpDungeonSucceedWatcher::MpDungeonSucceedWatcher(MpDungeonSucceedWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<MpDungeonSucceedWatcher,MpDungeonSucceedEvent,MpDungeonSucceedWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'MpDungeonSucceedWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 714: range 0000000014D217E6-0000000014D21833
void __cdecl MpDungeonSucceedWatcher::~MpDungeonSucceedWatcher(MpDungeonSucceedWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'MpDungeonSucceedWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<MpDungeonSucceedWatcher,MpDungeonSucceedEvent,MpDungeonSucceedWatcherParam>::~ServerWatcher(this);
};

// Line 714: range 0000000014D21834-0000000014D2185E
void __cdecl MpDungeonSucceedWatcher::~MpDungeonSucceedWatcher(MpDungeonSucceedWatcher *const this)
{
  MpDungeonSucceedWatcher::~MpDungeonSucceedWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 721: range 0000000014CEC50C-0000000014CEC559
void __cdecl MpKillMonsterNumWatcher::MpKillMonsterNumWatcher(MpKillMonsterNumWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<MpKillMonsterNumWatcher,MpKillMonsterNumEvent,MpKillMonsterNumWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'MpKillMonsterNumWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 721: range 0000000014D2176C-0000000014D217B9
void __cdecl MpKillMonsterNumWatcher::~MpKillMonsterNumWatcher(MpKillMonsterNumWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'MpKillMonsterNumWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<MpKillMonsterNumWatcher,MpKillMonsterNumEvent,MpKillMonsterNumWatcherParam>::~ServerWatcher(this);
};

// Line 721: range 0000000014D217BA-0000000014D217E4
void __cdecl MpKillMonsterNumWatcher::~MpKillMonsterNumWatcher(MpKillMonsterNumWatcher *const this)
{
  MpKillMonsterNumWatcher::~MpKillMonsterNumWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 728: range 0000000014CEC8FA-0000000014CEC947
void __cdecl MpAreaGatherTimesWatcher::MpAreaGatherTimesWatcher(MpAreaGatherTimesWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<MpAreaGatherTimesWatcher,MpAreaGatherTimesEvent,MpAreaGatherTimesWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'MpAreaGatherTimesWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 728: range 0000000014D21740-0000000014D2176A
void __cdecl MpAreaGatherTimesWatcher::~MpAreaGatherTimesWatcher(MpAreaGatherTimesWatcher *const this)
{
  MpAreaGatherTimesWatcher::~MpAreaGatherTimesWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 728: range 0000000014D216F2-0000000014D2173F
void __cdecl MpAreaGatherTimesWatcher::~MpAreaGatherTimesWatcher(MpAreaGatherTimesWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'MpAreaGatherTimesWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<MpAreaGatherTimesWatcher,MpAreaGatherTimesEvent,MpAreaGatherTimesWatcherParam>::~ServerWatcher(this);
};

// Line 735: range 0000000014CECDB0-0000000014CECDFD
void __cdecl DoneTowerStarsWatcher::DoneTowerStarsWatcher(DoneTowerStarsWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  RefreshableServerWatcher<DoneTowerStarsWatcher,DoneTowerStarsEvent,DoneTowerStarsWatcherParam>::RefreshableServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'DoneTowerStarsWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 735: range 0000000014D216C6-0000000014D216F0
void __cdecl DoneTowerStarsWatcher::~DoneTowerStarsWatcher(DoneTowerStarsWatcher *const this)
{
  DoneTowerStarsWatcher::~DoneTowerStarsWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 735: range 0000000014D21678-0000000014D216C5
void __cdecl DoneTowerStarsWatcher::~DoneTowerStarsWatcher(DoneTowerStarsWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'DoneTowerStarsWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  RefreshableServerWatcher<DoneTowerStarsWatcher,DoneTowerStarsEvent,DoneTowerStarsWatcherParam>::~RefreshableServerWatcher(this);
};

// Line 743: range 0000000014CED19E-0000000014CED1EB
void __cdecl DoneTowerUnhurtWatcher::DoneTowerUnhurtWatcher(DoneTowerUnhurtWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<DoneTowerUnhurtWatcher,DoneTowerUnhurtEvent,DoneTowerUnhurtWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'DoneTowerUnhurtWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 743: range 0000000014D2164C-0000000014D21676
void __cdecl DoneTowerUnhurtWatcher::~DoneTowerUnhurtWatcher(DoneTowerUnhurtWatcher *const this)
{
  DoneTowerUnhurtWatcher::~DoneTowerUnhurtWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 743: range 0000000014D215FE-0000000014D2164B
void __cdecl DoneTowerUnhurtWatcher::~DoneTowerUnhurtWatcher(DoneTowerUnhurtWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'DoneTowerUnhurtWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<DoneTowerUnhurtWatcher,DoneTowerUnhurtEvent,DoneTowerUnhurtWatcherParam>::~ServerWatcher(this);
};

// Line 749: range 0000000014CED58C-0000000014CED5D9
void __cdecl DoneTowerGadgetUnhurtWatcher::DoneTowerGadgetUnhurtWatcher(DoneTowerGadgetUnhurtWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<DoneTowerGadgetUnhurtWatcher,DoneTowerGadgetUnhurtEvent,DoneTowerGadgetUnhurtWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'DoneTowerGadgetUnhurtWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 749: range 0000000014D215D2-0000000014D215FC
void __cdecl DoneTowerGadgetUnhurtWatcher::~DoneTowerGadgetUnhurtWatcher(DoneTowerGadgetUnhurtWatcher *const this)
{
  DoneTowerGadgetUnhurtWatcher::~DoneTowerGadgetUnhurtWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 749: range 0000000014D21584-0000000014D215D1
void __cdecl DoneTowerGadgetUnhurtWatcher::~DoneTowerGadgetUnhurtWatcher(DoneTowerGadgetUnhurtWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'DoneTowerGadgetUnhurtWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<DoneTowerGadgetUnhurtWatcher,DoneTowerGadgetUnhurtEvent,DoneTowerGadgetUnhurtWatcherParam>::~ServerWatcher(this);
};

// Line 755: range 0000000014CED97A-0000000014CED9C7
void __cdecl DoneDungeonWithSameElementAvatarsWatcher::DoneDungeonWithSameElementAvatarsWatcher(
        DoneDungeonWithSameElementAvatarsWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<DoneDungeonWithSameElementAvatarsWatcher,DoneDungeonWithSameElementAvatarsEvent,DoneDungeonWithSameElementAvatarsWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'DoneDungeonWithSameElementAvatarsWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 755: range 0000000014D21558-0000000014D21582
void __cdecl DoneDungeonWithSameElementAvatarsWatcher::~DoneDungeonWithSameElementAvatarsWatcher(
        DoneDungeonWithSameElementAvatarsWatcher *const this)
{
  DoneDungeonWithSameElementAvatarsWatcher::~DoneDungeonWithSameElementAvatarsWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 755: range 0000000014D2150A-0000000014D21557
void __cdecl DoneDungeonWithSameElementAvatarsWatcher::~DoneDungeonWithSameElementAvatarsWatcher(
        DoneDungeonWithSameElementAvatarsWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'DoneDungeonWithSameElementAvatarsWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<DoneDungeonWithSameElementAvatarsWatcher,DoneDungeonWithSameElementAvatarsEvent,DoneDungeonWithSameElementAvatarsWatcherParam>::~ServerWatcher(this);
};

// Line 761: range 0000000014CEDD68-0000000014CEDDB5
void __cdecl FlyWatcher::FlyWatcher(FlyWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<FlyWatcher,TimeIntervalFlyEvent,FlyWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'FlyWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 761: range 0000000014D21490-0000000014D214DD
void __cdecl FlyWatcher::~FlyWatcher(FlyWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'FlyWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<FlyWatcher,TimeIntervalFlyEvent,FlyWatcherParam>::~ServerWatcher(this);
};

// Line 761: range 0000000014D214DE-0000000014D21508
void __cdecl FlyWatcher::~FlyWatcher(FlyWatcher *const this)
{
  FlyWatcher::~FlyWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 767: range 0000000014CEE156-0000000014CEE1A3
void __cdecl DashWatcher::DashWatcher(DashWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<DashWatcher,TimeIntervalDashEvent,DashWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'DashWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 767: range 0000000014D21464-0000000014D2148E
void __cdecl DashWatcher::~DashWatcher(DashWatcher *const this)
{
  DashWatcher::~DashWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 767: range 0000000014D21416-0000000014D21463
void __cdecl DashWatcher::~DashWatcher(DashWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'DashWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<DashWatcher,TimeIntervalDashEvent,DashWatcherParam>::~ServerWatcher(this);
};

// Line 772: range 0000000014CEE544-0000000014CEE591
void __cdecl ClimbWatcher::ClimbWatcher(ClimbWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<ClimbWatcher,TimeIntervalClimbEvent,ClimbWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'ClimbWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 772: range 0000000014D213EA-0000000014D21414
void __cdecl ClimbWatcher::~ClimbWatcher(ClimbWatcher *const this)
{
  ClimbWatcher::~ClimbWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 772: range 0000000014D2139C-0000000014D213E9
void __cdecl ClimbWatcher::~ClimbWatcher(ClimbWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'ClimbWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<ClimbWatcher,TimeIntervalClimbEvent,ClimbWatcherParam>::~ServerWatcher(this);
};

// Line 778: range 0000000014CEE932-0000000014CEE97F
void __cdecl CurAvatarHurtWatcher::CurAvatarHurtWatcher(CurAvatarHurtWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<CurAvatarHurtWatcher,TimeIntervalHurtEvent,CurAvatarHurtWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'CurAvatarHurtWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 778: range 0000000014D21322-0000000014D2136F
void __cdecl CurAvatarHurtWatcher::~CurAvatarHurtWatcher(CurAvatarHurtWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'CurAvatarHurtWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<CurAvatarHurtWatcher,TimeIntervalHurtEvent,CurAvatarHurtWatcherParam>::~ServerWatcher(this);
};

// Line 778: range 0000000014D21370-0000000014D2139A
void __cdecl CurAvatarHurtWatcher::~CurAvatarHurtWatcher(CurAvatarHurtWatcher *const this)
{
  CurAvatarHurtWatcher::~CurAvatarHurtWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 784: range 0000000014CEED20-0000000014CEED6D
void __cdecl CurAvatarAbilityStateWatcher::CurAvatarAbilityStateWatcher(CurAvatarAbilityStateWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<CurAvatarAbilityStateWatcher,TimeIntervalAbilityStateEvent,CurAvatarAbilityStateWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'CurAvatarAbilityStateWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 784: range 0000000014D212F6-0000000014D21320
void __cdecl CurAvatarAbilityStateWatcher::~CurAvatarAbilityStateWatcher(CurAvatarAbilityStateWatcher *const this)
{
  CurAvatarAbilityStateWatcher::~CurAvatarAbilityStateWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 784: range 0000000014D212A8-0000000014D212F5
void __cdecl CurAvatarAbilityStateWatcher::~CurAvatarAbilityStateWatcher(CurAvatarAbilityStateWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'CurAvatarAbilityStateWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<CurAvatarAbilityStateWatcher,TimeIntervalAbilityStateEvent,CurAvatarAbilityStateWatcherParam>::~ServerWatcher(this);
};

// Line 790: range 0000000014CEF10E-0000000014CEF15B
void __cdecl GroupFlightChallengeReachPointsWatcher::GroupFlightChallengeReachPointsWatcher(
        GroupFlightChallengeReachPointsWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<GroupFlightChallengeReachPointsWatcher,GroupFlightChallengeReachPointsEvent,GroupFlightChallengeReachPointsWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'GroupFlightChallengeReachPointsWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 790: range 0000000014D2127C-0000000014D212A6
void __cdecl GroupFlightChallengeReachPointsWatcher::~GroupFlightChallengeReachPointsWatcher(
        GroupFlightChallengeReachPointsWatcher *const this)
{
  GroupFlightChallengeReachPointsWatcher::~GroupFlightChallengeReachPointsWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 790: range 0000000014D2122E-0000000014D2127B
void __cdecl GroupFlightChallengeReachPointsWatcher::~GroupFlightChallengeReachPointsWatcher(
        GroupFlightChallengeReachPointsWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'GroupFlightChallengeReachPointsWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<GroupFlightChallengeReachPointsWatcher,GroupFlightChallengeReachPointsEvent,GroupFlightChallengeReachPointsWatcherParam>::~ServerWatcher(this);
};

// Line 797: range 0000000014CEFDA0-0000000014CEFDED
void __cdecl CityReputationLevelWatcher::CityReputationLevelWatcher(CityReputationLevelWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  RefreshableServerWatcher<CityReputationLevelWatcher,CityReputationLevelup,CityReputationLevelWatcherParam>::RefreshableServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'CityReputationLevelWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 797: range 0000000014D211B4-0000000014D21201
void __cdecl CityReputationLevelWatcher::~CityReputationLevelWatcher(CityReputationLevelWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'CityReputationLevelWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  RefreshableServerWatcher<CityReputationLevelWatcher,CityReputationLevelup,CityReputationLevelWatcherParam>::~RefreshableServerWatcher(this);
};

// Line 797: range 0000000014D21202-0000000014D2122C
void __cdecl CityReputationLevelWatcher::~CityReputationLevelWatcher(CityReputationLevelWatcher *const this)
{
  CityReputationLevelWatcher::~CityReputationLevelWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 805: range 0000000014CEF4FC-0000000014CEF549
void __cdecl FinishSpecifiedTypeBlossomWatcher::FinishSpecifiedTypeBlossomWatcher(
        FinishSpecifiedTypeBlossomWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<FinishSpecifiedTypeBlossomWatcher,FinishBlossomProgressEvent,FinishSpecifiedTypeBlossomWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'FinishSpecifiedTypeBlossomWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 805: range 0000000014D2113A-0000000014D21187
void __cdecl FinishSpecifiedTypeBlossomWatcher::~FinishSpecifiedTypeBlossomWatcher(
        FinishSpecifiedTypeBlossomWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'FinishSpecifiedTypeBlossomWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<FinishSpecifiedTypeBlossomWatcher,FinishBlossomProgressEvent,FinishSpecifiedTypeBlossomWatcherParam>::~ServerWatcher(this);
};

// Line 805: range 0000000014D21188-0000000014D211B2
void __cdecl FinishSpecifiedTypeBlossomWatcher::~FinishSpecifiedTypeBlossomWatcher(
        FinishSpecifiedTypeBlossomWatcher *const this)
{
  FinishSpecifiedTypeBlossomWatcher::~FinishSpecifiedTypeBlossomWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 812: range 0000000014CEF8EA-0000000014CEF937
void __cdecl FinishBlossomGroupVariableGTWatcher::FinishBlossomGroupVariableGTWatcher(
        FinishBlossomGroupVariableGTWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<FinishBlossomGroupVariableGTWatcher,FinishBlossomProgressEvent,FinishBlossomGroupVariableGTWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'FinishBlossomGroupVariableGTWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 812: range 0000000014D210C0-0000000014D2110D
void __cdecl FinishBlossomGroupVariableGTWatcher::~FinishBlossomGroupVariableGTWatcher(
        FinishBlossomGroupVariableGTWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'FinishBlossomGroupVariableGTWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<FinishBlossomGroupVariableGTWatcher,FinishBlossomProgressEvent,FinishBlossomGroupVariableGTWatcherParam>::~ServerWatcher(this);
};

// Line 812: range 0000000014D2110E-0000000014D21138
void __cdecl FinishBlossomGroupVariableGTWatcher::~FinishBlossomGroupVariableGTWatcher(
        FinishBlossomGroupVariableGTWatcher *const this)
{
  FinishBlossomGroupVariableGTWatcher::~FinishBlossomGroupVariableGTWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 819: range 0000000014CF018E-0000000014CF01DB
void __cdecl CityReputationFinishRequestWatcher::CityReputationFinishRequestWatcher(
        CityReputationFinishRequestWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<CityReputationFinishRequestWatcher,CityReputationFinishRequest,CityReputationFinishRequestWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'CityReputationFinishRequestWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 819: range 0000000014D21046-0000000014D21093
void __cdecl CityReputationFinishRequestWatcher::~CityReputationFinishRequestWatcher(
        CityReputationFinishRequestWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'CityReputationFinishRequestWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<CityReputationFinishRequestWatcher,CityReputationFinishRequest,CityReputationFinishRequestWatcherParam>::~ServerWatcher(this);
};

// Line 819: range 0000000014D21094-0000000014D210BE
void __cdecl CityReputationFinishRequestWatcher::~CityReputationFinishRequestWatcher(
        CityReputationFinishRequestWatcher *const this)
{
  CityReputationFinishRequestWatcher::~CityReputationFinishRequestWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 826: range 0000000014CF057C-0000000014CF05C9
void __cdecl BattleForMonsterDieAndWatcher::BattleForMonsterDieAndWatcher(BattleForMonsterDieAndWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<BattleForMonsterDieAndWatcher,MonsterBeKilledByHateListEvent,BattleForMonsterDieAndWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'BattleForMonsterDieAndWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 826: range 0000000014D2101A-0000000014D21044
void __cdecl BattleForMonsterDieAndWatcher::~BattleForMonsterDieAndWatcher(BattleForMonsterDieAndWatcher *const this)
{
  BattleForMonsterDieAndWatcher::~BattleForMonsterDieAndWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 826: range 0000000014D20FCC-0000000014D21019
void __cdecl BattleForMonsterDieAndWatcher::~BattleForMonsterDieAndWatcher(BattleForMonsterDieAndWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'BattleForMonsterDieAndWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<BattleForMonsterDieAndWatcher,MonsterBeKilledByHateListEvent,BattleForMonsterDieAndWatcherParam>::~ServerWatcher(this);
};

// Line 834: range 0000000014CF096A-0000000014CF09B7
void __cdecl BattleForMonsterDieOrWatcher::BattleForMonsterDieOrWatcher(BattleForMonsterDieOrWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<BattleForMonsterDieOrWatcher,MonsterBeKilledByHateListEvent,BattleForMonsterDieOrWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'BattleForMonsterDieOrWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 834: range 0000000014D20FA0-0000000014D20FCA
void __cdecl BattleForMonsterDieOrWatcher::~BattleForMonsterDieOrWatcher(BattleForMonsterDieOrWatcher *const this)
{
  BattleForMonsterDieOrWatcher::~BattleForMonsterDieOrWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 834: range 0000000014D20F52-0000000014D20F9F
void __cdecl BattleForMonsterDieOrWatcher::~BattleForMonsterDieOrWatcher(BattleForMonsterDieOrWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'BattleForMonsterDieOrWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<BattleForMonsterDieOrWatcher,MonsterBeKilledByHateListEvent,BattleForMonsterDieOrWatcherParam>::~ServerWatcher(this);
};

// Line 841: range 0000000014CF0D58-0000000014CF0DD6
void __cdecl UseEnergySkillNumTimeLimitWatcher::UseEnergySkillNumTimeLimitWatcher(
        UseEnergySkillNumTimeLimitWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<UseEnergySkillNumTimeLimitWatcher,SkillStatUpdateEvent,UseEnergySkillNumTimeLimitWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'UseEnergySkillNumTimeLimitWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_time_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->last_time_ms_, v1);
  this->last_time_ms_ = 0LL;
};

// Line 841: range 0000000014D20ED8-0000000014D20F25
void __cdecl UseEnergySkillNumTimeLimitWatcher::~UseEnergySkillNumTimeLimitWatcher(
        UseEnergySkillNumTimeLimitWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'UseEnergySkillNumTimeLimitWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<UseEnergySkillNumTimeLimitWatcher,SkillStatUpdateEvent,UseEnergySkillNumTimeLimitWatcherParam>::~ServerWatcher(this);
};

// Line 841: range 0000000014D20F26-0000000014D20F50
void __cdecl UseEnergySkillNumTimeLimitWatcher::~UseEnergySkillNumTimeLimitWatcher(
        UseEnergySkillNumTimeLimitWatcher *const this)
{
  UseEnergySkillNumTimeLimitWatcher::~UseEnergySkillNumTimeLimitWatcher(this);
  operator delete(this, 0x80uLL);
};

// Line 849: range 0000000014CF1178-0000000014CF11C5
void __cdecl ShieldSourceNumWatcher::ShieldSourceNumWatcher(ShieldSourceNumWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<ShieldSourceNumWatcher,ShieldSourceNumUpdateEvent,ShieldSourceNumWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'ShieldSourceNumWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 849: range 0000000014D20EAC-0000000014D20ED6
void __cdecl ShieldSourceNumWatcher::~ShieldSourceNumWatcher(ShieldSourceNumWatcher *const this)
{
  ShieldSourceNumWatcher::~ShieldSourceNumWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 849: range 0000000014D20E5E-0000000014D20EAB
void __cdecl ShieldSourceNumWatcher::~ShieldSourceNumWatcher(ShieldSourceNumWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'ShieldSourceNumWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<ShieldSourceNumWatcher,ShieldSourceNumUpdateEvent,ShieldSourceNumWatcherParam>::~ServerWatcher(this);
};

// Line 856: range 0000000014CF162E-0000000014CF167B
void __cdecl SpecifiedWeaponAwakenWatcher::SpecifiedWeaponAwakenWatcher(SpecifiedWeaponAwakenWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  RefreshableServerWatcher<SpecifiedWeaponAwakenWatcher,WeaponAwakenEvent,SpecifiedWeaponAwakenWatcherParam>::RefreshableServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'SpecifiedWeaponAwakenWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 856: range 0000000014D20E32-0000000014D20E5C
void __cdecl SpecifiedWeaponAwakenWatcher::~SpecifiedWeaponAwakenWatcher(SpecifiedWeaponAwakenWatcher *const this)
{
  SpecifiedWeaponAwakenWatcher::~SpecifiedWeaponAwakenWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 856: range 0000000014D20DE4-0000000014D20E31
void __cdecl SpecifiedWeaponAwakenWatcher::~SpecifiedWeaponAwakenWatcher(SpecifiedWeaponAwakenWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'SpecifiedWeaponAwakenWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  RefreshableServerWatcher<SpecifiedWeaponAwakenWatcher,WeaponAwakenEvent,SpecifiedWeaponAwakenWatcherParam>::~RefreshableServerWatcher(this);
};

// Line 864: range 0000000014CF1A1C-0000000014CF1A69
void __cdecl TowerStarsNumWatcher::TowerStarsNumWatcher(TowerStarsNumWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<TowerStarsNumWatcher,DoneTowerStarsEvent,TowerStarsNumWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'TowerStarsNumWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 864: range 0000000014D20D6A-0000000014D20DB7
void __cdecl TowerStarsNumWatcher::~TowerStarsNumWatcher(TowerStarsNumWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'TowerStarsNumWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<TowerStarsNumWatcher,DoneTowerStarsEvent,TowerStarsNumWatcherParam>::~ServerWatcher(this);
};

// Line 864: range 0000000014D20DB8-0000000014D20DE2
void __cdecl TowerStarsNumWatcher::~TowerStarsNumWatcher(TowerStarsNumWatcher *const this)
{
  TowerStarsNumWatcher::~TowerStarsNumWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 871: range 0000000014CF1E0A-0000000014CF1E57
void __cdecl FinishSpecifiedTypeBlossomClimateMeterWatcher::FinishSpecifiedTypeBlossomClimateMeterWatcher(
        FinishSpecifiedTypeBlossomClimateMeterWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<FinishSpecifiedTypeBlossomClimateMeterWatcher,FinishBlossomProgressEvent,FinishSpecifiedTypeBlossomClimateMeterWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'FinishSpecifiedTypeBlossomClimateMeterWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 871: range 0000000014D20D3E-0000000014D20D68
void __cdecl FinishSpecifiedTypeBlossomClimateMeterWatcher::~FinishSpecifiedTypeBlossomClimateMeterWatcher(
        FinishSpecifiedTypeBlossomClimateMeterWatcher *const this)
{
  FinishSpecifiedTypeBlossomClimateMeterWatcher::~FinishSpecifiedTypeBlossomClimateMeterWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 871: range 0000000014D20CF0-0000000014D20D3D
void __cdecl FinishSpecifiedTypeBlossomClimateMeterWatcher::~FinishSpecifiedTypeBlossomClimateMeterWatcher(
        FinishSpecifiedTypeBlossomClimateMeterWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'FinishSpecifiedTypeBlossomClimateMeterWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<FinishSpecifiedTypeBlossomClimateMeterWatcher,FinishBlossomProgressEvent,FinishSpecifiedTypeBlossomClimateMeterWatcherParam>::~ServerWatcher(this);
};

// Line 878: range 0000000014CF22C0-0000000014CF230D
void __cdecl OfferingLevelWatcher::OfferingLevelWatcher(OfferingLevelWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  RefreshableServerWatcher<OfferingLevelWatcher,OfferingLevelupEvent,OfferingLevelWatcherParam>::RefreshableServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'OfferingLevelWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 878: range 0000000014D20C76-0000000014D20CC3
void __cdecl OfferingLevelWatcher::~OfferingLevelWatcher(OfferingLevelWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'OfferingLevelWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  RefreshableServerWatcher<OfferingLevelWatcher,OfferingLevelupEvent,OfferingLevelWatcherParam>::~RefreshableServerWatcher(this);
};

// Line 878: range 0000000014D20CC4-0000000014D20CEE
void __cdecl OfferingLevelWatcher::~OfferingLevelWatcher(OfferingLevelWatcher *const this)
{
  OfferingLevelWatcher::~OfferingLevelWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 886: range 0000000014CF2776-0000000014CF27C3
void __cdecl UnlockSpecificRecipeOrWatcher::UnlockSpecificRecipeOrWatcher(UnlockSpecificRecipeOrWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  RefreshableServerWatcher<UnlockSpecificRecipeOrWatcher,UnlockRecipeEvent,UnlockSpecificRecipeOrWatcherParam>::RefreshableServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'UnlockSpecificRecipeOrWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 886: range 0000000014D20C4A-0000000014D20C74
void __cdecl UnlockSpecificRecipeOrWatcher::~UnlockSpecificRecipeOrWatcher(UnlockSpecificRecipeOrWatcher *const this)
{
  UnlockSpecificRecipeOrWatcher::~UnlockSpecificRecipeOrWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 886: range 0000000014D20BFC-0000000014D20C49
void __cdecl UnlockSpecificRecipeOrWatcher::~UnlockSpecificRecipeOrWatcher(UnlockSpecificRecipeOrWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'UnlockSpecificRecipeOrWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  RefreshableServerWatcher<UnlockSpecificRecipeOrWatcher,UnlockRecipeEvent,UnlockSpecificRecipeOrWatcherParam>::~RefreshableServerWatcher(this);
};

// Line 894: range 0000000014CF2B64-0000000014CF2BB1
void __cdecl CurAvatarHurtBySpecificAbilityWatcher::CurAvatarHurtBySpecificAbilityWatcher(
        CurAvatarHurtBySpecificAbilityWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<CurAvatarHurtBySpecificAbilityWatcher,TimeIntervalHurtByAbilityEvent,CurAvatarHurtBySpecificAbilityWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'CurAvatarHurtBySpecificAbilityWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 894: range 0000000014D20BD0-0000000014D20BFA
void __cdecl CurAvatarHurtBySpecificAbilityWatcher::~CurAvatarHurtBySpecificAbilityWatcher(
        CurAvatarHurtBySpecificAbilityWatcher *const this)
{
  CurAvatarHurtBySpecificAbilityWatcher::~CurAvatarHurtBySpecificAbilityWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 894: range 0000000014D20B82-0000000014D20BCF
void __cdecl CurAvatarHurtBySpecificAbilityWatcher::~CurAvatarHurtBySpecificAbilityWatcher(
        CurAvatarHurtBySpecificAbilityWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'CurAvatarHurtBySpecificAbilityWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<CurAvatarHurtBySpecificAbilityWatcher,TimeIntervalHurtByAbilityEvent,CurAvatarHurtBySpecificAbilityWatcherParam>::~ServerWatcher(this);
};

// Line 901: range 0000000014CF2F52-0000000014CF2F9F
void __cdecl KilledBySpecificAbilityWatcher::KilledBySpecificAbilityWatcher(KilledBySpecificAbilityWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<KilledBySpecificAbilityWatcher,KilledBySpecificAbilityEvent,KilledBySpecificAbilityWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'KilledBySpecificAbilityWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 901: range 0000000014D20B08-0000000014D20B55
void __cdecl KilledBySpecificAbilityWatcher::~KilledBySpecificAbilityWatcher(
        KilledBySpecificAbilityWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'KilledBySpecificAbilityWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<KilledBySpecificAbilityWatcher,KilledBySpecificAbilityEvent,KilledBySpecificAbilityWatcherParam>::~ServerWatcher(this);
};

// Line 901: range 0000000014D20B56-0000000014D20B80
void __cdecl KilledBySpecificAbilityWatcher::~KilledBySpecificAbilityWatcher(
        KilledBySpecificAbilityWatcher *const this)
{
  KilledBySpecificAbilityWatcher::~KilledBySpecificAbilityWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 908: range 0000000014CF3340-0000000014CF338D
void __cdecl MiracleRingDeliverItemWatcher::MiracleRingDeliverItemWatcher(MiracleRingDeliverItemWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<MiracleRingDeliverItemWatcher,MiracleRingDeliverItemEvent,MiracleRingDeliverItemWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'MiracleRingDeliverItemWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 908: range 0000000014D20A8E-0000000014D20ADB
void __cdecl MiracleRingDeliverItemWatcher::~MiracleRingDeliverItemWatcher(MiracleRingDeliverItemWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'MiracleRingDeliverItemWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<MiracleRingDeliverItemWatcher,MiracleRingDeliverItemEvent,MiracleRingDeliverItemWatcherParam>::~ServerWatcher(this);
};

// Line 908: range 0000000014D20ADC-0000000014D20B06
void __cdecl MiracleRingDeliverItemWatcher::~MiracleRingDeliverItemWatcher(MiracleRingDeliverItemWatcher *const this)
{
  MiracleRingDeliverItemWatcher::~MiracleRingDeliverItemWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 915: range 0000000014CF372E-0000000014CF377B
void __cdecl MiracleRingTakeRewardWatcher::MiracleRingTakeRewardWatcher(MiracleRingTakeRewardWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<MiracleRingTakeRewardWatcher,MiracleRingTakeRewardEvent,MiracleRingTakeRewardWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'MiracleRingTakeRewardWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 915: range 0000000014D20A62-0000000014D20A8C
void __cdecl MiracleRingTakeRewardWatcher::~MiracleRingTakeRewardWatcher(MiracleRingTakeRewardWatcher *const this)
{
  MiracleRingTakeRewardWatcher::~MiracleRingTakeRewardWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 915: range 0000000014D20A14-0000000014D20A61
void __cdecl MiracleRingTakeRewardWatcher::~MiracleRingTakeRewardWatcher(MiracleRingTakeRewardWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'MiracleRingTakeRewardWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<MiracleRingTakeRewardWatcher,MiracleRingTakeRewardEvent,MiracleRingTakeRewardWatcherParam>::~ServerWatcher(this);
};

// Line 922: range 0000000014CF3B1C-0000000014CF3B69
void __cdecl MainCoopSavePointAndWatcher::MainCoopSavePointAndWatcher(MainCoopSavePointAndWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<MainCoopSavePointAndWatcher,MainCoopSavePointAndEvent,MainCoopSavePointAndWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'MainCoopSavePointAndWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 922: range 0000000014D2099A-0000000014D209E7
void __cdecl MainCoopSavePointAndWatcher::~MainCoopSavePointAndWatcher(MainCoopSavePointAndWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'MainCoopSavePointAndWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<MainCoopSavePointAndWatcher,MainCoopSavePointAndEvent,MainCoopSavePointAndWatcherParam>::~ServerWatcher(this);
};

// Line 922: range 0000000014D209E8-0000000014D20A12
void __cdecl MainCoopSavePointAndWatcher::~MainCoopSavePointAndWatcher(MainCoopSavePointAndWatcher *const this)
{
  MainCoopSavePointAndWatcher::~MainCoopSavePointAndWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 930: range 0000000014CF3F0A-0000000014CF3F57
void __cdecl MainCoopSavePointOrWatcher::MainCoopSavePointOrWatcher(MainCoopSavePointOrWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<MainCoopSavePointOrWatcher,MainCoopSavePointOrEvent,MainCoopSavePointOrWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'MainCoopSavePointOrWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 930: range 0000000014D20920-0000000014D2096D
void __cdecl MainCoopSavePointOrWatcher::~MainCoopSavePointOrWatcher(MainCoopSavePointOrWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'MainCoopSavePointOrWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<MainCoopSavePointOrWatcher,MainCoopSavePointOrEvent,MainCoopSavePointOrWatcherParam>::~ServerWatcher(this);
};

// Line 930: range 0000000014D2096E-0000000014D20998
void __cdecl MainCoopSavePointOrWatcher::~MainCoopSavePointOrWatcher(MainCoopSavePointOrWatcher *const this)
{
  MainCoopSavePointOrWatcher::~MainCoopSavePointOrWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 937: range 0000000014CF42F8-0000000014CF4345
void __cdecl MainCoopVarEqualWatcher::MainCoopVarEqualWatcher(MainCoopVarEqualWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<MainCoopVarEqualWatcher,MainCoopVarEqualEvent,MainCoopVarEqualWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'MainCoopVarEqualWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 937: range 0000000014D208A6-0000000014D208F3
void __cdecl MainCoopVarEqualWatcher::~MainCoopVarEqualWatcher(MainCoopVarEqualWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'MainCoopVarEqualWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<MainCoopVarEqualWatcher,MainCoopVarEqualEvent,MainCoopVarEqualWatcherParam>::~ServerWatcher(this);
};

// Line 937: range 0000000014D208F4-0000000014D2091E
void __cdecl MainCoopVarEqualWatcher::~MainCoopVarEqualWatcher(MainCoopVarEqualWatcher *const this)
{
  MainCoopVarEqualWatcher::~MainCoopVarEqualWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 943: range 0000000014CF47AE-0000000014CF47FB
void __cdecl ObtainWoodTypeWatcher::ObtainWoodTypeWatcher(ObtainWoodTypeWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  RefreshableServerWatcher<ObtainWoodTypeWatcher,ObtainWoodEvent,ObtainWoodTypeWatcherParam>::RefreshableServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'ObtainWoodTypeWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 943: range 0000000014D2082C-0000000014D20879
void __cdecl ObtainWoodTypeWatcher::~ObtainWoodTypeWatcher(ObtainWoodTypeWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'ObtainWoodTypeWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  RefreshableServerWatcher<ObtainWoodTypeWatcher,ObtainWoodEvent,ObtainWoodTypeWatcherParam>::~RefreshableServerWatcher(this);
};

// Line 943: range 0000000014D2087A-0000000014D208A4
void __cdecl ObtainWoodTypeWatcher::~ObtainWoodTypeWatcher(ObtainWoodTypeWatcher *const this)
{
  ObtainWoodTypeWatcher::~ObtainWoodTypeWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 950: range 0000000014CF4B9C-0000000014CF4BE9
void __cdecl ObtainWoodWatcher::ObtainWoodWatcher(ObtainWoodWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<ObtainWoodWatcher,ObtainWoodEvent,ObtainWoodWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'ObtainWoodWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 950: range 0000000014D207B2-0000000014D207FF
void __cdecl ObtainWoodWatcher::~ObtainWoodWatcher(ObtainWoodWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'ObtainWoodWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<ObtainWoodWatcher,ObtainWoodEvent,ObtainWoodWatcherParam>::~ServerWatcher(this);
};

// Line 950: range 0000000014D20800-0000000014D2082A
void __cdecl ObtainWoodWatcher::~ObtainWoodWatcher(ObtainWoodWatcher *const this)
{
  ObtainWoodWatcher::~ObtainWoodWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 957: range 0000000014CF4F8A-0000000014CF4FD7
void __cdecl FinishDungeonAndChallengeRemainTimeGreaterWatcher::FinishDungeonAndChallengeRemainTimeGreaterWatcher(
        FinishDungeonAndChallengeRemainTimeGreaterWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<FinishDungeonAndChallengeRemainTimeGreaterWatcher,FinishDungeonEvent,FinishDungeonAndChallengeRemainTimeGreaterWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'FinishDungeonAndChallengeRemainTimeGreaterWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 957: range 0000000014D20786-0000000014D207B0
void __cdecl FinishDungeonAndChallengeRemainTimeGreaterWatcher::~FinishDungeonAndChallengeRemainTimeGreaterWatcher(
        FinishDungeonAndChallengeRemainTimeGreaterWatcher *const this)
{
  FinishDungeonAndChallengeRemainTimeGreaterWatcher::~FinishDungeonAndChallengeRemainTimeGreaterWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 957: range 0000000014D20738-0000000014D20785
void __cdecl FinishDungeonAndChallengeRemainTimeGreaterWatcher::~FinishDungeonAndChallengeRemainTimeGreaterWatcher(
        FinishDungeonAndChallengeRemainTimeGreaterWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'FinishDungeonAndChallengeRemainTimeGreaterWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<FinishDungeonAndChallengeRemainTimeGreaterWatcher,FinishDungeonEvent,FinishDungeonAndChallengeRemainTimeGreaterWatcherParam>::~ServerWatcher(this);
};

// Line 964: range 0000000014CF5440-0000000014CF548D
void __cdecl ActivityChannellerSlabFinishAllCampWatcher::ActivityChannellerSlabFinishAllCampWatcher(
        ActivityChannellerSlabFinishAllCampWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  RefreshableServerWatcher<ActivityChannellerSlabFinishAllCampWatcher,ActivityChannellerSlabFinishAllCampEvent,ActivityChannellerSlabFinishAllCampWatcherParam>::RefreshableServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'ActivityChannellerSlabFinishAllCampWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 964: range 0000000014D2070C-0000000014D20736
void __cdecl ActivityChannellerSlabFinishAllCampWatcher::~ActivityChannellerSlabFinishAllCampWatcher(
        ActivityChannellerSlabFinishAllCampWatcher *const this)
{
  ActivityChannellerSlabFinishAllCampWatcher::~ActivityChannellerSlabFinishAllCampWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 964: range 0000000014D206BE-0000000014D2070B
void __cdecl ActivityChannellerSlabFinishAllCampWatcher::~ActivityChannellerSlabFinishAllCampWatcher(
        ActivityChannellerSlabFinishAllCampWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'ActivityChannellerSlabFinishAllCampWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  RefreshableServerWatcher<ActivityChannellerSlabFinishAllCampWatcher,ActivityChannellerSlabFinishAllCampEvent,ActivityChannellerSlabFinishAllCampWatcherParam>::~RefreshableServerWatcher(this);
};

// Line 972: range 0000000014CF58F6-0000000014CF5943
void __cdecl ActivityChannellerSlabFinishAllOneoffDungeonWatcher::ActivityChannellerSlabFinishAllOneoffDungeonWatcher(
        ActivityChannellerSlabFinishAllOneoffDungeonWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  RefreshableServerWatcher<ActivityChannellerSlabFinishAllOneoffDungeonWatcher,ActivityChannellerSlabFinishAllOneoffDungeonEvent,ActivityChannellerSlabFinishAllOneoffDungeonWatcherParam>::RefreshableServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'ActivityChannellerSlabFinishAllOneoffDungeonWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 972: range 0000000014D20692-0000000014D206BC
void __cdecl ActivityChannellerSlabFinishAllOneoffDungeonWatcher::~ActivityChannellerSlabFinishAllOneoffDungeonWatcher(
        ActivityChannellerSlabFinishAllOneoffDungeonWatcher *const this)
{
  ActivityChannellerSlabFinishAllOneoffDungeonWatcher::~ActivityChannellerSlabFinishAllOneoffDungeonWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 972: range 0000000014D20644-0000000014D20691
void __cdecl ActivityChannellerSlabFinishAllOneoffDungeonWatcher::~ActivityChannellerSlabFinishAllOneoffDungeonWatcher(
        ActivityChannellerSlabFinishAllOneoffDungeonWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'ActivityChannellerSlabFinishAllOneoffDungeonWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  RefreshableServerWatcher<ActivityChannellerSlabFinishAllOneoffDungeonWatcher,ActivityChannellerSlabFinishAllOneoffDungeonEvent,ActivityChannellerSlabFinishAllOneoffDungeonWatcherParam>::~RefreshableServerWatcher(this);
};

// Line 980: range 0000000014CF5DAC-0000000014CF5DF9
void __cdecl HomeUnlockFurnitureWatcher::HomeUnlockFurnitureWatcher(HomeUnlockFurnitureWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  RefreshableServerWatcher<HomeUnlockFurnitureWatcher,UnlockFurnitureEvent,HomeUnlockFurnitureWatcherParam>::RefreshableServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'HomeUnlockFurnitureWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 980: range 0000000014D20618-0000000014D20642
void __cdecl HomeUnlockFurnitureWatcher::~HomeUnlockFurnitureWatcher(HomeUnlockFurnitureWatcher *const this)
{
  HomeUnlockFurnitureWatcher::~HomeUnlockFurnitureWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 980: range 0000000014D205CA-0000000014D20617
void __cdecl HomeUnlockFurnitureWatcher::~HomeUnlockFurnitureWatcher(HomeUnlockFurnitureWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'HomeUnlockFurnitureWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  RefreshableServerWatcher<HomeUnlockFurnitureWatcher,UnlockFurnitureEvent,HomeUnlockFurnitureWatcherParam>::~RefreshableServerWatcher(this);
};

// Line 988: range 0000000014CF619A-0000000014CF61E7
void __cdecl HomeFurnitureMakeWatcher::HomeFurnitureMakeWatcher(HomeFurnitureMakeWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<HomeFurnitureMakeWatcher,FurnitureMakeEvent,HomeFurnitureMakeWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'HomeFurnitureMakeWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 988: range 0000000014D20550-0000000014D2059D
void __cdecl HomeFurnitureMakeWatcher::~HomeFurnitureMakeWatcher(HomeFurnitureMakeWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'HomeFurnitureMakeWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<HomeFurnitureMakeWatcher,FurnitureMakeEvent,HomeFurnitureMakeWatcherParam>::~ServerWatcher(this);
};

// Line 988: range 0000000014D2059E-0000000014D205C8
void __cdecl HomeFurnitureMakeWatcher::~HomeFurnitureMakeWatcher(HomeFurnitureMakeWatcher *const this)
{
  HomeFurnitureMakeWatcher::~HomeFurnitureMakeWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 995: range 0000000014CF6650-0000000014CF669D
void __cdecl HomeLevelWatcher::HomeLevelWatcher(HomeLevelWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  RefreshableServerWatcher<HomeLevelWatcher,HomeLevelEvent,HomeLevelWatcherParam>::RefreshableServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'HomeLevelWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 995: range 0000000014D204D6-0000000014D20523
void __cdecl HomeLevelWatcher::~HomeLevelWatcher(HomeLevelWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'HomeLevelWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  RefreshableServerWatcher<HomeLevelWatcher,HomeLevelEvent,HomeLevelWatcherParam>::~RefreshableServerWatcher(this);
};

// Line 995: range 0000000014D20524-0000000014D2054E
void __cdecl HomeLevelWatcher::~HomeLevelWatcher(HomeLevelWatcher *const this)
{
  HomeLevelWatcher::~HomeLevelWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 1003: range 0000000014CF6A3E-0000000014CF6A8B
void __cdecl HomeCoinWatcher::HomeCoinWatcher(HomeCoinWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<HomeCoinWatcher,HomeCoinEvent,HomeCoinWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'HomeCoinWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 1003: range 0000000014D2045C-0000000014D204A9
void __cdecl HomeCoinWatcher::~HomeCoinWatcher(HomeCoinWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'HomeCoinWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<HomeCoinWatcher,HomeCoinEvent,HomeCoinWatcherParam>::~ServerWatcher(this);
};

// Line 1003: range 0000000014D204AA-0000000014D204D4
void __cdecl HomeCoinWatcher::~HomeCoinWatcher(HomeCoinWatcher *const this)
{
  HomeCoinWatcher::~HomeCoinWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 1010: range 0000000014CF6EF4-0000000014CF6F41
void __cdecl HomeComfortLevelWatcher::HomeComfortLevelWatcher(HomeComfortLevelWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  RefreshableServerWatcher<HomeComfortLevelWatcher,HomeArrangementFurnitureEvent,HomeComfortLevelWatcherParam>::RefreshableServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'HomeComfortLevelWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 1010: range 0000000014D203E2-0000000014D2042F
void __cdecl HomeComfortLevelWatcher::~HomeComfortLevelWatcher(HomeComfortLevelWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'HomeComfortLevelWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  RefreshableServerWatcher<HomeComfortLevelWatcher,HomeArrangementFurnitureEvent,HomeComfortLevelWatcherParam>::~RefreshableServerWatcher(this);
};

// Line 1010: range 0000000014D20430-0000000014D2045A
void __cdecl HomeComfortLevelWatcher::~HomeComfortLevelWatcher(HomeComfortLevelWatcher *const this)
{
  HomeComfortLevelWatcher::~HomeComfortLevelWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 1019: range 0000000014CF72E2-0000000014CF732F
void __cdecl HomeLimitedShopBuyWatcher::HomeLimitedShopBuyWatcher(HomeLimitedShopBuyWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<HomeLimitedShopBuyWatcher,HomeLimitedShopBuyEvent,HomeLimitedShopBuyWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'HomeLimitedShopBuyWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 1019: range 0000000014D203B6-0000000014D203E0
void __cdecl HomeLimitedShopBuyWatcher::~HomeLimitedShopBuyWatcher(HomeLimitedShopBuyWatcher *const this)
{
  HomeLimitedShopBuyWatcher::~HomeLimitedShopBuyWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 1019: range 0000000014D20368-0000000014D203B5
void __cdecl HomeLimitedShopBuyWatcher::~HomeLimitedShopBuyWatcher(HomeLimitedShopBuyWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'HomeLimitedShopBuyWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<HomeLimitedShopBuyWatcher,HomeLimitedShopBuyEvent,HomeLimitedShopBuyWatcherParam>::~ServerWatcher(this);
};

// Line 1026: range 0000000014CF7798-0000000014CF77E5
void __cdecl HomeFurnitureSuiteTypeWatcher::HomeFurnitureSuiteTypeWatcher(HomeFurnitureSuiteTypeWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  RefreshableServerWatcher<HomeFurnitureSuiteTypeWatcher,HomeArrangementFurnitureEvent,HomeFurnitureSuiteTypeWatcherParam>::RefreshableServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'HomeFurnitureSuiteTypeWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 1026: range 0000000014D2033C-0000000014D20366
void __cdecl HomeFurnitureSuiteTypeWatcher::~HomeFurnitureSuiteTypeWatcher(HomeFurnitureSuiteTypeWatcher *const this)
{
  HomeFurnitureSuiteTypeWatcher::~HomeFurnitureSuiteTypeWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 1026: range 0000000014D202EE-0000000014D2033B
void __cdecl HomeFurnitureSuiteTypeWatcher::~HomeFurnitureSuiteTypeWatcher(HomeFurnitureSuiteTypeWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'HomeFurnitureSuiteTypeWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  RefreshableServerWatcher<HomeFurnitureSuiteTypeWatcher,HomeArrangementFurnitureEvent,HomeFurnitureSuiteTypeWatcherParam>::~RefreshableServerWatcher(this);
};

// Line 1034: range 0000000014CF7C4E-0000000014CF7C9B
void __cdecl HomeArrangementFurnitureCountWatcher::HomeArrangementFurnitureCountWatcher(
        HomeArrangementFurnitureCountWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  RefreshableServerWatcher<HomeArrangementFurnitureCountWatcher,HomeArrangementFurnitureEvent,HomeArrangementFurnitureCountWatcherParam>::RefreshableServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'HomeArrangementFurnitureCountWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 1034: range 0000000014D202C2-0000000014D202EC
void __cdecl HomeArrangementFurnitureCountWatcher::~HomeArrangementFurnitureCountWatcher(
        HomeArrangementFurnitureCountWatcher *const this)
{
  HomeArrangementFurnitureCountWatcher::~HomeArrangementFurnitureCountWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 1034: range 0000000014D20274-0000000014D202C1
void __cdecl HomeArrangementFurnitureCountWatcher::~HomeArrangementFurnitureCountWatcher(
        HomeArrangementFurnitureCountWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'HomeArrangementFurnitureCountWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  RefreshableServerWatcher<HomeArrangementFurnitureCountWatcher,HomeArrangementFurnitureEvent,HomeArrangementFurnitureCountWatcherParam>::~RefreshableServerWatcher(this);
};

// Line 1042: range 0000000014CF803C-0000000014CF8089
void __cdecl CombineItemCountWatcher::CombineItemCountWatcher(CombineItemCountWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<CombineItemCountWatcher,PlayerCombineEvent,CombineItemCountWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'CombineItemCountWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 1042: range 0000000014D20248-0000000014D20272
void __cdecl CombineItemCountWatcher::~CombineItemCountWatcher(CombineItemCountWatcher *const this)
{
  CombineItemCountWatcher::~CombineItemCountWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 1042: range 0000000014D201FA-0000000014D20247
void __cdecl CombineItemCountWatcher::~CombineItemCountWatcher(CombineItemCountWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'CombineItemCountWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<CombineItemCountWatcher,PlayerCombineEvent,CombineItemCountWatcherParam>::~ServerWatcher(this);
};

// Line 1049: range 0000000014CF842A-0000000014CF8477
void __cdecl HomeEnterSelfHomeWatcher::HomeEnterSelfHomeWatcher(HomeEnterSelfHomeWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<HomeEnterSelfHomeWatcher,PlayerEnterHomeEvent,HomeEnterSelfHomeWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'HomeEnterSelfHomeWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 1049: range 0000000014D20180-0000000014D201CD
void __cdecl HomeEnterSelfHomeWatcher::~HomeEnterSelfHomeWatcher(HomeEnterSelfHomeWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'HomeEnterSelfHomeWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<HomeEnterSelfHomeWatcher,PlayerEnterHomeEvent,HomeEnterSelfHomeWatcherParam>::~ServerWatcher(this);
};

// Line 1049: range 0000000014D201CE-0000000014D201F8
void __cdecl HomeEnterSelfHomeWatcher::~HomeEnterSelfHomeWatcher(HomeEnterSelfHomeWatcher *const this)
{
  HomeEnterSelfHomeWatcher::~HomeEnterSelfHomeWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 1056: range 0000000014CF88E0-0000000014CF892D
void __cdecl HomeModuleComfortWatcher::HomeModuleComfortWatcher(HomeModuleComfortWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  RefreshableServerWatcher<HomeModuleComfortWatcher,HomeArrangementFurnitureEvent,HomeModuleComfortWatcherParam>::RefreshableServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'HomeModuleComfortWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 1056: range 0000000014D20106-0000000014D20153
void __cdecl HomeModuleComfortWatcher::~HomeModuleComfortWatcher(HomeModuleComfortWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'HomeModuleComfortWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  RefreshableServerWatcher<HomeModuleComfortWatcher,HomeArrangementFurnitureEvent,HomeModuleComfortWatcherParam>::~RefreshableServerWatcher(this);
};

// Line 1056: range 0000000014D20154-0000000014D2017E
void __cdecl HomeModuleComfortWatcher::~HomeModuleComfortWatcher(HomeModuleComfortWatcher *const this)
{
  HomeModuleComfortWatcher::~HomeModuleComfortWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 1064: range 0000000014CF8CCE-0000000014CF8D1B
void __cdecl HomeEnterHomeRoomWatcher::HomeEnterHomeRoomWatcher(HomeEnterHomeRoomWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<HomeEnterHomeRoomWatcher,EnterHomeRoomEvent,HomeEnterHomeRoomWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'HomeEnterHomeRoomWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 1064: range 0000000014D200DA-0000000014D20104
void __cdecl HomeEnterHomeRoomWatcher::~HomeEnterHomeRoomWatcher(HomeEnterHomeRoomWatcher *const this)
{
  HomeEnterHomeRoomWatcher::~HomeEnterHomeRoomWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 1064: range 0000000014D2008C-0000000014D200D9
void __cdecl HomeEnterHomeRoomWatcher::~HomeEnterHomeRoomWatcher(HomeEnterHomeRoomWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'HomeEnterHomeRoomWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<HomeEnterHomeRoomWatcher,EnterHomeRoomEvent,HomeEnterHomeRoomWatcherParam>::~ServerWatcher(this);
};

// Line 1071: range 0000000014CF90BC-0000000014CF9109
void __cdecl HomeAvatarShowInWatcher::HomeAvatarShowInWatcher(HomeAvatarShowInWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<HomeAvatarShowInWatcher,HomeAvatarShowInEvent,HomeAvatarShowInWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'HomeAvatarShowInWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 1071: range 0000000014D20060-0000000014D2008A
void __cdecl HomeAvatarShowInWatcher::~HomeAvatarShowInWatcher(HomeAvatarShowInWatcher *const this)
{
  HomeAvatarShowInWatcher::~HomeAvatarShowInWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 1071: range 0000000014D20012-0000000014D2005F
void __cdecl HomeAvatarShowInWatcher::~HomeAvatarShowInWatcher(HomeAvatarShowInWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'HomeAvatarShowInWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<HomeAvatarShowInWatcher,HomeAvatarShowInEvent,HomeAvatarShowInWatcherParam>::~ServerWatcher(this);
};

// Line 1078: range 0000000014CF94AA-0000000014CF94F7
void __cdecl HomeAvatarEventRewardWatcher::HomeAvatarEventRewardWatcher(HomeAvatarEventRewardWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<HomeAvatarEventRewardWatcher,HomeAvatarEventRewardGetEvent,HomeAvatarEventRewardWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'HomeAvatarEventRewardWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 1078: range 0000000014D1FFE6-0000000014D20010
void __cdecl HomeAvatarEventRewardWatcher::~HomeAvatarEventRewardWatcher(HomeAvatarEventRewardWatcher *const this)
{
  HomeAvatarEventRewardWatcher::~HomeAvatarEventRewardWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 1078: range 0000000014D1FF98-0000000014D1FFE5
void __cdecl HomeAvatarEventRewardWatcher::~HomeAvatarEventRewardWatcher(HomeAvatarEventRewardWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'HomeAvatarEventRewardWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<HomeAvatarEventRewardWatcher,HomeAvatarEventRewardGetEvent,HomeAvatarEventRewardWatcherParam>::~ServerWatcher(this);
};

// Line 1085: range 0000000014CF9898-0000000014CF98E5
void __cdecl HomeAvatarTalkWatcher::HomeAvatarTalkWatcher(HomeAvatarTalkWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<HomeAvatarTalkWatcher,HomeAvatarTalkEvent,HomeAvatarTalkWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'HomeAvatarTalkWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 1085: range 0000000014D1FF6C-0000000014D1FF96
void __cdecl HomeAvatarTalkWatcher::~HomeAvatarTalkWatcher(HomeAvatarTalkWatcher *const this)
{
  HomeAvatarTalkWatcher::~HomeAvatarTalkWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 1085: range 0000000014D1FF1E-0000000014D1FF6B
void __cdecl HomeAvatarTalkWatcher::~HomeAvatarTalkWatcher(HomeAvatarTalkWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'HomeAvatarTalkWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<HomeAvatarTalkWatcher,HomeAvatarTalkEvent,HomeAvatarTalkWatcherParam>::~ServerWatcher(this);
};

// Line 1092: range 0000000014CF9C86-0000000014CF9CD3
void __cdecl HomeAvatarAllEventRewardWatcher::HomeAvatarAllEventRewardWatcher(
        HomeAvatarAllEventRewardWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<HomeAvatarAllEventRewardWatcher,HomeAvatarEventRewardGetEvent,HomeAvatarAllEventRewardWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'HomeAvatarAllEventRewardWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 1092: range 0000000014D1FEF2-0000000014D1FF1C
void __cdecl HomeAvatarAllEventRewardWatcher::~HomeAvatarAllEventRewardWatcher(
        HomeAvatarAllEventRewardWatcher *const this)
{
  HomeAvatarAllEventRewardWatcher::~HomeAvatarAllEventRewardWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 1092: range 0000000014D1FEA4-0000000014D1FEF1
void __cdecl HomeAvatarAllEventRewardWatcher::~HomeAvatarAllEventRewardWatcher(
        HomeAvatarAllEventRewardWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'HomeAvatarAllEventRewardWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<HomeAvatarAllEventRewardWatcher,HomeAvatarEventRewardGetEvent,HomeAvatarAllEventRewardWatcherParam>::~ServerWatcher(this);
};

// Line 1099: range 0000000014CFA074-0000000014CFA0C1
void __cdecl HomeAvatarAllTalkWatcher::HomeAvatarAllTalkWatcher(HomeAvatarAllTalkWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<HomeAvatarAllTalkWatcher,HomeAvatarTalkEvent,HomeAvatarAllTalkWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'HomeAvatarAllTalkWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 1099: range 0000000014D1FE78-0000000014D1FEA2
void __cdecl HomeAvatarAllTalkWatcher::~HomeAvatarAllTalkWatcher(HomeAvatarAllTalkWatcher *const this)
{
  HomeAvatarAllTalkWatcher::~HomeAvatarAllTalkWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 1099: range 0000000014D1FE2A-0000000014D1FE77
void __cdecl HomeAvatarAllTalkWatcher::~HomeAvatarAllTalkWatcher(HomeAvatarAllTalkWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'HomeAvatarAllTalkWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<HomeAvatarAllTalkWatcher,HomeAvatarTalkEvent,HomeAvatarAllTalkWatcherParam>::~ServerWatcher(this);
};

// Line 1106: range 0000000014CFA462-0000000014CFA4AF
void __cdecl HomeAvatarInCountWatcher::HomeAvatarInCountWatcher(HomeAvatarInCountWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<HomeAvatarInCountWatcher,HomeAvatarShowInEvent,HomeAvatarInCountWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'HomeAvatarInCountWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 1106: range 0000000014D1FDB0-0000000014D1FDFD
void __cdecl HomeAvatarInCountWatcher::~HomeAvatarInCountWatcher(HomeAvatarInCountWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'HomeAvatarInCountWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<HomeAvatarInCountWatcher,HomeAvatarShowInEvent,HomeAvatarInCountWatcherParam>::~ServerWatcher(this);
};

// Line 1106: range 0000000014D1FDFE-0000000014D1FE28
void __cdecl HomeAvatarInCountWatcher::~HomeAvatarInCountWatcher(HomeAvatarInCountWatcher *const this)
{
  HomeAvatarInCountWatcher::~HomeAvatarInCountWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 1113: range 0000000014CFA850-0000000014CFA89D
void __cdecl HomeAvatarFetterGetWatcher::HomeAvatarFetterGetWatcher(HomeAvatarFetterGetWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<HomeAvatarFetterGetWatcher,HomeAvatarFetterGetEvent,HomeAvatarFetterGetWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'HomeAvatarFetterGetWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 1113: range 0000000014D1FD84-0000000014D1FDAE
void __cdecl HomeAvatarFetterGetWatcher::~HomeAvatarFetterGetWatcher(HomeAvatarFetterGetWatcher *const this)
{
  HomeAvatarFetterGetWatcher::~HomeAvatarFetterGetWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 1113: range 0000000014D1FD36-0000000014D1FD83
void __cdecl HomeAvatarFetterGetWatcher::~HomeAvatarFetterGetWatcher(HomeAvatarFetterGetWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'HomeAvatarFetterGetWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<HomeAvatarFetterGetWatcher,HomeAvatarFetterGetEvent,HomeAvatarFetterGetWatcherParam>::~ServerWatcher(this);
};

// Line 1120: range 0000000014CFAC3E-0000000014CFAC8B
void __cdecl AnyWeaponUpgradeNumWatcher::AnyWeaponUpgradeNumWatcher(AnyWeaponUpgradeNumWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<AnyWeaponUpgradeNumWatcher,WeaponAddExpEvent,AnyWeaponUpgradeNumWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'AnyWeaponUpgradeNumWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 1120: range 0000000014D1FCBC-0000000014D1FD09
void __cdecl AnyWeaponUpgradeNumWatcher::~AnyWeaponUpgradeNumWatcher(AnyWeaponUpgradeNumWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'AnyWeaponUpgradeNumWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<AnyWeaponUpgradeNumWatcher,WeaponAddExpEvent,AnyWeaponUpgradeNumWatcherParam>::~ServerWatcher(this);
};

// Line 1120: range 0000000014D1FD0A-0000000014D1FD34
void __cdecl AnyWeaponUpgradeNumWatcher::~AnyWeaponUpgradeNumWatcher(AnyWeaponUpgradeNumWatcher *const this)
{
  AnyWeaponUpgradeNumWatcher::~AnyWeaponUpgradeNumWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 1127: range 0000000014CFB02C-0000000014CFB079
void __cdecl AnyReliquaryUpgradeNumWatcher::AnyReliquaryUpgradeNumWatcher(AnyReliquaryUpgradeNumWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<AnyReliquaryUpgradeNumWatcher,ReliquaryAddExpEvent,AnyReliquaryUpgradeNumWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'AnyReliquaryUpgradeNumWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 1127: range 0000000014D1FC42-0000000014D1FC8F
void __cdecl AnyReliquaryUpgradeNumWatcher::~AnyReliquaryUpgradeNumWatcher(AnyReliquaryUpgradeNumWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'AnyReliquaryUpgradeNumWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<AnyReliquaryUpgradeNumWatcher,ReliquaryAddExpEvent,AnyReliquaryUpgradeNumWatcherParam>::~ServerWatcher(this);
};

// Line 1127: range 0000000014D1FC90-0000000014D1FCBA
void __cdecl AnyReliquaryUpgradeNumWatcher::~AnyReliquaryUpgradeNumWatcher(AnyReliquaryUpgradeNumWatcher *const this)
{
  AnyReliquaryUpgradeNumWatcher::~AnyReliquaryUpgradeNumWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 1134: range 0000000014CFB4E2-0000000014CFB52F
void __cdecl ExhibitionAccumulableValueWatcher::ExhibitionAccumulableValueWatcher(
        ExhibitionAccumulableValueWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  RefreshableServerWatcher<ExhibitionAccumulableValueWatcher,ExhibitionAccumulableValueEvent,ExhibitionAccumulableValueWatcherParam>::RefreshableServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'ExhibitionAccumulableValueWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 1134: range 0000000014D1FBC8-0000000014D1FC15
void __cdecl ExhibitionAccumulableValueWatcher::~ExhibitionAccumulableValueWatcher(
        ExhibitionAccumulableValueWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'ExhibitionAccumulableValueWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  RefreshableServerWatcher<ExhibitionAccumulableValueWatcher,ExhibitionAccumulableValueEvent,ExhibitionAccumulableValueWatcherParam>::~RefreshableServerWatcher(this);
};

// Line 1134: range 0000000014D1FC16-0000000014D1FC40
void __cdecl ExhibitionAccumulableValueWatcher::~ExhibitionAccumulableValueWatcher(
        ExhibitionAccumulableValueWatcher *const this)
{
  ExhibitionAccumulableValueWatcher::~ExhibitionAccumulableValueWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 1142: range 0000000014CFB8D0-0000000014CFB91D
void __cdecl ExhibitionReplaceableValueSettleNumWatcher::ExhibitionReplaceableValueSettleNumWatcher(
        ExhibitionReplaceableValueSettleNumWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<ExhibitionReplaceableValueSettleNumWatcher,ExhibitionReplaceableValueSettleNumEvent,ExhibitionReplaceableValueSettleNumWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'ExhibitionReplaceableValueSettleNumWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 1142: range 0000000014D1FB9C-0000000014D1FBC6
void __cdecl ExhibitionReplaceableValueSettleNumWatcher::~ExhibitionReplaceableValueSettleNumWatcher(
        ExhibitionReplaceableValueSettleNumWatcher *const this)
{
  ExhibitionReplaceableValueSettleNumWatcher::~ExhibitionReplaceableValueSettleNumWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 1142: range 0000000014D1FB4E-0000000014D1FB9B
void __cdecl ExhibitionReplaceableValueSettleNumWatcher::~ExhibitionReplaceableValueSettleNumWatcher(
        ExhibitionReplaceableValueSettleNumWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'ExhibitionReplaceableValueSettleNumWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<ExhibitionReplaceableValueSettleNumWatcher,ExhibitionReplaceableValueSettleNumEvent,ExhibitionReplaceableValueSettleNumWatcherParam>::~ServerWatcher(this);
};

// Line 1149: range 0000000014CFBCBE-0000000014CFBD0B
void __cdecl WeeklyBossKillWatcher::WeeklyBossKillWatcher(WeeklyBossKillWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<WeeklyBossKillWatcher,WeeklyBossKillEvent,WeeklyBossKillWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'WeeklyBossKillWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 1149: range 0000000014D1FB22-0000000014D1FB4C
void __cdecl WeeklyBossKillWatcher::~WeeklyBossKillWatcher(WeeklyBossKillWatcher *const this)
{
  WeeklyBossKillWatcher::~WeeklyBossKillWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 1149: range 0000000014D1FAD4-0000000014D1FB21
void __cdecl WeeklyBossKillWatcher::~WeeklyBossKillWatcher(WeeklyBossKillWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'WeeklyBossKillWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<WeeklyBossKillWatcher,WeeklyBossKillEvent,WeeklyBossKillWatcherParam>::~ServerWatcher(this);
};

// Line 1156: range 0000000014CFC0AC-0000000014CFC0F9
void __cdecl GroupVariableSetValueToWatcher::GroupVariableSetValueToWatcher(GroupVariableSetValueToWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<GroupVariableSetValueToWatcher,GroupVariableSetValueToEvent,GroupVariableSetValueToWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'GroupVariableSetValueToWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 1156: range 0000000014D1FAA8-0000000014D1FAD2
void __cdecl GroupVariableSetValueToWatcher::~GroupVariableSetValueToWatcher(
        GroupVariableSetValueToWatcher *const this)
{
  GroupVariableSetValueToWatcher::~GroupVariableSetValueToWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 1156: range 0000000014D1FA5A-0000000014D1FAA7
void __cdecl GroupVariableSetValueToWatcher::~GroupVariableSetValueToWatcher(
        GroupVariableSetValueToWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'GroupVariableSetValueToWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<GroupVariableSetValueToWatcher,GroupVariableSetValueToEvent,GroupVariableSetValueToWatcherParam>::~ServerWatcher(this);
};

// Line 1163: range 0000000014CFC49A-0000000014CFC4E7
void __cdecl KillGadgetsBySpecificSkillWatcher::KillGadgetsBySpecificSkillWatcher(
        KillGadgetsBySpecificSkillWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<KillGadgetsBySpecificSkillWatcher,KillGadgetsBySpecificSkillEvent,KillGadgetsBySpecificSkillWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'KillGadgetsBySpecificSkillWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 1163: range 0000000014D1FA2E-0000000014D1FA58
void __cdecl KillGadgetsBySpecificSkillWatcher::~KillGadgetsBySpecificSkillWatcher(
        KillGadgetsBySpecificSkillWatcher *const this)
{
  KillGadgetsBySpecificSkillWatcher::~KillGadgetsBySpecificSkillWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 1163: range 0000000014D1F9E0-0000000014D1FA2D
void __cdecl KillGadgetsBySpecificSkillWatcher::~KillGadgetsBySpecificSkillWatcher(
        KillGadgetsBySpecificSkillWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'KillGadgetsBySpecificSkillWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<KillGadgetsBySpecificSkillWatcher,KillGadgetsBySpecificSkillEvent,KillGadgetsBySpecificSkillWatcherParam>::~ServerWatcher(this);
};

// Line 1170: range 0000000014CFC888-0000000014CFC8D5
void __cdecl KillMonstersWithoutVehicleWatcher::KillMonstersWithoutVehicleWatcher(
        KillMonstersWithoutVehicleWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<KillMonstersWithoutVehicleWatcher,KillMonstersWithoutVehicleEvent,KillMonstersWithoutVehicleWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'KillMonstersWithoutVehicleWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 1170: range 0000000014D1F9B4-0000000014D1F9DE
void __cdecl KillMonstersWithoutVehicleWatcher::~KillMonstersWithoutVehicleWatcher(
        KillMonstersWithoutVehicleWatcher *const this)
{
  KillMonstersWithoutVehicleWatcher::~KillMonstersWithoutVehicleWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 1170: range 0000000014D1F966-0000000014D1F9B3
void __cdecl KillMonstersWithoutVehicleWatcher::~KillMonstersWithoutVehicleWatcher(
        KillMonstersWithoutVehicleWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'KillMonstersWithoutVehicleWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<KillMonstersWithoutVehicleWatcher,KillMonstersWithoutVehicleEvent,KillMonstersWithoutVehicleWatcherParam>::~ServerWatcher(this);
};

// Line 1177: range 0000000014CFCC76-0000000014CFCCC3
void __cdecl PlaceMiracleRingWatcher::PlaceMiracleRingWatcher(PlaceMiracleRingWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<PlaceMiracleRingWatcher,PlaceMiracleRingEvent,PlaceMiracleRingWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'PlaceMiracleRingWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 1177: range 0000000014D1F93A-0000000014D1F964
void __cdecl PlaceMiracleRingWatcher::~PlaceMiracleRingWatcher(PlaceMiracleRingWatcher *const this)
{
  PlaceMiracleRingWatcher::~PlaceMiracleRingWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 1177: range 0000000014D1F8EC-0000000014D1F939
void __cdecl PlaceMiracleRingWatcher::~PlaceMiracleRingWatcher(PlaceMiracleRingWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'PlaceMiracleRingWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<PlaceMiracleRingWatcher,PlaceMiracleRingEvent,PlaceMiracleRingWatcherParam>::~ServerWatcher(this);
};

// Line 1184: range 0000000014CFD064-0000000014CFD0B1
void __cdecl KillMonsterByTagWatcher::KillMonsterByTagWatcher(KillMonsterByTagWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<KillMonsterByTagWatcher,RoundMonsterDieEvent,KillMonsterByTagWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'KillMonsterByTagWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 1184: range 0000000014D1F872-0000000014D1F8BF
void __cdecl KillMonsterByTagWatcher::~KillMonsterByTagWatcher(KillMonsterByTagWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'KillMonsterByTagWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<KillMonsterByTagWatcher,RoundMonsterDieEvent,KillMonsterByTagWatcherParam>::~ServerWatcher(this);
};

// Line 1184: range 0000000014D1F8C0-0000000014D1F8EA
void __cdecl KillMonsterByTagWatcher::~KillMonsterByTagWatcher(KillMonsterByTagWatcher *const this)
{
  KillMonsterByTagWatcher::~KillMonsterByTagWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 1191: range 0000000014CFD452-0000000014CFD49F
void __cdecl EnterVehicleWatcher::EnterVehicleWatcher(EnterVehicleWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<EnterVehicleWatcher,EnterVehicleEvent,EnterVehicleWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'EnterVehicleWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 1191: range 0000000014D1F7F8-0000000014D1F845
void __cdecl EnterVehicleWatcher::~EnterVehicleWatcher(EnterVehicleWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'EnterVehicleWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<EnterVehicleWatcher,EnterVehicleEvent,EnterVehicleWatcherParam>::~ServerWatcher(this);
};

// Line 1191: range 0000000014D1F846-0000000014D1F870
void __cdecl EnterVehicleWatcher::~EnterVehicleWatcher(EnterVehicleWatcher *const this)
{
  EnterVehicleWatcher::~EnterVehicleWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 1198: range 0000000014CFD840-0000000014CFD88D
void __cdecl VehicleDurationWatcher::VehicleDurationWatcher(VehicleDurationWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<VehicleDurationWatcher,ExitVehicleEvent,VehicleDurationWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'VehicleDurationWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 1198: range 0000000014D1F77E-0000000014D1F7CB
void __cdecl VehicleDurationWatcher::~VehicleDurationWatcher(VehicleDurationWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'VehicleDurationWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<VehicleDurationWatcher,ExitVehicleEvent,VehicleDurationWatcherParam>::~ServerWatcher(this);
};

// Line 1198: range 0000000014D1F7CC-0000000014D1F7F6
void __cdecl VehicleDurationWatcher::~VehicleDurationWatcher(VehicleDurationWatcher *const this)
{
  VehicleDurationWatcher::~VehicleDurationWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 1205: range 0000000014CFDC2E-0000000014CFDC7B
void __cdecl VehicleFriendsWatcher::VehicleFriendsWatcher(VehicleFriendsWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<VehicleFriendsWatcher,VehicleFriendsEvent,VehicleFriendsWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'VehicleFriendsWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 1205: range 0000000014D1F704-0000000014D1F751
void __cdecl VehicleFriendsWatcher::~VehicleFriendsWatcher(VehicleFriendsWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'VehicleFriendsWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<VehicleFriendsWatcher,VehicleFriendsEvent,VehicleFriendsWatcherParam>::~ServerWatcher(this);
};

// Line 1205: range 0000000014D1F752-0000000014D1F77C
void __cdecl VehicleFriendsWatcher::~VehicleFriendsWatcher(VehicleFriendsWatcher *const this)
{
  VehicleFriendsWatcher::~VehicleFriendsWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 1212: range 0000000014CFE01C-0000000014CFE069
void __cdecl VehicleKilledByMonsterWatcher::VehicleKilledByMonsterWatcher(VehicleKilledByMonsterWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<VehicleKilledByMonsterWatcher,VehicleKilledEvent,VehicleKilledByMonsterWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'VehicleKilledByMonsterWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 1212: range 0000000014D1F6D8-0000000014D1F702
void __cdecl VehicleKilledByMonsterWatcher::~VehicleKilledByMonsterWatcher(VehicleKilledByMonsterWatcher *const this)
{
  VehicleKilledByMonsterWatcher::~VehicleKilledByMonsterWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 1212: range 0000000014D1F68A-0000000014D1F6D7
void __cdecl VehicleKilledByMonsterWatcher::~VehicleKilledByMonsterWatcher(VehicleKilledByMonsterWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'VehicleKilledByMonsterWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<VehicleKilledByMonsterWatcher,VehicleKilledEvent,VehicleKilledByMonsterWatcherParam>::~ServerWatcher(this);
};

// Line 1219: range 0000000014CFE40A-0000000014CFE457
void __cdecl VehicleDashWatcher::VehicleDashWatcher(VehicleDashWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<VehicleDashWatcher,VehicleDashEvent,VehicleDashWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'VehicleDashWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 1219: range 0000000014D1F610-0000000014D1F65D
void __cdecl VehicleDashWatcher::~VehicleDashWatcher(VehicleDashWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'VehicleDashWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<VehicleDashWatcher,VehicleDashEvent,VehicleDashWatcherParam>::~ServerWatcher(this);
};

// Line 1219: range 0000000014D1F65E-0000000014D1F688
void __cdecl VehicleDashWatcher::~VehicleDashWatcher(VehicleDashWatcher *const this)
{
  VehicleDashWatcher::~VehicleDashWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 1226: range 0000000014CFE7F8-0000000014CFE845
void __cdecl HomeDoPlantWatcher::HomeDoPlantWatcher(HomeDoPlantWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<HomeDoPlantWatcher,HomeDoPlantEvent,HomeDoPlantWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'HomeDoPlantWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 1226: range 0000000014D1F596-0000000014D1F5E3
void __cdecl HomeDoPlantWatcher::~HomeDoPlantWatcher(HomeDoPlantWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'HomeDoPlantWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<HomeDoPlantWatcher,HomeDoPlantEvent,HomeDoPlantWatcherParam>::~ServerWatcher(this);
};

// Line 1226: range 0000000014D1F5E4-0000000014D1F60E
void __cdecl HomeDoPlantWatcher::~HomeDoPlantWatcher(HomeDoPlantWatcher *const this)
{
  HomeDoPlantWatcher::~HomeDoPlantWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 1233: range 0000000014CFEBE6-0000000014CFEC33
void __cdecl FinishChallengeInDurationWatcher::FinishChallengeInDurationWatcher(
        FinishChallengeInDurationWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<FinishChallengeInDurationWatcher,ChallengeFinishEvent,FinishChallengeInDurationWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'FinishChallengeInDurationWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 1233: range 0000000014D1F56A-0000000014D1F594
void __cdecl FinishChallengeInDurationWatcher::~FinishChallengeInDurationWatcher(
        FinishChallengeInDurationWatcher *const this)
{
  FinishChallengeInDurationWatcher::~FinishChallengeInDurationWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 1233: range 0000000014D1F51C-0000000014D1F569
void __cdecl FinishChallengeInDurationWatcher::~FinishChallengeInDurationWatcher(
        FinishChallengeInDurationWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'FinishChallengeInDurationWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<FinishChallengeInDurationWatcher,ChallengeFinishEvent,FinishChallengeInDurationWatcherParam>::~ServerWatcher(this);
};

// Line 1240: range 0000000014CFEFD4-0000000014CFF021
void __cdecl FinishChallengeLeftTimeWatcher::FinishChallengeLeftTimeWatcher(FinishChallengeLeftTimeWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<FinishChallengeLeftTimeWatcher,ChallengeFinishEvent,FinishChallengeLeftTimeWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'FinishChallengeLeftTimeWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 1240: range 0000000014D1F4A2-0000000014D1F4EF
void __cdecl FinishChallengeLeftTimeWatcher::~FinishChallengeLeftTimeWatcher(
        FinishChallengeLeftTimeWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'FinishChallengeLeftTimeWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<FinishChallengeLeftTimeWatcher,ChallengeFinishEvent,FinishChallengeLeftTimeWatcherParam>::~ServerWatcher(this);
};

// Line 1240: range 0000000014D1F4F0-0000000014D1F51A
void __cdecl FinishChallengeLeftTimeWatcher::~FinishChallengeLeftTimeWatcher(
        FinishChallengeLeftTimeWatcher *const this)
{
  FinishChallengeLeftTimeWatcher::~FinishChallengeLeftTimeWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 1247: range 0000000014CFF48A-0000000014CFF4D7
void __cdecl UnlockSpecificForgeOrWatcher::UnlockSpecificForgeOrWatcher(UnlockSpecificForgeOrWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  RefreshableServerWatcher<UnlockSpecificForgeOrWatcher,UnlockForgeEvent,UnlockSpecificForgeOrWatcherParam>::RefreshableServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'UnlockSpecificForgeOrWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 1247: range 0000000014D1F428-0000000014D1F475
void __cdecl UnlockSpecificForgeOrWatcher::~UnlockSpecificForgeOrWatcher(UnlockSpecificForgeOrWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'UnlockSpecificForgeOrWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  RefreshableServerWatcher<UnlockSpecificForgeOrWatcher,UnlockForgeEvent,UnlockSpecificForgeOrWatcherParam>::~RefreshableServerWatcher(this);
};

// Line 1247: range 0000000014D1F476-0000000014D1F4A0
void __cdecl UnlockSpecificForgeOrWatcher::~UnlockSpecificForgeOrWatcher(UnlockSpecificForgeOrWatcher *const this)
{
  UnlockSpecificForgeOrWatcher::~UnlockSpecificForgeOrWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 1255: range 0000000014CFF878-0000000014CFF8C5
void __cdecl UnlockSpecificAnimalCodexWatcher::UnlockSpecificAnimalCodexWatcher(
        UnlockSpecificAnimalCodexWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<UnlockSpecificAnimalCodexWatcher,UnlockCodexEvent,UnlockSpecificAnimalCodexWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'UnlockSpecificAnimalCodexWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 1255: range 0000000014D1F3AE-0000000014D1F3FB
void __cdecl UnlockSpecificAnimalCodexWatcher::~UnlockSpecificAnimalCodexWatcher(
        UnlockSpecificAnimalCodexWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'UnlockSpecificAnimalCodexWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<UnlockSpecificAnimalCodexWatcher,UnlockCodexEvent,UnlockSpecificAnimalCodexWatcherParam>::~ServerWatcher(this);
};

// Line 1255: range 0000000014D1F3FC-0000000014D1F426
void __cdecl UnlockSpecificAnimalCodexWatcher::~UnlockSpecificAnimalCodexWatcher(
        UnlockSpecificAnimalCodexWatcher *const this)
{
  UnlockSpecificAnimalCodexWatcher::~UnlockSpecificAnimalCodexWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 1262: range 0000000014CFFC66-0000000014CFFCB3
void __cdecl HomeGatherCountWatcher::HomeGatherCountWatcher(HomeGatherCountWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<HomeGatherCountWatcher,HomeGatherEvent,HomeGatherCountWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'HomeGatherCountWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 1262: range 0000000014D1F334-0000000014D1F381
void __cdecl HomeGatherCountWatcher::~HomeGatherCountWatcher(HomeGatherCountWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'HomeGatherCountWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<HomeGatherCountWatcher,HomeGatherEvent,HomeGatherCountWatcherParam>::~ServerWatcher(this);
};

// Line 1262: range 0000000014D1F382-0000000014D1F3AC
void __cdecl HomeGatherCountWatcher::~HomeGatherCountWatcher(HomeGatherCountWatcher *const this)
{
  HomeGatherCountWatcher::~HomeGatherCountWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 1269: range 0000000014D00054-0000000014D000A1
void __cdecl HomeFieldGatherCountWatcher::HomeFieldGatherCountWatcher(HomeFieldGatherCountWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<HomeFieldGatherCountWatcher,HomeFieldGatherEvent,HomeFieldGatherCountWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'HomeFieldGatherCountWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 1269: range 0000000014D1F2BA-0000000014D1F307
void __cdecl HomeFieldGatherCountWatcher::~HomeFieldGatherCountWatcher(HomeFieldGatherCountWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'HomeFieldGatherCountWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<HomeFieldGatherCountWatcher,HomeFieldGatherEvent,HomeFieldGatherCountWatcherParam>::~ServerWatcher(this);
};

// Line 1269: range 0000000014D1F308-0000000014D1F332
void __cdecl HomeFieldGatherCountWatcher::~HomeFieldGatherCountWatcher(HomeFieldGatherCountWatcher *const this)
{
  HomeFieldGatherCountWatcher::~HomeFieldGatherCountWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 1276: range 0000000014D0050A-0000000014D00557
void __cdecl ArrangementFurnitureWatcher::ArrangementFurnitureWatcher(ArrangementFurnitureWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  RefreshableServerWatcher<ArrangementFurnitureWatcher,HomeArrangementFurnitureEvent,ArrangementFurnitureWatcherParam>::RefreshableServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'ArrangementFurnitureWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 1276: range 0000000014D1F240-0000000014D1F28D
void __cdecl ArrangementFurnitureWatcher::~ArrangementFurnitureWatcher(ArrangementFurnitureWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'ArrangementFurnitureWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  RefreshableServerWatcher<ArrangementFurnitureWatcher,HomeArrangementFurnitureEvent,ArrangementFurnitureWatcherParam>::~RefreshableServerWatcher(this);
};

// Line 1276: range 0000000014D1F28E-0000000014D1F2B8
void __cdecl ArrangementFurnitureWatcher::~ArrangementFurnitureWatcher(ArrangementFurnitureWatcher *const this)
{
  ArrangementFurnitureWatcher::~ArrangementFurnitureWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 1284: range 0000000014D008F8-0000000014D00945
void __cdecl GalleryFishReachScoreWatcher::GalleryFishReachScoreWatcher(GalleryFishReachScoreWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<GalleryFishReachScoreWatcher,GalleryFishSettleEvent,GalleryFishReachScoreWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'GalleryFishReachScoreWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 1284: range 0000000014D1F214-0000000014D1F23E
void __cdecl GalleryFishReachScoreWatcher::~GalleryFishReachScoreWatcher(GalleryFishReachScoreWatcher *const this)
{
  GalleryFishReachScoreWatcher::~GalleryFishReachScoreWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 1284: range 0000000014D1F1C6-0000000014D1F213
void __cdecl GalleryFishReachScoreWatcher::~GalleryFishReachScoreWatcher(GalleryFishReachScoreWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'GalleryFishReachScoreWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<GalleryFishReachScoreWatcher,GalleryFishSettleEvent,GalleryFishReachScoreWatcherParam>::~ServerWatcher(this);
};

// Line 1291: range 0000000014D00DAE-0000000014D00DFB
void __cdecl AccumulateDailyLoginWatcher::AccumulateDailyLoginWatcher(AccumulateDailyLoginWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  RefreshableServerWatcher<AccumulateDailyLoginWatcher,PlayerLoginEvent,AccumulateDailyLoginWatcherParam>::RefreshableServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'AccumulateDailyLoginWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 1291: range 0000000014D1F19A-0000000014D1F1C4
void __cdecl AccumulateDailyLoginWatcher::~AccumulateDailyLoginWatcher(AccumulateDailyLoginWatcher *const this)
{
  AccumulateDailyLoginWatcher::~AccumulateDailyLoginWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 1291: range 0000000014D1F14C-0000000014D1F199
void __cdecl AccumulateDailyLoginWatcher::~AccumulateDailyLoginWatcher(AccumulateDailyLoginWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'AccumulateDailyLoginWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  RefreshableServerWatcher<AccumulateDailyLoginWatcher,PlayerLoginEvent,AccumulateDailyLoginWatcherParam>::~RefreshableServerWatcher(this);
};

// Line 1299: range 0000000014D0119C-0000000014D011E9
void __cdecl MpKillMonsterIdNumWatcher::MpKillMonsterIdNumWatcher(MpKillMonsterIdNumWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<MpKillMonsterIdNumWatcher,MpKillMonsterNumEvent,MpKillMonsterIdNumWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'MpKillMonsterIdNumWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 1299: range 0000000014D1F0D2-0000000014D1F11F
void __cdecl MpKillMonsterIdNumWatcher::~MpKillMonsterIdNumWatcher(MpKillMonsterIdNumWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'MpKillMonsterIdNumWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<MpKillMonsterIdNumWatcher,MpKillMonsterNumEvent,MpKillMonsterIdNumWatcherParam>::~ServerWatcher(this);
};

// Line 1299: range 0000000014D1F120-0000000014D1F14A
void __cdecl MpKillMonsterIdNumWatcher::~MpKillMonsterIdNumWatcher(MpKillMonsterIdNumWatcher *const this)
{
  MpKillMonsterIdNumWatcher::~MpKillMonsterIdNumWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 1306: range 0000000014D0158A-0000000014D015D7
void __cdecl FishingSuccNumWatcher::FishingSuccNumWatcher(FishingSuccNumWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<FishingSuccNumWatcher,FishingSuccEvent,FishingSuccNumWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'FishingSuccNumWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 1306: range 0000000014D1F0A6-0000000014D1F0D0
void __cdecl FishingSuccNumWatcher::~FishingSuccNumWatcher(FishingSuccNumWatcher *const this)
{
  FishingSuccNumWatcher::~FishingSuccNumWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 1306: range 0000000014D1F058-0000000014D1F0A5
void __cdecl FishingSuccNumWatcher::~FishingSuccNumWatcher(FishingSuccNumWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'FishingSuccNumWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<FishingSuccNumWatcher,FishingSuccEvent,FishingSuccNumWatcherParam>::~ServerWatcher(this);
};

// Line 1313: range 0000000014D01978-0000000014D019C5
void __cdecl FishingFailNumWatcher::FishingFailNumWatcher(FishingFailNumWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<FishingFailNumWatcher,FishingFailEvent,FishingFailNumWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'FishingFailNumWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 1313: range 0000000014D1EFDE-0000000014D1F02B
void __cdecl FishingFailNumWatcher::~FishingFailNumWatcher(FishingFailNumWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'FishingFailNumWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<FishingFailNumWatcher,FishingFailEvent,FishingFailNumWatcherParam>::~ServerWatcher(this);
};

// Line 1313: range 0000000014D1F02C-0000000014D1F056
void __cdecl FishingFailNumWatcher::~FishingFailNumWatcher(FishingFailNumWatcher *const this)
{
  FishingFailNumWatcher::~FishingFailNumWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 1320: range 0000000014D01D66-0000000014D01DB3
void __cdecl FishingEmptyPoolWatcher::FishingEmptyPoolWatcher(FishingEmptyPoolWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<FishingEmptyPoolWatcher,FishingEmptyPoolEvent,FishingEmptyPoolWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'FishingEmptyPoolWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 1320: range 0000000014D1EFB2-0000000014D1EFDC
void __cdecl FishingEmptyPoolWatcher::~FishingEmptyPoolWatcher(FishingEmptyPoolWatcher *const this)
{
  FishingEmptyPoolWatcher::~FishingEmptyPoolWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 1320: range 0000000014D1EF64-0000000014D1EFB1
void __cdecl FishingEmptyPoolWatcher::~FishingEmptyPoolWatcher(FishingEmptyPoolWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'FishingEmptyPoolWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<FishingEmptyPoolWatcher,FishingEmptyPoolEvent,FishingEmptyPoolWatcherParam>::~ServerWatcher(this);
};

// Line 1327: range 0000000014D02154-0000000014D021A1
void __cdecl FishingShockFishWatcher::FishingShockFishWatcher(FishingShockFishWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<FishingShockFishWatcher,FishingShockEvent,FishingShockFishWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'FishingShockFishWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 1327: range 0000000014D1EF38-0000000014D1EF62
void __cdecl FishingShockFishWatcher::~FishingShockFishWatcher(FishingShockFishWatcher *const this)
{
  FishingShockFishWatcher::~FishingShockFishWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 1327: range 0000000014D1EEEA-0000000014D1EF37
void __cdecl FishingShockFishWatcher::~FishingShockFishWatcher(FishingShockFishWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'FishingShockFishWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<FishingShockFishWatcher,FishingShockEvent,FishingShockFishWatcherParam>::~ServerWatcher(this);
};

// Line 1334: range 0000000014D02542-0000000014D0258F
void __cdecl FishingKeepBonusWatcher::FishingKeepBonusWatcher(FishingKeepBonusWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<FishingKeepBonusWatcher,FishingKeepBonusEvent,FishingKeepBonusWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'FishingKeepBonusWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 1334: range 0000000014D1EEBE-0000000014D1EEE8
void __cdecl FishingKeepBonusWatcher::~FishingKeepBonusWatcher(FishingKeepBonusWatcher *const this)
{
  FishingKeepBonusWatcher::~FishingKeepBonusWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 1334: range 0000000014D1EE70-0000000014D1EEBD
void __cdecl FishingKeepBonusWatcher::~FishingKeepBonusWatcher(FishingKeepBonusWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'FishingKeepBonusWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<FishingKeepBonusWatcher,FishingKeepBonusEvent,FishingKeepBonusWatcherParam>::~ServerWatcher(this);
};

// Line 1341: range 0000000014D029F8-0000000014D02A45
void __cdecl UnlockScenePointWatcher::UnlockScenePointWatcher(UnlockScenePointWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  RefreshableServerWatcher<UnlockScenePointWatcher,UnlockScenePointEvent,UnlockScenePointWatcherParam>::RefreshableServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'UnlockScenePointWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 1341: range 0000000014D1EE44-0000000014D1EE6E
void __cdecl UnlockScenePointWatcher::~UnlockScenePointWatcher(UnlockScenePointWatcher *const this)
{
  UnlockScenePointWatcher::~UnlockScenePointWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 1341: range 0000000014D1EDF6-0000000014D1EE43
void __cdecl UnlockScenePointWatcher::~UnlockScenePointWatcher(UnlockScenePointWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'UnlockScenePointWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  RefreshableServerWatcher<UnlockScenePointWatcher,UnlockScenePointEvent,UnlockScenePointWatcherParam>::~RefreshableServerWatcher(this);
};

// Line 1348: range 0000000014D02DE6-0000000014D02E33
void __cdecl ObtainItemNumWatcher::ObtainItemNumWatcher(ObtainItemNumWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<ObtainItemNumWatcher,ObtainItemEvent,ObtainItemNumWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'ObtainItemNumWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 1348: range 0000000014D1ED7C-0000000014D1EDC9
void __cdecl ObtainItemNumWatcher::~ObtainItemNumWatcher(ObtainItemNumWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'ObtainItemNumWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<ObtainItemNumWatcher,ObtainItemEvent,ObtainItemNumWatcherParam>::~ServerWatcher(this);
};

// Line 1348: range 0000000014D1EDCA-0000000014D1EDF4
void __cdecl ObtainItemNumWatcher::~ObtainItemNumWatcher(ObtainItemNumWatcher *const this)
{
  ObtainItemNumWatcher::~ObtainItemNumWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 1354: range 0000000014D031D4-0000000014D03221
void __cdecl CaptureAnimalWatcher::CaptureAnimalWatcher(CaptureAnimalWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<CaptureAnimalWatcher,CaptureSuccEvent,CaptureAnimalWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'CaptureAnimalWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 1354: range 0000000014D1ED02-0000000014D1ED4F
void __cdecl CaptureAnimalWatcher::~CaptureAnimalWatcher(CaptureAnimalWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'CaptureAnimalWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<CaptureAnimalWatcher,CaptureSuccEvent,CaptureAnimalWatcherParam>::~ServerWatcher(this);
};

// Line 1354: range 0000000014D1ED50-0000000014D1ED7A
void __cdecl CaptureAnimalWatcher::~CaptureAnimalWatcher(CaptureAnimalWatcher *const this)
{
  CaptureAnimalWatcher::~CaptureAnimalWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 1360: range 0000000014D035C2-0000000014D0360F
void __cdecl CreateCustomDungeonWatcher::CreateCustomDungeonWatcher(CreateCustomDungeonWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<CreateCustomDungeonWatcher,CreateCustomDungeonEvent,CreateCustomDungeonWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'CreateCustomDungeonWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 1360: range 0000000014D1EC88-0000000014D1ECD5
void __cdecl CreateCustomDungeonWatcher::~CreateCustomDungeonWatcher(CreateCustomDungeonWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'CreateCustomDungeonWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<CreateCustomDungeonWatcher,CreateCustomDungeonEvent,CreateCustomDungeonWatcherParam>::~ServerWatcher(this);
};

// Line 1360: range 0000000014D1ECD6-0000000014D1ED00
void __cdecl CreateCustomDungeonWatcher::~CreateCustomDungeonWatcher(CreateCustomDungeonWatcher *const this)
{
  CreateCustomDungeonWatcher::~CreateCustomDungeonWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 1366: range 0000000014D039B0-0000000014D039FD
void __cdecl PublishCustomDungeonWatcher::PublishCustomDungeonWatcher(PublishCustomDungeonWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<PublishCustomDungeonWatcher,PublishCustomDungeonEvent,PublishCustomDungeonWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'PublishCustomDungeonWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 1366: range 0000000014D1EC0E-0000000014D1EC5B
void __cdecl PublishCustomDungeonWatcher::~PublishCustomDungeonWatcher(PublishCustomDungeonWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'PublishCustomDungeonWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<PublishCustomDungeonWatcher,PublishCustomDungeonEvent,PublishCustomDungeonWatcherParam>::~ServerWatcher(this);
};

// Line 1366: range 0000000014D1EC5C-0000000014D1EC86
void __cdecl PublishCustomDungeonWatcher::~PublishCustomDungeonWatcher(PublishCustomDungeonWatcher *const this)
{
  PublishCustomDungeonWatcher::~PublishCustomDungeonWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 1372: range 0000000014D03D9E-0000000014D03DEB
void __cdecl PlayOtherCustomDungeonWatcher::PlayOtherCustomDungeonWatcher(PlayOtherCustomDungeonWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<PlayOtherCustomDungeonWatcher,PlayCustomDungeonEvent,PlayOtherCustomDungeonWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'PlayOtherCustomDungeonWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 1372: range 0000000014D1EB94-0000000014D1EBE1
void __cdecl PlayOtherCustomDungeonWatcher::~PlayOtherCustomDungeonWatcher(PlayOtherCustomDungeonWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'PlayOtherCustomDungeonWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<PlayOtherCustomDungeonWatcher,PlayCustomDungeonEvent,PlayOtherCustomDungeonWatcherParam>::~ServerWatcher(this);
};

// Line 1372: range 0000000014D1EBE2-0000000014D1EC0C
void __cdecl PlayOtherCustomDungeonWatcher::~PlayOtherCustomDungeonWatcher(PlayOtherCustomDungeonWatcher *const this)
{
  PlayOtherCustomDungeonWatcher::~PlayOtherCustomDungeonWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 1378: range 0000000014D0418C-0000000014D041D9
void __cdecl FinishCustomDungeonOfficialWatcher::FinishCustomDungeonOfficialWatcher(
        FinishCustomDungeonOfficialWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<FinishCustomDungeonOfficialWatcher,OfficialCustomDungeonFinishEvent,FinishCustomDungeonOfficialWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'FinishCustomDungeonOfficialWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 1378: range 0000000014D1EB1A-0000000014D1EB67
void __cdecl FinishCustomDungeonOfficialWatcher::~FinishCustomDungeonOfficialWatcher(
        FinishCustomDungeonOfficialWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'FinishCustomDungeonOfficialWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<FinishCustomDungeonOfficialWatcher,OfficialCustomDungeonFinishEvent,FinishCustomDungeonOfficialWatcherParam>::~ServerWatcher(this);
};

// Line 1378: range 0000000014D1EB68-0000000014D1EB92
void __cdecl FinishCustomDungeonOfficialWatcher::~FinishCustomDungeonOfficialWatcher(
        FinishCustomDungeonOfficialWatcher *const this)
{
  FinishCustomDungeonOfficialWatcher::~FinishCustomDungeonOfficialWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 1384: range 0000000014D0457A-0000000014D045C7
void __cdecl CustomDungeonOfficialCoinWatcher::CustomDungeonOfficialCoinWatcher(
        CustomDungeonOfficialCoinWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<CustomDungeonOfficialCoinWatcher,CustomDungeonOfficialCoinEvent,CustomDungeonOfficialCoinWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'CustomDungeonOfficialCoinWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 1384: range 0000000014D1EAEE-0000000014D1EB18
void __cdecl CustomDungeonOfficialCoinWatcher::~CustomDungeonOfficialCoinWatcher(
        CustomDungeonOfficialCoinWatcher *const this)
{
  CustomDungeonOfficialCoinWatcher::~CustomDungeonOfficialCoinWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 1384: range 0000000014D1EAA0-0000000014D1EAED
void __cdecl CustomDungeonOfficialCoinWatcher::~CustomDungeonOfficialCoinWatcher(
        CustomDungeonOfficialCoinWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'CustomDungeonOfficialCoinWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<CustomDungeonOfficialCoinWatcher,CustomDungeonOfficialCoinEvent,CustomDungeonOfficialCoinWatcherParam>::~ServerWatcher(this);
};

// Line 1390: range 0000000014D04968-0000000014D049B5
void __cdecl GalleryTriathlonWatcher::GalleryTriathlonWatcher(GalleryTriathlonWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<GalleryTriathlonWatcher,GalleryTriathlonScoreEvent,GalleryTriathlonWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'GalleryTriathlonWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 1390: range 0000000014D1EA74-0000000014D1EA9E
void __cdecl GalleryTriathlonWatcher::~GalleryTriathlonWatcher(GalleryTriathlonWatcher *const this)
{
  GalleryTriathlonWatcher::~GalleryTriathlonWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 1390: range 0000000014D1EA26-0000000014D1EA73
void __cdecl GalleryTriathlonWatcher::~GalleryTriathlonWatcher(GalleryTriathlonWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'GalleryTriathlonWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<GalleryTriathlonWatcher,GalleryTriathlonScoreEvent,GalleryTriathlonWatcherParam>::~ServerWatcher(this);
};

// Line 1397: range 0000000014D04D56-0000000014D04DA3
void __cdecl CaptureEnvAnimalReachNumWatcher::CaptureEnvAnimalReachNumWatcher(
        CaptureEnvAnimalReachNumWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<CaptureEnvAnimalReachNumWatcher,EnvAnimalEvent,CaptureEnvAnimalReachNumWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'CaptureEnvAnimalReachNumWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 1397: range 0000000014D1E9FA-0000000014D1EA24
void __cdecl CaptureEnvAnimalReachNumWatcher::~CaptureEnvAnimalReachNumWatcher(
        CaptureEnvAnimalReachNumWatcher *const this)
{
  CaptureEnvAnimalReachNumWatcher::~CaptureEnvAnimalReachNumWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 1397: range 0000000014D1E9AC-0000000014D1E9F9
void __cdecl CaptureEnvAnimalReachNumWatcher::~CaptureEnvAnimalReachNumWatcher(
        CaptureEnvAnimalReachNumWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'CaptureEnvAnimalReachNumWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<CaptureEnvAnimalReachNumWatcher,EnvAnimalEvent,CaptureEnvAnimalReachNumWatcherParam>::~ServerWatcher(this);
};

// Line 1404: range 0000000014D0520C-0000000014D05259
void __cdecl HomeUnlockBgmCountWatcher::HomeUnlockBgmCountWatcher(HomeUnlockBgmCountWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  RefreshableServerWatcher<HomeUnlockBgmCountWatcher,HomeBgmUnlockEvent,HomeUnlockBgmCountWatcherParam>::RefreshableServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'HomeUnlockBgmCountWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 1404: range 0000000014D1E980-0000000014D1E9AA
void __cdecl HomeUnlockBgmCountWatcher::~HomeUnlockBgmCountWatcher(HomeUnlockBgmCountWatcher *const this)
{
  HomeUnlockBgmCountWatcher::~HomeUnlockBgmCountWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 1404: range 0000000014D1E932-0000000014D1E97F
void __cdecl HomeUnlockBgmCountWatcher::~HomeUnlockBgmCountWatcher(HomeUnlockBgmCountWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'HomeUnlockBgmCountWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  RefreshableServerWatcher<HomeUnlockBgmCountWatcher,HomeBgmUnlockEvent,HomeUnlockBgmCountWatcherParam>::~RefreshableServerWatcher(this);
};

// Line 1412: range 0000000014D055FA-0000000014D05647
void __cdecl GravenInnocenceRaceWatcher::GravenInnocenceRaceWatcher(GravenInnocenceRaceWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<GravenInnocenceRaceWatcher,GalleryGravenInnocenceRaceScoreEvent,GravenInnocenceRaceWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'GravenInnocenceRaceWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 1412: range 0000000014D1E8B8-0000000014D1E905
void __cdecl GravenInnocenceRaceWatcher::~GravenInnocenceRaceWatcher(GravenInnocenceRaceWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'GravenInnocenceRaceWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<GravenInnocenceRaceWatcher,GalleryGravenInnocenceRaceScoreEvent,GravenInnocenceRaceWatcherParam>::~ServerWatcher(this);
};

// Line 1412: range 0000000014D1E906-0000000014D1E930
void __cdecl GravenInnocenceRaceWatcher::~GravenInnocenceRaceWatcher(GravenInnocenceRaceWatcher *const this)
{
  GravenInnocenceRaceWatcher::~GravenInnocenceRaceWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 1419: range 0000000014D05AB0-0000000014D05AFD
void __cdecl GCGObtainCardWatcher::GCGObtainCardWatcher(GCGObtainCardWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  RefreshableServerWatcher<GCGObtainCardWatcher,GCGAddCardEvent,GCGObtainCardWatcherParam>::RefreshableServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'GCGObtainCardWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 1419: range 0000000014D1E88C-0000000014D1E8B6
void __cdecl GCGObtainCardWatcher::~GCGObtainCardWatcher(GCGObtainCardWatcher *const this)
{
  GCGObtainCardWatcher::~GCGObtainCardWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 1419: range 0000000014D1E83E-0000000014D1E88B
void __cdecl GCGObtainCardWatcher::~GCGObtainCardWatcher(GCGObtainCardWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'GCGObtainCardWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  RefreshableServerWatcher<GCGObtainCardWatcher,GCGAddCardEvent,GCGObtainCardWatcherParam>::~RefreshableServerWatcher(this);
};

// Line 1427: range 0000000014D05E9E-0000000014D05EEB
void __cdecl GCGObtainCoinWatcher::GCGObtainCoinWatcher(GCGObtainCoinWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<GCGObtainCoinWatcher,GCGCoinEvent,GCGObtainCoinWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'GCGObtainCoinWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 1427: range 0000000014D1E812-0000000014D1E83C
void __cdecl GCGObtainCoinWatcher::~GCGObtainCoinWatcher(GCGObtainCoinWatcher *const this)
{
  GCGObtainCoinWatcher::~GCGObtainCoinWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 1427: range 0000000014D1E7C4-0000000014D1E811
void __cdecl GCGObtainCoinWatcher::~GCGObtainCoinWatcher(GCGObtainCoinWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'GCGObtainCoinWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<GCGObtainCoinWatcher,GCGCoinEvent,GCGObtainCoinWatcherParam>::~ServerWatcher(this);
};

// Line 1434: range 0000000014D06354-0000000014D063A1
void __cdecl GCGObtainCharacterCardWatcher::GCGObtainCharacterCardWatcher(GCGObtainCharacterCardWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  RefreshableServerWatcher<GCGObtainCharacterCardWatcher,GCGAddCardEvent,GCGObtainCharacterCardWatcherParam>::RefreshableServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'GCGObtainCharacterCardWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 1434: range 0000000014D1E798-0000000014D1E7C2
void __cdecl GCGObtainCharacterCardWatcher::~GCGObtainCharacterCardWatcher(GCGObtainCharacterCardWatcher *const this)
{
  GCGObtainCharacterCardWatcher::~GCGObtainCharacterCardWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 1434: range 0000000014D1E74A-0000000014D1E797
void __cdecl GCGObtainCharacterCardWatcher::~GCGObtainCharacterCardWatcher(GCGObtainCharacterCardWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'GCGObtainCharacterCardWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  RefreshableServerWatcher<GCGObtainCharacterCardWatcher,GCGAddCardEvent,GCGObtainCharacterCardWatcherParam>::~RefreshableServerWatcher(this);
};

// Line 1442: range 0000000014D06742-0000000014D0678F
void __cdecl GCGFinishWeekChallengeWatcher::GCGFinishWeekChallengeWatcher(GCGFinishWeekChallengeWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<GCGFinishWeekChallengeWatcher,GCGFinishWeekChallengeEvent,GCGFinishWeekChallengeWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'GCGFinishWeekChallengeWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 1442: range 0000000014D1E6D0-0000000014D1E71D
void __cdecl GCGFinishWeekChallengeWatcher::~GCGFinishWeekChallengeWatcher(GCGFinishWeekChallengeWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'GCGFinishWeekChallengeWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<GCGFinishWeekChallengeWatcher,GCGFinishWeekChallengeEvent,GCGFinishWeekChallengeWatcherParam>::~ServerWatcher(this);
};

// Line 1442: range 0000000014D1E71E-0000000014D1E748
void __cdecl GCGFinishWeekChallengeWatcher::~GCGFinishWeekChallengeWatcher(GCGFinishWeekChallengeWatcher *const this)
{
  GCGFinishWeekChallengeWatcher::~GCGFinishWeekChallengeWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 1449: range 0000000014D06BF8-0000000014D06C45
void __cdecl GCGWorldChallengeTotalStarNumWatcher::GCGWorldChallengeTotalStarNumWatcher(
        GCGWorldChallengeTotalStarNumWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  RefreshableServerWatcher<GCGWorldChallengeTotalStarNumWatcher,GCGLevelSettleEvent,GCGWorldChallengeTotalStarNumWatcherParam>::RefreshableServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'GCGWorldChallengeTotalStarNumWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 1449: range 0000000014D1E656-0000000014D1E6A3
void __cdecl GCGWorldChallengeTotalStarNumWatcher::~GCGWorldChallengeTotalStarNumWatcher(
        GCGWorldChallengeTotalStarNumWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'GCGWorldChallengeTotalStarNumWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  RefreshableServerWatcher<GCGWorldChallengeTotalStarNumWatcher,GCGLevelSettleEvent,GCGWorldChallengeTotalStarNumWatcherParam>::~RefreshableServerWatcher(this);
};

// Line 1449: range 0000000014D1E6A4-0000000014D1E6CE
void __cdecl GCGWorldChallengeTotalStarNumWatcher::~GCGWorldChallengeTotalStarNumWatcher(
        GCGWorldChallengeTotalStarNumWatcher *const this)
{
  GCGWorldChallengeTotalStarNumWatcher::~GCGWorldChallengeTotalStarNumWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 1457: range 0000000014D070AE-0000000014D070FB
void __cdecl GCGValidDeckNumWatcher::GCGValidDeckNumWatcher(GCGValidDeckNumWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  RefreshableServerWatcher<GCGValidDeckNumWatcher,GCGSaveDeckEvent,GCGValidDeckNumWatcherParam>::RefreshableServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'GCGValidDeckNumWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 1457: range 0000000014D1E62A-0000000014D1E654
void __cdecl GCGValidDeckNumWatcher::~GCGValidDeckNumWatcher(GCGValidDeckNumWatcher *const this)
{
  GCGValidDeckNumWatcher::~GCGValidDeckNumWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 1457: range 0000000014D1E5DC-0000000014D1E629
void __cdecl GCGValidDeckNumWatcher::~GCGValidDeckNumWatcher(GCGValidDeckNumWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'GCGValidDeckNumWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  RefreshableServerWatcher<GCGValidDeckNumWatcher,GCGSaveDeckEvent,GCGValidDeckNumWatcherParam>::~RefreshableServerWatcher(this);
};

// Line 1465: range 0000000014D07564-0000000014D075B1
void __cdecl GCGUnlockGoldFaceNumWatcher::GCGUnlockGoldFaceNumWatcher(GCGUnlockGoldFaceNumWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  RefreshableServerWatcher<GCGUnlockGoldFaceNumWatcher,GCGUnlockCardFaceEvent,GCGUnlockGoldFaceNumWatcherParam>::RefreshableServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'GCGUnlockGoldFaceNumWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 1465: range 0000000014D1E5B0-0000000014D1E5DA
void __cdecl GCGUnlockGoldFaceNumWatcher::~GCGUnlockGoldFaceNumWatcher(GCGUnlockGoldFaceNumWatcher *const this)
{
  GCGUnlockGoldFaceNumWatcher::~GCGUnlockGoldFaceNumWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 1465: range 0000000014D1E562-0000000014D1E5AF
void __cdecl GCGUnlockGoldFaceNumWatcher::~GCGUnlockGoldFaceNumWatcher(GCGUnlockGoldFaceNumWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'GCGUnlockGoldFaceNumWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  RefreshableServerWatcher<GCGUnlockGoldFaceNumWatcher,GCGUnlockCardFaceEvent,GCGUnlockGoldFaceNumWatcherParam>::~RefreshableServerWatcher(this);
};

// Line 1473: range 0000000014D07A1A-0000000014D07A67
void __cdecl GCGUnlockCharacterGoldFaceNumWatcher::GCGUnlockCharacterGoldFaceNumWatcher(
        GCGUnlockCharacterGoldFaceNumWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  RefreshableServerWatcher<GCGUnlockCharacterGoldFaceNumWatcher,GCGUnlockCardFaceEvent,GCGUnlockCharacterGoldFaceNumWatcherParam>::RefreshableServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'GCGUnlockCharacterGoldFaceNumWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 1473: range 0000000014D1E536-0000000014D1E560
void __cdecl GCGUnlockCharacterGoldFaceNumWatcher::~GCGUnlockCharacterGoldFaceNumWatcher(
        GCGUnlockCharacterGoldFaceNumWatcher *const this)
{
  GCGUnlockCharacterGoldFaceNumWatcher::~GCGUnlockCharacterGoldFaceNumWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 1473: range 0000000014D1E4E8-0000000014D1E535
void __cdecl GCGUnlockCharacterGoldFaceNumWatcher::~GCGUnlockCharacterGoldFaceNumWatcher(
        GCGUnlockCharacterGoldFaceNumWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'GCGUnlockCharacterGoldFaceNumWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  RefreshableServerWatcher<GCGUnlockCharacterGoldFaceNumWatcher,GCGUnlockCardFaceEvent,GCGUnlockCharacterGoldFaceNumWatcherParam>::~RefreshableServerWatcher(this);
};

// Line 1481: range 0000000014D07ED0-0000000014D07F1D
void __cdecl GCGFullProficiencyCharacterNumWatcher::GCGFullProficiencyCharacterNumWatcher(
        GCGFullProficiencyCharacterNumWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  RefreshableServerWatcher<GCGFullProficiencyCharacterNumWatcher,GCGAddCardProficiencyEvent,GCGFullProficiencyCharacterNumWatcherParam>::RefreshableServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'GCGFullProficiencyCharacterNumWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 1481: range 0000000014D1E4BC-0000000014D1E4E6
void __cdecl GCGFullProficiencyCharacterNumWatcher::~GCGFullProficiencyCharacterNumWatcher(
        GCGFullProficiencyCharacterNumWatcher *const this)
{
  GCGFullProficiencyCharacterNumWatcher::~GCGFullProficiencyCharacterNumWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 1481: range 0000000014D1E46E-0000000014D1E4BB
void __cdecl GCGFullProficiencyCharacterNumWatcher::~GCGFullProficiencyCharacterNumWatcher(
        GCGFullProficiencyCharacterNumWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'GCGFullProficiencyCharacterNumWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  RefreshableServerWatcher<GCGFullProficiencyCharacterNumWatcher,GCGAddCardProficiencyEvent,GCGFullProficiencyCharacterNumWatcherParam>::~RefreshableServerWatcher(this);
};

// Line 1489: range 0000000014D08386-0000000014D083D3
void __cdecl GCGFinishHardCharacterChallengeWatcher::GCGFinishHardCharacterChallengeWatcher(
        GCGFinishHardCharacterChallengeWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  RefreshableServerWatcher<GCGFinishHardCharacterChallengeWatcher,GCGLevelSettleEvent,GCGFinishHardCharacterChallengeWatcherParam>::RefreshableServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'GCGFinishHardCharacterChallengeWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 1489: range 0000000014D1E3F4-0000000014D1E441
void __cdecl GCGFinishHardCharacterChallengeWatcher::~GCGFinishHardCharacterChallengeWatcher(
        GCGFinishHardCharacterChallengeWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'GCGFinishHardCharacterChallengeWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  RefreshableServerWatcher<GCGFinishHardCharacterChallengeWatcher,GCGLevelSettleEvent,GCGFinishHardCharacterChallengeWatcherParam>::~RefreshableServerWatcher(this);
};

// Line 1489: range 0000000014D1E442-0000000014D1E46C
void __cdecl GCGFinishHardCharacterChallengeWatcher::~GCGFinishHardCharacterChallengeWatcher(
        GCGFinishHardCharacterChallengeWatcher *const this)
{
  GCGFinishHardCharacterChallengeWatcher::~GCGFinishHardCharacterChallengeWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 1497: range 0000000014D0883C-0000000014D08889
void __cdecl GCGFinishNormalBossChallengeWatcher::GCGFinishNormalBossChallengeWatcher(
        GCGFinishNormalBossChallengeWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  RefreshableServerWatcher<GCGFinishNormalBossChallengeWatcher,GCGLevelSettleEvent,GCGFinishNormalBossChallengeWatcherParam>::RefreshableServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'GCGFinishNormalBossChallengeWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 1497: range 0000000014D1E37A-0000000014D1E3C7
void __cdecl GCGFinishNormalBossChallengeWatcher::~GCGFinishNormalBossChallengeWatcher(
        GCGFinishNormalBossChallengeWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'GCGFinishNormalBossChallengeWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  RefreshableServerWatcher<GCGFinishNormalBossChallengeWatcher,GCGLevelSettleEvent,GCGFinishNormalBossChallengeWatcherParam>::~RefreshableServerWatcher(this);
};

// Line 1497: range 0000000014D1E3C8-0000000014D1E3F2
void __cdecl GCGFinishNormalBossChallengeWatcher::~GCGFinishNormalBossChallengeWatcher(
        GCGFinishNormalBossChallengeWatcher *const this)
{
  GCGFinishNormalBossChallengeWatcher::~GCGFinishNormalBossChallengeWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 1505: range 0000000014D08CF2-0000000014D08D3F
void __cdecl GCGFinishHardBossChallengeWatcher::GCGFinishHardBossChallengeWatcher(
        GCGFinishHardBossChallengeWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  RefreshableServerWatcher<GCGFinishHardBossChallengeWatcher,GCGLevelSettleEvent,GCGFinishHardBossChallengeWatcherParam>::RefreshableServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'GCGFinishHardBossChallengeWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 1505: range 0000000014D1E34E-0000000014D1E378
void __cdecl GCGFinishHardBossChallengeWatcher::~GCGFinishHardBossChallengeWatcher(
        GCGFinishHardBossChallengeWatcher *const this)
{
  GCGFinishHardBossChallengeWatcher::~GCGFinishHardBossChallengeWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 1505: range 0000000014D1E300-0000000014D1E34D
void __cdecl GCGFinishHardBossChallengeWatcher::~GCGFinishHardBossChallengeWatcher(
        GCGFinishHardBossChallengeWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'GCGFinishHardBossChallengeWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  RefreshableServerWatcher<GCGFinishHardBossChallengeWatcher,GCGLevelSettleEvent,GCGFinishHardBossChallengeWatcherParam>::~RefreshableServerWatcher(this);
};

// Line 1513: range 0000000014D090E0-0000000014D0912D
void __cdecl GCGChallengeProgressWatcher::GCGChallengeProgressWatcher(GCGChallengeProgressWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<GCGChallengeProgressWatcher,GCGChallengeProgressEvent,GCGChallengeProgressWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'GCGChallengeProgressWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 1513: range 0000000014D1E2D4-0000000014D1E2FE
void __cdecl GCGChallengeProgressWatcher::~GCGChallengeProgressWatcher(GCGChallengeProgressWatcher *const this)
{
  GCGChallengeProgressWatcher::~GCGChallengeProgressWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 1513: range 0000000014D1E286-0000000014D1E2D3
void __cdecl GCGChallengeProgressWatcher::~GCGChallengeProgressWatcher(GCGChallengeProgressWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'GCGChallengeProgressWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<GCGChallengeProgressWatcher,GCGChallengeProgressEvent,GCGChallengeProgressWatcherParam>::~ServerWatcher(this);
};

// Line 1520: range 0000000014D094CE-0000000014D0951B
void __cdecl BuyShopItemIdWatcher::BuyShopItemIdWatcher(BuyShopItemIdWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<BuyShopItemIdWatcher,PlayerBuyShopEvent,BuyShopItemIdWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'BuyShopItemIdWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 1520: range 0000000014D1E25A-0000000014D1E284
void __cdecl BuyShopItemIdWatcher::~BuyShopItemIdWatcher(BuyShopItemIdWatcher *const this)
{
  BuyShopItemIdWatcher::~BuyShopItemIdWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 1520: range 0000000014D1E20C-0000000014D1E259
void __cdecl BuyShopItemIdWatcher::~BuyShopItemIdWatcher(BuyShopItemIdWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'BuyShopItemIdWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<BuyShopItemIdWatcher,PlayerBuyShopEvent,BuyShopItemIdWatcherParam>::~ServerWatcher(this);
};

// Line 1527: range 0000000014D098BC-0000000014D09909
void __cdecl BuyShopGoodsCountWatcher::BuyShopGoodsCountWatcher(BuyShopGoodsCountWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<BuyShopGoodsCountWatcher,PlayerBuyShopEvent,BuyShopGoodsCountWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'BuyShopGoodsCountWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 1527: range 0000000014D1E1E0-0000000014D1E20A
void __cdecl BuyShopGoodsCountWatcher::~BuyShopGoodsCountWatcher(BuyShopGoodsCountWatcher *const this)
{
  BuyShopGoodsCountWatcher::~BuyShopGoodsCountWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 1527: range 0000000014D1E192-0000000014D1E1DF
void __cdecl BuyShopGoodsCountWatcher::~BuyShopGoodsCountWatcher(BuyShopGoodsCountWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'BuyShopGoodsCountWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<BuyShopGoodsCountWatcher,PlayerBuyShopEvent,BuyShopGoodsCountWatcherParam>::~ServerWatcher(this);
};

// Line 1534: range 0000000014D09D72-0000000014D09DBF
void __cdecl EnterSceneNotDungeonWatcher::EnterSceneNotDungeonWatcher(EnterSceneNotDungeonWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  RefreshableServerWatcher<EnterSceneNotDungeonWatcher,PostEnterSceneEvent,EnterSceneNotDungeonWatcherParam>::RefreshableServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'EnterSceneNotDungeonWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 1534: range 0000000014D1E166-0000000014D1E190
void __cdecl EnterSceneNotDungeonWatcher::~EnterSceneNotDungeonWatcher(EnterSceneNotDungeonWatcher *const this)
{
  EnterSceneNotDungeonWatcher::~EnterSceneNotDungeonWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 1534: range 0000000014D1E118-0000000014D1E165
void __cdecl EnterSceneNotDungeonWatcher::~EnterSceneNotDungeonWatcher(EnterSceneNotDungeonWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'EnterSceneNotDungeonWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  RefreshableServerWatcher<EnterSceneNotDungeonWatcher,PostEnterSceneEvent,EnterSceneNotDungeonWatcherParam>::~RefreshableServerWatcher(this);
};
