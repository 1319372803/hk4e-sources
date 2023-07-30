// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/fleur_fair_activity.h

// Line 26: range 000000001518AEAE-000000001518AF7F
void __cdecl FleurFairMinigame::FleurFairMinigame(FleurFairMinigame *const this, uint32_t minigame_id)
{
  int (**v2)(...); // rdx

  std::enable_shared_from_this<FleurFairMinigame>::enable_shared_from_this(&this->std::enable_shared_from_this<FleurFairMinigame>);
  v2 = (int (**)(...))(&`vtable for'FleurFairMinigame + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_FleurFairMinigame = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->minigame_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->minigame_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->minigame_id);
  }
  this->minigame_id = minigame_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 28) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_open);
  }
  this->is_open = 0;
};

// Line 27: range 0000000015465CA4-0000000015465CF5
void __cdecl FleurFairMinigame::~FleurFairMinigame(FleurFairMinigame *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'FleurFairMinigame + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_FleurFairMinigame = v1;
  std::enable_shared_from_this<FleurFairMinigame>::~enable_shared_from_this(&this->std::enable_shared_from_this<FleurFairMinigame>);
};

// Line 27: range 0000000015465CF6-0000000015465D20
void __cdecl FleurFairMinigame::~FleurFairMinigame(FleurFairMinigame *const this)
{
  FleurFairMinigame::~FleurFairMinigame(this);
  operator delete(this, 0x20uLL);
};

// Line 33: range 000000001518AF80-000000001518AF92
int32_t __cdecl FleurFairMinigame::fromDetailBin(
        FleurFairMinigame *const this,
        const proto::FleurFairMinigameBin *minigame_bin)
{
  return 0;
};

// Line 34: range 000000001518AF94-000000001518AFA6
int32_t __cdecl FleurFairMinigame::toDetailBin(
        FleurFairMinigame *const this,
        proto::FleurFairMinigameBin *minigame_bin)
{
  return 0;
};

// Line 35: range 000000001518AFA8-000000001518AFBA
int32_t __cdecl FleurFairMinigame::toDetailClient(
        FleurFairMinigame *const this,
        proto::FleurFairMinigameInfo *minigame_info)
{
  return 0;
};

// Line 42: range 000000001518AFBC-000000001518B003
uint32_t __cdecl FleurFairMinigame::getMinigameId(const FleurFairMinigame *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->minigame_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->minigame_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  return this->minigame_id;
};

// Line 43: range 000000001518B004-000000001518B051
bool __cdecl FleurFairMinigame::getIsOpen(const FleurFairMinigame *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 28) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_open);
  }
  return this->is_open;
};

// Line 43: range 000000001518B052-000000001518B0A8
void __cdecl FleurFairMinigame::setIsOpen(FleurFairMinigame *const this, bool is_open_out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 28) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_open);
  }
  this->is_open = is_open_out;
};

// Line 47: range 00000000154CC968-00000000154CC992
void __cdecl FleurFairBalloon::~FleurFairBalloon(FleurFairBalloon *const this)
{
  FleurFairBalloon::~FleurFairBalloon(this);
  operator delete(this, 0x28uLL);
};

// Line 47: range 00000000154CC91A-00000000154CC967
void __cdecl FleurFairBalloon::~FleurFairBalloon(FleurFairBalloon *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'FleurFairBalloon + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_FleurFairMinigame = v1;
  FleurFairMinigame::~FleurFairMinigame(this);
};

// Line 50: range 0000000015465D22-0000000015465E5D
void __fastcall ZN16FleurFairBalloonCI217FleurFairMinigameEj(FleurFairBalloon *const this, int a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int (**v5)(...); // rdx
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ZN16FleurFairBalloonCI217FleurFairMinigameEj;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = a2;
  FleurFairMinigame::FleurFairMinigame(this, *(_DWORD *)(v2 + 32));
  v5 = (int (**)(...))(&`vtable for'FleurFairBalloon + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_FleurFairMinigame = v5;
  if ( *(_BYTE *)(((unsigned __int64)&this->best_score >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->best_score >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->best_score);
  }
  this->best_score = 0;
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 57: range 000000001518B0AA-000000001518B0F1
uint32_t __cdecl FleurFairBalloon::getBestScore(const FleurFairBalloon *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->best_score >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->best_score >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  return this->best_score;
};

// Line 57: range 000000001518B0F2-000000001518B140
void __cdecl FleurFairBalloon::setBestScore(FleurFairBalloon *const this, uint32_t best_score_out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->best_score >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->best_score >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->best_score);
  }
  this->best_score = best_score_out;
};

// Line 61: range 00000000154CC8EE-00000000154CC918
void __cdecl FleurFairFall::~FleurFairFall(FleurFairFall *const this)
{
  FleurFairFall::~FleurFairFall(this);
  operator delete(this, 0x28uLL);
};

// Line 61: range 00000000154CC8A0-00000000154CC8ED
void __cdecl FleurFairFall::~FleurFairFall(FleurFairFall *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'FleurFairFall + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_FleurFairMinigame = v1;
  FleurFairMinigame::~FleurFairMinigame(this);
};

// Line 64: range 00000000154660DE-0000000015466219
void __fastcall ZN13FleurFairFallCI217FleurFairMinigameEj(FleurFairFall *const this, int a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int (**v5)(...); // rdx
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ZN13FleurFairFallCI217FleurFairMinigameEj;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = a2;
  FleurFairMinigame::FleurFairMinigame(this, *(_DWORD *)(v2 + 32));
  v5 = (int (**)(...))(&`vtable for'FleurFairFall + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_FleurFairMinigame = v5;
  if ( *(_BYTE *)(((unsigned __int64)&this->best_score >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->best_score >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->best_score);
  }
  this->best_score = 0;
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 71: range 000000001518B142-000000001518B189
uint32_t __cdecl FleurFairFall::getBestScore(const FleurFairFall *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->best_score >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->best_score >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  return this->best_score;
};

// Line 71: range 000000001518B18A-000000001518B1D8
void __cdecl FleurFairFall::setBestScore(FleurFairFall *const this, uint32_t best_score_out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->best_score >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->best_score >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->best_score);
  }
  this->best_score = best_score_out;
};

// Line 75: range 000000001518B504-000000001518B5D9
void __cdecl FleurFairMusicRecord::FleurFairMusicRecord(FleurFairMusicRecord *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->max_score = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_combo >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_combo >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->max_combo);
  }
  this->max_combo = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_unlock >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 8) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_unlock >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_unlock);
  }
  this->is_unlock = 0;
};

// Line 82: range 00000000154CC816-00000000154CC873
void __cdecl FleurFairMusic::~FleurFairMusic(FleurFairMusic *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'FleurFairMusic + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_FleurFairMinigame = v1;
  std::map<unsigned int,FleurFairMusicRecord>::~map(&this->music_game_record_map_);
  FleurFairMinigame::~FleurFairMinigame(this);
};

// Line 82: range 00000000154CC874-00000000154CC89E
void __cdecl FleurFairMusic::~FleurFairMusic(FleurFairMusic *const this)
{
  FleurFairMusic::~FleurFairMusic(this);
  operator delete(this, 0x50uLL);
};

// Line 85: range 000000001546650A-0000000015466617
void __fastcall ZN14FleurFairMusicCI217FleurFairMinigameEj(FleurFairMusic *const this, int a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int (**v5)(...); // rdx
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ZN14FleurFairMusicCI217FleurFairMinigameEj;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = a2;
  FleurFairMinigame::FleurFairMinigame(this, *(_DWORD *)(v2 + 32));
  v5 = (int (**)(...))(&`vtable for'FleurFairMusic + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_FleurFairMinigame = v5;
  std::map<unsigned int,FleurFairMusicRecord>::map(&this->music_game_record_map_);
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 106: range 00000000154CC730-00000000154CC7E9
void __cdecl FleurFairActivity::~FleurFairActivity(FleurFairActivity *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'FleurFairActivity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v1;
  std::weak_ptr<Observer>::~weak_ptr(&this->fall_settle_obs_wtr_);
  std::weak_ptr<Observer>::~weak_ptr(&this->balloon_settle_obs_wtr_);
  std::map<unsigned int,FleurFairDungeonSection>::~map(&this->dungeon_section_map_);
  std::map<unsigned int,std::shared_ptr<FleurFairMinigame>>::~map(&this->minigame_map_);
  std::unordered_map<std::string,int>::~unordered_map(&this->gm_dungeon_gallery_temp_value_map);
  std::vector<unsigned int>::~vector(&this->gm_dungeon_gallery_id_vec);
  BaseActivity::~BaseActivity((BaseActivity *const)this);
};

// Line 106: range 00000000154CC7EA-00000000154CC814
void __cdecl FleurFairActivity::~FleurFairActivity(FleurFairActivity *const this)
{
  FleurFairActivity::~FleurFairActivity(this);
  operator delete(this, 0x490uLL);
};

// Line 109: range 000000001701E1EA-000000001701E500
void __fastcall ZN17FleurFairActivityCI212BaseActivityER6Playerj(FleurFairActivity *const this, Player *a2, int a3)
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
  *(_QWORD *)(v3 + 16) = ZN17FleurFairActivityCI212BaseActivityER6Playerj;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = a3;
  BaseActivity::BaseActivity((BaseActivity *const)this, a2, *(_DWORD *)(v3 + 32));
  v6 = (int (**)(...))(&`vtable for'FleurFairActivity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v6;
  if ( *(_BYTE *)(((unsigned __int64)&this->gm_dungeon_section_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gm_dungeon_section_id >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->gm_dungeon_section_id);
  }
  this->gm_dungeon_section_id = 0;
  std::vector<unsigned int>::vector(&this->gm_dungeon_gallery_id_vec);
  std::unordered_map<std::string,int>::unordered_map(&this->gm_dungeon_gallery_temp_value_map);
  if ( *(_BYTE *)(((unsigned __int64)&this->credit_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->credit_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->credit_);
  }
  this->credit_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->token_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->token_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->token_);
  }
  this->token_ = 0;
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_content_closed_);
  this->is_content_closed_ = 0;
  std::map<unsigned int,std::shared_ptr<FleurFairMinigame>>::map(&this->minigame_map_);
  std::map<unsigned int,FleurFairDungeonSection>::map(&this->dungeon_section_map_);
  if ( *(char *)(((unsigned __int64)&this->is_dungeon_unlocked_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_dungeon_unlocked_);
  this->is_dungeon_unlocked_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->obtained_token_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->obtained_token_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->obtained_token_);
  }
  this->obtained_token_ = 0;
  std::weak_ptr<Observer>::weak_ptr(&this->balloon_settle_obs_wtr_);
  std::weak_ptr<Observer>::weak_ptr(&this->fall_settle_obs_wtr_);
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

// Line 111: range 000000001384A44F-000000001384A459
data::NewActivityType __cdecl FleurFairActivity::getActivityStaticType()
{
  return 1400;
};

// Line 124: range 000000001518B1DA-000000001518B227
bool __cdecl FleurFairActivity::isContentClosed(const FleurFairActivity *const this)
{
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_content_closed_);
  return this->is_content_closed_;
};

// Line 135: range 0000000017D7111C-0000000017D71168
uint32_t __cdecl FleurFairActivity::getCredit(const FleurFairActivity *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->credit_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->credit_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  return this->credit_;
};

// Line 142: range 000000001518B228-000000001518B27C
uint32_t __cdecl FleurFairActivity::getToken(const FleurFairActivity *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->token_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->token_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  return this->token_;
};

// Line 353: range 000000001540BAD4-000000001540BB63
void __cdecl FleurFairDungeonSection::FleurFairDungeonSection(FleurFairDungeonSection *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->section_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_open);
  }
  this->is_open = 0;
};
