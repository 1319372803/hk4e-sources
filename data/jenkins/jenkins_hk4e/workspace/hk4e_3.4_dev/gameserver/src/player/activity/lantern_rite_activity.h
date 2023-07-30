// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/lantern_rite_activity.h

// Line 49: range 0000000016170D62-0000000016170D8C
void __cdecl BaseSalvageChallenge::~BaseSalvageChallenge(BaseSalvageChallenge *const this)
{
  BaseSalvageChallenge::~BaseSalvageChallenge(this);
  operator delete(this, 0x10uLL);
};

// Line 49: range 0000000016170D20-0000000016170D61
void __cdecl BaseSalvageChallenge::~BaseSalvageChallenge(BaseSalvageChallenge *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'BaseSalvageChallenge + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseSalvageChallenge = v1;
};

// Line 57: range 0000000016054F32-0000000016055047
void __cdecl LanternRiteProjectionLevelData::LanternRiteProjectionLevelData(LanternRiteProjectionLevelData *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_finish >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_finish >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_finish);
  }
  this->is_finish = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->min_finish_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->min_finish_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->min_finish_time);
  }
  this->min_finish_time = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_view_tips >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_view_tips >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_view_tips);
  }
  this->is_view_tips = 0;
};

// Line 66: range 0000000016189160-000000001618918A
void __cdecl SalvageBundleChallenge::~SalvageBundleChallenge(SalvageBundleChallenge *const this)
{
  SalvageBundleChallenge::~SalvageBundleChallenge(this);
  operator delete(this, 0x40uLL);
};

// Line 66: range 0000000016189102-000000001618915F
void __cdecl SalvageBundleChallenge::~SalvageBundleChallenge(SalvageBundleChallenge *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'SalvageBundleChallenge + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseSalvageChallenge = v1;
  std::set<unsigned int>::~set(&this->finish_bundle_set);
  BaseSalvageChallenge::~BaseSalvageChallenge(this);
};

// Line 68: range 0000000016170D8E-0000000016170EEA
void __fastcall ZN22SalvageBundleChallengeCI220BaseSalvageChallengeEN4data15SalvagePlayTypeEb(
        SalvageBundleChallenge *const this,
        data::SalvagePlayType a2,
        char a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  int (**v6)(...); // rdx
  char v8[128]; // [rsp+10h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 1 9 <unknown> 64 4 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ZN22SalvageBundleChallengeCI220BaseSalvageChallengeEN4data15SalvagePlayTypeEb;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -202116348;
  *(_DWORD *)(v3 + 64) = a2;
  *(_BYTE *)(v3 + 48) = a3;
  BaseSalvageChallenge::BaseSalvageChallenge(this, *(data::SalvagePlayType *)(v3 + 64), *(_BYTE *)(v3 + 48));
  v6 = (int (**)(...))(&`vtable for'SalvageBundleChallenge + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseSalvageChallenge = v6;
  std::set<unsigned int>::set(&this->finish_bundle_set);
  if ( v8 == (char *)v3 )
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
};

// Line 76: range 00000000161890D6-0000000016189100
void __cdecl SalvageScoreChallenge::~SalvageScoreChallenge(SalvageScoreChallenge *const this)
{
  SalvageScoreChallenge::~SalvageScoreChallenge(this);
  operator delete(this, 0x18uLL);
};

// Line 76: range 0000000016189088-00000000161890D5
void __cdecl SalvageScoreChallenge::~SalvageScoreChallenge(SalvageScoreChallenge *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'SalvageScoreChallenge + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseSalvageChallenge = v1;
  BaseSalvageChallenge::~BaseSalvageChallenge(this);
};

// Line 78: range 0000000016171216-00000000161713EF
void __fastcall ZN21SalvageScoreChallengeCI220BaseSalvageChallengeEN4data15SalvagePlayTypeEb(
        SalvageScoreChallenge *const this,
        data::SalvagePlayType a2,
        char a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  int (**v6)(...); // rdx
  char v8[128]; // [rsp+10h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 1 9 <unknown> 64 4 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ZN21SalvageScoreChallengeCI220BaseSalvageChallengeEN4data15SalvagePlayTypeEb;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -202116348;
  *(_DWORD *)(v3 + 64) = a2;
  *(_BYTE *)(v3 + 48) = a3;
  BaseSalvageChallenge::BaseSalvageChallenge(this, *(data::SalvagePlayType *)(v3 + 64), *(_BYTE *)(v3 + 48));
  v6 = (int (**)(...))(&`vtable for'SalvageScoreChallenge + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseSalvageChallenge = v6;
  if ( *(_BYTE *)(((unsigned __int64)&this->challenge_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->challenge_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->challenge_id);
  }
  this->challenge_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_score >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_score >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->max_score);
  }
  this->max_score = 0;
  if ( v8 == (char *)v3 )
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
};

