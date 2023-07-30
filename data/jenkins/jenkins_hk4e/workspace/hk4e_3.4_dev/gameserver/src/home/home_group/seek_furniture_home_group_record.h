// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/home/home_group/seek_furniture_home_group_record.h

// Line 18: range 0000000014740AC0-0000000014740B5D
SeekFurniturePlayerScore *__cdecl SeekFurniturePlayerScore::operator=(
        SeekFurniturePlayerScore *const this,
        SeekFurniturePlayerScore *a2)
{
  uint32_t score; // ecx

  HomeGroupPlayerInfo::operator=(&this->player_info, &a2->player_info);
  if ( *(_BYTE *)(((unsigned __int64)&a2->score >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->score >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  score = a2->score;
  if ( *(_BYTE *)(((unsigned __int64)&this->score >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->score >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->score);
  }
  this->score = score;
  return this;
};

// Line 18: range 0000000014625A96-0000000014625AB0
void __cdecl SeekFurniturePlayerScore::SeekFurniturePlayerScore(SeekFurniturePlayerScore *const this)
{
  HomeGroupPlayerInfo::HomeGroupPlayerInfo(&this->player_info);
};

// Line 18: range 0000000014764A88-0000000014764B22
void __cdecl SeekFurniturePlayerScore::SeekFurniturePlayerScore(
        SeekFurniturePlayerScore *const this,
        const SeekFurniturePlayerScore *a2)
{
  uint32_t score; // ecx

  HomeGroupPlayerInfo::HomeGroupPlayerInfo(&this->player_info, &a2->player_info);
  if ( *(_BYTE *)(((unsigned __int64)&a2->score >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->score >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  score = a2->score;
  if ( *(_BYTE *)(((unsigned __int64)&this->score >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->score >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->score);
  }
  this->score = score;
};

// Line 18: range 0000000014625AB2-0000000014625ACC
void __cdecl SeekFurniturePlayerScore::~SeekFurniturePlayerScore(SeekFurniturePlayerScore *const this)
{
  HomeGroupPlayerInfo::~HomeGroupPlayerInfo(&this->player_info);
};

// Line 22: range 00000000147406BE-0000000014740758
void __cdecl SeekFurniturePlayerScore::SeekFurniturePlayerScore(
        SeekFurniturePlayerScore *const this,
        SeekFurniturePlayerScore *a2)
{
  uint32_t score; // ecx

  HomeGroupPlayerInfo::HomeGroupPlayerInfo(&this->player_info, &a2->player_info);
  if ( *(_BYTE *)(((unsigned __int64)&a2->score >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->score >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  score = a2->score;
  if ( *(_BYTE *)(((unsigned __int64)&this->score >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->score >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->score);
  }
  this->score = score;
};

// Line 24: range 00000000148380FC-0000000014838126
void __cdecl SeekFurnitureHomePlaySettleInfo::~SeekFurnitureHomePlaySettleInfo(
        SeekFurnitureHomePlaySettleInfo *const this)
{
  SeekFurnitureHomePlaySettleInfo::~SeekFurnitureHomePlaySettleInfo(this);
  operator delete(this, 0x28uLL);
};

// Line 24: range 000000001483809E-00000000148380FB
void __cdecl SeekFurnitureHomePlaySettleInfo::~SeekFurnitureHomePlaySettleInfo(
        SeekFurnitureHomePlaySettleInfo *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'SeekFurnitureHomePlaySettleInfo + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseHomePlaySettleInfo = v1;
  std::vector<SeekFurniturePlayerScore>::~vector(&this->engaged_player_score_info_vec);
  BaseHomePlaySettleInfo::~BaseHomePlaySettleInfo(this);
};

// Line 27: range 00000000146228D2-000000001462296D
void __cdecl SeekFurnitureHomePlaySettleInfo::SeekFurnitureHomePlaySettleInfo(
        SeekFurnitureHomePlaySettleInfo *const this)
{
  int (**v1)(...); // rdx

  BaseHomePlaySettleInfo::BaseHomePlaySettleInfo(this);
  v1 = (int (**)(...))(&`vtable for'SeekFurnitureHomePlaySettleInfo + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseHomePlaySettleInfo = v1;
  if ( *(_BYTE *)(((unsigned __int64)&this->time_stamp >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time_stamp >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time_stamp);
  }
  this->time_stamp = 0;
  std::vector<SeekFurniturePlayerScore>::vector(&this->engaged_player_score_info_vec);
};

// Line 28: range 000000001462296E-000000001462297C
data::GroupRecordType __cdecl SeekFurnitureHomePlaySettleInfo::getRecordType(
        SeekFurnitureHomePlaySettleInfo *const this)
{
  return 4;
};

// Line 35: range 000000001474AD36-000000001474ADCE
void __cdecl SeekFurnitureOneRecord::SeekFurnitureOneRecord(
        SeekFurnitureOneRecord *const this,
        SeekFurnitureOneRecord *a2)
{
  uint32_t time_stamp; // ecx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  time_stamp = a2->time_stamp;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->time_stamp = time_stamp;
  std::vector<SeekFurniturePlayerScore>::vector(
    &this->engaged_player_score_info_vec,
    &a2->engaged_player_score_info_vec);
};

// Line 35: range 0000000014625ACE-0000000014625AEC
void __cdecl SeekFurnitureOneRecord::~SeekFurnitureOneRecord(SeekFurnitureOneRecord *const this)
{
  std::vector<SeekFurniturePlayerScore>::~vector(&this->engaged_player_score_info_vec);
};

// Line 37: range 000000001462297E-00000000146229D5
void __cdecl SeekFurnitureOneRecord::SeekFurnitureOneRecord(SeekFurnitureOneRecord *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->time_stamp = 0;
  std::vector<SeekFurniturePlayerScore>::vector(&this->engaged_player_score_info_vec);
};

// Line 38: range 00000000146229D6-0000000014622A3A
void __cdecl SeekFurnitureOneRecord::SeekFurnitureOneRecord(
        SeekFurnitureOneRecord *const this,
        uint32_t time_stamp,
        const std::vector<SeekFurniturePlayerScore> *vec)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->time_stamp = time_stamp;
  std::vector<SeekFurniturePlayerScore>::vector(&this->engaged_player_score_info_vec, vec);
};

// Line 50: range 0000000014837476-00000000148374D3
void __cdecl SeekFurnitureHomeGroupRecord::~SeekFurnitureHomeGroupRecord(SeekFurnitureHomeGroupRecord *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'SeekFurnitureHomeGroupRecord + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseHomeGroupRecord = v1;
  std::deque<SeekFurnitureOneRecord>::~deque(&this->seek_furniture_play_record_deque_);
  BaseHomeGroupRecord::~BaseHomeGroupRecord(this);
};

// Line 50: range 00000000148374D4-00000000148374FE
void __cdecl SeekFurnitureHomeGroupRecord::~SeekFurnitureHomeGroupRecord(SeekFurnitureHomeGroupRecord *const this)
{
  SeekFurnitureHomeGroupRecord::~SeekFurnitureHomeGroupRecord(this);
  operator delete(this, 0x70uLL);
};

// Line 53: range 0000000014622A3C-0000000014622AC4
void __cdecl SeekFurnitureHomeGroupRecord::SeekFurnitureHomeGroupRecord(
        SeekFurnitureHomeGroupRecord *const this,
        uint32_t group_id)
{
  int (**v2)(...); // rdx

  BaseHomeGroupRecord::BaseHomeGroupRecord(this, group_id);
  v2 = (int (**)(...))(&`vtable for'SeekFurnitureHomeGroupRecord + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseHomeGroupRecord = v2;
  std::deque<SeekFurnitureOneRecord>::deque(&this->seek_furniture_play_record_deque_);
};
