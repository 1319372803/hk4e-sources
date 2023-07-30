// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_game/controller/gcg_player_controller.h

// Line 25: range 000000000DDE9424-000000000DDE9493
void __cdecl GCGPlayerController::~GCGPlayerController(GCGPlayerController *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGPlayerController + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGControllerBase = v1;
  std::vector<unsigned int>::~vector(&this->forbid_finish_challenge_vec_);
  std::map<data::GCGChallengeType,std::vector<std::shared_ptr<GCGChallenge>>>::~map(&this->challenge_type_2_challenge_map_);
  GCGControllerBase::~GCGControllerBase((GCGControllerBase *const)this);
};

// Line 29: range 000000000DD032DE-000000000DD03554
void __fastcall ZN19GCGPlayerControllerCI217GCGControllerBaseER11GCGGameModeN5proto18GCGControllerValueE(
        GCGPlayerController *const this,
        GCGGameMode *a2,
        GCGControllerValue a3)
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
  *(_QWORD *)(v3 + 16) = ZN19GCGPlayerControllerCI217GCGControllerBaseER11GCGGameModeN5proto18GCGControllerValueE;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = a3;
  GCGControllerBase::GCGControllerBase((GCGControllerBase *const)this, a2, *(GCGControllerValue *)(v3 + 32));
  v6 = (int (**)(...))(&`vtable for'GCGPlayerController + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGControllerBase = v6;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_uid_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->player_uid_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->player_uid_);
  }
  this->player_uid_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->server_seq_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->server_seq_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->server_seq_);
  }
  this->server_seq_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->operation_seq_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->operation_seq_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->operation_seq_);
  }
  this->operation_seq_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_recv_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_recv_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_recv_time_);
  }
  this->last_recv_time_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_heart_beat_tick_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_heart_beat_tick_ >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->last_heart_beat_tick_);
  }
  this->last_heart_beat_tick_ = 0;
  std::map<data::GCGChallengeType,std::vector<std::shared_ptr<GCGChallenge>>>::map(&this->challenge_type_2_challenge_map_);
  std::vector<unsigned int>::vector(&this->forbid_finish_challenge_vec_);
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

// Line 34: range 000000000DF45BF4-000000000DF45C4C
uint32_t __cdecl GCGPlayerController::genServerSeq(GCGPlayerController *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->server_seq_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->server_seq_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->server_seq_);
  }
  return ++this->server_seq_;
};

// Line 48: range 000000000D829E40-000000000D829E8F
uint32_t __cdecl GCGPlayerController::getPlayerUid(const GCGPlayerController *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->player_uid_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->player_uid_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->player_uid_);
  }
  return this->player_uid_;
};

// Line 61: range 000000000E1D4C3C-000000000E1D4C4F
const std::vector<unsigned int> *__cdecl GCGPlayerController::getForbidFinishChallengeVec(
        const GCGPlayerController *const this)
{
  return &this->forbid_finish_challenge_vec_;
};
