// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/home/home_group/balloon_home_group_record.h

// Line 19: range 0000000014838200-000000001483822A
void __cdecl BalloonHomePlaySettleInfo::~BalloonHomePlaySettleInfo(BalloonHomePlaySettleInfo *const this)
{
  BalloonHomePlaySettleInfo::~BalloonHomePlaySettleInfo(this);
  operator delete(this, 0x30uLL);
};

// Line 19: range 00000000148381A2-00000000148381FF
void __cdecl BalloonHomePlaySettleInfo::~BalloonHomePlaySettleInfo(BalloonHomePlaySettleInfo *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'BalloonHomePlaySettleInfo + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseHomePlaySettleInfo = v1;
  proto::BalloonGallerySettleInfo::~BalloonGallerySettleInfo(&this->settle_info);
  BaseHomePlaySettleInfo::~BaseHomePlaySettleInfo(this);
};

// Line 22: range 0000000014622556-00000000146225D6
void __cdecl BalloonHomePlaySettleInfo::BalloonHomePlaySettleInfo(BalloonHomePlaySettleInfo *const this)
{
  int (**v1)(...); // rdx

  BaseHomePlaySettleInfo::BaseHomePlaySettleInfo(this);
  v1 = (int (**)(...))(&`vtable for'BalloonHomePlaySettleInfo + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseHomePlaySettleInfo = v1;
  proto::BalloonGallerySettleInfo::BalloonGallerySettleInfo(&this->settle_info);
};

// Line 23: range 00000000146225D8-00000000146225E6
data::GroupRecordType __cdecl BalloonHomePlaySettleInfo::getRecordType(BalloonHomePlaySettleInfo *const this)
{
  return 2;
};

// Line 27: range 0000000014838128-0000000014838175
void __cdecl BalloonHomePlayRankInfo::~BalloonHomePlayRankInfo(BalloonHomePlayRankInfo *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'BalloonHomePlayRankInfo + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseHomePlayRankInfo = v1;
  BaseHomePlayRankInfo::~BaseHomePlayRankInfo(this);
};

// Line 27: range 0000000014838176-00000000148381A0
void __cdecl BalloonHomePlayRankInfo::~BalloonHomePlayRankInfo(BalloonHomePlayRankInfo *const this)
{
  BalloonHomePlayRankInfo::~BalloonHomePlayRankInfo(this);
  operator delete(this, 0x10uLL);
};

// Line 30: range 0000000014622678-00000000146226D5
void __cdecl BalloonHomePlayRankInfo::BalloonHomePlayRankInfo(BalloonHomePlayRankInfo *const this)
{
  int (**v1)(...); // rdx

  BaseHomePlayRankInfo::BaseHomePlayRankInfo(this);
  v1 = (int (**)(...))(&`vtable for'BalloonHomePlayRankInfo + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseHomePlayRankInfo = v1;
  BalloonGallerySettleRankInfo::BalloonGallerySettleRankInfo(&this->rank_info);
};

// Line 31: range 00000000146226D6-00000000146226E4
data::GroupRecordType __cdecl BalloonHomePlayRankInfo::getRecordType(BalloonHomePlayRankInfo *const this)
{
  return 2;
};

// Line 38: range 00000000146BACC8-00000000146BAE63
BalloonGalleryRecord *__cdecl BalloonGalleryRecord::operator=(
        BalloonGalleryRecord *const this,
        BalloonGalleryRecord *a2)
{
  uint32_t score; // ecx
  uint32_t hit_count; // ecx
  uint32_t timestamp; // ecx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  score = a2->score;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->score = score;
  if ( *(_BYTE *)(((unsigned __int64)&a2->hit_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->hit_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  hit_count = a2->hit_count;
  if ( *(_BYTE *)(((unsigned __int64)&this->hit_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->hit_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->hit_count);
  }
  this->hit_count = hit_count;
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

// Line 38: range 0000000014626406-00000000146264E4
void __cdecl BalloonGalleryRecord::BalloonGalleryRecord(BalloonGalleryRecord *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->score = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->hit_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->hit_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->hit_count);
  }
  this->hit_count = 0;
  HomeGroupPlayerInfo::HomeGroupPlayerInfo(&this->player_info);
  if ( *(_BYTE *)(((unsigned __int64)&this->timestamp >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->timestamp >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->timestamp);
  }
  this->timestamp = 0;
};

// Line 38: range 0000000014747962-0000000014747AFA
void __cdecl BalloonGalleryRecord::BalloonGalleryRecord(BalloonGalleryRecord *const this, BalloonGalleryRecord *a2)
{
  uint32_t score; // ecx
  uint32_t hit_count; // ecx
  uint32_t timestamp; // ecx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  score = a2->score;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->score = score;
  if ( *(_BYTE *)(((unsigned __int64)&a2->hit_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->hit_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  hit_count = a2->hit_count;
  if ( *(_BYTE *)(((unsigned __int64)&this->hit_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->hit_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->hit_count);
  }
  this->hit_count = hit_count;
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

// Line 38: range 0000000014700C2A-0000000014700DC2
void __cdecl BalloonGalleryRecord::BalloonGalleryRecord(
        BalloonGalleryRecord *const this,
        const BalloonGalleryRecord *a2)
{
  uint32_t score; // ecx
  uint32_t hit_count; // ecx
  uint32_t timestamp; // ecx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  score = a2->score;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->score = score;
  if ( *(_BYTE *)(((unsigned __int64)&a2->hit_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->hit_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  hit_count = a2->hit_count;
  if ( *(_BYTE *)(((unsigned __int64)&this->hit_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->hit_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->hit_count);
  }
  this->hit_count = hit_count;
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

// Line 38: range 00000000146264E6-0000000014626504
void __cdecl BalloonGalleryRecord::~BalloonGalleryRecord(BalloonGalleryRecord *const this)
{
  HomeGroupPlayerInfo::~HomeGroupPlayerInfo(&this->player_info);
};

// Line 51: range 0000000014837672-000000001483769C
void __cdecl BalloonHomeGroupRecord::~BalloonHomeGroupRecord(BalloonHomeGroupRecord *const this)
{
  BalloonHomeGroupRecord::~BalloonHomeGroupRecord(this);
  operator delete(this, 0x38uLL);
};

// Line 51: range 0000000014837614-0000000014837671
void __cdecl BalloonHomeGroupRecord::~BalloonHomeGroupRecord(BalloonHomeGroupRecord *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'BalloonHomeGroupRecord + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseHomeGroupRecord = v1;
  std::vector<BalloonGalleryRecord>::~vector(&this->balloon_gallery_record_vec_);
  BaseHomeGroupRecord::~BaseHomeGroupRecord(this);
};

// Line 54: range 000000001462273A-000000001462279F
void __cdecl BalloonHomeGroupRecord::BalloonHomeGroupRecord(BalloonHomeGroupRecord *const this, uint32_t group_id)
{
  int (**v2)(...); // rdx

  BaseHomeGroupRecord::BaseHomeGroupRecord(this, group_id);
  v2 = (int (**)(...))(&`vtable for'BalloonHomeGroupRecord + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseHomeGroupRecord = v2;
  std::vector<BalloonGalleryRecord>::vector(&this->balloon_gallery_record_vec_);
};
