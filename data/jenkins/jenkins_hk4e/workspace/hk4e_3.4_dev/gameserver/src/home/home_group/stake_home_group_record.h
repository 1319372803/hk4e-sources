// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/home/home_group/stake_home_group_record.h

// Line 18: range 0000000014D24A06-0000000014D24A63
void __cdecl StakeHomePlaySettleInfo::~StakeHomePlaySettleInfo(StakeHomePlaySettleInfo *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'StakeHomePlaySettleInfo + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseHomePlaySettleInfo = v1;
  std::vector<HomeGroupPlayerInfo>::~vector(&this->engaged_player_info_vec);
  BaseHomePlaySettleInfo::~BaseHomePlaySettleInfo(this);
};

// Line 18: range 0000000014D24A64-0000000014D24A8E
void __cdecl StakeHomePlaySettleInfo::~StakeHomePlaySettleInfo(StakeHomePlaySettleInfo *const this)
{
  StakeHomePlaySettleInfo::~StakeHomePlaySettleInfo(this);
  operator delete(this, 0x28uLL);
};

// Line 21: range 00000000149EE580-00000000149EE61B
void __cdecl StakeHomePlaySettleInfo::StakeHomePlaySettleInfo(StakeHomePlaySettleInfo *const this)
{
  int (**v1)(...); // rdx

  BaseHomePlaySettleInfo::BaseHomePlaySettleInfo(this);
  v1 = (int (**)(...))(&`vtable for'StakeHomePlaySettleInfo + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseHomePlaySettleInfo = v1;
  if ( *(_BYTE *)(((unsigned __int64)&this->timestamp >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->timestamp >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->timestamp);
  }
  this->timestamp = 0;
  std::vector<HomeGroupPlayerInfo>::vector(&this->engaged_player_info_vec);
};

// Line 22: range 00000000149EE61C-00000000149EE62A
data::GroupRecordType __cdecl StakeHomePlaySettleInfo::getRecordType(StakeHomePlaySettleInfo *const this)
{
  return 3;
};

// Line 29: range 00000000146269B8-0000000014626A0F
void __cdecl StakePlayRecord::StakePlayRecord(StakePlayRecord *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->timestamp = 0;
  std::vector<HomeGroupPlayerInfo>::vector(&this->engaged_player_info_vec);
};

// Line 29: range 000000001474B548-000000001474B5E0
void __cdecl StakePlayRecord::StakePlayRecord(StakePlayRecord *const this, StakePlayRecord *a2)
{
  uint32_t timestamp; // ecx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  timestamp = a2->timestamp;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->timestamp = timestamp;
  std::vector<HomeGroupPlayerInfo>::vector(&this->engaged_player_info_vec, &a2->engaged_player_info_vec);
};

// Line 29: range 0000000014626A10-0000000014626A2E
void __cdecl StakePlayRecord::~StakePlayRecord(StakePlayRecord *const this)
{
  std::vector<HomeGroupPlayerInfo>::~vector(&this->engaged_player_info_vec);
};

// Line 40: range 00000000148373EC-0000000014837449
void __cdecl StakeHomeGroupRecord::~StakeHomeGroupRecord(StakeHomeGroupRecord *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'StakeHomeGroupRecord + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseHomeGroupRecord = v1;
  std::deque<StakePlayRecord>::~deque(&this->stake_play_record_deque_);
  BaseHomeGroupRecord::~BaseHomeGroupRecord(this);
};

// Line 40: range 000000001483744A-0000000014837474
void __cdecl StakeHomeGroupRecord::~StakeHomeGroupRecord(StakeHomeGroupRecord *const this)
{
  StakeHomeGroupRecord::~StakeHomeGroupRecord(this);
  operator delete(this, 0x70uLL);
};

// Line 43: range 00000000146227F4-000000001462287C
void __cdecl StakeHomeGroupRecord::StakeHomeGroupRecord(StakeHomeGroupRecord *const this, uint32_t group_id)
{
  int (**v2)(...); // rdx

  BaseHomeGroupRecord::BaseHomeGroupRecord(this, group_id);
  v2 = (int (**)(...))(&`vtable for'StakeHomeGroupRecord + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseHomeGroupRecord = v2;
  std::deque<StakePlayRecord>::deque(&this->stake_play_record_deque_);
};
