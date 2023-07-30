// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/blessing_activity.h

// Line 42: range 0000000017B8E2CC-0000000017B8E397
void __cdecl BlessingActivity::~BlessingActivity(BlessingActivity *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'BlessingActivity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v1;
  std::map<unsigned int,RecvPicRecord>::~map(&this->recv_pic_record_map_);
  std::set<unsigned int>::~set(&this->pic_drop_record_);
  std::map<unsigned int,unsigned int>::~map(&this->pic_num_map_);
  std::map<unsigned int,std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,unsigned int>>>>::~map(&this->cur_day_scanned_entity_map_);
  std::list<unsigned int>::~list(&this->recv_pic_index_list_);
  std::map<std::string,GiveFriendPicParam>::~map(&this->give_pic_ticket_param_map_);
  std::weak_ptr<Observer>::~weak_ptr(&this->send_offline_msg_wtr_);
  BaseActivity::~BaseActivity(this);
};

// Line 42: range 0000000017B8E398-0000000017B8E3C2
void __cdecl BlessingActivity::~BlessingActivity(BlessingActivity *const this)
{
  BlessingActivity::~BlessingActivity(this);
  operator delete(this, 0x4E8uLL);
};

// Line 45: range 000000001701D076-000000001701D4B4
void __fastcall ZN16BlessingActivityCI212BaseActivityER6Playerj(BlessingActivity *const this, Player *a2, int a3)
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
  *(_QWORD *)(v3 + 16) = ZN16BlessingActivityCI212BaseActivityER6Playerj;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = a3;
  BaseActivity::BaseActivity(this, a2, *(_DWORD *)(v3 + 32));
  v6 = (int (**)(...))(&`vtable for'BlessingActivity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v6;
  std::weak_ptr<Observer>::weak_ptr(&this->send_offline_msg_wtr_);
  std::map<std::string,GiveFriendPicParam>::map(&this->give_pic_ticket_param_map_);
  std::list<unsigned int>::list(&this->recv_pic_index_list_);
  if ( *(_BYTE *)(((unsigned __int64)&this->day_index_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->day_index_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->day_index_);
  }
  this->day_index_ = 0;
  std::map<unsigned int,std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,unsigned int>>>>::map(&this->cur_day_scanned_entity_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_day_scan_num_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_day_scan_num_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_day_scan_num_);
  }
  this->cur_day_scan_num_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->up_pool_index_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->up_pool_index_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->up_pool_index_);
  }
  this->up_pool_index_ = 0;
  std::map<unsigned int,unsigned int>::map(&this->pic_num_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_day_scan_type_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_day_scan_type_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_day_scan_type_id_);
  }
  this->cur_day_scan_type_id_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_activated_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 116) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_activated_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_activated_);
  }
  this->is_activated_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 117) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_content_closed_);
  }
  this->is_content_closed_ = 0;
  std::set<unsigned int>::set(&this->pic_drop_record_);
  if ( *(_BYTE *)(((unsigned __int64)&this->total_unfulfilled_num_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->total_unfulfilled_num_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->total_unfulfilled_num_);
  }
  this->total_unfulfilled_num_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->redeem_reward_num_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->redeem_reward_num_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->redeem_reward_num_);
  }
  this->redeem_reward_num_ = 0;
  std::map<unsigned int,RecvPicRecord>::map(&this->recv_pic_record_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_generated_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_generated_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_generated_id_);
  }
  this->last_generated_id_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->next_refresh_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->next_refresh_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->next_refresh_time_);
  }
  this->next_refresh_time_ = 0;
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

// Line 49: range 000000001384A439-000000001384A443
data::NewActivityType __cdecl BlessingActivity::getActivityStaticType()
{
  return 1300;
};

// Line 61: range 0000000017A04264-0000000017A042B6
bool __cdecl BlessingActivity::isContentClosed(const BlessingActivity *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 117) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_content_closed_);
  }
  return this->is_content_closed_;
};

// Line 92: range 0000000017A042B8-0000000017A04311
uint32_t __cdecl BlessingActivity::genRecvIndex(BlessingActivity *const this)
{
  uint32_t result; // eax

  if ( *(_BYTE *)(((unsigned __int64)&this->last_generated_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_generated_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  result = this->last_generated_id_;
  this->last_generated_id_ = result + 1;
  return result;
};
