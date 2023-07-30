// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/home/home_resource.h

// Line 31: range 000000001750E5FC-000000001750E626
void __cdecl HomeResource::~HomeResource(HomeResource *const this)
{
  PlayerUnixTimer::~PlayerUnixTimer(&this->timer_);
  std::enable_shared_from_this<HomeResource>::~enable_shared_from_this(this);
};

// Line 35: range 0000000016D6B786-0000000016D6B8ED
void __cdecl HomeResource::Resource::Resource(HomeResource::Resource *const this)
{
  __int64 v1; // rdx
  __int64 v2; // rdx
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rdx

  v1 = (*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)(((unsigned __int8)this & 7)
                                                                                              + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000));
  if ( (_BYTE)v1 )
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3, v1);
  this->store_value_ = 0;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->last_refresh_time_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_refresh_time_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store4(&this->last_refresh_time_, (((_BYTE)this + 4) & 7u) + 3, v2);
  this->last_refresh_time_ = 0;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->store_limit >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->store_limit >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store4(&this->store_limit, (((_BYTE)this + 8) & 7u) + 3, v3);
  this->store_limit = 0;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->interval >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->interval >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->interval, (((_BYTE)this + 12) & 7u) + 3, v4);
  this->interval = 0;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->increace >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->increace >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store4(&this->increace, (((_BYTE)this + 16) & 7u) + 3, v5);
  this->increace = 0;
};

// Line 48: range 0000000016D63226-0000000016D6336D
void __fastcall HomeResource::Resource::setStoreValue(HomeResource::Resource *const this, uint32_t store_value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  uint32_t *p_store_limit; // rsi
  uint32_t *v6; // rax
  uint32_t *v7; // rdx
  uint32_t v8; // ecx
  char v9; // dl
  __int64 v10; // rdx
  char v11[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 14 store_value:48";
  *(_QWORD *)(v2 + 16) = HomeResource::Resource::setStoreValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = store_value;
  p_store_limit = &this->store_limit;
  v6 = (uint32_t *)std::min<unsigned int>((const unsigned int *)(v2 + 32), &this->store_limit);
  v7 = v6;
  if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v6);
  }
  v8 = *v7;
  v9 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  LOBYTE(p_store_limit) = v9 != 0;
  v10 = (v9 != 0) & (unsigned __int8)((char)(((unsigned __int8)this & 7) + 3) >= v9);
  if ( (_BYTE)v10 )
    __asan_report_store4(this, p_store_limit, v10);
  this->store_value_ = v8;
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

// Line 83: range 0000000017D6C0A6-0000000017D6C0B7
const HomeResource::Resource *__cdecl HomeResource::getHomeCoinResource(const HomeResource *const this)
{
  return &this->res_home_coin_;
};

// Line 84: range 0000000017D6C0B8-0000000017D6C0C9
const HomeResource::Resource *__cdecl HomeResource::getFetterExpResource(const HomeResource *const this)
{
  return &this->res_fetter_exp_;
};
