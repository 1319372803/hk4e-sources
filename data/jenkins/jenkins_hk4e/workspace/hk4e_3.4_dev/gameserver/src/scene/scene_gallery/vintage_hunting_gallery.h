// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_gallery/vintage_hunting_gallery.h

// Line 20: range 00000000180B4FAC-00000000180B502D
// local variable allocation has failed, the output may be wrong!
void __cdecl BaseStageInfo::BaseStageInfo(BaseStageInfo *const this, uint32_t stage_id)
{
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'BaseStageInfo + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&stage_id);
  this->_vptr_BaseStageInfo = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->stage_id, *(_QWORD *)&stage_id, (_BYTE)this + 8);
  }
  this->stage_id = stage_id;
};

// Line 26: range 00000000182FB186-00000000182FB1C7
void __cdecl BaseStageInfo::~BaseStageInfo(BaseStageInfo *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'BaseStageInfo + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseStageInfo = v2;
};

// Line 26: range 00000000182FB1C8-00000000182FB1F2
void __cdecl BaseStageInfo::~BaseStageInfo(BaseStageInfo *const this)
{
  BaseStageInfo::~BaseStageInfo(this);
  operator delete(this, 0x10uLL);
};

// Line 29: range 0000000018326DA6-0000000018326DD0
void __cdecl VintageHuntingFirstStageInfo::~VintageHuntingFirstStageInfo(VintageHuntingFirstStageInfo *const this)
{
  VintageHuntingFirstStageInfo::~VintageHuntingFirstStageInfo(this);
  operator delete(this, 0x20uLL);
};

// Line 29: range 0000000018326D58-0000000018326DA5
void __cdecl VintageHuntingFirstStageInfo::~VintageHuntingFirstStageInfo(VintageHuntingFirstStageInfo *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'VintageHuntingFirstStageInfo + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseStageInfo = v2;
  BaseStageInfo::~BaseStageInfo((BaseStageInfo *const)this);
};

