// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/home/home_group/home_group_record.h

// Line 22: range 00000000146BAA92-00000000146BACC6
HomeGroupPlayerInfo *__cdecl HomeGroupPlayerInfo::operator=(HomeGroupPlayerInfo *const this, HomeGroupPlayerInfo *a2)
{
  uint32_t uid; // ecx
  uint32_t player_level; // ecx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  uid = a2->uid;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->uid = uid;
  std::string::operator=(&this->nickname, &a2->nickname);
  if ( *(_BYTE *)(((unsigned __int64)&a2->player_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->player_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  player_level = a2->player_level;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->player_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->player_level);
  }
  this->player_level = player_level;
  if ( (((unsigned __int8)this + 44) & 7) >= *(_BYTE *)(((unsigned __int64)&this->profile_picture >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->profile_picture >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->profile_picture.costume_id + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 51) & 7) >= *(_BYTE *)((((unsigned __int64)&this->profile_picture.costume_id + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->profile_picture, 8LL);
  }
  if ( (((unsigned __int8)a2 + 44) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->profile_picture >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->profile_picture >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&a2->profile_picture.costume_id + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 51) & 7) >= *(_BYTE *)((((unsigned __int64)&a2->profile_picture.costume_id + 3) >> 3)
                                                    + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->profile_picture, 8LL);
  }
  this->profile_picture = a2->profile_picture;
  std::string::operator=(&this->online_id, &a2->online_id);
  std::string::operator=(&this->psn_id, &a2->psn_id);
  return this;
};

// Line 22: range 0000000014625824-0000000014625A58
HomeGroupPlayerInfo *__cdecl HomeGroupPlayerInfo::operator=(
        HomeGroupPlayerInfo *const this,
        const HomeGroupPlayerInfo *a2)
{
  uint32_t uid; // ecx
  uint32_t player_level; // ecx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  uid = a2->uid;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->uid = uid;
  std::string::operator=(&this->nickname, &a2->nickname);
  if ( *(_BYTE *)(((unsigned __int64)&a2->player_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->player_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  player_level = a2->player_level;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->player_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->player_level);
  }
  this->player_level = player_level;
  if ( (((unsigned __int8)this + 44) & 7) >= *(_BYTE *)(((unsigned __int64)&this->profile_picture >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->profile_picture >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->profile_picture.costume_id + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 51) & 7) >= *(_BYTE *)((((unsigned __int64)&this->profile_picture.costume_id + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->profile_picture, 8LL);
  }
  if ( (((unsigned __int8)a2 + 44) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->profile_picture >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->profile_picture >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&a2->profile_picture.costume_id + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 51) & 7) >= *(_BYTE *)((((unsigned __int64)&a2->profile_picture.costume_id + 3) >> 3)
                                                    + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->profile_picture, 8LL);
  }
  this->profile_picture = a2->profile_picture;
  std::string::operator=(&this->online_id, &a2->online_id);
  std::string::operator=(&this->psn_id, &a2->psn_id);
  return this;
};

// Line 22: range 000000001462563C-00000000146257E3
void __cdecl HomeGroupPlayerInfo::HomeGroupPlayerInfo(HomeGroupPlayerInfo *const this)
{
  std::allocator<char> __a; // [rsp+1Fh] [rbp-11h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->uid = 0;
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&this->nickname, byte_253893A0, &__a);
  std::allocator<char>::~allocator(&__a);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->player_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->player_level);
  }
  this->player_level = 0;
  ProfilePicture::ProfilePicture(&this->profile_picture);
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&this->online_id, byte_253893A0, &__a);
  std::allocator<char>::~allocator(&__a);
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&this->psn_id, byte_253893A0, &__a);
  std::allocator<char>::~allocator(&__a);
};

// Line 22: range 000000001474048C-00000000147406BD
void __cdecl HomeGroupPlayerInfo::HomeGroupPlayerInfo(HomeGroupPlayerInfo *const this, HomeGroupPlayerInfo *a2)
{
  double v2; // xmm0_8
  uint32_t uid; // ecx
  uint32_t player_level; // ecx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    v2 = __asan_report_load4();
  }
  uid = a2->uid;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->uid = uid;
  std::string::basic_string(&this->nickname, &a2->nickname, v2);
  if ( *(_BYTE *)(((unsigned __int64)&a2->player_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->player_level >> 3) + 0x7FFF8000) <= 3 )
  {
    v2 = __asan_report_load4();
  }
  player_level = a2->player_level;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->player_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->player_level);
  }
  this->player_level = player_level;
  if ( (((unsigned __int8)this + 44) & 7) >= *(_BYTE *)(((unsigned __int64)&this->profile_picture >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->profile_picture >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->profile_picture.costume_id + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 51) & 7) >= *(_BYTE *)((((unsigned __int64)&this->profile_picture.costume_id + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->profile_picture, 8LL);
  }
  if ( (((unsigned __int8)a2 + 44) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->profile_picture >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->profile_picture >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&a2->profile_picture.costume_id + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 51) & 7) >= *(_BYTE *)((((unsigned __int64)&a2->profile_picture.costume_id + 3) >> 3)
                                                    + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->profile_picture, 8LL);
  }
  this->profile_picture = a2->profile_picture;
  std::string::basic_string(&this->online_id, &a2->online_id, v2);
  std::string::basic_string(&this->psn_id, &a2->psn_id, v2);
};

