// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/treasure_seelie_activity.h

// Line 35: range 00000000183272FA-000000001832736B
void __cdecl TreasureSeelieActivity::~TreasureSeelieActivity(TreasureSeelieActivity *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'TreasureSeelieActivity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  std::map<std::type_index,std::weak_ptr<Observer>>::~map(&this->event_observer_map_);
  std::map<unsigned int,TreasureSeelieActivity::RegionData>::~map(&this->open_day_to_region_map_);
  BaseActivity::~BaseActivity((BaseActivity *const)this);
};

// Line 35: range 000000001832736C-0000000018327396
void __cdecl TreasureSeelieActivity::~TreasureSeelieActivity(TreasureSeelieActivity *const this)
{
  TreasureSeelieActivity::~TreasureSeelieActivity(this);
  operator delete(this, 0x410uLL);
};

// Line 37: range 000000001829B4EC-000000001829B580
void __cdecl TreasureSeelieActivity::RegionData::RegionData(TreasureSeelieActivity::RegionData *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rdx

  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(this, v1, this);
  this->is_open = 0;
  v2 = ((_BYTE)this + 1) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->is_done >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->is_done >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->is_done, v2, v3);
  this->is_done = 0;
  std::set<unsigned int>::set(&this->opened_chest_config_id_set);
};

// Line 37: range 0000000018206B6C-0000000018206B8A
void __cdecl TreasureSeelieActivity::RegionData::~RegionData(TreasureSeelieActivity::RegionData *const this)
{
  std::set<unsigned int>::~set(&this->opened_chest_config_id_set);
};

// Line 44: range 000000001702C3CC-000000001702C581
void __fastcall ZN22TreasureSeelieActivityCI212BaseActivityER6Playerj(
        TreasureSeelieActivity *const this,
        Player *a2,
        int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int (**v6)(...); // rdx
  __int64 v7; // rsi
  __int64 v8; // rdx
  char v10[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ZN22TreasureSeelieActivityCI212BaseActivityER6Playerj;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = a3;
  BaseActivity::BaseActivity((BaseActivity *const)this, a2, *(_DWORD *)(v3 + 32));
  v6 = (int (**)(...))(&`vtable for'TreasureSeelieActivity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_DescribalBase = v6;
  v7 = (((_BYTE)this - 92) & 7u) + 3;
  v8 = (*(_BYTE *)(((unsigned __int64)&this->coin_num_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->coin_num_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_store4(&this->coin_num_, v7, v8);
  this->coin_num_ = 0;
  std::map<unsigned int,TreasureSeelieActivity::RegionData>::map(&this->open_day_to_region_map_);
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_content_closed_, v7, &this->is_content_closed_);
  this->is_content_closed_ = 0;
  std::map<std::type_index,std::weak_ptr<Observer>>::map(&this->event_observer_map_);
  if ( v10 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 45: range 0000000013EC57A0-0000000013EC57AA
data::NewActivityType __cdecl TreasureSeelieActivity::getActivityStaticType()
{
  return 3003;
};

// Line 55: range 00000000180B0910-00000000180B095D
bool __cdecl TreasureSeelieActivity::isContentClosed(const TreasureSeelieActivity *const this)
{
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_content_closed_);
  return this->is_content_closed_;
};
