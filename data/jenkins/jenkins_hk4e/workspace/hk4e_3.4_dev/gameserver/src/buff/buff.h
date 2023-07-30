// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/buff/buff.h

// Line 21: range 000000001591C890-000000001591C8BE
void __cdecl Buff::~Buff(Buff *const this)
{
  std::set<unsigned long>::~set(&this->onadded_avatars_set_);
  std::map<unsigned long,unsigned int>::~map(&this->modifier_id_map_);
};

// Line 24: range 00000000155B5A0E-00000000155B5C6B
void __cdecl Buff::Buff(Buff *const this, uint32_t buff_id)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->buff_id_ = buff_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->buff_uid_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->buff_uid_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->buff_uid_);
  }
  this->buff_uid_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->buff_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->buff_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->buff_type_);
  }
  this->buff_type_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->instanced_modifier_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->instanced_modifier_id_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->instanced_modifier_id_);
  }
  this->instanced_modifier_id_ = 0;
  if ( *(char *)(((unsigned __int64)&this->is_persistent_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_persistent_);
  this->is_persistent_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->expire_time_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->expire_time_ms_);
  this->expire_time_ms_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->left_time_ms_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->left_time_ms_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->left_time_ms_);
  }
  this->left_time_ms_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->from_team_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 36) & 7) >= *(_BYTE *)(((unsigned __int64)&this->from_team_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->from_team_);
  }
  this->from_team_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_permanent_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 37) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_permanent_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_permanent_);
  }
  this->is_permanent_ = 0;
  std::map<unsigned long,unsigned int>::map(&this->modifier_id_map_);
  std::set<unsigned long>::set(&this->onadded_avatars_set_);
};

// Line 25: range 0000000017209136-000000001720939B
void __cdecl Buff::Buff(Buff *const this, uint32_t buff_id, bool from_team)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->buff_id_ = buff_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->buff_uid_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->buff_uid_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->buff_uid_);
  }
  this->buff_uid_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->buff_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->buff_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->buff_type_);
  }
  this->buff_type_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->instanced_modifier_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->instanced_modifier_id_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->instanced_modifier_id_);
  }
  this->instanced_modifier_id_ = 0;
  if ( *(char *)(((unsigned __int64)&this->is_persistent_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_persistent_);
  this->is_persistent_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->expire_time_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->expire_time_ms_);
  this->expire_time_ms_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->left_time_ms_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->left_time_ms_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->left_time_ms_);
  }
  this->left_time_ms_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->from_team_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 36) & 7) >= *(_BYTE *)(((unsigned __int64)&this->from_team_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->from_team_);
  }
  this->from_team_ = from_team;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_permanent_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 37) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_permanent_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_permanent_);
  }
  this->is_permanent_ = 0;
  std::map<unsigned long,unsigned int>::map(&this->modifier_id_map_);
  std::set<unsigned long>::set(&this->onadded_avatars_set_);
};

// Line 60: range 00000000155B5C6C-00000000155B5CB9
bool __cdecl Buff::isFromTeam(const Buff *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->from_team_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 36) & 7) >= *(_BYTE *)(((unsigned __int64)&this->from_team_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->from_team_);
  }
  return this->from_team_;
};