// Line 22: range 00000000147009BC-0000000014700C29
void __cdecl HomeGroupPlayerInfo::HomeGroupPlayerInfo(HomeGroupPlayerInfo *const this, const HomeGroupPlayerInfo *a2)
{
  uint32_t uid; // ecx
  uint32_t player_level; // ecx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  uid = a2->uid;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->uid = uid;
  std::string::basic_string(&this->nickname, &a2->nickname);
  if ( *(_BYTE *)(((unsigned __int64)&a2->player_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->player_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  player_level = a2->player_level;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->player_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->player_level);
  }
  this->player_level = player_level;
  if ( (((unsigned __int8)this + 44) & 7) >= *(_BYTE *)(((unsigned __int64)&this->profile_picture >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->profile_picture >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->profile_picture.costume_id + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 51) & 7) >= *(_BYTE *)((((unsigned __int64)&this->profile_picture.costume_id + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->profile_picture, 8LL);
  }
  if ( (((unsigned __int8)a2 + 44) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->profile_picture >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->profile_picture >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&a2->profile_picture.costume_id + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 51) & 7) >= *(_BYTE *)((((unsigned __int64)&a2->profile_picture.costume_id + 3) >> 3)
                                                    + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->profile_picture, 8LL);
  }
  this->profile_picture = a2->profile_picture;
  std::string::basic_string(&this->online_id, &a2->online_id);
  std::string::basic_string(&this->psn_id, &a2->psn_id);
};

// Line 22: range 00000000146257E4-0000000014625822
void __cdecl HomeGroupPlayerInfo::~HomeGroupPlayerInfo(HomeGroupPlayerInfo *const this)
{
  std::string::~string(&this->psn_id);
  std::string::~string(&this->online_id);
  std::string::~string(&this->nickname);
};

// Line 40: range 0000000014621EEA-0000000014621F2B
void __cdecl BaseHomePlayRankInfo::BaseHomePlayRankInfo(BaseHomePlayRankInfo *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'BaseHomePlayRankInfo + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseHomePlayRankInfo = v1;
};

// Line 40: range 0000000014621EA8-0000000014621EE9
void __cdecl BaseHomePlaySettleInfo::BaseHomePlaySettleInfo(BaseHomePlaySettleInfo *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'BaseHomePlaySettleInfo + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseHomePlaySettleInfo = v1;
};

// Line 41: range 00000000146221B2-00000000146221F3
void __cdecl BaseHomePlaySettleInfo::~BaseHomePlaySettleInfo(BaseHomePlaySettleInfo *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'BaseHomePlaySettleInfo + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseHomePlaySettleInfo = v1;
};

// Line 41: range 00000000146221F4-000000001462221E
void __cdecl BaseHomePlaySettleInfo::~BaseHomePlaySettleInfo(BaseHomePlaySettleInfo *const this)
{
  BaseHomePlaySettleInfo::~BaseHomePlaySettleInfo(this);
  operator delete(this, 8uLL);
};

// Line 49: range 00000000146222F4-000000001462231E
void __cdecl BaseHomePlayRankInfo::~BaseHomePlayRankInfo(BaseHomePlayRankInfo *const this)
{
  BaseHomePlayRankInfo::~BaseHomePlayRankInfo(this);
  operator delete(this, 8uLL);
};

// Line 49: range 00000000146222B2-00000000146222F3
void __cdecl BaseHomePlayRankInfo::~BaseHomePlayRankInfo(BaseHomePlayRankInfo *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'BaseHomePlayRankInfo + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseHomePlayRankInfo = v1;
};

// Line 60: range 0000000014621F2C-0000000014621FBD
void __cdecl BaseHomeGroupRecord::BaseHomeGroupRecord(BaseHomeGroupRecord *const this, uint32_t group_id)
{
  int (**v2)(...); // rdx

  std::enable_shared_from_this<BaseHomeGroupRecord>::enable_shared_from_this(&this->std::enable_shared_from_this<BaseHomeGroupRecord>);
  v2 = (int (**)(...))(&`vtable for'BaseHomeGroupRecord + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseHomeGroupRecord = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->group_id_);
  }
  this->group_id_ = group_id;
};

// Line 61: range 0000000014622470-000000001462249A
void __cdecl BaseHomeGroupRecord::~BaseHomeGroupRecord(BaseHomeGroupRecord *const this)
{
  BaseHomeGroupRecord::~BaseHomeGroupRecord(this);
  operator delete(this, 0x20uLL);
};

// Line 61: range 000000001462241E-000000001462246F
void __cdecl BaseHomeGroupRecord::~BaseHomeGroupRecord(BaseHomeGroupRecord *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'BaseHomeGroupRecord + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseHomeGroupRecord = v1;
  std::enable_shared_from_this<BaseHomeGroupRecord>::~enable_shared_from_this(&this->std::enable_shared_from_this<BaseHomeGroupRecord>);
};

// Line 68: range 0000000014621FBE-0000000014622005
uint32_t __cdecl BaseHomeGroupRecord::getGroupId(const BaseHomeGroupRecord *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  return this->group_id_;
};