// Line 87: range 000000001618905C-0000000016189086
void __cdecl SalvageBossChallenge::~SalvageBossChallenge(SalvageBossChallenge *const this)
{
  SalvageBossChallenge::~SalvageBossChallenge(this);
  operator delete(this, 0x18uLL);
};

// Line 87: range 000000001618900E-000000001618905B
void __cdecl SalvageBossChallenge::~SalvageBossChallenge(SalvageBossChallenge *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'SalvageBossChallenge + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseSalvageChallenge = v1;
  BaseSalvageChallenge::~BaseSalvageChallenge(this);
};

// Line 89: range 000000001617171A-00000000161718A7
void __fastcall ZN20SalvageBossChallengeCI220BaseSalvageChallengeEN4data15SalvagePlayTypeEb(
        SalvageBossChallenge *const this,
        data::SalvagePlayType a2,
        char a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  int (**v6)(...); // rdx
  char v8[128]; // [rsp+10h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 1 9 <unknown> 64 4 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ZN20SalvageBossChallengeCI220BaseSalvageChallengeEN4data15SalvagePlayTypeEb;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -202116348;
  *(_DWORD *)(v3 + 64) = a2;
  *(_BYTE *)(v3 + 48) = a3;
  BaseSalvageChallenge::BaseSalvageChallenge(this, *(data::SalvagePlayType *)(v3 + 64), *(_BYTE *)(v3 + 48));
  v6 = (int (**)(...))(&`vtable for'SalvageBossChallenge + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseSalvageChallenge = v6;
  if ( *(_BYTE *)(((unsigned __int64)&this->challenge_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->challenge_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->challenge_id);
  }
  this->challenge_id = 0;
  if ( v8 == (char *)v3 )
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
};

// Line 98: range 000000001605515C-0000000016055233
void __cdecl LanternSalvageStage::LanternSalvageStage(LanternSalvageStage *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->stage_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_open);
  }
  this->is_open = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_finished >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 5) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_finished >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_finished);
  }
  this->is_finished = 0;
  std::map<data::SalvagePlayType,std::vector<std::shared_ptr<BaseSalvageChallenge>>>::map(&this->stage_challenge_map);
};

// Line 98: range 000000001614142C-00000000161415C4
void __cdecl LanternSalvageStage::LanternSalvageStage(LanternSalvageStage *const this, LanternSalvageStage *a2)
{
  uint32_t stage_id; // ecx
  bool is_open; // cl
  bool is_finished; // cl

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  stage_id = a2->stage_id;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->stage_id = stage_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->is_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&a2->is_open);
  }
  is_open = a2->is_open;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_open);
  }
  this->is_open = is_open;
  if ( *(_BYTE *)(((unsigned __int64)&a2->is_finished >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 5) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->is_finished >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&a2->is_finished);
  }
  is_finished = a2->is_finished;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_finished >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 5) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_finished >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_finished);
  }
  this->is_finished = is_finished;
  std::map<data::SalvagePlayType,std::vector<std::shared_ptr<BaseSalvageChallenge>>>::map(
    &this->stage_challenge_map,
    &a2->stage_challenge_map);
};

// Line 98: range 0000000016055234-0000000016055252
void __cdecl LanternSalvageStage::~LanternSalvageStage(LanternSalvageStage *const this)
{
  std::map<data::SalvagePlayType,std::vector<std::shared_ptr<BaseSalvageChallenge>>>::~map(&this->stage_challenge_map);
};

// Line 126: range 0000000016D65BF4-0000000016D65D73
void __cdecl LanternRiteFireworksReformData::LanternRiteFireworksReformData(LanternRiteFireworksReformData *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->stage_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->challenge_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->challenge_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->challenge_id);
  }
  this->challenge_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->fire_element_value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->fire_element_value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->fire_element_value);
  }
  this->fire_element_value = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->stamina_value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->stamina_value >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->stamina_value);
  }
  this->stamina_value = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->gm_challenge_score >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gm_challenge_score >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gm_challenge_score);
  }
  this->gm_challenge_score = 0;
  std::map<unsigned int,LanternRiteFireworksReformFactorData>::map(&this->factor_map);
  std::set<unsigned int>::set(&this->unlock_skill_set);
  std::vector<LanternRiteFireworksReformResultData>::vector(&this->result_vec);
};

// Line 126: range 0000000016054B7E-0000000016054BBC
void __cdecl LanternRiteFireworksReformData::~LanternRiteFireworksReformData(
        LanternRiteFireworksReformData *const this)
{
  std::vector<LanternRiteFireworksReformResultData>::~vector(&this->result_vec);
  std::set<unsigned int>::~set(&this->unlock_skill_set);
  std::map<unsigned int,LanternRiteFireworksReformFactorData>::~map(&this->factor_map);
};

// Line 143: range 00000000149EE4DE-00000000149EE52A
uint32_t __cdecl LanternRiteActivity::getLuaUseVal(LanternRiteActivity *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->lua_use_val_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->lua_use_val_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  return this->lua_use_val_;
};

// Line 150: range 0000000016055620-00000000160556B7
void __cdecl LanternRiteFireworksStageData::LanternRiteFireworksStageData(LanternRiteFireworksStageData *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->stage_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_open);
  }
  this->is_open = 0;
  std::map<unsigned int,LanternRiteFireworksChallengeData>::map(&this->challenge_map);
};

// Line 150: range 0000000016143188-00000000161432A0
void __cdecl LanternRiteFireworksStageData::LanternRiteFireworksStageData(
        LanternRiteFireworksStageData *const this,
        LanternRiteFireworksStageData *a2)
{
  uint32_t stage_id; // ecx
  bool is_open; // cl

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  stage_id = a2->stage_id;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->stage_id = stage_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->is_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&a2->is_open);
  }
  is_open = a2->is_open;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_open);
  }
  this->is_open = is_open;
  std::map<unsigned int,LanternRiteFireworksChallengeData>::map(&this->challenge_map, &a2->challenge_map);
};

// Line 150: range 00000000160556B8-00000000160556D6
void __cdecl LanternRiteFireworksStageData::~LanternRiteFireworksStageData(LanternRiteFireworksStageData *const this)
{
  std::map<unsigned int,LanternRiteFireworksChallengeData>::~map(&this->challenge_map);
};

// Line 163: range 000000001618918C-00000000161892D5
void __cdecl LanternRiteActivity::~LanternRiteActivity(LanternRiteActivity *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'LanternRiteActivity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v1;
  std::weak_ptr<DungeonScene>::~weak_ptr(&this->cur_boss_dungeon_wtr_);
  std::map<data::SalvagePlayType,std::set<unsigned int>>::~map(&this->salvage_registered_bundle_map_);
  std::map<data::SalvagePlayType,unsigned int>::~map(&this->salvage_current_tracking_bundle_map_);
  std::map<unsigned int,LanternRiteFireworksStageData>::~map(&this->fireworks_stage_map_);
  std::map<std::type_index,std::weak_ptr<Observer>>::~map(&this->event_observer_map_);
  std::unordered_set<unsigned int>::~unordered_set(&this->projection_view_switch_tips_set_);
  std::unordered_set<unsigned int>::~unordered_set(&this->projection_view_input_tips_set_);
  std::unordered_map<unsigned int,LanternRiteProjectionLevelData>::~unordered_map(&this->projection_level_map_);
  std::unordered_set<unsigned int>::~unordered_set(&this->projection_open_stage_set_);
  std::map<unsigned int,LanternSalvageStage>::~map(&this->salvage_stage_map_);
  std::unordered_map<proto::VirtualItem,unsigned int>::~unordered_map(&this->activity_coin_map_);
  PlayerUnixTimer::~PlayerUnixTimer(&this->vehicle_timer_);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->uid_last_reminder_time_map_);
  LanternRiteFireworksReformData::~LanternRiteFireworksReformData(&this->fireworks_reform_Data_);
  BaseActivity::~BaseActivity(this);
};

// Line 163: range 00000000161892D6-0000000016189300
void __cdecl LanternRiteActivity::~LanternRiteActivity(LanternRiteActivity *const this)
{
  LanternRiteActivity::~LanternRiteActivity(this);
  operator delete(this, 0x6F8uLL);
};

// Line 168: range 0000000016D66108-0000000016D66446
void __cdecl LanternRiteActivity::LanternRiteActivity(
        LanternRiteActivity *const this,
        Player *player,
        uint32_t activity_id)
{
  int (**v3)(...); // rdx
  PlayerPtr p_player_ptr; // [rsp+20h] [rbp-40h] BYREF
  std::function<void(long unsigned int)> p_callback; // [rsp+30h] [rbp-30h] BYREF

  BaseActivity::BaseActivity(this, player, activity_id);
  v3 = (int (**)(...))(&`vtable for'LanternRiteActivity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v3;
  LanternRiteFireworksReformData::LanternRiteFireworksReformData(&this->fireworks_reform_Data_);
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->uid_last_reminder_time_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  toPtr<Player,Player>((Player *)&p_player_ptr);
  ZNSt8functionIFvmEEC2IN19LanternRiteActivity14vehicle_timer_MUlmE_EvvEET_(
    &p_callback,
    (LanternRiteActivity::<lambda(uint64_t)>)this);
  PlayerUnixTimer::PlayerUnixTimer(&this->vehicle_timer_, &p_player_ptr, &p_callback);
  std::function<void ()(unsigned long)>::~function(&p_callback);
  std::shared_ptr<Player>::~shared_ptr(&p_player_ptr);
  if ( *(_BYTE *)(((unsigned __int64)&this->lua_use_val_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->lua_use_val_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->lua_use_val_);
  }
  this->lua_use_val_ = 0;
  std::unordered_map<proto::VirtualItem,unsigned int>::unordered_map(&this->activity_coin_map_);
  std::map<unsigned int,LanternSalvageStage>::map(&this->salvage_stage_map_);
  std::unordered_set<unsigned int>::unordered_set(&this->projection_open_stage_set_);
  std::unordered_map<unsigned int,LanternRiteProjectionLevelData>::unordered_map(&this->projection_level_map_);
  std::unordered_set<unsigned int>::unordered_set(&this->projection_view_input_tips_set_);
  std::unordered_set<unsigned int>::unordered_set(&this->projection_view_switch_tips_set_);
  std::map<std::type_index,std::weak_ptr<Observer>>::map(&this->event_observer_map_);
  if ( *(char *)(((unsigned __int64)&this->is_mini_eldritch_dungeon_open_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_mini_eldritch_dungeon_open_);
  this->is_mini_eldritch_dungeon_open_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_taken_skin_reward_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 73) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_taken_skin_reward_ >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_taken_skin_reward_);
  }
  this->is_taken_skin_reward_ = 0;
  std::map<unsigned int,LanternRiteFireworksStageData>::map(&this->fireworks_stage_map_);
  std::map<data::SalvagePlayType,unsigned int>::map(&this->salvage_current_tracking_bundle_map_);
  std::map<data::SalvagePlayType,std::set<unsigned int>>::map(&this->salvage_registered_bundle_map_);
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_content_closed_);
  this->is_content_closed_ = 0;
  std::weak_ptr<DungeonScene>::weak_ptr(&this->cur_boss_dungeon_wtr_);
};

