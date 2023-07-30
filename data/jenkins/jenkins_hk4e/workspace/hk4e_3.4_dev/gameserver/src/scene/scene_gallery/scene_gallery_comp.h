// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_gallery/scene_gallery_comp.h

// Line 31: range 0000000015BFA2B0-0000000015BFA2DA
void __cdecl SceneGalleryComp::~SceneGalleryComp(SceneGalleryComp *const this)
{
  SceneGalleryComp::~SceneGalleryComp(this);
  operator delete(this, 0x88uLL);
};

// Line 31: range 0000000015BFA232-0000000015BFA2AF
void __cdecl SceneGalleryComp::~SceneGalleryComp(SceneGalleryComp *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'SceneGalleryComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_SceneCompBase = v2;
  std::shared_ptr<SceneTransferAwaiter>::~shared_ptr(&this->scene_transfer_awaiter_ptr_);
  std::set<unsigned int>::~set(&this->gallery_uid_set_);
  std::map<unsigned int,std::shared_ptr<BaseGallery>>::~map(&this->scene_gallery_map_);
  SceneCompBase::~SceneCompBase(this);
};

// Line 37: range 0000000015BEDD60-0000000015BEDDE8
void __cdecl ZN16SceneGalleryCompCI213SceneCompBaseER5Scene(SceneGalleryComp *const this, Scene *a2)
{
  int (**v2)(...); // rdx

  SceneCompBase::SceneCompBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'SceneGalleryComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_SceneCompBase = v2;
  std::map<unsigned int,std::shared_ptr<BaseGallery>>::map(&this->scene_gallery_map_);
  std::set<unsigned int>::set(&this->gallery_uid_set_);
  std::shared_ptr<SceneTransferAwaiter>::shared_ptr(&this->scene_transfer_awaiter_ptr_);
};

