// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/home/home_group/racing_home_group_record.h

// Line 19: range 0000000014838304-000000001483832E
void __cdecl RacingHomePlaySettleInfo::~RacingHomePlaySettleInfo(RacingHomePlaySettleInfo *const this)
{
  RacingHomePlaySettleInfo::~RacingHomePlaySettleInfo(this);
  operator delete(this, 0x28uLL);
};

// Line 19: range 00000000148382A6-0000000014838303
void __cdecl RacingHomePlaySettleInfo::~RacingHomePlaySettleInfo(RacingHomePlaySettleInfo *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'RacingHomePlaySettleInfo + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseHomePlaySettleInfo = v1;
  proto::RacingGallerySettleInfo::~RacingGallerySettleInfo(&this->settle_info);
  BaseHomePlaySettleInfo::~BaseHomePlaySettleInfo(this);
};

// Line 22: range 0000000014622220-00000000146222A0
void __cdecl RacingHomePlaySettleInfo::RacingHomePlaySettleInfo(RacingHomePlaySettleInfo *const this)
{
  int (**v1)(...); // rdx

  BaseHomePlaySettleInfo::BaseHomePlaySettleInfo(this);
  v1 = (int (**)(...))(&`vtable for'RacingHomePlaySettleInfo + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseHomePlaySettleInfo = v1;
  proto::RacingGallerySettleInfo::RacingGallerySettleInfo(&this->settle_info);
};

// Line 23: range 00000000146222A2-00000000146222B0
data::GroupRecordType __cdecl RacingHomePlaySettleInfo::getRecordType(RacingHomePlaySettleInfo *const this)
{
  return 1;
};

// Line 27: range 000000001483822C-0000000014838279
void __cdecl RacingHomePlayRankInfo::~RacingHomePlayRankInfo(RacingHomePlayRankInfo *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'RacingHomePlayRankInfo + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseHomePlayRankInfo = v1;
  BaseHomePlayRankInfo::~BaseHomePlayRankInfo(this);
};

// Line 27: range 000000001483827A-00000000148382A4
void __cdecl RacingHomePlayRankInfo::~RacingHomePlayRankInfo(RacingHomePlayRankInfo *const this)
{
  RacingHomePlayRankInfo::~RacingHomePlayRankInfo(this);
  operator delete(this, 0x10uLL);
};

// Line 30: range 00000000146223B0-000000001462240D
void __cdecl RacingHomePlayRankInfo::RacingHomePlayRankInfo(RacingHomePlayRankInfo *const this)
{
  int (**v1)(...); // rdx

  BaseHomePlayRankInfo::BaseHomePlayRankInfo(this);
  v1 = (int (**)(...))(&`vtable for'RacingHomePlayRankInfo + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseHomePlayRankInfo = v1;
  RacingGallerySettleRankInfo::RacingGallerySettleRankInfo(&this->rank_info);
};

// Line 31: range 000000001462240E-000000001462241C
data::GroupRecordType __cdecl RacingHomePlayRankInfo::getRecordType(RacingHomePlayRankInfo *const this)
{
  return 1;
};

// Line 38: range 00000000146BD98A-00000000146BDAA0
RacingGalleryRecord *__cdecl RacingGalleryRecord::operator=(RacingGalleryRecord *const this, RacingGalleryRecord *a2)
{
  uint32_t use_time; // ecx
  uint32_t timestamp; // ecx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  use_time = a2->use_time;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->use_time = use_time;
  HomeGroupPlayerInfo::operator=(&this->player_info, &a2->player_info);
  if ( *(_BYTE *)(((unsigned __int64)&a2->timestamp >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->timestamp >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  timestamp = a2->timestamp;
  if ( *(_BYTE *)(((unsigned __int64)&this->timestamp >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->timestamp >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->timestamp);
  }
  this->timestamp = timestamp;
  return this;
};

// Line 38: range 00000000146268FE-0000000014626996
void __cdecl RacingGalleryRecord::RacingGalleryRecord(RacingGalleryRecord *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->use_time = 0;
  HomeGroupPlayerInfo::HomeGroupPlayerInfo(&this->player_info);
  if ( *(_BYTE *)(((unsigned __int64)&this->timestamp >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->timestamp >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->timestamp);
  }
  this->timestamp = 0;
};

// Line 38: range 000000001474A8F6-000000001474AA09
void __cdecl RacingGalleryRecord::RacingGalleryRecord(RacingGalleryRecord *const this, RacingGalleryRecord *a2)
{
  uint32_t use_time; // ecx
  uint32_t timestamp; // ecx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  use_time = a2->use_time;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->use_time = use_time;
  HomeGroupPlayerInfo::HomeGroupPlayerInfo(&this->player_info, &a2->player_info);
  if ( *(_BYTE *)(((unsigned __int64)&a2->timestamp >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->timestamp >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  timestamp = a2->timestamp;
  if ( *(_BYTE *)(((unsigned __int64)&this->timestamp >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->timestamp >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->timestamp);
  }
  this->timestamp = timestamp;
};

// Line 38: range 0000000014704006-0000000014704119
void __cdecl RacingGalleryRecord::RacingGalleryRecord(RacingGalleryRecord *const this, const RacingGalleryRecord *a2)
{
  uint32_t use_time; // ecx
  uint32_t timestamp; // ecx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  use_time = a2->use_time;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->use_time = use_time;
  HomeGroupPlayerInfo::HomeGroupPlayerInfo(&this->player_info, &a2->player_info);
  if ( *(_BYTE *)(((unsigned __int64)&a2->timestamp >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->timestamp >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  timestamp = a2->timestamp;
  if ( *(_BYTE *)(((unsigned __int64)&this->timestamp >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->timestamp >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->timestamp);
  }
  this->timestamp = timestamp;
};

// Line 38: range 0000000014626998-00000000146269B6
void __cdecl RacingGalleryRecord::~RacingGalleryRecord(RacingGalleryRecord *const this)
{
  HomeGroupPlayerInfo::~HomeGroupPlayerInfo(&this->player_info);
};

// Line 50: range 000000001483755E-0000000014837588
void __cdecl RacingHomeGroupRecord::~RacingHomeGroupRecord(RacingHomeGroupRecord *const this)
{
  RacingHomeGroupRecord::~RacingHomeGroupRecord(this);
  operator delete(this, 0x38uLL);
};

// Line 50: range 0000000014837500-000000001483755D
void __cdecl RacingHomeGroupRecord::~RacingHomeGroupRecord(RacingHomeGroupRecord *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'RacingHomeGroupRecord + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseHomeGroupRecord = v1;
  std::vector<RacingGalleryRecord>::~vector(&this->racing_gallery_record_vec_);
  BaseHomeGroupRecord::~BaseHomeGroupRecord(this);
};

// Line 53: range 00000000146224F0-0000000014622555
void __cdecl RacingHomeGroupRecord::RacingHomeGroupRecord(RacingHomeGroupRecord *const this, uint32_t group_id)
{
  int (**v2)(...); // rdx

  BaseHomeGroupRecord::BaseHomeGroupRecord(this, group_id);
  v2 = (int (**)(...))(&`vtable for'RacingHomeGroupRecord + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseHomeGroupRecord = v2;
  std::vector<RacingGalleryRecord>::vector(&this->racing_gallery_record_vec_);
};