// Line 63: range 00000000155B5CBA-00000000155B5DD5
void __fastcall Buff::setModifierIdByAvatarGuid(Buff *const this, uint64_t avatar_guid, uint32_t instanced_modifier_id)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::map<long unsigned int,unsigned int>::mapped_type *v6; // rax
  _DWORD *v7; // rdx
  char v9[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 8 14 avatar_guid:63";
  *(_QWORD *)(v3 + 16) = Buff::setModifierIdByAvatarGuid;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  *(_QWORD *)(v3 + 32) = avatar_guid;
  v6 = std::map<unsigned long,unsigned int>::operator[](
         &this->modifier_id_map_,
         (const std::map<long unsigned int,unsigned int>::key_type *)(v3 + 32));
  v7 = v6;
  if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v6);
  }
  *v7 = instanced_modifier_id;
  if ( v9 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 64: range 00000000155B5DD6-00000000155B5EAD
uint32_t __fastcall Buff::getModifierIdByAvatarGuid(const Buff *const this, uint64_t avatar_guid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  uint32_t result; // eax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 14 avatar_guid:64";
  *(_QWORD *)(v2 + 16) = Buff::getModifierIdByAvatarGuid;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  *(_QWORD *)(v2 + 32) = avatar_guid;
  result = common::tools::MiscUtils::findMapWithDefaultValue<std::map<unsigned long,unsigned int>>(
             &this->modifier_id_map_,
             (const std::map<long unsigned int,unsigned int>::key_type *)(v2 + 32),
             0);
  if ( v6 == (char *)v2 )
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

// Line 76: range 00000000155B5EAE-00000000155B5EF0
uint32_t __cdecl Buff::getBuffId(const Buff *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  return this->buff_id_;
};

// Line 77: range 00000000155B5EF2-00000000155B5F41
uint32_t __cdecl Buff::getBuffUid(const Buff *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->buff_uid_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->buff_uid_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->buff_uid_);
  }
  return this->buff_uid_;
};

// Line 77: range 00000000155B5F42-00000000155B5F98
void __cdecl Buff::setBuffUid(Buff *const this, uint32_t buff_uid__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->buff_uid_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->buff_uid_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->buff_uid_);
  }
  this->buff_uid_ = buff_uid__out;
};

// Line 78: range 00000000155B5F9A-00000000155B5FE1
uint32_t __cdecl Buff::getBuffType(const Buff *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->buff_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->buff_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->buff_type_);
  }
  return this->buff_type_;
};

// Line 78: range 00000000155B5FE2-00000000155B6030
void __cdecl Buff::setBuffType(Buff *const this, uint32_t buff_type__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->buff_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->buff_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->buff_type_);
  }
  this->buff_type_ = buff_type__out;
};

// Line 79: range 00000000155B6032-00000000155B6081
uint32_t __cdecl Buff::getInstancedModifierId(const Buff *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->instanced_modifier_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->instanced_modifier_id_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->instanced_modifier_id_);
  }
  return this->instanced_modifier_id_;
};

// Line 79: range 00000000155B6082-00000000155B60D8
void __cdecl Buff::setInstancedModifierId(Buff *const this, uint32_t instanced_modifier_id__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->instanced_modifier_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->instanced_modifier_id_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->instanced_modifier_id_);
  }
  this->instanced_modifier_id_ = instanced_modifier_id__out;
};

// Line 80: range 00000000155B60DA-00000000155B6122
bool __cdecl Buff::getIsPersistent(const Buff *const this)
{
  if ( *(char *)(((unsigned __int64)&this->is_persistent_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_persistent_);
  return this->is_persistent_;
};

// Line 81: range 00000000155B6124-00000000155B615E
uint64_t __cdecl Buff::getExpireTimeMs(const Buff *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->expire_time_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->expire_time_ms_);
  return this->expire_time_ms_;
};

// Line 82: range 00000000155B6160-00000000155B61A7
uint32_t __cdecl Buff::getLeftTimeMs(const Buff *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->left_time_ms_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->left_time_ms_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->left_time_ms_);
  }
  return this->left_time_ms_;
};

// Line 83: range 00000000155B61A8-00000000155B61F5
bool __cdecl Buff::getFromTeam(const Buff *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->from_team_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 36) & 7) >= *(_BYTE *)(((unsigned __int64)&this->from_team_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->from_team_);
  }
  return this->from_team_;
};

// Line 84: range 00000000155B61F6-00000000155B6243
bool __cdecl Buff::getIsPermanent(const Buff *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_permanent_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 37) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_permanent_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_permanent_);
  }
  return this->is_permanent_;
};
