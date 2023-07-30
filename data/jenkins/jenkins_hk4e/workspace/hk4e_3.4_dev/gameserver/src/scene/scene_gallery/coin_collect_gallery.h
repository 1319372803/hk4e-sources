// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_gallery/coin_collect_gallery.h

// Line 20: range 0000000017B8D13A-0000000017B8D199
void __cdecl CoinCollectGallery::~CoinCollectGallery(CoinCollectGallery *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'CoinCollectGallery + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseGallery = v2;
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->uid_2_choose_skill_no_map_);
  BaseGallery::~BaseGallery((BaseGallery *const)this);
};

// Line 20: range 0000000017B8D19A-0000000017B8D1C4
void __cdecl CoinCollectGallery::~CoinCollectGallery(CoinCollectGallery *const this)
{
  CoinCollectGallery::~CoinCollectGallery(this);
  operator delete(this, 0x170uLL);
};

// Line 23: range 0000000016B36A4E-0000000016B36C41
void __fastcall ZN18CoinCollectGalleryCI211BaseGalleryER5Scenej(CoinCollectGallery *const this, Scene *a2, int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int (**v6)(...); // rdx
  __int64 v7; // rsi
  bool v8; // dl
  bool v9; // dl
  char v11[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ZN18CoinCollectGalleryCI211BaseGalleryER5Scenej;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = a3;
  BaseGallery::BaseGallery((BaseGallery *const)this, a2, *(_DWORD *)(v3 + 32));
  v6 = (int (**)(...))(&`vtable for'CoinCollectGallery + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_BaseGallery = v6;
  v7 = (((_BYTE)this + 44) & 7u) + 3;
  v8 = *(_BYTE *)(((unsigned __int64)&this->coin_collect_num_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->coin_collect_num_ >> 3) + 0x7FFF8000);
  if ( v8 )
    __asan_report_store4(&this->coin_collect_num_, v7, v8);
  this->coin_collect_num_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_collect_coin_cost_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_collect_coin_cost_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_collect_coin_cost_time_, v7, (_BYTE)this + 48);
  }
  this->last_collect_coin_cost_time_ = 0.0;
  v9 = *(_BYTE *)(((unsigned __int64)&this->coin_total_num_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->coin_total_num_ >> 3) + 0x7FFF8000);
  if ( v9 )
    __asan_report_store4(&this->coin_total_num_, (((_BYTE)this + 52) & 7u) + 3, v9);
  this->coin_total_num_ = 0;
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->uid_2_choose_skill_no_map_);
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 26: range 00000000149EE938-00000000149EE94B
const std::unordered_map<unsigned int,unsigned int> *__cdecl CoinCollectGallery::getPlayerChooseSkillMap(
        const CoinCollectGallery *const this)
{
  return &this->uid_2_choose_skill_no_map_;
};