// Line 31: range 00000000182FB1F4-00000000182FB3F9
void __fastcall ZN28VintageHuntingFirstStageInfoCI213BaseStageInfoEj(VintageHuntingFirstStageInfo *const this, int a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  __int64 v5; // rsi
  int (**v6)(...); // rdx
  __int64 v7; // rsi
  bool v8; // dl
  __int64 v9; // rsi
  bool v10; // dl
  char v11[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ZN28VintageHuntingFirstStageInfoCI213BaseStageInfoEj;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = a2;
  v5 = *(unsigned int *)(v2 + 32);
  BaseStageInfo::BaseStageInfo((BaseStageInfo *const)this, v5);
  v6 = (int (**)(...))(&`vtable for'VintageHuntingFirstStageInfo + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v5);
  this->_vptr_BaseStageInfo = v6;
  v7 = (((_BYTE)this + 12) & 7u) + 3;
  v8 = *(_BYTE *)(((unsigned __int64)&this->score >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->score >> 3) + 0x7FFF8000);
  if ( v8 )
    __asan_report_store4(&this->score, v7, v8);
  this->score = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->timid_cnt >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->timid_cnt >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->timid_cnt, v7, (_BYTE)this + 16);
  }
  this->timid_cnt = 0;
  v9 = (((_BYTE)this + 20) & 7u) + 3;
  v10 = *(_BYTE *)(((unsigned __int64)&this->brutal_cnt >> 3) + 0x7FFF8000) != 0
     && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->brutal_cnt >> 3) + 0x7FFF8000);
  if ( v10 )
    __asan_report_store4(&this->brutal_cnt, v9, v10);
  this->brutal_cnt = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->elite_cnt >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->elite_cnt >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->elite_cnt, v9, (_BYTE)this + 24);
  }
  this->elite_cnt = 0;
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 41: range 0000000018326CAE-0000000018326D2B
void __cdecl VintageHuntingSecondStageInfo::~VintageHuntingSecondStageInfo(VintageHuntingSecondStageInfo *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'VintageHuntingSecondStageInfo + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseStageInfo = v2;
  std::set<unsigned int>::~set(&this->capture_animal_type_set);
  std::map<unsigned int,unsigned int>::~map(&this->no_battle_animal_count_map);
  std::map<unsigned int,unsigned int>::~map(&this->animal_count_map);
  BaseStageInfo::~BaseStageInfo((BaseStageInfo *const)this);
};

// Line 41: range 0000000018326D2C-0000000018326D56
void __cdecl VintageHuntingSecondStageInfo::~VintageHuntingSecondStageInfo(VintageHuntingSecondStageInfo *const this)
{
  VintageHuntingSecondStageInfo::~VintageHuntingSecondStageInfo(this);
  operator delete(this, 0xB0uLL);
};

// Line 43: range 00000000182FB67A-00000000182FB8B9
void __fastcall ZN29VintageHuntingSecondStageInfoCI213BaseStageInfoEj(
        VintageHuntingSecondStageInfo *const this,
        int a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  __int64 v5; // rsi
  int (**v6)(...); // rdx
  __int64 v7; // rsi
  bool v8; // dl
  bool v9; // dl
  char v10[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ZN29VintageHuntingSecondStageInfoCI213BaseStageInfoEj;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = a2;
  v5 = *(unsigned int *)(v2 + 32);
  BaseStageInfo::BaseStageInfo((BaseStageInfo *const)this, v5);
  v6 = (int (**)(...))(&`vtable for'VintageHuntingSecondStageInfo + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v5);
  this->_vptr_BaseStageInfo = v6;
  v7 = (((_BYTE)this + 12) & 7u) + 3;
  v8 = *(_BYTE *)(((unsigned __int64)&this->capture_animal_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->capture_animal_num >> 3) + 0x7FFF8000);
  if ( v8 )
    __asan_report_store4(&this->capture_animal_num, v7, v8);
  this->capture_animal_num = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->capture_no_battle_animal_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->capture_no_battle_animal_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->capture_no_battle_animal_num, v7, (_BYTE)this + 16);
  }
  this->capture_no_battle_animal_num = 0;
  std::map<unsigned int,unsigned int>::map(&this->animal_count_map);
  std::map<unsigned int,unsigned int>::map(&this->no_battle_animal_count_map);
  std::set<unsigned int>::set(&this->capture_animal_type_set);
  if ( *(_BYTE *)(((unsigned __int64)&this->left_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->left_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->left_num, v7, (_BYTE)this - 88);
  }
  this->left_num = 0;
  v9 = *(_BYTE *)(((unsigned __int64)&this->total_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->total_num >> 3) + 0x7FFF8000);
  if ( v9 )
    __asan_report_store4(&this->total_num, (((_BYTE)this - 84) & 7u) + 3, v9);
  this->total_num = 0;
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

// Line 56: range 0000000018326C34-0000000018326C81
void __cdecl VintageHuntingThirdStageInfo::~VintageHuntingThirdStageInfo(VintageHuntingThirdStageInfo *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'VintageHuntingThirdStageInfo + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseStageInfo = v2;
  BaseStageInfo::~BaseStageInfo((BaseStageInfo *const)this);
};

// Line 56: range 0000000018326C82-0000000018326CAC
void __cdecl VintageHuntingThirdStageInfo::~VintageHuntingThirdStageInfo(VintageHuntingThirdStageInfo *const this)
{
  VintageHuntingThirdStageInfo::~VintageHuntingThirdStageInfo(this);
  operator delete(this, 0x10uLL);
};

// Line 58: range 00000000182FBB3A-00000000182FBC7D
void __fastcall ZN28VintageHuntingThirdStageInfoCI213BaseStageInfoEj(VintageHuntingThirdStageInfo *const this, int a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  __int64 v5; // rsi
  int (**v6)(...); // rdx
  bool v7; // dl
  char v8[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ZN28VintageHuntingThirdStageInfoCI213BaseStageInfoEj;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = a2;
  v5 = *(unsigned int *)(v2 + 32);
  BaseStageInfo::BaseStageInfo((BaseStageInfo *const)this, v5);
  v6 = (int (**)(...))(&`vtable for'VintageHuntingThirdStageInfo + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v5);
  this->_vptr_BaseStageInfo = v6;
  v7 = *(_BYTE *)(((unsigned __int64)&this->boss_weak_times >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->boss_weak_times >> 3) + 0x7FFF8000);
  if ( v7 )
    __asan_report_store4(&this->boss_weak_times, (((_BYTE)this + 12) & 7u) + 3, v7);
  this->boss_weak_times = 0;
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

// Line 73: range 0000000018326C08-0000000018326C32
void __cdecl VintageHuntingGallery::~VintageHuntingGallery(VintageHuntingGallery *const this)
{
  VintageHuntingGallery::~VintageHuntingGallery(this);
  operator delete(this, 0x158uLL);
};

// Line 73: range 0000000018326BA8-0000000018326C07
void __cdecl VintageHuntingGallery::~VintageHuntingGallery(VintageHuntingGallery *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'VintageHuntingGallery + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseGallery = v2;
  std::shared_ptr<BaseStageInfo>::~shared_ptr(&this->stage_info_ptr_);
  BaseGallery::~BaseGallery((BaseGallery *const)this);
};

// Line 76: range 0000000016B342F2-0000000016B34559
void __fastcall ZN21VintageHuntingGalleryCI211BaseGalleryER5Scenej(
        VintageHuntingGallery *const this,
        Scene *a2,
        int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int (**v6)(...); // rdx
  __int64 v7; // rsi
  bool v8; // dl
  __int64 v9; // rsi
  bool v10; // dl
  char v12[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ZN21VintageHuntingGalleryCI211BaseGalleryER5Scenej;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = a3;
  BaseGallery::BaseGallery((BaseGallery *const)this, a2, *(_DWORD *)(v3 + 32));
  v6 = (int (**)(...))(&`vtable for'VintageHuntingGallery + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_BaseGallery = v6;
  v7 = (((_BYTE)this + 44) & 7u) + 3;
  v8 = *(_BYTE *)(((unsigned __int64)&this->owner_uid_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->owner_uid_ >> 3) + 0x7FFF8000);
  if ( v8 )
    __asan_report_store4(&this->owner_uid_, v7, v8);
  this->owner_uid_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->activity_id_, v7, (_BYTE)this + 48);
  }
  this->activity_id_ = 0;
  v9 = (((_BYTE)this + 52) & 7u) + 3;
  v10 = *(_BYTE *)(((unsigned __int64)&this->stage_id_ >> 3) + 0x7FFF8000) != 0
     && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->stage_id_ >> 3) + 0x7FFF8000);
  if ( v10 )
    __asan_report_store4(&this->stage_id_, v9, v10);
  this->stage_id_ = 0;
  std::shared_ptr<BaseStageInfo>::shared_ptr(&this->stage_info_ptr_);
  if ( *(_BYTE *)(((unsigned __int64)&this->grant_trial_avatar_guid_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->grant_trial_avatar_guid_, v9);
  this->grant_trial_avatar_guid_ = 0LL;
  if ( *(char *)(((unsigned __int64)&this->is_resource_guard_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_resource_guard_, v9, &this->is_resource_guard_);
  this->is_resource_guard_ = 0;
  if ( v12 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};
