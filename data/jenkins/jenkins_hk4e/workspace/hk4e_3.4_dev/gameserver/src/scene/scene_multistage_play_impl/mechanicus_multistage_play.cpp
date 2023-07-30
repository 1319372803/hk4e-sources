// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_multistage_play_impl/mechanicus_multistage_play.cpp

// Line 30: range 0000000016017D94-0000000016017F28
void __fastcall MechanicusMultistagePlay::setMaxExcapableMonsters(MechanicusMultistagePlay *const this, __int64 value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  uint32_t v5; // ecx
  char v6; // dl
  bool v7; // dl
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream v9; // [rsp+10h] [rbp-80h] BYREF
  char v10[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 8 value:29";
  *(_QWORD *)(v2 + 16) = MechanicusMultistagePlay::setMaxExcapableMonsters;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = value;
  v5 = *(_DWORD *)(v2 + 32);
  v6 = *(_BYTE *)(((unsigned __int64)&this->max_escapable_monsters_ >> 3) + 0x7FFF8000);
  LOBYTE(value) = v6 != 0;
  v7 = v6 != 0 && (char)((((_BYTE)this + 116) & 7) + 3) >= v6;
  if ( v7 )
    __asan_report_store4(&this->max_escapable_monsters_, value, v7);
  this->max_escapable_monsters_ = v5;
  common::milog::MiLogStream::create(
    &v9,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/scene_multistage_play_impl/mechanicus_multistage_play.cpp",
    "setMaxExcapableMonsters",
    32);
  v8 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
         &v9,
         (const char (*)[39])"[MECHANICUS] max_escapable_monsters_: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 32));
  common::milog::MiLogStream::~MiLogStream(&v9);
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 36: range 0000000016017F2A-00000000160181F6
void __fastcall MechanicusMultistagePlay::setExcapedMonsters(MechanicusMultistagePlay *const this, __int64 value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  unsigned __int64 v5; // rax
  int v6; // edi
  uint32_t v7; // ecx
  char v8; // al
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream v13; // [rsp+10h] [rbp-80h] BYREF
  char v14[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 8 value:35";
  *(_QWORD *)(v2 + 16) = MechanicusMultistagePlay::setExcapedMonsters;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = value;
  if ( *(_BYTE *)(((unsigned __int64)&this->excaped_monsters_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->excaped_monsters_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->excaped_monsters_ < *(_DWORD *)(v2 + 32) )
  {
    v5 = (unsigned __int64)std::map<unsigned int,unsigned int>::operator[](
                             &this->round_to_excaped_map_,
                             &this->current_round_);
    if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) != 0 && (char)((v5 & 7) + 3) >= *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
      v5 = __asan_report_load4();
    value = *(unsigned int *)v5;
    v6 = *(_DWORD *)(v2 + 32);
    if ( *(_BYTE *)(((unsigned __int64)&this->excaped_monsters_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->excaped_monsters_ >> 3) + 0x7FFF8000) <= 3 )
    {
      v6 = (_DWORD)this + 368;
      v5 = __asan_report_load4();
    }
    *(_DWORD *)v5 = value + v6 - this->excaped_monsters_;
  }
  v7 = *(_DWORD *)(v2 + 32);
  v8 = *(_BYTE *)(((unsigned __int64)&this->excaped_monsters_ >> 3) + 0x7FFF8000);
  if ( v8 != 0 && v8 <= 3 )
  {
    LOBYTE(value) = v8 != 0;
    __asan_report_store4(&this->excaped_monsters_, value, (_BYTE)this + 112);
  }
  this->excaped_monsters_ = v7;
  common::milog::MiLogStream::create(
    &v13,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/scene_multistage_play_impl/mechanicus_multistage_play.cpp",
    "setExcapedMonsters",
    42);
  v9 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
         &v13,
         (const char (*)[33])"[MECHANICUS] excaped_monsters_: ");
  v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 32));
  v11 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v10, (const char (*)[20])", round_to_escaped:");
  common::milog::MiLogStream::operator<<<unsigned int,unsigned int>(v11, &this->round_to_excaped_map_);
  common::milog::MiLogStream::~MiLogStream(&v13);
  MechanicusMultistagePlay::notifyExcapedMonsters(this);
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 47: range 00000000160181F8-000000001601839B
void __fastcall MechanicusMultistagePlay::setLeftMonsters(MechanicusMultistagePlay *const this, __int64 value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  uint32_t v5; // ecx
  char v6; // dl
  bool v7; // dl
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream v9; // [rsp+10h] [rbp-80h] BYREF
  char v10[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 8 value:46";
  *(_QWORD *)(v2 + 16) = MechanicusMultistagePlay::setLeftMonsters;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = value;
  v5 = *(_DWORD *)(v2 + 32);
  v6 = *(_BYTE *)(((unsigned __int64)&this->left_monsters_ >> 3) + 0x7FFF8000);
  LOBYTE(value) = v6 != 0;
  v7 = v6 != 0 && (char)((((_BYTE)this + 108) & 7) + 3) >= v6;
  if ( v7 )
    __asan_report_store4(&this->left_monsters_, value, v7);
  this->left_monsters_ = v5;
  common::milog::MiLogStream::create(
    &v9,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/scene_multistage_play_impl/mechanicus_multistage_play.cpp",
    "setLeftMonsters",
    49);
  v8 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
         &v9,
         (const char (*)[30])"[MECHANICUS] left_monsters_: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 32));
  common::milog::MiLogStream::~MiLogStream(&v9);
  MechanicusMultistagePlay::notifyLeftMonsters(this);
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 54: range 000000001601839C-0000000016018528
void __fastcall MechanicusMultistagePlay::setRounds(MechanicusMultistagePlay *const this, __int64 value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  uint32_t v5; // ecx
  char v6; // al
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream v8; // [rsp+10h] [rbp-80h] BYREF
  char v9[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 8 value:53";
  *(_QWORD *)(v2 + 16) = MechanicusMultistagePlay::setRounds;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = value;
  v5 = *(_DWORD *)(v2 + 32);
  v6 = *(_BYTE *)(((unsigned __int64)&this->rounds_ >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(value) = v6 != 0;
    __asan_report_store4(&this->rounds_, value, (_BYTE)this + 104);
  }
  this->rounds_ = v5;
  common::milog::MiLogStream::create(
    &v8,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/scene_multistage_play_impl/mechanicus_multistage_play.cpp",
    "setRounds",
    56);
  v7 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(&v8, (const char (*)[22])"[MECHANICUS] rounds: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 32));
  common::milog::MiLogStream::~MiLogStream(&v8);
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 60: range 000000001601852A-0000000016018849
void __fastcall MechanicusMultistagePlay::setCurrentRound(MechanicusMultistagePlay *const this, uint32_t value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream v11; // [rsp+10h] [rbp-A0h] BYREF
  char v12[128]; // [rsp+30h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 12 old_round:66 64 4 8 value:59";
  *(_QWORD *)(v2 + 16) = MechanicusMultistagePlay::setCurrentRound;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116348;
  *(_DWORD *)(v2 + 64) = value;
  if ( *(_BYTE *)(((unsigned __int64)&this->current_round_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->current_round_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( this->current_round_ < *(_DWORD *)(v2 + 64) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->current_round_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->current_round_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v2 + 48) = this->current_round_;
    this->current_round_ = *(_DWORD *)(v2 + 64);
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_multistage_play_impl/mechanicus_multistage_play.cpp",
      "setCurrentRound",
      68);
    v8 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
           &v11,
           (const char (*)[27])"[MECHANICUS] current_round");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 48));
    v10 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v9, (const char (*)[6])" --> ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &this->current_round_);
    common::milog::MiLogStream::~MiLogStream(&v11);
    MechanicusMultistagePlay::procServerGlobalValueOnNewRound(this);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_multistage_play_impl/mechanicus_multistage_play.cpp",
      "setCurrentRound",
      63);
    v5 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
           &v11,
           (const char (*)[44])"[MECHANICUS] can NOT revert current round: ");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->current_round_);
    v7 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v6, (const char (*)[6])" --> ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 64));
    common::milog::MiLogStream::~MiLogStream(&v11);
  }
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 73: range 000000001601884A-00000000160189DE
void __fastcall MechanicusMultistagePlay::setStageBonusBuildingPoints(
        MechanicusMultistagePlay *const this,
        __int64 value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  uint32_t v5; // ecx
  char v6; // dl
  bool v7; // dl
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream v9; // [rsp+10h] [rbp-80h] BYREF
  char v10[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 8 value:72";
  *(_QWORD *)(v2 + 16) = MechanicusMultistagePlay::setStageBonusBuildingPoints;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = value;
  v5 = *(_DWORD *)(v2 + 32);
  v6 = *(_BYTE *)(((unsigned __int64)&this->stage_bonus_building_points_ >> 3) + 0x7FFF8000);
  LOBYTE(value) = v6 != 0;
  v7 = v6 != 0 && (char)((((_BYTE)this - 44) & 7) + 3) >= v6;
  if ( v7 )
    __asan_report_store4(&this->stage_bonus_building_points_, value, v7);
  this->stage_bonus_building_points_ = v5;
  common::milog::MiLogStream::create(
    &v9,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/scene_multistage_play_impl/mechanicus_multistage_play.cpp",
    "setStageBonusBuildingPoints",
    75);
  v8 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
         &v9,
         (const char (*)[42])"[MECHANICUS] stage_bonus_building_points:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 32));
  common::milog::MiLogStream::~MiLogStream(&v9);
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 79: range 00000000160189E0-0000000016018B6C
void __fastcall MechanicusMultistagePlay::setCardFlipWaitSeconds(MechanicusMultistagePlay *const this, __int64 value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  uint32_t v5; // ecx
  char v6; // al
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream v8; // [rsp+10h] [rbp-80h] BYREF
  char v9[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 8 value:78";
  *(_QWORD *)(v2 + 16) = MechanicusMultistagePlay::setCardFlipWaitSeconds;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = value;
  v5 = *(_DWORD *)(v2 + 32);
  v6 = *(_BYTE *)(((unsigned __int64)&this->card_flip_wait_seconds_ >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(value) = v6 != 0;
    __asan_report_store4(&this->card_flip_wait_seconds_, value, (_BYTE)this - 48);
  }
  this->card_flip_wait_seconds_ = v5;
  common::milog::MiLogStream::create(
    &v8,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/scene_multistage_play_impl/mechanicus_multistage_play.cpp",
    "setCardFlipWaitSeconds",
    81);
  v7 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
         &v8,
         (const char (*)[38])"[MECHANICUS] card_flip_wait_seconds_:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 32));
  common::milog::MiLogStream::~MiLogStream(&v8);
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 85: range 0000000016018B6E-0000000016018CFA
void __fastcall MechanicusMultistagePlay::setBuildingStageSeconds(MechanicusMultistagePlay *const this, __int64 value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  uint32_t v5; // ecx
  char v6; // al
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream v8; // [rsp+10h] [rbp-80h] BYREF
  char v9[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 8 value:84";
  *(_QWORD *)(v2 + 16) = MechanicusMultistagePlay::setBuildingStageSeconds;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = value;
  v5 = *(_DWORD *)(v2 + 32);
  v6 = *(_BYTE *)(((unsigned __int64)&this->building_stage_seconds_ >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(value) = v6 != 0;
    __asan_report_store4(&this->building_stage_seconds_, value, (_BYTE)this - 64);
  }
  this->building_stage_seconds_ = v5;
  common::milog::MiLogStream::create(
    &v8,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/scene_multistage_play_impl/mechanicus_multistage_play.cpp",
    "setBuildingStageSeconds",
    87);
  v7 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
         &v8,
         (const char (*)[38])"[MECHANICUS] building_stage_seconds_:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 32));
  common::milog::MiLogStream::~MiLogStream(&v8);
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 91: range 0000000016018CFC-0000000016018F09
void __fastcall MechanicusMultistagePlay::addEntrancePoint(MechanicusMultistagePlay *const this, uint32_t point_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  const TreatreMechanicusExcelConfigMgr *ConfigMgr; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream v7; // [rsp+20h] [rbp-80h] BYREF
  char v8[96]; // [rsp+40h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 11 point_id:90";
  *(_QWORD *)(v2 + 16) = MechanicusMultistagePlay::addEntrancePoint;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = point_id;
  ConfigMgr = MechanicusMultistagePlay::getConfigMgr(this);
  if ( data::TreatreMechanicusExcelConfigMgrBase::findMechanicusMapPointExcelConfig(ConfigMgr, *(_DWORD *)(v2 + 32)) )
  {
    std::set<unsigned int>::insert(&this->entrance_set_, (const std::set<unsigned int>::value_type *)(v2 + 32));
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_multistage_play_impl/mechanicus_multistage_play.cpp",
      "addEntrancePoint",
      99);
    v6 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
           &v7,
           (const char (*)[31])"[MECHANICUS] addEntrancePoint:");
  }
  else
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_multistage_play_impl/mechanicus_multistage_play.cpp",
      "addEntrancePoint",
      95);
    v6 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
           &v7,
           (const char (*)[38])"[MECHANICUS] point config not found: ");
  }
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 32));
  common::milog::MiLogStream::~MiLogStream(&v7);
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 103: range 0000000016018F0A-0000000016019117
void __fastcall MechanicusMultistagePlay::addExitPoint(MechanicusMultistagePlay *const this, uint32_t point_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  const TreatreMechanicusExcelConfigMgr *ConfigMgr; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream v7; // [rsp+20h] [rbp-80h] BYREF
  char v8[96]; // [rsp+40h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 point_id:102";
  *(_QWORD *)(v2 + 16) = MechanicusMultistagePlay::addExitPoint;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = point_id;
  ConfigMgr = MechanicusMultistagePlay::getConfigMgr(this);
  if ( data::TreatreMechanicusExcelConfigMgrBase::findMechanicusMapPointExcelConfig(ConfigMgr, *(_DWORD *)(v2 + 32)) )
  {
    std::set<unsigned int>::insert(&this->exit_set_, (const std::set<unsigned int>::value_type *)(v2 + 32));
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_multistage_play_impl/mechanicus_multistage_play.cpp",
      "addExitPoint",
      111);
    v6 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
           &v7,
           (const char (*)[27])"[MECHANICUS] addExitPoint:");
  }
  else
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_multistage_play_impl/mechanicus_multistage_play.cpp",
      "addExitPoint",
      107);
    v6 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
           &v7,
           (const char (*)[38])"[MECHANICUS] point config not found: ");
  }
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 32));
  common::milog::MiLogStream::~MiLogStream(&v7);
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 115: range 0000000016019118-00000000160191BB
void __cdecl MechanicusMultistagePlay::clearAllPoints(MechanicusMultistagePlay *const this, uint32_t param)
{
  common::milog::MiLogStream v2; // [rsp+10h] [rbp-30h] BYREF

  std::set<unsigned int>::clear(&this->entrance_set_);
  std::set<unsigned int>::clear(&this->exit_set_);
  common::milog::MiLogStream::create(
    &v2,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/scene_multistage_play_impl/mechanicus_multistage_play.cpp",
    "clearAllPoints",
    118);
  common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
    &v2,
    (const char (*)[29])"[MECHANICUS] clearAllPoints:");
  common::milog::MiLogStream::~MiLogStream(&v2);
};

// Line 122: range 00000000160191BC-00000000160194B5
void __cdecl MechanicusMultistagePlay::setCanUseSkill(MechanicusMultistagePlay *const this, uint32_t param)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rcx
  bool prev_value; // [rsp+1Fh] [rbp-A1h]
  common::milog::MiLogStream v9; // [rsp+20h] [rbp-A0h] BYREF
  char v10[128]; // [rsp+40h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 24 10 notify:127";
  *(_QWORD *)(v2 + 16) = MechanicusMultistagePlay::setCanUseSkill;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218103808;
  v4[536862722] = -202116109;
  if ( *(char *)(((unsigned __int64)&this->is_can_use_skill_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_can_use_skill_);
  prev_value = this->is_can_use_skill_;
  this->is_can_use_skill_ = param != 0;
  if ( prev_value != this->is_can_use_skill_ )
  {
    proto::CanUseSkillNotify::CanUseSkillNotify((proto::CanUseSkillNotify *const)(v2 + 32));
    if ( *(char *)(((unsigned __int64)&this->is_can_use_skill_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&this->is_can_use_skill_);
    proto::CanUseSkillNotify::set_is_can_use_skill((proto::CanUseSkillNotify *const)(v2 + 32), this->is_can_use_skill_);
    SceneMultistagePlay::notifyPlayMsg(this, (const google::protobuf::Message *)(v2 + 32), 0);
    proto::CanUseSkillNotify::~CanUseSkillNotify((proto::CanUseSkillNotify *const)(v2 + 32));
  }
  common::milog::MiLogStream::create(
    &v9,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/scene_multistage_play_impl/mechanicus_multistage_play.cpp",
    "setCanUseSkill",
    131);
  v5 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
         &v9,
         (const char (*)[29])"[MECHANICUS] setCanUseSkill:");
  v6 = common::milog::MiLogStream::operator<<(v5, prev_value);
  v7 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v6, (const char (*)[6])" ==> ");
  if ( *(char *)(((unsigned __int64)&this->is_can_use_skill_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_can_use_skill_);
  common::milog::MiLogStream::operator<<(v7, this->is_can_use_skill_);
  common::milog::MiLogStream::~MiLogStream(&v9);
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 135: range 00000000160194B6-0000000016019578
void __cdecl MechanicusMultistagePlay::initPlayerInfo(MechanicusMultistagePlay *const this, Player *player)
{
  std::unordered_map<unsigned int,MechanicusMultistagePlay::PlayerInfo>::key_type *p_k; // rsi
  uint32_t init_building_poitns; // ecx
  char v4; // dl
  bool v5; // dl
  std::unordered_map<unsigned int,MechanicusMultistagePlay::PlayerInfo>::key_type __k; // [rsp+14h] [rbp-1Ch] BYREF
  MechanicusMultistagePlay::PlayerInfo *player_info; // [rsp+18h] [rbp-18h]

  __k = Player::getUid(player);
  p_k = &__k;
  player_info = std::unordered_map<unsigned int,MechanicusMultistagePlay::PlayerInfo>::operator[](
                  &this->uid_to_player_info_map_,
                  &__k);
  if ( *(_BYTE *)(((unsigned __int64)&this->init_building_poitns_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->init_building_poitns_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  init_building_poitns = this->init_building_poitns_;
  v4 = *(_BYTE *)(((unsigned __int64)player_info >> 3) + 0x7FFF8000);
  LOBYTE(p_k) = v4 != 0;
  v5 = v4 != 0 && (char)(((unsigned __int8)player_info & 7) + 3) >= v4;
  if ( v5 )
    __asan_report_store4(player_info, p_k, v5);
  player_info->building_points_ = init_building_poitns;
};

// Line 141: range 000000001601957A-00000000160195EE
void __cdecl MechanicusMultistagePlay::onPlayerEnter(MechanicusMultistagePlay *const this, Player *player)
{
  unsigned int value; // [rsp+1Ch] [rbp-4h] BYREF

  value = Player::getUid(player);
  if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,MechanicusMultistagePlay::PlayerInfo>,unsigned int>(
          &this->uid_to_player_info_map_,
          &value) )
    MechanicusMultistagePlay::initPlayerInfo(this, player);
  SceneMultistagePlay::notifyPlayerStage(this, player);
  MechanicusMultistagePlay::broadcastAllFoundationsNotify(this);
};

// Line 151: range 00000000160195F0-0000000016019666
void __cdecl MechanicusMultistagePlay::onStageStart(MechanicusMultistagePlay *const this)
{
  __int64 v1; // rsi
  uint64_t SceneTimeMs; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SceneTimeMs = Scene::getSceneTimeMs(this->scene_);
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_begin_time_ms_ >> 3) + 0x7FFF8000) )
    SceneTimeMs = __asan_report_store8(&this->stage_begin_time_ms_, v1);
  this->stage_begin_time_ms_ = SceneTimeMs;
};

// Line 156: range 0000000016019856-000000001601A14C
int32_t __cdecl MechanicusMultistagePlay::initByParamTable(
        MechanicusMultistagePlay *const this,
        const luabind::adl::object *param_table)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 v5; // rsi
  int32_t v6; // r14d
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  uint32_t DungeonId; // edx
  char v9; // al
  common::milog::MiLogStream *v10; // rax
  bool v11; // r14
  std::_Rb_tree_const_iterator<unsigned int>::reference v12; // rdx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  Player *v15; // rdx
  DungeonScene *v16; // r14
  int32_t result; // eax
  const char (*v18)[21]; // [rsp+0h] [rbp-150h]
  unsigned int *v19; // [rsp+8h] [rbp-148h]
  std::allocator<char> __a; // [rsp+22h] [rbp-12Eh] BYREF
  bool has_error; // [rsp+23h] [rbp-12Dh]
  int32_t ret; // [rsp+24h] [rbp-12Ch]
  std::set<unsigned int>::iterator __for_begin; // [rsp+28h] [rbp-128h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+30h] [rbp-120h] BYREF
  std::set<unsigned int> *__for_range; // [rsp+38h] [rbp-118h]
  common::milog::MiLogStream v27; // [rsp+40h] [rbp-110h] BYREF
  unsigned int v28[60]; // [rsp+60h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v28;
  v19 = v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 48 4 7 uid:179 64 16 21 dungeon_scene_ptr:157 96 16 12 play_ptr:191 128 16 12 play_wtr:192 160"
                        " 16 14 player_ptr:181";
  *(_QWORD *)(v2 + 16) = MechanicusMultistagePlay::initByParamTable;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862725] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  toPtr<DungeonScene,Scene>((Scene *)(v2 + 64));
  v5 = 0LL;
  if ( std::operator==<DungeonScene>((const std::shared_ptr<DungeonScene> *)(v2 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_multistage_play_impl/mechanicus_multistage_play.cpp",
      "initByParamTable",
      160);
    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
      &v27,
      (const char (*)[39])"[MEHCANICUS] dungeon scene is nullptr ");
    common::milog::MiLogStream::~MiLogStream(&v27);
    v6 = -1;
  }
  else
  {
    v7 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    DungeonId = DungeonScene::getDungeonId(v7);
    v9 = *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000);
    if ( v9 != 0 && v9 <= 3 )
    {
      LOBYTE(v5) = v9 != 0;
      __asan_report_store4(&this->dungeon_id_, v5, DungeonId);
    }
    this->dungeon_id_ = DungeonId;
    if ( std::set<unsigned int>::empty(&this->player_uid_set_) )
    {
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_multistage_play_impl/mechanicus_multistage_play.cpp",
        "initByParamTable",
        167);
      common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
        &v27,
        (const char (*)[34])"[MEHCANICUS] player set is empty ");
      common::milog::MiLogStream::~MiLogStream(&v27);
      v6 = -1;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/scene_multistage_play_impl/mechanicus_multistage_play.cpp",
        "initByParamTable",
        170);
      v10 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              &v27,
              (const char (*)[22])"[MEHCANICUS] uid set:");
      common::milog::MiLogStream::operator<<<unsigned int>(v10, &this->player_uid_set_);
      common::milog::MiLogStream::~MiLogStream(&v27);
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>((std::string *const)&v27, "rounds", &__a);
      v11 = ScriptUtil::getTableValue<unsigned int,char const(&)[21],unsigned int &>(
              &ScriptUtil::no_exception_instance,
              param_table,
              (const std::string *)&v27,
              &this->rounds_,
              (const char (*)[21])"init_building_points",
              &this->init_building_poitns_,
              v18,
              v28) != 0;
      std::string::~string(&v27);
      std::allocator<char>::~allocator(&__a);
      if ( v11 )
      {
        common::milog::MiLogStream::create(
          &v27,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_multistage_play_impl/mechanicus_multistage_play.cpp",
          "initByParamTable",
          174);
        common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
          &v27,
          (const char (*)[46])"[MEHCANICUS] SCRIPT_UTIL.getTableValue fails ");
        common::milog::MiLogStream::~MiLogStream(&v27);
        v6 = -1;
      }
      else
      {
        has_error = 0;
        __for_range = &this->player_uid_set_;
        __for_begin._M_node = std::set<unsigned int>::begin(&this->player_uid_set_)._M_node;
        __for_end._M_node = std::set<unsigned int>::end(__for_range)._M_node;
        while ( std::operator!=(&__for_begin, &__for_end) )
        {
          v12 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
          if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          *(_DWORD *)(v2 + 48) = *v12;
          if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          Scene::findPlayer((const Scene *const)(v2 + 160), (__int64)this->scene_, *(_DWORD *)(v2 + 48));
          if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 160)) )
          {
            has_error = 1;
            common::milog::MiLogStream::create(
              &v27,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/scene/scene_multistage_play_impl/mechanicus_multistage_play.cpp",
              "initByParamTable",
              185);
            v13 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                    &v27,
                    (const char (*)[22])"[MEHCANICUS] player: ");
            v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v13,
                    (const unsigned int *)(v2 + 48));
            common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v14, (const char (*)[10])" nullptr.");
            common::milog::MiLogStream::~MiLogStream(&v27);
          }
          else
          {
            v15 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
            MechanicusMultistagePlay::initPlayerInfo(this, v15);
          }
          std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 160));
          std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
        }
        toPtr<MechanicusMultistagePlay,MechanicusMultistagePlay>((MechanicusMultistagePlay *)(v2 + 96));
        std::weak_ptr<MechanicusMultistagePlay>::weak_ptr<MechanicusMultistagePlay,void>(
          (std::weak_ptr<MechanicusMultistagePlay> *const)(v2 + 128),
          (const std::shared_ptr<MechanicusMultistagePlay> *)(v2 + 96));
        v16 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        std::weak_ptr<MechanicusMultistagePlay>::weak_ptr(
          (std::weak_ptr<MechanicusMultistagePlay> *const)(v2 + 160),
          (const std::weak_ptr<MechanicusMultistagePlay> *)(v2 + 128));
        std::function<void ()(Player &,DungeonScene &,proto::DungeonSettleNotify &)>::function<MechanicusMultistagePlay::initByParamTable(luabind::adl::object const&)::{lambda(Player &,DungeonScene &,proto::DungeonSettleNotify &)#1},void,void>(
          (std::function<void(Player&,DungeonScene&,proto::DungeonSettleNotify&)> *const)&v27,
          (MechanicusMultistagePlay::initByParamTable::<lambda(Player&, DungeonScene&, proto::DungeonSettleNotify&)> *)(v2 + 160));
        ret = DungeonScene::registerDungeonSettleCallback(v16, (DungeonSettleCallback *)&v27);
        std::function<void ()(Player &,DungeonScene &,proto::DungeonSettleNotify &)>::~function((std::function<void(Player&,DungeonScene&,proto::DungeonSettleNotify&)> *const)&v27);
        MechanicusMultistagePlay::initByParamTable(luabind::adl::object const&)::{lambda(Player &,DungeonScene &,proto::DungeonSettleNotify &)#1}::~DungeonSettleNotify((MechanicusMultistagePlay::initByParamTable::<lambda(Player&, DungeonScene&, proto::DungeonSettleNotify&)> *const)(v2 + 160));
        if ( ret )
        {
          common::milog::MiLogStream::create(
            &v27,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/scene/scene_multistage_play_impl/mechanicus_multistage_play.cpp",
            "initByParamTable",
            206);
          common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
            &v27,
            (const char (*)[49])"[MEHCANICUS] reg dungeon settle call back failed");
          common::milog::MiLogStream::~MiLogStream(&v27);
          v6 = -1;
        }
        else if ( has_error )
        {
          common::milog::MiLogStream::create(
            &v27,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/scene/scene_multistage_play_impl/mechanicus_multistage_play.cpp",
            "initByParamTable",
            212);
          common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
            &v27,
            (const char (*)[37])"[MEHCANICUS] init player info failed");
          common::milog::MiLogStream::~MiLogStream(&v27);
          v6 = -1;
        }
        else
        {
          v6 = 0;
        }
        std::weak_ptr<MechanicusMultistagePlay>::~weak_ptr((std::weak_ptr<MechanicusMultistagePlay> *const)(v2 + 128));
        std::shared_ptr<MechanicusMultistagePlay>::~shared_ptr((std::shared_ptr<MechanicusMultistagePlay> *const)(v2 + 96));
      }
    }
  }
  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v2 + 64));
  result = v6;
  if ( v19 == (unsigned int *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 193: range 000000001603E8E0-000000001603E905
void __cdecl MechanicusMultistagePlay::initByParamTable(luabind::adl::object const&)::{lambda(Player &,DungeonScene &,proto::DungeonSettleNotify &)#1}::DungeonSettleNotify(
        MechanicusMultistagePlay::initByParamTable::<lambda(Player&, DungeonScene&, proto::DungeonSettleNotify&)> *const this,
        MechanicusMultistagePlay::initByParamTable::<lambda(Player&, DungeonScene&, proto::DungeonSettleNotify&)> *a2)
{
  std::weak_ptr<MechanicusMultistagePlay>::weak_ptr(&this->__play_wtr, &a2->__play_wtr);
};

// Line 193: range 000000001603E9D0-000000001603E9F5
void __cdecl MechanicusMultistagePlay::initByParamTable(luabind::adl::object const&)::{lambda(Player &,DungeonScene &,proto::DungeonSettleNotify &)#1}::DungeonSettleNotify(
        MechanicusMultistagePlay::initByParamTable::<lambda(Player&, DungeonScene&, proto::DungeonSettleNotify&)> *const this,
        const MechanicusMultistagePlay::initByParamTable::<lambda(Player&, DungeonScene&, proto::DungeonSettleNotify&)> *a2)
{
  std::weak_ptr<MechanicusMultistagePlay>::weak_ptr(&this->__play_wtr, &a2->__play_wtr);
};

// Line 193: range 0000000016019668-0000000016019838
void __cdecl MechanicusMultistagePlay::initByParamTable(luabind::adl::object const&)::{lambda(Player &,DungeonScene &,proto::DungeonSettleNotify &)#1}::operator()(
        const MechanicusMultistagePlay::initByParamTable::<lambda(Player&, DungeonScene&, proto::DungeonSettleNotify&)> *const __closure,
        Player *player,
        DungeonScene *dungeon_scene,
        proto::DungeonSettleNotify *notify)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  std::__shared_ptr_access<MechanicusMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rdi
  common::milog::MiLogStream v10; // [rsp+20h] [rbp-90h] BYREF
  char v11[112]; // [rsp+40h] [rbp-70h] BYREF

  v4 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 12 play_ptr:195";
  *(_QWORD *)(v4 + 16) = MechanicusMultistagePlay::initByParamTable(luabind::adl::object const&)::{lambda(Player &,DungeonScene &,proto::DungeonSettleNotify &)#1}::operator();
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  std::weak_ptr<MechanicusMultistagePlay>::lock((const std::weak_ptr<MechanicusMultistagePlay> *const)(v4 + 32));
  if ( std::operator==<MechanicusMultistagePlay>(0LL, (const std::shared_ptr<MechanicusMultistagePlay> *)(v4 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_multistage_play_impl/mechanicus_multistage_play.cpp",
      "operator()",
      198);
    common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v10, (const char (*)[14])" play nullptr");
    common::milog::MiLogStream::~MiLogStream(&v10);
  }
  else
  {
    v7 = std::__shared_ptr_access<MechanicusMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MechanicusMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
    MechanicusMultistagePlay::onSettleDungeon(v7, player, dungeon_scene, notify);
  }
  std::shared_ptr<MechanicusMultistagePlay>::~shared_ptr((std::shared_ptr<MechanicusMultistagePlay> *const)(v4 + 32));
  if ( v11 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 193: range 000000001601983A-0000000016019854
void __cdecl MechanicusMultistagePlay::initByParamTable(luabind::adl::object const&)::{lambda(Player &,DungeonScene &,proto::DungeonSettleNotify &)#1}::~DungeonSettleNotify(
        MechanicusMultistagePlay::initByParamTable::<lambda(Player&, DungeonScene&, proto::DungeonSettleNotify&)> *const this)
{
  std::weak_ptr<MechanicusMultistagePlay>::~weak_ptr(&this->__play_wtr);
};

// Line 220: range 000000001601A14E-000000001601AD39
void __cdecl MechanicusMultistagePlay::regValueSetters(MechanicusMultistagePlay *const this)
{
  MechanicusMultistagePlay **v1; // r8
  const std::_Placeholder<1> *v2; // r9
  std::function<void(unsigned int)> *v3; // rax
  MechanicusMultistagePlay **v4; // r8
  const std::_Placeholder<1> *v5; // r9
  std::function<void(unsigned int)> *v6; // rax
  MechanicusMultistagePlay **v7; // r8
  const std::_Placeholder<1> *v8; // r9
  std::function<void(unsigned int)> *v9; // rax
  MechanicusMultistagePlay **v10; // r8
  const std::_Placeholder<1> *v11; // r9
  std::unordered_map<std::string,std::function<void(unsigned int)>> *p_value_setter_map; // rbx
  std::function<void(unsigned int)> *v13; // rax
  MechanicusMultistagePlay **v14; // r8
  const std::_Placeholder<1> *v15; // r9
  std::unordered_map<std::string,std::function<void(unsigned int)>> *v16; // rbx
  std::function<void(unsigned int)> *v17; // rax
  MechanicusMultistagePlay **v18; // r8
  const std::_Placeholder<1> *v19; // r9
  std::unordered_map<std::string,std::function<void(unsigned int)>> *v20; // rbx
  std::function<void(unsigned int)> *v21; // rax
  MechanicusMultistagePlay **v22; // r8
  const std::_Placeholder<1> *v23; // r9
  std::unordered_map<std::string,std::function<void(unsigned int)>> *v24; // rbx
  std::function<void(unsigned int)> *v25; // rax
  MechanicusMultistagePlay **v26; // r8
  const std::_Placeholder<1> *v27; // r9
  std::unordered_map<std::string,std::function<void(unsigned int)>> *v28; // rbx
  std::function<void(unsigned int)> *v29; // rax
  MechanicusMultistagePlay **v30; // r8
  const std::_Placeholder<1> *v31; // r9
  std::unordered_map<std::string,std::function<void(unsigned int)>> *v32; // rbx
  std::function<void(unsigned int)> *v33; // rax
  MechanicusMultistagePlay **v34; // r8
  const std::_Placeholder<1> *v35; // r9
  std::unordered_map<std::string,std::function<void(unsigned int)>> *v36; // rbx
  std::function<void(unsigned int)> *v37; // rax
  MechanicusMultistagePlay **v38; // r8
  const std::_Placeholder<1> *v39; // r9
  std::unordered_map<std::string,std::function<void(unsigned int)>> *v40; // rbx
  std::function<void(unsigned int)> *v41; // rax
  MechanicusMultistagePlay **v42; // r8
  const std::_Placeholder<1> *v43; // r9
  std::unordered_map<std::string,std::function<void(unsigned int)>> *v44; // rbx
  std::function<void(unsigned int)> *v45; // rax
  __m128i v46; // [rsp+0h] [rbp-130h] BYREF
  __m128i v47; // [rsp+10h] [rbp-120h] BYREF
  __m128i v48; // [rsp+20h] [rbp-110h] BYREF
  __m128i v49; // [rsp+30h] [rbp-100h] BYREF
  __m128i v50; // [rsp+40h] [rbp-F0h] BYREF
  __m128i v51; // [rsp+50h] [rbp-E0h] BYREF
  __m128i v52; // [rsp+60h] [rbp-D0h] BYREF
  __m128i v53; // [rsp+70h] [rbp-C0h] BYREF
  __m128i v54; // [rsp+80h] [rbp-B0h] BYREF
  MechanicusMultistagePlay *thisa; // [rsp+98h] [rbp-98h]
  std::allocator<char> __a; // [rsp+A7h] [rbp-89h] BYREF
  MechanicusMultistagePlay *v57; // [rsp+A8h] [rbp-88h] BYREF
  void (*__f[2])(MechanicusMultistagePlay *, unsigned int); // [rsp+B0h] [rbp-80h] BYREF
  std::_Bind_helper<false,void (MechanicusMultistagePlay::*)(unsigned int),MechanicusMultistagePlay*,const std::_Placeholder<1>&>::type v59; // [rsp+C0h] [rbp-70h] BYREF
  std::string __k; // [rsp+E0h] [rbp-50h] BYREF

  thisa = this;
  v57 = this;
  __f[0] = (void (*)(MechanicusMultistagePlay *, unsigned int))MechanicusMultistagePlay::setMaxExcapableMonsters;
  __f[1] = 0LL;
  std::bind<void (MechanicusMultistagePlay::*)(unsigned int),MechanicusMultistagePlay*,std::_Placeholder<1> const&>(
    &v59,
    __f,
    &v57,
    (const std::_Placeholder<1> *)&std::placeholders::_1,
    v1,
    v2);
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "max_escapable_monsters", &__a);
  v3 = std::unordered_map<std::string,std::function<void ()(unsigned int)>>::operator[](&this->value_setter_map_, &__k);
  std::function<void ()(unsigned int)>::operator=<std::_Bind<void (MechanicusMultistagePlay::*)(unsigned int) ()(MechanicusMultistagePlay*,std::_Placeholder<1>)>>(
    v3,
    &v59);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  v57 = this;
  __f[0] = (void (*)(MechanicusMultistagePlay *, unsigned int))MechanicusMultistagePlay::setExcapedMonsters;
  __f[1] = 0LL;
  std::bind<void (MechanicusMultistagePlay::*)(unsigned int),MechanicusMultistagePlay*,std::_Placeholder<1> const&>(
    &v59,
    __f,
    &v57,
    (const std::_Placeholder<1> *)&std::placeholders::_1,
    v4,
    v5);
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "escaped_monsters", &__a);
  v6 = std::unordered_map<std::string,std::function<void ()(unsigned int)>>::operator[](&this->value_setter_map_, &__k);
  std::function<void ()(unsigned int)>::operator=<std::_Bind<void (MechanicusMultistagePlay::*)(unsigned int) ()(MechanicusMultistagePlay*,std::_Placeholder<1>)>>(
    v6,
    &v59);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  v57 = this;
  __f[0] = (void (*)(MechanicusMultistagePlay *, unsigned int))MechanicusMultistagePlay::setLeftMonsters;
  __f[1] = 0LL;
  std::bind<void (MechanicusMultistagePlay::*)(unsigned int),MechanicusMultistagePlay*,std::_Placeholder<1> const&>(
    &v59,
    __f,
    &v57,
    (const std::_Placeholder<1> *)&std::placeholders::_1,
    v7,
    v8);
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "left_monsters", &__a);
  v9 = std::unordered_map<std::string,std::function<void ()(unsigned int)>>::operator[](&this->value_setter_map_, &__k);
  std::function<void ()(unsigned int)>::operator=<std::_Bind<void (MechanicusMultistagePlay::*)(unsigned int) ()(MechanicusMultistagePlay*,std::_Placeholder<1>)>>(
    v9,
    &v59);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  v57 = this;
  v46.m128i_i64[0] = (__int64)MechanicusMultistagePlay::setCurrentRound;
  v46.m128i_i64[1] = 0LL;
  *(__m128i *)__f = _mm_load_si128(&v46);
  std::bind<void (MechanicusMultistagePlay::*)(unsigned int),MechanicusMultistagePlay*,std::_Placeholder<1> const&>(
    &v59,
    __f,
    &v57,
    (const std::_Placeholder<1> *)&std::placeholders::_1,
    v10,
    v11);
  p_value_setter_map = &thisa->value_setter_map_;
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "round", &__a);
  v13 = std::unordered_map<std::string,std::function<void ()(unsigned int)>>::operator[](p_value_setter_map, &__k);
  std::function<void ()(unsigned int)>::operator=<std::_Bind<void (MechanicusMultistagePlay::*)(unsigned int) ()(MechanicusMultistagePlay*,std::_Placeholder<1>)>>(
    v13,
    &v59);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  v57 = thisa;
  v47.m128i_i64[0] = (__int64)MechanicusMultistagePlay::setRounds;
  v47.m128i_i64[1] = 0LL;
  *(__m128i *)__f = _mm_load_si128(&v47);
  std::bind<void (MechanicusMultistagePlay::*)(unsigned int),MechanicusMultistagePlay*,std::_Placeholder<1> const&>(
    &v59,
    __f,
    &v57,
    (const std::_Placeholder<1> *)&std::placeholders::_1,
    v14,
    v15);
  v16 = &thisa->value_setter_map_;
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "rounds", &__a);
  v17 = std::unordered_map<std::string,std::function<void ()(unsigned int)>>::operator[](v16, &__k);
  std::function<void ()(unsigned int)>::operator=<std::_Bind<void (MechanicusMultistagePlay::*)(unsigned int) ()(MechanicusMultistagePlay*,std::_Placeholder<1>)>>(
    v17,
    &v59);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  v57 = thisa;
  v48.m128i_i64[0] = (__int64)MechanicusMultistagePlay::setStageBonusBuildingPoints;
  v48.m128i_i64[1] = 0LL;
  *(__m128i *)__f = _mm_load_si128(&v48);
  std::bind<void (MechanicusMultistagePlay::*)(unsigned int),MechanicusMultistagePlay*,std::_Placeholder<1> const&>(
    &v59,
    __f,
    &v57,
    (const std::_Placeholder<1> *)&std::placeholders::_1,
    v18,
    v19);
  v20 = &thisa->value_setter_map_;
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "stage_bonus_building_points", &__a);
  v21 = std::unordered_map<std::string,std::function<void ()(unsigned int)>>::operator[](v20, &__k);
  std::function<void ()(unsigned int)>::operator=<std::_Bind<void (MechanicusMultistagePlay::*)(unsigned int) ()(MechanicusMultistagePlay*,std::_Placeholder<1>)>>(
    v21,
    &v59);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  v57 = thisa;
  v49.m128i_i64[0] = (__int64)MechanicusMultistagePlay::setCardFlipWaitSeconds;
  v49.m128i_i64[1] = 0LL;
  *(__m128i *)__f = _mm_load_si128(&v49);
  std::bind<void (MechanicusMultistagePlay::*)(unsigned int),MechanicusMultistagePlay*,std::_Placeholder<1> const&>(
    &v59,
    __f,
    &v57,
    (const std::_Placeholder<1> *)&std::placeholders::_1,
    v22,
    v23);
  v24 = &thisa->value_setter_map_;
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "card_flip_wait_seconds", &__a);
  v25 = std::unordered_map<std::string,std::function<void ()(unsigned int)>>::operator[](v24, &__k);
  std::function<void ()(unsigned int)>::operator=<std::_Bind<void (MechanicusMultistagePlay::*)(unsigned int) ()(MechanicusMultistagePlay*,std::_Placeholder<1>)>>(
    v25,
    &v59);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  v57 = thisa;
  v50.m128i_i64[0] = (__int64)MechanicusMultistagePlay::setBuildingStageSeconds;
  v50.m128i_i64[1] = 0LL;
  *(__m128i *)__f = _mm_load_si128(&v50);
  std::bind<void (MechanicusMultistagePlay::*)(unsigned int),MechanicusMultistagePlay*,std::_Placeholder<1> const&>(
    &v59,
    __f,
    &v57,
    (const std::_Placeholder<1> *)&std::placeholders::_1,
    v26,
    v27);
  v28 = &thisa->value_setter_map_;
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "building_stage_seconds", &__a);
  v29 = std::unordered_map<std::string,std::function<void ()(unsigned int)>>::operator[](v28, &__k);
  std::function<void ()(unsigned int)>::operator=<std::_Bind<void (MechanicusMultistagePlay::*)(unsigned int) ()(MechanicusMultistagePlay*,std::_Placeholder<1>)>>(
    v29,
    &v59);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  v57 = thisa;
  v51.m128i_i64[0] = (__int64)MechanicusMultistagePlay::addEntrancePoint;
  v51.m128i_i64[1] = 0LL;
  *(__m128i *)__f = _mm_load_si128(&v51);
  std::bind<void (MechanicusMultistagePlay::*)(unsigned int),MechanicusMultistagePlay*,std::_Placeholder<1> const&>(
    &v59,
    __f,
    &v57,
    (const std::_Placeholder<1> *)&std::placeholders::_1,
    v30,
    v31);
  v32 = &thisa->value_setter_map_;
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "add_entrance_point", &__a);
  v33 = std::unordered_map<std::string,std::function<void ()(unsigned int)>>::operator[](v32, &__k);
  std::function<void ()(unsigned int)>::operator=<std::_Bind<void (MechanicusMultistagePlay::*)(unsigned int) ()(MechanicusMultistagePlay*,std::_Placeholder<1>)>>(
    v33,
    &v59);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  v57 = thisa;
  v52.m128i_i64[0] = (__int64)MechanicusMultistagePlay::addExitPoint;
  v52.m128i_i64[1] = 0LL;
  *(__m128i *)__f = _mm_load_si128(&v52);
  std::bind<void (MechanicusMultistagePlay::*)(unsigned int),MechanicusMultistagePlay*,std::_Placeholder<1> const&>(
    &v59,
    __f,
    &v57,
    (const std::_Placeholder<1> *)&std::placeholders::_1,
    v34,
    v35);
  v36 = &thisa->value_setter_map_;
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "add_exit_point", &__a);
  v37 = std::unordered_map<std::string,std::function<void ()(unsigned int)>>::operator[](v36, &__k);
  std::function<void ()(unsigned int)>::operator=<std::_Bind<void (MechanicusMultistagePlay::*)(unsigned int) ()(MechanicusMultistagePlay*,std::_Placeholder<1>)>>(
    v37,
    &v59);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  v57 = thisa;
  v53.m128i_i64[0] = (__int64)MechanicusMultistagePlay::clearAllPoints;
  v53.m128i_i64[1] = 0LL;
  *(__m128i *)__f = _mm_load_si128(&v53);
  std::bind<void (MechanicusMultistagePlay::*)(unsigned int),MechanicusMultistagePlay*,std::_Placeholder<1> const&>(
    &v59,
    __f,
    &v57,
    (const std::_Placeholder<1> *)&std::placeholders::_1,
    v38,
    v39);
  v40 = &thisa->value_setter_map_;
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "clear_all_points", &__a);
  v41 = std::unordered_map<std::string,std::function<void ()(unsigned int)>>::operator[](v40, &__k);
  std::function<void ()(unsigned int)>::operator=<std::_Bind<void (MechanicusMultistagePlay::*)(unsigned int) ()(MechanicusMultistagePlay*,std::_Placeholder<1>)>>(
    v41,
    &v59);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  v57 = thisa;
  v54.m128i_i64[0] = (__int64)MechanicusMultistagePlay::setCanUseSkill;
  v54.m128i_i64[1] = 0LL;
  *(__m128i *)__f = _mm_load_si128(&v54);
  std::bind<void (MechanicusMultistagePlay::*)(unsigned int),MechanicusMultistagePlay*,std::_Placeholder<1> const&>(
    &v59,
    __f,
    &v57,
    (const std::_Placeholder<1> *)&std::placeholders::_1,
    v42,
    v43);
  v44 = &thisa->value_setter_map_;
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "can_use_skill", &__a);
  v45 = std::unordered_map<std::string,std::function<void ()(unsigned int)>>::operator[](v44, &__k);
  std::function<void ()(unsigned int)>::operator=<std::_Bind<void (MechanicusMultistagePlay::*)(unsigned int) ()(MechanicusMultistagePlay*,std::_Placeholder<1>)>>(
    v45,
    &v59);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
};

// Line 238: range 000000001601AD3A-000000001601AE6D
int32_t __cdecl MechanicusMultistagePlay::initStage(
        MechanicusMultistagePlay *const this,
        data::MultistageStageType stage_type,
        uint32_t *duration,
        const std::string *stage_name,
        const luabind::adl::object *param_table)
{
  int32_t ret; // [rsp+3Ch] [rbp-4h]

  if ( stage_type == MULTISTAGE_STAGE_MECHANICUS_FLIP_CARD )
  {
    ret = MechanicusMultistagePlay::startFlipCardStage(this, duration);
    goto LABEL_14;
  }
  if ( stage_type > MULTISTAGE_STAGE_MECHANICUS_FLIP_CARD )
    goto LABEL_13;
  if ( stage_type )
  {
    if ( stage_type != MULTISTAGE_STAGE_MECHANICUS_KILL )
    {
LABEL_13:
      ret = SceneMultistagePlay::initStage(this, stage_type, duration, stage_name, param_table);
      goto LABEL_14;
    }
    if ( *(_BYTE *)(((unsigned __int64)duration >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)duration & 7) + 3) >= *(_BYTE *)(((unsigned __int64)duration >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    ret = MechanicusMultistagePlay::startKillStage(this, *duration);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)duration >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)duration & 7) + 3) >= *(_BYTE *)(((unsigned __int64)duration >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    ret = MechanicusMultistagePlay::startBuildStage(this, *duration);
  }
LABEL_14:
  if ( ret )
    return ret;
  else
    return 0;
};

// Line 265: range 000000001601AE6E-000000001601B0F8
void __cdecl MechanicusMultistagePlay::onStageEnd(MechanicusMultistagePlay *const this, bool is_succ)
{
  uint32_t stage_bonus_building_points; // esi
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  std::unordered_map<unsigned int,MechanicusMultistagePlay::PlayerInfo>::iterator __for_begin; // [rsp+10h] [rbp-60h] BYREF
  std::unordered_map<unsigned int,MechanicusMultistagePlay::PlayerInfo>::iterator __for_end; // [rsp+18h] [rbp-58h] BYREF
  std::unordered_map<unsigned int,MechanicusMultistagePlay::PlayerInfo> *__for_range; // [rsp+20h] [rbp-50h]
  std::pair<unsigned int const,MechanicusMultistagePlay::PlayerInfo> *__in; // [rsp+28h] [rbp-48h]
  std::tuple_element<0,std::pair<unsigned int const,MechanicusMultistagePlay::PlayerInfo> >::type *uid; // [rsp+30h] [rbp-40h]
  std::tuple_element<1,std::pair<unsigned int const,MechanicusMultistagePlay::PlayerInfo> >::type *player_info; // [rsp+38h] [rbp-38h]
  common::milog::MiLogStream v13; // [rsp+40h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->stage_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->stage_type_ == MULTISTAGE_STAGE_MECHANICUS_KILL )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->stage_bonus_building_points_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->stage_bonus_building_points_ >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( this->stage_bonus_building_points_ )
    {
      __for_range = &this->uid_to_player_info_map_;
      __for_begin._M_cur = std::unordered_map<unsigned int,MechanicusMultistagePlay::PlayerInfo>::begin(&this->uid_to_player_info_map_)._M_cur;
      __for_end._M_cur = std::unordered_map<unsigned int,MechanicusMultistagePlay::PlayerInfo>::end(&this->uid_to_player_info_map_)._M_cur;
      while ( std::__detail::operator!=<std::pair<unsigned int const,MechanicusMultistagePlay::PlayerInfo>,false>(
                &__for_begin,
                &__for_end) )
      {
        __in = std::__detail::_Node_iterator<std::pair<unsigned int const,MechanicusMultistagePlay::PlayerInfo>,false,false>::operator*(&__for_begin);
        uid = std::get<0ul,unsigned int const,MechanicusMultistagePlay::PlayerInfo>(__in);
        player_info = std::get<1ul,unsigned int const,MechanicusMultistagePlay::PlayerInfo>(__in);
        if ( *(_BYTE *)(((unsigned __int64)&this->stage_bonus_building_points_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this - 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->stage_bonus_building_points_ >> 3)
                                                              + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        stage_bonus_building_points = this->stage_bonus_building_points_;
        if ( *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        if ( !MechanicusMultistagePlay::addBuildingPoints(this, *uid, stage_bonus_building_points) )
        {
          common::milog::MiLogStream::create(
            &v13,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/scene/scene_multistage_play_impl/mechanicus_multistage_play.cpp",
            "onStageEnd",
            276);
          v3 = common::milog::MiLogStream::operator<<<MechanicusMultistagePlay,(MechanicusMultistagePlay*)0>(&v13, this);
          v4 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                 v3,
                 (const char (*)[18])" add stage bonus ");
          v5 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                 v4,
                 &this->stage_bonus_building_points_);
          v6 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                 v5,
                 (const char (*)[20])" points for player:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, uid);
          common::milog::MiLogStream::~MiLogStream(&v13);
        }
        std::__detail::_Node_iterator<std::pair<unsigned int const,MechanicusMultistagePlay::PlayerInfo>,false,false>::operator++(&__for_begin);
      }
    }
  }
};

// Line 283: range 000000001601B0FA-000000001601CDB6
int32_t __cdecl MechanicusMultistagePlay::toClient(
        const MechanicusMultistagePlay *const this,
        proto::MultistagePlayInfo *info)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  proto::InBattleMechanicusStageType v6; // eax
  Scene *scene; // rcx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  Player *v11; // rcx
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::reference v12; // rax
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr *v13; // rdx
  uint32_t v14; // esi
  google::protobuf::uint32 GearBuildingCost; // eax
  uint32_t v16; // esi
  google::protobuf::uint32 GearDemolitionRefund; // eax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  std::_Rb_tree_const_iterator<unsigned int>::reference v21; // rdx
  GameserverService *v22; // rax
  unsigned int GameThreadLocal; // eax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  Player *v27; // rcx
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::reference v28; // rax
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr *v29; // rdx
  uint32_t v30; // esi
  google::protobuf::uint32 v31; // eax
  uint32_t v32; // esi
  google::protobuf::uint32 v33; // eax
  std::_Rb_tree_const_iterator<unsigned int>::reference v34; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v35; // rax
  uint32_t current_round; // ecx
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  google::protobuf::uint32 *v42; // rdx
  google::protobuf::uint32 *v43; // rdx
  int32_t result; // eax
  std::unordered_map<unsigned int,MechanicusMultistagePlay::PlayerInfo>::const_iterator __for_begin; // [rsp+20h] [rbp-230h] BYREF
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,MechanicusMultistagePlay::CardInfo>>::const_iterator __for_begin_2; // [rsp+28h] [rbp-228h] BYREF
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,MechanicusMultistagePlay::CardInfo>>::const_iterator __for_end; // [rsp+30h] [rbp-220h] BYREF
  std::unordered_map<unsigned int,MechanicusMultistagePlay::CardInfo>::const_iterator __for_begin_0; // [rsp+38h] [rbp-218h] BYREF
  proto::InBattleMechanicusInfo *mechanicus_info; // [rsp+40h] [rbp-210h]
  const std::unordered_map<unsigned int,MechanicusMultistagePlay::PlayerInfo> *__for_range; // [rsp+48h] [rbp-208h]
  const std::set<unsigned int> *team_uid_set; // [rsp+50h] [rbp-200h]
  const std::set<unsigned int> *__for_range_1; // [rsp+58h] [rbp-1F8h]
  proto::InBattleMechanicusPlayerInfo *stage_player_info_0; // [rsp+60h] [rbp-1F0h]
  std::map<unsigned int,unsigned int> *__for_range_2; // [rsp+68h] [rbp-1E8h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *gear_id_0; // [rsp+70h] [rbp-1E0h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *gear_level_0; // [rsp+78h] [rbp-1D8h]
  proto::InBattleMechanicusBuildingInfo *gear_info_0; // [rsp+80h] [rbp-1D0h]
  const std::set<unsigned int> *__for_range_3; // [rsp+88h] [rbp-1C8h]
  const data::MechanicusCardExcelConfig *card_config_ptr; // [rsp+90h] [rbp-1C0h]
  proto::InBattleMechanicusCardInfo *card_info; // [rsp+98h] [rbp-1B8h]
  const std::unordered_map<unsigned int,std::unordered_map<unsigned int,MechanicusMultistagePlay::CardInfo>> *__for_range_4; // [rsp+A0h] [rbp-1B0h]
  const std::set<unsigned int> *__for_range_6; // [rsp+A8h] [rbp-1A8h]
  const std::set<unsigned int> *__for_range_7; // [rsp+B0h] [rbp-1A0h]
  const std::pair<unsigned int const,std::unordered_map<unsigned int,MechanicusMultistagePlay::CardInfo> > *v64; // [rsp+B8h] [rbp-198h]
  std::tuple_element<0,const std::pair<unsigned int const,std::unordered_map<unsigned int,MechanicusMultistagePlay::CardInfo> > >::type *_; // [rsp+C0h] [rbp-190h]
  std::tuple_element<1,const std::pair<unsigned int const,std::unordered_map<unsigned int,MechanicusMultistagePlay::CardInfo> > >::type *card_info_map; // [rsp+C8h] [rbp-188h]
  const std::unordered_map<unsigned int,MechanicusMultistagePlay::CardInfo> *__for_range_5; // [rsp+D0h] [rbp-180h]
  const std::pair<unsigned int const,MechanicusMultistagePlay::CardInfo> *v68; // [rsp+D8h] [rbp-178h]
  std::tuple_element<0,const std::pair<unsigned int const,MechanicusMultistagePlay::CardInfo> >::type *card_id; // [rsp+E0h] [rbp-170h]
  std::tuple_element<1,const std::pair<unsigned int const,MechanicusMultistagePlay::CardInfo> >::type *card_info_0; // [rsp+E8h] [rbp-168h]
  proto::InBattleMechanicusCardInfo *picked_card; // [rsp+F0h] [rbp-160h]
  const std::pair<unsigned int const,MechanicusMultistagePlay::PlayerInfo> *v72; // [rsp+F8h] [rbp-158h]
  std::tuple_element<0,const std::pair<unsigned int const,MechanicusMultistagePlay::PlayerInfo> >::type *uid; // [rsp+100h] [rbp-150h]
  std::tuple_element<1,const std::pair<unsigned int const,MechanicusMultistagePlay::PlayerInfo> >::type *player_info; // [rsp+108h] [rbp-148h]
  proto::InBattleMechanicusPlayerInfo *stage_player_info; // [rsp+110h] [rbp-140h]
  std::map<unsigned int,unsigned int> *__for_range_0; // [rsp+118h] [rbp-138h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *gear_id; // [rsp+120h] [rbp-130h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *gear_level; // [rsp+128h] [rbp-128h]
  proto::InBattleMechanicusBuildingInfo *gear_info; // [rsp+130h] [rbp-120h]
  std::set<unsigned int>::iterator __for_end_0; // [rsp+138h] [rbp-118h] BYREF
  common::milog::MiLogStream v81; // [rsp+140h] [rbp-110h] BYREF
  char v82[240]; // [rsp+160h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v82;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 4 11 card_id:368 48 16 21 dungeon_scene_ptr:329 80 16 14 player_ptr:307 112 48 19 gears_level_map:350";
  *(_QWORD *)(v2 + 16) = MechanicusMultistagePlay::toClient;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862722] = 62194;
  v4[536862723] = 62194;
  v4[536862725] = -202116109;
  if ( SceneMultistagePlay::toClient(this, info) )
  {
    v5 = -1;
  }
  else
  {
    mechanicus_info = proto::MultistagePlayInfo::mutable_mechanicus_info(info);
    v6 = MechanicusMultistagePlay::convertToInBattleStage(this);
    proto::InBattleMechanicusInfo::set_stage(mechanicus_info, v6);
    if ( *(_BYTE *)(((unsigned __int64)&this->stage_begin_time_ms_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    proto::InBattleMechanicusInfo::set_begin_time_ms(mechanicus_info, this->stage_begin_time_ms_);
    if ( *(_BYTE *)(((unsigned __int64)&this->duration_seconds_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->duration_seconds_ >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::InBattleMechanicusInfo::set_duration_ms(mechanicus_info, 1000LL * this->duration_seconds_);
    if ( *(_BYTE *)(((unsigned __int64)&this->current_round_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->current_round_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::InBattleMechanicusInfo::set_round(mechanicus_info, this->current_round_);
    if ( *(_BYTE *)(((unsigned __int64)&this->rounds_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->rounds_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto::InBattleMechanicusInfo::set_total_round(mechanicus_info, this->rounds_);
    if ( *(_BYTE *)(((unsigned __int64)&this->left_monsters_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->left_monsters_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::InBattleMechanicusInfo::set_left_monster(mechanicus_info, this->left_monsters_);
    if ( *(_BYTE *)(((unsigned __int64)&this->excaped_monsters_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->excaped_monsters_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto::InBattleMechanicusInfo::set_excaped_monster_num(mechanicus_info, this->excaped_monsters_);
    if ( *(_BYTE *)(((unsigned __int64)&this->max_escapable_monsters_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_escapable_monsters_ >> 3)
                                                           + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::InBattleMechanicusInfo::set_max_excape_monster_num(mechanicus_info, this->max_escapable_monsters_);
    __for_range = &this->uid_to_player_info_map_;
    __for_begin._M_cur = std::unordered_map<unsigned int,MechanicusMultistagePlay::PlayerInfo>::begin(&this->uid_to_player_info_map_)._M_cur;
    __for_begin_2._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,MechanicusMultistagePlay::CardInfo> >,false>::__node_type *)std::unordered_map<unsigned int,MechanicusMultistagePlay::PlayerInfo>::end(&this->uid_to_player_info_map_)._M_cur;
    while ( std::__detail::operator!=<std::pair<unsigned int const,MechanicusMultistagePlay::PlayerInfo>,false>(
              &__for_begin,
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,MechanicusMultistagePlay::PlayerInfo>,false> *)&__for_begin_2) )
    {
      v72 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,MechanicusMultistagePlay::PlayerInfo>,false,false>::operator*(&__for_begin);
      uid = std::get<0ul,unsigned int const,MechanicusMultistagePlay::PlayerInfo>(v72);
      player_info = (std::tuple_element<1,const std::pair<unsigned int const,MechanicusMultistagePlay::PlayerInfo> >::type *)std::get<1ul,unsigned int const,MechanicusMultistagePlay::PlayerInfo>(v72);
      stage_player_info = proto::InBattleMechanicusInfo::add_player_list(mechanicus_info);
      if ( *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::InBattleMechanicusPlayerInfo::set_uid(stage_player_info, *uid);
      if ( *(_BYTE *)(((unsigned __int64)player_info >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)player_info & 7) + 3) >= *(_BYTE *)(((unsigned __int64)player_info >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::InBattleMechanicusPlayerInfo::set_building_points(stage_player_info, player_info->building_points_);
      if ( *(_BYTE *)(((unsigned __int64)&player_info->pick_card_id_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)player_info + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&player_info->pick_card_id_ >> 3)
                                                                   + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::InBattleMechanicusPlayerInfo::set_pick_card_id(stage_player_info, player_info->pick_card_id_);
      if ( *(_BYTE *)(((unsigned __int64)&player_info->is_card_confirmed_ >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)player_info + 16) & 7) >= *(_BYTE *)(((unsigned __int64)&player_info->is_card_confirmed_ >> 3)
                                                                 + 0x7FFF8000) )
      {
        __asan_report_load1(&player_info->is_card_confirmed_);
      }
      proto::InBattleMechanicusPlayerInfo::set_is_card_confirmed(stage_player_info, player_info->is_card_confirmed_);
      if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      scene = this->scene_;
      if ( *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      Scene::findPlayer((const Scene *const)(v2 + 80), (__int64)scene, *uid);
      if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 80)) )
      {
        common::milog::MiLogStream::create(
          &v81,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/scene/scene_multistage_play_impl/mechanicus_multistage_play.cpp",
          "toClient",
          310);
        v8 = common::milog::MiLogStream::operator<<<MechanicusMultistagePlay,(MechanicusMultistagePlay*)0>(&v81, this);
        v9 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v8, (const char (*)[9])" player:");
        v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, uid);
        common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v10, (const char (*)[13])" not online.");
        common::milog::MiLogStream::~MiLogStream(&v81);
      }
      else
      {
        std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v2 + 112));
        v11 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
        MechanicusMultistagePlay::getPlayerGearsLevelMap(this, v11, (std::map<unsigned int,unsigned int> *)(v2 + 112));
        __for_range_0 = (std::map<unsigned int,unsigned int> *)(v2 + 112);
        __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,MechanicusMultistagePlay::CardInfo> >,false>::__node_type *)std::map<unsigned int,unsigned int>::begin((std::map<unsigned int,unsigned int> *const)(v2 + 112))._M_node;
        __for_begin_0._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,MechanicusMultistagePlay::CardInfo>,false>::__node_type *)std::map<unsigned int,unsigned int>::end(__for_range_0)._M_node;
        while ( std::operator!=(
                  (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_end,
                  (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_begin_0) )
        {
          v12 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)&__for_end);
          v13 = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr *)v12;
          if ( ((unsigned __int8)v12 & 7) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)((((unsigned __int64)&v12->second + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)v12 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v12->second + 3) >> 3) + 0x7FFF8000) )
          {
            __asan_report_load_n(v12, 8LL);
          }
          __for_end_0._M_node = *v13;
          gear_id = std::get<0ul,unsigned int const,unsigned int>((std::pair<unsigned int const,unsigned int> *)&__for_end_0);
          gear_level = std::get<1ul,unsigned int const,unsigned int>((std::pair<unsigned int const,unsigned int> *)&__for_end_0);
          gear_info = proto::InBattleMechanicusPlayerInfo::add_building_list(stage_player_info);
          if ( *(_BYTE *)(((unsigned __int64)gear_id >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)gear_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)gear_id >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          proto::InBattleMechanicusBuildingInfo::set_building_id(gear_info, *gear_id);
          if ( *(_BYTE *)(((unsigned __int64)gear_level >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)gear_level & 7) + 3) >= *(_BYTE *)(((unsigned __int64)gear_level >> 3)
                                                                         + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          proto::InBattleMechanicusBuildingInfo::set_level(gear_info, *gear_level);
          if ( *(_BYTE *)(((unsigned __int64)gear_level >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)gear_level & 7) + 3) >= *(_BYTE *)(((unsigned __int64)gear_level >> 3)
                                                                         + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          v14 = *gear_level;
          if ( *(_BYTE *)(((unsigned __int64)gear_id >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)gear_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)gear_id >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          GearBuildingCost = MechanicusMultistagePlay::getGearBuildingCost(this, *gear_id, v14);
          proto::InBattleMechanicusBuildingInfo::set_cost_points(gear_info, GearBuildingCost);
          if ( *(_BYTE *)(((unsigned __int64)gear_level >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)gear_level & 7) + 3) >= *(_BYTE *)(((unsigned __int64)gear_level >> 3)
                                                                         + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          v16 = *gear_level;
          if ( *(_BYTE *)(((unsigned __int64)gear_id >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)gear_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)gear_id >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          GearDemolitionRefund = MechanicusMultistagePlay::getGearDemolitionRefund(this, *gear_id, v16);
          proto::InBattleMechanicusBuildingInfo::set_refund_points(gear_info, GearDemolitionRefund);
          std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)&__for_end);
        }
        std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v2 + 112));
      }
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 80));
      std::__detail::_Node_const_iterator<std::pair<unsigned int const,MechanicusMultistagePlay::PlayerInfo>,false,false>::operator++(&__for_begin);
    }
    MechanicusMultistagePlay::fillProtoMonsterList(this, mechanicus_info);
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    toPtr<DungeonScene,Scene>((Scene *)(v2 + 48));
    if ( std::operator!=<DungeonScene>((const std::shared_ptr<DungeonScene> *)(v2 + 48), 0LL) )
    {
      v18 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
      team_uid_set = DungeonScene::getTeamUidSet(v18);
      common::milog::MiLogStream::create(
        &v81,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/scene_multistage_play_impl/mechanicus_multistage_play.cpp",
        "toClient",
        333);
      v19 = common::milog::MiLogStream::operator<<<MechanicusMultistagePlay,(MechanicusMultistagePlay*)0>(&v81, this);
      v20 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v19, (const char (*)[15])" team uid set:");
      common::milog::MiLogStream::operator<<<unsigned int>(v20, team_uid_set);
      common::milog::MiLogStream::~MiLogStream(&v81);
      __for_range_1 = team_uid_set;
      __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,MechanicusMultistagePlay::PlayerInfo>,false>::__node_type *)std::set<unsigned int>::begin(team_uid_set)._M_node;
      __for_begin_2._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,MechanicusMultistagePlay::CardInfo> >,false>::__node_type *)std::set<unsigned int>::end(__for_range_1)._M_node;
      while ( std::operator!=(
                (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_begin,
                (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_begin_2) )
      {
        v21 = std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin);
        if ( *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v21 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        *(_DWORD *)(v2 + 32) = *v21;
        if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,MechanicusMultistagePlay::PlayerInfo> const,unsigned int>(
                &this->uid_to_player_info_map_,
                (const unsigned int *)(v2 + 32)) )
        {
          stage_player_info_0 = proto::InBattleMechanicusInfo::add_player_list(mechanicus_info);
          proto::InBattleMechanicusPlayerInfo::set_uid(stage_player_info_0, *(_DWORD *)(v2 + 32));
          if ( *(_BYTE *)(((unsigned __int64)&this->init_building_poitns_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->init_building_poitns_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          proto::InBattleMechanicusPlayerInfo::set_building_points(stage_player_info_0, this->init_building_poitns_);
          v22 = ServiceBox::findService<GameserverService>();
          GameThreadLocal = (unsigned int)GameserverService::getGameThreadLocal(v22);
          PlayerMgr::findOnlinePlayer((PlayerMgr *const)(v2 + 80), GameThreadLocal + 16);
          if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 80)) )
          {
            common::milog::MiLogStream::create(
              &v81,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/scene/scene_multistage_play_impl/mechanicus_multistage_play.cpp",
              "toClient",
              347);
            v24 = common::milog::MiLogStream::operator<<<MechanicusMultistagePlay,(MechanicusMultistagePlay*)0>(
                    &v81,
                    this);
            v25 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v24, (const char (*)[9])" player:");
            v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v25,
                    (const unsigned int *)(v2 + 32));
            common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v26, (const char (*)[13])" not online.");
            common::milog::MiLogStream::~MiLogStream(&v81);
          }
          else
          {
            std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v2 + 112));
            v27 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
            MechanicusMultistagePlay::getPlayerGearsLevelMap(
              this,
              v27,
              (std::map<unsigned int,unsigned int> *)(v2 + 112));
            __for_range_2 = (std::map<unsigned int,unsigned int> *)(v2 + 112);
            __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,MechanicusMultistagePlay::CardInfo> >,false>::__node_type *)std::map<unsigned int,unsigned int>::begin((std::map<unsigned int,unsigned int> *const)(v2 + 112))._M_node;
            __for_begin_0._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,MechanicusMultistagePlay::CardInfo>,false>::__node_type *)std::map<unsigned int,unsigned int>::end(__for_range_2)._M_node;
            while ( std::operator!=(
                      (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_end,
                      (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_begin_0) )
            {
              v28 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)&__for_end);
              v29 = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr *)v28;
              if ( ((unsigned __int8)v28 & 7) >= *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000)
                && *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) != 0
                || *(_BYTE *)((((unsigned __int64)&v28->second + 3) >> 3) + 0x7FFF8000) != 0
                && (((unsigned __int8)v28 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v28->second + 3) >> 3)
                                                                + 0x7FFF8000) )
              {
                __asan_report_load_n(v28, 8LL);
              }
              __for_end_0._M_node = *v29;
              gear_id_0 = std::get<0ul,unsigned int const,unsigned int>((std::pair<unsigned int const,unsigned int> *)&__for_end_0);
              gear_level_0 = std::get<1ul,unsigned int const,unsigned int>((std::pair<unsigned int const,unsigned int> *)&__for_end_0);
              gear_info_0 = proto::InBattleMechanicusPlayerInfo::add_building_list(stage_player_info_0);
              if ( *(_BYTE *)(((unsigned __int64)gear_id_0 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)gear_id_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)gear_id_0 >> 3)
                                                                            + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              proto::InBattleMechanicusBuildingInfo::set_building_id(gear_info_0, *gear_id_0);
              if ( *(_BYTE *)(((unsigned __int64)gear_level_0 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)gear_level_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)gear_level_0 >> 3)
                                                                               + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              proto::InBattleMechanicusBuildingInfo::set_level(gear_info_0, *gear_level_0);
              if ( *(_BYTE *)(((unsigned __int64)gear_level_0 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)gear_level_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)gear_level_0 >> 3)
                                                                               + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              v30 = *gear_level_0;
              if ( *(_BYTE *)(((unsigned __int64)gear_id_0 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)gear_id_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)gear_id_0 >> 3)
                                                                            + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              v31 = MechanicusMultistagePlay::getGearBuildingCost(this, *gear_id_0, v30);
              proto::InBattleMechanicusBuildingInfo::set_cost_points(gear_info_0, v31);
              if ( *(_BYTE *)(((unsigned __int64)gear_level_0 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)gear_level_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)gear_level_0 >> 3)
                                                                               + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              v32 = *gear_level_0;
              if ( *(_BYTE *)(((unsigned __int64)gear_id_0 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)gear_id_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)gear_id_0 >> 3)
                                                                            + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              v33 = MechanicusMultistagePlay::getGearDemolitionRefund(this, *gear_id_0, v32);
              proto::InBattleMechanicusBuildingInfo::set_refund_points(gear_info_0, v33);
              std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)&__for_end);
            }
            std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v2 + 112));
          }
          std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 80));
        }
        std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin);
      }
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->stage_type_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->stage_type_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( this->stage_type_ == MULTISTAGE_STAGE_MECHANICUS_FLIP_CARD )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->card_flip_wait_start_time_ms_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      proto::InBattleMechanicusInfo::set_wait_begin_time_us(mechanicus_info, this->card_flip_wait_start_time_ms_);
      if ( *(_BYTE *)(((unsigned __int64)&this->card_flip_wait_seconds_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->card_flip_wait_seconds_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      proto::InBattleMechanicusInfo::set_wait_seconds(mechanicus_info, this->card_flip_wait_seconds_);
      __for_range_3 = &this->stage_cards_set_;
      __for_begin_0._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,MechanicusMultistagePlay::CardInfo>,false>::__node_type *)std::set<unsigned int>::begin(&this->stage_cards_set_)._M_node;
      __for_end_0._M_node = std::set<unsigned int>::end(__for_range_3)._M_node;
      while ( std::operator!=((const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_begin_0, &__for_end_0) )
      {
        v34 = std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin_0);
        if ( *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v34 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        *(_DWORD *)(v2 + 32) = *v34;
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)(v2 + 80));
        v35 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
        card_config_ptr = data::TreatreMechanicusExcelConfigMgrBase::findMechanicusCardExcelConfig(
                            &v35->design_config.txt_config_mgr.mechanicus_config_mgr,
                            *(_DWORD *)(v2 + 32));
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 80));
        if ( card_config_ptr )
        {
          card_info = proto::InBattleMechanicusInfo::add_pick_card_list(mechanicus_info);
          proto::InBattleMechanicusCardInfo::set_card_id(card_info, *(_DWORD *)(v2 + 32));
          if ( *(_BYTE *)(((unsigned __int64)&card_config_ptr->last_round >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&card_config_ptr->last_round >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          if ( card_config_ptr->last_round )
          {
            if ( *(_BYTE *)(((unsigned __int64)&this->current_round_ >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->current_round_ >> 3)
                                                                   + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            proto::InBattleMechanicusCardInfo::set_begin_round(card_info, this->current_round_);
            if ( *(_BYTE *)(((unsigned __int64)&this->current_round_ >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->current_round_ >> 3)
                                                                   + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            current_round = this->current_round_;
            if ( *(_BYTE *)(((unsigned __int64)&card_config_ptr->last_round >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&card_config_ptr->last_round >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4();
            }
            proto::InBattleMechanicusCardInfo::set_end_round(card_info, current_round + card_config_ptr->last_round - 1);
          }
          if ( *(_BYTE *)(((unsigned __int64)&card_config_ptr->cost_points >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)card_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&card_config_ptr->cost_points >> 3)
                                                                           + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          proto::InBattleMechanicusCardInfo::set_cost_points(card_info, card_config_ptr->cost_points);
        }
        else
        {
          common::milog::MiLogStream::create(
            &v81,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/scene/scene_multistage_play_impl/mechanicus_multistage_play.cpp",
            "toClient",
            384);
          v37 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                  &v81,
                  (const char (*)[26])"[MECHANICUS] stage card: ");
          v38 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v37,
                  (const unsigned int *)(v2 + 32));
          v39 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                  v38,
                  (const char (*)[26])" config NOT found. group:");
          v40 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v39, &this->group_id_);
          v41 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                  v40,
                  (const char (*)[14])" play_index: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v41, &this->play_index_);
          common::milog::MiLogStream::~MiLogStream(&v81);
        }
        std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin_0);
      }
    }
    __for_range_4 = &this->uid_to_card_info_map_;
    __for_begin_2._M_cur = std::unordered_map<unsigned int,std::unordered_map<unsigned int,MechanicusMultistagePlay::CardInfo>>::begin(&this->uid_to_card_info_map_)._M_cur;
    __for_end._M_cur = std::unordered_map<unsigned int,std::unordered_map<unsigned int,MechanicusMultistagePlay::CardInfo>>::end(__for_range_4)._M_cur;
    while ( std::__detail::operator!=<std::pair<unsigned int const,std::unordered_map<unsigned int,MechanicusMultistagePlay::CardInfo>>,false>(
              &__for_begin_2,
              &__for_end) )
    {
      v64 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,MechanicusMultistagePlay::CardInfo>>,false,false>::operator*(&__for_begin_2);
      _ = std::get<0ul,unsigned int const,std::unordered_map<unsigned int,MechanicusMultistagePlay::CardInfo>>(v64);
      card_info_map = (std::tuple_element<1,const std::pair<unsigned int const,std::unordered_map<unsigned int,MechanicusMultistagePlay::CardInfo> > >::type *)std::get<1ul,unsigned int const,std::unordered_map<unsigned int,MechanicusMultistagePlay::CardInfo>>(v64);
      __for_range_5 = card_info_map;
      __for_begin_0._M_cur = std::unordered_map<unsigned int,MechanicusMultistagePlay::CardInfo>::begin(card_info_map)._M_cur;
      __for_end_0._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)std::unordered_map<unsigned int,MechanicusMultistagePlay::CardInfo>::end(__for_range_5)._M_cur;
      while ( std::__detail::operator!=<std::pair<unsigned int const,MechanicusMultistagePlay::CardInfo>,false>(
                &__for_begin_0,
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,MechanicusMultistagePlay::CardInfo>,false> *)&__for_end_0) )
      {
        v68 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,MechanicusMultistagePlay::CardInfo>,false,false>::operator*(&__for_begin_0);
        card_id = std::get<0ul,unsigned int const,MechanicusMultistagePlay::CardInfo>(v68);
        card_info_0 = (std::tuple_element<1,const std::pair<unsigned int const,MechanicusMultistagePlay::CardInfo> >::type *)std::get<1ul,unsigned int const,MechanicusMultistagePlay::CardInfo>(v68);
        picked_card = proto::InBattleMechanicusInfo::add_history_card_list(mechanicus_info);
        if ( *(_BYTE *)(((unsigned __int64)card_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)card_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)card_id >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        proto::InBattleMechanicusCardInfo::set_card_id(picked_card, *card_id);
        if ( *(_BYTE *)(((unsigned __int64)&card_info_0->challenge_state >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)card_info_0 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&card_info_0->challenge_state >> 3)
                                                                     + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        proto::InBattleMechanicusCardInfo::set_challenge_state(picked_card, card_info_0->challenge_state);
        if ( *(_BYTE *)(((unsigned __int64)&card_info_0->begin_round >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)card_info_0 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&card_info_0->begin_round >> 3)
                                                                     + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        proto::InBattleMechanicusCardInfo::set_begin_round(picked_card, card_info_0->begin_round);
        if ( *(_BYTE *)(((unsigned __int64)&card_info_0->end_round >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)card_info_0 + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&card_info_0->end_round >> 3)
                                                                     + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        proto::InBattleMechanicusCardInfo::set_end_round(picked_card, card_info_0->end_round);
        if ( *(_BYTE *)(((unsigned __int64)&card_info_0->curse_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)card_info_0 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&card_info_0->curse_id >> 3)
                                                                    + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        proto::InBattleMechanicusCardInfo::set_rand_effect_id(picked_card, card_info_0->curse_id);
        std::__detail::_Node_const_iterator<std::pair<unsigned int const,MechanicusMultistagePlay::CardInfo>,false,false>::operator++(&__for_begin_0);
      }
      std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,MechanicusMultistagePlay::CardInfo>>,false,false>::operator++(&__for_begin_2);
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->building_stage_seconds_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->building_stage_seconds_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto::InBattleMechanicusInfo::set_building_stage_duration(mechanicus_info, this->building_stage_seconds_);
    __for_range_6 = &this->entrance_set_;
    __for_begin_0._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,MechanicusMultistagePlay::CardInfo>,false>::__node_type *)std::set<unsigned int>::begin(&this->entrance_set_)._M_node;
    __for_end_0._M_node = std::set<unsigned int>::end(__for_range_6)._M_node;
    while ( std::operator!=((const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_begin_0, &__for_end_0) )
    {
      v42 = (google::protobuf::uint32 *)std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin_0);
      if ( *(_BYTE *)(((unsigned __int64)v42 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v42 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v42 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::InBattleMechanicusInfo::add_entrance_list(mechanicus_info, *v42);
      std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin_0);
    }
    __for_range_7 = &this->exit_set_;
    __for_begin_0._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,MechanicusMultistagePlay::CardInfo>,false>::__node_type *)std::set<unsigned int>::begin(&this->exit_set_)._M_node;
    __for_end_0._M_node = std::set<unsigned int>::end(__for_range_7)._M_node;
    while ( std::operator!=((const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_begin_0, &__for_end_0) )
    {
      v43 = (google::protobuf::uint32 *)std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin_0);
      if ( *(_BYTE *)(((unsigned __int64)v43 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v43 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v43 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::InBattleMechanicusInfo::add_exit_list(mechanicus_info, *v43);
      std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin_0);
    }
    v5 = 0;
    std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v2 + 48));
  }
  result = v5;
  if ( v82 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 414: range 000000001601CDB8-000000001601CF25
proto::InBattleMechanicusStageType __cdecl MechanicusMultistagePlay::convertToInBattleStage(
        const MechanicusMultistagePlay *const this)
{
  data::MultistageStageType stage_type; // eax
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v4; // rbx
  common::milog::MiLogStream *v5; // rax
  char *val; // [rsp+18h] [rbp-38h] BYREF
  common::milog::MiLogStream v7; // [rsp+20h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->stage_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  stage_type = this->stage_type_;
  if ( stage_type == MULTISTAGE_STAGE_MECHANICUS_FLIP_CARD )
    return 2;
  if ( stage_type > MULTISTAGE_STAGE_MECHANICUS_FLIP_CARD )
    goto LABEL_11;
  if ( stage_type == MULTISTAGE_STAGE_MECHANICUS_BUILD )
    return 1;
  if ( stage_type == MULTISTAGE_STAGE_MECHANICUS_KILL )
    return 3;
LABEL_11:
  common::milog::MiLogStream::create(
    &v7,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/scene/scene_multistage_play_impl/mechanicus_multistage_play.cpp",
    "convertToInBattleStage",
    424);
  v3 = common::milog::MiLogStream::operator<<<MechanicusMultistagePlay,(MechanicusMultistagePlay*)0>(&v7, this);
  v4 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v3, (const char (*)[14])" stage type: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  val = (char *)data::getDescription(this->stage_type_);
  v5 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v4, (const char *const *)&val);
  common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v5, (const char (*)[16])" not supported.");
  common::milog::MiLogStream::~MiLogStream(&v7);
  return 0;
};

// Line 431: range 000000001601CF26-000000001601D0F9
void __cdecl MechanicusMultistagePlay::onEnd(MechanicusMultistagePlay *const this, bool is_succ)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  DungeonScene *p_play_index; // rdi
  bool v6; // cl
  uint32_t play_index; // edx
  char v9[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 21 dungeon_scene_ptr:432";
  *(_QWORD *)(v2 + 16) = MechanicusMultistagePlay::onEnd;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  toPtr<DungeonScene,Scene>((Scene *)(v2 + 32));
  if ( std::operator!=<DungeonScene>((const std::shared_ptr<DungeonScene> *)(v2 + 32), 0LL) )
  {
    p_play_index = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    v6 = is_succ;
    if ( *(_BYTE *)(((unsigned __int64)&this->play_index_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->play_index_ >> 3) + 0x7FFF8000) )
    {
      p_play_index = (DungeonScene *)&this->play_index_;
      __asan_report_load4();
    }
    play_index = this->play_index_;
    if ( *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      p_play_index = (DungeonScene *)&this->group_id_;
      __asan_report_load4();
    }
    DungeonScene::onMultistagePlayEnd(p_play_index, this->group_id_, play_index, v6);
  }
  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v2 + 32));
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 441: range 000000001601D0FA-000000001601D3A0
void __cdecl MechanicusMultistagePlay::notifyBuildingPoints(MechanicusMultistagePlay *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  uint32_t building_points; // r14d
  std::tuple_element<0,const std::pair<unsigned int const,MechanicusMultistagePlay::PlayerInfo> >::type *v5; // rsi
  unsigned int *v6; // rax
  uint32_t *v7; // rdx
  char v8; // cl
  std::unordered_map<unsigned int,MechanicusMultistagePlay::PlayerInfo>::iterator __for_begin; // [rsp+18h] [rbp-108h] BYREF
  std::unordered_map<unsigned int,MechanicusMultistagePlay::PlayerInfo>::iterator __for_end; // [rsp+20h] [rbp-100h] BYREF
  google::protobuf::Map<unsigned int,unsigned int> *build_points_map; // [rsp+28h] [rbp-F8h]
  std::unordered_map<unsigned int,MechanicusMultistagePlay::PlayerInfo> *__for_range; // [rsp+30h] [rbp-F0h]
  const std::pair<unsigned int const,MechanicusMultistagePlay::PlayerInfo> *v13; // [rsp+38h] [rbp-E8h]
  std::tuple_element<0,const std::pair<unsigned int const,MechanicusMultistagePlay::PlayerInfo> >::type *uid; // [rsp+40h] [rbp-E0h]
  std::tuple_element<1,const std::pair<unsigned int const,MechanicusMultistagePlay::PlayerInfo> >::type *player_info; // [rsp+48h] [rbp-D8h]
  char v16[208]; // [rsp+50h] [rbp-D0h] BYREF

  v1 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 96 10 notify:442";
  *(_QWORD *)(v1 + 16) = MechanicusMultistagePlay::notifyBuildingPoints;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450896) = -202116109;
  proto::InBattleMechanicusBuildingPointsNotify::InBattleMechanicusBuildingPointsNotify((proto::InBattleMechanicusBuildingPointsNotify *const)(v1 + 32));
  build_points_map = proto::InBattleMechanicusBuildingPointsNotify::mutable_player_building_points_map((proto::InBattleMechanicusBuildingPointsNotify *const)(v1 + 32));
  __for_range = &this->uid_to_player_info_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,MechanicusMultistagePlay::PlayerInfo>::begin(&this->uid_to_player_info_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,MechanicusMultistagePlay::PlayerInfo>::end(&this->uid_to_player_info_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,MechanicusMultistagePlay::PlayerInfo>,false>(
            &__for_begin,
            &__for_end) )
  {
    v13 = std::__detail::_Node_iterator<std::pair<unsigned int const,MechanicusMultistagePlay::PlayerInfo>,false,false>::operator*(&__for_begin);
    uid = std::get<0ul,unsigned int const,MechanicusMultistagePlay::PlayerInfo>(v13);
    player_info = (std::tuple_element<1,const std::pair<unsigned int const,MechanicusMultistagePlay::PlayerInfo> >::type *)std::get<1ul,unsigned int const,MechanicusMultistagePlay::PlayerInfo>(v13);
    if ( *(_BYTE *)(((unsigned __int64)player_info >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)player_info & 7) + 3) >= *(_BYTE *)(((unsigned __int64)player_info >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    building_points = player_info->building_points_;
    v5 = uid;
    v6 = google::protobuf::Map<unsigned int,unsigned int>::operator[](build_points_map, uid);
    v7 = v6;
    v8 = *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000);
    if ( v8 != 0 && (char)(((unsigned __int8)v6 & 7) + 3) >= v8 )
    {
      LOBYTE(v5) = v8 != 0;
      __asan_report_store4(v6, v5, (_BYTE)v6);
    }
    *v7 = building_points;
    std::__detail::_Node_iterator<std::pair<unsigned int const,MechanicusMultistagePlay::PlayerInfo>,false,false>::operator++(&__for_begin);
  }
  SceneMultistagePlay::notifyPlayMsg(this, (const google::protobuf::Message *)(v1 + 32), 0);
  proto::InBattleMechanicusBuildingPointsNotify::~InBattleMechanicusBuildingPointsNotify((proto::InBattleMechanicusBuildingPointsNotify *const)(v1 + 32));
  if ( v16 == (char *)v1 )
  {
    *(_DWORD *)((v1 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 453: range 000000001601D3A2-000000001601D521
void __cdecl MechanicusMultistagePlay::notifyExcapedMonsters(MechanicusMultistagePlay *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  char v4[128]; // [rsp+10h] [rbp-80h] BYREF

  v1 = (unsigned __int64)v4;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 24 10 notify:454";
  *(_QWORD *)(v1 + 16) = MechanicusMultistagePlay::notifyExcapedMonsters;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218103808;
  v3[536862722] = -202116109;
  proto::InBattleMechanicusExcapeMonsterNotify::InBattleMechanicusExcapeMonsterNotify((proto::InBattleMechanicusExcapeMonsterNotify *const)(v1 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->excaped_monsters_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->excaped_monsters_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::InBattleMechanicusExcapeMonsterNotify::set_excaped_monster_num(
    (proto::InBattleMechanicusExcapeMonsterNotify *const)(v1 + 32),
    this->excaped_monsters_);
  SceneMultistagePlay::notifyPlayMsg(this, (const google::protobuf::Message *)(v1 + 32), 0);
  proto::InBattleMechanicusExcapeMonsterNotify::~InBattleMechanicusExcapeMonsterNotify((proto::InBattleMechanicusExcapeMonsterNotify *const)(v1 + 32));
  if ( v4 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 461: range 000000001601D522-000000001601D6A9
void __cdecl MechanicusMultistagePlay::notifyLeftMonsters(MechanicusMultistagePlay *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  char v4[128]; // [rsp+10h] [rbp-80h] BYREF

  v1 = (unsigned __int64)v4;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 24 10 notify:462";
  *(_QWORD *)(v1 + 16) = MechanicusMultistagePlay::notifyLeftMonsters;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218103808;
  v3[536862722] = -202116109;
  proto::InBattleMechanicusLeftMonsterNotify::InBattleMechanicusLeftMonsterNotify((proto::InBattleMechanicusLeftMonsterNotify *const)(v1 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->left_monsters_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->left_monsters_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::InBattleMechanicusLeftMonsterNotify::set_left_monster(
    (proto::InBattleMechanicusLeftMonsterNotify *const)(v1 + 32),
    this->left_monsters_);
  SceneMultistagePlay::notifyPlayMsg(this, (const google::protobuf::Message *)(v1 + 32), 0);
  proto::InBattleMechanicusLeftMonsterNotify::~InBattleMechanicusLeftMonsterNotify((proto::InBattleMechanicusLeftMonsterNotify *const)(v1 + 32));
  if ( v4 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 468: range 000000001601D6AA-000000001601D8C9
__int64 __fastcall MechanicusMultistagePlay::getBuildingPoints(
        const MechanicusMultistagePlay *const this,
        uint32_t uid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,MechanicusMultistagePlay::PlayerInfo>,false,false>::pointer v5; // rdx
  __int64 result; // rax
  common::milog::MiLogStream *v7; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,MechanicusMultistagePlay::PlayerInfo>,false> __y; // [rsp+18h] [rbp-A8h] BYREF
  common::milog::MiLogStream v9; // [rsp+20h] [rbp-A0h] BYREF
  char v10[128]; // [rsp+40h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 7 uid:467 64 8 8 iter:469";
  *(_QWORD *)(v2 + 16) = MechanicusMultistagePlay::getBuildingPoints;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = uid;
  *(std::unordered_map<unsigned int,MechanicusMultistagePlay::PlayerInfo>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,MechanicusMultistagePlay::PlayerInfo>::find(&this->uid_to_player_info_map_, (const std::unordered_map<unsigned int,MechanicusMultistagePlay::PlayerInfo>::key_type *)(v2 + 48));
  __y._M_cur = std::unordered_map<unsigned int,MechanicusMultistagePlay::PlayerInfo>::end(&this->uid_to_player_info_map_)._M_cur;
  if ( std::__detail::operator!=<std::pair<unsigned int const,MechanicusMultistagePlay::PlayerInfo>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,MechanicusMultistagePlay::PlayerInfo>,false> *)(v2 + 64),
         &__y) )
  {
    v5 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,MechanicusMultistagePlay::PlayerInfo>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,MechanicusMultistagePlay::PlayerInfo>,false,false> *const)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&v5->second >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)v5 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v5->second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    result = v5->second.building_points_;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_multistage_play_impl/mechanicus_multistage_play.cpp",
      "getBuildingPoints",
      475);
    v7 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
           &v9,
           (const char (*)[34])"[MECHANICUS] not in battle. uid: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v9);
    result = 0LL;
  }
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 480: range 000000001601D8CA-000000001601DB13
__int64 __fastcall MechanicusMultistagePlay::checkSubBuildingPoints(
        const MechanicusMultistagePlay *const this,
        uint32_t uid,
        uint32_t sub_value)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  __int64 result; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,MechanicusMultistagePlay::PlayerInfo>,false,false>::pointer v8; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,MechanicusMultistagePlay::PlayerInfo>,false> __y; // [rsp+10h] [rbp-B0h] BYREF
  const MechanicusMultistagePlay::PlayerInfo *player_info; // [rsp+18h] [rbp-A8h]
  common::milog::MiLogStream v12; // [rsp+20h] [rbp-A0h] BYREF
  char v13[128]; // [rsp+40h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 7 uid:479 64 8 8 iter:481";
  *(_QWORD *)(v3 + 16) = MechanicusMultistagePlay::checkSubBuildingPoints;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 48) = uid;
  *(std::unordered_map<unsigned int,MechanicusMultistagePlay::PlayerInfo>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,MechanicusMultistagePlay::PlayerInfo>::find(&this->uid_to_player_info_map_, (const std::unordered_map<unsigned int,MechanicusMultistagePlay::PlayerInfo>::key_type *)(v3 + 48));
  __y._M_cur = std::unordered_map<unsigned int,MechanicusMultistagePlay::PlayerInfo>::end(&this->uid_to_player_info_map_)._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned int const,MechanicusMultistagePlay::PlayerInfo>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,MechanicusMultistagePlay::PlayerInfo>,false> *)(v3 + 64),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_multistage_play_impl/mechanicus_multistage_play.cpp",
      "checkSubBuildingPoints",
      484);
    v6 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
           &v12,
           (const char (*)[34])"[MECHANICUS] not in battle. uid: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v12);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    v8 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,MechanicusMultistagePlay::PlayerInfo>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,MechanicusMultistagePlay::PlayerInfo>,false,false> *const)(v3 + 64));
    player_info = &v8->second;
    if ( *(_BYTE *)(((unsigned __int64)&v8->second >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)v8 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( sub_value <= player_info->building_points_ )
      result = 0LL;
    else
      result = 9254LL;
  }
  if ( v13 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 497: range 000000001601DB14-000000001601DCC0
__int64 __fastcall MechanicusMultistagePlay::subBuildingPoints(
        MechanicusMultistagePlay *const this,
        uint32_t uid,
        uint32_t sub_value)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  __int64 result; // rax
  MechanicusMultistagePlay::PlayerInfo *player_info; // [rsp+18h] [rbp-68h]
  char v9[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 7 uid:496";
  *(_QWORD *)(v3 + 16) = MechanicusMultistagePlay::subBuildingPoints;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = uid;
  if ( (unsigned int)MechanicusMultistagePlay::checkSubBuildingPoints(this, *(_DWORD *)(v3 + 32), sub_value) )
  {
    result = 0xFFFFFFFFLL;
  }
  else
  {
    player_info = std::unordered_map<unsigned int,MechanicusMultistagePlay::PlayerInfo>::operator[](
                    &this->uid_to_player_info_map_,
                    (const std::unordered_map<unsigned int,MechanicusMultistagePlay::PlayerInfo>::key_type *)(v3 + 32));
    if ( *(_BYTE *)(((unsigned __int64)player_info >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)player_info & 7) + 3) >= *(_BYTE *)(((unsigned __int64)player_info >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    player_info->building_points_ -= sub_value;
    if ( *(_BYTE *)(((unsigned __int64)&player_info->cost_building_points_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)player_info + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&player_info->cost_building_points_ >> 3)
                                                                + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    player_info->cost_building_points_ += sub_value;
    MechanicusMultistagePlay::notifyBuildingPoints(this);
    result = 0LL;
  }
  if ( v9 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 512: range 000000001601DCC2-000000001601E080
__int64 __fastcall MechanicusMultistagePlay::checkAddBuildingPoints(
        const MechanicusMultistagePlay *const this,
        uint32_t uid,
        uint32_t add_value)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  __int64 result; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,MechanicusMultistagePlay::PlayerInfo>,false,false>::pointer v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,MechanicusMultistagePlay::PlayerInfo>,false> __y; // [rsp+10h] [rbp-B0h] BYREF
  const MechanicusMultistagePlay::PlayerInfo *player_info; // [rsp+18h] [rbp-A8h]
  common::milog::MiLogStream v18; // [rsp+20h] [rbp-A0h] BYREF
  char v19[128]; // [rsp+40h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 7 uid:511 48 4 13 add_value:511 64 8 8 iter:513";
  *(_QWORD *)(v3 + 16) = MechanicusMultistagePlay::checkAddBuildingPoints;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 32) = uid;
  *(_DWORD *)(v3 + 48) = add_value;
  *(std::unordered_map<unsigned int,MechanicusMultistagePlay::PlayerInfo>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,MechanicusMultistagePlay::PlayerInfo>::find(&this->uid_to_player_info_map_, (const std::unordered_map<unsigned int,MechanicusMultistagePlay::PlayerInfo>::key_type *)(v3 + 32));
  __y._M_cur = std::unordered_map<unsigned int,MechanicusMultistagePlay::PlayerInfo>::end(&this->uid_to_player_info_map_)._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned int const,MechanicusMultistagePlay::PlayerInfo>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,MechanicusMultistagePlay::PlayerInfo>,false> *)(v3 + 64),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_multistage_play_impl/mechanicus_multistage_play.cpp",
      "checkAddBuildingPoints",
      516);
    v6 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
           &v18,
           (const char (*)[34])"[MECHANICUS] not in battle. uid: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v18);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    v8 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,MechanicusMultistagePlay::PlayerInfo>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,MechanicusMultistagePlay::PlayerInfo>,false,false> *const)(v3 + 64));
    player_info = &v8->second;
    if ( *(_BYTE *)(((unsigned __int64)&v8->second >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)v8 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( player_info->building_points_
      && *(_DWORD *)(v3 + 48)
      && *(_DWORD *)(v3 + 48) + player_info->building_points_ < player_info->building_points_ )
    {
      goto LABEL_16;
    }
    if ( *(_BYTE *)(((unsigned __int64)player_info >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)player_info & 7) + 3) >= *(_BYTE *)(((unsigned __int64)player_info >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( player_info->building_points_
      || *(_DWORD *)(v3 + 48)
      || *(_DWORD *)(v3 + 48) + player_info->building_points_ <= player_info->building_points_ )
    {
      result = 0LL;
    }
    else
    {
LABEL_16:
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/scene/scene_multistage_play_impl/mechanicus_multistage_play.cpp",
        "checkAddBuildingPoints",
        523);
      v9 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
             &v18,
             (const char (*)[18])"[MECHANICUS] uid:");
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 32));
      v11 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
              v10,
              (const char (*)[18])" building points:");
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &player_info->building_points_);
      v13 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v12, (const char (*)[6])" add:");
      v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v14, (const char (*)[10])" overflow");
      common::milog::MiLogStream::~MiLogStream(&v18);
      result = 0xFFFFFFFFLL;
    }
  }
  if ( v19 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 530: range 000000001601E082-000000001601E1DD
__int64 __fastcall MechanicusMultistagePlay::addBuildingPoints(
        MechanicusMultistagePlay *const this,
        uint32_t uid,
        uint32_t add_value)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  __int64 result; // rax
  MechanicusMultistagePlay::PlayerInfo *player_info; // [rsp+18h] [rbp-68h]
  char v9[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 7 uid:529";
  *(_QWORD *)(v3 + 16) = MechanicusMultistagePlay::addBuildingPoints;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = uid;
  if ( (unsigned int)MechanicusMultistagePlay::checkAddBuildingPoints(this, *(_DWORD *)(v3 + 32), add_value) )
  {
    result = 0xFFFFFFFFLL;
  }
  else
  {
    player_info = std::unordered_map<unsigned int,MechanicusMultistagePlay::PlayerInfo>::operator[](
                    &this->uid_to_player_info_map_,
                    (const std::unordered_map<unsigned int,MechanicusMultistagePlay::PlayerInfo>::key_type *)(v3 + 32));
    if ( *(_BYTE *)(((unsigned __int64)player_info >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)player_info & 7) + 3) >= *(_BYTE *)(((unsigned __int64)player_info >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    player_info->building_points_ += add_value;
    MechanicusMultistagePlay::notifyBuildingPoints(this);
    result = 0LL;
  }
  if ( v9 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 544: range 000000001601E1DE-000000001601ED4D
void __cdecl MechanicusMultistagePlay::randomStageCards(
        MechanicusMultistagePlay *const this,
        std::set<unsigned int> *card_set)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  uint32_t DungeonDifficultLevel; // edx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rdx
  common::milog::MiLogStream *v19; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rax
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr M_node; // r14
  std::set<unsigned int>::iterator v27; // rax
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr v28; // r14
  std::set<unsigned int>::iterator v29; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rax
  uint32_t v31; // eax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rdx
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rdx
  bool is_teach_level; // [rsp+1Bh] [rbp-1C5h]
  unsigned int max_challenge_card_num; // [rsp+20h] [rbp-1C0h]
  unsigned int max_curse_card_num; // [rsp+24h] [rbp-1BCh]
  unsigned int max_low_cost_card_num; // [rsp+28h] [rbp-1B8h]
  uint32_t low_cost_card_cost; // [rsp+2Ch] [rbp-1B4h]
  uint32_t total_num; // [rsp+30h] [rbp-1B0h]
  uint32_t card_num; // [rsp+34h] [rbp-1ACh]
  const TreatreMechanicusExcelConfigMgr *config_mgr; // [rsp+38h] [rbp-1A8h]
  std::shared_ptr<Config> v47; // [rsp+40h] [rbp-1A0h] BYREF
  std::shared_ptr<Config> v48; // [rsp+50h] [rbp-190h] BYREF
  std::shared_ptr<Config> v49; // [rsp+60h] [rbp-180h] BYREF
  std::shared_ptr<Config> v50; // [rsp+70h] [rbp-170h] BYREF
  std::shared_ptr<Config> v51; // [rsp+80h] [rbp-160h] BYREF
  common::milog::MiLogStream v52; // [rsp+90h] [rbp-150h] BYREF
  char v53[304]; // [rsp+B0h] [rbp-130h] BYREF

  v2 = (unsigned __int64)v53;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 32 4 22 challenge_card_num:554 48 4 18 curse_card_num:567 64 4 21 low_cost_card_num:576 80 4 1"
                        "7 buff_card_num:587 96 48 12 gear_set:546 176 48 15 exclude_set:579";
  *(_QWORD *)(v2 + 16) = MechanicusMultistagePlay::randomStageCards;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -234556924;
  v4[536862724] = -219021312;
  v4[536862725] = 62194;
  v4[536862727] = -202116109;
  config_mgr = MechanicusMultistagePlay::getConfigMgr(this);
  std::set<unsigned int>::set((std::set<unsigned int> *const)(v2 + 96));
  MechanicusMultistagePlay::getCurrentGearSet(this, (std::set<unsigned int> *)(v2 + 96));
  common::milog::MiLogStream::create(
    &v52,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/scene_multistage_play_impl/mechanicus_multistage_play.cpp",
    "randomStageCards",
    548);
  v5 = common::milog::MiLogStream::operator<<<MechanicusMultistagePlay,(MechanicusMultistagePlay*)0>(&v52, this);
  v6 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v5, (const char (*)[20])" current gear set: ");
  common::milog::MiLogStream::operator<<<unsigned int>(v6, (const std::set<unsigned int> *)(v2 + 96));
  common::milog::MiLogStream::~MiLogStream(&v52);
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  DungeonDifficultLevel = TreatreMechanicusExcelConfigMgr::findDungeonDifficultLevel(config_mgr, this->dungeon_id_);
  is_teach_level = TreatreMechanicusExcelConfigMgr::isTeachDifficultLevel(config_mgr, DungeonDifficultLevel);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v47);
  v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v47);
  max_challenge_card_num = ConstValueExcelConfigMgr::getMechanicusRandChallengeCardNum(&v8->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v47);
  *(_DWORD *)(v2 + 32) = common::tools::RandomUtils::rand<unsigned int>(0, max_challenge_card_num);
  if ( is_teach_level )
    *(_DWORD *)(v2 + 32) = 0;
  common::milog::MiLogStream::create(
    &v52,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/scene_multistage_play_impl/mechanicus_multistage_play.cpp",
    "randomStageCards",
    559);
  v9 = common::milog::MiLogStream::operator<<<MechanicusMultistagePlay,(MechanicusMultistagePlay*)0>(&v52, this);
  v10 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
          v9,
          (const char (*)[29])" challenge card random num: ");
  v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 32));
  v12 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v11, (const char (*)[14])" teach level:");
  common::milog::MiLogStream::operator<<(v12, is_teach_level);
  common::milog::MiLogStream::~MiLogStream(&v52);
  if ( TreatreMechanicusExcelConfigMgr::randomPickCardsByType(
         config_mgr,
         *(_DWORD *)(v2 + 32),
         MECHANICUS_CARD_CHALLENGE,
         (const std::set<unsigned int> *)(v2 + 96),
         &this->choosed_cards_set_,
         card_set) )
  {
    common::milog::MiLogStream::create(
      &v52,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_multistage_play_impl/mechanicus_multistage_play.cpp",
      "randomStageCards",
      562);
    v13 = common::milog::MiLogStream::operator<<<MechanicusMultistagePlay,(MechanicusMultistagePlay*)0>(&v52, this);
    common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
      v13,
      (const char (*)[32])" random challenge cards failed.");
    common::milog::MiLogStream::~MiLogStream(&v52);
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v48);
  v14 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v48);
  max_curse_card_num = ConstValueExcelConfigMgr::getMechanicusRandCurseCardNum(&v14->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v48);
  *(_DWORD *)(v2 + 48) = common::tools::RandomUtils::rand<unsigned int>(0, max_curse_card_num);
  common::milog::MiLogStream::create(
    &v52,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/scene_multistage_play_impl/mechanicus_multistage_play.cpp",
    "randomStageCards",
    568);
  v15 = common::milog::MiLogStream::operator<<<MechanicusMultistagePlay,(MechanicusMultistagePlay*)0>(&v52, this);
  v16 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
          v15,
          (const char (*)[25])" curse card random num: ");
  v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v2 + 48));
  v18 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v17, (const char (*)[11])" prev set:");
  common::milog::MiLogStream::operator<<<unsigned int>(v18, card_set);
  common::milog::MiLogStream::~MiLogStream(&v52);
  if ( TreatreMechanicusExcelConfigMgr::randomPickCardsByType(
         config_mgr,
         *(_DWORD *)(v2 + 48),
         MECHANICUS_CARD_CURSE,
         (const std::set<unsigned int> *)(v2 + 96),
         &this->choosed_cards_set_,
         card_set) )
  {
    common::milog::MiLogStream::create(
      &v52,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_multistage_play_impl/mechanicus_multistage_play.cpp",
      "randomStageCards",
      571);
    v19 = common::milog::MiLogStream::operator<<<MechanicusMultistagePlay,(MechanicusMultistagePlay*)0>(&v52, this);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      v19,
      (const char (*)[28])" random curse cards failed.");
    common::milog::MiLogStream::~MiLogStream(&v52);
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v49);
  v20 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v49);
  max_low_cost_card_num = ConstValueExcelConfigMgr::getMechanicusRandLowCostCardNum(&v20->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v49);
  *(_DWORD *)(v2 + 64) = common::tools::RandomUtils::rand<unsigned int>(0, max_low_cost_card_num);
  common::milog::MiLogStream::create(
    &v52,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/scene_multistage_play_impl/mechanicus_multistage_play.cpp",
    "randomStageCards",
    577);
  v21 = common::milog::MiLogStream::operator<<<MechanicusMultistagePlay,(MechanicusMultistagePlay*)0>(&v52, this);
  v22 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
          v21,
          (const char (*)[28])" low cost card random num: ");
  v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, (const unsigned int *)(v2 + 64));
  v24 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v23, (const char (*)[11])" prev set:");
  common::milog::MiLogStream::operator<<<unsigned int>(v24, card_set);
  common::milog::MiLogStream::~MiLogStream(&v52);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v50);
  v25 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v50);
  low_cost_card_cost = ConstValueExcelConfigMgr::getMechanicusLowCostCardCost(&v25->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v50);
  std::set<unsigned int>::set((std::set<unsigned int> *const)(v2 + 176), &this->choosed_cards_set_);
  M_node = std::set<unsigned int>::end(card_set)._M_node;
  v27._M_node = std::set<unsigned int>::begin(card_set)._M_node;
  std::set<unsigned int>::insert<std::_Rb_tree_const_iterator<unsigned int>>(
    (std::set<unsigned int> *const)(v2 + 176),
    v27,
    (std::_Rb_tree_const_iterator<unsigned int>)M_node);
  TreatreMechanicusExcelConfigMgr::randomPickCardsBelowCost(
    config_mgr,
    *(_DWORD *)(v2 + 64),
    low_cost_card_cost,
    (const std::set<unsigned int> *)(v2 + 96),
    (const std::set<unsigned int> *)(v2 + 176),
    card_set);
  v28 = std::set<unsigned int>::end(card_set)._M_node;
  v29._M_node = std::set<unsigned int>::begin(card_set)._M_node;
  std::set<unsigned int>::insert<std::_Rb_tree_const_iterator<unsigned int>>(
    (std::set<unsigned int> *const)(v2 + 176),
    v29,
    (std::_Rb_tree_const_iterator<unsigned int>)v28);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v51);
  v30 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v51);
  total_num = ConstValueExcelConfigMgr::getMechanicusRandCardTotalNum(&v30->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v51);
  card_num = std::set<unsigned int>::size(card_set);
  if ( total_num <= card_num )
    v31 = 0;
  else
    v31 = total_num - card_num;
  *(_DWORD *)(v2 + 80) = v31;
  common::milog::MiLogStream::create(
    &v52,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/scene_multistage_play_impl/mechanicus_multistage_play.cpp",
    "randomStageCards",
    588);
  v32 = common::milog::MiLogStream::operator<<<MechanicusMultistagePlay,(MechanicusMultistagePlay*)0>(&v52, this);
  v33 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
          v32,
          (const char (*)[24])" buff card remain num: ");
  v34 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v33, (const unsigned int *)(v2 + 80));
  v35 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v34, (const char (*)[6])" set:");
  common::milog::MiLogStream::operator<<<unsigned int>(v35, card_set);
  common::milog::MiLogStream::~MiLogStream(&v52);
  if ( TreatreMechanicusExcelConfigMgr::randomPickCardsByType(
         config_mgr,
         *(_DWORD *)(v2 + 80),
         MECHANICUS_CARD_BUFF,
         (const std::set<unsigned int> *)(v2 + 96),
         (const std::set<unsigned int> *)(v2 + 176),
         card_set) )
  {
    common::milog::MiLogStream::create(
      &v52,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_multistage_play_impl/mechanicus_multistage_play.cpp",
      "randomStageCards",
      591);
    v36 = common::milog::MiLogStream::operator<<<MechanicusMultistagePlay,(MechanicusMultistagePlay*)0>(&v52, this);
    common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
      v36,
      (const char (*)[27])" random buff cards failed.");
    common::milog::MiLogStream::~MiLogStream(&v52);
  }
  common::milog::MiLogStream::create(
    &v52,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/scene_multistage_play_impl/mechanicus_multistage_play.cpp",
    "randomStageCards",
    594);
  v37 = common::milog::MiLogStream::operator<<<MechanicusMultistagePlay,(MechanicusMultistagePlay*)0>(&v52, this);
  v38 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
          v37,
          (const char (*)[26])" stage random card pool: ");
  common::milog::MiLogStream::operator<<<unsigned int>(v38, card_set);
  common::milog::MiLogStream::~MiLogStream(&v52);
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 176));
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 96));
  if ( v53 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF801C) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 598: range 000000001601ED4E-000000001601EEE4
__int64 __fastcall MechanicusMultistagePlay::startBuildStage(MechanicusMultistagePlay *const this, uint32_t duration)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  __int64 result; // rax
  common::milog::MiLogStream v11; // [rsp+10h] [rbp-80h] BYREF
  char v12[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 duration:597";
  *(_QWORD *)(v2 + 16) = MechanicusMultistagePlay::startBuildStage;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = duration;
  common::milog::MiLogStream::create(
    &v11,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/scene_multistage_play_impl/mechanicus_multistage_play.cpp",
    "startBuildStage",
    599);
  v5 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
         &v11,
         (const char (*)[46])"[MEHCANICUS] Building stage started. @group: ");
  v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->group_id_);
  v7 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v6, (const char (*)[14])" play_index: ");
  v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->play_index_);
  v9 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v8, (const char (*)[12])" duration: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 32));
  common::milog::MiLogStream::~MiLogStream(&v11);
  result = 0LL;
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 604: range 000000001601EEE6-000000001601F07C
__int64 __fastcall MechanicusMultistagePlay::startKillStage(MechanicusMultistagePlay *const this, uint32_t duration)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  __int64 result; // rax
  common::milog::MiLogStream v11; // [rsp+10h] [rbp-80h] BYREF
  char v12[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 duration:603";
  *(_QWORD *)(v2 + 16) = MechanicusMultistagePlay::startKillStage;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = duration;
  common::milog::MiLogStream::create(
    &v11,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/scene_multistage_play_impl/mechanicus_multistage_play.cpp",
    "startKillStage",
    605);
  v5 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
         &v11,
         (const char (*)[42])"[MEHCANICUS] Kill stage started. @group: ");
  v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->group_id_);
  v7 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v6, (const char (*)[14])" play_index: ");
  v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->play_index_);
  v9 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v8, (const char (*)[12])" duration: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 32));
  common::milog::MiLogStream::~MiLogStream(&v11);
  result = 0LL;
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 610: range 000000001601F112-000000001601F5FB
int32_t __cdecl MechanicusMultistagePlay::startFlipCardStage(MechanicusMultistagePlay *const this, uint32_t *duration)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  Scene *scene; // r14
  uint32_t *p_pick_card_id; // rax
  bool v7; // dl
  __int64 v8; // rsi
  __int64 v9; // rdx
  bool v10; // dl
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rdx
  int32_t result; // eax
  std::unordered_map<unsigned int,MechanicusMultistagePlay::PlayerInfo>::iterator __for_begin; // [rsp+10h] [rbp-C0h] BYREF
  std::unordered_map<unsigned int,MechanicusMultistagePlay::PlayerInfo>::iterator __for_end; // [rsp+18h] [rbp-B8h] BYREF
  std::unordered_map<unsigned int,MechanicusMultistagePlay::PlayerInfo> *__for_range; // [rsp+20h] [rbp-B0h]
  std::pair<unsigned int const,MechanicusMultistagePlay::PlayerInfo> *__in; // [rsp+28h] [rbp-A8h]
  std::tuple_element<0,std::pair<unsigned int const,MechanicusMultistagePlay::PlayerInfo> >::type *uid; // [rsp+30h] [rbp-A0h]
  std::tuple_element<1,std::pair<unsigned int const,MechanicusMultistagePlay::PlayerInfo> >::type *player_info; // [rsp+38h] [rbp-98h]
  std::function<ForeachPolicy(Player&)> p_func; // [rsp+40h] [rbp-90h] BYREF
  char v22[112]; // [rsp+60h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 1 17 is_press_mode:619";
  *(_QWORD *)(v2 + 16) = MechanicusMultistagePlay::startFlipCardStage;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116351;
  std::set<unsigned int>::clear(&this->stage_cards_set_);
  MechanicusMultistagePlay::randomStageCards(this, &this->stage_cards_set_);
  if ( *(_BYTE *)(((unsigned __int64)&this->card_flip_wait_start_time_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->card_flip_wait_start_time_ms_, &this->stage_cards_set_);
  this->card_flip_wait_start_time_ms_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->card_flip_wait_seconds_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->card_flip_wait_seconds_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( !this->card_flip_wait_seconds_ )
  {
    *(_BYTE *)(v2 + 32) = 0;
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    scene = this->scene_;
    std::function<ForeachPolicy ()(Player &)>::function<MechanicusMultistagePlay::startFlipCardStage(unsigned int &)::{lambda(Player &)#1},void,void>(
      &p_func,
      (MechanicusMultistagePlay::startFlipCardStage::<lambda(Player&)>)(v2 + 32));
    Scene::foreachPlayer(scene, &p_func);
    std::function<ForeachPolicy ()(Player &)>::~function(&p_func);
    if ( *(_BYTE *)(v2 + 32) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->card_flip_wait_seconds_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->card_flip_wait_seconds_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->card_flip_wait_seconds_, &p_func, (_BYTE)this - 48);
      }
      this->card_flip_wait_seconds_ = 1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->card_flip_wait_seconds_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->card_flip_wait_seconds_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->card_flip_wait_seconds_, &p_func, (_BYTE)this - 48);
      }
      this->card_flip_wait_seconds_ = 5;
    }
  }
  __for_range = &this->uid_to_player_info_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,MechanicusMultistagePlay::PlayerInfo>::begin(&this->uid_to_player_info_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,MechanicusMultistagePlay::PlayerInfo>::end(&this->uid_to_player_info_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,MechanicusMultistagePlay::PlayerInfo>,false>(
            &__for_begin,
            &__for_end) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,MechanicusMultistagePlay::PlayerInfo>,false,false>::operator*(&__for_begin);
    uid = std::get<0ul,unsigned int const,MechanicusMultistagePlay::PlayerInfo>(__in);
    player_info = std::get<1ul,unsigned int const,MechanicusMultistagePlay::PlayerInfo>(__in);
    p_pick_card_id = &player_info->pick_card_id_;
    v7 = *(_BYTE *)(((unsigned __int64)p_pick_card_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_pick_card_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_pick_card_id >> 3)
                                                                       + 0x7FFF8000);
    if ( v7 )
      __asan_report_store4(p_pick_card_id, (((_BYTE)player_info + 12) & 7u) + 3, v7);
    player_info->pick_card_id_ = 0;
    v8 = ((_BYTE)player_info + 16) & 7;
    v9 = (*(_BYTE *)(((unsigned __int64)&player_info->is_card_confirmed_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v8 >= *(_BYTE *)(((unsigned __int64)&player_info->is_card_confirmed_ >> 3) + 0x7FFF8000));
    if ( (_BYTE)v9 )
      __asan_report_store1(&player_info->is_card_confirmed_, v8, v9);
    player_info->is_card_confirmed_ = 0;
    v10 = *(_BYTE *)(((unsigned __int64)&player_info->curse_id_ >> 3) + 0x7FFF8000) != 0
       && (char)((((_BYTE)player_info + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&player_info->curse_id_ >> 3)
                                                                  + 0x7FFF8000);
    if ( v10 )
      __asan_report_store4(&player_info->curse_id_, (((_BYTE)player_info + 20) & 7u) + 3, v10);
    player_info->curse_id_ = 0;
    std::__detail::_Node_iterator<std::pair<unsigned int const,MechanicusMultistagePlay::PlayerInfo>,false,false>::operator++(&__for_begin);
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)&p_func,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/scene_multistage_play_impl/mechanicus_multistage_play.cpp",
    "startFlipCardStage",
    644);
  v11 = common::milog::MiLogStream::operator<<<MechanicusMultistagePlay,(MechanicusMultistagePlay*)0>(
          (common::milog::MiLogStream *const)&p_func,
          this);
  v12 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
          v11,
          (const char (*)[25])" Pick started. duration:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, duration);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_func);
  result = 0;
  if ( v22 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 620: range 000000001601F07E-000000001601F110
ForeachPolicy __cdecl MechanicusMultistagePlay::startFlipCardStage(unsigned int &)::{lambda(Player &)#1}::operator()(
        const MechanicusMultistagePlay::startFlipCardStage::<lambda(Player&)> *const __closure,
        Player *player)
{
  PlayerGmComp *GmComp; // rax
  __int64 v3; // rsi
  bool *is_press_mode; // rdx
  char v5; // cl

  GmComp = Player::getGmComp(player);
  v3 = 8LL;
  if ( PlayerGmComp::getGmSetValue<bool>(GmComp, 8u) )
  {
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    is_press_mode = __closure->__is_press_mode;
    v5 = *(_BYTE *)(((unsigned __int64)__closure->__is_press_mode >> 3) + 0x7FFF8000);
    if ( v5 != 0 && ((__int64)__closure->__is_press_mode & 7) >= v5 )
    {
      LOBYTE(v3) = v5 != 0;
      __asan_report_store1(__closure->__is_press_mode, v3, is_press_mode);
    }
    *is_press_mode = 1;
  }
  return 0;
};

// Line 649: range 000000001601F5FC-000000001601F7EE
int32_t __cdecl MechanicusMultistagePlay::checkCardFlip(const MechanicusMultistagePlay *const this)
{
  common::milog::MiLogStream *v1; // rax
  common::milog::MiLogStream *v2; // rax
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream v8; // [rsp+10h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->stage_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->stage_type_ == MULTISTAGE_STAGE_MECHANICUS_FLIP_CARD )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->card_flip_wait_start_time_ms_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( this->card_flip_wait_start_time_ms_ )
    {
      common::milog::MiLogStream::create(
        &v8,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/scene_multistage_play_impl/mechanicus_multistage_play.cpp",
        "checkCardFlip",
        660);
      v5 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
             &v8,
             (const char (*)[47])"[MEHCANICUS] already waitting settle. @group: ");
      v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->group_id_);
      v7 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v6, (const char (*)[14])" play_index: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->play_index_);
      common::milog::MiLogStream::~MiLogStream(&v8);
      return 7156;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_multistage_play_impl/mechanicus_multistage_play.cpp",
      "checkCardFlip",
      653);
    v1 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
           &v8,
           (const char (*)[41])"[MEHCANICUS] not in card stage. @group: ");
    v2 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v1, &this->group_id_);
    v3 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v2, (const char (*)[14])" play_index: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &this->play_index_);
    common::milog::MiLogStream::~MiLogStream(&v8);
    return 7155;
  }
};

// Line 668: range 000000001601F7F0-000000001601FC0F
__int64 __fastcall MechanicusMultistagePlay::onPickCardReq(
        MechanicusMultistagePlay *const this,
        Player *player,
        uint32_t card_id)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__detail::_Node_iterator<std::pair<unsigned int const,MechanicusMultistagePlay::PlayerInfo>,false,false>::pointer v6; // rax
  bool *p_is_card_confirmed; // rax
  __int64 v8; // rsi
  uint32_t v9; // ecx
  char v10; // dl
  bool v11; // dl
  __int64 result; // rax
  unsigned int retcode; // [rsp+2Ch] [rbp-F4h]
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,MechanicusMultistagePlay::PlayerInfo>,false> __y; // [rsp+30h] [rbp-F0h] BYREF
  MechanicusMultistagePlay::PlayerInfo *player_info; // [rsp+38h] [rbp-E8h]
  char v17[224]; // [rsp+40h] [rbp-E0h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 4 7 uid:670 64 4 11 card_id:667 80 8 15 player_iter:674 112 40 10 notify:706";
  *(_QWORD *)(v3 + 16) = MechanicusMultistagePlay::onPickCardReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = 61956;
  v5[536862722] = -234881024;
  v5[536862723] = 62194;
  v5[536862724] = -218103808;
  v5[536862725] = -202116109;
  *(_DWORD *)(v3 + 64) = card_id;
  *(_DWORD *)(v3 + 48) = Player::getUid(player);
  *(std::unordered_map<unsigned int,MechanicusMultistagePlay::PlayerInfo>::iterator *)(v3 + 80) = std::unordered_map<unsigned int,MechanicusMultistagePlay::PlayerInfo>::find(
                                                                                                    &this->uid_to_player_info_map_,
                                                                                                    (const std::unordered_map<unsigned int,MechanicusMultistagePlay::PlayerInfo>::key_type *)(v3 + 48));
  __y._M_cur = std::unordered_map<unsigned int,MechanicusMultistagePlay::PlayerInfo>::end(&this->uid_to_player_info_map_)._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned int const,MechanicusMultistagePlay::PlayerInfo>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,MechanicusMultistagePlay::PlayerInfo>,false> *)(v3 + 80),
         &__y) )
  {
    retcode = 7153;
  }
  else
  {
    retcode = MechanicusMultistagePlay::checkCardFlip(this);
    if ( !retcode )
    {
      if ( std::set<unsigned int>::count(&this->stage_cards_set_, (const std::set<unsigned int>::key_type *)(v3 + 64)) )
      {
        v6 = std::__detail::_Node_iterator<std::pair<unsigned int const,MechanicusMultistagePlay::PlayerInfo>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,MechanicusMultistagePlay::PlayerInfo>,false,false> *const)(v3 + 80));
        player_info = &v6->second;
        p_is_card_confirmed = &v6->second.is_card_confirmed_;
        v8 = (unsigned __int8)p_is_card_confirmed & 7;
        if ( *(_BYTE *)(((unsigned __int64)p_is_card_confirmed >> 3) + 0x7FFF8000) != 0
          && (char)v8 >= *(_BYTE *)(((unsigned __int64)p_is_card_confirmed >> 3) + 0x7FFF8000) )
        {
          __asan_report_load1(p_is_card_confirmed);
        }
        if ( player_info->is_card_confirmed_ )
        {
          retcode = 7158;
        }
        else
        {
          v9 = *(_DWORD *)(v3 + 64);
          v10 = *(_BYTE *)(((unsigned __int64)&player_info->pick_card_id_ >> 3) + 0x7FFF8000);
          LOBYTE(v8) = v10 != 0;
          v11 = v10 != 0 && (char)((((_BYTE)player_info + 12) & 7) + 3) >= v10;
          if ( v11 )
            __asan_report_store4(&player_info->pick_card_id_, v8, v11);
          player_info->pick_card_id_ = v9;
        }
      }
      else
      {
        retcode = 7154;
      }
    }
  }
  if ( !retcode )
  {
    proto::InBattleMechanicusPickCardNotify::InBattleMechanicusPickCardNotify((proto::InBattleMechanicusPickCardNotify *const)(v3 + 112));
    proto::InBattleMechanicusPickCardNotify::set_card_id(
      (proto::InBattleMechanicusPickCardNotify *const)(v3 + 112),
      *(_DWORD *)(v3 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto::InBattleMechanicusPickCardNotify::set_group_id(
      (proto::InBattleMechanicusPickCardNotify *const)(v3 + 112),
      this->group_id_);
    if ( *(_BYTE *)(((unsigned __int64)&this->play_index_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->play_index_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::InBattleMechanicusPickCardNotify::set_play_index(
      (proto::InBattleMechanicusPickCardNotify *const)(v3 + 112),
      this->play_index_);
    proto::InBattleMechanicusPickCardNotify::set_player_uid(
      (proto::InBattleMechanicusPickCardNotify *const)(v3 + 112),
      *(_DWORD *)(v3 + 48));
    SceneMultistagePlay::notifyPlayMsg(this, (const google::protobuf::Message *)(v3 + 112), *(_DWORD *)(v3 + 48));
    proto::InBattleMechanicusPickCardNotify::~InBattleMechanicusPickCardNotify((proto::InBattleMechanicusPickCardNotify *const)(v3 + 112));
  }
  result = retcode;
  if ( v17 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 718: range 000000001601FC10-000000001601FCBD
int32_t __cdecl MechanicusMultistagePlay::forceTakeCardEffectByGm(
        MechanicusMultistagePlay *const this,
        Player *player,
        uint32_t card_id,
        uint32_t curse_id)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  const data::MechanicusCardExcelConfig *card_config_ptr; // [rsp+28h] [rbp-28h]
  std::shared_ptr<Config> v9[2]; // [rsp+30h] [rbp-20h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v9);
  v4 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v9);
  card_config_ptr = data::TreatreMechanicusExcelConfigMgrBase::findMechanicusCardExcelConfig(
                      &v4->design_config.txt_config_mgr.mechanicus_config_mgr,
                      card_id);
  std::shared_ptr<Config>::~shared_ptr(v9);
  if ( card_config_ptr )
    return MechanicusMultistagePlay::cardTakeEffect(this, player, card_config_ptr, curse_id);
  else
    return 5;
};

// Line 730: range 000000001601FCBE-000000001601FCF1
int32_t __cdecl MechanicusMultistagePlay::addPointsByGm(
        MechanicusMultistagePlay *const this,
        Player *player,
        uint32_t add_points)
{
  uint32_t Uid; // ecx

  Uid = Player::getUid(player);
  return MechanicusMultistagePlay::addBuildingPoints(this, Uid, add_points);
};

// Line 735: range 000000001601FCF2-000000001601FE85
__int64 __fastcall MechanicusMultistagePlay::subPointsByGm(
        MechanicusMultistagePlay *const this,
        Player *player,
        uint32_t sub_points)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  uint32_t Uid; // eax
  const unsigned int *v7; // rdx
  uint32_t v8; // r13d
  uint32_t v9; // eax
  __int64 result; // rax
  char v12[128]; // [rsp+20h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 10 points:736 64 4 14 sub_points:734";
  *(_QWORD *)(v3 + 16) = MechanicusMultistagePlay::subPointsByGm;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116348;
  *(_DWORD *)(v3 + 64) = sub_points;
  Uid = Player::getUid(player);
  *(_DWORD *)(v3 + 48) = MechanicusMultistagePlay::getBuildingPoints(this, Uid);
  v7 = std::min<unsigned int>((const unsigned int *)(v3 + 48), (const unsigned int *)(v3 + 64));
  if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  *(_DWORD *)(v3 + 64) = *v7;
  v8 = *(_DWORD *)(v3 + 64);
  v9 = Player::getUid(player);
  result = MechanicusMultistagePlay::subBuildingPoints(this, v9, v8);
  if ( v12 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 742: range 000000001601FE86-00000000160207B8
__int64 __fastcall MechanicusMultistagePlay::onConfirmCardReq(
        MechanicusMultistagePlay *const this,
        Player *player,
        uint32_t card_id)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  __int64 v7; // rsi
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  PlayerGmComp *GmComp; // rax
  __int64 v10; // rsi
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  uint32_t v14; // ecx
  char v15; // dl
  bool v16; // dl
  __int64 v17; // rsi
  __int64 v18; // rdx
  unsigned __int64 v19; // rax
  uint32_t v20; // ecx
  char v21; // dl
  bool v22; // dl
  __int64 v23; // rsi
  __int64 v24; // rdx
  unsigned __int64 v25; // rax
  __int64 result; // rax
  unsigned int retcode; // [rsp+30h] [rbp-130h]
  uint32_t card_owner_uid; // [rsp+34h] [rbp-12Ch]
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,MechanicusMultistagePlay::PlayerInfo>,false> __y; // [rsp+38h] [rbp-128h] BYREF
  MechanicusMultistagePlay::PlayerInfo *player_info; // [rsp+40h] [rbp-120h]
  const data::MechanicusCardExcelConfig *card_config_ptr; // [rsp+48h] [rbp-118h]
  std::shared_ptr<Config> v34; // [rsp+50h] [rbp-110h] BYREF
  common::milog::MiLogStream v35; // [rsp+60h] [rbp-100h] BYREF
  char v36[224]; // [rsp+80h] [rbp-E0h] BYREF

  v3 = (unsigned __int64)v36;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 32 1 10 is_end:841 48 4 7 uid:744 64 4 11 card_id:741 80 8 15 player_iter:748 112 40 10 notify:831";
  *(_QWORD *)(v3 + 16) = MechanicusMultistagePlay::onConfirmCardReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556927;
  v5[536862722] = 61956;
  v5[536862722] = -234881024;
  v5[536862723] = 62194;
  v5[536862724] = -218103808;
  v5[536862725] = -202116109;
  *(_DWORD *)(v3 + 64) = card_id;
  *(_DWORD *)(v3 + 48) = Player::getUid(player);
  *(std::unordered_map<unsigned int,MechanicusMultistagePlay::PlayerInfo>::iterator *)(v3 + 80) = std::unordered_map<unsigned int,MechanicusMultistagePlay::PlayerInfo>::find(
                                                                                                    &this->uid_to_player_info_map_,
                                                                                                    (const std::unordered_map<unsigned int,MechanicusMultistagePlay::PlayerInfo>::key_type *)(v3 + 48));
  __y._M_cur = std::unordered_map<unsigned int,MechanicusMultistagePlay::PlayerInfo>::end(&this->uid_to_player_info_map_)._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned int const,MechanicusMultistagePlay::PlayerInfo>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,MechanicusMultistagePlay::PlayerInfo>,false> *)(v3 + 80),
         &__y) )
  {
    retcode = 7153;
    goto LABEL_49;
  }
  player_info = &std::__detail::_Node_iterator<std::pair<unsigned int const,MechanicusMultistagePlay::PlayerInfo>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,MechanicusMultistagePlay::PlayerInfo>,false,false> *const)(v3 + 80))->second;
  retcode = MechanicusMultistagePlay::checkCardFlip(this);
  if ( !retcode )
  {
    if ( *(_DWORD *)(v3 + 64)
      && !std::set<unsigned int>::count(&this->stage_cards_set_, (const std::set<unsigned int>::key_type *)(v3 + 64)) )
    {
      retcode = 7154;
      goto LABEL_49;
    }
    if ( *(_BYTE *)(((unsigned __int64)&player_info->is_card_confirmed_ >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)player_info + 16) & 7) >= *(_BYTE *)(((unsigned __int64)&player_info->is_card_confirmed_ >> 3)
                                                               + 0x7FFF8000) )
    {
      __asan_report_load1(&player_info->is_card_confirmed_);
    }
    if ( player_info->is_card_confirmed_ )
    {
      if ( *(_BYTE *)(((unsigned __int64)&player_info->pick_card_id_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)player_info + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&player_info->pick_card_id_ >> 3)
                                                                   + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( player_info->pick_card_id_ )
        retcode = 7158;
      else
        retcode = 7161;
    }
    else
    {
      v7 = *(unsigned int *)(v3 + 64);
      card_owner_uid = MechanicusMultistagePlay::getCardConfirmedByPlayerUid(this, v7);
      if ( *(_DWORD *)(v3 + 64) && card_owner_uid && card_owner_uid != *(_DWORD *)(v3 + 48) )
      {
        retcode = 7159;
        goto LABEL_49;
      }
      if ( *(_DWORD *)(v3 + 64) )
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v34);
        v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v34);
        card_config_ptr = data::TreatreMechanicusExcelConfigMgrBase::findMechanicusCardExcelConfig(
                            &v8->design_config.txt_config_mgr.mechanicus_config_mgr,
                            *(_DWORD *)(v3 + 64));
        std::shared_ptr<Config>::~shared_ptr(&v34);
        if ( !card_config_ptr )
        {
          retcode = 5;
          goto LABEL_49;
        }
        GmComp = Player::getGmComp(player);
        v10 = 7LL;
        if ( !PlayerGmComp::getGmSetValue<bool>(GmComp, 7u) )
        {
          if ( *(_BYTE *)(((unsigned __int64)&card_config_ptr->cost_points >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)card_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&card_config_ptr->cost_points >> 3)
                                                                           + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          if ( (unsigned int)MechanicusMultistagePlay::checkSubBuildingPoints(
                               this,
                               *(_DWORD *)(v3 + 48),
                               card_config_ptr->cost_points) )
          {
            retcode = 7160;
            goto LABEL_49;
          }
          if ( *(_BYTE *)(((unsigned __int64)&card_config_ptr->cost_points >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)card_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&card_config_ptr->cost_points >> 3)
                                                                           + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          v10 = *(unsigned int *)(v3 + 48);
          if ( (unsigned int)MechanicusMultistagePlay::subBuildingPoints(this, v10, card_config_ptr->cost_points) )
          {
            common::milog::MiLogStream::create(
              &v35,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/scene/scene_multistage_play_impl/mechanicus_multistage_play.cpp",
              "onConfirmCardReq",
              808);
            v11 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                    &v35,
                    (const char (*)[50])"[MECHANICUS] sub building points failed for card:");
            v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v11,
                    (const unsigned int *)(v3 + 64));
            v13 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v12, (const char (*)[10])". player:");
            v10 = (__int64)player;
            operator<<(v13, player);
            common::milog::MiLogStream::~MiLogStream(&v35);
          }
        }
        v14 = *(_DWORD *)(v3 + 64);
        v15 = *(_BYTE *)(((unsigned __int64)&player_info->pick_card_id_ >> 3) + 0x7FFF8000);
        LOBYTE(v10) = v15 != 0;
        v16 = v15 != 0 && (char)((((_BYTE)player_info + 12) & 7) + 3) >= v15;
        if ( v16 )
          __asan_report_store4(&player_info->pick_card_id_, v10, v16);
        player_info->pick_card_id_ = v14;
        v17 = ((_BYTE)player_info + 16) & 7;
        v18 = (*(_BYTE *)(((unsigned __int64)&player_info->is_card_confirmed_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v17 >= *(_BYTE *)(((unsigned __int64)&player_info->is_card_confirmed_ >> 3) + 0x7FFF8000));
        if ( (_BYTE)v18 )
          __asan_report_store1(&player_info->is_card_confirmed_, v17, v18);
        player_info->is_card_confirmed_ = 1;
        MechanicusMultistagePlay::cardTakeEffect(this, player, card_config_ptr, 0);
        std::set<unsigned int>::insert(&this->choosed_cards_set_, (const std::set<unsigned int>::value_type *)(v3 + 64));
        v19 = (unsigned __int64)std::unordered_map<unsigned int,unsigned int>::operator[](
                                  &this->pick_card_num_map_,
                                  (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v3 + 64));
        if ( *(_BYTE *)((v19 >> 3) + 0x7FFF8000) != 0 && (char)((v19 & 7) + 3) >= *(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
          v19 = __asan_report_load4();
        ++*(_DWORD *)v19;
      }
      else
      {
        v20 = *(_DWORD *)(v3 + 64);
        v21 = *(_BYTE *)(((unsigned __int64)&player_info->pick_card_id_ >> 3) + 0x7FFF8000);
        LOBYTE(v7) = v21 != 0;
        v22 = v21 != 0 && (char)((((_BYTE)player_info + 12) & 7) + 3) >= v21;
        if ( v22 )
          __asan_report_store4(&player_info->pick_card_id_, v7, v22);
        player_info->pick_card_id_ = v20;
        v23 = ((_BYTE)player_info + 16) & 7;
        v24 = (*(_BYTE *)(((unsigned __int64)&player_info->is_card_confirmed_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v23 >= *(_BYTE *)(((unsigned __int64)&player_info->is_card_confirmed_ >> 3) + 0x7FFF8000));
        if ( (_BYTE)v24 )
          __asan_report_store1(&player_info->is_card_confirmed_, v23, v24);
        player_info->is_card_confirmed_ = 1;
      }
    }
  }
LABEL_49:
  if ( !retcode )
  {
    proto::InBattleMechanicusConfirmCardNotify::InBattleMechanicusConfirmCardNotify((proto::InBattleMechanicusConfirmCardNotify *const)(v3 + 112));
    proto::InBattleMechanicusConfirmCardNotify::set_card_id(
      (proto::InBattleMechanicusConfirmCardNotify *const)(v3 + 112),
      *(_DWORD *)(v3 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto::InBattleMechanicusConfirmCardNotify::set_group_id(
      (proto::InBattleMechanicusConfirmCardNotify *const)(v3 + 112),
      this->group_id_);
    if ( *(_BYTE *)(((unsigned __int64)&this->play_index_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->play_index_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::InBattleMechanicusConfirmCardNotify::set_play_index(
      (proto::InBattleMechanicusConfirmCardNotify *const)(v3 + 112),
      this->play_index_);
    proto::InBattleMechanicusConfirmCardNotify::set_player_uid(
      (proto::InBattleMechanicusConfirmCardNotify *const)(v3 + 112),
      *(_DWORD *)(v3 + 48));
    SceneMultistagePlay::notifyPlayMsg(this, (const google::protobuf::Message *)(v3 + 112), *(_DWORD *)(v3 + 48));
    if ( MechanicusMultistagePlay::isCardWaitSettle(this) )
    {
      *(_BYTE *)(v3 + 32) = 0;
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v25 = (unsigned __int64)(this->_vptr_DescribalBase + 13);
      if ( *(_BYTE *)((v25 >> 3) + 0x7FFF8000) )
        v25 = __asan_report_load8();
      (*(void (__fastcall **)(MechanicusMultistagePlay *const, unsigned __int64))v25)(this, v3 + 32);
    }
    proto::InBattleMechanicusConfirmCardNotify::~InBattleMechanicusConfirmCardNotify((proto::InBattleMechanicusConfirmCardNotify *const)(v3 + 112));
  }
  result = retcode;
  if ( v36 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 850: range 00000000160207BA-0000000016021060
bool __cdecl MechanicusMultistagePlay::isCardWaitSettle(const MechanicusMultistagePlay *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  bool *p_is_card_confirmed; // rax
  std::tuple_element<0,const std::pair<unsigned int const,MechanicusMultistagePlay::PlayerInfo> >::type v5; // r14d
  uint32_t *p_pick_card_id; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v7; // rax
  std::tuple_element<0,const std::pair<unsigned int const,MechanicusMultistagePlay::PlayerInfo> >::type *v8; // rdx
  char v9; // cl
  Scene *scene; // rcx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  bool v17; // r14
  bool *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  bool result; // al
  bool is_all_confirmed; // [rsp+1Fh] [rbp-221h]
  std::unordered_map<unsigned int,MechanicusMultistagePlay::PlayerInfo>::const_iterator __for_begin; // [rsp+20h] [rbp-220h] BYREF
  std::unordered_map<unsigned int,MechanicusMultistagePlay::PlayerInfo>::const_iterator __for_end; // [rsp+28h] [rbp-218h] BYREF
  const std::unordered_map<unsigned int,MechanicusMultistagePlay::PlayerInfo> *__for_range; // [rsp+30h] [rbp-210h]
  const std::unordered_map<unsigned int,MechanicusMultistagePlay::PlayerInfo> *__for_range_0; // [rsp+38h] [rbp-208h]
  const std::pair<unsigned int const,MechanicusMultistagePlay::PlayerInfo> *v31; // [rsp+40h] [rbp-200h]
  std::tuple_element<0,const std::pair<unsigned int const,MechanicusMultistagePlay::PlayerInfo> >::type *uid_0; // [rsp+48h] [rbp-1F8h]
  std::tuple_element<1,const std::pair<unsigned int const,MechanicusMultistagePlay::PlayerInfo> >::type *player_info_0; // [rsp+50h] [rbp-1F0h]
  const std::pair<unsigned int const,MechanicusMultistagePlay::PlayerInfo> *v34; // [rsp+58h] [rbp-1E8h]
  std::tuple_element<0,const std::pair<unsigned int const,MechanicusMultistagePlay::PlayerInfo> >::type *uid; // [rsp+60h] [rbp-1E0h]
  std::tuple_element<1,const std::pair<unsigned int const,MechanicusMultistagePlay::PlayerInfo> >::type *player_info; // [rsp+68h] [rbp-1D8h]
  common::milog::MiLogStream v37; // [rsp+70h] [rbp-1D0h] BYREF
  char v38[432]; // [rsp+90h] [rbp-1B0h] BYREF

  v1 = (unsigned __int64)v38;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_3(384LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "5 32 16 14 player_ptr:870 64 48 32 confirmed_card_id_to_uid_map:852 144 48 16 skip_uid_set:853 2"
                        "24 48 16 quit_uid_set:854 304 48 24 unaffordable_uid_set:886";
  *(_QWORD *)(v1 + 16) = MechanicusMultistagePlay::isCardWaitSettle;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862723] = -219021312;
  v3[536862724] = 62194;
  v3[536862726] = -218959118;
  v3[536862728] = -219021312;
  v3[536862729] = 62194;
  v3[536862731] = -202116109;
  is_all_confirmed = 1;
  std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v1 + 64));
  std::set<unsigned int>::set((std::set<unsigned int> *const)(v1 + 144));
  std::set<unsigned int>::set((std::set<unsigned int> *const)(v1 + 224));
  __for_range = &this->uid_to_player_info_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,MechanicusMultistagePlay::PlayerInfo>::begin(&this->uid_to_player_info_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,MechanicusMultistagePlay::PlayerInfo>::end(&this->uid_to_player_info_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,MechanicusMultistagePlay::PlayerInfo>,false>(
            &__for_begin,
            &__for_end) )
  {
    v34 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,MechanicusMultistagePlay::PlayerInfo>,false,false>::operator*(&__for_begin);
    uid = std::get<0ul,unsigned int const,MechanicusMultistagePlay::PlayerInfo>(v34);
    player_info = (std::tuple_element<1,const std::pair<unsigned int const,MechanicusMultistagePlay::PlayerInfo> >::type *)std::get<1ul,unsigned int const,MechanicusMultistagePlay::PlayerInfo>(v34);
    p_is_card_confirmed = &player_info->is_card_confirmed_;
    if ( *(_BYTE *)(((unsigned __int64)p_is_card_confirmed >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)p_is_card_confirmed & 7) >= *(_BYTE *)(((unsigned __int64)p_is_card_confirmed >> 3)
                                                                + 0x7FFF8000) )
    {
      __asan_report_load1(p_is_card_confirmed);
    }
    if ( player_info->is_card_confirmed_ )
    {
      if ( *(_BYTE *)(((unsigned __int64)&player_info->pick_card_id_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)player_info + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&player_info->pick_card_id_ >> 3)
                                                                   + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( player_info->pick_card_id_ )
      {
        if ( *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        v5 = *uid;
        p_pick_card_id = &player_info->pick_card_id_;
        v7 = std::map<unsigned int,unsigned int>::operator[](
               (std::map<unsigned int,unsigned int> *const)(v1 + 64),
               &player_info->pick_card_id_);
        v8 = v7;
        v9 = *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000);
        if ( v9 != 0 && (char)(((unsigned __int8)v7 & 7) + 3) >= v9 )
        {
          LOBYTE(p_pick_card_id) = v9 != 0;
          __asan_report_store4(v7, p_pick_card_id, (_BYTE)v7);
        }
        *v8 = v5;
      }
      else
      {
        std::set<unsigned int>::insert((std::set<unsigned int> *const)(v1 + 144), uid);
      }
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      scene = this->scene_;
      if ( *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      Scene::findPlayer((const Scene *const)(v1 + 32), (__int64)scene, *uid);
      if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v1 + 32)) )
        std::set<unsigned int>::insert((std::set<unsigned int> *const)(v1 + 224), uid);
      else
        is_all_confirmed = 0;
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 32));
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,MechanicusMultistagePlay::PlayerInfo>,false,false>::operator++(&__for_begin);
  }
  if ( is_all_confirmed )
  {
    common::milog::MiLogStream::create(
      &v37,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_multistage_play_impl/mechanicus_multistage_play.cpp",
      "isCardWaitSettle",
      881);
    v11 = common::milog::MiLogStream::operator<<<MechanicusMultistagePlay,(MechanicusMultistagePlay*)0>(&v37, this);
    v12 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
            v11,
            (const char (*)[31])", all player confirmed cards: ");
    v13 = common::milog::MiLogStream::operator<<<unsigned int,unsigned int>(
            v12,
            (const std::map<unsigned int,unsigned int> *)(v1 + 64));
    v14 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v13, (const char (*)[9])" skiped:");
    v15 = common::milog::MiLogStream::operator<<<unsigned int>(v14, (const std::set<unsigned int> *)(v1 + 144));
    v16 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v15, (const char (*)[12])" quit uids:");
    common::milog::MiLogStream::operator<<<unsigned int>(v16, (const std::set<unsigned int> *)(v1 + 224));
    common::milog::MiLogStream::~MiLogStream(&v37);
    v17 = 1;
  }
  else
  {
    std::set<unsigned int>::set((std::set<unsigned int> *const)(v1 + 304));
    __for_range_0 = &this->uid_to_player_info_map_;
    __for_begin._M_cur = std::unordered_map<unsigned int,MechanicusMultistagePlay::PlayerInfo>::begin(&this->uid_to_player_info_map_)._M_cur;
    __for_end._M_cur = std::unordered_map<unsigned int,MechanicusMultistagePlay::PlayerInfo>::end(__for_range_0)._M_cur;
    while ( std::__detail::operator!=<std::pair<unsigned int const,MechanicusMultistagePlay::PlayerInfo>,false>(
              &__for_begin,
              &__for_end) )
    {
      v31 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,MechanicusMultistagePlay::PlayerInfo>,false,false>::operator*(&__for_begin);
      uid_0 = std::get<0ul,unsigned int const,MechanicusMultistagePlay::PlayerInfo>(v31);
      player_info_0 = (std::tuple_element<1,const std::pair<unsigned int const,MechanicusMultistagePlay::PlayerInfo> >::type *)std::get<1ul,unsigned int const,MechanicusMultistagePlay::PlayerInfo>(v31);
      v18 = &player_info_0->is_card_confirmed_;
      if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
        && ((unsigned __int8)v18 & 7) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(v18);
      }
      if ( !player_info_0->is_card_confirmed_ )
      {
        if ( *(_BYTE *)(((unsigned __int64)uid_0 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)uid_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)uid_0 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        if ( !MechanicusMultistagePlay::isPlayerCanAffordCard(
                this,
                *uid_0,
                player_info_0,
                (const std::map<unsigned int,unsigned int> *)(v1 + 64)) )
          std::set<unsigned int>::insert((std::set<unsigned int> *const)(v1 + 304), uid_0);
      }
      std::__detail::_Node_const_iterator<std::pair<unsigned int const,MechanicusMultistagePlay::PlayerInfo>,false,false>::operator++(&__for_begin);
    }
    common::milog::MiLogStream::create(
      &v37,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_multistage_play_impl/mechanicus_multistage_play.cpp",
      "isCardWaitSettle",
      899);
    v19 = common::milog::MiLogStream::operator<<<MechanicusMultistagePlay,(MechanicusMultistagePlay*)0>(&v37, this);
    v20 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
            v19,
            (const char (*)[20])", confirmed cards: ");
    v21 = common::milog::MiLogStream::operator<<<unsigned int,unsigned int>(
            v20,
            (const std::map<unsigned int,unsigned int> *)(v1 + 64));
    v22 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v21, (const char (*)[19])". unfordable uids:");
    v23 = common::milog::MiLogStream::operator<<<unsigned int>(v22, (const std::set<unsigned int> *)(v1 + 304));
    v24 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v23, (const char (*)[12])" quit uids:");
    common::milog::MiLogStream::operator<<<unsigned int>(v24, (const std::set<unsigned int> *)(v1 + 224));
    common::milog::MiLogStream::~MiLogStream(&v37);
    v17 = 0;
    std::set<unsigned int>::~set((std::set<unsigned int> *const)(v1 + 304));
  }
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v1 + 224));
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v1 + 144));
  std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v1 + 64));
  result = v17;
  if ( v38 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF800C) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8018) = 0;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF802C) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 906: range 0000000016021062-0000000016021A54
__int64 __fastcall MechanicusMultistagePlay::getGearBuildingCost(
        const MechanicusMultistagePlay *const this,
        uint32_t gear_id,
        uint32_t level)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  unsigned int v9; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  int32_t factor; // r14d
  std::tuple_element<0,const std::pair<const std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ModifierEffectInfo> >::type *v24; // rsi
  std::map<unsigned int,int>::mapped_type *v25; // rax
  int32_t *v26; // rdx
  char v27; // cl
  unsigned int v28; // r14d
  double v29; // xmm0_8
  double v30; // xmm0_8
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  __int64 result; // rax
  std::map<std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ModifierEffectInfo>::const_iterator __for_begin; // [rsp+18h] [rbp-188h] BYREF
  std::map<std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ModifierEffectInfo>::const_iterator __for_end; // [rsp+20h] [rbp-180h] BYREF
  const data::MechanicBuildingExcelConfig *building_config_ptr; // [rsp+28h] [rbp-178h]
  const data::MechanicusGearLevelUpExcelConfig *level_config_ptr; // [rsp+30h] [rbp-170h]
  const std::map<std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ModifierEffectInfo> *__for_range; // [rsp+38h] [rbp-168h]
  double result_cost; // [rsp+40h] [rbp-160h]
  const std::pair<const std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ModifierEffectInfo> *v46; // [rsp+48h] [rbp-158h]
  std::tuple_element<0,const std::pair<const std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ModifierEffectInfo> >::type *key; // [rsp+50h] [rbp-150h]
  std::tuple_element<1,const std::pair<const std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ModifierEffectInfo> >::type *modifier; // [rsp+58h] [rbp-148h]
  std::shared_ptr<Config> v49; // [rsp+60h] [rbp-140h] BYREF
  common::milog::MiLogStream v50; // [rsp+70h] [rbp-130h] BYREF
  char v51[272]; // [rsp+90h] [rbp-110h] BYREF

  v3 = (unsigned __int64)v51;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "7 48 4 13 gadget_id:914 64 4 15 config_cost:923 80 4 16 total_factor:924 96 4 13 real_cost:947 1"
                        "12 4 11 gear_id:905 128 4 9 level:905 144 48 14 factor_map:925";
  *(_QWORD *)(v3 + 16) = MechanicusMultistagePlay::getGearBuildingCost;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862723] = -234556924;
  v5[536862724] = 61956;
  v5[536862726] = -202116109;
  *(_DWORD *)(v3 + 112) = gear_id;
  *(_DWORD *)(v3 + 128) = level;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v49);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v49);
  building_config_ptr = data::TreatreMechanicusExcelConfigMgrBase::findMechanicBuildingExcelConfig(
                          &v6->design_config.txt_config_mgr.mechanicus_config_mgr,
                          *(_DWORD *)(v3 + 112));
  std::shared_ptr<Config>::~shared_ptr(&v49);
  if ( building_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&building_config_ptr->gadget_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)building_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&building_config_ptr->gadget_id >> 3)
                                                                         + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v3 + 48) = building_config_ptr->gadget_id;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v49);
    v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v49);
    level_config_ptr = TreatreMechanicusExcelConfigMgr::findGearLevelupConfig(
                         &v10->design_config.txt_config_mgr.mechanicus_config_mgr,
                         *(_DWORD *)(v3 + 112),
                         *(_DWORD *)(v3 + 128));
    std::shared_ptr<Config>::~shared_ptr(&v49);
    if ( level_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&level_config_ptr->build_cost >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&level_config_ptr->build_cost >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v3 + 64) = level_config_ptr->build_cost;
      *(_DWORD *)(v3 + 80) = 0;
      std::map<unsigned int,int>::map((std::map<unsigned int,int> *const)(v3 + 144));
      __for_range = &this->cost_modifier_map_;
      __for_begin._M_node = std::map<std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ModifierEffectInfo>::begin(&this->cost_modifier_map_)._M_node;
      __for_end._M_node = std::map<std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ModifierEffectInfo>::end(&this->cost_modifier_map_)._M_node;
      while ( std::operator!=(&__for_begin, &__for_end) )
      {
        v46 = std::_Rb_tree_const_iterator<std::pair<std::pair const<unsigned int,unsigned int>,MechanicusMultistagePlay::ModifierEffectInfo>>::operator*(&__for_begin);
        key = std::get<0ul,std::pair<unsigned int,unsigned int> const,MechanicusMultistagePlay::ModifierEffectInfo>(v46);
        modifier = (std::tuple_element<1,const std::pair<const std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ModifierEffectInfo> >::type *)std::get<1ul,std::pair<unsigned int,unsigned int> const,MechanicusMultistagePlay::ModifierEffectInfo>(v46);
        if ( *(_BYTE *)(((unsigned __int64)&modifier->end_round >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)modifier + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&modifier->end_round >> 3)
                                                                  + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        if ( !modifier->end_round )
          goto LABEL_45;
        if ( *(_BYTE *)(((unsigned __int64)&this->current_round_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->current_round_ >> 3)
                                                               + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        if ( this->current_round_ > modifier->end_round )
        {
          common::milog::MiLogStream::create(
            &v50,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/scene/scene_multistage_play_impl/mechanicus_multistage_play.cpp",
            "getGearBuildingCost",
            930);
          v15 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                  &v50,
                  (const char (*)[46])"[MECHANICUS] building cost modifier card_id: ");
          v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)key);
          v17 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v16, (const char (*)[3])" [");
          v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &modifier->begin_round);
          v19 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v18, (const char (*)[3])", ");
          v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &modifier->end_round);
          v21 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                  v20,
                  (const char (*)[27])"] expired. current_round: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &this->current_round_);
          common::milog::MiLogStream::~MiLogStream(&v50);
        }
        else
        {
LABEL_45:
          if ( std::set<unsigned int>::empty(&modifier->target_gadget_set)
            || std::set<unsigned int>::count(
                 &modifier->target_gadget_set,
                 (const std::set<unsigned int>::key_type *)(v3 + 48)) )
          {
            if ( *(_BYTE *)(((unsigned __int64)&modifier->factor >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&modifier->factor >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4();
            }
            factor = modifier->factor;
            v24 = key;
            v25 = std::map<unsigned int,int>::operator[](
                    (std::map<unsigned int,int> *const)(v3 + 144),
                    (const std::map<unsigned int,int>::key_type *)key);
            v26 = v25;
            v27 = *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000);
            if ( v27 != 0 && (char)(((unsigned __int8)v25 & 7) + 3) >= v27 )
            {
              LOBYTE(v24) = v27 != 0;
              __asan_report_store4(v25, v24, (_BYTE)v25);
            }
            *v26 = factor;
            if ( *(_BYTE *)(((unsigned __int64)&modifier->factor >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&modifier->factor >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4();
            }
            *(_DWORD *)(v3 + 80) = SAFE_ADD<int,int>(*(_DWORD *)(v3 + 80), modifier->factor);
          }
        }
        std::_Rb_tree_const_iterator<std::pair<std::pair const<unsigned int,unsigned int>,MechanicusMultistagePlay::ModifierEffectInfo>>::operator++(&__for_begin);
      }
      v28 = *(_DWORD *)(v3 + 64);
      v29 = SAFE_MULTIPLY<unsigned int,double>(v28, 0.0001 * (double)*(int *)(v3 + 80));
      result_cost = SAFE_ADD<double,unsigned int>(v29, v28);
      if ( result_cost >= 0.0 )
        v30 = result_cost;
      else
        v30 = 0.0;
      result_cost = v30;
      *(_DWORD *)(v3 + 96) = -1;
      if ( (double)(int)std::numeric_limits<unsigned int>::max() > result_cost )
        *(_DWORD *)(v3 + 96) = (int)result_cost;
      common::milog::MiLogStream::create(
        &v50,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/scene_multistage_play_impl/mechanicus_multistage_play.cpp",
        "getGearBuildingCost",
        952);
      v31 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
              &v50,
              (const char (*)[35])"[MECHANICUS] effect modifier map: ");
      v32 = common::milog::MiLogStream::operator<<<unsigned int,int>(
              v31,
              (const std::map<unsigned int,int> *)(v3 + 144));
      v33 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v32, (const char (*)[16])" total factor: ");
      v34 = common::milog::MiLogStream::operator<<<int,(int *)0>(v33, (const int *)(v3 + 80));
      v35 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v34, (const char (*)[16])", config_cost: ");
      v36 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v35, (const unsigned int *)(v3 + 64));
      v37 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v36, (const char (*)[14])", real_cost: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v37, (const unsigned int *)(v3 + 96));
      common::milog::MiLogStream::~MiLogStream(&v50);
      v9 = *(_DWORD *)(v3 + 96);
      std::map<unsigned int,int>::~map((std::map<unsigned int,int> *const)(v3 + 144));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v50,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_multistage_play_impl/mechanicus_multistage_play.cpp",
        "getGearBuildingCost",
        919);
      v11 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
              &v50,
              (const char (*)[32])"[MECHANICUS] gear building_id: ");
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v11,
              (const unsigned int *)(v3 + 112));
      v13 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v12, (const char (*)[8])" level:");
      v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v13,
              (const unsigned int *)(v3 + 128));
      common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v14, (const char (*)[19])"config not found. ");
      common::milog::MiLogStream::~MiLogStream(&v50);
      v9 = std::numeric_limits<unsigned int>::max();
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v50,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_multistage_play_impl/mechanicus_multistage_play.cpp",
      "getGearBuildingCost",
      911);
    v7 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
           &v50,
           (const char (*)[32])"[MECHANICUS] gear building_id: ");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 112));
    common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v8, (const char (*)[20])" config not found. ");
    common::milog::MiLogStream::~MiLogStream(&v50);
    v9 = std::numeric_limits<unsigned int>::max();
  }
  result = v9;
  if ( v51 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 960: range 0000000016021A56-0000000016022498
__int64 __fastcall MechanicusMultistagePlay::getGearDemolitionRefund(
        const MechanicusMultistagePlay *const this,
        uint32_t gear_id,
        uint32_t level)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  unsigned int v9; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  int32_t factor; // r14d
  char *v24; // rsi
  std::map<unsigned int,int>::mapped_type *v25; // rax
  int32_t *v26; // rdx
  char v27; // cl
  unsigned int v28; // r14d
  double v29; // xmm0_8
  double v30; // xmm0_8
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  __int64 result; // rax
  std::map<std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ModifierEffectInfo>::const_iterator __for_begin; // [rsp+18h] [rbp-188h] BYREF
  std::map<std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ModifierEffectInfo>::const_iterator __for_end; // [rsp+20h] [rbp-180h] BYREF
  const data::MechanicBuildingExcelConfig *building_config_ptr; // [rsp+28h] [rbp-178h]
  const data::MechanicusGearLevelUpExcelConfig *level_config_ptr; // [rsp+30h] [rbp-170h]
  const std::map<std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ModifierEffectInfo> *__for_range; // [rsp+38h] [rbp-168h]
  double result_refund; // [rsp+40h] [rbp-160h]
  const std::pair<const std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ModifierEffectInfo> *v46; // [rsp+48h] [rbp-158h]
  std::tuple_element<0,const std::pair<const std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ModifierEffectInfo> >::type *key; // [rsp+50h] [rbp-150h]
  std::tuple_element<1,const std::pair<const std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ModifierEffectInfo> >::type *modifier; // [rsp+58h] [rbp-148h]
  std::shared_ptr<Config> v49; // [rsp+60h] [rbp-140h] BYREF
  common::milog::MiLogStream v50; // [rsp+70h] [rbp-130h] BYREF
  char v51[272]; // [rsp+90h] [rbp-110h] BYREF

  v3 = (unsigned __int64)v51;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "7 48 4 13 gadget_id:968 64 4 17 config_refund:978 80 4 16 total_factor:979 96 4 16 real_refund:1"
                        "003 112 4 11 gear_id:959 128 4 9 level:959 144 48 14 factor_map:980";
  *(_QWORD *)(v3 + 16) = MechanicusMultistagePlay::getGearDemolitionRefund;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862723] = -234556924;
  v5[536862724] = 61956;
  v5[536862726] = -202116109;
  *(_DWORD *)(v3 + 112) = gear_id;
  *(_DWORD *)(v3 + 128) = level;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v49);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v49);
  building_config_ptr = data::TreatreMechanicusExcelConfigMgrBase::findMechanicBuildingExcelConfig(
                          &v6->design_config.txt_config_mgr.mechanicus_config_mgr,
                          *(_DWORD *)(v3 + 112));
  std::shared_ptr<Config>::~shared_ptr(&v49);
  if ( building_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&building_config_ptr->gadget_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)building_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&building_config_ptr->gadget_id >> 3)
                                                                         + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v3 + 48) = building_config_ptr->gadget_id;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v49);
    v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v49);
    level_config_ptr = TreatreMechanicusExcelConfigMgr::findGearLevelupConfig(
                         &v10->design_config.txt_config_mgr.mechanicus_config_mgr,
                         *(_DWORD *)(v3 + 112),
                         *(_DWORD *)(v3 + 128));
    std::shared_ptr<Config>::~shared_ptr(&v49);
    if ( level_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&level_config_ptr->demolition_refund >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)level_config_ptr + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_config_ptr->demolition_refund >> 3)
                                                                        + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v3 + 64) = level_config_ptr->demolition_refund;
      *(_DWORD *)(v3 + 80) = 0;
      std::map<unsigned int,int>::map((std::map<unsigned int,int> *const)(v3 + 144));
      __for_range = &this->refund_modifier_map_;
      __for_begin._M_node = std::map<std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ModifierEffectInfo>::begin(&this->refund_modifier_map_)._M_node;
      __for_end._M_node = std::map<std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ModifierEffectInfo>::end(&this->refund_modifier_map_)._M_node;
      while ( std::operator!=(&__for_begin, &__for_end) )
      {
        v46 = std::_Rb_tree_const_iterator<std::pair<std::pair const<unsigned int,unsigned int>,MechanicusMultistagePlay::ModifierEffectInfo>>::operator*(&__for_begin);
        key = std::get<0ul,std::pair<unsigned int,unsigned int> const,MechanicusMultistagePlay::ModifierEffectInfo>(v46);
        modifier = (std::tuple_element<1,const std::pair<const std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ModifierEffectInfo> >::type *)std::get<1ul,std::pair<unsigned int,unsigned int> const,MechanicusMultistagePlay::ModifierEffectInfo>(v46);
        if ( *(_BYTE *)(((unsigned __int64)key >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)key & 7) + 3) >= *(_BYTE *)(((unsigned __int64)key >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        *(_DWORD *)(v3 + 96) = key->first;
        if ( *(_BYTE *)(((unsigned __int64)&modifier->end_round >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)modifier + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&modifier->end_round >> 3)
                                                                  + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        if ( !modifier->end_round )
          goto LABEL_47;
        if ( *(_BYTE *)(((unsigned __int64)&this->current_round_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->current_round_ >> 3)
                                                               + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        if ( this->current_round_ > modifier->end_round )
        {
          common::milog::MiLogStream::create(
            &v50,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/scene/scene_multistage_play_impl/mechanicus_multistage_play.cpp",
            "getGearDemolitionRefund",
            986);
          v15 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                  &v50,
                  (const char (*)[45])"[MECHANICUS] building refund modifier card: ");
          v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v15,
                  (const unsigned int *)(v3 + 96));
          v17 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v16, (const char (*)[3])" [");
          v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &modifier->begin_round);
          v19 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v18, (const char (*)[3])", ");
          v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &modifier->end_round);
          v21 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                  v20,
                  (const char (*)[27])"] expired. current_round: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &this->current_round_);
          common::milog::MiLogStream::~MiLogStream(&v50);
        }
        else
        {
LABEL_47:
          if ( std::set<unsigned int>::empty(&modifier->target_gadget_set)
            || std::set<unsigned int>::count(
                 &modifier->target_gadget_set,
                 (const std::set<unsigned int>::key_type *)(v3 + 48)) )
          {
            if ( *(_BYTE *)(((unsigned __int64)&modifier->factor >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&modifier->factor >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4();
            }
            factor = modifier->factor;
            v24 = (char *)(v3 + 96);
            v25 = std::map<unsigned int,int>::operator[](
                    (std::map<unsigned int,int> *const)(v3 + 144),
                    (const std::map<unsigned int,int>::key_type *)(v3 + 96));
            v26 = v25;
            v27 = *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000);
            if ( v27 != 0 && (char)(((unsigned __int8)v25 & 7) + 3) >= v27 )
            {
              LOBYTE(v24) = v27 != 0;
              __asan_report_store4(v25, v24, (_BYTE)v25);
            }
            *v26 = factor;
            if ( *(_BYTE *)(((unsigned __int64)&modifier->factor >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&modifier->factor >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4();
            }
            *(_DWORD *)(v3 + 80) = SAFE_ADD<int,int>(*(_DWORD *)(v3 + 80), modifier->factor);
          }
        }
        std::_Rb_tree_const_iterator<std::pair<std::pair const<unsigned int,unsigned int>,MechanicusMultistagePlay::ModifierEffectInfo>>::operator++(&__for_begin);
      }
      v28 = *(_DWORD *)(v3 + 64);
      v29 = SAFE_MULTIPLY<unsigned int,double>(v28, 0.0001 * (double)*(int *)(v3 + 80));
      result_refund = SAFE_ADD<double,unsigned int>(v29, v28);
      if ( result_refund >= 0.0 )
        v30 = result_refund;
      else
        v30 = 0.0;
      result_refund = v30;
      *(_DWORD *)(v3 + 96) = -1;
      if ( (double)(int)std::numeric_limits<unsigned int>::max() > result_refund )
        *(_DWORD *)(v3 + 96) = (int)result_refund;
      common::milog::MiLogStream::create(
        &v50,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/scene_multistage_play_impl/mechanicus_multistage_play.cpp",
        "getGearDemolitionRefund",
        1008);
      v31 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
              &v50,
              (const char (*)[35])"[MECHANICUS] effect modifier map: ");
      v32 = common::milog::MiLogStream::operator<<<unsigned int,int>(
              v31,
              (const std::map<unsigned int,int> *)(v3 + 144));
      v33 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v32, (const char (*)[16])" total factor: ");
      v34 = common::milog::MiLogStream::operator<<<int,(int *)0>(v33, (const int *)(v3 + 80));
      v35 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
              v34,
              (const char (*)[18])", config_refund: ");
      v36 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v35, (const unsigned int *)(v3 + 64));
      v37 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v36, (const char (*)[16])", real_refund: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v37, (const unsigned int *)(v3 + 96));
      common::milog::MiLogStream::~MiLogStream(&v50);
      v9 = *(_DWORD *)(v3 + 96);
      std::map<unsigned int,int>::~map((std::map<unsigned int,int> *const)(v3 + 144));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v50,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_multistage_play_impl/mechanicus_multistage_play.cpp",
        "getGearDemolitionRefund",
        974);
      v11 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
              &v50,
              (const char (*)[32])"[MECHANICUS] gear building_id: ");
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v11,
              (const unsigned int *)(v3 + 112));
      v13 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v12, (const char (*)[9])" level: ");
      v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v13,
              (const unsigned int *)(v3 + 128));
      common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v14, (const char (*)[20])" config not found. ");
      common::milog::MiLogStream::~MiLogStream(&v50);
      v9 = std::numeric_limits<unsigned int>::max();
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v50,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_multistage_play_impl/mechanicus_multistage_play.cpp",
      "getGearDemolitionRefund",
      965);
    v7 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
           &v50,
           (const char (*)[32])"[MECHANICUS] gear building_id: ");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 112));
    common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v8, (const char (*)[20])" config not found. ");
    common::milog::MiLogStream::~MiLogStream(&v50);
    v9 = std::numeric_limits<unsigned int>::max();
  }
  result = v9;
  if ( v51 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 1015: range 000000001602249A-00000000160228BA
void __cdecl MechanicusMultistagePlay::getPlayerGearsLevelMap(
        const MechanicusMultistagePlay *const this,
        Player *player,
        std::map<unsigned int,unsigned int> *gears_level_map)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // rbx
  PlayerMechanicusComp *MechanicusComp; // rax
  std::map<unsigned int,unsigned int> *v7; // rdx
  const TreatreMechanicusExcelConfigMgr *ConfigMgr; // rcx
  std::_Rb_tree_const_iterator<unsigned int>::reference v9; // rdx
  char *v10; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v11; // rax
  _DWORD *v12; // rdx
  char v13; // cl
  common::milog::MiLogStream *v14; // rdx
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rdx
  std::set<unsigned int>::iterator __for_begin; // [rsp+28h] [rbp-138h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+30h] [rbp-130h] BYREF
  std::set<unsigned int> *__for_range; // [rsp+38h] [rbp-128h]
  common::milog::MiLogStream v22; // [rsp+40h] [rbp-120h] BYREF
  char v23[256]; // [rsp+60h] [rbp-100h] BYREF

  v3 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 12 gear_id:1024 48 48 22 default_gears_set:1023 128 56 19 gear_level_opt:1017";
  *(_QWORD *)(v3 + 16) = MechanicusMultistagePlay::getPlayerGearsLevelMap;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61956;
  v5[536862723] = -218959118;
  v5[536862725] = -218103808;
  v5[536862726] = -202116109;
  MechanicusComp = Player::getMechanicusComp(player);
  PlayerMechanicusComp::queryGearLevelMap(
    (std::optional<std::map<unsigned int,unsigned int> > *)(v3 + 128),
    MechanicusComp);
  if ( std::optional<std::map<unsigned int,unsigned int>>::has_value((const std::optional<std::map<unsigned int,unsigned int> > *const)(v3 + 128)) )
  {
    v7 = std::optional<std::map<unsigned int,unsigned int>>::value((std::optional<std::map<unsigned int,unsigned int> > *const)(v3 + 128));
    std::map<unsigned int,unsigned int>::operator=(gears_level_map, v7);
  }
  ConfigMgr = MechanicusMultistagePlay::getConfigMgr(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  TreatreMechanicusExcelConfigMgr::getDefaultGearsByDungeonId(
    (std::set<unsigned int> *)(v3 + 48),
    ConfigMgr,
    this->dungeon_id_);
  __for_range = (std::set<unsigned int> *)(v3 + 48);
  __for_begin._M_node = std::set<unsigned int>::begin((const std::set<unsigned int> *const)(v3 + 48))._M_node;
  __for_end._M_node = std::set<unsigned int>::end((const std::set<unsigned int> *const)(v3 + 48))._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v9 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v3 + 32) = *v9;
    if ( !common::tools::MiscUtils::isContains<std::map<unsigned int,unsigned int>,unsigned int>(
            gears_level_map,
            (const unsigned int *)(v3 + 32)) )
    {
      v10 = (char *)(v3 + 32);
      v11 = std::map<unsigned int,unsigned int>::operator[](
              gears_level_map,
              (const std::map<unsigned int,unsigned int>::key_type *)(v3 + 32));
      v12 = v11;
      v13 = *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000);
      if ( v13 != 0 && (char)(((unsigned __int8)v11 & 7) + 3) >= v13 )
      {
        LOBYTE(v10) = v13 != 0;
        __asan_report_store4(v11, v10, (_BYTE)v11);
      }
      *v12 = 1;
    }
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  common::milog::MiLogStream::create(
    &v22,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/scene_multistage_play_impl/mechanicus_multistage_play.cpp",
    "getPlayerGearsLevelMap",
    1031);
  v14 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
          &v22,
          (const char (*)[21])"[MEHCANICUS] player:");
  v15 = operator<<(v14, player);
  v16 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v15, (const char (*)[8])" gears:");
  common::milog::MiLogStream::operator<<<unsigned int,unsigned int>(v16, gears_level_map);
  common::milog::MiLogStream::~MiLogStream(&v22);
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 48));
  std::optional<std::map<unsigned int,unsigned int>>::~optional((std::optional<std::map<unsigned int,unsigned int> > *const)(v3 + 128));
  if ( v23 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8014) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = -168430091;
  }
};

// Line 1035: range 00000000160228E0-000000001602293C
void __cdecl MechanicusMultistagePlay::broadcastAllFoundationsNotify(MechanicusMultistagePlay *const this)
{
  MechanicusMultistagePlay::broadcastAllFoundationsNotify::<lambda(FoundationComp&)> v1; // si
  std::function<ForeachPolicy(FoundationComp&)> p_func; // [rsp+20h] [rbp-30h] BYREF

  std::function<ForeachPolicy ()(FoundationComp &)>::function<MechanicusMultistagePlay::broadcastAllFoundationsNotify(void)::{lambda(FoundationComp &)#1},void,void>(
    &p_func,
    v1);
  MechanicusMultistagePlay::foreachFoundation(this, &p_func);
  std::function<ForeachPolicy ()(FoundationComp &)>::~function(&p_func);
};

// Line 1036: range 00000000160228BC-00000000160228DE
ForeachPolicy __cdecl MechanicusMultistagePlay::broadcastAllFoundationsNotify(void)::{lambda(FoundationComp &)#1}::operator()(
        const MechanicusMultistagePlay::broadcastAllFoundationsNotify::<lambda(FoundationComp&)> *const __closure,
        FoundationComp *foundation_comp)
{
  FoundationComp::broadcastFoundationInfo(foundation_comp);
  return 0;
};

// Line 1044: range 000000001602293E-0000000016022F64
void __fastcall MechanicusMultistagePlay::notifyLuaPickedCardEvent(
        MechanicusMultistagePlay *const this,
        uint32_t uid,
        int32_t card_id,
        uint32_t effect_id)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  __int64 v18; // rsi
  uint32_t play_index; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rdx
  char v21; // cl
  __int64 v22; // rax
  char v23; // dl
  bool v24; // dl
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rdx
  char v26; // cl
  uint32_t v27; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rdx
  char v29; // cl
  Group *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream v38; // [rsp+20h] [rbp-D0h] BYREF
  char v39[176]; // [rsp+40h] [rbp-B0h] BYREF

  v4 = (unsigned __int64)v39;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 48 4 8 uid:1043 64 16 14 group_ptr:1046 96 16 14 event_ptr:1053";
  *(_QWORD *)(v4 + 16) = MechanicusMultistagePlay::notifyLuaPickedCardEvent;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -219021312;
  v6[536862723] = -202178560;
  *(_DWORD *)(v4 + 48) = uid;
  SceneMultistagePlay::getGroupPtr((SceneMultistagePlay *const)(v4 + 64));
  if ( std::operator==<Group>(0LL, (const std::shared_ptr<Group> *)(v4 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v38,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_multistage_play_impl/mechanicus_multistage_play.cpp",
      "notifyLuaPickedCardEvent",
      1049);
    v7 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v38, (const char (*)[19])"[MECHANICUS] play ");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->play_index_);
    v9 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v8, (const char (*)[9])" group: ");
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &this->group_id_);
    v11 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v10, (const char (*)[15])" nullptr. uid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v4 + 48));
    common::milog::MiLogStream::~MiLogStream(&v38);
  }
  else
  {
    EventUtil::createEvent((data::EventType)(v4 + 96));
    if ( std::operator==<Event>((const std::shared_ptr<Event> *)(v4 + 96), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v38,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_multistage_play_impl/mechanicus_multistage_play.cpp",
        "notifyLuaPickedCardEvent",
        1056);
      v12 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
              &v38,
              (const char (*)[19])"[MECHANICUS] play ");
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &this->play_index_);
      v14 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v13, (const char (*)[9])" group: ");
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &this->group_id_);
      v16 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              v15,
              (const char (*)[33])" picked card event nullptr. uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v4 + 48));
      common::milog::MiLogStream::~MiLogStream(&v38);
    }
    else
    {
      v17 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
      std::string::operator=(&v17->source_name, &this->current_stage_name_);
      v18 = (((_BYTE)this + 84) & 7u) + 3;
      if ( *(_BYTE *)(((unsigned __int64)&this->play_index_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->play_index_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      play_index = this->play_index_;
      v20 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
      v21 = *(_BYTE *)(((unsigned __int64)&v20->param1 >> 3) + 0x7FFF8000);
      if ( v21 != 0 && (char)((((_BYTE)v20 + 44) & 7) + 3) >= v21 )
      {
        LOBYTE(v18) = v21 != 0;
        __asan_report_store4(&v20->param1, v18, (_BYTE)v20);
      }
      v20->param1 = play_index;
      v22 = (__int64)std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
      v23 = *(_BYTE *)(((unsigned __int64)(v22 + 48) >> 3) + 0x7FFF8000);
      LOBYTE(v18) = v23 != 0;
      v24 = v23 != 0 && v23 <= 3;
      if ( v24 )
        v22 = __asan_report_store4(v22 + 48, v18, v24);
      *(_DWORD *)(v22 + 48) = effect_id;
      v25 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
      v26 = *(_BYTE *)(((unsigned __int64)&v25->param3 >> 3) + 0x7FFF8000);
      if ( v26 != 0 && (char)((((_BYTE)v25 + 52) & 7) + 3) >= v26 )
      {
        LOBYTE(v18) = v26 != 0;
        __asan_report_store4(&v25->param3, v18, (_BYTE)v25);
      }
      v25->param3 = card_id;
      v27 = *(_DWORD *)(v4 + 48);
      v28 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
      v29 = *(_BYTE *)(((unsigned __int64)&v28->uid >> 3) + 0x7FFF8000);
      if ( v29 != 0 && (char)((((_BYTE)v28 + 60) & 7) + 3) >= v29 )
      {
        LOBYTE(v18) = v29 != 0;
        __asan_report_store4(&v28->uid, v18, (_BYTE)v28);
      }
      v28->uid = v27;
      v30 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
      if ( Group::handleEvent(v30, (EventPtr *)(v4 + 96)) )
      {
        common::milog::MiLogStream::create(
          &v38,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_multistage_play_impl/mechanicus_multistage_play.cpp",
          "notifyLuaPickedCardEvent",
          1067);
        v31 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                &v38,
                (const char (*)[23])"[MECHANICUS] group_id:");
        v32 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, &this->group_id_);
        v33 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
                v32,
                (const char (*)[57])" handleEvent EVENT_MECHANICUS_PICKED_CARD fails. @play: ");
        v34 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v33, &this->play_index_);
        v35 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v34, (const char (*)[6])" uid:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v35, (const unsigned int *)(v4 + 48));
        common::milog::MiLogStream::~MiLogStream(&v38);
      }
    }
    std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)(v4 + 96));
  }
  std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v4 + 64));
  if ( v39 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1073: range 0000000016022F66-00000000160233B2
__int64 __fastcall MechanicusMultistagePlay::isPlayerCanAffordCard(
        const MechanicusMultistagePlay *const this,
        uint32_t uid,
        unsigned __int64 player_info,
        const std::map<unsigned int,unsigned int> *exclude_card_map)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r12
  std::_Rb_tree_const_iterator<unsigned int>::reference v7; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  uint32_t cost_points; // ecx
  __int64 result; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  std::set<unsigned int>::iterator __for_begin; // [rsp+20h] [rbp-D0h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+28h] [rbp-C8h] BYREF
  const std::set<unsigned int> *__for_range; // [rsp+30h] [rbp-C0h]
  const data::MechanicusCardExcelConfig *card_config_ptr; // [rsp+38h] [rbp-B8h]
  std::shared_ptr<Config> v22; // [rsp+40h] [rbp-B0h] BYREF
  common::milog::MiLogStream v23; // [rsp+50h] [rbp-A0h] BYREF
  char v24[128]; // [rsp+70h] [rbp-80h] BYREF

  v4 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 12 card_id:1074 64 4 8 uid:1072";
  *(_QWORD *)(v4 + 16) = MechanicusMultistagePlay::isPlayerCanAffordCard;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202116348;
  *(_DWORD *)(v4 + 64) = uid;
  __for_range = &this->stage_cards_set_;
  __for_begin._M_node = std::set<unsigned int>::begin(&this->stage_cards_set_)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(&this->stage_cards_set_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v7 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v4 + 48) = *v7;
    if ( !common::tools::MiscUtils::isContains<std::map<unsigned int,unsigned int> const,unsigned int>(
            exclude_card_map,
            (const unsigned int *)(v4 + 48)) )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v22);
      v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v22);
      card_config_ptr = data::TreatreMechanicusExcelConfigMgrBase::findMechanicusCardExcelConfig(
                          &v8->design_config.txt_config_mgr.mechanicus_config_mgr,
                          *(_DWORD *)(v4 + 48));
      std::shared_ptr<Config>::~shared_ptr(&v22);
      if ( card_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&card_config_ptr->cost_points >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)card_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&card_config_ptr->cost_points >> 3)
                                                                         + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        cost_points = card_config_ptr->cost_points;
        if ( *(_BYTE *)((player_info >> 3) + 0x7FFF8000) != 0
          && (char)((player_info & 7) + 3) >= *(_BYTE *)((player_info >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        if ( cost_points <= *(_DWORD *)player_info )
        {
          result = 1LL;
          goto LABEL_19;
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v23,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_multistage_play_impl/mechanicus_multistage_play.cpp",
          "isPlayerCanAffordCard",
          1083);
        v9 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
               &v23,
               (const char (*)[42])"[MECHANICUS] config not found @ card_id: ");
        v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v9,
                (const unsigned int *)(v4 + 48));
        v11 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v10, (const char (*)[8])". uid: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v4 + 64));
        common::milog::MiLogStream::~MiLogStream(&v23);
      }
    }
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  common::milog::MiLogStream::create(
    &v23,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/scene_multistage_play_impl/mechanicus_multistage_play.cpp",
    "isPlayerCanAffordCard",
    1091);
  v14 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
          &v23,
          (const char (*)[21])"[MECHANICUS] player:");
  v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v4 + 64));
  common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v15, (const char (*)[26])" can NOT afford any card.");
  common::milog::MiLogStream::~MiLogStream(&v23);
  result = 0LL;
LABEL_19:
  if ( v24 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 1096: range 00000000160233B4-0000000016023521
uint32_t __cdecl MechanicusMultistagePlay::getCardConfirmedByPlayerUid(
        const MechanicusMultistagePlay *const this,
        uint32_t card_id)
{
  bool *p_is_card_confirmed; // rax
  std::unordered_map<unsigned int,MechanicusMultistagePlay::PlayerInfo>::const_iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::unordered_map<unsigned int,MechanicusMultistagePlay::PlayerInfo>::const_iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  const std::unordered_map<unsigned int,MechanicusMultistagePlay::PlayerInfo> *__for_range; // [rsp+20h] [rbp-20h]
  const std::pair<unsigned int const,MechanicusMultistagePlay::PlayerInfo> *v7; // [rsp+28h] [rbp-18h]
  std::tuple_element<0,const std::pair<unsigned int const,MechanicusMultistagePlay::PlayerInfo> >::type *uid; // [rsp+30h] [rbp-10h]
  std::tuple_element<1,const std::pair<unsigned int const,MechanicusMultistagePlay::PlayerInfo> >::type *player_info; // [rsp+38h] [rbp-8h]

  __for_range = &this->uid_to_player_info_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,MechanicusMultistagePlay::PlayerInfo>::begin(&this->uid_to_player_info_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,MechanicusMultistagePlay::PlayerInfo>::end(&this->uid_to_player_info_map_)._M_cur;
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,MechanicusMultistagePlay::PlayerInfo>,false>(
            &__for_begin,
            &__for_end) )
      return 0;
    v7 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,MechanicusMultistagePlay::PlayerInfo>,false,false>::operator*(&__for_begin);
    uid = std::get<0ul,unsigned int const,MechanicusMultistagePlay::PlayerInfo>(v7);
    player_info = (std::tuple_element<1,const std::pair<unsigned int const,MechanicusMultistagePlay::PlayerInfo> >::type *)std::get<1ul,unsigned int const,MechanicusMultistagePlay::PlayerInfo>(v7);
    p_is_card_confirmed = &player_info->is_card_confirmed_;
    if ( *(_BYTE *)(((unsigned __int64)p_is_card_confirmed >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)p_is_card_confirmed & 7) >= *(_BYTE *)(((unsigned __int64)p_is_card_confirmed >> 3)
                                                                + 0x7FFF8000) )
    {
      __asan_report_load1(p_is_card_confirmed);
    }
    if ( player_info->is_card_confirmed_ )
    {
      if ( *(_BYTE *)(((unsigned __int64)&player_info->pick_card_id_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)player_info + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&player_info->pick_card_id_ >> 3)
                                                                   + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( card_id == player_info->pick_card_id_ )
        break;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,MechanicusMultistagePlay::PlayerInfo>,false,false>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  return *uid;
};

// Line 1108: range 0000000016023522-0000000016023EA6
__int64 __fastcall MechanicusMultistagePlay::cardTakeEffect(
        MechanicusMultistagePlay *const this,
        Player *player,
        const data::MechanicusCardExcelConfig *card_config,
        uint32_t gm_curse_id)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  TreatreMechanicusExcelConfigMgr *p_mechanicus_config_mgr; // rcx
  __int64 result; // rax
  std::unordered_map<unsigned int,MechanicusMultistagePlay::CardInfo> *v9; // rax
  uint32_t *p_id; // rsi
  uint32_t id; // ecx
  char v12; // dl
  bool v13; // dl
  __int64 v14; // rsi
  uint32_t current_round; // ecx
  char v16; // dl
  bool v17; // dl
  __int64 v18; // rsi
  uint32_t effect_id; // ecx
  char v20; // dl
  bool v21; // dl
  uint32_t v22; // ecx
  char v23; // dl
  bool v24; // dl
  const TreatreMechanicusExcelConfigMgr *ConfigMgr; // rax
  const TreatreMechanicusExcelConfigMgr *v26; // rax
  common::milog::MiLogStream *v27; // rax
  const data::TreatreMechanicusExcelConfigMgrBase *p_effect_id; // rdi
  __int64 v29; // rsi
  uint32_t v30; // ecx
  char v31; // dl
  bool v32; // dl
  uint32_t v33; // ecx
  char v34; // dl
  bool v35; // dl
  __int64 v36; // rsi
  uint32_t v37; // ecx
  char v38; // dl
  bool v39; // dl
  uint32_t curse_effect_id; // r14d
  int32_t v41; // r13d
  uint32_t Uid; // eax
  uint32_t v43; // r14d
  int32_t v44; // r13d
  uint32_t v45; // eax
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,MechanicusMultistagePlay::CardInfo>>::key_type __k; // [rsp+20h] [rbp-D0h] BYREF
  int32_t ret; // [rsp+24h] [rbp-CCh]
  const data::MechanicusCardCurseExcelConfig *random_curse_config_ptr; // [rsp+28h] [rbp-C8h]
  const data::MechanicusCardEffectExcelConfig *card_effect_config_ptr; // [rsp+30h] [rbp-C0h]
  MechanicusMultistagePlay::CardInfo *card_info; // [rsp+38h] [rbp-B8h]
  MechanicusMultistagePlay::PlayerInfo *player_info; // [rsp+40h] [rbp-B0h]
  const data::MechanicusCardEffectExcelConfig *curse_effect_config_ptr; // [rsp+48h] [rbp-A8h]
  std::shared_ptr<Config> v57; // [rsp+50h] [rbp-A0h] BYREF
  common::milog::MiLogStream v58; // [rsp+60h] [rbp-90h] BYREF
  char v59[112]; // [rsp+80h] [rbp-70h] BYREF

  v4 = (unsigned __int64)v59;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 4 16 gm_curse_id:1107";
  *(_QWORD *)(v4 + 16) = MechanicusMultistagePlay::cardTakeEffect;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116348;
  *(_DWORD *)(v4 + 32) = gm_curse_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v57);
  p_mechanicus_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v57)->design_config.txt_config_mgr.mechanicus_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&card_config->effect_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)card_config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&card_config->effect_id >> 3)
                                                               + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  card_effect_config_ptr = data::TreatreMechanicusExcelConfigMgrBase::findMechanicusCardEffectExcelConfig(
                             p_mechanicus_config_mgr,
                             card_config->effect_id);
  std::shared_ptr<Config>::~shared_ptr(&v57);
  if ( !card_effect_config_ptr )
  {
    result = 5LL;
    goto LABEL_58;
  }
  __k = Player::getUid(player);
  v9 = std::unordered_map<unsigned int,std::unordered_map<unsigned int,MechanicusMultistagePlay::CardInfo>>::operator[](
         &this->uid_to_card_info_map_,
         &__k);
  p_id = &card_config->id;
  card_info = std::unordered_map<unsigned int,MechanicusMultistagePlay::CardInfo>::operator[](v9, &card_config->id);
  if ( *(_BYTE *)(((unsigned __int64)&card_config->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&card_config->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  id = card_config->id;
  v12 = *(_BYTE *)(((unsigned __int64)card_info >> 3) + 0x7FFF8000);
  LOBYTE(p_id) = v12 != 0;
  v13 = v12 != 0 && (char)(((unsigned __int8)card_info & 7) + 3) >= v12;
  if ( v13 )
    __asan_report_store4(card_info, p_id, v13);
  card_info->card_id = id;
  v14 = (((_BYTE)this + 100) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->current_round_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->current_round_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  current_round = this->current_round_;
  v16 = *(_BYTE *)(((unsigned __int64)&card_info->begin_round >> 3) + 0x7FFF8000);
  LOBYTE(v14) = v16 != 0;
  v17 = v16 != 0 && (char)((((_BYTE)card_info + 12) & 7) + 3) >= v16;
  if ( v17 )
    __asan_report_store4(&card_info->begin_round, v14, v17);
  card_info->begin_round = current_round;
  v18 = (((_BYTE)card_config + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&card_config->effect_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)card_config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&card_config->effect_id >> 3)
                                                               + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  effect_id = card_config->effect_id;
  v20 = *(_BYTE *)(((unsigned __int64)&card_info->effect_id >> 3) + 0x7FFF8000);
  LOBYTE(v18) = v20 != 0;
  v21 = v20 != 0 && (char)((((_BYTE)card_info + 24) & 7) + 3) >= v20;
  if ( v21 )
    __asan_report_store4(&card_info->effect_id, v18, v21);
  card_info->effect_id = effect_id;
  if ( *(_BYTE *)(((unsigned __int64)&card_config->last_round >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&card_config->last_round >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( card_config->last_round )
  {
    v22 = this->current_round_ + card_config->last_round - 1;
    v23 = *(_BYTE *)(((unsigned __int64)&card_info->end_round >> 3) + 0x7FFF8000);
    LOBYTE(v18) = v23 != 0;
    v24 = v23 != 0 && (char)((((_BYTE)card_info + 16) & 7) + 3) >= v23;
    if ( v24 )
      __asan_report_store4(&card_info->end_round, v18, v24);
    card_info->end_round = v22;
  }
  if ( *(_BYTE *)(((unsigned __int64)&card_config->card_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&card_config->card_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( card_config->card_type == MECHANICUS_CARD_CURSE )
  {
    __k = Player::getUid(player);
    player_info = std::unordered_map<unsigned int,MechanicusMultistagePlay::PlayerInfo>::operator[](
                    &this->uid_to_player_info_map_,
                    &__k);
    ConfigMgr = MechanicusMultistagePlay::getConfigMgr(this);
    random_curse_config_ptr = TreatreMechanicusExcelConfigMgr::randomCurseConfig(ConfigMgr);
    if ( *(_DWORD *)(v4 + 32) )
    {
      v26 = MechanicusMultistagePlay::getConfigMgr(this);
      random_curse_config_ptr = data::TreatreMechanicusExcelConfigMgrBase::findMechanicusCardCurseExcelConfig(
                                  v26,
                                  *(_DWORD *)(v4 + 32));
      common::milog::MiLogStream::create(
        &v58,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/scene_multistage_play_impl/mechanicus_multistage_play.cpp",
        "cardTakeEffect",
        1133);
      v27 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
              &v58,
              (const char (*)[21])"GM Rewrite Curse ID:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, (const unsigned int *)(v4 + 32));
      common::milog::MiLogStream::~MiLogStream(&v58);
    }
    if ( random_curse_config_ptr )
    {
      p_effect_id = MechanicusMultistagePlay::getConfigMgr(this);
      if ( *(_BYTE *)(((unsigned __int64)&random_curse_config_ptr->effect_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)random_curse_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&random_curse_config_ptr->effect_id >> 3)
                                                                               + 0x7FFF8000) )
      {
        p_effect_id = (const data::TreatreMechanicusExcelConfigMgrBase *)&random_curse_config_ptr->effect_id;
        __asan_report_load4();
      }
      v29 = random_curse_config_ptr->effect_id;
      curse_effect_config_ptr = data::TreatreMechanicusExcelConfigMgrBase::findMechanicusCardEffectExcelConfig(
                                  p_effect_id,
                                  v29);
      if ( !curse_effect_config_ptr )
      {
        result = 5LL;
        goto LABEL_58;
      }
      if ( *(_BYTE *)(((unsigned __int64)&random_curse_config_ptr->id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&random_curse_config_ptr->id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      v30 = random_curse_config_ptr->id;
      v31 = *(_BYTE *)(((unsigned __int64)&player_info->curse_id_ >> 3) + 0x7FFF8000);
      LOBYTE(v29) = v31 != 0;
      v32 = v31 != 0 && (char)((((_BYTE)player_info + 20) & 7) + 3) >= v31;
      if ( v32 )
        __asan_report_store4(&player_info->curse_id_, v29, v32);
      player_info->curse_id_ = v30;
      v33 = random_curse_config_ptr->id;
      v34 = *(_BYTE *)(((unsigned __int64)&card_info->curse_id >> 3) + 0x7FFF8000);
      LOBYTE(v29) = v34 != 0;
      v35 = v34 != 0 && (char)((((_BYTE)card_info + 4) & 7) + 3) >= v34;
      if ( v35 )
        __asan_report_store4(&card_info->curse_id, v29, v35);
      card_info->curse_id = v33;
      v36 = (((_BYTE)random_curse_config_ptr + 12) & 7u) + 3;
      if ( *(_BYTE *)(((unsigned __int64)&random_curse_config_ptr->effect_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)random_curse_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&random_curse_config_ptr->effect_id >> 3)
                                                                               + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      v37 = random_curse_config_ptr->effect_id;
      v38 = *(_BYTE *)(((unsigned __int64)&card_info->curse_effect_id >> 3) + 0x7FFF8000);
      LOBYTE(v36) = v38 != 0;
      v39 = v38 != 0 && (char)((((_BYTE)card_info + 8) & 7) + 3) >= v38;
      if ( v39 )
        __asan_report_store4(&card_info->curse_effect_id, v36, v39);
      card_info->curse_effect_id = v37;
      MechanicusMultistagePlay::dispatchEffect(
        this,
        player,
        card_config,
        curse_effect_config_ptr,
        random_curse_config_ptr);
      if ( *(_BYTE *)(((unsigned __int64)&card_info->curse_effect_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)card_info + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&card_info->curse_effect_id >> 3)
                                                                + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      curse_effect_id = card_info->curse_effect_id;
      if ( *(_BYTE *)(((unsigned __int64)&card_config->id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&card_config->id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      v41 = card_config->id;
      Uid = Player::getUid(player);
      MechanicusMultistagePlay::notifyLuaPickedCardEvent(this, Uid, v41, curse_effect_id);
    }
  }
  ret = MechanicusMultistagePlay::dispatchEffect(this, player, card_config, card_effect_config_ptr, 0LL);
  if ( ret )
  {
    result = (unsigned int)ret;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&card_config->effect_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)card_config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&card_config->effect_id >> 3)
                                                                 + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    v43 = card_config->effect_id;
    if ( *(_BYTE *)(((unsigned __int64)&card_config->id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&card_config->id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    v44 = card_config->id;
    v45 = Player::getUid(player);
    MechanicusMultistagePlay::notifyLuaPickedCardEvent(this, v45, v44, v43);
    result = 0LL;
  }
LABEL_58:
  if ( v59 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1163: range 0000000016023EA8-0000000016024068
int32_t __cdecl MechanicusMultistagePlay::dispatchEffect(
        MechanicusMultistagePlay *const this,
        Player *player,
        const data::MechanicusCardExcelConfig *card_config,
        const data::MechanicusCardEffectExcelConfig *effect_config,
        const data::MechanicusCardCurseExcelConfig *curse_config_ptr)
{
  int32_t result; // eax

  if ( *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  switch ( effect_config->effect_type )
  {
    case MECHANICUS_CARD_EFFECT_SET_SGV:
      result = MechanicusMultistagePlay::setServerGlobalValue(
                 this,
                 player,
                 card_config,
                 effect_config,
                 curse_config_ptr);
      break;
    case MECHANICUS_CARD_EFFECT_MOD_COST:
      result = MechanicusMultistagePlay::modifyBuildCost(this, player, card_config, effect_config, curse_config_ptr);
      break;
    case MECHANICUS_CARD_EFFECT_MOD_REFUND:
      result = MechanicusMultistagePlay::modifyBuildRefund(this, player, card_config, effect_config, curse_config_ptr);
      break;
    case MECHANICUS_CARD_EFFECT_ADD_KILL_POINTS:
      result = MechanicusMultistagePlay::addKillPoints(this, player, card_config, effect_config, curse_config_ptr);
      break;
    case MECHANICUS_CARD_EFFECT_MOD_KILL_POINTS:
      result = MechanicusMultistagePlay::modKillPoints(this, player, card_config, effect_config, curse_config_ptr);
      break;
    case MECHANICUS_CARD_EFFECT_ADD_GEAR_NUM:
      result = MechanicusMultistagePlay::addGearNum(this, player, card_config, effect_config, curse_config_ptr);
      break;
    case MECHANICUS_CARD_EFFECT_KILL_GEARS:
      result = MechanicusMultistagePlay::killGears(this, player, card_config, effect_config, curse_config_ptr);
      break;
    case MECHANICUS_CARD_EFFECT_GRANT_POINTS:
      result = MechanicusMultistagePlay::grantPoints(this, player, card_config, effect_config, curse_config_ptr);
      break;
    case MECHANICUS_PASSIVE_AURA_SGV:
      result = MechanicusMultistagePlay::addServerGlobalValueAura(
                 this,
                 player,
                 card_config,
                 effect_config,
                 curse_config_ptr);
      break;
    default:
      result = 0;
      break;
  }
  return result;
};

// Line 1191: range 0000000016024242-00000000160244B6
// local variable allocation has failed, the output may be wrong!
bool __cdecl MechanicusMultistagePlay::isPosInAuras(
        MechanicusMultistagePlay *const this,
        const std::set<unsigned int> *aura_gadget_set,
        float aura_radius,
        const Vector3 *pos)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r12
  __m128i v7; // xmm0
  bool v8; // r14
  bool result; // al
  float aura_radiusa; // [rsp+1Ch] [rbp-F4h]
  float distance; // [rsp+34h] [rbp-DCh]
  std::vector<Vector3>::iterator __for_begin; // [rsp+38h] [rbp-D8h] BYREF
  std::vector<Vector3>::iterator __for_end; // [rsp+40h] [rbp-D0h] BYREF
  const std::set<unsigned int> *gadget_set; // [rsp+48h] [rbp-C8h]
  std::vector<Vector3> *__for_range; // [rsp+50h] [rbp-C0h]
  const Vector3 *center; // [rsp+58h] [rbp-B8h]
  std::function<ForeachPolicy(FoundationComp&)> p_func; // [rsp+60h] [rbp-B0h] BYREF
  char v19[144]; // [rsp+80h] [rbp-90h] BYREF

  aura_radiusa = aura_radius;
  v4 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 24 15 center_vec:1192";
  *(_QWORD *)(v4 + 16) = MechanicusMultistagePlay::isPosInAuras;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218103808;
  v6[536862722] = -202116109;
  std::vector<Vector3>::vector((std::vector<Vector3> *const)(v4 + 32));
  gadget_set = aura_gadget_set;
  std::function<ForeachPolicy ()(FoundationComp &)>::function<MechanicusMultistagePlay::isPosInAuras(std::set<unsigned int> const&,float,Vector3 const&)::{lambda(FoundationComp &)#1},void,void>(
    &p_func,
    (MechanicusMultistagePlay::isPosInAuras::<lambda(FoundationComp&)>)__PAIR128__(
                                                                         (unsigned __int64)aura_gadget_set,
                                                                         v4 + 32));
  MechanicusMultistagePlay::foreachFoundation(this, &p_func);
  std::function<ForeachPolicy ()(FoundationComp &)>::~function(&p_func);
  __for_range = (std::vector<Vector3> *)(v4 + 32);
  __for_begin._M_current = std::vector<Vector3>::begin((std::vector<Vector3> *const)(v4 + 32))._M_current;
  __for_end._M_current = std::vector<Vector3>::end((std::vector<Vector3> *const)(v4 + 32))._M_current;
  while ( __gnu_cxx::operator!=<Vector3 *,std::vector<Vector3>>(&__for_begin, &__for_end) )
  {
    center = __gnu_cxx::__normal_iterator<Vector3 *,std::vector<Vector3>>::operator*(&__for_begin);
    *(float *)v7.m128i_i32 = getPlaneDistance(center, pos);
    distance = COERCE_FLOAT(_mm_cvtsi128_si32(v7));
    *(_OWORD *)&aura_radius = LODWORD(aura_radiusa);
    if ( aura_radiusa >= distance )
    {
      v8 = 1;
      goto LABEL_10;
    }
    __gnu_cxx::__normal_iterator<Vector3 *,std::vector<Vector3>>::operator++(&__for_begin);
  }
  v8 = 0;
LABEL_10:
  std::vector<Vector3>::~vector((std::vector<Vector3> *const)(v4 + 32));
  result = v8;
  if ( v19 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 1194: range 000000001602406A-0000000016024240
ForeachPolicy __cdecl MechanicusMultistagePlay::isPosInAuras(std::set<unsigned int> const&,float,Vector3 const&)::{lambda(FoundationComp &)#1}::operator()(
        const MechanicusMultistagePlay::isPosInAuras::<lambda(FoundationComp&)> *const __closure,
        FoundationComp *foundation_comp)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::vector<Vector3> *center_vec; // r14
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  const Vector3 *Position; // rax
  ForeachPolicy result; // eax
  unsigned int value; // [rsp+1Ch] [rbp-74h] BYREF
  char v11[112]; // [rsp+20h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 13 gear_ptr:1196";
  *(_QWORD *)(v2 + 16) = MechanicusMultistagePlay::isPosInAuras(std::set<unsigned int> const&,float,Vector3 const&)::{lambda(FoundationComp &)#1}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  FoundationComp::getGearGadgetPtr((FoundationComp *const)(v2 + 32));
  if ( !std::operator==<Gadget>(0LL, (const std::shared_ptr<Gadget> *)(v2 + 32)) )
  {
    v5 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    value = Gadget::getGadgetId(v5);
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__gadget_set >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(
           __closure->__gadget_set,
           &value) )
    {
      if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      center_vec = __closure->__center_vec;
      v7 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      Position = Entity::getPosition((const Entity *const)v7);
      std::vector<Vector3>::push_back(center_vec, Position);
    }
  }
  std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v2 + 32));
  result = FOREACH_CONTINUE;
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1220: range 00000000160246FE-0000000016024B20
// local variable allocation has failed, the output may be wrong!
void __cdecl MechanicusMultistagePlay::getGearsInAuras(
        MechanicusMultistagePlay *const this,
        const std::set<unsigned int> *aura_gadget_set,
        float aura_radius,
        std::map<unsigned int,std::shared_ptr<Gadget>> *gadget_map)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  const std::shared_ptr<Gadget> *v7; // rax
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  const Vector3 *Position; // rax
  __m128i v10; // xmm0
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::shared_ptr<Gadget> *v12; // rax
  MechanicusMultistagePlay::getGearsInAuras::<lambda(FoundationComp&)> v13; // [rsp-20h] [rbp-1B0h]
  float aura_radiusa; // [rsp+Ch] [rbp-184h]
  std::map<unsigned int,std::shared_ptr<Gadget>>::key_type __k; // [rsp+28h] [rbp-168h] BYREF
  float distance; // [rsp+2Ch] [rbp-164h]
  std::vector<Vector3>::iterator __for_begin; // [rsp+30h] [rbp-160h] BYREF
  std::vector<Vector3>::iterator __for_end; // [rsp+38h] [rbp-158h] BYREF
  std::vector<std::shared_ptr<Gadget>>::iterator __for_begin_0; // [rsp+40h] [rbp-150h] BYREF
  std::vector<std::shared_ptr<Gadget>>::iterator __for_end_0; // [rsp+48h] [rbp-148h] BYREF
  const std::set<unsigned int> *gadget_set; // [rsp+50h] [rbp-140h]
  std::vector<Vector3> *__for_range; // [rsp+58h] [rbp-138h]
  const Vector3 *center; // [rsp+60h] [rbp-130h]
  std::vector<std::shared_ptr<Gadget>> *__for_range_0; // [rsp+68h] [rbp-128h]
  MechanicusMultistagePlay::getGearsInAuras::<lambda(FoundationComp&)> __f; // [rsp+70h] [rbp-120h]
  std::function<ForeachPolicy(FoundationComp&)> p_func; // [rsp+90h] [rbp-100h] BYREF
  char v28[224]; // [rsp+B0h] [rbp-E0h] BYREF

  aura_radiusa = aura_radius;
  v4 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(192LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 32 16 13 gear_ptr:1245 64 24 15 center_vec:1221 128 24 13 gear_vec:1222";
  *(_QWORD *)(v4 + 16) = MechanicusMultistagePlay::getGearsInAuras;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -219021312;
  v6[536862722] = -234881024;
  v6[536862723] = -218959118;
  v6[536862724] = -218103808;
  v6[536862725] = -202116109;
  std::vector<Vector3>::vector((std::vector<Vector3> *const)(v4 + 64));
  std::vector<std::shared_ptr<Gadget>>::vector((std::vector<std::shared_ptr<Gadget>> *const)(v4 + 128));
  gadget_set = aura_gadget_set;
  __f.__center_vec = (std::vector<Vector3> *)(v4 + 64);
  __f.__gear_vec = (std::vector<std::shared_ptr<Gadget>> *)(v4 + 128);
  __f.__gadget_set = aura_gadget_set;
  v13.__gadget_set = aura_gadget_set;
  v13.__gear_vec = (std::vector<std::shared_ptr<Gadget>> *)(v4 + 128);
  v13.__center_vec = (std::vector<Vector3> *)(v4 + 64);
  std::function<ForeachPolicy ()(FoundationComp &)>::function<MechanicusMultistagePlay::getGearsInAuras(std::set<unsigned int> const&,float,std::map<unsigned int,std::shared_ptr<Gadget>> &)::{lambda(FoundationComp &)#1},void,void>(
    &p_func,
    v13);
  MechanicusMultistagePlay::foreachFoundation(this, &p_func);
  std::function<ForeachPolicy ()(FoundationComp &)>::~function(&p_func);
  __for_range = (std::vector<Vector3> *)(v4 + 64);
  __for_begin._M_current = std::vector<Vector3>::begin((std::vector<Vector3> *const)(v4 + 64))._M_current;
  __for_end._M_current = std::vector<Vector3>::end((std::vector<Vector3> *const)(v4 + 64))._M_current;
  while ( __gnu_cxx::operator!=<Vector3 *,std::vector<Vector3>>(&__for_begin, &__for_end) )
  {
    center = __gnu_cxx::__normal_iterator<Vector3 *,std::vector<Vector3>>::operator*(&__for_begin);
    __for_range_0 = (std::vector<std::shared_ptr<Gadget>> *)(v4 + 128);
    __for_begin_0._M_current = std::vector<std::shared_ptr<Gadget>>::begin((std::vector<std::shared_ptr<Gadget>> *const)(v4 + 128))._M_current;
    __for_end_0._M_current = std::vector<std::shared_ptr<Gadget>>::end(__for_range_0)._M_current;
    while ( __gnu_cxx::operator!=<std::shared_ptr<Gadget> *,std::vector<std::shared_ptr<Gadget>>>(
              &__for_begin_0,
              &__for_end_0) )
    {
      v7 = __gnu_cxx::__normal_iterator<std::shared_ptr<Gadget> *,std::vector<std::shared_ptr<Gadget>>>::operator*(&__for_begin_0);
      std::shared_ptr<Gadget>::shared_ptr((std::shared_ptr<Gadget> *const)(v4 + 32), v7);
      if ( !std::operator==<Gadget>(0LL, (const std::shared_ptr<Gadget> *)(v4 + 32)) )
      {
        v8 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
        Position = Entity::getPosition((const Entity *const)v8);
        *(float *)v10.m128i_i32 = getPlaneDistance(center, Position);
        distance = COERCE_FLOAT(_mm_cvtsi128_si32(v10));
        *(_OWORD *)&aura_radius = LODWORD(aura_radiusa);
        if ( aura_radiusa >= distance )
        {
          v11 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
          __k = Entity::getEntityId((const Entity *const)v11);
          v12 = std::map<unsigned int,std::shared_ptr<Gadget>>::operator[](gadget_map, &__k);
          std::shared_ptr<Gadget>::operator=(v12, (const std::shared_ptr<Gadget> *)(v4 + 32));
        }
      }
      std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v4 + 32));
      __gnu_cxx::__normal_iterator<std::shared_ptr<Gadget> *,std::vector<std::shared_ptr<Gadget>>>::operator++(&__for_begin_0);
    }
    __gnu_cxx::__normal_iterator<Vector3 *,std::vector<Vector3>>::operator++(&__for_begin);
  }
  std::vector<std::shared_ptr<Gadget>>::~vector((std::vector<std::shared_ptr<Gadget>> *const)(v4 + 128));
  std::vector<Vector3>::~vector((std::vector<Vector3> *const)(v4 + 64));
  if ( v28 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1224: range 00000000160244B8-00000000160246FD
ForeachPolicy __cdecl MechanicusMultistagePlay::getGearsInAuras(std::set<unsigned int> const&,float,std::map<unsigned int,std::shared_ptr<Gadget>> &)::{lambda(FoundationComp &)#1}::operator()(
        const MechanicusMultistagePlay::getGearsInAuras::<lambda(FoundationComp&)> *const __closure,
        FoundationComp *foundation_comp)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::vector<Vector3> *center_vec; // r14
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  const Vector3 *Position; // rax
  ForeachPolicy result; // eax
  char v10[144]; // [rsp+10h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 14 gadget_id:1231 64 16 13 gear_ptr:1226";
  *(_QWORD *)(v2 + 16) = MechanicusMultistagePlay::getGearsInAuras(std::set<unsigned int> const&,float,std::map<unsigned int,std::shared_ptr<Gadget>> &)::{lambda(FoundationComp &)#1}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  FoundationComp::getGearGadgetPtr((FoundationComp *const)(v2 + 64));
  if ( !std::operator==<Gadget>(0LL, (const std::shared_ptr<Gadget> *)(v2 + 64)) )
  {
    v5 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    *(_DWORD *)(v2 + 48) = Gadget::getGadgetId(v5);
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__gadget_set >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( !common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(
            __closure->__gadget_set,
            (const unsigned int *)(v2 + 48)) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&__closure->__gear_vec >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      std::vector<std::shared_ptr<Gadget>>::push_back(
        __closure->__gear_vec,
        (const std::vector<std::shared_ptr<Gadget>>::value_type *)(v2 + 64));
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      center_vec = __closure->__center_vec;
      v7 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      Position = Entity::getPosition((const Entity *const)v7);
      std::vector<Vector3>::push_back(center_vec, Position);
    }
  }
  std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v2 + 64));
  result = FOREACH_CONTINUE;
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 1262: range 0000000016024DA2-0000000016025246
// local variable allocation has failed, the output may be wrong!
void __cdecl MechanicusMultistagePlay::getGearsInSpecificGadgetAura(
        MechanicusMultistagePlay *const this,
        Gadget *target_gadget,
        const std::set<unsigned int> *aura_gadget_set,
        float aura_radius,
        std::map<unsigned int,std::shared_ptr<Gadget>> *gadget_map)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  const std::shared_ptr<Gadget> *v8; // rax
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  const Vector3 *Position; // r14
  const Vector3 *v11; // rax
  __m128i v12; // xmm0
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  const Vector3 *v14; // rax
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  std::shared_ptr<Gadget> *v16; // rax
  MechanicusMultistagePlay::getGearsInSpecificGadgetAura::<lambda(FoundationComp&)> v17; // [rsp-20h] [rbp-1D0h]
  float aura_radiusa; // [rsp+14h] [rbp-19Ch]
  bool is_in_other; // [rsp+37h] [rbp-179h]
  std::map<unsigned int,std::shared_ptr<Gadget>>::key_type __k; // [rsp+38h] [rbp-178h] BYREF
  float distance; // [rsp+3Ch] [rbp-174h]
  std::vector<std::shared_ptr<Gadget>>::iterator __for_begin; // [rsp+40h] [rbp-170h] BYREF
  std::vector<std::shared_ptr<Gadget>>::iterator __for_end; // [rsp+48h] [rbp-168h] BYREF
  std::vector<Vector3>::iterator __for_begin_0; // [rsp+50h] [rbp-160h] BYREF
  std::vector<Vector3>::iterator __for_end_0; // [rsp+58h] [rbp-158h] BYREF
  const std::set<unsigned int> *gadget_set; // [rsp+60h] [rbp-150h]
  std::vector<std::shared_ptr<Gadget>> *__for_range; // [rsp+68h] [rbp-148h]
  std::vector<Vector3> *__for_range_0; // [rsp+70h] [rbp-140h]
  const Vector3 *center; // [rsp+78h] [rbp-138h]
  std::function<ForeachPolicy(FoundationComp&)> p_func; // [rsp+80h] [rbp-130h] BYREF
  MechanicusMultistagePlay::getGearsInSpecificGadgetAura::<lambda(FoundationComp&)> __f; // [rsp+A0h] [rbp-110h]
  char v34[240]; // [rsp+C0h] [rbp-F0h] BYREF

  aura_radiusa = aura_radius;
  v5 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(192LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "3 32 16 13 gear_ptr:1287 64 24 15 center_vec:1263 128 24 13 gear_vec:1264";
  *(_QWORD *)(v5 + 16) = MechanicusMultistagePlay::getGearsInSpecificGadgetAura;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -219021312;
  v7[536862722] = -234881024;
  v7[536862723] = -218959118;
  v7[536862724] = -218103808;
  v7[536862725] = -202116109;
  std::vector<Vector3>::vector((std::vector<Vector3> *const)(v5 + 64));
  std::vector<std::shared_ptr<Gadget>>::vector((std::vector<std::shared_ptr<Gadget>> *const)(v5 + 128));
  gadget_set = aura_gadget_set;
  __f.__center_vec = (std::vector<Vector3> *)(v5 + 64);
  __f.__gear_vec = (std::vector<std::shared_ptr<Gadget>> *)(v5 + 128);
  __f.__gadget_set = aura_gadget_set;
  __f.__target_gadget = target_gadget;
  v17.__target_gadget = target_gadget;
  v17.__gadget_set = aura_gadget_set;
  v17.__gear_vec = (std::vector<std::shared_ptr<Gadget>> *)(v5 + 128);
  v17.__center_vec = (std::vector<Vector3> *)(v5 + 64);
  std::function<ForeachPolicy ()(FoundationComp &)>::function<MechanicusMultistagePlay::getGearsInSpecificGadgetAura(Gadget &,std::set<unsigned int> const&,float,std::map<unsigned int,std::shared_ptr<Gadget>> &)::{lambda(FoundationComp &)#1},void,void>(
    &p_func,
    v17);
  MechanicusMultistagePlay::foreachFoundation(this, &p_func);
  std::function<ForeachPolicy ()(FoundationComp &)>::~function(&p_func);
  __for_range = (std::vector<std::shared_ptr<Gadget>> *)(v5 + 128);
  __for_begin._M_current = std::vector<std::shared_ptr<Gadget>>::begin((std::vector<std::shared_ptr<Gadget>> *const)(v5 + 128))._M_current;
  __for_end._M_current = std::vector<std::shared_ptr<Gadget>>::end((std::vector<std::shared_ptr<Gadget>> *const)(v5 + 128))._M_current;
  while ( __gnu_cxx::operator!=<std::shared_ptr<Gadget> *,std::vector<std::shared_ptr<Gadget>>>(
            &__for_begin,
            &__for_end) )
  {
    v8 = __gnu_cxx::__normal_iterator<std::shared_ptr<Gadget> *,std::vector<std::shared_ptr<Gadget>>>::operator*(&__for_begin);
    std::shared_ptr<Gadget>::shared_ptr((std::shared_ptr<Gadget> *const)(v5 + 32), v8);
    if ( !std::operator==<Gadget>(0LL, (const std::shared_ptr<Gadget> *)(v5 + 32)) )
    {
      v9 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 32));
      Position = Entity::getPosition((const Entity *const)v9);
      v11 = Entity::getPosition((const Entity *const)target_gadget);
      *(float *)v12.m128i_i32 = getPlaneDistance(v11, Position);
      distance = COERCE_FLOAT(_mm_cvtsi128_si32(v12));
      *(_OWORD *)&aura_radius = LODWORD(distance);
      if ( distance <= aura_radiusa )
      {
        is_in_other = 0;
        __for_range_0 = (std::vector<Vector3> *)(v5 + 64);
        __for_begin_0._M_current = std::vector<Vector3>::begin((std::vector<Vector3> *const)(v5 + 64))._M_current;
        __for_end_0._M_current = std::vector<Vector3>::end(__for_range_0)._M_current;
        while ( __gnu_cxx::operator!=<Vector3 *,std::vector<Vector3>>(&__for_begin_0, &__for_end_0) )
        {
          center = __gnu_cxx::__normal_iterator<Vector3 *,std::vector<Vector3>>::operator*(&__for_begin_0);
          v13 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 32));
          v14 = Entity::getPosition((const Entity *const)v13);
          if ( aura_radiusa >= getPlaneDistance(center, v14) )
          {
            is_in_other = 1;
            break;
          }
          __gnu_cxx::__normal_iterator<Vector3 *,std::vector<Vector3>>::operator++(&__for_begin_0);
        }
        if ( !is_in_other )
        {
          v15 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 32));
          __k = Entity::getEntityId((const Entity *const)v15);
          v16 = std::map<unsigned int,std::shared_ptr<Gadget>>::operator[](gadget_map, &__k);
          std::shared_ptr<Gadget>::operator=(v16, (const std::shared_ptr<Gadget> *)(v5 + 32));
        }
      }
    }
    std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v5 + 32));
    __gnu_cxx::__normal_iterator<std::shared_ptr<Gadget> *,std::vector<std::shared_ptr<Gadget>>>::operator++(&__for_begin);
  }
  std::vector<std::shared_ptr<Gadget>>::~vector((std::vector<std::shared_ptr<Gadget>> *const)(v5 + 128));
  std::vector<Vector3>::~vector((std::vector<Vector3> *const)(v5 + 64));
  if ( v34 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1266: range 0000000016024B22-0000000016024DA0
ForeachPolicy __cdecl MechanicusMultistagePlay::getGearsInSpecificGadgetAura(Gadget &,std::set<unsigned int> const&,float,std::map<unsigned int,std::shared_ptr<Gadget>> &)::{lambda(FoundationComp &)#1}::operator()(
        const MechanicusMultistagePlay::getGearsInSpecificGadgetAura::<lambda(FoundationComp&)> *const __closure,
        FoundationComp *foundation_comp)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  uint32_t EntityId; // r14d
  std::vector<Vector3> *center_vec; // r14
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  const Vector3 *Position; // rax
  ForeachPolicy result; // eax
  unsigned int value; // [rsp+1Ch] [rbp-74h] BYREF
  char v13[112]; // [rsp+20h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 13 gear_ptr:1268";
  *(_QWORD *)(v2 + 16) = MechanicusMultistagePlay::getGearsInSpecificGadgetAura(Gadget &,std::set<unsigned int> const&,float,std::map<unsigned int,std::shared_ptr<Gadget>> &)::{lambda(FoundationComp &)#1}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  FoundationComp::getGearGadgetPtr((FoundationComp *const)(v2 + 32));
  if ( !std::operator==<Gadget>(0LL, (const std::shared_ptr<Gadget> *)(v2 + 32)) )
  {
    v5 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    value = Gadget::getGadgetId(v5);
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__gadget_set >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( !common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(
            __closure->__gadget_set,
            &value) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&__closure->__gear_vec >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      std::vector<std::shared_ptr<Gadget>>::push_back(
        __closure->__gear_vec,
        (const std::vector<std::shared_ptr<Gadget>>::value_type *)(v2 + 32));
    }
    else
    {
      v6 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      EntityId = Entity::getEntityId((const Entity *const)v6);
      if ( *(_BYTE *)(((unsigned __int64)&__closure->__target_gadget >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      if ( EntityId != Entity::getEntityId((const Entity *const)__closure->__target_gadget) )
      {
        if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        center_vec = __closure->__center_vec;
        v9 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
        Position = Entity::getPosition((const Entity *const)v9);
        std::vector<Vector3>::push_back(center_vec, Position);
      }
    }
  }
  std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v2 + 32));
  result = FOREACH_CONTINUE;
  if ( v13 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1316: range 0000000016025248-0000000016025D91
int32_t __cdecl MechanicusMultistagePlay::addServerGlobalValueAura(
        MechanicusMultistagePlay *const this,
        Player *player,
        const data::MechanicusCardExcelConfig *card_config,
        const data::MechanicusCardEffectExcelConfig *effect_config,
        const data::MechanicusCardCurseExcelConfig *curse_config_ptr)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  int32_t v8; // r14d
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rdx
  char *v14; // rsi
  uint32_t v15; // ecx
  char v16; // al
  uint32_t v17; // ecx
  char v18; // dl
  bool v19; // dl
  float effect_param1; // xmm0_4
  float effect_param2; // xmm0_4
  std::set<unsigned int>::iterator v22; // rax
  std::insert_iterator<std::set<unsigned int> > v23; // rax
  std::set<unsigned int> *container; // r14
  const std::_Rb_tree_node_base *M_node; // r15
  std::vector<unsigned int>::const_iterator v26; // rax
  std::insert_iterator<std::set<unsigned int> > v27; // rdx
  __int64 v28; // rsi
  uint32_t current_round; // ecx
  char v30; // dl
  bool v31; // dl
  uint32_t v32; // ecx
  char v33; // al
  const std::pair<unsigned int const,std::shared_ptr<Gadget> > *v34; // rax
  Creature *p_value; // rdi
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // r14
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v47; // rax
  int32_t result; // eax
  const unsigned int *__last; // [rsp+10h] [rbp-1C0h]
  uint32_t last_round; // [rsp+44h] [rbp-18Ch]
  std::map<unsigned int,std::shared_ptr<Gadget>>::iterator __for_begin; // [rsp+48h] [rbp-188h] BYREF
  std::map<unsigned int,std::shared_ptr<Gadget>>::iterator __for_end; // [rsp+50h] [rbp-180h] BYREF
  const std::vector<unsigned int> *gadget_vec; // [rsp+58h] [rbp-178h]
  MechanicusMultistagePlay::ServerGlobalValueEffectInfo *effect_info; // [rsp+60h] [rbp-170h]
  std::map<unsigned int,std::shared_ptr<Gadget>> *__for_range; // [rsp+68h] [rbp-168h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<Gadget> > >::type *_; // [rsp+70h] [rbp-160h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<Gadget> > >::type *gear_ptr; // [rsp+78h] [rbp-158h]
  std::pair<unsigned int const,std::shared_ptr<Gadget> > __in; // [rsp+80h] [rbp-150h] BYREF
  common::milog::MiLogStream v62; // [rsp+A0h] [rbp-130h] BYREF
  char v63[272]; // [rsp+C0h] [rbp-110h] BYREF

  v5 = (unsigned __int64)v63;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(224LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "6 32 4 12 card_id:1327 48 4 14 effect_id:1328 64 4 8 ret:1365 80 8 9 iter:1331 112 8 8 key:1329 "
                        "144 48 22 target_gadget_map:1357";
  *(_QWORD *)(v5 + 16) = MechanicusMultistagePlay::addServerGlobalValueAura;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556924;
  v7[536862722] = 61956;
  v7[536862722] = -234881024;
  v7[536862723] = 62194;
  v7[536862723] = -234881024;
  v7[536862724] = 62194;
  v7[536862726] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&effect_config->target_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)effect_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&effect_config->target_type >> 3)
                                                                 + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( effect_config->target_type == MECHANICUS_CARD_TARGET_GADGETS )
  {
    gadget_vec = &effect_config->target_param_list;
    if ( std::vector<unsigned int>::size(&effect_config->target_param_list) == 1 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&card_config->id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&card_config->id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v5 + 32) = card_config->id;
      if ( *(_BYTE *)(((unsigned __int64)&effect_config->id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&effect_config->id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v5 + 48) = effect_config->id;
      *(std::pair<unsigned int,unsigned int> *)(v5 + 112) = std::make_pair<unsigned int &,unsigned int &>(
                                                              (unsigned int *)(v5 + 32),
                                                              (unsigned int *)(v5 + 48));
      *(std::map<std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ServerGlobalValueEffectInfo>::iterator *)(v5 + 80) = std::map<std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ServerGlobalValueEffectInfo>::find(&this->sgv_aura_map_, (const std::map<std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ServerGlobalValueEffectInfo>::key_type *)(v5 + 112));
      __for_end._M_node = std::map<std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ServerGlobalValueEffectInfo>::end(&this->sgv_aura_map_)._M_node;
      if ( std::operator!=(
             (const std::_Rb_tree_iterator<std::pair<const std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ServerGlobalValueEffectInfo> >::_Self *)(v5 + 80),
             (const std::_Rb_tree_iterator<std::pair<const std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ServerGlobalValueEffectInfo> >::_Self *)&__for_end) )
      {
        common::milog::MiLogStream::create(
          &v62,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_multistage_play_impl/mechanicus_multistage_play.cpp",
          "addServerGlobalValueAura",
          1334);
        v9 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
               &v62,
               (const char (*)[31])"[MEHCANICUS] duplicate card_id");
        v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v9,
                (const unsigned int *)(v5 + 32));
        v11 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v10, (const char (*)[9])" effect:");
        v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v11,
                (const unsigned int *)(v5 + 48));
        v13 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v12, (const char (*)[9])" player:");
        operator<<(v13, player);
        common::milog::MiLogStream::~MiLogStream(&v62);
        v8 = -1;
      }
      else
      {
        v14 = (char *)(v5 + 112);
        effect_info = std::map<std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ServerGlobalValueEffectInfo>::operator[](
                        &this->sgv_aura_map_,
                        (const std::map<std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ServerGlobalValueEffectInfo>::key_type *)(v5 + 112));
        v15 = *(_DWORD *)(v5 + 32);
        v16 = *(_BYTE *)(((unsigned __int64)effect_info >> 3) + 0x7FFF8000);
        if ( v16 != 0 && v16 <= 3 )
        {
          LOBYTE(v14) = v16 != 0;
          __asan_report_store4(effect_info, v14, (_BYTE)effect_info);
        }
        effect_info->card_id = v15;
        v17 = *(_DWORD *)(v5 + 48);
        v18 = *(_BYTE *)(((unsigned __int64)&effect_info->effect_id >> 3) + 0x7FFF8000);
        LOBYTE(v14) = v18 != 0;
        v19 = v18 != 0 && (char)((((_BYTE)effect_info + 4) & 7) + 3) >= v18;
        if ( v19 )
          __asan_report_store4(&effect_info->effect_id, v14, v19);
        effect_info->effect_id = v17;
        std::string::operator=(&effect_info->key, &effect_config->effect_str_param);
        if ( *(_BYTE *)(((unsigned __int64)&effect_config->effect_param1 >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&effect_config->effect_param1 >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        effect_param1 = (float)effect_config->effect_param1;
        if ( *(_BYTE *)(((unsigned __int64)&effect_info->value >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&effect_info->value >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_store4(&effect_info->value, &effect_config->effect_str_param, (_BYTE)effect_info + 40);
        }
        effect_info->value = effect_param1;
        if ( *(_BYTE *)(((unsigned __int64)&effect_config->effect_param2 >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)effect_config + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&effect_config->effect_param2 >> 3)
                                                                       + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        effect_param2 = (float)effect_config->effect_param2;
        if ( *(_BYTE *)(((unsigned __int64)&effect_info->aura_radius >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&effect_info->aura_radius >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_store4(
            &effect_info->aura_radius,
            (((_BYTE)effect_config + 84) & 7u) + 3,
            (_BYTE)effect_info + 104);
        }
        effect_info->aura_radius = effect_param2;
        v22._M_node = std::set<unsigned int>::end(&effect_info->target_gadget_set)._M_node;
        v23 = std::inserter<std::set<unsigned int>,std::_Rb_tree_const_iterator<unsigned int>>(
                &effect_info->target_gadget_set,
                v22);
        container = v23.container;
        M_node = v23.iter._M_node;
        __last = std::vector<unsigned int>::end(gadget_vec)._M_current;
        v26._M_current = std::vector<unsigned int>::begin(gadget_vec)._M_current;
        v27.container = container;
        v27.iter._M_node = M_node;
        std::copy<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>,std::insert_iterator<std::set<unsigned int>>>(
          v26,
          (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)__last,
          v27);
        if ( *(_BYTE *)(((unsigned __int64)&card_config->last_round >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&card_config->last_round >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        last_round = card_config->last_round;
        if ( curse_config_ptr )
        {
          if ( *(_BYTE *)(((unsigned __int64)&curse_config_ptr->last_round >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&curse_config_ptr->last_round >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          last_round = curse_config_ptr->last_round;
        }
        v28 = (((_BYTE)this + 100) & 7u) + 3;
        if ( *(_BYTE *)(((unsigned __int64)&this->current_round_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->current_round_ >> 3)
                                                               + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        current_round = this->current_round_;
        v30 = *(_BYTE *)(((unsigned __int64)&effect_info->begin_round >> 3) + 0x7FFF8000);
        LOBYTE(v28) = v30 != 0;
        v31 = v30 != 0 && (char)((((_BYTE)effect_info + 44) & 7) + 3) >= v30;
        if ( v31 )
          __asan_report_store4(&effect_info->begin_round, v28, v31);
        effect_info->begin_round = current_round;
        if ( last_round )
        {
          v32 = this->current_round_ + last_round - 1;
          v33 = *(_BYTE *)(((unsigned __int64)&effect_info->end_round >> 3) + 0x7FFF8000);
          if ( v33 != 0 && v33 <= 3 )
          {
            LOBYTE(v28) = v33 != 0;
            __asan_report_store4(&effect_info->end_round, v28, (_BYTE)effect_info + 48);
          }
          effect_info->end_round = v32;
        }
        std::map<unsigned int,std::shared_ptr<Gadget>>::map((std::map<unsigned int,std::shared_ptr<Gadget>> *const)(v5 + 144));
        if ( *(_BYTE *)(((unsigned __int64)&effect_info->aura_radius >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&effect_info->aura_radius >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        MechanicusMultistagePlay::getGearsInAuras(
          this,
          &effect_info->target_gadget_set,
          effect_info->aura_radius,
          (std::map<unsigned int,std::shared_ptr<Gadget>> *)(v5 + 144));
        __for_range = (std::map<unsigned int,std::shared_ptr<Gadget>> *)(v5 + 144);
        __for_begin._M_node = std::map<unsigned int,std::shared_ptr<Gadget>>::begin((std::map<unsigned int,std::shared_ptr<Gadget>> *const)(v5 + 144))._M_node;
        __for_end._M_node = std::map<unsigned int,std::shared_ptr<Gadget>>::end(__for_range)._M_node;
        while ( std::operator!=(&__for_begin, &__for_end) )
        {
          v34 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Gadget>>>::operator*(&__for_begin);
          std::pair<unsigned int const,std::shared_ptr<Gadget>>::pair(&__in, v34);
          _ = std::get<0ul,unsigned int const,std::shared_ptr<Gadget>>(&__in);
          gear_ptr = std::get<1ul,unsigned int const,std::shared_ptr<Gadget>>(&__in);
          if ( !std::operator==<Gadget>(0LL, gear_ptr) )
          {
            p_value = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)gear_ptr);
            if ( *(_BYTE *)(((unsigned __int64)&effect_info->value >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&effect_info->value >> 3) + 0x7FFF8000) <= 3 )
            {
              p_value = (Creature *)&effect_info->value;
              __asan_report_load4();
            }
            *(_DWORD *)(v5 + 64) = Creature::setServerGlobalValue(p_value, &effect_info->key, effect_info->value, 1);
            common::milog::MiLogStream::create(
              &v62,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/scene/scene_multistage_play_impl/mechanicus_multistage_play.cpp",
              "addServerGlobalValueAura",
              1366);
            v36 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                    &v62,
                    (const char (*)[28])"[FOUNDATION] aura set SGV [");
            v37 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v36, &effect_info->key);
            v38 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v37, (const char (*)[3])": ");
            v39 = common::milog::MiLogStream::operator<<<float,(float *)0>(v38, &effect_info->value);
            v40 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v39, (const char (*)[9])"] @card:");
            v41 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v40,
                    (const unsigned int *)(v5 + 32));
            v42 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                    v41,
                    (const char (*)[12])" effect_id:");
            v43 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v42,
                    (const unsigned int *)(v5 + 48));
            v44 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v43, (const char (*)[6])" ret:");
            v45 = common::milog::MiLogStream::operator<<<int,(int *)0>(v44, (const int *)(v5 + 64));
            v46 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v45, (const char (*)[9])" gadget:");
            v47 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)gear_ptr);
            common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v46, v47);
            common::milog::MiLogStream::~MiLogStream(&v62);
          }
          std::pair<unsigned int const,std::shared_ptr<Gadget>>::~pair(&__in);
          std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Gadget>>>::operator++(&__for_begin);
        }
        v8 = 0;
        std::map<unsigned int,std::shared_ptr<Gadget>>::~map((std::map<unsigned int,std::shared_ptr<Gadget>> *const)(v5 + 144));
      }
    }
    else
    {
      v8 = -1;
    }
  }
  else
  {
    v8 = -1;
  }
  result = v8;
  if ( v63 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 1375: range 0000000016025D92-0000000016026429
int32_t __cdecl MechanicusMultistagePlay::setServerGlobalValue(
        MechanicusMultistagePlay *const this,
        Player *player,
        const data::MechanicusCardExcelConfig *card_config,
        const data::MechanicusCardEffectExcelConfig *effect_config,
        const data::MechanicusCardCurseExcelConfig *curse_config_ptr)
{
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  _DWORD *v7; // r13
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rdx
  int32_t result; // eax
  char *v14; // rsi
  uint32_t v15; // ecx
  char v16; // al
  uint32_t v17; // ecx
  char v18; // dl
  bool v19; // dl
  float effect_param1; // xmm0_4
  std::set<unsigned int>::iterator v21; // rax
  std::insert_iterator<std::set<unsigned int> > v22; // rax
  std::set<unsigned int> *container; // r14
  const std::_Rb_tree_node_base *M_node; // r15
  const unsigned int *M_current; // rbx
  std::vector<unsigned int>::const_iterator v26; // rax
  std::insert_iterator<std::set<unsigned int> > v27; // rdx
  __int64 v28; // rsi
  uint32_t current_round; // ecx
  char v30; // dl
  bool v31; // dl
  uint32_t v32; // ecx
  char v33; // al
  uint32_t last_round; // [rsp+34h] [rbp-ECh]
  std::_Rb_tree_iterator<std::pair<const std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ServerGlobalValueEffectInfo> >::_Self __y; // [rsp+38h] [rbp-E8h] BYREF
  MechanicusMultistagePlay::ServerGlobalValueEffectInfo *effect_info; // [rsp+40h] [rbp-E0h]
  const std::vector<unsigned int> *gadget_vec; // [rsp+48h] [rbp-D8h]
  common::milog::MiLogStream v41; // [rsp+50h] [rbp-D0h] BYREF
  char v42[176]; // [rsp+70h] [rbp-B0h] BYREF

  v5 = (unsigned __int64)v42;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(128LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "4 32 4 12 card_id:1376 48 4 14 effect_id:1377 64 8 9 iter:1380 96 8 8 key:1378";
  *(_QWORD *)(v5 + 16) = MechanicusMultistagePlay::setServerGlobalValue;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556924;
  v7[536862722] = -218959360;
  v7[536862723] = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&card_config->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&card_config->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  *(_DWORD *)(v5 + 32) = card_config->id;
  if ( *(_BYTE *)(((unsigned __int64)&effect_config->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&effect_config->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  *(_DWORD *)(v5 + 48) = effect_config->id;
  *(std::pair<unsigned int,unsigned int> *)(v5 + 96) = std::make_pair<unsigned int &,unsigned int &>(
                                                         (unsigned int *)(v5 + 32),
                                                         (unsigned int *)(v5 + 48));
  *(std::map<std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ServerGlobalValueEffectInfo>::iterator *)(v5 + 64) = std::map<std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ServerGlobalValueEffectInfo>::find(&this->sgv_effect_map_, (const std::map<std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ServerGlobalValueEffectInfo>::key_type *)(v5 + 96));
  __y._M_node = std::map<std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ServerGlobalValueEffectInfo>::end(&this->sgv_effect_map_)._M_node;
  if ( std::operator!=(
         (const std::_Rb_tree_iterator<std::pair<const std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ServerGlobalValueEffectInfo> >::_Self *)(v5 + 64),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v41,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_multistage_play_impl/mechanicus_multistage_play.cpp",
      "setServerGlobalValue",
      1383);
    v8 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
           &v41,
           (const char (*)[31])"[MEHCANICUS] duplicate card_id");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v5 + 32));
    v10 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v9, (const char (*)[9])" effect:");
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v5 + 48));
    v12 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v11, (const char (*)[9])" player:");
    operator<<(v12, player);
    common::milog::MiLogStream::~MiLogStream(&v41);
    result = -1;
  }
  else
  {
    v14 = (char *)(v5 + 96);
    effect_info = std::map<std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ServerGlobalValueEffectInfo>::operator[](
                    &this->sgv_effect_map_,
                    (const std::map<std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ServerGlobalValueEffectInfo>::key_type *)(v5 + 96));
    v15 = *(_DWORD *)(v5 + 32);
    v16 = *(_BYTE *)(((unsigned __int64)effect_info >> 3) + 0x7FFF8000);
    if ( v16 != 0 && v16 <= 3 )
    {
      LOBYTE(v14) = v16 != 0;
      __asan_report_store4(effect_info, v14, (_BYTE)effect_info);
    }
    effect_info->card_id = v15;
    v17 = *(_DWORD *)(v5 + 48);
    v18 = *(_BYTE *)(((unsigned __int64)&effect_info->effect_id >> 3) + 0x7FFF8000);
    LOBYTE(v14) = v18 != 0;
    v19 = v18 != 0 && (char)((((_BYTE)effect_info + 4) & 7) + 3) >= v18;
    if ( v19 )
      __asan_report_store4(&effect_info->effect_id, v14, v19);
    effect_info->effect_id = v17;
    std::string::operator=(&effect_info->key, &effect_config->effect_str_param);
    if ( *(_BYTE *)(((unsigned __int64)&effect_config->effect_param1 >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&effect_config->effect_param1 >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    effect_param1 = (float)effect_config->effect_param1;
    if ( *(_BYTE *)(((unsigned __int64)&effect_info->value >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&effect_info->value >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&effect_info->value, &effect_config->effect_str_param, (_BYTE)effect_info + 40);
    }
    effect_info->value = effect_param1;
    if ( *(_BYTE *)(((unsigned __int64)&effect_config->target_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)effect_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&effect_config->target_type >> 3)
                                                                   + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( effect_config->target_type == MECHANICUS_CARD_TARGET_GADGETS )
    {
      gadget_vec = &effect_config->target_param_list;
      v21._M_node = std::set<unsigned int>::end(&effect_info->target_gadget_set)._M_node;
      v22 = std::inserter<std::set<unsigned int>,std::_Rb_tree_const_iterator<unsigned int>>(
              &effect_info->target_gadget_set,
              v21);
      container = v22.container;
      M_node = v22.iter._M_node;
      M_current = std::vector<unsigned int>::end(gadget_vec)._M_current;
      v26._M_current = std::vector<unsigned int>::begin(gadget_vec)._M_current;
      v27.container = container;
      v27.iter._M_node = M_node;
      std::copy<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>,std::insert_iterator<std::set<unsigned int>>>(
        v26,
        (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current,
        v27);
    }
    if ( *(_BYTE *)(((unsigned __int64)&card_config->last_round >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&card_config->last_round >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    last_round = card_config->last_round;
    if ( curse_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&curse_config_ptr->last_round >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&curse_config_ptr->last_round >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      last_round = curse_config_ptr->last_round;
    }
    v28 = (((_BYTE)this + 100) & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)&this->current_round_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->current_round_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    current_round = this->current_round_;
    v30 = *(_BYTE *)(((unsigned __int64)&effect_info->begin_round >> 3) + 0x7FFF8000);
    LOBYTE(v28) = v30 != 0;
    v31 = v30 != 0 && (char)((((_BYTE)effect_info + 44) & 7) + 3) >= v30;
    if ( v31 )
      __asan_report_store4(&effect_info->begin_round, v28, v31);
    effect_info->begin_round = current_round;
    if ( last_round )
    {
      v32 = this->current_round_ + last_round - 1;
      v33 = *(_BYTE *)(((unsigned __int64)&effect_info->end_round >> 3) + 0x7FFF8000);
      if ( v33 != 0 && v33 <= 3 )
      {
        LOBYTE(v28) = v33 != 0;
        __asan_report_store4(&effect_info->end_round, v28, (_BYTE)effect_info + 48);
      }
      effect_info->end_round = v32;
    }
    result = 0;
  }
  if ( v42 == (char *)v5 )
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
  return result;
};

// Line 1415: range 000000001602642A-0000000016026AAA
int32_t __cdecl MechanicusMultistagePlay::modifyBuildCost(
        MechanicusMultistagePlay *const this,
        Player *player,
        const data::MechanicusCardExcelConfig *card_config,
        const data::MechanicusCardEffectExcelConfig *effect_config,
        const data::MechanicusCardCurseExcelConfig *curse_config_ptr)
{
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  _DWORD *v7; // r13
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rdx
  int32_t result; // eax
  char *v14; // rsi
  uint32_t v15; // ecx
  char v16; // al
  uint32_t v17; // ecx
  char v18; // dl
  bool v19; // dl
  int32_t effect_param1; // ecx
  char v21; // al
  std::set<unsigned int>::iterator v22; // rax
  std::insert_iterator<std::set<unsigned int> > v23; // rax
  std::set<unsigned int> *container; // r14
  const std::_Rb_tree_node_base *M_node; // r15
  const unsigned int *M_current; // rbx
  std::vector<unsigned int>::const_iterator v27; // rax
  std::insert_iterator<std::set<unsigned int> > v28; // rdx
  __int64 v29; // rsi
  uint32_t current_round; // ecx
  char v31; // al
  uint32_t v32; // ecx
  char v33; // dl
  bool v34; // dl
  uint32_t last_round; // [rsp+34h] [rbp-ECh]
  std::_Rb_tree_iterator<std::pair<const std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ModifierEffectInfo> >::_Self __y; // [rsp+38h] [rbp-E8h] BYREF
  MechanicusMultistagePlay::ModifierEffectInfo *effect_info; // [rsp+40h] [rbp-E0h]
  const std::vector<unsigned int> *gadget_vec; // [rsp+48h] [rbp-D8h]
  common::milog::MiLogStream v42; // [rsp+50h] [rbp-D0h] BYREF
  char v43[176]; // [rsp+70h] [rbp-B0h] BYREF

  v5 = (unsigned __int64)v43;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(128LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "4 32 4 12 card_id:1416 48 4 14 effect_id:1417 64 8 9 iter:1420 96 8 8 key:1418";
  *(_QWORD *)(v5 + 16) = MechanicusMultistagePlay::modifyBuildCost;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556924;
  v7[536862722] = -218959360;
  v7[536862723] = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&card_config->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&card_config->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  *(_DWORD *)(v5 + 32) = card_config->id;
  if ( *(_BYTE *)(((unsigned __int64)&effect_config->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&effect_config->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  *(_DWORD *)(v5 + 48) = effect_config->id;
  *(std::pair<unsigned int,unsigned int> *)(v5 + 96) = std::make_pair<unsigned int &,unsigned int &>(
                                                         (unsigned int *)(v5 + 32),
                                                         (unsigned int *)(v5 + 48));
  *(std::map<std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ModifierEffectInfo>::iterator *)(v5 + 64) = std::map<std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ModifierEffectInfo>::find(&this->cost_modifier_map_, (const std::map<std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ModifierEffectInfo>::key_type *)(v5 + 96));
  __y._M_node = std::map<std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ModifierEffectInfo>::end(&this->cost_modifier_map_)._M_node;
  if ( std::operator!=(
         (const std::_Rb_tree_iterator<std::pair<const std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ModifierEffectInfo> >::_Self *)(v5 + 64),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v42,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_multistage_play_impl/mechanicus_multistage_play.cpp",
      "modifyBuildCost",
      1423);
    v8 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
           &v42,
           (const char (*)[31])"[MEHCANICUS] duplicate card_id");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v5 + 32));
    v10 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v9, (const char (*)[9])" effect:");
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v5 + 48));
    v12 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v11, (const char (*)[9])" player:");
    operator<<(v12, player);
    common::milog::MiLogStream::~MiLogStream(&v42);
    result = -1;
  }
  else
  {
    v14 = (char *)(v5 + 96);
    effect_info = std::map<std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ModifierEffectInfo>::operator[](
                    &this->cost_modifier_map_,
                    (const std::map<std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ModifierEffectInfo>::key_type *)(v5 + 96));
    v15 = *(_DWORD *)(v5 + 32);
    v16 = *(_BYTE *)(((unsigned __int64)effect_info >> 3) + 0x7FFF8000);
    if ( v16 != 0 && v16 <= 3 )
    {
      LOBYTE(v14) = v16 != 0;
      __asan_report_store4(effect_info, v14, (_BYTE)effect_info);
    }
    effect_info->card_id = v15;
    v17 = *(_DWORD *)(v5 + 48);
    v18 = *(_BYTE *)(((unsigned __int64)&effect_info->effect_id >> 3) + 0x7FFF8000);
    LOBYTE(v14) = v18 != 0;
    v19 = v18 != 0 && (char)((((_BYTE)effect_info + 4) & 7) + 3) >= v18;
    if ( v19 )
      __asan_report_store4(&effect_info->effect_id, v14, v19);
    effect_info->effect_id = v17;
    if ( *(_BYTE *)(((unsigned __int64)&effect_config->effect_param1 >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&effect_config->effect_param1 >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    effect_param1 = effect_config->effect_param1;
    v21 = *(_BYTE *)(((unsigned __int64)&effect_info->factor >> 3) + 0x7FFF8000);
    if ( v21 != 0 && v21 <= 3 )
    {
      LOBYTE(v14) = v21 != 0;
      __asan_report_store4(&effect_info->factor, v14, (_BYTE)effect_info + 16);
    }
    effect_info->factor = effect_param1;
    if ( *(_BYTE *)(((unsigned __int64)&effect_config->target_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)effect_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&effect_config->target_type >> 3)
                                                                   + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( effect_config->target_type == MECHANICUS_CARD_TARGET_GADGETS )
    {
      gadget_vec = &effect_config->target_param_list;
      v22._M_node = std::set<unsigned int>::end(&effect_info->target_gadget_set)._M_node;
      v23 = std::inserter<std::set<unsigned int>,std::_Rb_tree_const_iterator<unsigned int>>(
              &effect_info->target_gadget_set,
              v22);
      container = v23.container;
      M_node = v23.iter._M_node;
      M_current = std::vector<unsigned int>::end(gadget_vec)._M_current;
      v27._M_current = std::vector<unsigned int>::begin(gadget_vec)._M_current;
      v28.container = container;
      v28.iter._M_node = M_node;
      std::copy<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>,std::insert_iterator<std::set<unsigned int>>>(
        v27,
        (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current,
        v28);
    }
    if ( *(_BYTE *)(((unsigned __int64)&card_config->last_round >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&card_config->last_round >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    last_round = card_config->last_round;
    if ( curse_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&curse_config_ptr->last_round >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&curse_config_ptr->last_round >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      last_round = curse_config_ptr->last_round;
    }
    v29 = (((_BYTE)this + 100) & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)&this->current_round_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->current_round_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    current_round = this->current_round_;
    v31 = *(_BYTE *)(((unsigned __int64)&effect_info->begin_round >> 3) + 0x7FFF8000);
    if ( v31 != 0 && v31 <= 3 )
    {
      LOBYTE(v29) = v31 != 0;
      __asan_report_store4(&effect_info->begin_round, v29, (_BYTE)effect_info + 8);
    }
    effect_info->begin_round = current_round;
    if ( last_round )
    {
      v32 = this->current_round_ + last_round - 1;
      v33 = *(_BYTE *)(((unsigned __int64)&effect_info->end_round >> 3) + 0x7FFF8000);
      LOBYTE(v29) = v33 != 0;
      v34 = v33 != 0 && (char)((((_BYTE)effect_info + 12) & 7) + 3) >= v33;
      if ( v34 )
        __asan_report_store4(&effect_info->end_round, v29, v34);
      effect_info->end_round = v32;
    }
    MechanicusMultistagePlay::broadcastAllFoundationsNotify(this);
    result = 0;
  }
  if ( v43 == (char *)v5 )
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
  return result;
};

// Line 1455: range 0000000016026AAC-000000001602712C
int32_t __cdecl MechanicusMultistagePlay::modifyBuildRefund(
        MechanicusMultistagePlay *const this,
        Player *player,
        const data::MechanicusCardExcelConfig *card_config,
        const data::MechanicusCardEffectExcelConfig *effect_config,
        const data::MechanicusCardCurseExcelConfig *curse_config_ptr)
{
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  _DWORD *v7; // r13
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rdx
  int32_t result; // eax
  char *v14; // rsi
  uint32_t v15; // ecx
  char v16; // al
  uint32_t v17; // ecx
  char v18; // dl
  bool v19; // dl
  int32_t effect_param1; // ecx
  char v21; // al
  std::set<unsigned int>::iterator v22; // rax
  std::insert_iterator<std::set<unsigned int> > v23; // rax
  std::set<unsigned int> *container; // r14
  const std::_Rb_tree_node_base *M_node; // r15
  const unsigned int *M_current; // rbx
  std::vector<unsigned int>::const_iterator v27; // rax
  std::insert_iterator<std::set<unsigned int> > v28; // rdx
  __int64 v29; // rsi
  uint32_t current_round; // ecx
  char v31; // al
  uint32_t v32; // ecx
  char v33; // dl
  bool v34; // dl
  uint32_t last_round; // [rsp+34h] [rbp-ECh]
  std::_Rb_tree_iterator<std::pair<const std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ModifierEffectInfo> >::_Self __y; // [rsp+38h] [rbp-E8h] BYREF
  MechanicusMultistagePlay::ModifierEffectInfo *effect_info; // [rsp+40h] [rbp-E0h]
  const std::vector<unsigned int> *gadget_vec; // [rsp+48h] [rbp-D8h]
  common::milog::MiLogStream v42; // [rsp+50h] [rbp-D0h] BYREF
  char v43[176]; // [rsp+70h] [rbp-B0h] BYREF

  v5 = (unsigned __int64)v43;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(128LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "4 32 4 12 card_id:1456 48 4 14 effect_id:1457 64 8 9 iter:1460 96 8 8 key:1458";
  *(_QWORD *)(v5 + 16) = MechanicusMultistagePlay::modifyBuildRefund;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556924;
  v7[536862722] = -218959360;
  v7[536862723] = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&card_config->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&card_config->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  *(_DWORD *)(v5 + 32) = card_config->id;
  if ( *(_BYTE *)(((unsigned __int64)&effect_config->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&effect_config->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  *(_DWORD *)(v5 + 48) = effect_config->id;
  *(std::pair<unsigned int,unsigned int> *)(v5 + 96) = std::make_pair<unsigned int &,unsigned int &>(
                                                         (unsigned int *)(v5 + 32),
                                                         (unsigned int *)(v5 + 48));
  *(std::map<std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ModifierEffectInfo>::iterator *)(v5 + 64) = std::map<std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ModifierEffectInfo>::find(&this->refund_modifier_map_, (const std::map<std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ModifierEffectInfo>::key_type *)(v5 + 96));
  __y._M_node = std::map<std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ModifierEffectInfo>::end(&this->refund_modifier_map_)._M_node;
  if ( std::operator!=(
         (const std::_Rb_tree_iterator<std::pair<const std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ModifierEffectInfo> >::_Self *)(v5 + 64),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v42,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_multistage_play_impl/mechanicus_multistage_play.cpp",
      "modifyBuildRefund",
      1463);
    v8 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
           &v42,
           (const char (*)[31])"[MEHCANICUS] duplicate card_id");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v5 + 32));
    v10 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v9, (const char (*)[9])" effect:");
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v5 + 48));
    v12 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v11, (const char (*)[9])" player:");
    operator<<(v12, player);
    common::milog::MiLogStream::~MiLogStream(&v42);
    result = -1;
  }
  else
  {
    v14 = (char *)(v5 + 96);
    effect_info = std::map<std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ModifierEffectInfo>::operator[](
                    &this->refund_modifier_map_,
                    (const std::map<std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ModifierEffectInfo>::key_type *)(v5 + 96));
    v15 = *(_DWORD *)(v5 + 32);
    v16 = *(_BYTE *)(((unsigned __int64)effect_info >> 3) + 0x7FFF8000);
    if ( v16 != 0 && v16 <= 3 )
    {
      LOBYTE(v14) = v16 != 0;
      __asan_report_store4(effect_info, v14, (_BYTE)effect_info);
    }
    effect_info->card_id = v15;
    v17 = *(_DWORD *)(v5 + 48);
    v18 = *(_BYTE *)(((unsigned __int64)&effect_info->effect_id >> 3) + 0x7FFF8000);
    LOBYTE(v14) = v18 != 0;
    v19 = v18 != 0 && (char)((((_BYTE)effect_info + 4) & 7) + 3) >= v18;
    if ( v19 )
      __asan_report_store4(&effect_info->effect_id, v14, v19);
    effect_info->effect_id = v17;
    if ( *(_BYTE *)(((unsigned __int64)&effect_config->effect_param1 >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&effect_config->effect_param1 >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    effect_param1 = effect_config->effect_param1;
    v21 = *(_BYTE *)(((unsigned __int64)&effect_info->factor >> 3) + 0x7FFF8000);
    if ( v21 != 0 && v21 <= 3 )
    {
      LOBYTE(v14) = v21 != 0;
      __asan_report_store4(&effect_info->factor, v14, (_BYTE)effect_info + 16);
    }
    effect_info->factor = effect_param1;
    if ( *(_BYTE *)(((unsigned __int64)&effect_config->target_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)effect_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&effect_config->target_type >> 3)
                                                                   + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( effect_config->target_type == MECHANICUS_CARD_TARGET_GADGETS )
    {
      gadget_vec = &effect_config->target_param_list;
      v22._M_node = std::set<unsigned int>::end(&effect_info->target_gadget_set)._M_node;
      v23 = std::inserter<std::set<unsigned int>,std::_Rb_tree_const_iterator<unsigned int>>(
              &effect_info->target_gadget_set,
              v22);
      container = v23.container;
      M_node = v23.iter._M_node;
      M_current = std::vector<unsigned int>::end(gadget_vec)._M_current;
      v27._M_current = std::vector<unsigned int>::begin(gadget_vec)._M_current;
      v28.container = container;
      v28.iter._M_node = M_node;
      std::copy<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>,std::insert_iterator<std::set<unsigned int>>>(
        v27,
        (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current,
        v28);
    }
    if ( *(_BYTE *)(((unsigned __int64)&card_config->last_round >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&card_config->last_round >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    last_round = card_config->last_round;
    if ( curse_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&curse_config_ptr->last_round >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&curse_config_ptr->last_round >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      last_round = curse_config_ptr->last_round;
    }
    v29 = (((_BYTE)this + 100) & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)&this->current_round_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->current_round_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    current_round = this->current_round_;
    v31 = *(_BYTE *)(((unsigned __int64)&effect_info->begin_round >> 3) + 0x7FFF8000);
    if ( v31 != 0 && v31 <= 3 )
    {
      LOBYTE(v29) = v31 != 0;
      __asan_report_store4(&effect_info->begin_round, v29, (_BYTE)effect_info + 8);
    }
    effect_info->begin_round = current_round;
    if ( last_round )
    {
      v32 = this->current_round_ + last_round - 1;
      v33 = *(_BYTE *)(((unsigned __int64)&effect_info->end_round >> 3) + 0x7FFF8000);
      LOBYTE(v29) = v33 != 0;
      v34 = v33 != 0 && (char)((((_BYTE)effect_info + 12) & 7) + 3) >= v33;
      if ( v34 )
        __asan_report_store4(&effect_info->end_round, v29, v34);
      effect_info->end_round = v32;
    }
    MechanicusMultistagePlay::broadcastAllFoundationsNotify(this);
    result = 0;
  }
  if ( v43 == (char *)v5 )
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
  return result;
};

// Line 1495: range 000000001602712E-00000000160276D8
int32_t __cdecl MechanicusMultistagePlay::addKillPoints(
        MechanicusMultistagePlay *const this,
        Player *player,
        const data::MechanicusCardExcelConfig *card_config,
        const data::MechanicusCardEffectExcelConfig *effect_config,
        const data::MechanicusCardCurseExcelConfig *curse_config_ptr)
{
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  _DWORD *v7; // r13
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rdx
  int32_t result; // eax
  char *v14; // rsi
  uint32_t v15; // ecx
  char v16; // al
  uint32_t v17; // ecx
  char v18; // dl
  bool v19; // dl
  int32_t effect_param1; // ecx
  char v21; // dl
  bool v22; // dl
  __int64 v23; // rsi
  uint32_t current_round; // ecx
  char v25; // al
  uint32_t v26; // ecx
  char v27; // dl
  bool v28; // dl
  uint32_t last_round; // [rsp+3Ch] [rbp-D4h]
  std::_Rb_tree_iterator<std::pair<const std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ModifierEffectInfo> >::_Self __y; // [rsp+40h] [rbp-D0h] BYREF
  MechanicusMultistagePlay::ModifierEffectInfo *effect_info; // [rsp+48h] [rbp-C8h]
  common::milog::MiLogStream v35; // [rsp+50h] [rbp-C0h] BYREF
  char v36[160]; // [rsp+70h] [rbp-A0h] BYREF

  v5 = (unsigned __int64)v36;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(128LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "4 32 4 12 card_id:1496 48 4 14 effect_id:1497 64 8 9 iter:1500 96 8 8 key:1498";
  *(_QWORD *)(v5 + 16) = MechanicusMultistagePlay::addKillPoints;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556924;
  v7[536862722] = -218959360;
  v7[536862723] = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&card_config->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&card_config->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  *(_DWORD *)(v5 + 32) = card_config->id;
  if ( *(_BYTE *)(((unsigned __int64)&effect_config->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&effect_config->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  *(_DWORD *)(v5 + 48) = effect_config->id;
  *(std::pair<unsigned int,unsigned int> *)(v5 + 96) = std::make_pair<unsigned int &,unsigned int &>(
                                                         (unsigned int *)(v5 + 32),
                                                         (unsigned int *)(v5 + 48));
  *(std::map<std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ModifierEffectInfo>::iterator *)(v5 + 64) = std::map<std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ModifierEffectInfo>::find(&this->kill_points_modifier_map_, (const std::map<std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ModifierEffectInfo>::key_type *)(v5 + 96));
  __y._M_node = std::map<std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ModifierEffectInfo>::end(&this->kill_points_modifier_map_)._M_node;
  if ( std::operator!=(
         (const std::_Rb_tree_iterator<std::pair<const std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ModifierEffectInfo> >::_Self *)(v5 + 64),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v35,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_multistage_play_impl/mechanicus_multistage_play.cpp",
      "addKillPoints",
      1503);
    v8 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
           &v35,
           (const char (*)[31])"[MEHCANICUS] duplicate card_id");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v5 + 32));
    v10 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v9, (const char (*)[9])" effect:");
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v5 + 48));
    v12 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v11, (const char (*)[9])" player:");
    operator<<(v12, player);
    common::milog::MiLogStream::~MiLogStream(&v35);
    result = -1;
  }
  else
  {
    v14 = (char *)(v5 + 96);
    effect_info = std::map<std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ModifierEffectInfo>::operator[](
                    &this->kill_points_modifier_map_,
                    (const std::map<std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ModifierEffectInfo>::key_type *)(v5 + 96));
    v15 = *(_DWORD *)(v5 + 32);
    v16 = *(_BYTE *)(((unsigned __int64)effect_info >> 3) + 0x7FFF8000);
    if ( v16 != 0 && v16 <= 3 )
    {
      LOBYTE(v14) = v16 != 0;
      __asan_report_store4(effect_info, v14, (_BYTE)effect_info);
    }
    effect_info->card_id = v15;
    v17 = *(_DWORD *)(v5 + 48);
    v18 = *(_BYTE *)(((unsigned __int64)&effect_info->effect_id >> 3) + 0x7FFF8000);
    LOBYTE(v14) = v18 != 0;
    v19 = v18 != 0 && (char)((((_BYTE)effect_info + 4) & 7) + 3) >= v18;
    if ( v19 )
      __asan_report_store4(&effect_info->effect_id, v14, v19);
    effect_info->effect_id = v17;
    if ( *(_BYTE *)(((unsigned __int64)&effect_config->effect_param1 >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&effect_config->effect_param1 >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    effect_param1 = effect_config->effect_param1;
    v21 = *(_BYTE *)(((unsigned __int64)&effect_info->delta >> 3) + 0x7FFF8000);
    LOBYTE(v14) = v21 != 0;
    v22 = v21 != 0 && (char)((((_BYTE)effect_info + 20) & 7) + 3) >= v21;
    if ( v22 )
      __asan_report_store4(&effect_info->delta, v14, v22);
    effect_info->delta = effect_param1;
    if ( *(_BYTE *)(((unsigned __int64)&card_config->last_round >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&card_config->last_round >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    last_round = card_config->last_round;
    if ( curse_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&curse_config_ptr->last_round >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&curse_config_ptr->last_round >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      last_round = curse_config_ptr->last_round;
    }
    v23 = (((_BYTE)this + 100) & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)&this->current_round_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->current_round_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    current_round = this->current_round_;
    v25 = *(_BYTE *)(((unsigned __int64)&effect_info->begin_round >> 3) + 0x7FFF8000);
    if ( v25 != 0 && v25 <= 3 )
    {
      LOBYTE(v23) = v25 != 0;
      __asan_report_store4(&effect_info->begin_round, v23, (_BYTE)effect_info + 8);
    }
    effect_info->begin_round = current_round;
    if ( last_round )
    {
      v26 = this->current_round_ + last_round - 1;
      v27 = *(_BYTE *)(((unsigned __int64)&effect_info->end_round >> 3) + 0x7FFF8000);
      LOBYTE(v23) = v27 != 0;
      v28 = v27 != 0 && (char)((((_BYTE)effect_info + 12) & 7) + 3) >= v27;
      if ( v28 )
        __asan_report_store4(&effect_info->end_round, v23, v28);
      effect_info->end_round = v26;
    }
    result = 0;
  }
  if ( v36 == (char *)v5 )
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
  return result;
};

// Line 1528: range 00000000160276DA-0000000016027C7C
int32_t __cdecl MechanicusMultistagePlay::modKillPoints(
        MechanicusMultistagePlay *const this,
        Player *player,
        const data::MechanicusCardExcelConfig *card_config,
        const data::MechanicusCardEffectExcelConfig *effect_config,
        const data::MechanicusCardCurseExcelConfig *curse_config_ptr)
{
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  _DWORD *v7; // r13
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rdx
  int32_t result; // eax
  char *v14; // rsi
  uint32_t v15; // ecx
  char v16; // al
  uint32_t v17; // ecx
  char v18; // dl
  bool v19; // dl
  int32_t effect_param1; // ecx
  char v21; // al
  __int64 v22; // rsi
  uint32_t current_round; // ecx
  char v24; // al
  uint32_t v25; // ecx
  char v26; // dl
  bool v27; // dl
  uint32_t last_round; // [rsp+3Ch] [rbp-D4h]
  std::_Rb_tree_iterator<std::pair<const std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ModifierEffectInfo> >::_Self __y; // [rsp+40h] [rbp-D0h] BYREF
  MechanicusMultistagePlay::ModifierEffectInfo *effect_info; // [rsp+48h] [rbp-C8h]
  common::milog::MiLogStream v34; // [rsp+50h] [rbp-C0h] BYREF
  char v35[160]; // [rsp+70h] [rbp-A0h] BYREF

  v5 = (unsigned __int64)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(128LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "4 32 4 12 card_id:1529 48 4 14 effect_id:1530 64 8 9 iter:1533 96 8 8 key:1531";
  *(_QWORD *)(v5 + 16) = MechanicusMultistagePlay::modKillPoints;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556924;
  v7[536862722] = -218959360;
  v7[536862723] = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&card_config->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&card_config->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  *(_DWORD *)(v5 + 32) = card_config->id;
  if ( *(_BYTE *)(((unsigned __int64)&effect_config->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&effect_config->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  *(_DWORD *)(v5 + 48) = effect_config->id;
  *(std::pair<unsigned int,unsigned int> *)(v5 + 96) = std::make_pair<unsigned int &,unsigned int &>(
                                                         (unsigned int *)(v5 + 32),
                                                         (unsigned int *)(v5 + 48));
  *(std::map<std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ModifierEffectInfo>::iterator *)(v5 + 64) = std::map<std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ModifierEffectInfo>::find(&this->kill_points_modifier_map_, (const std::map<std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ModifierEffectInfo>::key_type *)(v5 + 96));
  __y._M_node = std::map<std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ModifierEffectInfo>::end(&this->kill_points_modifier_map_)._M_node;
  if ( std::operator!=(
         (const std::_Rb_tree_iterator<std::pair<const std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ModifierEffectInfo> >::_Self *)(v5 + 64),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v34,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_multistage_play_impl/mechanicus_multistage_play.cpp",
      "modKillPoints",
      1536);
    v8 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
           &v34,
           (const char (*)[31])"[MEHCANICUS] duplicate card_id");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v5 + 32));
    v10 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v9, (const char (*)[9])" effect:");
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v5 + 48));
    v12 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v11, (const char (*)[9])" player:");
    operator<<(v12, player);
    common::milog::MiLogStream::~MiLogStream(&v34);
    result = -1;
  }
  else
  {
    v14 = (char *)(v5 + 96);
    effect_info = std::map<std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ModifierEffectInfo>::operator[](
                    &this->kill_points_modifier_map_,
                    (const std::map<std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ModifierEffectInfo>::key_type *)(v5 + 96));
    v15 = *(_DWORD *)(v5 + 32);
    v16 = *(_BYTE *)(((unsigned __int64)effect_info >> 3) + 0x7FFF8000);
    if ( v16 != 0 && v16 <= 3 )
    {
      LOBYTE(v14) = v16 != 0;
      __asan_report_store4(effect_info, v14, (_BYTE)effect_info);
    }
    effect_info->card_id = v15;
    v17 = *(_DWORD *)(v5 + 48);
    v18 = *(_BYTE *)(((unsigned __int64)&effect_info->effect_id >> 3) + 0x7FFF8000);
    LOBYTE(v14) = v18 != 0;
    v19 = v18 != 0 && (char)((((_BYTE)effect_info + 4) & 7) + 3) >= v18;
    if ( v19 )
      __asan_report_store4(&effect_info->effect_id, v14, v19);
    effect_info->effect_id = v17;
    if ( *(_BYTE *)(((unsigned __int64)&effect_config->effect_param1 >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&effect_config->effect_param1 >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    effect_param1 = effect_config->effect_param1;
    v21 = *(_BYTE *)(((unsigned __int64)&effect_info->factor >> 3) + 0x7FFF8000);
    if ( v21 != 0 && v21 <= 3 )
    {
      LOBYTE(v14) = v21 != 0;
      __asan_report_store4(&effect_info->factor, v14, (_BYTE)effect_info + 16);
    }
    effect_info->factor = effect_param1;
    if ( *(_BYTE *)(((unsigned __int64)&card_config->last_round >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&card_config->last_round >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    last_round = card_config->last_round;
    if ( curse_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&curse_config_ptr->last_round >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&curse_config_ptr->last_round >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      last_round = curse_config_ptr->last_round;
    }
    v22 = (((_BYTE)this + 100) & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)&this->current_round_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->current_round_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    current_round = this->current_round_;
    v24 = *(_BYTE *)(((unsigned __int64)&effect_info->begin_round >> 3) + 0x7FFF8000);
    if ( v24 != 0 && v24 <= 3 )
    {
      LOBYTE(v22) = v24 != 0;
      __asan_report_store4(&effect_info->begin_round, v22, (_BYTE)effect_info + 8);
    }
    effect_info->begin_round = current_round;
    if ( last_round )
    {
      v25 = this->current_round_ + last_round - 1;
      v26 = *(_BYTE *)(((unsigned __int64)&effect_info->end_round >> 3) + 0x7FFF8000);
      LOBYTE(v22) = v26 != 0;
      v27 = v26 != 0 && (char)((((_BYTE)effect_info + 12) & 7) + 3) >= v26;
      if ( v27 )
        __asan_report_store4(&effect_info->end_round, v22, v27);
      effect_info->end_round = v25;
    }
    result = 0;
  }
  if ( v35 == (char *)v5 )
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
  return result;
};

// Line 1561: range 0000000016027C7E-00000000160283EA
int32_t __cdecl MechanicusMultistagePlay::addGearNum(
        MechanicusMultistagePlay *const this,
        Player *player,
        const data::MechanicusCardExcelConfig *card_config,
        const data::MechanicusCardEffectExcelConfig *effect_config,
        const data::MechanicusCardCurseExcelConfig *curse_config_ptr)
{
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  _DWORD *v7; // r13
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rdx
  int32_t result; // eax
  char *v12; // rsi
  uint32_t id; // ecx
  char v14; // al
  uint32_t v15; // ecx
  char v16; // dl
  bool v17; // dl
  __int64 v18; // rsi
  uint32_t current_round; // ecx
  char v20; // al
  uint32_t v21; // ecx
  char v22; // dl
  bool v23; // dl
  int32_t effect_param1; // ecx
  char v25; // dl
  bool v26; // dl
  common::milog::MiLogStream *v27; // rdx
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  uint32_t last_round; // [rsp+3Ch] [rbp-D4h]
  std::_Rb_tree_iterator<std::pair<const std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ModifierEffectInfo> >::_Self __y; // [rsp+40h] [rbp-D0h] BYREF
  MechanicusMultistagePlay::ModifierEffectInfo *modifier; // [rsp+48h] [rbp-C8h]
  common::milog::MiLogStream v46; // [rsp+50h] [rbp-C0h] BYREF
  char v47[160]; // [rsp+70h] [rbp-A0h] BYREF

  v5 = (unsigned __int64)v47;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(128LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "4 32 4 12 card_id:1562 48 4 14 effect_id:1563 64 8 9 iter:1566 96 8 8 key:1564";
  *(_QWORD *)(v5 + 16) = MechanicusMultistagePlay::addGearNum;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556924;
  v7[536862722] = -218959360;
  v7[536862723] = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&card_config->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&card_config->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  *(_DWORD *)(v5 + 32) = card_config->id;
  if ( *(_BYTE *)(((unsigned __int64)&effect_config->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&effect_config->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  *(_DWORD *)(v5 + 48) = effect_config->id;
  *(std::pair<unsigned int,unsigned int> *)(v5 + 96) = std::make_pair<unsigned int &,unsigned int &>(
                                                         (unsigned int *)(v5 + 32),
                                                         (unsigned int *)(v5 + 48));
  *(std::map<std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ModifierEffectInfo>::iterator *)(v5 + 64) = std::map<std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ModifierEffectInfo>::find(&this->gear_num_modifier_map_, (const std::map<std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ModifierEffectInfo>::key_type *)(v5 + 96));
  __y._M_node = std::map<std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ModifierEffectInfo>::end(&this->gear_num_modifier_map_)._M_node;
  if ( std::operator!=(
         (const std::_Rb_tree_iterator<std::pair<const std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ModifierEffectInfo> >::_Self *)(v5 + 64),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v46,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_multistage_play_impl/mechanicus_multistage_play.cpp",
      "addGearNum",
      1569);
    v8 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v46,
           (const char (*)[30])"[MECHANICUS] duplicate card: ");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v5 + 32));
    v10 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v9, (const char (*)[9])" player:");
    operator<<(v10, player);
    common::milog::MiLogStream::~MiLogStream(&v46);
    result = -1;
  }
  else
  {
    v12 = (char *)(v5 + 96);
    modifier = std::map<std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ModifierEffectInfo>::operator[](
                 &this->gear_num_modifier_map_,
                 (const std::map<std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ModifierEffectInfo>::key_type *)(v5 + 96));
    if ( *(_BYTE *)(((unsigned __int64)&card_config->id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&card_config->id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    id = card_config->id;
    v14 = *(_BYTE *)(((unsigned __int64)modifier >> 3) + 0x7FFF8000);
    if ( v14 != 0 && v14 <= 3 )
    {
      LOBYTE(v12) = v14 != 0;
      __asan_report_store4(modifier, v12, (_BYTE)modifier);
    }
    modifier->card_id = id;
    if ( *(_BYTE *)(((unsigned __int64)&effect_config->id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&effect_config->id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    v15 = effect_config->id;
    v16 = *(_BYTE *)(((unsigned __int64)&modifier->effect_id >> 3) + 0x7FFF8000);
    LOBYTE(v12) = v16 != 0;
    v17 = v16 != 0 && (char)((((_BYTE)modifier + 4) & 7) + 3) >= v16;
    if ( v17 )
      __asan_report_store4(&modifier->effect_id, v12, v17);
    modifier->effect_id = v15;
    if ( *(_BYTE *)(((unsigned __int64)&card_config->last_round >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&card_config->last_round >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    last_round = card_config->last_round;
    if ( curse_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&curse_config_ptr->last_round >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&curse_config_ptr->last_round >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      last_round = curse_config_ptr->last_round;
    }
    v18 = (((_BYTE)this + 100) & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)&this->current_round_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->current_round_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    current_round = this->current_round_;
    v20 = *(_BYTE *)(((unsigned __int64)&modifier->begin_round >> 3) + 0x7FFF8000);
    if ( v20 != 0 && v20 <= 3 )
    {
      LOBYTE(v18) = v20 != 0;
      __asan_report_store4(&modifier->begin_round, v18, (_BYTE)modifier + 8);
    }
    modifier->begin_round = current_round;
    if ( last_round )
    {
      v21 = this->current_round_ + last_round - 1;
      v22 = *(_BYTE *)(((unsigned __int64)&modifier->end_round >> 3) + 0x7FFF8000);
      LOBYTE(v18) = v22 != 0;
      v23 = v22 != 0 && (char)((((_BYTE)modifier + 12) & 7) + 3) >= v22;
      if ( v23 )
        __asan_report_store4(&modifier->end_round, v18, v23);
      modifier->end_round = v21;
    }
    if ( *(_BYTE *)(((unsigned __int64)&effect_config->effect_param1 >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&effect_config->effect_param1 >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    effect_param1 = effect_config->effect_param1;
    v25 = *(_BYTE *)(((unsigned __int64)&modifier->delta >> 3) + 0x7FFF8000);
    LOBYTE(v18) = v25 != 0;
    v26 = v25 != 0 && (char)((((_BYTE)modifier + 20) & 7) + 3) >= v25;
    if ( v26 )
      __asan_report_store4(&modifier->delta, v18, v26);
    modifier->delta = effect_param1;
    common::milog::MiLogStream::create(
      &v46,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_multistage_play_impl/mechanicus_multistage_play.cpp",
      "addGearNum",
      1588);
    v27 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
            &v46,
            (const char (*)[21])"[MECHANICUS] player:");
    v28 = operator<<(v27, player);
    v29 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v28, (const char (*)[15])" add gear num:");
    v30 = common::milog::MiLogStream::operator<<<int,(int *)0>(v29, &effect_config->effect_param1);
    v31 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v30, (const char (*)[9])" @round[");
    v32 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, &modifier->begin_round);
    v33 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v32, (const char (*)[3])", ");
    v34 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v33, &modifier->end_round);
    v35 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v34, (const char (*)[3])"] ");
    v36 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v35, (const char (*)[7])" card:");
    v37 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v36, &modifier->card_id);
    v38 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v37, (const char (*)[9])" effect:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v38, &modifier->effect_id);
    common::milog::MiLogStream::~MiLogStream(&v46);
    MechanicusMultistagePlay::broadcastAllFoundationsNotify(this);
    result = 0;
  }
  if ( v47 == (char *)v5 )
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
  return result;
};

// Line 1599: range 00000000160283EC-0000000016028659
int32_t __cdecl MechanicusMultistagePlay::grantPoints(
        MechanicusMultistagePlay *const this,
        Player *player,
        const data::MechanicusCardExcelConfig *card_config,
        const data::MechanicusCardEffectExcelConfig *effect_config,
        const data::MechanicusCardCurseExcelConfig *curse_config_ptr)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  unsigned __int64 v7; // r12
  int32_t result; // eax
  int32_t effect_param1; // r14d
  uint32_t Uid; // ecx
  common::milog::MiLogStream *v11; // rdx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream v17; // [rsp+30h] [rbp-90h] BYREF
  char v18[112]; // [rsp+50h] [rbp-70h] BYREF

  v5 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_0(64LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 4 12 retcode:1605";
  *(_QWORD *)(v5 + 16) = MechanicusMultistagePlay::grantPoints;
  v7 = v5 >> 3;
  *(_DWORD *)(v7 + 2147450880) = -235802127;
  *(_DWORD *)(v7 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)&effect_config->effect_param1 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&effect_config->effect_param1 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( effect_config->effect_param1 > 0 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&effect_config->effect_param1 >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&effect_config->effect_param1 >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    effect_param1 = effect_config->effect_param1;
    Uid = Player::getUid(player);
    *(_DWORD *)(v5 + 32) = MechanicusMultistagePlay::addBuildingPoints(this, Uid, effect_param1);
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_multistage_play_impl/mechanicus_multistage_play.cpp",
      "grantPoints",
      1606);
    v11 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
            &v17,
            (const char (*)[21])"[MECHANICUS] player:");
    v12 = operator<<(v11, player);
    v13 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
            v12,
            (const char (*)[22])" add building points:");
    v14 = common::milog::MiLogStream::operator<<<int,(int *)0>(v13, &effect_config->effect_param1);
    v15 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v14, (const char (*)[6])" ret:");
    common::milog::MiLogStream::operator<<<int,(int *)0>(v15, (const int *)(v5 + 32));
    common::milog::MiLogStream::~MiLogStream(&v17);
    result = *(_DWORD *)(v5 + 32);
  }
  else
  {
    result = 0;
  }
  if ( v18 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1612: range 000000001602865A-0000000016028B82
int32_t __cdecl MechanicusMultistagePlay::killGears(
        MechanicusMultistagePlay *const this,
        Player *player,
        const data::MechanicusCardExcelConfig *card_config,
        const data::MechanicusCardEffectExcelConfig *effect_config,
        const data::MechanicusCardCurseExcelConfig *curse_config_ptr)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  int32_t v8; // r14d
  const std::pair<unsigned int const,std::weak_ptr<FoundationComp> > *v9; // rax
  bool v10; // r14
  const std::shared_ptr<FoundationComp> *v11; // rax
  std::__shared_ptr_access<FoundationComp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  int32_t result; // eax
  int32_t random_num; // [rsp+3Ch] [rbp-144h]
  std::map<unsigned int,std::weak_ptr<FoundationComp>>::iterator __for_begin; // [rsp+40h] [rbp-140h] BYREF
  std::map<unsigned int,std::weak_ptr<FoundationComp>>::iterator __for_end; // [rsp+48h] [rbp-138h] BYREF
  std::map<unsigned int,std::weak_ptr<FoundationComp>> *__for_range; // [rsp+50h] [rbp-130h]
  std::vector<std::shared_ptr<FoundationComp>> *__for_range_0; // [rsp+58h] [rbp-128h]
  std::tuple_element<0,std::pair<unsigned int const,std::weak_ptr<FoundationComp> > >::type *_; // [rsp+60h] [rbp-120h]
  std::tuple_element<1,std::pair<unsigned int const,std::weak_ptr<FoundationComp> > >::type *foundation_comp_wtr; // [rsp+68h] [rbp-118h]
  char v22[272]; // [rsp+70h] [rbp-110h] BYREF

  v5 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(224LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "4 32 16 24 foundation_comp_ptr:1622 64 16 24 foundation_comp_ptr:1636 96 24 28 foundation_comp_p"
                        "tr_vec:1619 160 24 26 random_foundation_vec:1634";
  *(_QWORD *)(v5 + 16) = MechanicusMultistagePlay::killGears;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -219021312;
  v7[536862722] = -219021312;
  v7[536862723] = -234881024;
  v7[536862724] = -218959118;
  v7[536862725] = -218103808;
  v7[536862726] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&effect_config->effect_param1 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&effect_config->effect_param1 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( effect_config->effect_param1 > 0 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&effect_config->effect_param1 >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&effect_config->effect_param1 >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    random_num = effect_config->effect_param1;
    std::vector<std::shared_ptr<FoundationComp>>::vector((std::vector<std::shared_ptr<FoundationComp>> *const)(v5 + 96));
    __for_range = &this->foundation_wtr_map_;
    __for_begin._M_node = std::map<unsigned int,std::weak_ptr<FoundationComp>>::begin(&this->foundation_wtr_map_)._M_node;
    __for_end._M_node = std::map<unsigned int,std::weak_ptr<FoundationComp>>::end(&this->foundation_wtr_map_)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v9 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<FoundationComp>>>::operator*(&__for_begin);
      std::pair<unsigned int const,std::weak_ptr<FoundationComp>>::pair(
        (std::pair<unsigned int const,std::weak_ptr<FoundationComp> > *const)(v5 + 160),
        v9);
      _ = std::get<0ul,unsigned int const,std::weak_ptr<FoundationComp>>((std::pair<unsigned int const,std::weak_ptr<FoundationComp> > *)(v5 + 160));
      foundation_comp_wtr = std::get<1ul,unsigned int const,std::weak_ptr<FoundationComp>>((std::pair<unsigned int const,std::weak_ptr<FoundationComp> > *)(v5 + 160));
      std::weak_ptr<FoundationComp>::lock((const std::weak_ptr<FoundationComp> *const)(v5 + 32));
      if ( !std::operator==<FoundationComp>(0LL, (const std::shared_ptr<FoundationComp> *)(v5 + 32)) )
      {
        std::__shared_ptr_access<FoundationComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FoundationComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 32));
        FoundationComp::getGearGadgetPtr((FoundationComp *const)(v5 + 64));
        v10 = std::operator==<Gadget>(0LL, (const std::shared_ptr<Gadget> *)(v5 + 64));
        std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v5 + 64));
        if ( !v10 )
          std::vector<std::shared_ptr<FoundationComp>>::push_back(
            (std::vector<std::shared_ptr<FoundationComp>> *const)(v5 + 96),
            (const std::vector<std::shared_ptr<FoundationComp>>::value_type *)(v5 + 32));
      }
      std::shared_ptr<FoundationComp>::~shared_ptr((std::shared_ptr<FoundationComp> *const)(v5 + 32));
      std::pair<unsigned int const,std::weak_ptr<FoundationComp>>::~pair((std::pair<unsigned int const,std::weak_ptr<FoundationComp> > *const)(v5 + 160));
      std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<FoundationComp>>>::operator++(&__for_begin);
    }
    std::vector<std::shared_ptr<FoundationComp>>::vector((std::vector<std::shared_ptr<FoundationComp>> *const)(v5 + 160));
    common::tools::RandomUtils::randomSelect<std::shared_ptr<FoundationComp>>(
      (const std::vector<std::shared_ptr<FoundationComp>> *)(v5 + 96),
      (std::vector<std::shared_ptr<FoundationComp>> *)(v5 + 160),
      random_num);
    __for_range_0 = (std::vector<std::shared_ptr<FoundationComp>> *)(v5 + 160);
    __for_begin._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<FoundationComp> > >::_Base_ptr)std::vector<std::shared_ptr<FoundationComp>>::begin((std::vector<std::shared_ptr<FoundationComp>> *const)(v5 + 160))._M_current;
    __for_end._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<FoundationComp> > >::_Base_ptr)std::vector<std::shared_ptr<FoundationComp>>::end(__for_range_0)._M_current;
    while ( __gnu_cxx::operator!=<std::shared_ptr<FoundationComp> *,std::vector<std::shared_ptr<FoundationComp>>>(
              (const __gnu_cxx::__normal_iterator<std::shared_ptr<FoundationComp>*,std::vector<std::shared_ptr<FoundationComp>> > *)&__for_begin,
              (const __gnu_cxx::__normal_iterator<std::shared_ptr<FoundationComp>*,std::vector<std::shared_ptr<FoundationComp>> > *)&__for_end) )
    {
      v11 = __gnu_cxx::__normal_iterator<std::shared_ptr<FoundationComp> *,std::vector<std::shared_ptr<FoundationComp>>>::operator*((const __gnu_cxx::__normal_iterator<std::shared_ptr<FoundationComp>*,std::vector<std::shared_ptr<FoundationComp>> > *const)&__for_begin);
      std::shared_ptr<FoundationComp>::shared_ptr((std::shared_ptr<FoundationComp> *const)(v5 + 64), v11);
      if ( !std::operator==<FoundationComp>(0LL, (const std::shared_ptr<FoundationComp> *)(v5 + 64)) )
      {
        v12 = std::__shared_ptr_access<FoundationComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FoundationComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
        FoundationComp::killGear(v12);
      }
      std::shared_ptr<FoundationComp>::~shared_ptr((std::shared_ptr<FoundationComp> *const)(v5 + 64));
      __gnu_cxx::__normal_iterator<std::shared_ptr<FoundationComp> *,std::vector<std::shared_ptr<FoundationComp>>>::operator++((__gnu_cxx::__normal_iterator<std::shared_ptr<FoundationComp>*,std::vector<std::shared_ptr<FoundationComp>> > *const)&__for_begin);
    }
    v8 = 0;
    std::vector<std::shared_ptr<FoundationComp>>::~vector((std::vector<std::shared_ptr<FoundationComp>> *const)(v5 + 160));
    std::vector<std::shared_ptr<FoundationComp>>::~vector((std::vector<std::shared_ptr<FoundationComp>> *const)(v5 + 96));
  }
  else
  {
    v8 = -1;
  }
  result = v8;
  if ( v22 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 1648: range 0000000016028B84-00000000160292F7
uint32_t __cdecl MechanicusMultistagePlay::getBuildGearLimit(const MechanicusMultistagePlay *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  TreatreMechanicusExcelConfigMgr *p_mechanicus_config_mgr; // rcx
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  int32_t delta; // r14d
  char *v15; // rsi
  std::map<unsigned int,int>::mapped_type *v16; // rax
  int32_t *v17; // rdx
  char v18; // cl
  unsigned __int64 v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  uint32_t v23; // r14d
  uint32_t result; // eax
  int total_delta; // [rsp+10h] [rbp-130h]
  uint32_t config_num; // [rsp+14h] [rbp-12Ch]
  std::map<std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ModifierEffectInfo>::const_iterator __for_end; // [rsp+18h] [rbp-128h] BYREF
  const std::map<std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ModifierEffectInfo> *__for_range; // [rsp+20h] [rbp-120h]
  const std::pair<const std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ModifierEffectInfo> *v29; // [rsp+28h] [rbp-118h]
  std::tuple_element<0,const std::pair<const std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ModifierEffectInfo> >::type *key; // [rsp+30h] [rbp-110h]
  std::tuple_element<1,const std::pair<const std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ModifierEffectInfo> >::type *modifier; // [rsp+38h] [rbp-108h]
  std::shared_ptr<Config> v32; // [rsp+40h] [rbp-100h] BYREF
  common::milog::MiLogStream v33; // [rsp+50h] [rbp-F0h] BYREF
  char v34[208]; // [rsp+70h] [rbp-D0h] BYREF

  v1 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 32 4 12 card_id:1654 48 8 11 result:1666 80 48 14 delta_map:1651";
  *(_QWORD *)(v1 + 16) = MechanicusMultistagePlay::getBuildGearLimit;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61956;
  v3[536862721] = -234881024;
  v3[536862722] = 62194;
  v3[536862724] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v32);
  p_mechanicus_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v32)->design_config.txt_config_mgr.mechanicus_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  config_num = TreatreMechanicusExcelConfigMgr::queryGearLimitByDungeonId(p_mechanicus_config_mgr, this->dungeon_id_);
  std::shared_ptr<Config>::~shared_ptr(&v32);
  total_delta = 0;
  std::map<unsigned int,int>::map((std::map<unsigned int,int> *const)(v1 + 80));
  __for_range = &this->gear_num_modifier_map_;
  *(std::map<std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ModifierEffectInfo>::const_iterator *)(v1 + 48) = std::map<std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ModifierEffectInfo>::begin(&this->gear_num_modifier_map_);
  __for_end._M_node = std::map<std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ModifierEffectInfo>::end(__for_range)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_const_iterator<std::pair<const std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ModifierEffectInfo> >::_Self *)(v1 + 48),
            &__for_end) )
  {
    v29 = std::_Rb_tree_const_iterator<std::pair<std::pair const<unsigned int,unsigned int>,MechanicusMultistagePlay::ModifierEffectInfo>>::operator*((const std::_Rb_tree_const_iterator<std::pair<const std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ModifierEffectInfo> > *const)(v1 + 48));
    key = std::get<0ul,std::pair<unsigned int,unsigned int> const,MechanicusMultistagePlay::ModifierEffectInfo>(v29);
    modifier = (std::tuple_element<1,const std::pair<const std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ModifierEffectInfo> >::type *)std::get<1ul,std::pair<unsigned int,unsigned int> const,MechanicusMultistagePlay::ModifierEffectInfo>(v29);
    if ( *(_BYTE *)(((unsigned __int64)key >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)key & 7) + 3) >= *(_BYTE *)(((unsigned __int64)key >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v1 + 32) = key->first;
    if ( *(_BYTE *)(((unsigned __int64)&modifier->end_round >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)modifier + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&modifier->end_round >> 3)
                                                              + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( !modifier->end_round )
      goto LABEL_17;
    if ( *(_BYTE *)(((unsigned __int64)&this->current_round_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->current_round_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( this->current_round_ > modifier->end_round )
    {
      common::milog::MiLogStream::create(
        &v33,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/scene_multistage_play_impl/mechanicus_multistage_play.cpp",
        "getBuildGearLimit",
        1657);
      v5 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
             &v33,
             (const char (*)[47])"[MECHANICUS] building gear num delta @effect: ");
      v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &modifier->effect_id);
      v7 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v6, (const char (*)[7])" card:");
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v1 + 32));
      v9 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v8, (const char (*)[3])" [");
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &modifier->begin_round);
      v11 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v10, (const char (*)[3])", ");
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &modifier->end_round);
      v13 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              v12,
              (const char (*)[27])"] expired. current_round: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &this->current_round_);
      common::milog::MiLogStream::~MiLogStream(&v33);
    }
    else
    {
LABEL_17:
      if ( *(_BYTE *)(((unsigned __int64)&modifier->delta >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)modifier + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&modifier->delta >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      delta = modifier->delta;
      v15 = (char *)(v1 + 32);
      v16 = std::map<unsigned int,int>::operator[](
              (std::map<unsigned int,int> *const)(v1 + 80),
              (const std::map<unsigned int,int>::key_type *)(v1 + 32));
      v17 = v16;
      v18 = *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000);
      if ( v18 != 0 && (char)(((unsigned __int8)v16 & 7) + 3) >= v18 )
      {
        LOBYTE(v15) = v18 != 0;
        __asan_report_store4(v16, v15, (_BYTE)v16);
      }
      *v17 = delta;
      if ( *(_BYTE *)(((unsigned __int64)&modifier->delta >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)modifier + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&modifier->delta >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      total_delta = SAFE_ADD<int,int>(total_delta, modifier->delta);
    }
    std::_Rb_tree_const_iterator<std::pair<std::pair const<unsigned int,unsigned int>,MechanicusMultistagePlay::ModifierEffectInfo>>::operator++((std::_Rb_tree_const_iterator<std::pair<const std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ModifierEffectInfo> > *const)(v1 + 48));
  }
  *(double *)(v1 + 48) = (double)(int)(total_delta + config_num);
  __for_end._M_node = 0LL;
  v19 = (unsigned __int64)std::max<double>((const double *)&__for_end, (const double *)(v1 + 48));
  if ( *(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
    v19 = __asan_report_load8();
  *(_QWORD *)(v1 + 48) = *(_QWORD *)v19;
  if ( *(double *)(v1 + 48) > (double)(int)std::numeric_limits<unsigned int>::max() )
    *(double *)(v1 + 48) = (double)(int)std::numeric_limits<unsigned int>::max();
  common::milog::MiLogStream::create(
    &v33,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/scene_multistage_play_impl/mechanicus_multistage_play.cpp",
    "getBuildGearLimit",
    1672);
  v20 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
          &v33,
          (const char (*)[24])"[MECHANICUS] gear num: ");
  v21 = common::milog::MiLogStream::operator<<<double,(double *)0>(v20, (const double *)(v1 + 48));
  v22 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v21, (const char (*)[12])" delta map:");
  common::milog::MiLogStream::operator<<<unsigned int,int>(v22, (const std::map<unsigned int,int> *)(v1 + 80));
  common::milog::MiLogStream::~MiLogStream(&v33);
  v23 = (int)*(double *)(v1 + 48);
  std::map<unsigned int,int>::~map((std::map<unsigned int,int> *const)(v1 + 80));
  result = v23;
  if ( v34 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 1677: range 00000000160292F8-000000001602A962
void __cdecl MechanicusMultistagePlay::modifyServerGlobalValueMap(
        MechanicusMultistagePlay *const this,
        const Vector3 *pos,
        const data::MechanicBuildingExcelConfig *gear_config,
        std::map<std::string,float> *global_value_map)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  const unsigned int *v16; // r8
  const unsigned int *v17; // r9
  std::tuple<float,unsigned int,unsigned int> *v19; // r8
  std::tuple_element<1,std::pair<std::_Rb_tree_iterator<std::pair<const std::string,std::tuple<float,unsigned int,unsigned int> > >,bool> >::type *v20; // rax
  std::_Rb_tree_iterator<std::pair<const std::string,std::tuple<float,unsigned int,unsigned int> > >::pointer n; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  std::string *p_key; // rsi
  std::map<std::string,float>::mapped_type *v38; // rax
  float *v39; // rdx
  char v40; // cl
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // rax
  const unsigned int *v50; // r8
  const unsigned int *v51; // r9
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // rax
  common::milog::MiLogStream *v55; // rax
  common::milog::MiLogStream *v56; // rdx
  std::tuple<float,unsigned int,unsigned int> *v57; // r8
  std::tuple_element<1,std::pair<std::_Rb_tree_iterator<std::pair<const std::string,std::tuple<float,unsigned int,unsigned int> > >,bool> >::type *v58; // rax
  std::_Rb_tree_iterator<std::pair<const std::string,std::tuple<float,unsigned int,unsigned int> > >::pointer v59; // rax
  common::milog::MiLogStream *v60; // rax
  common::milog::MiLogStream *v61; // rax
  common::milog::MiLogStream *v62; // rax
  common::milog::MiLogStream *v63; // rax
  common::milog::MiLogStream *v64; // rax
  common::milog::MiLogStream *v65; // rax
  common::milog::MiLogStream *v66; // rax
  common::milog::MiLogStream *v67; // rax
  common::milog::MiLogStream *v68; // rax
  common::milog::MiLogStream *v69; // rax
  common::milog::MiLogStream *v70; // rax
  common::milog::MiLogStream *v71; // rax
  common::milog::MiLogStream *v72; // rax
  common::milog::MiLogStream *v73; // rax
  common::milog::MiLogStream *v74; // rax
  std::string *v75; // rsi
  std::map<std::string,float>::mapped_type *v76; // rax
  float *v77; // rdx
  char v78; // cl
  const std::pair<const std::string,float> *v79; // rax
  std::tuple_element<0,std::pair<const std::string,float> >::type *v80; // rsi
  std::map<std::string,float>::mapped_type *v81; // rax
  _DWORD *v82; // rdx
  char v83; // cl
  common::milog::MiLogStream *v84; // rax
  common::milog::MiLogStream *v85; // rax
  common::milog::MiLogStream *v86; // rax
  common::milog::MiLogStream *v87; // rax
  common::milog::MiLogStream *v88; // rax
  const std::pair<const std::string,float> *v89; // rax
  std::tuple_element<0,std::pair<const std::string,float> >::type *v90; // rsi
  std::map<std::string,float>::mapped_type *v91; // rax
  _DWORD *v92; // rdx
  char v93; // cl
  common::milog::MiLogStream *v94; // rax
  common::milog::MiLogStream *v95; // rax
  common::milog::MiLogStream *v96; // rax
  common::milog::MiLogStream *v97; // rax
  common::milog::MiLogStream *v98; // rax
  float v99; // [rsp+Ch] [rbp-314h]
  float v100; // [rsp+Ch] [rbp-314h]
  int v101; // [rsp+Ch] [rbp-314h]
  int v102; // [rsp+Ch] [rbp-314h]
  std::map<std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ServerGlobalValueEffectInfo>::iterator __for_begin; // [rsp+30h] [rbp-2F0h] BYREF
  std::map<std::string,float>::iterator __for_begin_0; // [rsp+38h] [rbp-2E8h] BYREF
  std::map<std::string,float>::iterator __for_end; // [rsp+40h] [rbp-2E0h] BYREF
  std::map<std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ServerGlobalValueEffectInfo> *__for_range; // [rsp+48h] [rbp-2D8h]
  std::map<std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ServerGlobalValueEffectInfo> *__for_range_0; // [rsp+50h] [rbp-2D0h]
  std::map<std::string,float> *__for_range_1; // [rsp+58h] [rbp-2C8h]
  std::map<std::string,float> *__for_range_2; // [rsp+60h] [rbp-2C0h]
  std::tuple_element<0,std::pair<const std::string,float> >::type *key_2; // [rsp+68h] [rbp-2B8h]
  std::tuple_element<1,std::pair<const std::string,float> >::type *value_2; // [rsp+70h] [rbp-2B0h]
  std::tuple_element<0,std::pair<const std::string,float> >::type *key_1; // [rsp+78h] [rbp-2A8h]
  std::tuple_element<1,std::pair<const std::string,float> >::type *value_1; // [rsp+80h] [rbp-2A0h]
  const std::pair<const std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ServerGlobalValueEffectInfo> *v117; // [rsp+88h] [rbp-298h]
  std::tuple_element<0,const std::pair<const std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ServerGlobalValueEffectInfo> >::type *key_0; // [rsp+90h] [rbp-290h]
  std::tuple_element<1,const std::pair<const std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ServerGlobalValueEffectInfo> >::type *effect_0; // [rsp+98h] [rbp-288h]
  std::tuple_element<0,std::pair<std::_Rb_tree_iterator<std::pair<const std::string,std::tuple<float,unsigned int,unsigned int> > >,bool> >::type *sgv_iter_0; // [rsp+A0h] [rbp-280h]
  std::tuple_element<1,std::pair<std::_Rb_tree_iterator<std::pair<const std::string,std::tuple<float,unsigned int,unsigned int> > >,bool> >::type *is_new_0; // [rsp+A8h] [rbp-278h]
  std::tuple_element<0,std::tuple<float,unsigned int,unsigned int> >::type *value_0; // [rsp+B0h] [rbp-270h]
  std::tuple_element<0,std::tuple<unsigned int,unsigned int> >::type *card_id_0; // [rsp+B8h] [rbp-268h]
  std::tuple_element<0,std::tuple<unsigned int> >::type *effect_id_0; // [rsp+C0h] [rbp-260h]
  const std::pair<const std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ServerGlobalValueEffectInfo> *v125; // [rsp+C8h] [rbp-258h]
  std::tuple_element<0,const std::pair<const std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ServerGlobalValueEffectInfo> >::type *key; // [rsp+D0h] [rbp-250h]
  std::tuple_element<1,const std::pair<const std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ServerGlobalValueEffectInfo> >::type *effect; // [rsp+D8h] [rbp-248h]
  std::tuple_element<0,std::pair<std::_Rb_tree_iterator<std::pair<const std::string,std::tuple<float,unsigned int,unsigned int> > >,bool> >::type *sgv_iter; // [rsp+E0h] [rbp-240h]
  std::tuple_element<1,std::pair<std::_Rb_tree_iterator<std::pair<const std::string,std::tuple<float,unsigned int,unsigned int> > >,bool> >::type *is_new; // [rsp+E8h] [rbp-238h]
  std::tuple_element<0,std::tuple<float,unsigned int,unsigned int> >::type *value; // [rsp+F0h] [rbp-230h]
  std::tuple_element<0,std::tuple<unsigned int,unsigned int> >::type *card_id; // [rsp+F8h] [rbp-228h]
  std::tuple_element<0,std::tuple<unsigned int> >::type *effect_id; // [rsp+100h] [rbp-220h]
  std::tuple<float,unsigned int,unsigned int> v133; // [rsp+108h] [rbp-218h] BYREF
  std::tuple<float,unsigned int,unsigned int> __t; // [rsp+114h] [rbp-20Ch] BYREF
  std::pair<std::_Rb_tree_iterator<std::pair<const std::string,std::tuple<float,unsigned int,unsigned int> > >,bool> __in; // [rsp+120h] [rbp-200h] BYREF
  common::milog::MiLogStream v136; // [rsp+130h] [rbp-1F0h] BYREF
  common::milog::MiLogStream v137; // [rsp+150h] [rbp-1D0h] BYREF
  common::milog::MiLogStream v138; // [rsp+170h] [rbp-1B0h] BYREF
  std::pair<const std::string,float> v139; // [rsp+190h] [rbp-190h] BYREF
  char v140[352]; // [rsp+1C0h] [rbp-160h] BYREF

  v4 = (unsigned __int64)v140;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(320LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "5 48 4 14 gadget_id:1678 64 4 12 card_id:1716 80 48 17 sgv_card_map:1680 160 48 12 sgv_map:1681 "
                        "240 48 17 aura_sgv_map:1713";
  *(_QWORD *)(v4 + 16) = MechanicusMultistagePlay::modifyServerGlobalValueMap;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = 61956;
  v6[536862724] = -218959118;
  v6[536862726] = -219021312;
  v6[536862727] = 62194;
  v6[536862729] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&gear_config->gadget_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)gear_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gear_config->gadget_id >> 3)
                                                               + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  *(_DWORD *)(v4 + 48) = gear_config->gadget_id;
  std::map<std::string,std::tuple<float,unsigned int,unsigned int>>::map((std::map<std::string,std::tuple<float,unsigned int,unsigned int>> *const)(v4 + 80));
  std::map<std::string,float>::map((std::map<std::string,float> *const)(v4 + 160));
  __for_range = &this->sgv_effect_map_;
  __for_begin._M_node = std::map<std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ServerGlobalValueEffectInfo>::begin(&this->sgv_effect_map_)._M_node;
  __for_begin_0._M_node = std::map<std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ServerGlobalValueEffectInfo>::end(&this->sgv_effect_map_)._M_node;
  while ( std::operator!=(
            &__for_begin,
            (const std::_Rb_tree_iterator<std::pair<const std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ServerGlobalValueEffectInfo> >::_Self *)&__for_begin_0) )
  {
    v125 = std::_Rb_tree_iterator<std::pair<std::pair const<unsigned int,unsigned int>,MechanicusMultistagePlay::ServerGlobalValueEffectInfo>>::operator*(&__for_begin);
    key = std::get<0ul,std::pair<unsigned int,unsigned int> const,MechanicusMultistagePlay::ServerGlobalValueEffectInfo>(v125);
    effect = (std::tuple_element<1,const std::pair<const std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ServerGlobalValueEffectInfo> >::type *)std::get<1ul,std::pair<unsigned int,unsigned int> const,MechanicusMultistagePlay::ServerGlobalValueEffectInfo>(v125);
    if ( *(_BYTE *)(((unsigned __int64)key >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)key & 7) + 3) >= *(_BYTE *)(((unsigned __int64)key >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v4 + 64) = key->first;
    if ( *(_BYTE *)(((unsigned __int64)&effect->end_round >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&effect->end_round >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( !effect->end_round )
      goto LABEL_82;
    if ( *(_BYTE *)(((unsigned __int64)&this->current_round_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->current_round_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( this->current_round_ > effect->end_round )
    {
      common::milog::MiLogStream::create(
        &v137,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/scene_multistage_play_impl/mechanicus_multistage_play.cpp",
        "modifyServerGlobalValueMap",
        1687);
      v7 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             &v137,
             (const char (*)[27])"[MECHANICUS] sgv @effect: ");
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &effect->effect_id);
      v9 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v8, (const char (*)[7])" card:");
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v4 + 64));
      v11 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v10, (const char (*)[3])" [");
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &effect->begin_round);
      v13 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v12, (const char (*)[3])", ");
      v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &effect->end_round);
      v15 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              v14,
              (const char (*)[27])"] expired. current_round: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &this->current_round_);
      common::milog::MiLogStream::~MiLogStream(&v137);
    }
    else
    {
LABEL_82:
      if ( std::set<unsigned int>::empty(&effect->target_gadget_set)
        || common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(
             &effect->target_gadget_set,
             (const unsigned int *)(v4 + 48)) )
      {
        std::make_tuple<float const&,unsigned int const&,unsigned int const&>(
          (const float *)&v133.std::_Tuple_impl<1,unsigned int,unsigned int>,
          (const unsigned int *)&effect->value,
          &effect->card_id,
          (const float *)&effect->effect_id,
          v16,
          v17);
        __in = std::map<std::string,std::tuple<float,unsigned int,unsigned int>>::emplace<std::string const&,std::tuple<float,unsigned int,unsigned int>>(
                 (std::map<std::string,std::tuple<float,unsigned int,unsigned int>> *const)(v4 + 80),
                 &effect->key,
                 &v133,
                 &effect->key,
                 v19);
        sgv_iter = std::get<0ul,std::_Rb_tree_iterator<std::pair<std::string const,std::tuple<float,unsigned int,unsigned int>>>,bool>(&__in);
        v20 = std::get<1ul,std::_Rb_tree_iterator<std::pair<std::string const,std::tuple<float,unsigned int,unsigned int>>>,bool>(&__in);
        is_new = v20;
        if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) != 0
          && ((unsigned __int8)v20 & 7) >= *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load1(v20);
        }
        if ( !*is_new )
        {
          __for_end._M_node = std::map<std::string,std::tuple<float,unsigned int,unsigned int>>::end((std::map<std::string,std::tuple<float,unsigned int,unsigned int>> *const)(v4 + 80))._M_node;
          if ( std::operator!=(
                 sgv_iter,
                 (const std::_Rb_tree_iterator<std::pair<const std::string,std::tuple<float,unsigned int,unsigned int> > >::_Self *)&__for_end) )
          {
            n = std::_Rb_tree_iterator<std::pair<std::string const,std::tuple<float,unsigned int,unsigned int>>>::operator->(sgv_iter);
            if ( *(char *)(((unsigned __int64)&n->second >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)((((unsigned __int64)&n->second._M_head_impl + 3) >> 3) + 0x7FFF8000) != 0
              && (((unsigned __int8)n + 43) & 7) >= *(_BYTE *)((((unsigned __int64)&n->second._M_head_impl + 3) >> 3)
                                                             + 0x7FFF8000) )
            {
              n = (std::_Rb_tree_iterator<std::pair<const std::string,std::tuple<float,unsigned int,unsigned int> > >::pointer)__asan_report_load_n(&n->second, 12LL);
            }
            __t = n->second;
            value = std::get<0ul,float,unsigned int,unsigned int>(&__t);
            card_id = std::get<1ul,float,unsigned int,unsigned int>(&__t);
            effect_id = std::get<2ul,float,unsigned int,unsigned int>(&__t);
            common::milog::MiLogStream::create(
              &v138,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/scene/scene_multistage_play_impl/mechanicus_multistage_play.cpp",
              "modifyServerGlobalValueMap",
              1703);
            v22 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                    &v138,
                    (const char (*)[32])"[MECHANICUS] duplicate sgv key ");
            v23 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v22, &effect->key);
            v24 = common::milog::MiLogStream::operator<<<char [4],(char *[4])0>(v23, (const char (*)[4])off_25AD15E0);
            v25 = common::milog::MiLogStream::operator<<<float,(float *)0>(v24, value);
            v26 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v25, (const char (*)[3])", ");
            v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, card_id);
            v28 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v27, (const char (*)[3])", ");
            v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, effect_id);
            v30 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v29, (const char (*)[2])"]");
            v31 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v30, (const char (*)[5])"vs [");
            v32 = common::milog::MiLogStream::operator<<<float,(float *)0>(v31, &effect->value);
            v33 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v32, (const char (*)[3])", ");
            v34 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v33, &effect->card_id);
            v35 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v34, (const char (*)[3])", ");
            v36 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v35, &effect->effect_id);
            common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v36, (const char (*)[2])"]");
            common::milog::MiLogStream::~MiLogStream(&v138);
          }
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&effect->value >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&effect->value >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          v99 = effect->value;
          p_key = &effect->key;
          v38 = std::map<std::string,float>::operator[]((std::map<std::string,float> *const)(v4 + 160), &effect->key);
          v39 = v38;
          v40 = *(_BYTE *)(((unsigned __int64)v38 >> 3) + 0x7FFF8000);
          if ( v40 != 0 && (char)(((unsigned __int8)v38 & 7) + 3) >= v40 )
          {
            LOBYTE(p_key) = v40 != 0;
            __asan_report_store4(v38, p_key, (_BYTE)v38);
          }
          *v39 = v99;
        }
      }
    }
    std::_Rb_tree_iterator<std::pair<std::pair const<unsigned int,unsigned int>,MechanicusMultistagePlay::ServerGlobalValueEffectInfo>>::operator++(&__for_begin);
  }
  std::map<std::string,float>::map((std::map<std::string,float> *const)(v4 + 240));
  __for_range_0 = &this->sgv_aura_map_;
  __for_begin._M_node = std::map<std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ServerGlobalValueEffectInfo>::begin(&this->sgv_aura_map_)._M_node;
  __for_begin_0._M_node = std::map<std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ServerGlobalValueEffectInfo>::end(__for_range_0)._M_node;
  while ( std::operator!=(
            &__for_begin,
            (const std::_Rb_tree_iterator<std::pair<const std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ServerGlobalValueEffectInfo> >::_Self *)&__for_begin_0) )
  {
    v117 = std::_Rb_tree_iterator<std::pair<std::pair const<unsigned int,unsigned int>,MechanicusMultistagePlay::ServerGlobalValueEffectInfo>>::operator*(&__for_begin);
    key_0 = std::get<0ul,std::pair<unsigned int,unsigned int> const,MechanicusMultistagePlay::ServerGlobalValueEffectInfo>(v117);
    effect_0 = (std::tuple_element<1,const std::pair<const std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ServerGlobalValueEffectInfo> >::type *)std::get<1ul,std::pair<unsigned int,unsigned int> const,MechanicusMultistagePlay::ServerGlobalValueEffectInfo>(v117);
    if ( *(_BYTE *)(((unsigned __int64)key_0 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)key_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)key_0 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v4 + 64) = key_0->first;
    if ( *(_BYTE *)(((unsigned __int64)&effect_0->end_round >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&effect_0->end_round >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( !effect_0->end_round )
      goto LABEL_46;
    if ( *(_BYTE *)(((unsigned __int64)&this->current_round_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->current_round_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( this->current_round_ > effect_0->end_round )
    {
      common::milog::MiLogStream::create(
        &v136,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/scene_multistage_play_impl/mechanicus_multistage_play.cpp",
        "modifyServerGlobalValueMap",
        1719);
      v41 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
              &v136,
              (const char (*)[32])"[MECHANICUS] aura sgv @effect: ");
      v42 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v41, &effect_0->effect_id);
      v43 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v42, (const char (*)[7])" card:");
      v44 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v43, (const unsigned int *)(v4 + 64));
      v45 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v44, (const char (*)[3])" [");
      v46 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v45, &effect_0->begin_round);
      v47 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v46, (const char (*)[3])", ");
      v48 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v47, &effect_0->end_round);
      v49 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              v48,
              (const char (*)[27])"] expired. current_round: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v49, &this->current_round_);
      common::milog::MiLogStream::~MiLogStream(&v136);
    }
    else
    {
LABEL_46:
      if ( *(_BYTE *)(((unsigned __int64)&effect_0->aura_radius >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&effect_0->aura_radius >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      if ( !MechanicusMultistagePlay::isPosInAuras(this, &effect_0->target_gadget_set, effect_0->aura_radius, pos) )
      {
        common::milog::MiLogStream::create(
          &v137,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/scene/scene_multistage_play_impl/mechanicus_multistage_play.cpp",
          "modifyServerGlobalValueMap",
          1726);
        v52 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                &v137,
                (const char (*)[32])"[MECHANICUS] aura sgv @effect: ");
        v53 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v52, &effect_0->effect_id);
        v54 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v53, (const char (*)[7])" card:");
        v55 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v54,
                (const unsigned int *)(v4 + 64));
        v56 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                v55,
                (const char (*)[28])" our of range. target_pos: ");
        operator<<(v56, pos);
        common::milog::MiLogStream::~MiLogStream(&v137);
      }
      else
      {
        std::make_tuple<float const&,unsigned int const&,unsigned int const&>(
          (const float *)&v133.std::_Tuple_impl<1,unsigned int,unsigned int>,
          (const unsigned int *)&effect_0->value,
          &effect_0->card_id,
          (const float *)&effect_0->effect_id,
          v50,
          v51);
        __in = std::map<std::string,std::tuple<float,unsigned int,unsigned int>>::emplace<std::string const&,std::tuple<float,unsigned int,unsigned int>>(
                 (std::map<std::string,std::tuple<float,unsigned int,unsigned int>> *const)(v4 + 80),
                 &effect_0->key,
                 &v133,
                 &effect_0->key,
                 v57);
        sgv_iter_0 = std::get<0ul,std::_Rb_tree_iterator<std::pair<std::string const,std::tuple<float,unsigned int,unsigned int>>>,bool>(&__in);
        v58 = std::get<1ul,std::_Rb_tree_iterator<std::pair<std::string const,std::tuple<float,unsigned int,unsigned int>>>,bool>(&__in);
        is_new_0 = v58;
        if ( *(_BYTE *)(((unsigned __int64)v58 >> 3) + 0x7FFF8000) != 0
          && ((unsigned __int8)v58 & 7) >= *(_BYTE *)(((unsigned __int64)v58 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load1(v58);
        }
        if ( !*is_new_0 )
        {
          __for_end._M_node = std::map<std::string,std::tuple<float,unsigned int,unsigned int>>::end((std::map<std::string,std::tuple<float,unsigned int,unsigned int>> *const)(v4 + 80))._M_node;
          if ( std::operator!=(
                 sgv_iter_0,
                 (const std::_Rb_tree_iterator<std::pair<const std::string,std::tuple<float,unsigned int,unsigned int> > >::_Self *)&__for_end) )
          {
            v59 = std::_Rb_tree_iterator<std::pair<std::string const,std::tuple<float,unsigned int,unsigned int>>>::operator->(sgv_iter_0);
            if ( *(char *)(((unsigned __int64)&v59->second >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)((((unsigned __int64)&v59->second._M_head_impl + 3) >> 3) + 0x7FFF8000) != 0
              && (((unsigned __int8)v59 + 43) & 7) >= *(_BYTE *)((((unsigned __int64)&v59->second._M_head_impl + 3) >> 3)
                                                               + 0x7FFF8000) )
            {
              v59 = (std::_Rb_tree_iterator<std::pair<const std::string,std::tuple<float,unsigned int,unsigned int> > >::pointer)__asan_report_load_n(&v59->second, 12LL);
            }
            __t = v59->second;
            value_0 = std::get<0ul,float,unsigned int,unsigned int>(&__t);
            card_id_0 = std::get<1ul,float,unsigned int,unsigned int>(&__t);
            effect_id_0 = std::get<2ul,float,unsigned int,unsigned int>(&__t);
            common::milog::MiLogStream::create(
              &v138,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/scene/scene_multistage_play_impl/mechanicus_multistage_play.cpp",
              "modifyServerGlobalValueMap",
              1737);
            v60 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                    &v138,
                    (const char (*)[32])"[MECHANICUS] duplicate sgv key ");
            v61 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v60, &effect_0->key);
            v62 = common::milog::MiLogStream::operator<<<char [4],(char *[4])0>(v61, (const char (*)[4])off_25AD15E0);
            v63 = common::milog::MiLogStream::operator<<<float,(float *)0>(v62, value_0);
            v64 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v63, (const char (*)[3])", ");
            v65 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v64, card_id_0);
            v66 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v65, (const char (*)[3])", ");
            v67 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v66, effect_id_0);
            v68 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v67, (const char (*)[2])"]");
            v69 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v68, (const char (*)[5])"vs [");
            v70 = common::milog::MiLogStream::operator<<<float,(float *)0>(v69, &effect_0->value);
            v71 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v70, (const char (*)[3])", ");
            v72 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v71, &effect_0->card_id);
            v73 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v72, (const char (*)[3])", ");
            v74 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v73, &effect_0->effect_id);
            common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v74, (const char (*)[2])"]");
            common::milog::MiLogStream::~MiLogStream(&v138);
          }
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&effect_0->value >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&effect_0->value >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          v100 = effect_0->value;
          v75 = &effect_0->key;
          v76 = std::map<std::string,float>::operator[]((std::map<std::string,float> *const)(v4 + 240), &effect_0->key);
          v77 = v76;
          v78 = *(_BYTE *)(((unsigned __int64)v76 >> 3) + 0x7FFF8000);
          if ( v78 != 0 && (char)(((unsigned __int8)v76 & 7) + 3) >= v78 )
          {
            LOBYTE(v75) = v78 != 0;
            __asan_report_store4(v76, v75, (_BYTE)v76);
          }
          *v77 = v100;
        }
      }
    }
    std::_Rb_tree_iterator<std::pair<std::pair const<unsigned int,unsigned int>,MechanicusMultistagePlay::ServerGlobalValueEffectInfo>>::operator++(&__for_begin);
  }
  __for_range_1 = (std::map<std::string,float> *)(v4 + 160);
  __for_begin_0._M_node = std::map<std::string,float>::begin((std::map<std::string,float> *const)(v4 + 160))._M_node;
  __for_end._M_node = std::map<std::string,float>::end(__for_range_1)._M_node;
  while ( std::operator!=(&__for_begin_0, &__for_end) )
  {
    v79 = std::_Rb_tree_iterator<std::pair<std::string const,float>>::operator*(&__for_begin_0);
    std::pair<std::string const,float>::pair(&v139, v79);
    key_1 = std::get<0ul,std::string const,float>(&v139);
    value_1 = std::get<1ul,std::string const,float>(&v139);
    if ( *(_BYTE *)(((unsigned __int64)value_1 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)value_1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)value_1 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    v101 = *(_DWORD *)value_1;
    v80 = key_1;
    v81 = std::map<std::string,float>::operator[](global_value_map, key_1);
    v82 = v81;
    v83 = *(_BYTE *)(((unsigned __int64)v81 >> 3) + 0x7FFF8000);
    if ( v83 != 0 && (char)(((unsigned __int8)v81 & 7) + 3) >= v83 )
    {
      LOBYTE(v80) = v83 != 0;
      __asan_report_store4(v81, v80, (_BYTE)v81);
    }
    *v82 = v101;
    std::pair<std::string const,float>::~pair(&v139);
    std::_Rb_tree_iterator<std::pair<std::string const,float>>::operator++(&__for_begin_0);
  }
  common::milog::MiLogStream::create(
    &v138,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/scene_multistage_play_impl/mechanicus_multistage_play.cpp",
    "modifyServerGlobalValueMap",
    1751);
  v84 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
          &v138,
          (const char (*)[29])"[MECHANICUS] effect sgv map:");
  v85 = common::milog::MiLogStream::operator<<<std::string,float>(v84, (const std::map<std::string,float> *)(v4 + 160));
  v86 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v85, (const char (*)[11])off_25AD1720);
  v87 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v86, &gear_config->id);
  v88 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v87, (const char (*)[9])" gadget:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v88, &gear_config->gadget_id);
  common::milog::MiLogStream::~MiLogStream(&v138);
  __for_range_2 = (std::map<std::string,float> *)(v4 + 240);
  __for_begin_0._M_node = std::map<std::string,float>::begin((std::map<std::string,float> *const)(v4 + 240))._M_node;
  __for_end._M_node = std::map<std::string,float>::end(__for_range_2)._M_node;
  while ( std::operator!=(&__for_begin_0, &__for_end) )
  {
    v89 = std::_Rb_tree_iterator<std::pair<std::string const,float>>::operator*(&__for_begin_0);
    std::pair<std::string const,float>::pair(&v139, v89);
    key_2 = std::get<0ul,std::string const,float>(&v139);
    value_2 = std::get<1ul,std::string const,float>(&v139);
    if ( *(_BYTE *)(((unsigned __int64)value_2 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)value_2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)value_2 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    v102 = *(_DWORD *)value_2;
    v90 = key_2;
    v91 = std::map<std::string,float>::operator[](global_value_map, key_2);
    v92 = v91;
    v93 = *(_BYTE *)(((unsigned __int64)v91 >> 3) + 0x7FFF8000);
    if ( v93 != 0 && (char)(((unsigned __int8)v91 & 7) + 3) >= v93 )
    {
      LOBYTE(v90) = v93 != 0;
      __asan_report_store4(v91, v90, (_BYTE)v91);
    }
    *v92 = v102;
    std::pair<std::string const,float>::~pair(&v139);
    std::_Rb_tree_iterator<std::pair<std::string const,float>>::operator++(&__for_begin_0);
  }
  common::milog::MiLogStream::create(
    &v138,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/scene_multistage_play_impl/mechanicus_multistage_play.cpp",
    "modifyServerGlobalValueMap",
    1757);
  v94 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
          &v138,
          (const char (*)[34])"[MECHANICUS] effect aura sgv map:");
  v95 = common::milog::MiLogStream::operator<<<std::string,float>(v94, (const std::map<std::string,float> *)(v4 + 240));
  v96 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v95, (const char (*)[11])off_25AD1720);
  v97 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v96, &gear_config->id);
  v98 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v97, (const char (*)[9])" gadget:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v98, &gear_config->gadget_id);
  common::milog::MiLogStream::~MiLogStream(&v138);
  std::map<std::string,float>::~map((std::map<std::string,float> *const)(v4 + 240));
  std::map<std::string,float>::~map((std::map<std::string,float> *const)(v4 + 160));
  std::map<std::string,std::tuple<float,unsigned int,unsigned int>>::~map((std::map<std::string,std::tuple<float,unsigned int,unsigned int>> *const)(v4 + 80));
  if ( v140 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8024) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1761: range 000000001602A964-000000001602A96E
void __cdecl MechanicusMultistagePlay::procServerGlobalValueOnNewRound(MechanicusMultistagePlay *const this)
{
  ;
};

// Line 1765: range 000000001602A970-000000001602B183
void __fastcall MechanicusMultistagePlay::getExpiredServerGlobalValueOnNewRound(
        MechanicusMultistagePlay *const this,
        uint32_t gadget_id,
        std::map<std::string,float> *expired_map)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  uint32_t current_round; // ecx
  std::string *p_key; // rsi
  std::map<std::string,float>::mapped_type *v9; // rax
  float *v10; // rdx
  char v11; // cl
  uint32_t v12; // ecx
  std::string *v13; // rsi
  std::map<std::string,float>::mapped_type *v14; // rax
  float *v15; // rdx
  char v16; // cl
  std::tuple_element<0,std::pair<const std::string,float> >::type *v17; // rsi
  std::map<std::string,float>::mapped_type *v18; // rax
  _DWORD *v19; // rdx
  char v20; // cl
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  float v26; // [rsp+4h] [rbp-18Ch]
  float v27; // [rsp+4h] [rbp-18Ch]
  int v28; // [rsp+4h] [rbp-18Ch]
  std::map<std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ServerGlobalValueEffectInfo>::iterator __for_begin; // [rsp+20h] [rbp-170h] BYREF
  std::map<std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ServerGlobalValueEffectInfo>::iterator __for_end; // [rsp+28h] [rbp-168h] BYREF
  std::map<std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ServerGlobalValueEffectInfo> *__for_range; // [rsp+30h] [rbp-160h]
  std::map<std::string,float> *__for_range_0; // [rsp+38h] [rbp-158h]
  std::pair<const std::string,float> *__in; // [rsp+40h] [rbp-150h]
  std::tuple_element<0,std::pair<const std::string,float> >::type *key_0; // [rsp+48h] [rbp-148h]
  std::tuple_element<1,std::pair<const std::string,float> >::type *value; // [rsp+50h] [rbp-140h]
  const std::pair<const std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ServerGlobalValueEffectInfo> *v37; // [rsp+58h] [rbp-138h]
  std::tuple_element<0,const std::pair<const std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ServerGlobalValueEffectInfo> >::type *key; // [rsp+60h] [rbp-130h]
  std::tuple_element<1,const std::pair<const std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ServerGlobalValueEffectInfo> >::type *effect; // [rsp+68h] [rbp-128h]
  common::milog::MiLogStream v40; // [rsp+70h] [rbp-120h] BYREF
  char v41[256]; // [rsp+90h] [rbp-100h] BYREF

  v3 = (unsigned __int64)v41;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 14 gadget_id:1764 64 48 19 active_sgv_map:1766 144 48 19 expire_sgv_map:1767";
  *(_QWORD *)(v3 + 16) = MechanicusMultistagePlay::getExpiredServerGlobalValueOnNewRound;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862723] = -219021312;
  v5[536862724] = 62194;
  v5[536862726] = -202116109;
  *(_DWORD *)(v3 + 48) = gadget_id;
  std::map<std::string,float>::map((std::map<std::string,float> *const)(v3 + 64));
  std::map<std::string,float>::map((std::map<std::string,float> *const)(v3 + 144));
  __for_range = &this->sgv_effect_map_;
  __for_begin._M_node = std::map<std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ServerGlobalValueEffectInfo>::begin(&this->sgv_effect_map_)._M_node;
  __for_end._M_node = std::map<std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ServerGlobalValueEffectInfo>::end(&this->sgv_effect_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v37 = std::_Rb_tree_iterator<std::pair<std::pair const<unsigned int,unsigned int>,MechanicusMultistagePlay::ServerGlobalValueEffectInfo>>::operator*(&__for_begin);
    key = std::get<0ul,std::pair<unsigned int,unsigned int> const,MechanicusMultistagePlay::ServerGlobalValueEffectInfo>(v37);
    effect = (std::tuple_element<1,const std::pair<const std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ServerGlobalValueEffectInfo> >::type *)std::get<1ul,std::pair<unsigned int,unsigned int> const,MechanicusMultistagePlay::ServerGlobalValueEffectInfo>(v37);
    if ( std::set<unsigned int>::empty(&effect->target_gadget_set)
      || common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(
           &effect->target_gadget_set,
           (const unsigned int *)(v3 + 48)) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&effect->end_round >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&effect->end_round >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      if ( !effect->end_round )
        goto LABEL_20;
      if ( *(_BYTE *)(((unsigned __int64)&this->current_round_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->current_round_ >> 3)
                                                             + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      current_round = this->current_round_;
      if ( *(_BYTE *)(((unsigned __int64)&effect->begin_round >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)effect + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&effect->begin_round >> 3)
                                                              + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( current_round >= effect->begin_round && this->current_round_ <= effect->end_round )
      {
LABEL_20:
        if ( *(_BYTE *)(((unsigned __int64)&effect->value >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&effect->value >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        v26 = effect->value;
        p_key = &effect->key;
        v9 = std::map<std::string,float>::operator[]((std::map<std::string,float> *const)(v3 + 64), &effect->key);
        v10 = v9;
        v11 = *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000);
        if ( v11 != 0 && (char)(((unsigned __int8)v9 & 7) + 3) >= v11 )
        {
          LOBYTE(p_key) = v11 != 0;
          __asan_report_store4(v9, p_key, (_BYTE)v9);
        }
        *v10 = v26;
      }
      if ( *(_BYTE *)(((unsigned __int64)&effect->end_round >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&effect->end_round >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      if ( effect->end_round )
      {
        v12 = effect->end_round + 1;
        if ( *(_BYTE *)(((unsigned __int64)&this->current_round_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->current_round_ >> 3)
                                                               + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        if ( v12 == this->current_round_ )
        {
          if ( *(_BYTE *)(((unsigned __int64)&effect->value >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&effect->value >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          v27 = effect->value;
          v13 = &effect->key;
          v14 = std::map<std::string,float>::operator[]((std::map<std::string,float> *const)(v3 + 144), &effect->key);
          v15 = v14;
          v16 = *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000);
          if ( v16 != 0 && (char)(((unsigned __int8)v14 & 7) + 3) >= v16 )
          {
            LOBYTE(v13) = v16 != 0;
            __asan_report_store4(v14, v13, (_BYTE)v14);
          }
          *v15 = v27;
        }
      }
    }
    std::_Rb_tree_iterator<std::pair<std::pair const<unsigned int,unsigned int>,MechanicusMultistagePlay::ServerGlobalValueEffectInfo>>::operator++(&__for_begin);
  }
  __for_range_0 = (std::map<std::string,float> *)(v3 + 144);
  __for_begin._M_node = std::map<std::string,float>::begin((std::map<std::string,float> *const)(v3 + 144))._M_node;
  __for_end._M_node = std::map<std::string,float>::end(__for_range_0)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<const std::string,float> >::_Self *)&__for_begin,
            (const std::_Rb_tree_iterator<std::pair<const std::string,float> >::_Self *)&__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<std::string const,float>>::operator*((const std::_Rb_tree_iterator<std::pair<const std::string,float> > *const)&__for_begin);
    key_0 = std::get<0ul,std::string const,float>(__in);
    value = std::get<1ul,std::string const,float>(__in);
    if ( !common::tools::MiscUtils::isContains<std::map<std::string,float>,std::string>(
            (std::map<std::string,float> *)(v3 + 64),
            key_0) )
    {
      if ( *(_BYTE *)(((unsigned __int64)value >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)value & 7) + 3) >= *(_BYTE *)(((unsigned __int64)value >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      v28 = *(_DWORD *)value;
      v17 = key_0;
      v18 = std::map<std::string,float>::operator[](expired_map, key_0);
      v19 = v18;
      v20 = *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000);
      if ( v20 != 0 && (char)(((unsigned __int8)v18 & 7) + 3) >= v20 )
      {
        LOBYTE(v17) = v20 != 0;
        __asan_report_store4(v18, v17, (_BYTE)v18);
      }
      *v19 = v28;
    }
    std::_Rb_tree_iterator<std::pair<std::string const,float>>::operator++((std::_Rb_tree_iterator<std::pair<const std::string,float> > *const)&__for_begin);
  }
  common::milog::MiLogStream::create(
    &v40,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/scene_multistage_play_impl/mechanicus_multistage_play.cpp",
    "getExpiredServerGlobalValueOnNewRound",
    1799);
  v21 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
          &v40,
          (const char (*)[29])"[MECHANICUS] expire sgv map:");
  v22 = common::milog::MiLogStream::operator<<<std::string,float>(v21, expired_map);
  v23 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v22, (const char (*)[10])" @round: ");
  v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &this->current_round_);
  v25 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v24, (const char (*)[10])" gadget: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, (const unsigned int *)(v3 + 48));
  common::milog::MiLogStream::~MiLogStream(&v40);
  std::map<std::string,float>::~map((std::map<std::string,float> *const)(v3 + 144));
  std::map<std::string,float>::~map((std::map<std::string,float> *const)(v3 + 64));
  if ( v41 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF800C) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = -168430091;
  }
};

// Line 1803: range 000000001602B184-000000001602BB93
void __cdecl MechanicusMultistagePlay::procKillPointsModify(
        MechanicusMultistagePlay *const this,
        uint32_t *kill_points)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  int32_t factor; // r14d
  char *v13; // rsi
  std::map<unsigned int,int>::mapped_type *v14; // rax
  int32_t *v15; // rdx
  char v16; // cl
  int32_t delta; // r14d
  char *v18; // rsi
  std::map<unsigned int,int>::mapped_type *v19; // rax
  int32_t *v20; // rdx
  char v21; // cl
  unsigned int v22; // r14d
  double v23; // xmm0_8
  unsigned __int64 v24; // rax
  char *v25; // rsi
  unsigned __int64 v26; // rax
  unsigned int v27; // ecx
  char v28; // dl
  bool v29; // dl
  uint32_t v30; // edi
  bool v31; // dl
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rdx
  std::map<std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ModifierEffectInfo>::iterator __for_end; // [rsp+18h] [rbp-1D8h] BYREF
  std::map<std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ModifierEffectInfo> *__for_range; // [rsp+20h] [rbp-1D0h]
  const std::pair<const std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ModifierEffectInfo> *v44; // [rsp+28h] [rbp-1C8h]
  std::tuple_element<0,const std::pair<const std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ModifierEffectInfo> >::type *key; // [rsp+30h] [rbp-1C0h]
  std::tuple_element<1,const std::pair<const std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ModifierEffectInfo> >::type *modifier; // [rsp+38h] [rbp-1B8h]
  common::milog::MiLogStream v47; // [rsp+40h] [rbp-1B0h] BYREF
  char v48[400]; // [rsp+60h] [rbp-190h] BYREF

  v2 = (unsigned __int64)v48;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 48 4 12 card_id:1810 64 8 17 total_factor:1804 96 8 16 total_delta:1805 128 8 20 modified_poin"
                        "ts:1831 160 8 18 result_points:1833 192 48 15 factor_map:1806 272 48 14 delta_map:1807";
  *(_QWORD *)(v2 + 16) = MechanicusMultistagePlay::procKillPointsModify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862727] = -219021312;
  v4[536862728] = 62194;
  v4[536862730] = -202116109;
  *(_QWORD *)(v2 + 64) = 0LL;
  *(_QWORD *)(v2 + 96) = 0LL;
  std::map<unsigned int,int>::map((std::map<unsigned int,int> *const)(v2 + 192));
  std::map<unsigned int,int>::map((std::map<unsigned int,int> *const)(v2 + 272));
  __for_range = &this->kill_points_modifier_map_;
  *(std::map<std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ModifierEffectInfo>::iterator *)(v2 + 160) = std::map<std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ModifierEffectInfo>::begin(&this->kill_points_modifier_map_);
  __for_end._M_node = std::map<std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ModifierEffectInfo>::end(__for_range)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<const std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ModifierEffectInfo> >::_Self *)(v2 + 160),
            &__for_end) )
  {
    v44 = std::_Rb_tree_iterator<std::pair<std::pair const<unsigned int,unsigned int>,MechanicusMultistagePlay::ModifierEffectInfo>>::operator*((const std::_Rb_tree_iterator<std::pair<const std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ModifierEffectInfo> > *const)(v2 + 160));
    key = std::get<0ul,std::pair<unsigned int,unsigned int> const,MechanicusMultistagePlay::ModifierEffectInfo>(v44);
    modifier = (std::tuple_element<1,const std::pair<const std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ModifierEffectInfo> >::type *)std::get<1ul,std::pair<unsigned int,unsigned int> const,MechanicusMultistagePlay::ModifierEffectInfo>(v44);
    if ( *(_BYTE *)(((unsigned __int64)key >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)key & 7) + 3) >= *(_BYTE *)(((unsigned __int64)key >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v2 + 48) = key->first;
    if ( *(_BYTE *)(((unsigned __int64)&modifier->end_round >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)modifier + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&modifier->end_round >> 3)
                                                              + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( !modifier->end_round )
      goto LABEL_15;
    if ( *(_BYTE *)(((unsigned __int64)&this->current_round_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->current_round_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( this->current_round_ > modifier->end_round )
    {
      common::milog::MiLogStream::create(
        &v47,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/scene_multistage_play_impl/mechanicus_multistage_play.cpp",
        "procKillPointsModify",
        1813);
      v5 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
             &v47,
             (const char (*)[36])"[MECHANICUS] points modifier card: ");
      v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
      v7 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v6, (const char (*)[3])" [");
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &modifier->begin_round);
      v9 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v8, (const char (*)[3])", ");
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &modifier->end_round);
      v11 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              v10,
              (const char (*)[27])"] expired. current_round: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &this->current_round_);
      common::milog::MiLogStream::~MiLogStream(&v47);
    }
    else
    {
LABEL_15:
      if ( *(_BYTE *)(((unsigned __int64)&modifier->factor >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&modifier->factor >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      if ( modifier->factor )
      {
        factor = modifier->factor;
        v13 = (char *)(v2 + 48);
        v14 = std::map<unsigned int,int>::operator[](
                (std::map<unsigned int,int> *const)(v2 + 192),
                (const std::map<unsigned int,int>::key_type *)(v2 + 48));
        v15 = v14;
        v16 = *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000);
        if ( v16 != 0 && (char)(((unsigned __int8)v14 & 7) + 3) >= v16 )
        {
          LOBYTE(v13) = v16 != 0;
          __asan_report_store4(v14, v13, (_BYTE)v14);
        }
        *v15 = factor;
        if ( *(_BYTE *)(((unsigned __int64)&modifier->factor >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&modifier->factor >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        *(SelectType_10 *)(v2 + 64) = SAFE_ADD<double,int>(*(double *)(v2 + 64), modifier->factor);
      }
      if ( *(_BYTE *)(((unsigned __int64)&modifier->delta >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)modifier + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&modifier->delta >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( modifier->delta )
      {
        delta = modifier->delta;
        v18 = (char *)(v2 + 48);
        v19 = std::map<unsigned int,int>::operator[](
                (std::map<unsigned int,int> *const)(v2 + 272),
                (const std::map<unsigned int,int>::key_type *)(v2 + 48));
        v20 = v19;
        v21 = *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000);
        if ( v21 != 0 && (char)(((unsigned __int8)v19 & 7) + 3) >= v21 )
        {
          LOBYTE(v18) = v21 != 0;
          __asan_report_store4(v19, v18, (_BYTE)v19);
        }
        *v20 = delta;
        if ( *(_BYTE *)(((unsigned __int64)&modifier->delta >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)modifier + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&modifier->delta >> 3)
                                                                  + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        *(SelectType_10 *)(v2 + 96) = SAFE_ADD<double,int>(*(double *)(v2 + 96), modifier->delta);
      }
    }
    std::_Rb_tree_iterator<std::pair<std::pair const<unsigned int,unsigned int>,MechanicusMultistagePlay::ModifierEffectInfo>>::operator++((std::_Rb_tree_iterator<std::pair<const std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ModifierEffectInfo> > *const)(v2 + 160));
  }
  if ( *(_BYTE *)(((unsigned __int64)kill_points >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)kill_points & 7) + 3) >= *(_BYTE *)(((unsigned __int64)kill_points >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  v22 = *kill_points;
  v23 = SAFE_MULTIPLY<unsigned int,double>(*kill_points, 0.0001 * *(double *)(v2 + 64));
  *(SelectType_11 *)(v2 + 128) = SAFE_ADD<double,unsigned int>(v23, v22);
  __for_end._M_node = 0LL;
  v24 = (unsigned __int64)std::max<double>((const double *)&__for_end, (const double *)(v2 + 128));
  if ( *(_BYTE *)((v24 >> 3) + 0x7FFF8000) )
    v24 = __asan_report_load8();
  *(_QWORD *)(v2 + 128) = *(_QWORD *)v24;
  *(SelectType_9 *)(v2 + 160) = SAFE_ADD<double,double>(*(double *)(v2 + 128), *(double *)(v2 + 96));
  __for_end._M_node = 0LL;
  v25 = (char *)(v2 + 160);
  v26 = (unsigned __int64)std::max<double>((const double *)&__for_end, (const double *)(v2 + 160));
  if ( *(_BYTE *)((v26 >> 3) + 0x7FFF8000) )
    v26 = __asan_report_load8();
  *(_QWORD *)(v2 + 160) = *(_QWORD *)v26;
  v27 = std::numeric_limits<unsigned int>::max();
  v28 = *(_BYTE *)(((unsigned __int64)kill_points >> 3) + 0x7FFF8000);
  LOBYTE(v25) = v28 != 0;
  v29 = v28 != 0 && (char)(((unsigned __int8)kill_points & 7) + 3) >= v28;
  if ( v29 )
    __asan_report_store4(kill_points, v25, v29);
  *kill_points = v27;
  if ( (double)(int)std::numeric_limits<unsigned int>::max() > *(double *)(v2 + 160) )
  {
    v30 = (int)*(double *)(v2 + 160);
    v31 = *(_BYTE *)(((unsigned __int64)kill_points >> 3) + 0x7FFF8000) != 0
       && (char)(((unsigned __int8)kill_points & 7) + 3) >= *(_BYTE *)(((unsigned __int64)kill_points >> 3) + 0x7FFF8000);
    if ( v31 )
    {
      v30 = (unsigned int)kill_points;
      __asan_report_store4(kill_points, ((unsigned __int8)kill_points & 7u) + 3, v31);
    }
    *kill_points = v30;
  }
  common::milog::MiLogStream::create(
    &v47,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/scene_multistage_play_impl/mechanicus_multistage_play.cpp",
    "procKillPointsModify",
    1841);
  v32 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
          &v47,
          (const char (*)[38])"[MECHANICUS] kill points factor map: ");
  v33 = common::milog::MiLogStream::operator<<<unsigned int,int>(v32, (const std::map<unsigned int,int> *)(v2 + 192));
  v34 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v33, (const char (*)[15])" total factor:");
  v35 = common::milog::MiLogStream::operator<<<double,(double *)0>(v34, (const double *)(v2 + 64));
  v36 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v35, (const char (*)[14])"; delta map: ");
  v37 = common::milog::MiLogStream::operator<<<unsigned int,int>(v36, (const std::map<unsigned int,int> *)(v2 + 272));
  v38 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v37, (const char (*)[15])", total delta:");
  v39 = common::milog::MiLogStream::operator<<<double,(double *)0>(v38, (const double *)(v2 + 96));
  v40 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v39, (const char (*)[21])" final kill_points: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v40, kill_points);
  common::milog::MiLogStream::~MiLogStream(&v47);
  std::map<unsigned int,int>::~map((std::map<unsigned int,int> *const)(v2 + 272));
  std::map<unsigned int,int>::~map((std::map<unsigned int,int> *const)(v2 + 192));
  if ( v48 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF801C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8028) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8028) = -168430091;
  }
};

// Line 1847: range 000000001602BB94-000000001602C4C2
void __cdecl MechanicusMultistagePlay::onMonsterDie(
        MechanicusMultistagePlay *const this,
        ChangeHpContext *context,
        Monster *monster)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  uint32_t v6; // ecx
  char v7; // dl
  __int64 v8; // rsi
  bool v9; // dl
  uint32_t v10; // esi
  common::milog::MiLogStream *v11; // r14
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rdx
  __int64 v18; // rsi
  uint32_t v19; // edx
  char v20; // al
  std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::reference v21; // rax
  std::pair<unsigned int const,unsigned int> *v22; // rdx
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // r14
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  unsigned int val; // [rsp+28h] [rbp-168h] BYREF
  uint32_t total_bonus; // [rsp+2Ch] [rbp-164h]
  std::unordered_map<unsigned int,unsigned int>::iterator __for_begin_0; // [rsp+30h] [rbp-160h] BYREF
  std::unordered_map<unsigned int,MechanicusMultistagePlay::PlayerInfo>::iterator __for_begin; // [rsp+38h] [rbp-158h] BYREF
  std::unordered_map<unsigned int,MechanicusMultistagePlay::PlayerInfo> *__for_range; // [rsp+40h] [rbp-150h]
  std::unordered_map<unsigned int,unsigned int> *__for_range_0; // [rsp+48h] [rbp-148h]
  std::unordered_map<unsigned int,MechanicusMultistagePlay::PlayerInfo> *__for_range_1; // [rsp+50h] [rbp-140h]
  std::pair<unsigned int const,MechanicusMultistagePlay::PlayerInfo> *v38; // [rsp+58h] [rbp-138h]
  std::tuple_element<0,std::pair<unsigned int const,MechanicusMultistagePlay::PlayerInfo> >::type *uid_0; // [rsp+60h] [rbp-130h]
  std::tuple_element<1,std::pair<unsigned int const,MechanicusMultistagePlay::PlayerInfo> >::type *player_info_0; // [rsp+68h] [rbp-128h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *_; // [rsp+70h] [rbp-120h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *points; // [rsp+78h] [rbp-118h]
  std::pair<unsigned int const,MechanicusMultistagePlay::PlayerInfo> *__in; // [rsp+80h] [rbp-110h]
  std::tuple_element<0,std::pair<unsigned int const,MechanicusMultistagePlay::PlayerInfo> >::type *uid; // [rsp+88h] [rbp-108h]
  std::tuple_element<1,std::pair<unsigned int const,MechanicusMultistagePlay::PlayerInfo> >::type *player_info; // [rsp+90h] [rbp-100h]
  std::pair<unsigned int const,unsigned int> __for_end; // [rsp+98h] [rbp-F8h] BYREF
  common::milog::MiLogStream v47; // [rsp+A0h] [rbp-F0h] BYREF
  char v48[208]; // [rsp+C0h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v48;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 16 kill_points:1848 64 56 26 gear_bonus_points_map:1869";
  *(_QWORD *)(v3 + 16) = MechanicusMultistagePlay::onMonsterDie;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862723] = -218103808;
  v5[536862724] = -202116109;
  *(_DWORD *)(v3 + 48) = Monster::getKillScore(monster);
  MechanicusMultistagePlay::procKillPointsModify(this, (uint32_t *)(v3 + 48));
  if ( *(_BYTE *)(((unsigned __int64)&this->kill_monsters_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->kill_monsters_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  v8 = 1LL;
  v6 = SAFE_ADD<unsigned int,int>(this->kill_monsters_, 1);
  v7 = *(_BYTE *)(((unsigned __int64)&this->kill_monsters_ >> 3) + 0x7FFF8000);
  LOBYTE(v8) = v7 != 0;
  v9 = v7 != 0 && (char)((((_BYTE)this + 124) & 7) + 3) >= v7;
  if ( v9 )
    __asan_report_store4(&this->kill_monsters_, v8, v9);
  this->kill_monsters_ = v6;
  __for_range = &this->uid_to_player_info_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,MechanicusMultistagePlay::PlayerInfo>::begin(&this->uid_to_player_info_map_)._M_cur;
  __for_end = (std::pair<unsigned int const,unsigned int>)std::unordered_map<unsigned int,MechanicusMultistagePlay::PlayerInfo>::end(&this->uid_to_player_info_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,MechanicusMultistagePlay::PlayerInfo>,false>(
            &__for_begin,
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,MechanicusMultistagePlay::PlayerInfo>,false> *)&__for_end) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,MechanicusMultistagePlay::PlayerInfo>,false,false>::operator*(&__for_begin);
    uid = std::get<0ul,unsigned int const,MechanicusMultistagePlay::PlayerInfo>(__in);
    player_info = std::get<1ul,unsigned int const,MechanicusMultistagePlay::PlayerInfo>(__in);
    v10 = *(_DWORD *)(v3 + 48);
    if ( *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( !(unsigned int)MechanicusMultistagePlay::addBuildingPoints(this, *uid, v10) )
    {
      common::milog::MiLogStream::create(
        &v47,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/scene_multistage_play_impl/mechanicus_multistage_play.cpp",
        "onMonsterDie",
        1856);
      v11 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
              &v47,
              (const char (*)[23])"[MECHANICUS] monster: ");
      val = Monster::getMonsterId(monster);
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &val);
      v13 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
              v12,
              (const char (*)[20])" was killed. grant ");
      v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 48));
      v15 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
              v14,
              (const char (*)[20])" points for player:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, uid);
      common::milog::MiLogStream::~MiLogStream(&v47);
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,MechanicusMultistagePlay::PlayerInfo>,false,false>::operator++(&__for_begin);
  }
  if ( std::operator!=<Creature>(0LL, &context->attacker_ptr) )
  {
    v16 = (unsigned __int64)std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)&context->attacker_ptr);
    if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
      v16 = __asan_report_load8();
    v17 = *(_QWORD *)v16 + 24LL;
    if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
      v16 = __asan_report_load8();
    if ( (*(unsigned int (__fastcall **)(unsigned __int64))v17)(v16) == 4 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->gear_kill_num_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->gear_kill_num_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      v18 = 1LL;
      v19 = SAFE_ADD<unsigned int,int>(this->gear_kill_num_, 1);
      v20 = *(_BYTE *)(((unsigned __int64)&this->gear_kill_num_ >> 3) + 0x7FFF8000);
      if ( v20 != 0 && v20 <= 3 )
      {
        LOBYTE(v18) = v20 != 0;
        __asan_report_store4(&this->gear_kill_num_, v18, v19);
      }
      this->gear_kill_num_ = v19;
    }
  }
  std::unordered_map<unsigned int,unsigned int>::unordered_map((std::unordered_map<unsigned int,unsigned int> *const)(v3 + 64));
  total_bonus = 0;
  __for_range_0 = (std::unordered_map<unsigned int,unsigned int> *)(v3 + 64);
  __for_begin_0._M_cur = std::unordered_map<unsigned int,unsigned int>::begin((std::unordered_map<unsigned int,unsigned int> *const)(v3 + 64))._M_cur;
  __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,MechanicusMultistagePlay::PlayerInfo>,false>::__node_type *)std::unordered_map<unsigned int,unsigned int>::end(__for_range_0)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(
            &__for_begin_0,
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)&__for_begin) )
  {
    v21 = std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator*(&__for_begin_0);
    v22 = v21;
    if ( ((unsigned __int8)v21 & 7) >= *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&v21->second + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v21 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v21->second + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load_n(v21, 8LL);
    }
    __for_end = *v22;
    _ = std::get<0ul,unsigned int const,unsigned int>(&__for_end);
    points = std::get<1ul,unsigned int const,unsigned int>(&__for_end);
    if ( *(_BYTE *)(((unsigned __int64)points >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)points & 7) + 3) >= *(_BYTE *)(((unsigned __int64)points >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    total_bonus += *points;
    std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator++(&__for_begin_0);
  }
  common::milog::MiLogStream::create(
    &v47,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/scene_multistage_play_impl/mechanicus_multistage_play.cpp",
    "onMonsterDie",
    1881);
  v23 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
          &v47,
          (const char (*)[29])"[MECHANICUS] aura bonus map:");
  common::milog::MiLogStream::operator<<<unsigned int,unsigned int>(
    v23,
    (const std::unordered_map<unsigned int,unsigned int> *)(v3 + 64));
  common::milog::MiLogStream::~MiLogStream(&v47);
  __for_range_1 = &this->uid_to_player_info_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,MechanicusMultistagePlay::PlayerInfo>::begin(&this->uid_to_player_info_map_)._M_cur;
  __for_end = (std::pair<unsigned int const,unsigned int>)std::unordered_map<unsigned int,MechanicusMultistagePlay::PlayerInfo>::end(__for_range_1)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,MechanicusMultistagePlay::PlayerInfo>,false>(
            &__for_begin,
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,MechanicusMultistagePlay::PlayerInfo>,false> *)&__for_end) )
  {
    v38 = std::__detail::_Node_iterator<std::pair<unsigned int const,MechanicusMultistagePlay::PlayerInfo>,false,false>::operator*(&__for_begin);
    uid_0 = std::get<0ul,unsigned int const,MechanicusMultistagePlay::PlayerInfo>(v38);
    player_info_0 = std::get<1ul,unsigned int const,MechanicusMultistagePlay::PlayerInfo>(v38);
    if ( *(_BYTE *)(((unsigned __int64)uid_0 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)uid_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)uid_0 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( !(unsigned int)MechanicusMultistagePlay::addBuildingPoints(this, *uid_0, total_bonus) )
    {
      common::milog::MiLogStream::create(
        &v47,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/scene_multistage_play_impl/mechanicus_multistage_play.cpp",
        "onMonsterDie",
        1887);
      v24 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
              &v47,
              (const char (*)[23])"[MECHANICUS] monster: ");
      val = Monster::getMonsterId(monster);
      v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, &val);
      v26 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v25, (const char (*)[8])" bonus ");
      v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, (const unsigned int *)(v3 + 48));
      v28 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
              v27,
              (const char (*)[20])" points for player:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, uid_0);
      common::milog::MiLogStream::~MiLogStream(&v47);
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,MechanicusMultistagePlay::PlayerInfo>,false,false>::operator++(&__for_begin);
  }
  std::unordered_map<unsigned int,unsigned int>::~unordered_map((std::unordered_map<unsigned int,unsigned int> *const)(v3 + 64));
  if ( v48 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF800C) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 1893: range 000000001602C4C4-000000001602CE2C
void __cdecl MechanicusMultistagePlay::playerSettle(
        MechanicusMultistagePlay *const this,
        Player *player,
        bool is_succ,
        bool is_teach_level)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  uint64_t SceneTimeMs; // rax
  const TreatreMechanicusExcelConfigMgr *ConfigMgr; // rax
  std::_Rb_tree_const_iterator<unsigned int>::reference v9; // rdx
  PlayerWatcherComp *WatcherComp; // rax
  const TreatreMechanicusExcelConfigMgr *v11; // rax
  std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  PlayerEventComp *EventComp; // r14
  std::shared_ptr<MechanicusBattleWatcherFinishEvent> *v14; // rax
  const TreatreMechanicusExcelConfigMgr *v15; // rcx
  PlayerMechanicusComp *MechanicusComp; // rax
  PlayerMechanicusComp *v17; // rax
  PlayerWatcherComp *v18; // r14
  char *v19; // rsi
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v20; // rax
  uint32_t *v21; // rdx
  char v22; // cl
  PlayerMechanicusComp *v23; // rax
  uint32_t final_token; // [rsp+20h] [rbp-1D0h]
  signed int coin_rate; // [rsp+24h] [rbp-1CCh]
  unsigned int total_tokens; // [rsp+28h] [rbp-1C8h]
  uint32_t limit_token; // [rsp+2Ch] [rbp-1C4h]
  unsigned int old_token; // [rsp+30h] [rbp-1C0h]
  uint32_t real_token; // [rsp+34h] [rbp-1BCh]
  std::set<unsigned int>::iterator __for_begin; // [rsp+38h] [rbp-1B8h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+40h] [rbp-1B0h] BYREF
  double total_token; // [rsp+48h] [rbp-1A8h]
  const std::set<unsigned int> *watcher_set; // [rsp+50h] [rbp-1A0h]
  const std::set<unsigned int> *__for_range; // [rsp+58h] [rbp-198h]
  const data::MechanicusWatcherExcelConfig *mechanicus_watcher_config_ptr; // [rsp+60h] [rbp-190h]
  proto::MultistageSettleWatcherInfo *watcher_info; // [rsp+68h] [rbp-188h]
  std::shared_ptr<BaseEvent> p_event_ptr; // [rsp+70h] [rbp-180h] BYREF
  MechanicusBattleScoreEvent event; // [rsp+80h] [rbp-170h] BYREF
  char v42[336]; // [rsp+A0h] [rbp-150h] BYREF

  v4 = (unsigned __int64)v42;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(288LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "5 32 4 15 watcher_id:1901 48 16 16 watcher_ptr:1903 80 16 14 event_ptr:1921 112 24 11 reason:195"
                        "5 176 80 11 notify:1894";
  *(_QWORD *)(v4 + 16) = MechanicusMultistagePlay::playerSettle;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = 61956;
  v6[536862722] = 62194;
  v6[536862723] = 62194;
  v6[536862724] = -218959360;
  v6[536862725] = 62194;
  v6[536862728] = -202116109;
  proto::InBattleMechanicusSettleNotify::InBattleMechanicusSettleNotify((proto::InBattleMechanicusSettleNotify *const)(v4 + 176));
  if ( *(_BYTE *)(((unsigned __int64)&this->play_index_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->play_index_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::InBattleMechanicusSettleNotify::set_play_index(
    (proto::InBattleMechanicusSettleNotify *const)(v4 + 176),
    this->play_index_);
  if ( *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::InBattleMechanicusSettleNotify::set_group_id(
    (proto::InBattleMechanicusSettleNotify *const)(v4 + 176),
    this->group_id_);
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SceneTimeMs = Scene::getSceneTimeMs(this->scene_);
  proto::InBattleMechanicusSettleNotify::set_scene_time_ms(
    (proto::InBattleMechanicusSettleNotify *const)(v4 + 176),
    SceneTimeMs);
  total_token = 0.0;
  ConfigMgr = MechanicusMultistagePlay::getConfigMgr(this);
  watcher_set = TreatreMechanicusExcelConfigMgr::getMechanicusInBattleWatcherSet(ConfigMgr);
  __for_range = watcher_set;
  __for_begin._M_node = std::set<unsigned int>::begin(watcher_set)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(watcher_set)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v9 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v4 + 32) = *v9;
    WatcherComp = Player::getWatcherComp(player);
    PlayerWatcherComp::findWatcher((PlayerWatcherComp *const)(v4 + 48), (__int64)WatcherComp, *(_DWORD *)(v4 + 32));
    if ( !std::operator==<BaseWatcher>((const std::shared_ptr<BaseWatcher> *)(v4 + 48), 0LL) )
    {
      v11 = MechanicusMultistagePlay::getConfigMgr(this);
      mechanicus_watcher_config_ptr = data::TreatreMechanicusExcelConfigMgrBase::findMechanicusWatcherExcelConfig(
                                        v11,
                                        *(_DWORD *)(v4 + 32));
      if ( mechanicus_watcher_config_ptr )
      {
        v12 = std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 48));
        if ( BaseWatcher::isFinished(v12) )
        {
          if ( *(_BYTE *)(((unsigned __int64)&mechanicus_watcher_config_ptr->reward_tokens >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)mechanicus_watcher_config_ptr + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&mechanicus_watcher_config_ptr->reward_tokens >> 3)
                                                                                          + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          total_token = (double)(int)mechanicus_watcher_config_ptr->reward_tokens + total_token;
          watcher_info = proto::InBattleMechanicusSettleNotify::add_watcher_list((proto::InBattleMechanicusSettleNotify *const)(v4 + 176));
          proto::MultistageSettleWatcherInfo::set_watcher_id(watcher_info, *(_DWORD *)(v4 + 32));
          common::tools::perf::make_shared<MechanicusBattleWatcherFinishEvent,unsigned int &>(
            (unsigned int *)(v4 + 80),
            (unsigned int *)(v4 + 32));
          EventComp = Player::getEventComp(player);
          v14 = std::move<std::shared_ptr<MechanicusBattleWatcherFinishEvent> &>((std::shared_ptr<MechanicusBattleWatcherFinishEvent> *)(v4 + 80));
          std::shared_ptr<BaseEvent>::shared_ptr<MechanicusBattleWatcherFinishEvent,void>(&p_event_ptr, v14);
          PlayerEventComp::notifyEvent(EventComp, &p_event_ptr);
          std::shared_ptr<BaseEvent>::~shared_ptr(&p_event_ptr);
          std::shared_ptr<MechanicusBattleWatcherFinishEvent>::~shared_ptr((std::shared_ptr<MechanicusBattleWatcherFinishEvent> *const)(v4 + 80));
        }
      }
    }
    std::shared_ptr<BaseWatcher>::~shared_ptr((std::shared_ptr<BaseWatcher> *const)(v4 + 48));
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  v15 = MechanicusMultistagePlay::getConfigMgr(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  coin_rate = TreatreMechanicusExcelConfigMgr::queryCoinRateByDungeonId(v15, this->dungeon_id_);
  proto::InBattleMechanicusSettleNotify::set_difficulty_percentage(
    (proto::InBattleMechanicusSettleNotify *const)(v4 + 176),
    coin_rate);
  total_token = SAFE_MULTIPLY<double,double>((double)coin_rate * 0.01, total_token);
  if ( total_token >= (double)(int)std::numeric_limits<unsigned int>::max() )
    total_token = (double)(int)std::numeric_limits<unsigned int>::max();
  total_tokens = (int)total_token;
  proto::InBattleMechanicusSettleNotify::set_total_token(
    (proto::InBattleMechanicusSettleNotify *const)(v4 + 176),
    (int)total_token);
  MechanicusComp = Player::getMechanicusComp(player);
  limit_token = PlayerMechanicusComp::getCoinLimit(MechanicusComp);
  v17 = Player::getMechanicusComp(player);
  old_token = PlayerMechanicusComp::getCoin(v17);
  final_token = SAFE_ADD<unsigned int,unsigned int>(old_token, total_tokens);
  if ( final_token > limit_token )
    final_token = limit_token;
  if ( final_token > old_token )
    proto::InBattleMechanicusSettleNotify::set_real_token(
      (proto::InBattleMechanicusSettleNotify *const)(v4 + 176),
      final_token - old_token);
  proto::InBattleMechanicusSettleNotify::set_is_success(
    (proto::InBattleMechanicusSettleNotify *const)(v4 + 176),
    is_succ);
  real_token = proto::InBattleMechanicusSettleNotify::real_token((const proto::InBattleMechanicusSettleNotify *const)(v4 + 176));
  if ( is_succ && !is_teach_level )
  {
    v18 = Player::getWatcherComp(player);
    if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    MechanicusBattleScoreEvent::MechanicusBattleScoreEvent(&event, total_tokens, this->dungeon_id_);
    PlayerWatcherComp::triggerMechanicusBattleScore(v18, &event);
    MechanicusBattleScoreEvent::~MechanicusBattleScoreEvent(&event);
  }
  *(_DWORD *)(v4 + 32) = Player::getUid(player);
  v19 = (char *)(v4 + 32);
  v20 = std::unordered_map<unsigned int,unsigned int>::operator[](
          &this->uid_to_tokens_map_,
          (std::unordered_map<unsigned int,unsigned int>::key_type *)(v4 + 32));
  v21 = v20;
  v22 = *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000);
  if ( v22 != 0 && (char)(((unsigned __int8)v20 & 7) + 3) >= v22 )
  {
    LOBYTE(v19) = v22 != 0;
    __asan_report_store4(v20, v19, (_BYTE)v20);
  }
  *v21 = real_token;
  ActionReason::ActionReason(
    (ActionReason *const)(v4 + 112),
    ACTION_REASON_MECHANICUS_BATTLE_SETTLE,
    ITEM_LIMIT_MECHANICUS_BATTLE_SETTLE_REWARD);
  v23 = Player::getMechanicusComp(player);
  PlayerMechanicusComp::addCoin(v23, total_tokens, (const ActionReason *)(v4 + 112));
  Player::sendProto(player, (const google::protobuf::Message *)(v4 + 176));
  proto::InBattleMechanicusSettleNotify::~InBattleMechanicusSettleNotify((proto::InBattleMechanicusSettleNotify *const)(v4 + 176));
  if ( v42 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8020) = -168430091;
  }
};

// Line 1962: range 000000001602CE2E-000000001602D319
void __cdecl MechanicusMultistagePlay::addWatchers(MechanicusMultistagePlay *const this, Player *player)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  const TreatreMechanicusExcelConfigMgr *ConfigMgr; // rax
  std::_Rb_tree_const_iterator<unsigned int>::reference v6; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rdx
  PlayerWatcherComp *WatcherComp; // rax
  bool v12; // r14
  PlayerWatcherComp *v13; // rax
  bool v14; // r14
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rdx
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rdx
  std::set<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-C8h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-C0h] BYREF
  const std::set<unsigned int> *watcher_set; // [rsp+28h] [rbp-B8h]
  const std::set<unsigned int> *__for_range; // [rsp+30h] [rbp-B0h]
  const data::WatcherConfig *watcher_config_ptr; // [rsp+38h] [rbp-A8h]
  std::shared_ptr<Config> v26; // [rsp+40h] [rbp-A0h] BYREF
  common::milog::MiLogStream v27; // [rsp+50h] [rbp-90h] BYREF
  char v28[112]; // [rsp+70h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 15 watcher_id:1964";
  *(_QWORD *)(v2 + 16) = MechanicusMultistagePlay::addWatchers;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  ConfigMgr = MechanicusMultistagePlay::getConfigMgr(this);
  watcher_set = TreatreMechanicusExcelConfigMgr::getMechanicusInBattleWatcherSet(ConfigMgr);
  __for_range = watcher_set;
  __for_begin._M_node = std::set<unsigned int>::begin(watcher_set)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(watcher_set)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v6 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v2 + 32) = *v6;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v26);
    v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v26);
    watcher_config_ptr = WatcherExcelConfigMgr::findWatcherConfig(
                           &v7->design_config.txt_config_mgr.watcher_config_mgr,
                           *(_DWORD *)(v2 + 32));
    std::shared_ptr<Config>::~shared_ptr(&v26);
    if ( watcher_config_ptr )
    {
      WatcherComp = Player::getWatcherComp(player);
      PlayerWatcherComp::findWatcher((PlayerWatcherComp *const)&v26, (__int64)WatcherComp, *(_DWORD *)(v2 + 32));
      v12 = std::operator!=<BaseWatcher>(0LL, (const std::shared_ptr<BaseWatcher> *)&v26);
      std::shared_ptr<BaseWatcher>::~shared_ptr((std::shared_ptr<BaseWatcher> *const)&v26);
      if ( !v12 )
      {
        v13 = Player::getWatcherComp(player);
        PlayerWatcherComp::addWatcher(
          (PlayerWatcherComp *const)&v26,
          (const WatcherConfig *)v13,
          (uint32_t)watcher_config_ptr);
        v14 = std::operator==<BaseWatcher>(0LL, (const std::shared_ptr<BaseWatcher> *)&v26);
        std::shared_ptr<BaseWatcher>::~shared_ptr((std::shared_ptr<BaseWatcher> *const)&v26);
        if ( v14 )
        {
          common::milog::MiLogStream::create(
            &v27,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/scene/scene_multistage_play_impl/mechanicus_multistage_play.cpp",
            "addWatchers",
            1978);
          v15 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                  &v27,
                  (const char (*)[15])"addWatcher id:");
          v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v15,
                  (const unsigned int *)(v2 + 32));
          v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  v16,
                  (const char (*)[16])" fails. player:");
          operator<<(v17, player);
          common::milog::MiLogStream::~MiLogStream(&v27);
        }
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_multistage_play_impl/mechanicus_multistage_play.cpp",
        "addWatchers",
        1969);
      v8 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
             &v27,
             (const char (*)[22])"findWatcherConfig id:");
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 32));
      v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v9, (const char (*)[16])" fails. player:");
      operator<<(v10, player);
      common::milog::MiLogStream::~MiLogStream(&v27);
    }
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  common::milog::MiLogStream::create(
    &v27,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/scene_multistage_play_impl/mechanicus_multistage_play.cpp",
    "addWatchers",
    1982);
  v18 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
          &v27,
          (const char (*)[27])"[MECHANICUS] add_watchers:");
  v19 = common::milog::MiLogStream::operator<<<unsigned int>(v18, watcher_set);
  v20 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v19, (const char (*)[9])" player:");
  operator<<(v20, player);
  common::milog::MiLogStream::~MiLogStream(&v27);
  if ( v28 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1986: range 000000001602D31A-000000001602D4E4
void __cdecl MechanicusMultistagePlay::delWatchers(MechanicusMultistagePlay *const this, Player *player)
{
  const TreatreMechanicusExcelConfigMgr *ConfigMgr; // rax
  std::_Rb_tree_const_iterator<unsigned int>::reference v3; // rdx
  PlayerWatcherComp *WatcherComp; // rax
  bool v5; // bl
  PlayerWatcherComp *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rdx
  unsigned int watcher_id; // [rsp+1Ch] [rbp-64h]
  std::set<unsigned int>::iterator __for_begin; // [rsp+20h] [rbp-60h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+28h] [rbp-58h] BYREF
  const std::set<unsigned int> *watcher_set; // [rsp+30h] [rbp-50h]
  const std::set<unsigned int> *__for_range; // [rsp+38h] [rbp-48h]
  std::shared_ptr<BaseWatcher> __a; // [rsp+40h] [rbp-40h] BYREF
  common::milog::MiLogStream v16; // [rsp+50h] [rbp-30h] BYREF

  ConfigMgr = MechanicusMultistagePlay::getConfigMgr(this);
  watcher_set = TreatreMechanicusExcelConfigMgr::getMechanicusInBattleWatcherSet(ConfigMgr);
  __for_range = watcher_set;
  __for_begin._M_node = std::set<unsigned int>::begin(watcher_set)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(watcher_set)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v3 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    watcher_id = *v3;
    WatcherComp = Player::getWatcherComp(player);
    PlayerWatcherComp::findWatcher((PlayerWatcherComp *const)&__a, (__int64)WatcherComp, watcher_id);
    v5 = std::operator!=<BaseWatcher>(0LL, &__a);
    std::shared_ptr<BaseWatcher>::~shared_ptr(&__a);
    if ( v5 )
    {
      v6 = Player::getWatcherComp(player);
      PlayerWatcherComp::delWatcher(v6, watcher_id);
    }
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  common::milog::MiLogStream::create(
    &v16,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/scene_multistage_play_impl/mechanicus_multistage_play.cpp",
    "delWatchers",
    1995);
  v7 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
         &v16,
         (const char (*)[27])"[MECHANICUS] del_watchers:");
  v8 = common::milog::MiLogStream::operator<<<unsigned int>(v7, watcher_set);
  v9 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v8, (const char (*)[9])" player:");
  operator<<(v9, player);
  common::milog::MiLogStream::~MiLogStream(&v16);
};

// Line 1999: range 000000001602D4E6-000000001602DCB8
void __cdecl MechanicusMultistagePlay::fillProtoMonsterList(
        const MechanicusMultistagePlay *const this,
        proto::InBattleMechanicusInfo *info)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  LuaConfigMgr *p_lua_config_mgr; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  uint32_t DefaultWorldMainSceneId; // eax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v11; // rdx
  common::milog::MiLogStream *v12; // rax
  unsigned __int64 v13; // rax
  Scene *scene; // rdx
  _QWORD *p_vptr_DescribalBase; // rax
  unsigned __int64 v16; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::reference v17; // rax
  std::pair<unsigned int const,unsigned int> *v18; // rdx
  uint32_t monster_level; // [rsp+1Ch] [rbp-174h]
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+20h] [rbp-170h] BYREF
  std::map<unsigned int,unsigned int>::iterator __for_begin_1; // [rsp+28h] [rbp-168h] BYREF
  std::map<unsigned int,unsigned int>::iterator __for_end; // [rsp+30h] [rbp-160h] BYREF
  const SceneScriptConfig *scene_script_config_ptr; // [rsp+38h] [rbp-158h]
  const std::vector<unsigned int> *__for_range; // [rsp+40h] [rbp-150h]
  std::map<unsigned int,unsigned int> *__for_range_1; // [rsp+48h] [rbp-148h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *monster_id; // [rsp+50h] [rbp-140h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *count; // [rsp+58h] [rbp-138h]
  proto::InBattleMechanicusMonsterInfo *monster_info; // [rsp+60h] [rbp-130h]
  const std::map<unsigned int,MonsterScriptConfig> *pool_map_ptr; // [rsp+68h] [rbp-128h]
  const std::map<unsigned int,MonsterScriptConfig> *pool_map; // [rsp+70h] [rbp-120h]
  const std::map<unsigned int,MonsterScriptConfig> *__for_range_0; // [rsp+78h] [rbp-118h]
  const std::pair<unsigned int const,MonsterScriptConfig> *v32; // [rsp+80h] [rbp-110h]
  std::tuple_element<0,const std::pair<unsigned int const,MonsterScriptConfig> >::type *_; // [rsp+88h] [rbp-108h]
  std::tuple_element<1,const std::pair<unsigned int const,MonsterScriptConfig> >::type *monster_config; // [rsp+90h] [rbp-100h]
  std::pair<unsigned int const,unsigned int> __for_end_0; // [rsp+98h] [rbp-F8h] BYREF
  std::shared_ptr<Config> v36; // [rsp+A0h] [rbp-F0h] BYREF
  std::shared_ptr<Config> v37; // [rsp+B0h] [rbp-E0h] BYREF
  common::milog::MiLogStream v38; // [rsp+C0h] [rbp-D0h] BYREF
  char v39[176]; // [rsp+E0h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v39;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 4 12 pool_id:2009 48 48 26 monster_id_to_num_map:2008";
  *(_QWORD *)(v2 + 16) = MechanicusMultistagePlay::fillProtoMonsterList;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862723] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v36);
  p_lua_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v36)->design_config.lua_config_mgr;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v37);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v37);
  DefaultWorldMainSceneId = TxtConfigMgr::getDefaultWorldMainSceneId(&v6->design_config.txt_config_mgr);
  scene_script_config_ptr = LuaConfigMgr::findSceneScriptConfig(p_lua_config_mgr, DefaultWorldMainSceneId);
  std::shared_ptr<Config>::~shared_ptr(&v37);
  std::shared_ptr<Config>::~shared_ptr(&v36);
  if ( scene_script_config_ptr )
  {
    std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v2 + 48));
    __for_range = &this->monster_pool_vec_;
    __for_begin._M_current = std::vector<unsigned int>::begin(&this->monster_pool_vec_)._M_current;
    __for_begin_1._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr)std::vector<unsigned int>::end(&this->monster_pool_vec_)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              &__for_begin,
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)&__for_begin_1) )
    {
      v11 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v2 + 32) = *v11;
      pool_map_ptr = SceneScriptConfig::findMonsterPoolByPoolId(scene_script_config_ptr, *(_DWORD *)(v2 + 32));
      if ( pool_map_ptr )
      {
        pool_map = pool_map_ptr;
        __for_range_0 = pool_map_ptr;
        __for_end._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr)std::map<unsigned int,MonsterScriptConfig>::begin(pool_map_ptr)._M_node;
        __for_end_0 = (std::pair<unsigned int const,unsigned int>)std::map<unsigned int,MonsterScriptConfig>::end(__for_range_0)._M_node;
        while ( std::operator!=(
                  (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,MonsterScriptConfig> >::_Self *)&__for_end,
                  (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,MonsterScriptConfig> >::_Self *)&__for_end_0) )
        {
          v32 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,MonsterScriptConfig>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,MonsterScriptConfig> > *const)&__for_end);
          _ = std::get<0ul,unsigned int const,MonsterScriptConfig>(v32);
          monster_config = (std::tuple_element<1,const std::pair<unsigned int const,MonsterScriptConfig> >::type *)std::get<1ul,unsigned int const,MonsterScriptConfig>(v32);
          v13 = (unsigned __int64)std::map<unsigned int,unsigned int>::operator[](
                                    (std::map<unsigned int,unsigned int> *const)(v2 + 48),
                                    &monster_config->monster_id);
          if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) != 0 && (char)((v13 & 7) + 3) >= *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
            v13 = __asan_report_load4();
          ++*(_DWORD *)v13;
          std::_Rb_tree_const_iterator<std::pair<unsigned int const,MonsterScriptConfig>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,MonsterScriptConfig> > *const)&__for_end);
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v38,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_multistage_play_impl/mechanicus_multistage_play.cpp",
          "fillProtoMonsterList",
          2014);
        v12 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                &v38,
                (const char (*)[40])"findMonsterPoolByPoolId pool_id FAILED:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v2 + 32));
        common::milog::MiLogStream::~MiLogStream(&v38);
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    scene = this->scene_;
    p_vptr_DescribalBase = &scene->_vptr_DescribalBase;
    if ( *(_BYTE *)(((unsigned __int64)scene >> 3) + 0x7FFF8000) )
      p_vptr_DescribalBase = (_QWORD *)__asan_report_load8();
    v16 = *p_vptr_DescribalBase + 264LL;
    if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
      v16 = __asan_report_load8();
    monster_level = (*(__int64 (__fastcall **)(Scene *))v16)(scene) + 1;
    __for_range_1 = (std::map<unsigned int,unsigned int> *)(v2 + 48);
    __for_begin_1._M_node = std::map<unsigned int,unsigned int>::begin((std::map<unsigned int,unsigned int> *const)(v2 + 48))._M_node;
    __for_end._M_node = std::map<unsigned int,unsigned int>::end(__for_range_1)._M_node;
    while ( std::operator!=(&__for_begin_1, &__for_end) )
    {
      v17 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin_1);
      v18 = v17;
      if ( ((unsigned __int8)v17 & 7) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&v17->second + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)v17 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v17->second + 3) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load_n(v17, 8LL);
      }
      __for_end_0 = *v18;
      monster_id = std::get<0ul,unsigned int const,unsigned int>(&__for_end_0);
      count = std::get<1ul,unsigned int const,unsigned int>(&__for_end_0);
      monster_info = proto::InBattleMechanicusInfo::add_monster_list(info);
      if ( *(_BYTE *)(((unsigned __int64)monster_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)monster_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)monster_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::InBattleMechanicusMonsterInfo::set_monster_id(monster_info, *monster_id);
      if ( *(_BYTE *)(((unsigned __int64)count >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)count >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::InBattleMechanicusMonsterInfo::set_count(monster_info, *count);
      proto::InBattleMechanicusMonsterInfo::set_level(monster_info, monster_level);
      std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin_1);
    }
    std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v2 + 48));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v38,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_multistage_play_impl/mechanicus_multistage_play.cpp",
      "fillProtoMonsterList",
      2004);
    v8 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
           &v38,
           (const char (*)[55])"[MECHANICUS] main scene scritp config nullptr. @group ");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->group_id_);
    v10 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v9, (const char (*)[7])" play ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &this->play_index_);
    common::milog::MiLogStream::~MiLogStream(&v38);
  }
  if ( v39 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 2035: range 000000001602DDCC-000000001602DE3D
// local variable allocation has failed, the output may be wrong!
void __cdecl MechanicusMultistagePlay::getCurrentGearSet(
        MechanicusMultistagePlay *const this,
        std::set<unsigned int> *gear_set)
{
  std::function<ForeachPolicy(FoundationComp&)> p_func; // [rsp+10h] [rbp-30h] BYREF

  std::function<ForeachPolicy ()(FoundationComp &)>::function<MechanicusMultistagePlay::getCurrentGearSet(std::set<unsigned int> &)::{lambda(FoundationComp &)#1},void,void>(
    &p_func,
    *(MechanicusMultistagePlay::getCurrentGearSet::<lambda(FoundationComp&)> *)&this);
  MechanicusMultistagePlay::foreachFoundation(this, &p_func);
  std::function<ForeachPolicy ()(FoundationComp &)>::~function(&p_func);
};

// Line 2036: range 000000001602DCBA-000000001602DDCA
ForeachPolicy __cdecl MechanicusMultistagePlay::getCurrentGearSet(std::set<unsigned int> &)::{lambda(FoundationComp &)#1}::operator()(
        const MechanicusMultistagePlay::getCurrentGearSet::<lambda(FoundationComp&)> *const __closure,
        FoundationComp *foundation_comp)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  ForeachPolicy result; // eax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 gear_id:2038";
  *(_QWORD *)(v2 + 16) = MechanicusMultistagePlay::getCurrentGearSet(std::set<unsigned int> &)::{lambda(FoundationComp &)#1}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = FoundationComp::getCurrentTowerId(foundation_comp);
  if ( *(_DWORD *)(v2 + 32) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__gear_set >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    std::set<unsigned int>::insert(__closure->__gear_set, (const std::set<unsigned int>::value_type *)(v2 + 32));
  }
  result = FOREACH_CONTINUE;
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 2049: range 000000001602DE3E-000000001602E150
void __fastcall MechanicusMultistagePlay::addOneGadgetBuildNum(
        MechanicusMultistagePlay *const this,
        uint32_t gadget_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // rax
  unsigned int *p_b; // rsi
  uint32_t *v7; // rdx
  uint32_t v8; // ecx
  char v9; // dl
  bool v10; // dl
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r13
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  unsigned int __b; // [rsp+14h] [rbp-8Ch] BYREF
  unsigned __int64 val; // [rsp+18h] [rbp-88h] BYREF
  common::milog::MiLogStream v20; // [rsp+20h] [rbp-80h] BYREF
  char v21[96]; // [rsp+40h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 14 gadget_id:2048";
  *(_QWORD *)(v2 + 16) = MechanicusMultistagePlay::addOneGadgetBuildNum;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = gadget_id;
  v5 = (unsigned __int64)std::unordered_map<unsigned int,unsigned int>::operator[](
                           &this->gadget_build_num_map_,
                           (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 32));
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) != 0 && (char)((v5 & 7) + 3) >= *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v5 = __asan_report_load4();
  ++*(_DWORD *)v5;
  __b = MechanicusMultistagePlay::countGearNum(this, 0);
  p_b = &__b;
  v7 = (uint32_t *)std::max<unsigned int>(&this->max_gear_num_, &__b);
  if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  v8 = *v7;
  v9 = *(_BYTE *)(((unsigned __int64)&this->max_gear_num_ >> 3) + 0x7FFF8000);
  LOBYTE(p_b) = v9 != 0;
  v10 = v9 != 0 && (char)((((_BYTE)this - 124) & 7) + 3) >= v9;
  if ( v10 )
    __asan_report_store4(&this->max_gear_num_, p_b, v10);
  this->max_gear_num_ = v8;
  std::set<unsigned int>::insert(&this->used_gear_id_set_, (const std::set<unsigned int>::value_type *)(v2 + 32));
  common::milog::MiLogStream::create(
    &v20,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/scene_multistage_play_impl/mechanicus_multistage_play.cpp",
    "addOneGadgetBuildNum",
    2055);
  v11 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(&v20, (const char (*)[13])"building_id:");
  v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 32));
  v13 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v12, (const char (*)[17])" max_gear_num_: ");
  v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &this->max_gear_num_);
  v15 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v14, (const char (*)[19])" used_gear_id_num:");
  val = std::set<unsigned int>::size(&this->used_gear_id_set_);
  v16 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v15, &val);
  v17 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v16, (const char (*)[13])" dungeon_id:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &this->dungeon_id_);
  common::milog::MiLogStream::~MiLogStream(&v20);
  if ( v21 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 2059: range 000000001602E23E-000000001602E394
uint32_t __cdecl MechanicusMultistagePlay::countGearNum(
        const MechanicusMultistagePlay *const this,
        uint32_t target_gadget_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  uint32_t result; // eax
  MechanicusMultistagePlay::countGearNum::<lambda(FoundationComp&)> v6; // [rsp-20h] [rbp-D0h]
  __int64 __f_16; // [rsp+20h] [rbp-90h]
  std::function<ForeachPolicy(FoundationComp&)> p_func; // [rsp+30h] [rbp-80h] BYREF
  char v9[96]; // [rsp+50h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 10 count:2060";
  *(_QWORD *)(v2 + 16) = MechanicusMultistagePlay::countGearNum;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = 0;
  LODWORD(__f_16) = target_gadget_id;
  *(_QWORD *)&v6.__target_gadget_id = __f_16;
  v6.__count = (uint32_t *)(v2 + 32);
  v6.__this = this;
  std::function<ForeachPolicy ()(FoundationComp &)>::function<MechanicusMultistagePlay::countGearNum(unsigned int)::{lambda(FoundationComp &)#1},void,void>(
    &p_func,
    v6);
  MechanicusMultistagePlay::foreachFoundation(this, &p_func);
  std::function<ForeachPolicy ()(FoundationComp &)>::~function(&p_func);
  result = *(_DWORD *)(v2 + 32);
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 2061: range 000000001602E152-000000001602E23C
ForeachPolicy __cdecl MechanicusMultistagePlay::countGearNum(unsigned int)const::{lambda(FoundationComp &)#1}::operator()(
        const MechanicusMultistagePlay::countGearNum::<lambda(FoundationComp&)> *const __closure,
        FoundationComp *foundation_comp)
{
  unsigned __int64 count; // rax
  uint32_t gear_gadget_id; // [rsp+1Ch] [rbp-4h]

  gear_gadget_id = FoundationComp::getGearGadgetId(foundation_comp);
  if ( !gear_gadget_id )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__target_gadget_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&__closure->__target_gadget_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( !__closure->__target_gadget_id || gear_gadget_id == __closure->__target_gadget_id )
  {
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__count >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    count = (unsigned __int64)__closure->__count;
    if ( *(_BYTE *)((count >> 3) + 0x7FFF8000) != 0 && (char)((count & 7) + 3) >= *(_BYTE *)((count >> 3) + 0x7FFF8000) )
      count = __asan_report_load4();
    ++*(_DWORD *)count;
  }
  return 0;
};

// Line 2078: range 000000001602E396-000000001602E497
void __cdecl MechanicusMultistagePlay::onMonsterHurt(
        MechanicusMultistagePlay *const this,
        Monster *monster,
        Creature *attacker,
        float final_damage)
{
  bool v4; // bl
  __int64 v5; // rsi
  __int64 v6; // rdx
  std::enable_shared_from_this<Entity> v7; // [rsp+20h] [rbp-30h] BYREF
  std::shared_ptr<Entity> __r; // [rsp+30h] [rbp-20h] BYREF

  std::enable_shared_from_this<Entity>::shared_from_this(&v7);
  std::dynamic_pointer_cast<Avatar,Entity>(&__r);
  v4 = std::operator!=<Avatar>(0LL, (const std::shared_ptr<Avatar> *)&__r);
  std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)&__r);
  std::shared_ptr<Entity>::~shared_ptr((std::shared_ptr<Entity> *const)&v7);
  if ( v4 )
  {
    if ( *(char *)(((unsigned __int64)&this->has_player_damage >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->has_player_damage, &__r, &this->has_player_damage);
    this->has_player_damage = 1;
  }
  else
  {
    v5 = ((_BYTE)this + 121) & 7;
    v6 = (*(_BYTE *)(((unsigned __int64)&this->has_gear_damage >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&this->has_gear_damage >> 3) + 0x7FFF8000));
    if ( (_BYTE)v6 )
      __asan_report_store1(&this->has_gear_damage, v5, v6);
    this->has_gear_damage = 1;
  }
};

// Line 2090: range 000000001602E498-000000001602EFF8
void __cdecl MechanicusMultistagePlay::onDungeonSettle(
        MechanicusMultistagePlay *const this,
        Player *player,
        uint32_t result,
        uint32_t use_time)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyMechanicusBattleEnd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyMechanicusBattleEnd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // r14
  DungeonScene *v10; // rax
  const std::string *v11; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyMechanicusBattleEnd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyMechanicusBattleEnd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyMechanicusBattleEnd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyMechanicusBattleEnd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // r14
  std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v16; // rdx
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::reference v17; // rax
  std::pair<unsigned int const,unsigned int> *v18; // rdx
  std::__shared_ptr_access<proto_log::PlayerLogBodyMechanicusBattleEnd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyMechanicusBattleEnd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyMechanicusBattleEnd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rcx
  uint32_t building_points; // esi
  std::__shared_ptr_access<proto_log::PlayerLogBodyMechanicusBattleEnd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rcx
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::reference v24; // rax
  std::pair<unsigned int const,unsigned int> *v25; // rdx
  std::__shared_ptr_access<proto_log::PlayerLogBodyMechanicusBattleEnd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rax
  std::string v27; // [rsp+0h] [rbp-1E0h]
  __int64 use_timea; // [rsp+8h] [rbp-1D8h]
  Player *playera; // [rsp+10h] [rbp-1D0h]
  MechanicusMultistagePlay *thisa; // [rsp+18h] [rbp-1C8h]
  std::unordered_map<unsigned int,MechanicusMultistagePlay::PlayerInfo>::key_type __k; // [rsp+28h] [rbp-1B8h] BYREF
  uint32_t player_num; // [rsp+2Ch] [rbp-1B4h]
  std::map<unsigned int,unsigned int>::iterator __for_begin; // [rsp+30h] [rbp-1B0h] BYREF
  std::map<unsigned int,unsigned int>::iterator __for_end; // [rsp+38h] [rbp-1A8h] BYREF
  MechanicusMultistagePlay::PlayerInfo *player_info; // [rsp+40h] [rbp-1A0h]
  std::map<unsigned int,unsigned int> *__for_range; // [rsp+48h] [rbp-198h]
  std::map<unsigned int,unsigned int> *__for_range_0; // [rsp+50h] [rbp-190h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *round; // [rsp+58h] [rbp-188h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *excaped_num; // [rsp+60h] [rbp-180h]
  proto_log::MechanicusRoundEscapedMonsters *round_excaped_info; // [rsp+68h] [rbp-178h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *gear_id; // [rsp+70h] [rbp-170h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *gear_level; // [rsp+78h] [rbp-168h]
  proto_log::MechanicusGearInfo *gear_info; // [rsp+80h] [rbp-160h]
  std::pair<unsigned int const,unsigned int> __in; // [rsp+88h] [rbp-158h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+90h] [rbp-150h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+A0h] [rbp-140h] BYREF
  common::milog::MiLogStream v47; // [rsp+B0h] [rbp-130h] BYREF
  char v48[272]; // [rsp+D0h] [rbp-110h] BYREF

  *(&v27._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  v27._anon_0._M_allocated_capacity = (std::string::size_type)player;
  HIDWORD(v27._M_string_length) = result;
  LODWORD(v27._M_string_length) = use_time;
  v4 = (unsigned __int64)v48;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(224LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "5 32 1 11 holder:2100 48 8 9 iter:2107 80 16 22 dungeon_scene_ptr:2091 112 16 12 log_ptr:2101 14"
                        "4 48 20 gears_level_map:2112";
  *(_QWORD *)(v4 + 16) = MechanicusMultistagePlay::onDungeonSettle;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = 61953;
  v6[536862721] = -234881024;
  v6[536862722] = 62194;
  v6[536862723] = 62194;
  v6[536862724] = 62194;
  v6[536862726] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  toPtr<DungeonScene,Scene>((Scene *)(v4 + 80));
  if ( std::operator==<DungeonScene>((const std::shared_ptr<DungeonScene> *)(v4 + 80), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v47,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_multistage_play_impl/mechanicus_multistage_play.cpp",
      "onDungeonSettle",
      2094);
    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
      &v47,
      (const char (*)[39])"[MEHCANICUS] dungeon scene is nullptr ");
    common::milog::MiLogStream::~MiLogStream(&v47);
  }
  else
  {
    player_num = std::unordered_map<unsigned int,MechanicusMultistagePlay::PlayerInfo>::size(&this->uid_to_player_info_map_);
    __k = Player::getUid(player);
    player_info = std::unordered_map<unsigned int,MechanicusMultistagePlay::PlayerInfo>::operator[](
                    &this->uid_to_player_info_map_,
                    &__k);
    BasicComp = Player::getBasicComp(player);
    PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v47, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 32), 0xC46u, v27);
    std::string::~string(&v47);
    common::tools::perf::make_shared<proto_log::PlayerLogBodyMechanicusBattleEnd>();
    v8 = std::__shared_ptr_access<proto_log::PlayerLogBodyMechanicusBattleEnd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMechanicusBattleEnd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 112));
    if ( *(_BYTE *)(((unsigned __int64)&thisa->dungeon_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&thisa->dungeon_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto_log::PlayerLogBodyMechanicusBattleEnd::set_dungeon_id(v8, thisa->dungeon_id_);
    v9 = std::__shared_ptr_access<proto_log::PlayerLogBodyMechanicusBattleEnd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMechanicusBattleEnd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 112));
    v10 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 80));
    v11 = DungeonScene::getTransaction[abi:cxx11](v10);
    proto_log::PlayerLogBodyMechanicusBattleEnd::set_transaction(v9, v11);
    v12 = std::__shared_ptr_access<proto_log::PlayerLogBodyMechanicusBattleEnd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMechanicusBattleEnd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 112));
    proto_log::PlayerLogBodyMechanicusBattleEnd::set_player_num(v12, player_num);
    v13 = std::__shared_ptr_access<proto_log::PlayerLogBodyMechanicusBattleEnd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMechanicusBattleEnd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 112));
    proto_log::PlayerLogBodyMechanicusBattleEnd::set_use_time(v13, use_timea);
    v14 = std::__shared_ptr_access<proto_log::PlayerLogBodyMechanicusBattleEnd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMechanicusBattleEnd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 112));
    proto_log::PlayerLogBodyMechanicusBattleEnd::set_dungeon_settle_type(v14, HIDWORD(use_timea));
    __k = Player::getUid(playera);
    *(std::unordered_map<unsigned int,unsigned int>::iterator *)(v4 + 48) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                              &thisa->uid_to_tokens_map_,
                                                                              &__k);
    __in = (std::pair<unsigned int const,unsigned int>)std::unordered_map<unsigned int,unsigned int>::end(&thisa->uid_to_tokens_map_)._M_cur;
    if ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v4 + 48),
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)&__in) )
    {
      v15 = std::__shared_ptr_access<proto_log::PlayerLogBodyMechanicusBattleEnd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMechanicusBattleEnd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 112));
      v16 = std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v4 + 48));
      if ( *(_BYTE *)(((unsigned __int64)&v16->second >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)v16 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v16->second >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto_log::PlayerLogBodyMechanicusBattleEnd::set_reward_tokens(v15, v16->second);
    }
    std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v4 + 144));
    MechanicusMultistagePlay::getPlayerGearsLevelMap(thisa, playera, (std::map<unsigned int,unsigned int> *)(v4 + 144));
    __for_range = (std::map<unsigned int,unsigned int> *)(v4 + 144);
    __for_begin._M_node = std::map<unsigned int,unsigned int>::begin((std::map<unsigned int,unsigned int> *const)(v4 + 144))._M_node;
    __for_end._M_node = std::map<unsigned int,unsigned int>::end(__for_range)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v17 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
      v18 = v17;
      if ( ((unsigned __int8)v17 & 7) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&v17->second + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)v17 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v17->second + 3) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load_n(v17, 8LL);
      }
      __in = *v18;
      gear_id = std::get<0ul,unsigned int const,unsigned int>(&__in);
      gear_level = std::get<1ul,unsigned int const,unsigned int>(&__in);
      v19 = std::__shared_ptr_access<proto_log::PlayerLogBodyMechanicusBattleEnd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMechanicusBattleEnd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 112));
      gear_info = proto_log::PlayerLogBodyMechanicusBattleEnd::add_gear_info_list(v19);
      if ( *(_BYTE *)(((unsigned __int64)gear_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)gear_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)gear_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto_log::MechanicusGearInfo::set_gear_id(gear_info, *gear_id);
      if ( *(_BYTE *)(((unsigned __int64)gear_level >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)gear_level & 7) + 3) >= *(_BYTE *)(((unsigned __int64)gear_level >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto_log::MechanicusGearInfo::set_level(gear_info, *gear_level);
      std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
    }
    v20 = std::__shared_ptr_access<proto_log::PlayerLogBodyMechanicusBattleEnd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMechanicusBattleEnd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 112));
    if ( *(_BYTE *)(((unsigned __int64)player_info >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)player_info & 7) + 3) >= *(_BYTE *)(((unsigned __int64)player_info >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto_log::PlayerLogBodyMechanicusBattleEnd::set_left_points(v20, player_info->building_points_);
    v21 = std::__shared_ptr_access<proto_log::PlayerLogBodyMechanicusBattleEnd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMechanicusBattleEnd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 112));
    if ( *(_BYTE *)(((unsigned __int64)player_info >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)player_info & 7) + 3) >= *(_BYTE *)(((unsigned __int64)player_info >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    building_points = player_info->building_points_;
    if ( *(_BYTE *)(((unsigned __int64)&player_info->cost_building_points_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)player_info + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&player_info->cost_building_points_ >> 3)
                                                                + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto_log::PlayerLogBodyMechanicusBattleEnd::set_accumulated_points(
      v21,
      building_points + player_info->cost_building_points_);
    v23 = std::__shared_ptr_access<proto_log::PlayerLogBodyMechanicusBattleEnd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMechanicusBattleEnd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 112));
    if ( *(_BYTE *)(((unsigned __int64)&thisa->current_round_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)thisa + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->current_round_ >> 3)
                                                            + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto_log::PlayerLogBodyMechanicusBattleEnd::set_end_round(v23, thisa->current_round_);
    __for_range_0 = &thisa->round_to_excaped_map_;
    __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(&thisa->round_to_excaped_map_)._M_node;
    __for_end._M_node = std::map<unsigned int,unsigned int>::end(__for_range_0)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v24 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
      v25 = v24;
      if ( ((unsigned __int8)v24 & 7) >= *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&v24->second + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)v24 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v24->second + 3) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load_n(v24, 8LL);
      }
      __in = *v25;
      round = std::get<0ul,unsigned int const,unsigned int>(&__in);
      excaped_num = std::get<1ul,unsigned int const,unsigned int>(&__in);
      v26 = std::__shared_ptr_access<proto_log::PlayerLogBodyMechanicusBattleEnd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMechanicusBattleEnd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 112));
      round_excaped_info = proto_log::PlayerLogBodyMechanicusBattleEnd::add_round_escape_list(v26);
      if ( *(_BYTE *)(((unsigned __int64)round >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)round & 7) + 3) >= *(_BYTE *)(((unsigned __int64)round >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto_log::MechanicusRoundEscapedMonsters::set_round(round_excaped_info, *round);
      if ( *(_BYTE *)(((unsigned __int64)excaped_num >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)excaped_num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)excaped_num >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto_log::MechanicusRoundEscapedMonsters::set_escaped_num(round_excaped_info, *excaped_num);
      std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
    }
    std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
    std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyMechanicusBattleEnd,void>(
      &p_body_ptr,
      (const std::shared_ptr<proto_log::PlayerLogBodyMechanicusBattleEnd> *)(v4 + 112));
    Player::printStatLog(playera, &p_body_ptr, &p_body_ext_ptr, 0xEu);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
    std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v4 + 144));
    std::shared_ptr<proto_log::PlayerLogBodyMechanicusBattleEnd>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyMechanicusBattleEnd> *const)(v4 + 112));
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 32));
  }
  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v4 + 80));
  if ( v48 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8018) = -168430091;
  }
};

// Line 2134: range 000000001602EFFA-000000001602F747
__int64 __fastcall MechanicusMultistagePlay::setChallengeState(
        MechanicusMultistagePlay *const this,
        uint32_t card_id,
        uint32_t effect_id,
        proto::InBattleMechanicusCardChallengeState state)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  __int64 v7; // rsi
  proto::InBattleMechanicusCardChallengeState v8; // ecx
  char v9; // dl
  bool v10; // dl
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  __int64 result; // rax
  __int64 v17; // rsi
  proto::InBattleMechanicusCardChallengeState v18; // ecx
  char v19; // dl
  bool v20; // dl
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,MechanicusMultistagePlay::CardInfo>>::iterator __for_begin; // [rsp+20h] [rbp-120h] BYREF
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,MechanicusMultistagePlay::CardInfo>>::iterator __for_end; // [rsp+28h] [rbp-118h] BYREF
  std::unordered_map<unsigned int,MechanicusMultistagePlay::CardInfo>::iterator __for_begin_0; // [rsp+30h] [rbp-110h] BYREF
  std::unordered_map<unsigned int,MechanicusMultistagePlay::CardInfo>::iterator __for_end_0; // [rsp+38h] [rbp-108h] BYREF
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,MechanicusMultistagePlay::CardInfo>> *__for_range; // [rsp+40h] [rbp-100h]
  std::pair<unsigned int const,std::unordered_map<unsigned int,MechanicusMultistagePlay::CardInfo> > *__in; // [rsp+48h] [rbp-F8h]
  std::tuple_element<0,std::pair<unsigned int const,std::unordered_map<unsigned int,MechanicusMultistagePlay::CardInfo> > >::type *uid; // [rsp+50h] [rbp-F0h]
  std::tuple_element<1,std::pair<unsigned int const,std::unordered_map<unsigned int,MechanicusMultistagePlay::CardInfo> > >::type *card_info_map; // [rsp+58h] [rbp-E8h]
  std::unordered_map<unsigned int,MechanicusMultistagePlay::CardInfo> *__for_range_0; // [rsp+60h] [rbp-E0h]
  std::pair<unsigned int const,MechanicusMultistagePlay::CardInfo> *v43; // [rsp+68h] [rbp-D8h]
  std::tuple_element<0,std::pair<unsigned int const,MechanicusMultistagePlay::CardInfo> >::type *id; // [rsp+70h] [rbp-D0h]
  std::tuple_element<1,std::pair<unsigned int const,MechanicusMultistagePlay::CardInfo> >::type *card_info; // [rsp+78h] [rbp-C8h]
  common::milog::MiLogStream v46; // [rsp+80h] [rbp-C0h] BYREF
  common::milog::MiLogStream v47; // [rsp+A0h] [rbp-A0h] BYREF
  char v48[128]; // [rsp+C0h] [rbp-80h] BYREF

  v4 = (unsigned __int64)v48;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 32 4 12 card_id:2133 48 4 14 effect_id:2133 64 4 10 state:2133";
  *(_QWORD *)(v4 + 16) = MechanicusMultistagePlay::setChallengeState;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -202116348;
  *(_DWORD *)(v4 + 32) = card_id;
  *(_DWORD *)(v4 + 48) = effect_id;
  *(_DWORD *)(v4 + 64) = state;
  __for_range = &this->uid_to_card_info_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,std::unordered_map<unsigned int,MechanicusMultistagePlay::CardInfo>>::begin(&this->uid_to_card_info_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::unordered_map<unsigned int,MechanicusMultistagePlay::CardInfo>>::end(&this->uid_to_card_info_map_)._M_cur;
LABEL_5:
  if ( std::__detail::operator!=<std::pair<unsigned int const,std::unordered_map<unsigned int,MechanicusMultistagePlay::CardInfo>>,false>(
         &__for_begin,
         &__for_end) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,MechanicusMultistagePlay::CardInfo>>,false,false>::operator*(&__for_begin);
    uid = std::get<0ul,unsigned int const,std::unordered_map<unsigned int,MechanicusMultistagePlay::CardInfo>>(__in);
    card_info_map = std::get<1ul,unsigned int const,std::unordered_map<unsigned int,MechanicusMultistagePlay::CardInfo>>(__in);
    __for_range_0 = card_info_map;
    __for_begin_0._M_cur = std::unordered_map<unsigned int,MechanicusMultistagePlay::CardInfo>::begin(card_info_map)._M_cur;
    __for_end_0._M_cur = std::unordered_map<unsigned int,MechanicusMultistagePlay::CardInfo>::end(__for_range_0)._M_cur;
    while ( 1 )
    {
      if ( !std::__detail::operator!=<std::pair<unsigned int const,MechanicusMultistagePlay::CardInfo>,false>(
              &__for_begin_0,
              &__for_end_0) )
      {
        std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,MechanicusMultistagePlay::CardInfo>>,false,false>::operator++(&__for_begin);
        goto LABEL_5;
      }
      v43 = std::__detail::_Node_iterator<std::pair<unsigned int const,MechanicusMultistagePlay::CardInfo>,false,false>::operator*(&__for_begin_0);
      id = std::get<0ul,unsigned int const,MechanicusMultistagePlay::CardInfo>(v43);
      card_info = std::get<1ul,unsigned int const,MechanicusMultistagePlay::CardInfo>(v43);
      if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( *id == *(_DWORD *)(v4 + 32) )
      {
        v7 = (((_BYTE)card_info + 8) & 7u) + 3;
        if ( *(_BYTE *)(((unsigned __int64)&card_info->curse_effect_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)card_info + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&card_info->curse_effect_id >> 3)
                                                                  + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        if ( card_info->curse_effect_id == *(_DWORD *)(v4 + 48) )
        {
          v8 = *(_DWORD *)(v4 + 64);
          v9 = *(_BYTE *)(((unsigned __int64)&card_info->challenge_state >> 3) + 0x7FFF8000);
          LOBYTE(v7) = v9 != 0;
          v10 = v9 != 0 && (char)((((_BYTE)card_info + 20) & 7) + 3) >= v9;
          if ( v10 )
            __asan_report_store4(&card_info->challenge_state, v7, v10);
          card_info->challenge_state = v8;
          if ( *(_DWORD *)(v4 + 64) == 3 )
          {
            if ( *(_BYTE *)(((unsigned __int64)&this->fin_challenge_num_ >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->fin_challenge_num_ >> 3)
                                                                   + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            ++this->fin_challenge_num_;
          }
          common::milog::MiLogStream::create(
            &v46,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/scene/scene_multistage_play_impl/mechanicus_multistage_play.cpp",
            "setChallengeState",
            2150);
          v11 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                  &v46,
                  (const char (*)[23])"[MECHANICUS] set card:");
          v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v11,
                  (const unsigned int *)(v4 + 32));
          v13 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                  v12,
                  (const char (*)[15])" curse effect:");
          v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v13,
                  (const unsigned int *)(v4 + 48));
          v15 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                  v14,
                  (const char (*)[19])", challenge state:");
          common::milog::MiLogStream::operator<<<proto::InBattleMechanicusCardChallengeState,(proto::InBattleMechanicusCardChallengeState*)0>(
            v15,
            (const proto::InBattleMechanicusCardChallengeState *)(v4 + 64));
          common::milog::MiLogStream::~MiLogStream(&v46);
          result = 0LL;
          goto LABEL_34;
        }
        v17 = (((_BYTE)card_info + 24) & 7u) + 3;
        if ( *(_BYTE *)(((unsigned __int64)&card_info->effect_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)card_info + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&card_info->effect_id >> 3)
                                                                   + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        if ( card_info->effect_id == *(_DWORD *)(v4 + 48) )
          break;
      }
      std::__detail::_Node_iterator<std::pair<unsigned int const,MechanicusMultistagePlay::CardInfo>,false,false>::operator++(&__for_begin_0);
    }
    v18 = *(_DWORD *)(v4 + 64);
    v19 = *(_BYTE *)(((unsigned __int64)&card_info->challenge_state >> 3) + 0x7FFF8000);
    LOBYTE(v17) = v19 != 0;
    v20 = v19 != 0 && (char)((((_BYTE)card_info + 20) & 7) + 3) >= v19;
    if ( v20 )
      __asan_report_store4(&card_info->challenge_state, v17, v20);
    card_info->challenge_state = v18;
    if ( *(_DWORD *)(v4 + 64) == 3 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->fin_challenge_num_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->fin_challenge_num_ >> 3)
                                                             + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      ++this->fin_challenge_num_;
    }
    common::milog::MiLogStream::create(
      &v47,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_multistage_play_impl/mechanicus_multistage_play.cpp",
      "setChallengeState",
      2160);
    v21 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
            &v47,
            (const char (*)[23])"[MECHANICUS] set card:");
    v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, (const unsigned int *)(v4 + 32));
    v23 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v22, (const char (*)[16])" normal effect:");
    v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, (const unsigned int *)(v4 + 48));
    v25 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v24, (const char (*)[19])", challenge state:");
    common::milog::MiLogStream::operator<<<proto::InBattleMechanicusCardChallengeState,(proto::InBattleMechanicusCardChallengeState*)0>(
      v25,
      (const proto::InBattleMechanicusCardChallengeState *)(v4 + 64));
    common::milog::MiLogStream::~MiLogStream(&v47);
    result = 0LL;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v47,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_multistage_play_impl/mechanicus_multistage_play.cpp",
      "setChallengeState",
      2165);
    v26 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
            &v47,
            (const char (*)[23])"[MECHANICUS] set card:");
    v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, (const unsigned int *)(v4 + 32));
    v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v27, (const char (*)[16])" normal effect:");
    v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, (const unsigned int *)(v4 + 48));
    v30 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v29, (const char (*)[19])", challenge state:");
    v31 = common::milog::MiLogStream::operator<<<proto::InBattleMechanicusCardChallengeState,(proto::InBattleMechanicusCardChallengeState*)0>(
            v30,
            (const proto::InBattleMechanicusCardChallengeState *)(v4 + 64));
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v31, (const char (*)[12])" NOT FOUND.");
    common::milog::MiLogStream::~MiLogStream(&v47);
    result = 0xFFFFFFFFLL;
  }
LABEL_34:
  if ( v48 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 2170: range 000000001602F748-000000001602F79A
const TreatreMechanicusExcelConfigMgr *__cdecl MechanicusMultistagePlay::getConfigMgr(
        const MechanicusMultistagePlay *const this)
{
  TreatreMechanicusExcelConfigMgr *p_mechanicus_config_mgr; // rbx
  std::shared_ptr<Config> v3[2]; // [rsp+10h] [rbp-20h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v3);
  p_mechanicus_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v3)->design_config.txt_config_mgr.mechanicus_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(v3);
  return p_mechanicus_config_mgr;
};

// Line 2175: range 000000001602F79C-000000001602F81B
void __cdecl MechanicusMultistagePlay::addOneInteractCount(MechanicusMultistagePlay *const this, Player *player)
{
  unsigned __int64 v2; // rax
  std::unordered_map<unsigned int,unsigned int>::key_type __k[5]; // [rsp+1Ch] [rbp-14h] BYREF

  __k[0] = Player::getUid(player);
  v2 = (unsigned __int64)std::unordered_map<unsigned int,unsigned int>::operator[](&this->uid_interact_count_map_, __k);
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) != 0 && (char)((v2 & 7) + 3) >= *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    v2 = __asan_report_load4();
  ++*(_DWORD *)v2;
};

// Line 2180: range 000000001602F81C-000000001602FF8A
void __cdecl MechanicusMultistagePlay::procAurasOnGearRemove(MechanicusMultistagePlay *const this, Gadget *gear_gadget)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  const std::pair<unsigned int const,std::shared_ptr<Gadget> > *v14; // rax
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // r14
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rdx
  std::map<std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ServerGlobalValueEffectInfo>::iterator __for_begin; // [rsp+18h] [rbp-168h] BYREF
  std::map<std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ServerGlobalValueEffectInfo>::iterator __for_end; // [rsp+20h] [rbp-160h] BYREF
  std::map<unsigned int,std::shared_ptr<Gadget>>::iterator __for_begin_0; // [rsp+28h] [rbp-158h] BYREF
  std::map<unsigned int,std::shared_ptr<Gadget>>::iterator __for_end_0; // [rsp+30h] [rbp-150h] BYREF
  std::map<std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ServerGlobalValueEffectInfo> *__for_range; // [rsp+38h] [rbp-148h]
  const std::pair<const std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ServerGlobalValueEffectInfo> *v35; // [rsp+40h] [rbp-140h]
  std::tuple_element<0,const std::pair<const std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ServerGlobalValueEffectInfo> >::type *key; // [rsp+48h] [rbp-138h]
  std::tuple_element<1,const std::pair<const std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ServerGlobalValueEffectInfo> >::type *effect; // [rsp+50h] [rbp-130h]
  std::map<unsigned int,std::shared_ptr<Gadget>> *__for_range_0; // [rsp+58h] [rbp-128h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<Gadget> > >::type *_; // [rsp+60h] [rbp-120h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<Gadget> > >::type *gear_ptr; // [rsp+68h] [rbp-118h]
  std::pair<unsigned int const,std::shared_ptr<Gadget> > __in; // [rsp+70h] [rbp-110h] BYREF
  common::milog::MiLogStream v42; // [rsp+90h] [rbp-F0h] BYREF
  char v43[208]; // [rsp+B0h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v43;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 4 14 gadget_id:2181 48 4 12 card_id:2184 64 4 8 ret:2206 80 48 15 gadget_map:2198";
  *(_QWORD *)(v2 + 16) = MechanicusMultistagePlay::procAurasOnGearRemove;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = 61956;
  v4[536862724] = -202116109;
  *(_DWORD *)(v2 + 32) = Gadget::getGadgetId(gear_gadget);
  __for_range = &this->sgv_aura_map_;
  __for_begin._M_node = std::map<std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ServerGlobalValueEffectInfo>::begin(&this->sgv_aura_map_)._M_node;
  __for_end._M_node = std::map<std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ServerGlobalValueEffectInfo>::end(&this->sgv_aura_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v35 = std::_Rb_tree_iterator<std::pair<std::pair const<unsigned int,unsigned int>,MechanicusMultistagePlay::ServerGlobalValueEffectInfo>>::operator*(&__for_begin);
    key = std::get<0ul,std::pair<unsigned int,unsigned int> const,MechanicusMultistagePlay::ServerGlobalValueEffectInfo>(v35);
    effect = (std::tuple_element<1,const std::pair<const std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ServerGlobalValueEffectInfo> >::type *)std::get<1ul,std::pair<unsigned int,unsigned int> const,MechanicusMultistagePlay::ServerGlobalValueEffectInfo>(v35);
    if ( *(_BYTE *)(((unsigned __int64)key >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)key & 7) + 3) >= *(_BYTE *)(((unsigned __int64)key >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v2 + 48) = key->first;
    if ( *(_BYTE *)(((unsigned __int64)&effect->end_round >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&effect->end_round >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( !effect->end_round )
      goto LABEL_30;
    if ( *(_BYTE *)(((unsigned __int64)&this->current_round_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->current_round_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( this->current_round_ > effect->end_round )
    {
      common::milog::MiLogStream::create(
        &v42,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/scene_multistage_play_impl/mechanicus_multistage_play.cpp",
        "procAurasOnGearRemove",
        2187);
      v5 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
             &v42,
             (const char (*)[32])"[MECHANICUS] aura sgv @effect: ");
      v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &effect->effect_id);
      v7 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v6, (const char (*)[7])" card:");
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 48));
      v9 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v8, (const char (*)[3])" [");
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &effect->begin_round);
      v11 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v10, (const char (*)[3])", ");
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &effect->end_round);
      v13 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              v12,
              (const char (*)[27])"] expired. current_round: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &this->current_round_);
      common::milog::MiLogStream::~MiLogStream(&v42);
    }
    else
    {
LABEL_30:
      if ( common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(
             &effect->target_gadget_set,
             (const unsigned int *)(v2 + 32)) )
      {
        std::map<unsigned int,std::shared_ptr<Gadget>>::map((std::map<unsigned int,std::shared_ptr<Gadget>> *const)(v2 + 80));
        if ( *(_BYTE *)(((unsigned __int64)&effect->aura_radius >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&effect->aura_radius >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        MechanicusMultistagePlay::getGearsInSpecificGadgetAura(
          this,
          gear_gadget,
          &effect->target_gadget_set,
          effect->aura_radius,
          (std::map<unsigned int,std::shared_ptr<Gadget>> *)(v2 + 80));
        __for_range_0 = (std::map<unsigned int,std::shared_ptr<Gadget>> *)(v2 + 80);
        __for_begin_0._M_node = std::map<unsigned int,std::shared_ptr<Gadget>>::begin((std::map<unsigned int,std::shared_ptr<Gadget>> *const)(v2 + 80))._M_node;
        __for_end_0._M_node = std::map<unsigned int,std::shared_ptr<Gadget>>::end(__for_range_0)._M_node;
        while ( std::operator!=(&__for_begin_0, &__for_end_0) )
        {
          v14 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Gadget>>>::operator*(&__for_begin_0);
          std::pair<unsigned int const,std::shared_ptr<Gadget>>::pair(&__in, v14);
          _ = std::get<0ul,unsigned int const,std::shared_ptr<Gadget>>(&__in);
          gear_ptr = std::get<1ul,unsigned int const,std::shared_ptr<Gadget>>(&__in);
          if ( !std::operator==<Gadget>(0LL, gear_ptr) )
          {
            v15 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)gear_ptr);
            *(_DWORD *)(v2 + 64) = Creature::setServerGlobalValue(v15, &effect->key, 0.0, 1);
            common::milog::MiLogStream::create(
              &v42,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/scene/scene_multistage_play_impl/mechanicus_multistage_play.cpp",
              "procAurasOnGearRemove",
              2207);
            v16 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                    &v42,
                    (const char (*)[30])"[FOUNDATION] clear aura SGV [");
            v17 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v16, &effect->key);
            v18 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v17, (const char (*)[3])": ");
            v19 = common::milog::MiLogStream::operator<<<float,(float *)0>(v18, &effect->value);
            v20 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v19, (const char (*)[9])"] @card:");
            v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &effect->card_id);
            v22 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                    v21,
                    (const char (*)[12])" effect_id:");
            v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &effect->effect_id);
            v24 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v23, (const char (*)[6])" ret:");
            v25 = common::milog::MiLogStream::operator<<<int,(int *)0>(v24, (const int *)(v2 + 64));
            v26 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v25, (const char (*)[9])" gadget:");
            v27 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)gear_ptr);
            v28 = common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v26, v27);
            v29 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v28, (const char (*)[7])" from:");
            common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v29, gear_gadget);
            common::milog::MiLogStream::~MiLogStream(&v42);
          }
          std::pair<unsigned int const,std::shared_ptr<Gadget>>::~pair(&__in);
          std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Gadget>>>::operator++(&__for_begin_0);
        }
        std::map<unsigned int,std::shared_ptr<Gadget>>::~map((std::map<unsigned int,std::shared_ptr<Gadget>> *const)(v2 + 80));
      }
    }
    std::_Rb_tree_iterator<std::pair<std::pair const<unsigned int,unsigned int>,MechanicusMultistagePlay::ServerGlobalValueEffectInfo>>::operator++(&__for_begin);
  }
  if ( v43 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 2214: range 000000001602FF8C-0000000016030737
void __cdecl MechanicusMultistagePlay::procAuraOnGearAdd(MechanicusMultistagePlay *const this, Gadget *gear_gadget)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  const std::pair<unsigned int const,std::shared_ptr<Gadget> > *v14; // rax
  Creature *p_value; // rdi
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // r14
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rdx
  std::map<std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ServerGlobalValueEffectInfo>::iterator __for_begin; // [rsp+18h] [rbp-168h] BYREF
  std::map<std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ServerGlobalValueEffectInfo>::iterator __for_end; // [rsp+20h] [rbp-160h] BYREF
  std::map<unsigned int,std::shared_ptr<Gadget>>::iterator __for_begin_0; // [rsp+28h] [rbp-158h] BYREF
  std::map<unsigned int,std::shared_ptr<Gadget>>::iterator __for_end_0; // [rsp+30h] [rbp-150h] BYREF
  std::map<std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ServerGlobalValueEffectInfo> *__for_range; // [rsp+38h] [rbp-148h]
  const std::pair<const std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ServerGlobalValueEffectInfo> *v36; // [rsp+40h] [rbp-140h]
  std::tuple_element<0,const std::pair<const std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ServerGlobalValueEffectInfo> >::type *key; // [rsp+48h] [rbp-138h]
  std::tuple_element<1,const std::pair<const std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ServerGlobalValueEffectInfo> >::type *effect; // [rsp+50h] [rbp-130h]
  std::map<unsigned int,std::shared_ptr<Gadget>> *__for_range_0; // [rsp+58h] [rbp-128h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<Gadget> > >::type *_; // [rsp+60h] [rbp-120h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<Gadget> > >::type *gear_ptr; // [rsp+68h] [rbp-118h]
  std::pair<unsigned int const,std::shared_ptr<Gadget> > __in; // [rsp+70h] [rbp-110h] BYREF
  common::milog::MiLogStream v43; // [rsp+90h] [rbp-F0h] BYREF
  char v44[208]; // [rsp+B0h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v44;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 4 14 gadget_id:2215 48 4 12 card_id:2218 64 4 8 ret:2239 80 48 15 gadget_map:2231";
  *(_QWORD *)(v2 + 16) = MechanicusMultistagePlay::procAuraOnGearAdd;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = 61956;
  v4[536862724] = -202116109;
  *(_DWORD *)(v2 + 32) = Gadget::getGadgetId(gear_gadget);
  __for_range = &this->sgv_aura_map_;
  __for_begin._M_node = std::map<std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ServerGlobalValueEffectInfo>::begin(&this->sgv_aura_map_)._M_node;
  __for_end._M_node = std::map<std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ServerGlobalValueEffectInfo>::end(&this->sgv_aura_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v36 = std::_Rb_tree_iterator<std::pair<std::pair const<unsigned int,unsigned int>,MechanicusMultistagePlay::ServerGlobalValueEffectInfo>>::operator*(&__for_begin);
    key = std::get<0ul,std::pair<unsigned int,unsigned int> const,MechanicusMultistagePlay::ServerGlobalValueEffectInfo>(v36);
    effect = (std::tuple_element<1,const std::pair<const std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ServerGlobalValueEffectInfo> >::type *)std::get<1ul,std::pair<unsigned int,unsigned int> const,MechanicusMultistagePlay::ServerGlobalValueEffectInfo>(v36);
    if ( *(_BYTE *)(((unsigned __int64)key >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)key & 7) + 3) >= *(_BYTE *)(((unsigned __int64)key >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v2 + 48) = key->first;
    if ( *(_BYTE *)(((unsigned __int64)&effect->end_round >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&effect->end_round >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( !effect->end_round )
      goto LABEL_32;
    if ( *(_BYTE *)(((unsigned __int64)&this->current_round_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->current_round_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( this->current_round_ > effect->end_round )
    {
      common::milog::MiLogStream::create(
        &v43,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/scene_multistage_play_impl/mechanicus_multistage_play.cpp",
        "procAuraOnGearAdd",
        2221);
      v5 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
             &v43,
             (const char (*)[32])"[MECHANICUS] aura sgv @effect: ");
      v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &effect->effect_id);
      v7 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v6, (const char (*)[7])" card:");
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 48));
      v9 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v8, (const char (*)[3])" [");
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &effect->begin_round);
      v11 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v10, (const char (*)[3])", ");
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &effect->end_round);
      v13 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              v12,
              (const char (*)[27])"] expired. current_round: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &this->current_round_);
      common::milog::MiLogStream::~MiLogStream(&v43);
    }
    else
    {
LABEL_32:
      if ( common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(
             &effect->target_gadget_set,
             (const unsigned int *)(v2 + 32)) )
      {
        std::map<unsigned int,std::shared_ptr<Gadget>>::map((std::map<unsigned int,std::shared_ptr<Gadget>> *const)(v2 + 80));
        if ( *(_BYTE *)(((unsigned __int64)&effect->aura_radius >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&effect->aura_radius >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        MechanicusMultistagePlay::getGearsInSpecificGadgetAura(
          this,
          gear_gadget,
          &effect->target_gadget_set,
          effect->aura_radius,
          (std::map<unsigned int,std::shared_ptr<Gadget>> *)(v2 + 80));
        __for_range_0 = (std::map<unsigned int,std::shared_ptr<Gadget>> *)(v2 + 80);
        __for_begin_0._M_node = std::map<unsigned int,std::shared_ptr<Gadget>>::begin((std::map<unsigned int,std::shared_ptr<Gadget>> *const)(v2 + 80))._M_node;
        __for_end_0._M_node = std::map<unsigned int,std::shared_ptr<Gadget>>::end(__for_range_0)._M_node;
        while ( std::operator!=(&__for_begin_0, &__for_end_0) )
        {
          v14 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Gadget>>>::operator*(&__for_begin_0);
          std::pair<unsigned int const,std::shared_ptr<Gadget>>::pair(&__in, v14);
          _ = std::get<0ul,unsigned int const,std::shared_ptr<Gadget>>(&__in);
          gear_ptr = std::get<1ul,unsigned int const,std::shared_ptr<Gadget>>(&__in);
          if ( !std::operator==<Gadget>(0LL, gear_ptr) )
          {
            p_value = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)gear_ptr);
            if ( *(_BYTE *)(((unsigned __int64)&effect->value >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&effect->value >> 3) + 0x7FFF8000) <= 3 )
            {
              p_value = (Creature *)&effect->value;
              __asan_report_load4();
            }
            *(_DWORD *)(v2 + 64) = Creature::setServerGlobalValue(p_value, &effect->key, effect->value, 1);
            common::milog::MiLogStream::create(
              &v43,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/scene/scene_multistage_play_impl/mechanicus_multistage_play.cpp",
              "procAuraOnGearAdd",
              2240);
            v16 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                    &v43,
                    (const char (*)[28])"[FOUNDATION] add aura SGV [");
            v17 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v16, &effect->key);
            v18 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v17, (const char (*)[3])": ");
            v19 = common::milog::MiLogStream::operator<<<float,(float *)0>(v18, &effect->value);
            v20 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v19, (const char (*)[9])"] @card:");
            v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &effect->card_id);
            v22 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                    v21,
                    (const char (*)[12])" effect_id:");
            v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &effect->effect_id);
            v24 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v23, (const char (*)[6])" ret:");
            v25 = common::milog::MiLogStream::operator<<<int,(int *)0>(v24, (const int *)(v2 + 64));
            v26 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v25, (const char (*)[9])" gadget:");
            v27 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)gear_ptr);
            v28 = common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v26, v27);
            v29 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v28, (const char (*)[7])" from:");
            common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v29, gear_gadget);
            common::milog::MiLogStream::~MiLogStream(&v43);
          }
          std::pair<unsigned int const,std::shared_ptr<Gadget>>::~pair(&__in);
          std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Gadget>>>::operator++(&__for_begin_0);
        }
        std::map<unsigned int,std::shared_ptr<Gadget>>::~map((std::map<unsigned int,std::shared_ptr<Gadget>> *const)(v2 + 80));
      }
    }
    std::_Rb_tree_iterator<std::pair<std::pair const<unsigned int,unsigned int>,MechanicusMultistagePlay::ServerGlobalValueEffectInfo>>::operator++(&__for_begin);
  }
  if ( v44 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 2247: range 0000000016030738-000000001603093A
__int64 __fastcall MechanicusMultistagePlay::getGearLevel(
        const MechanicusMultistagePlay *const this,
        Player *player,
        uint32_t gear_id)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  PlayerMechanicusComp *MechanicusComp; // rax
  const TreatreMechanicusExcelConfigMgr *ConfigMgr; // rcx
  __int64 result; // rax
  uint32_t gear_level; // [rsp+2Ch] [rbp-B4h]
  char v12[176]; // [rsp+30h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 4 12 gear_id:2246 48 48 22 default_gears_set:2249";
  *(_QWORD *)(v3 + 16) = MechanicusMultistagePlay::getGearLevel;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61956;
  v5[536862723] = -202116109;
  *(_DWORD *)(v3 + 32) = gear_id;
  MechanicusComp = Player::getMechanicusComp(player);
  gear_level = PlayerMechanicusComp::findGearLevel(MechanicusComp, *(_DWORD *)(v3 + 32));
  ConfigMgr = MechanicusMultistagePlay::getConfigMgr(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  TreatreMechanicusExcelConfigMgr::getDefaultGearsByDungeonId(
    (std::set<unsigned int> *)(v3 + 48),
    ConfigMgr,
    this->dungeon_id_);
  if ( !gear_level
    && common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
         (std::set<unsigned int> *)(v3 + 48),
         (const unsigned int *)(v3 + 32)) )
  {
    gear_level = 1;
  }
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 48));
  result = gear_level;
  if ( v12 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 2258: range 000000001603093C-0000000016030B52
__int64 __fastcall MechanicusMultistagePlay::getGearCost(
        const MechanicusMultistagePlay *const this,
        Player *player,
        uint32_t gear_id,
        unsigned __int64 cost)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  __int64 result; // rax
  uint32_t GearBuildingCost; // ecx
  char v12; // dl
  __int64 v13; // rsi
  bool v14; // dl
  uint32_t gear_level; // [rsp+2Ch] [rbp-84h]
  common::milog::MiLogStream v18; // [rsp+30h] [rbp-80h] BYREF
  char v19[96]; // [rsp+50h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 4 12 gear_id:2257";
  *(_QWORD *)(v4 + 16) = MechanicusMultistagePlay::getGearCost;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116348;
  *(_DWORD *)(v4 + 32) = gear_id;
  gear_level = MechanicusMultistagePlay::getGearLevel(this, player, *(_DWORD *)(v4 + 32));
  if ( gear_level )
  {
    v13 = *(unsigned int *)(v4 + 32);
    GearBuildingCost = MechanicusMultistagePlay::getGearBuildingCost(this, v13, gear_level);
    v12 = *(_BYTE *)((cost >> 3) + 0x7FFF8000);
    LOBYTE(v13) = v12 != 0;
    v14 = v12 != 0 && (char)((cost & 7) + 3) >= v12;
    if ( v14 )
      __asan_report_store4(cost, v13, v14);
    *(_DWORD *)cost = GearBuildingCost;
    result = 0LL;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/scene_multistage_play_impl/mechanicus_multistage_play.cpp",
      "getGearCost",
      2262);
    v7 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v18, (const char (*)[19])"[MECHANICUS] gear:");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v4 + 32));
    v9 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
           v8,
           (const char (*)[23])" not unlocked. player:");
    operator<<(v9, player);
    common::milog::MiLogStream::~MiLogStream(&v18);
    result = 860LL;
  }
  if ( v19 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 2270: range 0000000016030B54-0000000016030D6A
__int64 __fastcall MechanicusMultistagePlay::getGearRefund(
        const MechanicusMultistagePlay *const this,
        Player *player,
        uint32_t gear_id,
        unsigned __int64 refund)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  __int64 result; // rax
  uint32_t GearDemolitionRefund; // ecx
  char v12; // dl
  __int64 v13; // rsi
  bool v14; // dl
  uint32_t gear_level; // [rsp+2Ch] [rbp-84h]
  common::milog::MiLogStream v18; // [rsp+30h] [rbp-80h] BYREF
  char v19[96]; // [rsp+50h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 4 12 gear_id:2269";
  *(_QWORD *)(v4 + 16) = MechanicusMultistagePlay::getGearRefund;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116348;
  *(_DWORD *)(v4 + 32) = gear_id;
  gear_level = MechanicusMultistagePlay::getGearLevel(this, player, *(_DWORD *)(v4 + 32));
  if ( gear_level )
  {
    v13 = *(unsigned int *)(v4 + 32);
    GearDemolitionRefund = MechanicusMultistagePlay::getGearDemolitionRefund(this, v13, gear_level);
    v12 = *(_BYTE *)((refund >> 3) + 0x7FFF8000);
    LOBYTE(v13) = v12 != 0;
    v14 = v12 != 0 && (char)((refund & 7) + 3) >= v12;
    if ( v14 )
      __asan_report_store4(refund, v13, v14);
    *(_DWORD *)refund = GearDemolitionRefund;
    result = 0LL;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/scene_multistage_play_impl/mechanicus_multistage_play.cpp",
      "getGearRefund",
      2274);
    v7 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v18, (const char (*)[19])"[MECHANICUS] gear:");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v4 + 32));
    v9 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
           v8,
           (const char (*)[23])" not unlocked. player:");
    operator<<(v9, player);
    common::milog::MiLogStream::~MiLogStream(&v18);
    result = 860LL;
  }
  if ( v19 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 2282: range 0000000016030D6C-0000000016030F66
void __cdecl MechanicusMultistagePlay::onFoundationCreated(MechanicusMultistagePlay *const this, Gadget *gear_gadget)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  std::__shared_ptr_access<FoundationComp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::weak_ptr<FoundationComp> *v6; // rax
  std::map<unsigned int,std::weak_ptr<FoundationComp>>::key_type __k; // [rsp+1Ch] [rbp-94h] BYREF
  common::milog::MiLogStream v8; // [rsp+20h] [rbp-90h] BYREF
  char v9[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 24 foundation_comp_ptr:2283";
  *(_QWORD *)(v2 + 16) = MechanicusMultistagePlay::onFoundationCreated;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  EcsBase<Gadget,GadgetCompBase,28u>::findComp<FoundationComp>((const EcsBase<Gadget,GadgetCompBase,28> *const)(v2 + 32));
  if ( std::operator==<FoundationComp>(0LL, (const std::shared_ptr<FoundationComp> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_multistage_play_impl/mechanicus_multistage_play.cpp",
      "onFoundationCreated",
      2286);
    common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
      &v8,
      (const char (*)[37])"[MECHANICUS] foundation comp nullptr");
    common::milog::MiLogStream::~MiLogStream(&v8);
  }
  else
  {
    v5 = std::__shared_ptr_access<FoundationComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FoundationComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    FoundationComp::broadcastFoundationInfo(v5);
    __k = Entity::getConfigId((const Entity *const)gear_gadget);
    v6 = std::map<unsigned int,std::weak_ptr<FoundationComp>>::operator[](&this->foundation_wtr_map_, &__k);
    std::weak_ptr<FoundationComp>::operator=<FoundationComp>(v6, (const std::shared_ptr<FoundationComp> *)(v2 + 32));
  }
  std::shared_ptr<FoundationComp>::~shared_ptr((std::shared_ptr<FoundationComp> *const)(v2 + 32));
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 2294: range 0000000016030F68-0000000016031324
void __cdecl MechanicusMultistagePlay::foreachFoundation(
        const MechanicusMultistagePlay *const this,
        std::function<ForeachPolicy(FoundationComp&)> *p_func)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::map<unsigned int,std::weak_ptr<FoundationComp>>::size_type v5; // rax
  const std::weak_ptr<FoundationComp> *v6; // rax
  int v7; // r14d
  std::__shared_ptr_access<FoundationComp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rdx
  int v9; // r14d
  std::map<unsigned int,std::weak_ptr<FoundationComp>>::const_iterator __for_begin; // [rsp+18h] [rbp-108h] BYREF
  std::map<unsigned int,std::weak_ptr<FoundationComp>>::const_iterator __for_end; // [rsp+20h] [rbp-100h] BYREF
  const std::map<unsigned int,std::weak_ptr<FoundationComp>> *__for_range; // [rsp+28h] [rbp-F8h]
  std::vector<std::weak_ptr<FoundationComp>> *__for_range_0; // [rsp+30h] [rbp-F0h]
  const std::pair<unsigned int const,std::weak_ptr<FoundationComp> > *v14; // [rsp+38h] [rbp-E8h]
  std::tuple_element<0,const std::pair<unsigned int const,std::weak_ptr<FoundationComp> > >::type *_; // [rsp+40h] [rbp-E0h]
  std::tuple_element<1,const std::pair<unsigned int const,std::weak_ptr<FoundationComp> > >::type *foundation_wtr; // [rsp+48h] [rbp-D8h]
  char v17[208]; // [rsp+50h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 16 24 foundation_comp_wtr:2301 64 16 24 foundation_comp_ptr:2303 96 24 12 wtr_vec:2295";
  *(_QWORD *)(v2 + 16) = MechanicusMultistagePlay::foreachFoundation;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  std::vector<std::weak_ptr<FoundationComp>>::vector((std::vector<std::weak_ptr<FoundationComp>> *const)(v2 + 96));
  v5 = std::map<unsigned int,std::weak_ptr<FoundationComp>>::size(&this->foundation_wtr_map_);
  std::vector<std::weak_ptr<FoundationComp>>::reserve((std::vector<std::weak_ptr<FoundationComp>> *const)(v2 + 96), v5);
  __for_range = &this->foundation_wtr_map_;
  __for_begin._M_node = std::map<unsigned int,std::weak_ptr<FoundationComp>>::begin(&this->foundation_wtr_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::weak_ptr<FoundationComp>>::end(&this->foundation_wtr_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v14 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::weak_ptr<FoundationComp>>>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,std::weak_ptr<FoundationComp>>(v14);
    foundation_wtr = (std::tuple_element<1,const std::pair<unsigned int const,std::weak_ptr<FoundationComp> > >::type *)std::get<1ul,unsigned int const,std::weak_ptr<FoundationComp>>(v14);
    std::vector<std::weak_ptr<FoundationComp>>::emplace_back<std::weak_ptr<FoundationComp> const&>(
      (std::vector<std::weak_ptr<FoundationComp>> *const)(v2 + 96),
      foundation_wtr,
      foundation_wtr);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::weak_ptr<FoundationComp>>>::operator++(&__for_begin);
  }
  __for_range_0 = (std::vector<std::weak_ptr<FoundationComp>> *)(v2 + 96);
  __for_begin._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::weak_ptr<FoundationComp> > >::_Base_ptr)std::vector<std::weak_ptr<FoundationComp>>::begin((std::vector<std::weak_ptr<FoundationComp>> *const)(v2 + 96))._M_current;
  __for_end._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::weak_ptr<FoundationComp> > >::_Base_ptr)std::vector<std::weak_ptr<FoundationComp>>::end(__for_range_0)._M_current;
  while ( __gnu_cxx::operator!=<std::weak_ptr<FoundationComp> *,std::vector<std::weak_ptr<FoundationComp>>>(
            (const __gnu_cxx::__normal_iterator<std::weak_ptr<FoundationComp>*,std::vector<std::weak_ptr<FoundationComp>> > *)&__for_begin,
            (const __gnu_cxx::__normal_iterator<std::weak_ptr<FoundationComp>*,std::vector<std::weak_ptr<FoundationComp>> > *)&__for_end) )
  {
    v6 = __gnu_cxx::__normal_iterator<std::weak_ptr<FoundationComp> *,std::vector<std::weak_ptr<FoundationComp>>>::operator*((const __gnu_cxx::__normal_iterator<std::weak_ptr<FoundationComp>*,std::vector<std::weak_ptr<FoundationComp>> > *const)&__for_begin);
    std::weak_ptr<FoundationComp>::weak_ptr((std::weak_ptr<FoundationComp> *const)(v2 + 32), v6);
    std::weak_ptr<FoundationComp>::lock((const std::weak_ptr<FoundationComp> *const)(v2 + 64));
    if ( std::operator==<FoundationComp>((const std::shared_ptr<FoundationComp> *)(v2 + 64), 0LL) )
    {
      v7 = 0;
    }
    else
    {
      v8 = std::__shared_ptr_access<FoundationComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<FoundationComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      v7 = std::function<ForeachPolicy ()(FoundationComp &)>::operator()(p_func, v8) ? 1 : 2;
    }
    std::shared_ptr<FoundationComp>::~shared_ptr((std::shared_ptr<FoundationComp> *const)(v2 + 64));
    if ( v7 )
      v9 = v7 == 2 ? 2 : 1;
    else
      v9 = 0;
    std::weak_ptr<FoundationComp>::~weak_ptr((std::weak_ptr<FoundationComp> *const)(v2 + 32));
    if ( v9 )
    {
      if ( v9 != 2 )
        break;
    }
    __gnu_cxx::__normal_iterator<std::weak_ptr<FoundationComp> *,std::vector<std::weak_ptr<FoundationComp>>>::operator++((__gnu_cxx::__normal_iterator<std::weak_ptr<FoundationComp>*,std::vector<std::weak_ptr<FoundationComp>> > *const)&__for_begin);
  }
  std::vector<std::weak_ptr<FoundationComp>>::~vector((std::vector<std::weak_ptr<FoundationComp>> *const)(v2 + 96));
  if ( v17 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 2316: range 0000000016031402-000000001603157D
void __cdecl MechanicusMultistagePlay::onSelectWorktopOption(
        MechanicusMultistagePlay *const this,
        Player *player,
        Gadget *gadget,
        uint32_t option_id)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r14
  std::function<ForeachPolicy(FoundationComp&)> p_func; // [rsp+30h] [rbp-90h] BYREF
  char v9[112]; // [rsp+50h] [rbp-70h] BYREF

  v4 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 1 20 is_gear_worktop:2318";
  *(_QWORD *)(v4 + 16) = MechanicusMultistagePlay::onSelectWorktopOption;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116351;
  *(_BYTE *)(v4 + 32) = 0;
  std::function<ForeachPolicy ()(FoundationComp &)>::function<MechanicusMultistagePlay::onSelectWorktopOption(Player &,Gadget &,unsigned int)::{lambda(FoundationComp &)#1},void,void>(
    &p_func,
    (MechanicusMultistagePlay::onSelectWorktopOption::<lambda(FoundationComp&)>)__PAIR128__(
                                                                                  (unsigned __int64)gadget,
                                                                                  v4 + 32));
  MechanicusMultistagePlay::foreachFoundation(this, &p_func);
  std::function<ForeachPolicy ()(FoundationComp &)>::~function(&p_func);
  if ( *(_BYTE *)(v4 + 32) != 1 )
    MechanicusMultistagePlay::addOneInteractCount(this, player);
  if ( v9 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 2319: range 0000000016031326-0000000016031401
ForeachPolicy __cdecl MechanicusMultistagePlay::onSelectWorktopOption(Player &,Gadget &,unsigned int)::{lambda(FoundationComp &)#1}::operator()(
        const MechanicusMultistagePlay::onSelectWorktopOption::<lambda(FoundationComp&)> *const __closure,
        FoundationComp *foundation_comp)
{
  char v2; // al
  bool *is_gear_worktop; // rdx
  char v4; // cl
  uint32_t gear_gadget_id; // [rsp+1Ch] [rbp-4h]

  gear_gadget_id = FoundationComp::getGearGadgetId(foundation_comp);
  if ( !gear_gadget_id )
    goto LABEL_6;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__gadget >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( gear_gadget_id == Gadget::getGadgetId(__closure->__gadget) )
    v2 = 1;
  else
LABEL_6:
    v2 = 0;
  if ( !v2 )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  is_gear_worktop = __closure->__is_gear_worktop;
  v4 = *(_BYTE *)(((unsigned __int64)__closure->__is_gear_worktop >> 3) + 0x7FFF8000);
  if ( v4 != 0 && ((__int64)__closure->__is_gear_worktop & 7) >= v4 )
  {
    LOBYTE(foundation_comp) = v4 != 0;
    __asan_report_store1(__closure->__is_gear_worktop, foundation_comp, is_gear_worktop);
  }
  *is_gear_worktop = 1;
  return 1;
};

// Line 2337: range 000000001603157E-0000000016031754
void __cdecl MechanicusMultistagePlay::onPostEnterScene(MechanicusMultistagePlay *const this, Player *player)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 24 11 notify:2341";
  *(_QWORD *)(v2 + 16) = MechanicusMultistagePlay::onPostEnterScene;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218103808;
  v4[536862722] = -202116109;
  if ( *(char *)(((unsigned __int64)&this->is_can_use_skill_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_can_use_skill_);
  if ( !this->is_can_use_skill_ )
  {
    proto::CanUseSkillNotify::CanUseSkillNotify((proto::CanUseSkillNotify *const)(v2 + 32));
    if ( *(char *)(((unsigned __int64)&this->is_can_use_skill_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&this->is_can_use_skill_);
    proto::CanUseSkillNotify::set_is_can_use_skill((proto::CanUseSkillNotify *const)(v2 + 32), this->is_can_use_skill_);
    Player::sendProto(player, (const google::protobuf::Message *)(v2 + 32));
    proto::CanUseSkillNotify::~CanUseSkillNotify((proto::CanUseSkillNotify *const)(v2 + 32));
  }
  if ( v5 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 2348: range 0000000016031756-00000000160319D1
void __cdecl MechanicusMultistagePlay::onLeaveScene(MechanicusMultistagePlay *const this, Player *player)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  unsigned __int64 v5; // rax
  char v6[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 1 11 is_end:2363 64 24 11 notify:2352";
  *(_QWORD *)(v2 + 16) = MechanicusMultistagePlay::onLeaveScene;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  if ( *(char *)(((unsigned __int64)&this->is_can_use_skill_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_can_use_skill_);
  if ( !this->is_can_use_skill_ )
  {
    proto::CanUseSkillNotify::CanUseSkillNotify((proto::CanUseSkillNotify *const)(v2 + 64));
    proto::CanUseSkillNotify::set_is_can_use_skill((proto::CanUseSkillNotify *const)(v2 + 64), 1);
    Player::sendProto(player, (const google::protobuf::Message *)(v2 + 64));
    proto::CanUseSkillNotify::~CanUseSkillNotify((proto::CanUseSkillNotify *const)(v2 + 64));
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->stage_type_ == MULTISTAGE_STAGE_MECHANICUS_FLIP_CARD && MechanicusMultistagePlay::isCardWaitSettle(this) )
  {
    *(_BYTE *)(v2 + 48) = 0;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v5 = (unsigned __int64)(this->_vptr_DescribalBase + 13);
    if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
      v5 = __asan_report_load8();
    (*(void (__fastcall **)(MechanicusMultistagePlay *const, unsigned __int64))v5)(this, v2 + 48);
  }
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 2370: range 00000000160319D2-00000000160321B2
void __cdecl MechanicusMultistagePlay::procStageOnTimer(MechanicusMultistagePlay *const this, bool *is_end)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // rbx
  __int64 v5; // rsi
  __int64 v6; // rdx
  uint64_t SceneTimeMs; // rax
  MechanicusMultistagePlay *v8; // rdx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  bool *p_is_card_confirmed; // rax
  bool v12; // dl
  uint32_t pick_card_id; // r14d
  std::tuple_element<0,std::pair<unsigned int const,MechanicusMultistagePlay::PlayerInfo> >::type *v14; // rsi
  unsigned int *v15; // rax
  uint32_t *v16; // rdx
  char v17; // cl
  std::unordered_map<unsigned int,MechanicusMultistagePlay::PlayerInfo>::iterator __for_begin; // [rsp+10h] [rbp-190h] BYREF
  std::unordered_map<unsigned int,MechanicusMultistagePlay::PlayerInfo>::iterator __for_end; // [rsp+18h] [rbp-188h] BYREF
  google::protobuf::Map<unsigned int,unsigned int> *confirmed_card_map; // [rsp+20h] [rbp-180h]
  std::unordered_map<unsigned int,MechanicusMultistagePlay::PlayerInfo> *__for_range; // [rsp+28h] [rbp-178h]
  std::pair<unsigned int const,MechanicusMultistagePlay::PlayerInfo> *__in; // [rsp+30h] [rbp-170h]
  std::tuple_element<0,std::pair<unsigned int const,MechanicusMultistagePlay::PlayerInfo> >::type *uid; // [rsp+38h] [rbp-168h]
  std::tuple_element<1,std::pair<unsigned int const,MechanicusMultistagePlay::PlayerInfo> >::type *player_info; // [rsp+40h] [rbp-160h]
  proto::InBattleMechanicusCardInfo *card_info; // [rsp+48h] [rbp-158h]
  common::milog::MiLogStream v27; // [rsp+50h] [rbp-150h] BYREF
  char v28[304]; // [rsp+70h] [rbp-130h] BYREF

  v2 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 48 136 11 notify:2383";
  *(_QWORD *)(v2 + 16) = MechanicusMultistagePlay::procStageOnTimer;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862725] = -218103808;
  v4[536862726] = -202116109;
  v4[536862727] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->stage_type_ == MULTISTAGE_STAGE_MECHANICUS_FLIP_CARD )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->card_flip_wait_start_time_ms_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( !this->card_flip_wait_start_time_ms_ )
    {
      v5 = (unsigned __int8)is_end & 7;
      v6 = (*(_BYTE *)(((unsigned __int64)is_end >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)is_end >> 3) + 0x7FFF8000));
      if ( (_BYTE)v6 )
        __asan_report_store1(is_end, v5, v6);
      *is_end = 0;
      if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      SceneTimeMs = Scene::getSceneTimeMs(this->scene_);
      if ( *(_BYTE *)(((unsigned __int64)&this->card_flip_wait_start_time_ms_ >> 3) + 0x7FFF8000) )
        SceneTimeMs = __asan_report_store8(&this->card_flip_wait_start_time_ms_, v5);
      this->card_flip_wait_start_time_ms_ = SceneTimeMs;
      v8 = this;
      if ( *(_BYTE *)(((unsigned __int64)&this->card_flip_wait_seconds_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->card_flip_wait_seconds_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      SceneMultistagePlay::rewriteStageTime(v8, this->card_flip_wait_seconds_);
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/scene_multistage_play_impl/mechanicus_multistage_play.cpp",
        "procStageOnTimer",
        2380);
      v9 = common::milog::MiLogStream::operator<<<MechanicusMultistagePlay,(MechanicusMultistagePlay*)0>(&v27, this);
      v10 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
              v9,
              (const char (*)[47])" flip card enter waiting. count donw seconds: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &this->card_flip_wait_seconds_);
      common::milog::MiLogStream::~MiLogStream(&v27);
      proto::InBattleMechanicusCardResultNotify::InBattleMechanicusCardResultNotify((proto::InBattleMechanicusCardResultNotify *const)(v2 + 48));
      if ( *(_BYTE *)(((unsigned __int64)&this->play_index_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->play_index_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::InBattleMechanicusCardResultNotify::set_play_index(
        (proto::InBattleMechanicusCardResultNotify *const)(v2 + 48),
        this->play_index_);
      if ( *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      proto::InBattleMechanicusCardResultNotify::set_group_id(
        (proto::InBattleMechanicusCardResultNotify *const)(v2 + 48),
        this->group_id_);
      if ( *(_BYTE *)(((unsigned __int64)&this->card_flip_wait_start_time_ms_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      proto::InBattleMechanicusCardResultNotify::set_wait_begin_time_us(
        (proto::InBattleMechanicusCardResultNotify *const)(v2 + 48),
        this->card_flip_wait_start_time_ms_);
      if ( *(_BYTE *)(((unsigned __int64)&this->card_flip_wait_seconds_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->card_flip_wait_seconds_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      proto::InBattleMechanicusCardResultNotify::set_wait_seconds(
        (proto::InBattleMechanicusCardResultNotify *const)(v2 + 48),
        this->card_flip_wait_seconds_);
      confirmed_card_map = proto::InBattleMechanicusCardResultNotify::mutable_player_confirmed_card_map((proto::InBattleMechanicusCardResultNotify *const)(v2 + 48));
      __for_range = &this->uid_to_player_info_map_;
      __for_begin._M_cur = std::unordered_map<unsigned int,MechanicusMultistagePlay::PlayerInfo>::begin(&this->uid_to_player_info_map_)._M_cur;
      __for_end._M_cur = std::unordered_map<unsigned int,MechanicusMultistagePlay::PlayerInfo>::end(&this->uid_to_player_info_map_)._M_cur;
      while ( std::__detail::operator!=<std::pair<unsigned int const,MechanicusMultistagePlay::PlayerInfo>,false>(
                &__for_begin,
                &__for_end) )
      {
        __in = std::__detail::_Node_iterator<std::pair<unsigned int const,MechanicusMultistagePlay::PlayerInfo>,false,false>::operator*(&__for_begin);
        uid = std::get<0ul,unsigned int const,MechanicusMultistagePlay::PlayerInfo>(__in);
        player_info = std::get<1ul,unsigned int const,MechanicusMultistagePlay::PlayerInfo>(__in);
        p_is_card_confirmed = &player_info->is_card_confirmed_;
        if ( *(_BYTE *)(((unsigned __int64)p_is_card_confirmed >> 3) + 0x7FFF8000) != 0
          && ((unsigned __int8)p_is_card_confirmed & 7) >= *(_BYTE *)(((unsigned __int64)p_is_card_confirmed >> 3)
                                                                    + 0x7FFF8000) )
        {
          __asan_report_load1(p_is_card_confirmed);
        }
        if ( !player_info->is_card_confirmed_ )
        {
          player_info->is_card_confirmed_ = 1;
          v12 = *(_BYTE *)(((unsigned __int64)&player_info->pick_card_id_ >> 3) + 0x7FFF8000) != 0
             && (char)((((_BYTE)player_info + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&player_info->pick_card_id_ >> 3)
                                                                        + 0x7FFF8000);
          if ( v12 )
            __asan_report_store4(&player_info->pick_card_id_, (((_BYTE)player_info + 12) & 7u) + 3, v12);
          player_info->pick_card_id_ = 0;
        }
        if ( *(_BYTE *)(((unsigned __int64)&player_info->pick_card_id_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)player_info + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&player_info->pick_card_id_ >> 3)
                                                                     + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        pick_card_id = player_info->pick_card_id_;
        v14 = uid;
        v15 = google::protobuf::Map<unsigned int,unsigned int>::operator[](confirmed_card_map, uid);
        v16 = v15;
        v17 = *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000);
        if ( v17 != 0 && (char)(((unsigned __int8)v15 & 7) + 3) >= v17 )
        {
          LOBYTE(v14) = v17 != 0;
          __asan_report_store4(v15, v14, (_BYTE)v15);
        }
        *v16 = pick_card_id;
        card_info = proto::InBattleMechanicusCardResultNotify::add_card_list((proto::InBattleMechanicusCardResultNotify *const)(v2 + 48));
        if ( *(_BYTE *)(((unsigned __int64)&player_info->pick_card_id_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)player_info + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&player_info->pick_card_id_ >> 3)
                                                                     + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        proto::InBattleMechanicusCardInfo::set_card_id(card_info, player_info->pick_card_id_);
        if ( *(_BYTE *)(((unsigned __int64)&player_info->curse_id_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)player_info + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&player_info->curse_id_ >> 3)
                                                                     + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        proto::InBattleMechanicusCardInfo::set_rand_effect_id(card_info, player_info->curse_id_);
        std::__detail::_Node_iterator<std::pair<unsigned int const,MechanicusMultistagePlay::PlayerInfo>,false,false>::operator++(&__for_begin);
      }
      SceneMultistagePlay::notifyPlayMsg(this, (const google::protobuf::Message *)(v2 + 48), 0);
      proto::InBattleMechanicusCardResultNotify::~InBattleMechanicusCardResultNotify((proto::InBattleMechanicusCardResultNotify *const)(v2 + 48));
    }
  }
  if ( v28 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8014) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF801C) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 2406: range 00000000160321DC-0000000016032A00
void __cdecl MechanicusMultistagePlay::onSettleDungeon(
        MechanicusMultistagePlay *const this,
        Player *player,
        DungeonScene *dungeon_scene,
        proto::DungeonSettleNotify *notify)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r14
  common::milog::MiLogStream *v7; // rax
  const TreatreMechanicusExcelConfigMgr *ConfigMgr; // rcx
  const TreatreMechanicusExcelConfigMgr *v9; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,MechanicusMultistagePlay::PlayerInfo>,false,false>::pointer v10; // rax
  PlayerEventComp *EventComp; // rbx
  char v12; // al
  char v13; // r15
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v14; // rdx
  uint32_t v15; // ebx
  uint32_t fin_challenge_num; // r8d
  const std::unordered_map<unsigned int,unsigned int> *p_gadget_build_num_map; // r9
  const std::unordered_map<unsigned int,unsigned int> *p_pick_card_num_map; // r10
  const std::unordered_map<unsigned int,unsigned int> *p_effect_target_num_map; // r11
  bool *v20; // [rsp-8h] [rbp-248h]
  unsigned int *v21; // [rsp+0h] [rbp-240h]
  unsigned int *v22; // [rsp+8h] [rbp-238h]
  uint32_t gear_kill_num; // [rsp+Ch] [rbp-234h]
  PlayerWatcherComp *WatcherComp; // [rsp+18h] [rbp-228h]
  Player *playera; // [rsp+30h] [rbp-210h]
  MechanicusMultistagePlay *thisa; // [rsp+38h] [rbp-208h]
  unsigned int *v29; // [rsp+40h] [rbp-200h]
  unsigned int *v30; // [rsp+48h] [rbp-1F8h]
  bool is_pure_gear_damage; // [rsp+4Fh] [rbp-1F1h]
  std::unordered_map<unsigned int,MechanicusMultistagePlay::PlayerInfo>::key_type __x; // [rsp+50h] [rbp-1F0h] BYREF
  uint32_t difficult_level; // [rsp+54h] [rbp-1ECh]
  uint32_t used_gear_id_num; // [rsp+58h] [rbp-1E8h]
  uint32_t end_gear_num; // [rsp+5Ch] [rbp-1E4h]
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,MechanicusMultistagePlay::PlayerInfo>,false> __y; // [rsp+60h] [rbp-1E0h] BYREF
  MechanicusMultistagePlay::PlayerInfo *player_info; // [rsp+68h] [rbp-1D8h]
  std::shared_ptr<BaseEvent> p_event_ptr; // [rsp+70h] [rbp-1D0h] BYREF
  std::function<ForeachPolicy(FoundationComp&)> p_func; // [rsp+80h] [rbp-1C0h] BYREF
  MechanicusBattleEndEvent event; // [rsp+A0h] [rbp-1A0h] BYREF
  unsigned int v41[44]; // [rsp+190h] [rbp-B0h] BYREF

  v4 = (unsigned __int64)v41;
  v21 = v41;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 32 1 12 is_succ:2419 48 1 29 is_teach_difficult_level:2422 64 8 9 iter:2425 96 16 14 event_ptr:2435";
  *(_QWORD *)(v4 + 16) = MechanicusMultistagePlay::onSettleDungeon;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753535;
  v6[536862722] = -218959360;
  v6[536862723] = -202178560;
  std::function<ForeachPolicy ()(FoundationComp &)>::function<MechanicusMultistagePlay::onSettleDungeon(Player &,DungeonScene &,proto::DungeonSettleNotify &)::{lambda(FoundationComp &)#1},void,void>(
    &p_func,
    (MechanicusMultistagePlay::onSettleDungeon::<lambda(FoundationComp&)>)player);
  MechanicusMultistagePlay::foreachFoundation(this, &p_func);
  std::function<ForeachPolicy ()(FoundationComp &)>::~function(&p_func);
  if ( DungeonScene::getDungeonResult(dungeon_scene) == DUNGEON_RESULT_CANCEL )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&p_func,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_multistage_play_impl/mechanicus_multistage_play.cpp",
      "onSettleDungeon",
      2416);
    v7 = common::milog::MiLogStream::operator<<<MechanicusMultistagePlay,(MechanicusMultistagePlay*)0>(
           (common::milog::MiLogStream *const)&p_func,
           this);
    common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(v7, (const char (*)[24])" dungeon settle cancel.");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_func);
  }
  else
  {
    *(_BYTE *)(v4 + 32) = DungeonScene::isSettledAndSuccess(dungeon_scene);
    ConfigMgr = MechanicusMultistagePlay::getConfigMgr(this);
    if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    difficult_level = TreatreMechanicusExcelConfigMgr::findDungeonDifficultLevel(ConfigMgr, this->dungeon_id_);
    v9 = MechanicusMultistagePlay::getConfigMgr(this);
    *(_BYTE *)(v4 + 48) = TreatreMechanicusExcelConfigMgr::isTeachDifficultLevel(v9, difficult_level);
    used_gear_id_num = std::set<unsigned int>::size(&this->used_gear_id_set_);
    __x = Player::getUid(player);
    *(std::unordered_map<unsigned int,MechanicusMultistagePlay::PlayerInfo>::iterator *)(v4 + 64) = std::unordered_map<unsigned int,MechanicusMultistagePlay::PlayerInfo>::find(&this->uid_to_player_info_map_, &__x);
    __y._M_cur = std::unordered_map<unsigned int,MechanicusMultistagePlay::PlayerInfo>::end(&this->uid_to_player_info_map_)._M_cur;
    if ( !std::__detail::operator==<std::pair<unsigned int const,MechanicusMultistagePlay::PlayerInfo>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,MechanicusMultistagePlay::PlayerInfo>,false> *)(v4 + 64),
            &__y) )
    {
      if ( *(_BYTE *)(v4 + 48) != 1 )
        MechanicusMultistagePlay::addWatchers(this, player);
      v10 = std::__detail::_Node_iterator<std::pair<unsigned int const,MechanicusMultistagePlay::PlayerInfo>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,MechanicusMultistagePlay::PlayerInfo>,false,false> *const)(v4 + 64));
      player_info = &v10->second;
      common::tools::perf::make_shared<MechanicusDungeonSettleEvent,unsigned int &,bool &,unsigned int &,unsigned int &,bool &,unsigned int &,unsigned int &,unsigned int &,unsigned int &,unsigned int &,unsigned int &,unsigned int &>(
        (unsigned int *)(v4 + 96),
        (bool *)&this->dungeon_id_,
        (unsigned int *)(v4 + 48),
        &this->group_id_,
        (bool *)&this->play_index_,
        (unsigned int *)(v4 + 32),
        &v10->second.settle_points_,
        &v10->second.building_points_,
        &v10->second.cost_building_points_,
        &this->kill_monsters_,
        &this->excaped_monsters_,
        &this->current_round_,
        &this->rounds_,
        v20,
        v41,
        v22,
        (bool *)&this->play_index_,
        &this->excaped_monsters_,
        (unsigned int *)notify,
        (unsigned int *)dungeon_scene,
        (unsigned int *)player,
        (unsigned int *)this,
        v29,
        v30);
      if ( std::operator!=<MechanicusDungeonSettleEvent>(
             0LL,
             (const std::shared_ptr<MechanicusDungeonSettleEvent> *)(v4 + 96)) )
      {
        EventComp = Player::getEventComp(playera);
        std::shared_ptr<BaseEvent>::shared_ptr<MechanicusDungeonSettleEvent,void>(
          &p_event_ptr,
          (const std::shared_ptr<MechanicusDungeonSettleEvent> *)(v4 + 96));
        PlayerEventComp::notifyEvent(EventComp, &p_event_ptr);
        std::shared_ptr<BaseEvent>::~shared_ptr(&p_event_ptr);
      }
      end_gear_num = MechanicusMultistagePlay::countGearNum(thisa, 0);
      if ( *(char *)(((unsigned __int64)&thisa->has_player_damage >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&thisa->has_player_damage);
      if ( thisa->has_player_damage )
        goto LABEL_20;
      if ( *(_BYTE *)(((unsigned __int64)&thisa->has_gear_damage >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)thisa + 121) & 7) >= *(_BYTE *)(((unsigned __int64)&thisa->has_gear_damage >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_load1(&thisa->has_gear_damage);
      }
      if ( thisa->has_gear_damage )
        v12 = 1;
      else
LABEL_20:
        v12 = 0;
      is_pure_gear_damage = v12;
      WatcherComp = Player::getWatcherComp(playera);
      v13 = *(_BYTE *)(v4 + 32);
      if ( *(_BYTE *)(((unsigned __int64)&thisa->gear_kill_num_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&thisa->gear_kill_num_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      gear_kill_num = thisa->gear_kill_num_;
      __x = Player::getUid(playera);
      v14 = std::unordered_map<unsigned int,unsigned int>::operator[](&thisa->uid_interact_count_map_, &__x);
      if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      v15 = *v14;
      if ( *(_BYTE *)(((unsigned __int64)&thisa->fin_challenge_num_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)thisa + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->fin_challenge_num_ >> 3)
                                                              + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      fin_challenge_num = thisa->fin_challenge_num_;
      p_gadget_build_num_map = &thisa->gadget_build_num_map_;
      p_pick_card_num_map = &thisa->pick_card_num_map_;
      p_effect_target_num_map = &thisa->effect_target_num_map_;
      if ( *(_BYTE *)(((unsigned __int64)&thisa->max_gear_num_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)thisa - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->max_gear_num_ >> 3)
                                                              + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      MechanicusBattleEndEvent::MechanicusBattleEndEvent(
        &event,
        v13,
        end_gear_num,
        is_pure_gear_damage,
        gear_kill_num,
        v15,
        fin_challenge_num,
        p_gadget_build_num_map,
        p_pick_card_num_map,
        p_effect_target_num_map,
        difficult_level,
        thisa->max_gear_num_,
        used_gear_id_num);
      PlayerWatcherComp::triggerMechanicusBattleEnd(WatcherComp, &event);
      MechanicusBattleEndEvent::~MechanicusBattleEndEvent(&event);
      MechanicusMultistagePlay::playerSettle(thisa, playera, *(_BYTE *)(v4 + 32), *(_BYTE *)(v4 + 48));
      if ( *(_BYTE *)(v4 + 48) != 1 )
        MechanicusMultistagePlay::delWatchers(thisa, playera);
      std::shared_ptr<MechanicusDungeonSettleEvent>::~shared_ptr((std::shared_ptr<MechanicusDungeonSettleEvent> *const)(v4 + 96));
    }
  }
  if ( v21 == (unsigned int *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 2408: range 00000000160321B4-00000000160321DB
ForeachPolicy __cdecl MechanicusMultistagePlay::onSettleDungeon(Player &,DungeonScene &,proto::DungeonSettleNotify &)::{lambda(FoundationComp &)#1}::operator()(
        const MechanicusMultistagePlay::onSettleDungeon::<lambda(FoundationComp&)> *const __closure,
        FoundationComp *foundation_comp)
{
  FoundationComp::setIsPlayEnd(foundation_comp, 1);
  return 0;
};

// Line 2455: range 0000000016044F26-0000000016044F3A
void __cdecl GLOBAL__sub_I_merge_single_dungeon_scene_cpp()
{
  __static_initialization_and_destruction_0(1, 0xFFFF);
};

// Line 2455: range 000000001604491A-0000000016044F25
void __cdecl __static_initialization_and_destruction_0(int __initialize_p, int __priority)
{
  const std::_V2::error_category *v2; // rax
  const std::_V2::error_category *v3; // rax
  const std::_V2::error_category *v4; // rax
  const std::_V2::error_category *v5; // rax
  const std::_V2::error_category *v6; // rax
  __int64 v7; // rsi
  const boost::system::error_category *system_category; // rax
  const boost::system::error_category *netdb_category; // rax
  const boost::system::error_category *addrinfo_category; // rax
  const boost::system::error_category *misc_category; // rax
  _BYTE *v12; // rcx
  _BYTE *v13; // rcx
  char v14; // dl
  __int64 v15; // rdx
  _BYTE *v16; // rcx
  _BYTE *v17; // rcx
  char v18; // dl
  __int64 v19; // rdx
  _BYTE *v20; // rcx
  _BYTE *v21; // rcx
  char v22; // dl
  __int64 v23; // rdx
  const char *v24; // rcx
  _BYTE *v25; // rcx
  _BYTE *v26; // rcx
  char v27; // dl
  __int64 v28; // rdx
  _BYTE *v29; // rcx
  _BYTE *v30; // rcx
  char v31; // dl
  __int64 v32; // rdx
  _BYTE *v33; // rcx
  _BYTE *v34; // rcx
  char v35; // dl
  __int64 v36; // rdx
  const char *v37; // rcx

  if ( __initialize_p == 1 )
  {
    __asan_before_dynamic_init("src_merge/merge_single_dungeon_scene.cpp");
    if ( __priority == 0xFFFF )
    {
      std::ios_base::Init::Init(&std::__ioinit);
      __cxa_atexit((void (__fastcall *)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
      v2 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)&std::ios_base::Init::~Init);
      std::error_code::error_code((std::error_code *const)&opentracing::v3::invalid_span_context_error, 1, v2);
      v3 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)&opentracing::v3::invalid_span_context_error);
      std::error_code::error_code((std::error_code *const)&opentracing::v3::invalid_carrier_error, 2, v3);
      v4 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)&opentracing::v3::invalid_carrier_error);
      std::error_code::error_code((std::error_code *const)&opentracing::v3::span_context_corrupted_error, 3, v4);
      v5 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)&opentracing::v3::span_context_corrupted_error);
      std::error_code::error_code((std::error_code *const)&opentracing::v3::key_not_found_error, 4, v5);
      v6 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)&opentracing::v3::key_not_found_error);
      v7 = 5LL;
      std::error_code::error_code((std::error_code *const)&opentracing::v3::lookup_key_not_supported_error, 5, v6);
      boost::none_t::none_t((boost::none_t *const)&boost::none, (boost::none_t::init_tag)5);
      boost::optional_ns::in_place_init_t::in_place_init_t(
        (boost::optional_ns::in_place_init_t *const)&boost::optional_ns::in_place_init,
        (boost::optional_ns::in_place_init_t::init_tag)5);
      boost::optional_ns::in_place_init_if_t::in_place_init_if_t(
        (boost::optional_ns::in_place_init_if_t *const)&boost::optional_ns::in_place_init_if,
        (boost::optional_ns::in_place_init_if_t::init_tag)5);
      system_category = boost::asio::error::get_system_category();
      if ( *(_BYTE *)(((unsigned __int64)&boost::asio::error::system_category >> 3) + 0x7FFF8000) )
        system_category = (const boost::system::error_category *)__asan_report_store8(
                                                                   &boost::asio::error::system_category,
                                                                   5LL);
      boost::asio::error::system_category = system_category;
      netdb_category = boost::asio::error::get_netdb_category();
      if ( *(_BYTE *)(((unsigned __int64)&boost::asio::error::netdb_category >> 3) + 0x7FFF8000) )
        netdb_category = (const boost::system::error_category *)__asan_report_store8(
                                                                  &boost::asio::error::netdb_category,
                                                                  5LL);
      boost::asio::error::netdb_category = netdb_category;
      addrinfo_category = boost::asio::error::get_addrinfo_category();
      if ( *(_BYTE *)(((unsigned __int64)&boost::asio::error::addrinfo_category >> 3) + 0x7FFF8000) )
        addrinfo_category = (const boost::system::error_category *)__asan_report_store8(
                                                                     &boost::asio::error::addrinfo_category,
                                                                     5LL);
      boost::asio::error::addrinfo_category = addrinfo_category;
      misc_category = boost::asio::error::get_misc_category();
      if ( *(_BYTE *)(((unsigned __int64)&boost::asio::error::misc_category >> 3) + 0x7FFF8000) )
        misc_category = (const boost::system::error_category *)__asan_report_store8(
                                                                 &boost::asio::error::misc_category,
                                                                 5LL);
      boost::asio::error::misc_category = misc_category;
      v12 = &`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_);
      }
      if ( !*v12 )
      {
        v13 = &`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_;
        v14 = *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ >> 3)
                       + 0x7FFF8000);
        LOBYTE(v7) = v14 != 0;
        v15 = (v14 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ & 7) >= v14);
        if ( (_BYTE)v15 )
          __asan_report_store1(
            &`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_,
            v7,
            v15);
        *v13 = 1;
        boost::asio::detail::tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context>::tss_ptr(&boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_);
        v7 = (__int64)&boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context>::~tss_ptr,
          &boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_,
          &_dso_handle);
      }
      v16 = &`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_);
      }
      if ( !*v16 )
      {
        v17 = &`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_;
        v18 = *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ >> 3)
                       + 0x7FFF8000);
        LOBYTE(v7) = v18 != 0;
        v19 = (v18 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ & 7) >= v18);
        if ( (_BYTE)v19 )
          __asan_report_store1(
            &`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_,
            v7,
            v19);
        *v17 = 1;
        v7 = (__int64)&boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::posix_global_impl<boost::asio::system_context>::~posix_global_impl,
          &boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_,
          &_dso_handle);
      }
      v20 = &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero);
      }
      if ( !*v20 )
      {
        v21 = &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero;
        v22 = *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                       + 0x7FFF8000);
        LOBYTE(v7) = v22 != 0;
        v23 = (v22 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero & 7) >= v22);
        if ( (_BYTE)v23 )
          __asan_report_store1(
            &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero,
            v7,
            v23);
        *v21 = 1;
        v24 = common::tools::StringStream<common::tools::FixedBuffer<16384>>::digits + 9;
        if ( *(_BYTE *)(((unsigned __int64)&common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                      + 0x7FFF8000) )
          __asan_report_store8(&common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero, v7);
        common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero = v24;
      }
      v25 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id);
      }
      if ( !*v25 )
      {
        v26 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id;
        v27 = *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id >> 3)
                       + 0x7FFF8000);
        LOBYTE(v7) = v27 != 0;
        v28 = (v27 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id & 7) >= v27);
        if ( (_BYTE)v28 )
          __asan_report_store1(
            &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id,
            v7,
            v28);
        *v26 = 1;
        boost::asio::detail::service_id<boost::asio::detail::scheduler>::service_id(&boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id);
        v7 = (__int64)&boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::service_id<boost::asio::detail::scheduler>::~service_id,
          &boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id,
          &_dso_handle);
      }
      v29 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id);
      }
      if ( !*v29 )
      {
        v30 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id;
        v31 = *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id >> 3)
                       + 0x7FFF8000);
        LOBYTE(v7) = v31 != 0;
        v32 = (v31 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id & 7) >= v31);
        if ( (_BYTE)v32 )
          __asan_report_store1(
            &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id,
            v7,
            v32);
        *v30 = 1;
        boost::asio::detail::service_id<boost::asio::detail::epoll_reactor>::service_id(&boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id);
        v7 = (__int64)&boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::service_id<boost::asio::detail::epoll_reactor>::~service_id,
          &boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id,
          &_dso_handle);
      }
      v33 = &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero);
      }
      if ( !*v33 )
      {
        v34 = &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero;
        v35 = *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero >> 3)
                       + 0x7FFF8000);
        LOBYTE(v7) = v35 != 0;
        v36 = (v35 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero & 7) >= v35);
        if ( (_BYTE)v36 )
          __asan_report_store1(
            &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero,
            v7,
            v36);
        *v34 = 1;
        v37 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::digits + 9;
        if ( *(_BYTE *)(((unsigned __int64)&common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero >> 3)
                      + 0x7FFF8000) )
          __asan_report_store8(&common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero, v7);
        common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero = v37;
      }
    }
    __asan_after_dynamic_init();
  }
};
