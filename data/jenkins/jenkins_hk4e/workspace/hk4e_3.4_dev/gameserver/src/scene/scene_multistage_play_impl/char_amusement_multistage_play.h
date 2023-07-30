// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_multistage_play_impl/char_amusement_multistage_play.h

// Line 19: range 0000000018326908-0000000018326A09
void __cdecl CharAmusementMultistagePlay::~CharAmusementMultistagePlay(CharAmusementMultistagePlay *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'CharAmusementMultistagePlay + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  std::set<unsigned int>::~set(&this->entered_uid_set_);
  std::map<unsigned int,unsigned int>::~map(&this->uid_death_times_map_);
  std::vector<unsigned int>::~vector(&this->gallery_id_vec_);
  std::vector<unsigned int>::~vector(&this->cost_time_vec_);
  std::vector<unsigned int>::~vector(&this->level_id_vec_);
  std::set<unsigned int>::~set(&this->preview_enter_uid_set_);
  std::map<unsigned int,unsigned int>::~map(&this->uid_punish_time_map_);
  std::map<unsigned int,std::vector<unsigned int>>::~map(&this->uid_avatar_vec_map_);
  std::set<unsigned int>::~set(&this->all_player_uid_set_);
  std::set<unsigned int>::~set(&this->team_uid_set_);
  SceneMultistagePlay::~SceneMultistagePlay(this);
};

// Line 19: range 0000000018326A0A-0000000018326A34
void __cdecl CharAmusementMultistagePlay::~CharAmusementMultistagePlay(CharAmusementMultistagePlay *const this)
{
  CharAmusementMultistagePlay::~CharAmusementMultistagePlay(this);
  operator delete(this, 0x320uLL);
};

// Line 23: range 0000000015F30ABA-0000000015F30E5E
void __fastcall ZN27CharAmusementMultistagePlayCI219SceneMultistagePlayER5SceneR5Groupj(
        CharAmusementMultistagePlay *const this,
        Scene *a2,
        Group *a3,
        int a4)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  int (**v7)(...); // rdx
  __int64 v8; // rsi
  bool v9; // dl
  __int64 v10; // rsi
  bool v11; // dl
  char v14[96]; // [rsp+20h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v4 + 16) = ZN27CharAmusementMultistagePlayCI219SceneMultistagePlayER5SceneR5Groupj;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116348;
  *(_DWORD *)(v4 + 32) = a4;
  SceneMultistagePlay::SceneMultistagePlay(this, a2, a3, *(_DWORD *)(v4 + 32));
  v7 = (int (**)(...))(&`vtable for'CharAmusementMultistagePlay + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_DescribalBase = v7;
  std::set<unsigned int>::set(&this->team_uid_set_);
  std::set<unsigned int>::set(&this->all_player_uid_set_);
  std::map<unsigned int,std::vector<unsigned int>>::map(&this->uid_avatar_vec_map_);
  std::map<unsigned int,unsigned int>::map(&this->uid_punish_time_map_);
  std::set<unsigned int>::set(&this->preview_enter_uid_set_);
  std::vector<unsigned int>::vector(&this->level_id_vec_);
  std::vector<unsigned int>::vector(&this->cost_time_vec_);
  if ( *(_BYTE *)(((unsigned __int64)&this->gallery_stage_index_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gallery_stage_index_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gallery_stage_index_, a2, (_BYTE)this + 0x80);
  }
  this->gallery_stage_index_ = 0;
  v8 = (((_BYTE)this - 124) & 7u) + 3;
  v9 = *(_BYTE *)(((unsigned __int64)&this->preview_stage_index_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->preview_stage_index_ >> 3)
                                                         + 0x7FFF8000);
  if ( v9 )
    __asan_report_store4(&this->preview_stage_index_, v8, v9);
  this->preview_stage_index_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->match_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->match_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->match_id_, v8, (_BYTE)this - 120);
  }
  this->match_id_ = 0;
  v10 = (((_BYTE)this - 116) & 7u) + 3;
  v11 = *(_BYTE *)(((unsigned __int64)&this->stage_id_ >> 3) + 0x7FFF8000) != 0
     && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->stage_id_ >> 3) + 0x7FFF8000);
  if ( v11 )
    __asan_report_store4(&this->stage_id_, v10, v11);
  this->stage_id_ = 0;
  std::vector<unsigned int>::vector(&this->gallery_id_vec_);
  if ( *(_BYTE *)(((unsigned __int64)&this->mp_status_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->mp_status_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->mp_status_, v10, (_BYTE)this - 88);
  }
  this->mp_status_ = NONE_11;
  std::map<unsigned int,unsigned int>::map(&this->uid_death_times_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->score_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->score_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->score_, v10, (_BYTE)this - 32);
  }
  this->score_ = 0;
  std::set<unsigned int>::set(&this->entered_uid_set_);
  if ( *(_BYTE *)(((unsigned __int64)&this->stop_reason_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stop_reason_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->stop_reason_, v10, (_BYTE)this + 24);
  }
  this->stop_reason_ = GALLERY_STOP_NONE;
  if ( v14 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 24: range 00000000180B54C4-00000000180B54D2
proto::MultistagePlayType __cdecl CharAmusementMultistagePlay::getPlayType(
        const CharAmusementMultistagePlay *const this)
{
  return 7;
};

// Line 29: range 00000000180B54D4-00000000180B54DE
void __cdecl CharAmusementMultistagePlay::regValueSetters(CharAmusementMultistagePlay *const this)
{
  ;
};

// Line 47: range 00000000149EE886-00000000149EE899
const std::vector<unsigned int> *__cdecl CharAmusementMultistagePlay::getGalleryIdVec(
        const CharAmusementMultistagePlay *const this)
{
  return &this->gallery_id_vec_;
};

// Line 49: range 00000000149EE89A-00000000149EE937
// local variable allocation has failed, the output may be wrong!
void __cdecl CharAmusementMultistagePlay::addGalleryScore(CharAmusementMultistagePlay *const this, uint32_t score)
{
  uint32_t v2; // edx
  char v3; // al

  if ( *(_BYTE *)(((unsigned __int64)&this->score_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->score_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  *(_QWORD *)&score = score;
  v2 = SAFE_ADD<unsigned int,unsigned int>(this->score_, score);
  v3 = *(_BYTE *)(((unsigned __int64)&this->score_ >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(score) = v3 != 0;
    __asan_report_store4(&this->score_, *(_QWORD *)&score, v2);
  }
  this->score_ = v2;
};

// Line 51: range 0000000017A0A74C-0000000017A0A79E
// local variable allocation has failed, the output may be wrong!
void __cdecl CharAmusementMultistagePlay::setGalleryStopReason(
        CharAmusementMultistagePlay *const this,
        proto::GalleryStopReason reason)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->stop_reason_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stop_reason_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->stop_reason_, *(_QWORD *)&reason, (_BYTE)this + 24);
  }
  this->stop_reason_ = reason;
};

// Line 86: range 00000000180B54E0-00000000180B5532
bool __cdecl CharAmusementMultistagePlay::isInGalleryStage(const CharAmusementMultistagePlay *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  return this->stage_type_ == MULTISTAGE_STAGE_CHAR_AMUSEMENT_GALLERY;
};
