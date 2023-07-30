// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/ActivityArenaChallengeExcelConfig.gen.h

// Line 17: range 0000000013075A82-0000000013075EB0
void __cdecl data::ActivityArenaChallengeExcelConfig::ActivityArenaChallengeExcelConfig(
        data::ActivityArenaChallengeExcelConfig *const this,
        const data::ActivityArenaChallengeExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t schedule_id; // ecx
  char v7; // dl
  uint32_t arena_challenge_id; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t arena_challenge_level; // ecx
  char v12; // dl
  bool is_extra_level; // cl
  char v14; // al
  __int64 v15; // rsi
  uint32_t watcher_id; // ecx
  char v17; // dl
  uint32_t revise_id; // ecx
  char v19; // al
  __int64 v20; // rsi
  uint32_t gallery_id; // ecx
  char v22; // dl
  const data::ActivityArenaChallengeExcelConfig *v23; // [rsp+0h] [rbp-10h]

  v23 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ActivityArenaChallengeExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ActivityArenaChallengeExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->id);
  }
  id = a2->id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->id, a2);
  }
  this->id = id;
  v5 = (((_BYTE)v23 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v23->schedule_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v23 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v23->schedule_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v23->schedule_id);
  }
  schedule_id = v23->schedule_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->schedule_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->schedule_id, v5);
  }
  this->schedule_id = schedule_id;
  if ( *(_BYTE *)(((unsigned __int64)&v23->arena_challenge_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v23->arena_challenge_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v23->arena_challenge_id);
  }
  arena_challenge_id = v23->arena_challenge_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->arena_challenge_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->arena_challenge_id, v5);
  }
  this->arena_challenge_id = arena_challenge_id;
  v10 = (((_BYTE)v23 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v23->arena_challenge_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v23 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v23->arena_challenge_level >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&v23->arena_challenge_level);
  }
  arena_challenge_level = v23->arena_challenge_level;
  v12 = *(_BYTE *)(((unsigned __int64)&this->arena_challenge_level >> 3) + 0x7FFF8000);
  LOBYTE(v10) = v12 != 0;
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
    __asan_report_store4(&this->arena_challenge_level, v10);
  this->arena_challenge_level = arena_challenge_level;
  if ( *(char *)(((unsigned __int64)&v23->is_extra_level >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v23->is_extra_level, v10, &v23->is_extra_level);
  is_extra_level = v23->is_extra_level;
  v14 = *(_BYTE *)(((unsigned __int64)&this->is_extra_level >> 3) + 0x7FFF8000);
  if ( v14 < 0 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store1(&this->is_extra_level, v10, &this->is_extra_level);
  }
  this->is_extra_level = is_extra_level;
  v15 = (((_BYTE)v23 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v23->watcher_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v23 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v23->watcher_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v23->watcher_id);
  }
  watcher_id = v23->watcher_id;
  v17 = *(_BYTE *)(((unsigned __int64)&this->watcher_id >> 3) + 0x7FFF8000);
  if ( v17 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v17 )
  {
    LOBYTE(v15) = v17 != 0;
    __asan_report_store4(&this->watcher_id, v15);
  }
  this->watcher_id = watcher_id;
  if ( *(_BYTE *)(((unsigned __int64)&v23->revise_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v23->revise_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v23->revise_id);
  }
  revise_id = v23->revise_id;
  v19 = *(_BYTE *)(((unsigned __int64)&this->revise_id >> 3) + 0x7FFF8000);
  if ( v19 != 0 && v19 <= 3 )
  {
    LOBYTE(v15) = v19 != 0;
    __asan_report_store4(&this->revise_id, v15);
  }
  this->revise_id = revise_id;
  v20 = (((_BYTE)v23 + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v23->gallery_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v23 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v23->gallery_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v23->gallery_id);
  }
  gallery_id = v23->gallery_id;
  v22 = *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000);
  if ( v22 != 0 && (char)((((_BYTE)this + 36) & 7) + 3) >= v22 )
  {
    LOBYTE(v20) = v22 != 0;
    __asan_report_store4(&this->gallery_id, v20);
  }
  this->gallery_id = gallery_id;
};

// Line 20: range 000000001342566A-00000000134256AB
void __cdecl data::ActivityArenaChallengeExcelConfig::~ActivityArenaChallengeExcelConfig(
        data::ActivityArenaChallengeExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ActivityArenaChallengeExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivityArenaChallengeExcelConfig = v2;
};

// Line 20: range 00000000134256AC-00000000134256D6
void __cdecl data::ActivityArenaChallengeExcelConfig::~ActivityArenaChallengeExcelConfig(
        data::ActivityArenaChallengeExcelConfig *const this)
{
  data::ActivityArenaChallengeExcelConfig::~ActivityArenaChallengeExcelConfig(this);
  operator delete(this, 0x28uLL);
};
