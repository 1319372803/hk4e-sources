// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/avatar/trial_avatar.h

// Line 18: range 000000001635AD7C-000000001635ADDB
void __cdecl TrialAvatar::~TrialAvatar(TrialAvatar *const this)
{
  __int64 v1; // rsi
  __int64 *v2; // rdx

  v2 = &`vtable for'TrialAvatar + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  *(_QWORD *)this->baseclass_0 = v2;
  proto::TrialAvatarGrantRecordBin::~TrialAvatarGrantRecordBin(&this->grant_record_bin_);
  Avatar::~Avatar(this);
};

// Line 18: range 000000001635ADDC-000000001635AE06
void __cdecl TrialAvatar::~TrialAvatar(TrialAvatar *const this)
{
  TrialAvatar::~TrialAvatar(this);
  operator delete(this, 0xB80uLL);
};

// Line 21: range 0000000017466828-00000000174669DC
void __fastcall ZN11TrialAvatarCI26AvatarEj(TrialAvatar *const this, int a2)
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
  *(_QWORD *)(v2 + 16) = ZN11TrialAvatarCI26AvatarEj;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = a2;
  v5 = *(unsigned int *)(v2 + 32);
  Avatar::Avatar(this, v5);
  v6 = &`vtable for'TrialAvatar + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v5);
  *(_QWORD *)this->baseclass_0 = v6;
  if ( *(_BYTE *)(((unsigned __int64)&this->trial_avatar_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->trial_avatar_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->trial_avatar_id_, v5, &this->trial_avatar_id_);
  }
  this->trial_avatar_id_ = 0;
  v7 = ((_BYTE)this + 92) & 7;
  v8 = (*(_BYTE *)(((unsigned __int64)&this->is_inherit_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&this->is_inherit_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_store1(&this->is_inherit_, v7, v8);
  this->is_inherit_ = 0;
  proto::TrialAvatarGrantRecordBin::TrialAvatarGrantRecordBin(&this->grant_record_bin_);
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

// Line 41: range 000000001461EA42-000000001461EA55
const proto::TrialAvatarGrantRecordBin *__cdecl TrialAvatar::getGrantRecordBin(const TrialAvatar *const this)
{
  return &this->grant_record_bin_;
};

// Line 51: range 0000000014405E56-0000000014405EA2
uint32_t __cdecl TrialAvatar::getTrialAvatarId(const TrialAvatar *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->trial_avatar_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->trial_avatar_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->trial_avatar_id_);
  }
  return this->trial_avatar_id_;
};

// Line 51: range 000000001721555C-00000000172155AF
// local variable allocation has failed, the output may be wrong!
void __cdecl TrialAvatar::setTrialAvatarId(TrialAvatar *const this, uint32_t trial_avatar_id__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->trial_avatar_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->trial_avatar_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->trial_avatar_id_, *(_QWORD *)&trial_avatar_id__out, &this->trial_avatar_id_);
  }
  this->trial_avatar_id_ = trial_avatar_id__out;
};