// Line 56: range 0000000013EB9A92-0000000013EB9ABE
SceneTransferAwaiterPtr __cdecl SceneGalleryComp::getSceneTransferAwaiter(const SceneGalleryComp *const this)
{
  __int64 v1; // rsi
  SceneTransferAwaiterPtr result; // rax

  std::shared_ptr<SceneTransferAwaiter>::shared_ptr(
    (std::shared_ptr<SceneTransferAwaiter> *const)this,
    (const std::shared_ptr<SceneTransferAwaiter> *)(v1 + 120));
  result._M_ptr = (std::__shared_ptr<SceneTransferAwaiter,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 82: range 0000000017A0C2E6-0000000017A0C3FC
// local variable allocation has failed, the output may be wrong!
std::shared_ptr<ArenaChallengeGallery> __cdecl SceneGalleryComp::findGallery<ArenaChallengeGallery>(
        SceneGalleryComp *const this,
        uint32_t gallery_id)
{
  int v2; // edx
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::shared_ptr<ArenaChallengeGallery> result; // rax
  int gallery_ida; // [rsp+Ch] [rbp-74h]
  char v8[96]; // [rsp+20h] [rbp-60h] BYREF

  gallery_ida = v2;
  v3 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 19 base_gallery_ptr:84";
  *(_QWORD *)(v3 + 16) = SceneGalleryComp::findGallery<ArenaChallengeGallery>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  SceneGalleryComp::findGallery((SceneGalleryComp *const)(v3 + 32), *(__int64 *)&gallery_id, gallery_ida);
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, *(_QWORD *)&gallery_id);
  std::dynamic_pointer_cast<ArenaChallengeGallery,BaseGallery>((const std::shared_ptr<BaseGallery> *)this);
  std::shared_ptr<BaseGallery>::~shared_ptr((std::shared_ptr<BaseGallery> *const)(v3 + 32));
  if ( v8 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<ArenaChallengeGallery,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 82: range 000000001386B5DE-000000001386B6F4
// local variable allocation has failed, the output may be wrong!
std::shared_ptr<BrickBreakerGallery> __cdecl SceneGalleryComp::findGallery<BrickBreakerGallery>(
        SceneGalleryComp *const this,
        uint32_t gallery_id)
{
  int v2; // edx
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::shared_ptr<BrickBreakerGallery> result; // rax
  int gallery_ida; // [rsp+Ch] [rbp-74h]
  char v8[96]; // [rsp+20h] [rbp-60h] BYREF

  gallery_ida = v2;
  v3 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 19 base_gallery_ptr:84";
  *(_QWORD *)(v3 + 16) = SceneGalleryComp::findGallery<BrickBreakerGallery>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  SceneGalleryComp::findGallery((SceneGalleryComp *const)(v3 + 32), *(__int64 *)&gallery_id, gallery_ida);
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, *(_QWORD *)&gallery_id);
  std::dynamic_pointer_cast<BrickBreakerGallery,BaseGallery>((const std::shared_ptr<BaseGallery> *)this);
  std::shared_ptr<BaseGallery>::~shared_ptr((std::shared_ptr<BaseGallery> *const)(v3 + 32));
  if ( v8 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<BrickBreakerGallery,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 82: range 0000000014A106A6-0000000014A107BC
// local variable allocation has failed, the output may be wrong!
std::shared_ptr<CoinCollectGallery> __cdecl SceneGalleryComp::findGallery<CoinCollectGallery>(
        SceneGalleryComp *const this,
        uint32_t gallery_id)
{
  int v2; // edx
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::shared_ptr<CoinCollectGallery> result; // rax
  int gallery_ida; // [rsp+Ch] [rbp-74h]
  char v8[96]; // [rsp+20h] [rbp-60h] BYREF

  gallery_ida = v2;
  v3 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 19 base_gallery_ptr:84";
  *(_QWORD *)(v3 + 16) = SceneGalleryComp::findGallery<CoinCollectGallery>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  SceneGalleryComp::findGallery((SceneGalleryComp *const)(v3 + 32), *(__int64 *)&gallery_id, gallery_ida);
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, *(_QWORD *)&gallery_id);
  std::dynamic_pointer_cast<CoinCollectGallery,BaseGallery>((const std::shared_ptr<BaseGallery> *)this);
  std::shared_ptr<BaseGallery>::~shared_ptr((std::shared_ptr<BaseGallery> *const)(v3 + 32));
  if ( v8 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<CoinCollectGallery,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 82: range 00000000151E041A-00000000151E0530
// local variable allocation has failed, the output may be wrong!
std::shared_ptr<HideAndSeekGallery> __cdecl SceneGalleryComp::findGallery<HideAndSeekGallery>(
        SceneGalleryComp *const this,
        uint32_t gallery_id)
{
  int v2; // edx
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::shared_ptr<HideAndSeekGallery> result; // rax
  int gallery_ida; // [rsp+Ch] [rbp-74h]
  char v8[96]; // [rsp+20h] [rbp-60h] BYREF

  gallery_ida = v2;
  v3 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 19 base_gallery_ptr:84";
  *(_QWORD *)(v3 + 16) = SceneGalleryComp::findGallery<HideAndSeekGallery>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  SceneGalleryComp::findGallery((SceneGalleryComp *const)(v3 + 32), *(__int64 *)&gallery_id, gallery_ida);
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, *(_QWORD *)&gallery_id);
  std::dynamic_pointer_cast<HideAndSeekGallery,BaseGallery>((const std::shared_ptr<BaseGallery> *)this);
  std::shared_ptr<BaseGallery>::~shared_ptr((std::shared_ptr<BaseGallery> *const)(v3 + 32));
  if ( v8 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<HideAndSeekGallery,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 82: range 0000000017D90292-0000000017D903A8
// local variable allocation has failed, the output may be wrong!
std::shared_ptr<HomeBalloonGallery> __cdecl SceneGalleryComp::findGallery<HomeBalloonGallery>(
        SceneGalleryComp *const this,
        uint32_t gallery_id)
{
  int v2; // edx
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::shared_ptr<HomeBalloonGallery> result; // rax
  int gallery_ida; // [rsp+Ch] [rbp-74h]
  char v8[96]; // [rsp+20h] [rbp-60h] BYREF

  gallery_ida = v2;
  v3 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 19 base_gallery_ptr:84";
  *(_QWORD *)(v3 + 16) = SceneGalleryComp::findGallery<HomeBalloonGallery>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  SceneGalleryComp::findGallery((SceneGalleryComp *const)(v3 + 32), *(__int64 *)&gallery_id, gallery_ida);
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, *(_QWORD *)&gallery_id);
  std::dynamic_pointer_cast<HomeBalloonGallery,BaseGallery>((const std::shared_ptr<BaseGallery> *)this);
  std::shared_ptr<BaseGallery>::~shared_ptr((std::shared_ptr<BaseGallery> *const)(v3 + 32));
  if ( v8 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<HomeBalloonGallery,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 82: range 0000000014A0F234-0000000014A0F34A
// local variable allocation has failed, the output may be wrong!
std::shared_ptr<InstableSprayGallery> __cdecl SceneGalleryComp::findGallery<InstableSprayGallery>(
        SceneGalleryComp *const this,
        uint32_t gallery_id)
{
  int v2; // edx
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::shared_ptr<InstableSprayGallery> result; // rax
  int gallery_ida; // [rsp+Ch] [rbp-74h]
  char v8[96]; // [rsp+20h] [rbp-60h] BYREF

  gallery_ida = v2;
  v3 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 19 base_gallery_ptr:84";
  *(_QWORD *)(v3 + 16) = SceneGalleryComp::findGallery<InstableSprayGallery>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  SceneGalleryComp::findGallery((SceneGalleryComp *const)(v3 + 32), *(__int64 *)&gallery_id, gallery_ida);
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, *(_QWORD *)&gallery_id);
  std::dynamic_pointer_cast<InstableSprayGallery,BaseGallery>((const std::shared_ptr<BaseGallery> *)this);
  std::shared_ptr<BaseGallery>::~shared_ptr((std::shared_ptr<BaseGallery> *const)(v3 + 32));
  if ( v8 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<InstableSprayGallery,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 82: range 0000000014635606-000000001463571C
// local variable allocation has failed, the output may be wrong!
std::shared_ptr<IrodoriMasterGallery> __cdecl SceneGalleryComp::findGallery<IrodoriMasterGallery>(
        SceneGalleryComp *const this,
        uint32_t gallery_id)
{
  int v2; // edx
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::shared_ptr<IrodoriMasterGallery> result; // rax
  int gallery_ida; // [rsp+Ch] [rbp-74h]
  char v8[96]; // [rsp+20h] [rbp-60h] BYREF

  gallery_ida = v2;
  v3 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 19 base_gallery_ptr:84";
  *(_QWORD *)(v3 + 16) = SceneGalleryComp::findGallery<IrodoriMasterGallery>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  SceneGalleryComp::findGallery((SceneGalleryComp *const)(v3 + 32), *(__int64 *)&gallery_id, gallery_ida);
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, *(_QWORD *)&gallery_id);
  std::dynamic_pointer_cast<IrodoriMasterGallery,BaseGallery>((const std::shared_ptr<BaseGallery> *)this);
  std::shared_ptr<BaseGallery>::~shared_ptr((std::shared_ptr<BaseGallery> *const)(v3 + 32));
  if ( v8 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<IrodoriMasterGallery,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 82: range 000000001463FDA8-000000001463FEBE
// local variable allocation has failed, the output may be wrong!
std::shared_ptr<MuqadasPotionGallery> __cdecl SceneGalleryComp::findGallery<MuqadasPotionGallery>(
        SceneGalleryComp *const this,
        uint32_t gallery_id)
{
  int v2; // edx
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::shared_ptr<MuqadasPotionGallery> result; // rax
  int gallery_ida; // [rsp+Ch] [rbp-74h]
  char v8[96]; // [rsp+20h] [rbp-60h] BYREF

  gallery_ida = v2;
  v3 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 19 base_gallery_ptr:84";
  *(_QWORD *)(v3 + 16) = SceneGalleryComp::findGallery<MuqadasPotionGallery>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  SceneGalleryComp::findGallery((SceneGalleryComp *const)(v3 + 32), *(__int64 *)&gallery_id, gallery_ida);
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, *(_QWORD *)&gallery_id);
  std::dynamic_pointer_cast<MuqadasPotionGallery,BaseGallery>((const std::shared_ptr<BaseGallery> *)this);
  std::shared_ptr<BaseGallery>::~shared_ptr((std::shared_ptr<BaseGallery> *const)(v3 + 32));
  if ( v8 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<MuqadasPotionGallery,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 82: range 0000000016D7BA2A-0000000016D7BB40
// local variable allocation has failed, the output may be wrong!
std::shared_ptr<PhotoGallery> __cdecl SceneGalleryComp::findGallery<PhotoGallery>(
        SceneGalleryComp *const this,
        uint32_t gallery_id)
{
  int v2; // edx
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::shared_ptr<PhotoGallery> result; // rax
  int gallery_ida; // [rsp+Ch] [rbp-74h]
  char v8[96]; // [rsp+20h] [rbp-60h] BYREF

  gallery_ida = v2;
  v3 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 19 base_gallery_ptr:84";
  *(_QWORD *)(v3 + 16) = SceneGalleryComp::findGallery<PhotoGallery>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  SceneGalleryComp::findGallery((SceneGalleryComp *const)(v3 + 32), *(__int64 *)&gallery_id, gallery_ida);
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, *(_QWORD *)&gallery_id);
  std::dynamic_pointer_cast<PhotoGallery,BaseGallery>((const std::shared_ptr<BaseGallery> *)this);
  std::shared_ptr<BaseGallery>::~shared_ptr((std::shared_ptr<BaseGallery> *const)(v3 + 32));
  if ( v8 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<PhotoGallery,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 82: range 00000000180C7FEC-00000000180C8102
// local variable allocation has failed, the output may be wrong!
std::shared_ptr<SumoGallery> __cdecl SceneGalleryComp::findGallery<SumoGallery>(
        SceneGalleryComp *const this,
        uint32_t gallery_id)
{
  int v2; // edx
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::shared_ptr<SumoGallery> result; // rax
  int gallery_ida; // [rsp+Ch] [rbp-74h]
  char v8[96]; // [rsp+20h] [rbp-60h] BYREF

  gallery_ida = v2;
  v3 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 19 base_gallery_ptr:84";
  *(_QWORD *)(v3 + 16) = SceneGalleryComp::findGallery<SumoGallery>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  SceneGalleryComp::findGallery((SceneGalleryComp *const)(v3 + 32), *(__int64 *)&gallery_id, gallery_ida);
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, *(_QWORD *)&gallery_id);
  std::dynamic_pointer_cast<SumoGallery,BaseGallery>((const std::shared_ptr<BaseGallery> *)this);
  std::shared_ptr<BaseGallery>::~shared_ptr((std::shared_ptr<BaseGallery> *const)(v3 + 32));
  if ( v8 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<SumoGallery,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 89: range 000000001691F712-000000001691F9BB
bool __cdecl SceneGalleryComp::isPlayerInStartedGallery<BrickBreakerGallery>(
        const SceneGalleryComp *const this,
        uint32_t uid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  const std::pair<unsigned int const,std::shared_ptr<BaseGallery> > *v5; // rax
  BaseGallery *v6; // rax
  BaseGallery *v7; // rax
  int v9; // r14d
  int v10; // r14d
  bool result; // al
  bool v12; // [rsp+3h] [rbp-CDh]
  std::map<unsigned int,std::shared_ptr<BaseGallery>>::const_iterator __for_begin; // [rsp+18h] [rbp-B8h] BYREF
  std::map<unsigned int,std::shared_ptr<BaseGallery>>::const_iterator __for_end; // [rsp+20h] [rbp-B0h] BYREF
  const std::map<unsigned int,std::shared_ptr<BaseGallery>> *__for_range; // [rsp+28h] [rbp-A8h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<BaseGallery> > >::type *id; // [rsp+30h] [rbp-A0h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseGallery> > >::type *base_ptr; // [rsp+38h] [rbp-98h]
  std::pair<unsigned int const,std::shared_ptr<BaseGallery> > v18; // [rsp+40h] [rbp-90h] BYREF
  char v19[112]; // [rsp+60h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 gallery_ptr:97";
  *(_QWORD *)(v2 + 16) = SceneGalleryComp::isPlayerInStartedGallery<BrickBreakerGallery>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  __for_range = &this->scene_gallery_map_;
  __for_begin._M_node = std::map<unsigned int,std::shared_ptr<BaseGallery>>::begin(&this->scene_gallery_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::shared_ptr<BaseGallery>>::end(&this->scene_gallery_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v5 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<BaseGallery>>>::operator*(&__for_begin);
    std::pair<unsigned int const,std::shared_ptr<BaseGallery>>::pair(&v18, v5);
    id = std::get<0ul,unsigned int const,std::shared_ptr<BaseGallery>>(&v18);
    base_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseGallery> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<BaseGallery>>(&v18);
    if ( std::operator==<BaseGallery>(base_ptr, 0LL)
      || (v6 = std::__shared_ptr_access<BaseGallery,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseGallery,(__gnu_cxx::_Lock_policy)2,false,false> *const)base_ptr),
          !BaseGallery::isStart(v6))
      || (v7 = std::__shared_ptr_access<BaseGallery,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseGallery,(__gnu_cxx::_Lock_policy)2,false,false> *const)base_ptr),
          !BaseGallery::isPlayerInGallery(v7, uid)) )
    {
      v9 = 0;
    }
    else
    {
      std::dynamic_pointer_cast<BrickBreakerGallery,BaseGallery>((const std::shared_ptr<BaseGallery> *)(v2 + 32));
      if ( std::operator!=<BrickBreakerGallery>((const std::shared_ptr<BrickBreakerGallery> *)(v2 + 32), 0LL) )
      {
        v12 = 1;
        v10 = 0;
      }
      else
      {
        v10 = 1;
      }
      std::shared_ptr<BrickBreakerGallery>::~shared_ptr((std::shared_ptr<BrickBreakerGallery> *const)(v2 + 32));
      if ( v10 == 1 )
        v9 = 2;
      else
        v9 = 1;
    }
    std::pair<unsigned int const,std::shared_ptr<BaseGallery>>::~pair(&v18);
    if ( v9 && v9 != 2 )
      goto LABEL_23;
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<BaseGallery>>>::operator++(&__for_begin);
  }
  v12 = 0;
LABEL_23:
  result = v12;
  if ( v19 == (char *)v2 )
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

// Line 89: range 0000000017A173E2-0000000017A1768B
bool __cdecl SceneGalleryComp::isPlayerInStartedGallery<CoinCollectGallery>(
        const SceneGalleryComp *const this,
        uint32_t uid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  const std::pair<unsigned int const,std::shared_ptr<BaseGallery> > *v5; // rax
  BaseGallery *v6; // rax
  BaseGallery *v7; // rax
  int v9; // r14d
  int v10; // r14d
  bool result; // al
  bool v12; // [rsp+3h] [rbp-CDh]
  std::map<unsigned int,std::shared_ptr<BaseGallery>>::const_iterator __for_begin; // [rsp+18h] [rbp-B8h] BYREF
  std::map<unsigned int,std::shared_ptr<BaseGallery>>::const_iterator __for_end; // [rsp+20h] [rbp-B0h] BYREF
  const std::map<unsigned int,std::shared_ptr<BaseGallery>> *__for_range; // [rsp+28h] [rbp-A8h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<BaseGallery> > >::type *id; // [rsp+30h] [rbp-A0h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseGallery> > >::type *base_ptr; // [rsp+38h] [rbp-98h]
  std::pair<unsigned int const,std::shared_ptr<BaseGallery> > v18; // [rsp+40h] [rbp-90h] BYREF
  char v19[112]; // [rsp+60h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 gallery_ptr:97";
  *(_QWORD *)(v2 + 16) = SceneGalleryComp::isPlayerInStartedGallery<CoinCollectGallery>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  __for_range = &this->scene_gallery_map_;
  __for_begin._M_node = std::map<unsigned int,std::shared_ptr<BaseGallery>>::begin(&this->scene_gallery_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::shared_ptr<BaseGallery>>::end(&this->scene_gallery_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v5 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<BaseGallery>>>::operator*(&__for_begin);
    std::pair<unsigned int const,std::shared_ptr<BaseGallery>>::pair(&v18, v5);
    id = std::get<0ul,unsigned int const,std::shared_ptr<BaseGallery>>(&v18);
    base_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseGallery> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<BaseGallery>>(&v18);
    if ( std::operator==<BaseGallery>(base_ptr, 0LL)
      || (v6 = std::__shared_ptr_access<BaseGallery,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseGallery,(__gnu_cxx::_Lock_policy)2,false,false> *const)base_ptr),
          !BaseGallery::isStart(v6))
      || (v7 = std::__shared_ptr_access<BaseGallery,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseGallery,(__gnu_cxx::_Lock_policy)2,false,false> *const)base_ptr),
          !BaseGallery::isPlayerInGallery(v7, uid)) )
    {
      v9 = 0;
    }
    else
    {
      std::dynamic_pointer_cast<CoinCollectGallery,BaseGallery>((const std::shared_ptr<BaseGallery> *)(v2 + 32));
      if ( std::operator!=<CoinCollectGallery>((const std::shared_ptr<CoinCollectGallery> *)(v2 + 32), 0LL) )
      {
        v12 = 1;
        v10 = 0;
      }
      else
      {
        v10 = 1;
      }
      std::shared_ptr<CoinCollectGallery>::~shared_ptr((std::shared_ptr<CoinCollectGallery> *const)(v2 + 32));
      if ( v10 == 1 )
        v9 = 2;
      else
        v9 = 1;
    }
    std::pair<unsigned int const,std::shared_ptr<BaseGallery>>::~pair(&v18);
    if ( v9 && v9 != 2 )
      goto LABEL_23;
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<BaseGallery>>>::operator++(&__for_begin);
  }
  v12 = 0;
LABEL_23:
  result = v12;
  if ( v19 == (char *)v2 )
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

// Line 89: range 000000001724B26A-000000001724B513
bool __cdecl SceneGalleryComp::isPlayerInStartedGallery<IrodoriMasterGallery>(
        const SceneGalleryComp *const this,
        uint32_t uid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  const std::pair<unsigned int const,std::shared_ptr<BaseGallery> > *v5; // rax
  BaseGallery *v6; // rax
  BaseGallery *v7; // rax
  int v9; // r14d
  int v10; // r14d
  bool result; // al
  bool v12; // [rsp+3h] [rbp-CDh]
  std::map<unsigned int,std::shared_ptr<BaseGallery>>::const_iterator __for_begin; // [rsp+18h] [rbp-B8h] BYREF
  std::map<unsigned int,std::shared_ptr<BaseGallery>>::const_iterator __for_end; // [rsp+20h] [rbp-B0h] BYREF
  const std::map<unsigned int,std::shared_ptr<BaseGallery>> *__for_range; // [rsp+28h] [rbp-A8h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<BaseGallery> > >::type *id; // [rsp+30h] [rbp-A0h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseGallery> > >::type *base_ptr; // [rsp+38h] [rbp-98h]
  std::pair<unsigned int const,std::shared_ptr<BaseGallery> > v18; // [rsp+40h] [rbp-90h] BYREF
  char v19[112]; // [rsp+60h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 gallery_ptr:97";
  *(_QWORD *)(v2 + 16) = SceneGalleryComp::isPlayerInStartedGallery<IrodoriMasterGallery>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  __for_range = &this->scene_gallery_map_;
  __for_begin._M_node = std::map<unsigned int,std::shared_ptr<BaseGallery>>::begin(&this->scene_gallery_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::shared_ptr<BaseGallery>>::end(&this->scene_gallery_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v5 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<BaseGallery>>>::operator*(&__for_begin);
    std::pair<unsigned int const,std::shared_ptr<BaseGallery>>::pair(&v18, v5);
    id = std::get<0ul,unsigned int const,std::shared_ptr<BaseGallery>>(&v18);
    base_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseGallery> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<BaseGallery>>(&v18);
    if ( std::operator==<BaseGallery>(base_ptr, 0LL)
      || (v6 = std::__shared_ptr_access<BaseGallery,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseGallery,(__gnu_cxx::_Lock_policy)2,false,false> *const)base_ptr),
          !BaseGallery::isStart(v6))
      || (v7 = std::__shared_ptr_access<BaseGallery,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseGallery,(__gnu_cxx::_Lock_policy)2,false,false> *const)base_ptr),
          !BaseGallery::isPlayerInGallery(v7, uid)) )
    {
      v9 = 0;
    }
    else
    {
      std::dynamic_pointer_cast<IrodoriMasterGallery,BaseGallery>((const std::shared_ptr<BaseGallery> *)(v2 + 32));
      if ( std::operator!=<IrodoriMasterGallery>((const std::shared_ptr<IrodoriMasterGallery> *)(v2 + 32), 0LL) )
      {
        v12 = 1;
        v10 = 0;
      }
      else
      {
        v10 = 1;
      }
      std::shared_ptr<IrodoriMasterGallery>::~shared_ptr((std::shared_ptr<IrodoriMasterGallery> *const)(v2 + 32));
      if ( v10 == 1 )
        v9 = 2;
      else
        v9 = 1;
    }
    std::pair<unsigned int const,std::shared_ptr<BaseGallery>>::~pair(&v18);
    if ( v9 && v9 != 2 )
      goto LABEL_23;
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<BaseGallery>>>::operator++(&__for_begin);
  }
  v12 = 0;
LABEL_23:
  result = v12;
  if ( v19 == (char *)v2 )
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

// Line 89: range 0000000017D9072E-0000000017D909D7
bool __cdecl SceneGalleryComp::isPlayerInStartedGallery<MuqadasPotionGallery>(
        const SceneGalleryComp *const this,
        uint32_t uid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  const std::pair<unsigned int const,std::shared_ptr<BaseGallery> > *v5; // rax
  BaseGallery *v6; // rax
  BaseGallery *v7; // rax
  int v9; // r14d
  int v10; // r14d
  bool result; // al
  bool v12; // [rsp+3h] [rbp-CDh]
  std::map<unsigned int,std::shared_ptr<BaseGallery>>::const_iterator __for_begin; // [rsp+18h] [rbp-B8h] BYREF
  std::map<unsigned int,std::shared_ptr<BaseGallery>>::const_iterator __for_end; // [rsp+20h] [rbp-B0h] BYREF
  const std::map<unsigned int,std::shared_ptr<BaseGallery>> *__for_range; // [rsp+28h] [rbp-A8h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<BaseGallery> > >::type *id; // [rsp+30h] [rbp-A0h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseGallery> > >::type *base_ptr; // [rsp+38h] [rbp-98h]
  std::pair<unsigned int const,std::shared_ptr<BaseGallery> > v18; // [rsp+40h] [rbp-90h] BYREF
  char v19[112]; // [rsp+60h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 gallery_ptr:97";
  *(_QWORD *)(v2 + 16) = SceneGalleryComp::isPlayerInStartedGallery<MuqadasPotionGallery>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  __for_range = &this->scene_gallery_map_;
  __for_begin._M_node = std::map<unsigned int,std::shared_ptr<BaseGallery>>::begin(&this->scene_gallery_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::shared_ptr<BaseGallery>>::end(&this->scene_gallery_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v5 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<BaseGallery>>>::operator*(&__for_begin);
    std::pair<unsigned int const,std::shared_ptr<BaseGallery>>::pair(&v18, v5);
    id = std::get<0ul,unsigned int const,std::shared_ptr<BaseGallery>>(&v18);
    base_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseGallery> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<BaseGallery>>(&v18);
    if ( std::operator==<BaseGallery>(base_ptr, 0LL)
      || (v6 = std::__shared_ptr_access<BaseGallery,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseGallery,(__gnu_cxx::_Lock_policy)2,false,false> *const)base_ptr),
          !BaseGallery::isStart(v6))
      || (v7 = std::__shared_ptr_access<BaseGallery,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseGallery,(__gnu_cxx::_Lock_policy)2,false,false> *const)base_ptr),
          !BaseGallery::isPlayerInGallery(v7, uid)) )
    {
      v9 = 0;
    }
    else
    {
      std::dynamic_pointer_cast<MuqadasPotionGallery,BaseGallery>((const std::shared_ptr<BaseGallery> *)(v2 + 32));
      if ( std::operator!=<MuqadasPotionGallery>((const std::shared_ptr<MuqadasPotionGallery> *)(v2 + 32), 0LL) )
      {
        v12 = 1;
        v10 = 0;
      }
      else
      {
        v10 = 1;
      }
      std::shared_ptr<MuqadasPotionGallery>::~shared_ptr((std::shared_ptr<MuqadasPotionGallery> *const)(v2 + 32));
      if ( v10 == 1 )
        v9 = 2;
      else
        v9 = 1;
    }
    std::pair<unsigned int const,std::shared_ptr<BaseGallery>>::~pair(&v18);
    if ( v9 && v9 != 2 )
      goto LABEL_23;
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<BaseGallery>>>::operator++(&__for_begin);
  }
  v12 = 0;
LABEL_23:
  result = v12;
  if ( v19 == (char *)v2 )
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

// Line 89: range 000000001724B514-000000001724B7BD
bool __cdecl SceneGalleryComp::isPlayerInStartedGallery<VintageHuntingGallery>(
        const SceneGalleryComp *const this,
        uint32_t uid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  const std::pair<unsigned int const,std::shared_ptr<BaseGallery> > *v5; // rax
  BaseGallery *v6; // rax
  BaseGallery *v7; // rax
  int v9; // r14d
  int v10; // r14d
  bool result; // al
  bool v12; // [rsp+3h] [rbp-CDh]
  std::map<unsigned int,std::shared_ptr<BaseGallery>>::const_iterator __for_begin; // [rsp+18h] [rbp-B8h] BYREF
  std::map<unsigned int,std::shared_ptr<BaseGallery>>::const_iterator __for_end; // [rsp+20h] [rbp-B0h] BYREF
  const std::map<unsigned int,std::shared_ptr<BaseGallery>> *__for_range; // [rsp+28h] [rbp-A8h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<BaseGallery> > >::type *id; // [rsp+30h] [rbp-A0h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseGallery> > >::type *base_ptr; // [rsp+38h] [rbp-98h]
  std::pair<unsigned int const,std::shared_ptr<BaseGallery> > v18; // [rsp+40h] [rbp-90h] BYREF
  char v19[112]; // [rsp+60h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 gallery_ptr:97";
  *(_QWORD *)(v2 + 16) = SceneGalleryComp::isPlayerInStartedGallery<VintageHuntingGallery>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  __for_range = &this->scene_gallery_map_;
  __for_begin._M_node = std::map<unsigned int,std::shared_ptr<BaseGallery>>::begin(&this->scene_gallery_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::shared_ptr<BaseGallery>>::end(&this->scene_gallery_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v5 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<BaseGallery>>>::operator*(&__for_begin);
    std::pair<unsigned int const,std::shared_ptr<BaseGallery>>::pair(&v18, v5);
    id = std::get<0ul,unsigned int const,std::shared_ptr<BaseGallery>>(&v18);
    base_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseGallery> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<BaseGallery>>(&v18);
    if ( std::operator==<BaseGallery>(base_ptr, 0LL)
      || (v6 = std::__shared_ptr_access<BaseGallery,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseGallery,(__gnu_cxx::_Lock_policy)2,false,false> *const)base_ptr),
          !BaseGallery::isStart(v6))
      || (v7 = std::__shared_ptr_access<BaseGallery,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseGallery,(__gnu_cxx::_Lock_policy)2,false,false> *const)base_ptr),
          !BaseGallery::isPlayerInGallery(v7, uid)) )
    {
      v9 = 0;
    }
    else
    {
      std::dynamic_pointer_cast<VintageHuntingGallery,BaseGallery>((const std::shared_ptr<BaseGallery> *)(v2 + 32));
      if ( std::operator!=<VintageHuntingGallery>((const std::shared_ptr<VintageHuntingGallery> *)(v2 + 32), 0LL) )
      {
        v12 = 1;
        v10 = 0;
      }
      else
      {
        v10 = 1;
      }
      std::shared_ptr<VintageHuntingGallery>::~shared_ptr((std::shared_ptr<VintageHuntingGallery> *const)(v2 + 32));
      if ( v10 == 1 )
        v9 = 2;
      else
        v9 = 1;
    }
    std::pair<unsigned int const,std::shared_ptr<BaseGallery>>::~pair(&v18);
    if ( v9 && v9 != 2 )
      goto LABEL_23;
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<BaseGallery>>>::operator++(&__for_begin);
  }
  v12 = 0;
LABEL_23:
  result = v12;
  if ( v19 == (char *)v2 )
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