// Line 170: range 000000001384A645-000000001384A64F
data::NewActivityType __cdecl LanternRiteActivity::getActivityStaticType()
{
  return 2402;
};

// Line 171: range 0000000016054CF2-0000000016054D00
proto::ActionReasonType __cdecl LanternRiteActivity::getActivityBundleReason(LanternRiteActivity *const this)
{
  return 1131;
};

// Line 181: range 0000000016054A60-0000000016054B29
void __cdecl BaseSalvageChallenge::BaseSalvageChallenge(
        BaseSalvageChallenge *const this,
        data::SalvagePlayType type,
        bool is_unlock)
{
  int (**v3)(...); // rdx

  v3 = (int (**)(...))(&`vtable for'BaseSalvageChallenge + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseSalvageChallenge = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->challenge_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->challenge_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->challenge_type);
  }
  this->challenge_type = type;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_unlock >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_unlock >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_unlock);
  }
  this->is_unlock = is_unlock;
};

// Line 281: range 00000000149EE52C-00000000149EE57E
void __cdecl LanternRiteActivity::setLuaUseVal(LanternRiteActivity *const this, uint32_t lua_use_val)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->lua_use_val_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->lua_use_val_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->lua_use_val_);
  }
  this->lua_use_val_ = lua_use_val;
};

// Line 291: range 0000000016D65B3A-0000000016D65B82
void __cdecl ZNK19LanternRiteActivity14vehicle_timer_MUlmE_clEm(
        const LanternRiteActivity::<lambda(uint64_t)> *const __closure,
        uint64_t now_ms)
{
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  LanternRiteActivity::onVehicleTimer(__closure->__this, now_ms);
};
