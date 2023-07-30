// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/chess_activity.h

// Line 22: range 0000000017B8DEBE-0000000017B8DF2F
void __cdecl ChessActivity::~ChessActivity(ChessActivity *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ChessActivity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v1;
  std::set<unsigned int>::~set(&this->finished_map_id_set_);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->daily_obtained_exp_map_);
  BaseActivity::~BaseActivity((BaseActivity *const)this);
};

// Line 22: range 0000000017B8DF30-0000000017B8DF5A
void __cdecl ChessActivity::~ChessActivity(ChessActivity *const this)
{
  ChessActivity::~ChessActivity(this);
  operator delete(this, 0x428uLL);
};

// Line 25: range 000000001702354E-0000000017023816
void __fastcall ZN13ChessActivityCI212BaseActivityER6Playerj(ChessActivity *const this, Player *a2, int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int (**v6)(...); // rdx
  char v8[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ZN13ChessActivityCI212BaseActivityER6Playerj;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = a3;
  BaseActivity::BaseActivity((BaseActivity *const)this, a2, *(_DWORD *)(v3 + 32));
  v6 = (int (**)(...))(&`vtable for'ChessActivity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v6;
  if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->level_);
  }
  this->level_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->exp_);
  }
  this->exp_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_teach_dungeon_finished_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 84) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_teach_dungeon_finished_ >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_teach_dungeon_finished_);
  }
  this->is_teach_dungeon_finished_ = 0;
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->daily_obtained_exp_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->coin_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->coin_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->coin_);
  }
  this->coin_ = 0;
  std::set<unsigned int>::set(&this->finished_map_id_set_);
  if ( *(_BYTE *)(((unsigned __int64)&this->punish_over_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->punish_over_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->punish_over_time_);
  }
  this->punish_over_time_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 36) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_content_closed_);
  }
  this->is_content_closed_ = 0;
  if ( v8 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 26: range 000000001384A491-000000001384A49B
data::NewActivityType __cdecl ChessActivity::getActivityStaticType()
{
  return 2002;
};

// Line 47: range 00000000180B57AC-00000000180B5800
uint32_t __cdecl ChessActivity::getLevel(const ChessActivity *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  return this->level_;
};

// Line 49: range 00000000180B5802-00000000180B584E
uint32_t __cdecl ChessActivity::getExp(const ChessActivity *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  return this->exp_;
};

// Line 52: range 0000000017D71458-0000000017D714A4
uint32_t __cdecl ChessActivity::getCoin(const ChessActivity *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->coin_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->coin_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  return this->coin_;
};

// Line 932: range 0000000017A04FA0-0000000017A04FF2
bool __cdecl ChessActivity::isContentClosed(const ChessActivity *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 36) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_content_closed_);
  }
  return this->is_content_closed_;
};
