// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_gallery/instable_spray_gallery.h

// Line 18: range 0000000014837AAA-0000000014837B51
void __cdecl InstableSprayGallery::~InstableSprayGallery(InstableSprayGallery *const this)
{
  __int64 v1; // rsi
  __int64 *v2; // rdx

  v2 = &`vtable for'InstableSprayGallery + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  *(_QWORD *)this->baseclass_0 = v2;
  std::vector<unsigned int>::~vector(&this->cached_buff_id_list_);
  std::map<unsigned int,unsigned int>::~map(&this->cached_special_monster_score_map_);
  std::map<unsigned int,unsigned int>::~map(&this->cached_normal_monster_score_map_);
  std::map<unsigned int,InstableSprayGallery::BuffInfo>::~map(&this->buff_info_map_);
  std::vector<unsigned int>::~vector(&this->buff_id_vec_);
  BaseGallery::~BaseGallery((BaseGallery *const)this);
};

// Line 18: range 0000000014837B52-0000000014837B7C
void __cdecl InstableSprayGallery::~InstableSprayGallery(InstableSprayGallery *const this)
{
  InstableSprayGallery::~InstableSprayGallery(this);
  operator delete(this, 0x210uLL);
};

// Line 21: range 00000000147F68B4-00000000147F691F
void __cdecl InstableSprayGallery::BuffInfo::BuffInfo(InstableSprayGallery::BuffInfo *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->buff_end_time = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->buff_max_time >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->buff_max_time, v1);
  this->buff_max_time = 0LL;
};

// Line 27: range 0000000016B337A4-0000000016B33B3E
void __fastcall ZN20InstableSprayGalleryCI211BaseGalleryER5Scenej(InstableSprayGallery *const this, Scene *a2, int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  __int64 *v6; // rdx
  __int64 v7; // rsi
  bool v8; // dl
  __int64 v9; // rsi
  bool v10; // dl
  __int64 v11; // rsi
  bool v12; // dl
  __int64 v13; // rsi
  bool v14; // dl
  char v16[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ZN20InstableSprayGalleryCI211BaseGalleryER5Scenej;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = a3;
  BaseGallery::BaseGallery((BaseGallery *const)this, a2, *(_DWORD *)(v3 + 32));
  v6 = &`vtable for'InstableSprayGallery + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  *(_QWORD *)this->baseclass_0 = v6;
  v7 = (((_BYTE)this + 44) & 7u) + 3;
  v8 = *(_BYTE *)(((unsigned __int64)&this->score_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->score_ >> 3) + 0x7FFF8000);
  if ( v8 )
    __asan_report_store4(&this->score_, v7, v8);
  this->score_ = 0;
  std::vector<unsigned int>::vector(&this->buff_id_vec_);
  std::map<unsigned int,InstableSprayGallery::BuffInfo>::map(&this->buff_info_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->first_gacha_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->first_gacha_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->first_gacha_time_, v7, (_BYTE)this + 120);
  }
  this->first_gacha_time_ = 0;
  v9 = (((_BYTE)this + 124) & 7u) + 3;
  v10 = *(_BYTE *)(((unsigned __int64)&this->last_gacha_time_ >> 3) + 0x7FFF8000) != 0
     && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_gacha_time_ >> 3) + 0x7FFF8000);
  if ( v10 )
    __asan_report_store4(&this->last_gacha_time_, v9, v10);
  this->last_gacha_time_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->gacha_times_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gacha_times_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gacha_times_, v9, (_BYTE)this + 0x80);
  }
  this->gacha_times_ = 0;
  v11 = (((_BYTE)this - 124) & 7u) + 3;
  v12 = *(_BYTE *)(((unsigned __int64)&this->cached_level_id_ >> 3) + 0x7FFF8000) != 0
     && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cached_level_id_ >> 3) + 0x7FFF8000);
  if ( v12 )
    __asan_report_store4(&this->cached_level_id_, v11, v12);
  this->cached_level_id_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->cached_prev_score_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cached_prev_score_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cached_prev_score_, v11, (_BYTE)this - 120);
  }
  this->cached_prev_score_ = 0;
  v13 = (((_BYTE)this - 116) & 7u) + 3;
  v14 = *(_BYTE *)(((unsigned __int64)&this->cached_score_ratio_ >> 3) + 0x7FFF8000) != 0
     && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cached_score_ratio_ >> 3)
                                                          + 0x7FFF8000);
  if ( v14 )
    __asan_report_store4(&this->cached_score_ratio_, v13, v14);
  this->cached_score_ratio_ = 0.0;
  std::map<unsigned int,unsigned int>::map(&this->cached_normal_monster_score_map_);
  std::map<unsigned int,unsigned int>::map(&this->cached_special_monster_score_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->cached_max_round_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cached_max_round_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cached_max_round_, v13, (_BYTE)this - 16);
  }
  this->cached_max_round_ = 0;
  std::vector<unsigned int>::vector(&this->cached_buff_id_list_);
  if ( v16 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 33: range 0000000017D718C2-0000000017D71903
void __cdecl InstableSprayGallery::setBuffByGm(
        InstableSprayGallery *const this,
        std::vector<unsigned int> *p_buff_id_vec)
{
  std::vector<unsigned int> *v2; // rax

  v2 = std::move<std::vector<unsigned int> &>(p_buff_id_vec);
  std::vector<unsigned int>::operator=(&this->buff_id_vec_, v2);
  BaseGallery::notifyGalleryInfo((BaseGallery *const)this);
};
