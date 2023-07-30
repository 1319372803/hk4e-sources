// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/avatar/formal_avatar.h

// Line 32: range 000000001635AF76-000000001635AFE7
void __cdecl FormalAvatar::~FormalAvatar(FormalAvatar *const this)
{
  __int64 v1; // rsi
  __int64 *v2; // rdx

  v2 = &`vtable for'FormalAvatar + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  *(_QWORD *)this->baseclass_0 = v2;
  std::vector<unsigned int>::~vector(&this->taken_promote_reward_level_vec_);
  EcsBase<FormalAvatar,FormalAvatarCompBase,3u>::~EcsBase(&this->EcsBase<FormalAvatar,FormalAvatarCompBase,3>);
  Avatar::~Avatar(this);
};

// Line 32: range 000000001635AFE8-000000001635B012
void __cdecl FormalAvatar::~FormalAvatar(FormalAvatar *const this)
{
  FormalAvatar::~FormalAvatar(this);
  operator delete(this, 0xBB0uLL);
};

// Line 35: range 000000001746634A-0000000017466557
void __fastcall ZN12FormalAvatarCI26AvatarEj(FormalAvatar *const this, int a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  __int64 v5; // rsi
  __int64 *v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rdx
  char v9[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ZN12FormalAvatarCI26AvatarEj;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = a2;
  v5 = *(unsigned int *)(v2 + 32);
  Avatar::Avatar(this, v5);
  EcsBase<FormalAvatar,FormalAvatarCompBase,3u>::EcsBase(&this->EcsBase<FormalAvatar,FormalAvatarCompBase,3>);
  v6 = &`vtable for'FormalAvatar + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v5);
  *(_QWORD *)this->baseclass_0 = v6;
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_repeat_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->avatar_repeat_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->avatar_repeat_count_, v5, &this->avatar_repeat_count_);
  }
  this->avatar_repeat_count_ = 0;
  v7 = (((_BYTE)this - 116) & 7u) + 3;
  v8 = (*(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_store4(&this->exp_, v7, v8);
  this->exp_ = 0;
  if ( *(char *)(((unsigned __int64)&this->is_focus_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_focus_, v7, &this->is_focus_);
  this->is_focus_ = 0;
  std::vector<unsigned int>::vector(&this->taken_promote_reward_level_vec_);
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 76: range 00000000131D9BB4-00000000131D9C01
bool __cdecl FormalAvatar::isFocus(const FormalAvatar *const this)
{
  if ( *(char *)(((unsigned __int64)&this->is_focus_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_focus_);
  return this->is_focus_;
};

// Line 77: range 00000000131D9C02-00000000131D9C57
// local variable allocation has failed, the output may be wrong!
void __cdecl FormalAvatar::setFocus(FormalAvatar *const this, bool is_focus)
{
  if ( *(char *)(((unsigned __int64)&this->is_focus_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_focus_, is_focus, &this->is_focus_);
  this->is_focus_ = is_focus;
};

// Line 136: range 0000000013EB9770-0000000013EB97BC
uint32_t __cdecl FormalAvatar::getAvatarRepeatCount(const FormalAvatar *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_repeat_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->avatar_repeat_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->avatar_repeat_count_);
  }
  return this->avatar_repeat_count_;
};

// Line 136: range 0000000017D6905E-0000000017D690B1
// local variable allocation has failed, the output may be wrong!
void __cdecl FormalAvatar::setAvatarRepeatCount(FormalAvatar *const this, uint32_t avatar_repeat_count__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_repeat_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->avatar_repeat_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->avatar_repeat_count_, *(_QWORD *)&avatar_repeat_count__out, &this->avatar_repeat_count_);
  }
  this->avatar_repeat_count_ = avatar_repeat_count__out;
};
