// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/talent/base_talent.h

// Line 21: range 00000000131E7940-00000000131E79A1
void __cdecl BaseTalent::~BaseTalent(BaseTalent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'BaseTalent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseTalent = v2;
  std::vector<std::shared_ptr<BaseTalentMixin>>::~vector(&this->mixin_vec_);
  std::enable_shared_from_this<BaseTalent>::~enable_shared_from_this(&this->std::enable_shared_from_this<BaseTalent>);
};

// Line 24: range 00000000131CDC8A-00000000131CDE65
void __cdecl BaseTalent::BaseTalent(BaseTalent *const this, Avatar *avatar, uint32_t id)
{
  int (**v3)(...); // rdx
  __int64 v4; // rsi
  bool v5; // dl
  __int64 v6; // rsi
  bool v7; // dl

  std::enable_shared_from_this<BaseTalent>::enable_shared_from_this(&this->std::enable_shared_from_this<BaseTalent>);
  v3 = (int (**)(...))(&`vtable for'BaseTalent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, avatar);
  this->_vptr_BaseTalent = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->avatar_, avatar);
  this->avatar_ = avatar;
  std::vector<std::shared_ptr<BaseTalentMixin>>::vector(&this->mixin_vec_);
  if ( *(_BYTE *)(((unsigned __int64)&this->id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id_, avatar, (_BYTE)this + 56);
  }
  this->id_ = id;
  v4 = (((_BYTE)this + 60) & 7u) + 3;
  v5 = *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000);
  if ( v5 )
    __asan_report_store4(&this->group_id_, v4, v5);
  this->group_id_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->level_, v4, (_BYTE)this + 64);
  }
  this->level_ = 0;
  v6 = (((_BYTE)this + 68) & 7u) + 3;
  v7 = *(_BYTE *)(((unsigned __int64)&this->extra_level_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->extra_level_ >> 3) + 0x7FFF8000);
  if ( v7 )
    __asan_report_store4(&this->extra_level_, v6, v7);
  this->extra_level_ = 0;
  if ( *(char *)(((unsigned __int64)&this->is_enabled_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_enabled_, v6, &this->is_enabled_);
  this->is_enabled_ = 0;
};

// Line 33: range 00000000131CDEA2-00000000131CDECC
BaseTalentPtr __cdecl BaseTalent::clone(const BaseTalent *const this, Avatar *avatar)
{
  BaseTalentPtr result; // rax

  std::shared_ptr<BaseTalent>::shared_ptr((std::shared_ptr<BaseTalent> *const)this, 0LL);
  result._M_ptr = (std::__shared_ptr<BaseTalent,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 48: range 00000000155C72DC-00000000155C72ED
const std::vector<std::shared_ptr<BaseTalentMixin>> *__cdecl BaseTalent::getMixinVec(const BaseTalent *const this)
{
  return &this->mixin_vec_;
};

// Line 62: range 00000000131CDECE-00000000131CDEE0
bool __cdecl BaseTalent::isValidOnAvatar(const BaseTalent *const this, Avatar *avatar)
{
  return 0;
};

// Line 65: range 00000000131CDEE2-00000000131CDEF0
bool __cdecl BaseTalent::isTeamTalent(const BaseTalent *const this)
{
  return 0;
};

// Line 76: range 00000000131CDEF2-00000000131CDF39
uint32_t __cdecl BaseTalent::getId(const BaseTalent *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  return this->id_;
};

// Line 77: range 00000000131CDF3A-00000000131CDF89
uint32_t __cdecl BaseTalent::getGroupId(const BaseTalent *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  return this->group_id_;
};

// Line 78: range 00000000131CDF8A-00000000131CDFD1
uint32_t __cdecl BaseTalent::getLevel(const BaseTalent *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  return this->level_;
};

// Line 79: range 00000000131CDFD2-00000000131CE021
uint32_t __cdecl BaseTalent::getExtraLevel(const BaseTalent *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->extra_level_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->extra_level_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  return this->extra_level_;
};

// Line 79: range 00000000131CE022-00000000131CE078
void __cdecl BaseTalent::setExtraLevel(BaseTalent *const this, uint32_t extra_level__out)
{
  bool v2; // dl

  v2 = *(_BYTE *)(((unsigned __int64)&this->extra_level_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->extra_level_ >> 3) + 0x7FFF8000);
  if ( v2 )
    __asan_report_store4(&this->extra_level_, (((_BYTE)this + 68) & 7u) + 3, v2);
  this->extra_level_ = extra_level__out;
};

// Line 80: range 00000000149F1A98-00000000149F1AE0
bool __cdecl BaseTalent::getIsEnabled(const BaseTalent *const this)
{
  if ( *(char *)(((unsigned __int64)&this->is_enabled_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_enabled_);
  return this->is_enabled_;
};
