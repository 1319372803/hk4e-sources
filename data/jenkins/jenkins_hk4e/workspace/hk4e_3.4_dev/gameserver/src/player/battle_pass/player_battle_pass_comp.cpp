// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/battle_pass/player_battle_pass_comp.cpp

// Line 26: range 00000000150B92F0-00000000150B97A0
int32_t __cdecl BattlePassSchedule::fromBin(BattlePassSchedule *const this, const proto::BattlePassScheduleBin *bin)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  __int64 v5; // rdx
  char v6; // al
  uint32_t v7; // ecx
  char v8; // dl
  __int64 v9; // rdx
  __int64 v10; // rdx
  char v11; // al
  google::protobuf::uint32 v12; // edi
  __int64 v13; // rdx
  google::protobuf::RepeatedPtrField<proto::BattlePassRewardTagBin>::const_iterator *p_for_end; // rsi
  signed int v15; // r15d
  uint32_t v16; // r14d
  uint32_t v17; // eax
  unsigned int v18; // eax
  __int64 v19; // rdx
  char v20; // al
  bool is_viewed; // cl
  char v22; // dl
  __int64 v23; // rdx
  uint32_t v24; // ecx
  char v25; // dl
  __int64 v26; // rdx
  unsigned int v27; // eax
  __int64 v28; // rdx
  char v29; // al
  uint32_t v30; // ecx
  char v31; // dl
  __int64 v32; // rdx
  int32_t result; // eax
  const proto::BattlePassScheduleBin *bina; // [rsp+10h] [rbp-A0h]
  google::protobuf::RepeatedPtrField<proto::BattlePassRewardTagBin>::const_iterator __for_begin; // [rsp+20h] [rbp-90h] BYREF
  google::protobuf::RepeatedPtrField<proto::BattlePassRewardTagBin>::const_iterator __for_end; // [rsp+28h] [rbp-88h] BYREF
  const google::protobuf::RepeatedPtrField<proto::BattlePassRewardTagBin> *__for_range; // [rsp+30h] [rbp-80h]
  const proto::BattlePassRewardTagBin *tag_bin; // [rsp+38h] [rbp-78h]
  char v40[112]; // [rsp+40h] [rbp-70h] BYREF

  bina = bin;
  v2 = (unsigned __int64)v40;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 12 6 tag:33";
  *(_QWORD *)(v2 + 16) = BattlePassSchedule::fromBin;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202177536;
  v5 = proto::BattlePassScheduleBin::schedule_id(bin);
  v6 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(bin) = v6 != 0;
    __asan_report_store4(this, bin, v5);
  }
  this->schedule_id = v5;
  v7 = proto::BattlePassScheduleBin::level(bina);
  v8 = *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000);
  LOBYTE(bin) = v8 != 0;
  v9 = (v8 != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= v8);
  if ( (_BYTE)v9 )
    __asan_report_store4(&this->level, bin, v9);
  this->level = v7;
  v10 = proto::BattlePassScheduleBin::point(bina);
  v11 = *(_BYTE *)(((unsigned __int64)&this->point >> 3) + 0x7FFF8000);
  if ( v11 != 0 && v11 <= 3 )
  {
    LOBYTE(bin) = v11 != 0;
    __asan_report_store4(&this->point, bin, v10);
  }
  this->point = v10;
  v12 = proto::BattlePassScheduleBin::unlock_status(bina);
  v13 = (*(_BYTE *)(((unsigned __int64)&this->unlock_status >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->unlock_status >> 3) + 0x7FFF8000));
  if ( (_BYTE)v13 )
  {
    v12 = (_DWORD)this + 12;
    __asan_report_store4(&this->unlock_status, (((_BYTE)this + 12) & 7u) + 3, v13);
  }
  this->unlock_status = v12;
  __for_range = proto::BattlePassScheduleBin::reward_taken_list(bina);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::BattlePassRewardTagBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::BattlePassRewardTagBin>::end(__for_range).it_;
  while ( 1 )
  {
    p_for_end = &__for_end;
    if ( !google::protobuf::internal::RepeatedPtrIterator<proto::BattlePassRewardTagBin const>::operator!=(
            &__for_begin,
            &__for_end) )
      break;
    tag_bin = google::protobuf::internal::RepeatedPtrIterator<proto::BattlePassRewardTagBin const>::operator*(&__for_begin);
    v15 = proto::BattlePassRewardTagBin::unlock_status(tag_bin);
    v16 = proto::BattlePassRewardTagBin::level(tag_bin);
    v17 = proto::BattlePassRewardTagBin::reward_id(tag_bin);
    BattlePassRewardTag::BattlePassRewardTag(
      (BattlePassRewardTag *const)(v2 + 32),
      (proto::BattlePassUnlockStatus)v15,
      v16,
      v17);
    std::unordered_set<BattlePassRewardTag>::insert(
      &this->reward_taken_set,
      (const std::unordered_set<BattlePassRewardTag>::value_type *)(v2 + 32));
    google::protobuf::internal::RepeatedPtrIterator<proto::BattlePassRewardTagBin const>::operator++(&__for_begin);
  }
  LOBYTE(v18) = proto::BattlePassScheduleBin::is_extra_paid_reward_taken(bina);
  v19 = v18;
  v20 = *(_BYTE *)(((unsigned __int64)&this->is_extra_paid_reward_taken >> 3) + 0x7FFF8000);
  if ( v20 < 0 )
  {
    LOBYTE(p_for_end) = v20 != 0;
    __asan_report_store1(&this->is_extra_paid_reward_taken, p_for_end, v19);
  }
  this->is_extra_paid_reward_taken = v19;
  is_viewed = proto::BattlePassScheduleBin::is_viewed(bina);
  v22 = *(_BYTE *)(((unsigned __int64)&this->is_viewed >> 3) + 0x7FFF8000);
  LOBYTE(p_for_end) = v22 != 0;
  v23 = (v22 != 0) & (unsigned __int8)((((unsigned __int8)this + 73) & 7) >= v22);
  if ( (_BYTE)v23 )
    __asan_report_store1(&this->is_viewed, p_for_end, v23);
  this->is_viewed = is_viewed;
  v24 = proto::BattlePassScheduleBin::cur_cycle_points(bina);
  v25 = *(_BYTE *)(((unsigned __int64)&this->cur_cycle_points >> 3) + 0x7FFF8000);
  LOBYTE(p_for_end) = v25 != 0;
  v26 = (v25 != 0) & (unsigned __int8)((char)((((_BYTE)this + 76) & 7) + 3) >= v25);
  if ( (_BYTE)v26 )
    __asan_report_store4(&this->cur_cycle_points, p_for_end, v26);
  this->cur_cycle_points = v24;
  LOBYTE(v27) = proto::BattlePassScheduleBin::is_notify_mail_sent(bina);
  v28 = v27;
  v29 = *(_BYTE *)(((unsigned __int64)&this->is_notify_mail_sent >> 3) + 0x7FFF8000);
  if ( v29 < 0 )
  {
    LOBYTE(p_for_end) = v29 != 0;
    __asan_report_store1(&this->is_notify_mail_sent, p_for_end, v28);
  }
  this->is_notify_mail_sent = v28;
  v30 = proto::BattlePassScheduleBin::paid_platform_flags(bina);
  v31 = *(_BYTE *)(((unsigned __int64)&this->paid_platform_flags >> 3) + 0x7FFF8000);
  LOBYTE(p_for_end) = v31 != 0;
  v32 = (v31 != 0) & (unsigned __int8)((char)((((_BYTE)this + 84) & 7) + 3) >= v31);
  if ( (_BYTE)v32 )
    __asan_report_store4(&this->paid_platform_flags, p_for_end, v32);
  this->paid_platform_flags = v30;
  result = 0;
  if ( v40 == (char *)v2 )
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

// Line 45: range 00000000150B97A2-00000000150B9BD3
int32_t __cdecl BattlePassSchedule::toBin(const BattlePassSchedule *const this, proto::BattlePassScheduleBin *bin)
{
  std::unordered_set<BattlePassRewardTag>::const_iterator __for_begin; // [rsp+18h] [rbp-28h] BYREF
  std::unordered_set<BattlePassRewardTag>::const_iterator __for_end; // [rsp+20h] [rbp-20h] BYREF
  const std::unordered_set<BattlePassRewardTag> *__for_range; // [rsp+28h] [rbp-18h]
  const BattlePassRewardTag *tag; // [rsp+30h] [rbp-10h]
  proto::BattlePassRewardTagBin *tag_bin_ptr; // [rsp+38h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  proto::BattlePassScheduleBin::set_schedule_id(bin, this->schedule_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->level);
  }
  proto::BattlePassScheduleBin::set_level(bin, this->level);
  if ( *(_BYTE *)(((unsigned __int64)&this->point >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->point >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->point);
  }
  proto::BattlePassScheduleBin::set_point(bin, this->point);
  if ( *(_BYTE *)(((unsigned __int64)&this->unlock_status >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->unlock_status >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->unlock_status);
  }
  proto::BattlePassScheduleBin::set_unlock_status(bin, this->unlock_status);
  __for_range = &this->reward_taken_set;
  __for_begin._M_cur = std::unordered_set<BattlePassRewardTag>::begin(&this->reward_taken_set)._M_cur;
  __for_end._M_cur = std::unordered_set<BattlePassRewardTag>::end(&this->reward_taken_set)._M_cur;
  while ( std::__detail::operator!=<BattlePassRewardTag,false>(&__for_begin, &__for_end) )
  {
    tag = std::__detail::_Node_const_iterator<BattlePassRewardTag,true,false>::operator*(&__for_begin);
    tag_bin_ptr = proto::BattlePassScheduleBin::add_reward_taken_list(bin);
    if ( *(_BYTE *)(((unsigned __int64)&tag->level >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)tag + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&tag->level >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&tag->level);
    }
    proto::BattlePassRewardTagBin::set_level(tag_bin_ptr, tag->level);
    if ( *(_BYTE *)(((unsigned __int64)tag >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)tag & 7) + 3) >= *(_BYTE *)(((unsigned __int64)tag >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(tag);
    }
    proto::BattlePassRewardTagBin::set_unlock_status(tag_bin_ptr, tag->unlock_status);
    if ( *(_BYTE *)(((unsigned __int64)&tag->reward_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)tag + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&tag->reward_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&tag->reward_id);
    }
    proto::BattlePassRewardTagBin::set_reward_id(tag_bin_ptr, tag->reward_id);
    std::__detail::_Node_const_iterator<BattlePassRewardTag,true,false>::operator++(&__for_begin);
  }
  if ( *(char *)(((unsigned __int64)&this->is_extra_paid_reward_taken >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_extra_paid_reward_taken);
  proto::BattlePassScheduleBin::set_is_extra_paid_reward_taken(bin, this->is_extra_paid_reward_taken);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_viewed >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 73) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_viewed >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_viewed);
  }
  proto::BattlePassScheduleBin::set_is_viewed(bin, this->is_viewed);
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_cycle_points >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_cycle_points >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->cur_cycle_points);
  }
  proto::BattlePassScheduleBin::set_cur_cycle_points(bin, this->cur_cycle_points);
  if ( *(char *)(((unsigned __int64)&this->is_notify_mail_sent >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_notify_mail_sent);
  proto::BattlePassScheduleBin::set_is_notify_mail_sent(bin, this->is_notify_mail_sent);
  if ( *(_BYTE *)(((unsigned __int64)&this->paid_platform_flags >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->paid_platform_flags >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->paid_platform_flags);
  }
  proto::BattlePassScheduleBin::set_paid_platform_flags(bin, this->paid_platform_flags);
  return 0;
};

// Line 66: range 00000000150B9BD4-00000000150BA606
int32_t __cdecl BattlePassSchedule::toClient(
        const BattlePassSchedule *const this,
        uint32_t platform_type,
        bool is_epic,
        proto::BattlePassSchedule *proto)
{
  BattlePassExcelConfigMgr *p_battle_pass_excel_config_mgr; // rcx
  uint32_t v5; // ebx
  proto::BattlePassCycle *v6; // rcx
  proto::BattlePassCycle *v7; // rcx
  proto::BattlePassCycle *v8; // rbx
  google::protobuf::uint32 *v9; // rax
  google::protobuf::uint32 *v10; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  proto::BattlePassProduct *v12; // rbx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  proto::BattlePassProduct *v14; // rbx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  proto::BattlePassProduct *v16; // rbx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  bool is_internal; // [rsp+27h] [rbp-99h]
  std::unordered_set<BattlePassRewardTag>::const_iterator __for_begin; // [rsp+28h] [rbp-98h] BYREF
  std::unordered_set<BattlePassRewardTag>::const_iterator __for_end; // [rsp+30h] [rbp-90h] BYREF
  const std::unordered_set<BattlePassRewardTag> *__for_range; // [rsp+38h] [rbp-88h]
  const data::BattlePassScheduleExcelConfig *schedule_config_ptr; // [rsp+40h] [rbp-80h]
  std::tuple_element<0,std::tuple<unsigned int,unsigned int,unsigned int> >::type *idx; // [rsp+48h] [rbp-78h]
  std::tuple_element<0,std::tuple<unsigned int,unsigned int> >::type *cbegin_time; // [rsp+50h] [rbp-70h]
  std::tuple_element<0,std::tuple<unsigned int> >::type *cend_time; // [rsp+58h] [rbp-68h]
  const BattlePassRewardTag *tag; // [rsp+60h] [rbp-60h]
  proto::BattlePassRewardTag *tag_proto_ptr; // [rsp+68h] [rbp-58h]
  std::tuple<unsigned int,unsigned int,unsigned int> __t; // [rsp+74h] [rbp-4Ch] BYREF
  std::shared_ptr<Config> v32; // [rsp+80h] [rbp-40h] BYREF
  std::string value; // [rsp+90h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  proto::BattlePassSchedule::set_schedule_id(proto, this->schedule_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->level);
  }
  proto::BattlePassSchedule::set_level(proto, this->level);
  if ( *(_BYTE *)(((unsigned __int64)&this->point >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->point >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->point);
  }
  proto::BattlePassSchedule::set_point(proto, this->point);
  if ( *(_BYTE *)(((unsigned __int64)&this->unlock_status >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->unlock_status >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->unlock_status);
  }
  proto::BattlePassSchedule::set_unlock_status(proto, this->unlock_status);
  __for_range = &this->reward_taken_set;
  __for_begin._M_cur = std::unordered_set<BattlePassRewardTag>::begin(&this->reward_taken_set)._M_cur;
  __for_end._M_cur = std::unordered_set<BattlePassRewardTag>::end(&this->reward_taken_set)._M_cur;
  while ( std::__detail::operator!=<BattlePassRewardTag,false>(&__for_begin, &__for_end) )
  {
    tag = std::__detail::_Node_const_iterator<BattlePassRewardTag,true,false>::operator*(&__for_begin);
    tag_proto_ptr = proto::BattlePassSchedule::add_reward_taken_list(proto);
    if ( *(_BYTE *)(((unsigned __int64)&tag->level >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)tag + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&tag->level >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&tag->level);
    }
    proto::BattlePassRewardTag::set_level(tag_proto_ptr, tag->level);
    if ( *(_BYTE *)(((unsigned __int64)tag >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)tag & 7) + 3) >= *(_BYTE *)(((unsigned __int64)tag >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(tag);
    }
    proto::BattlePassRewardTag::set_unlock_status(tag_proto_ptr, tag->unlock_status);
    if ( *(_BYTE *)(((unsigned __int64)&tag->reward_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)tag + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&tag->reward_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&tag->reward_id);
    }
    proto::BattlePassRewardTag::set_reward_id(tag_proto_ptr, tag->reward_id);
    std::__detail::_Node_const_iterator<BattlePassRewardTag,true,false>::operator++(&__for_begin);
  }
  if ( *(char *)(((unsigned __int64)&this->is_extra_paid_reward_taken >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_extra_paid_reward_taken);
  proto::BattlePassSchedule::set_is_extra_paid_reward_taken(proto, this->is_extra_paid_reward_taken);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_viewed >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 73) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_viewed >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_viewed);
  }
  proto::BattlePassSchedule::set_is_viewed(proto, this->is_viewed);
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_cycle_points >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_cycle_points >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->cur_cycle_points);
  }
  proto::BattlePassSchedule::set_cur_cycle_points(proto, this->cur_cycle_points);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v32);
  p_battle_pass_excel_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v32)->design_config.txt_config_mgr.battle_pass_excel_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  schedule_config_ptr = data::BattlePassExcelConfigMgrBase::findBattlePassScheduleExcelConfig(
                          p_battle_pass_excel_config_mgr,
                          this->schedule_id);
  std::shared_ptr<Config>::~shared_ptr(&v32);
  if ( schedule_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&schedule_config_ptr->begin_time >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&schedule_config_ptr->begin_time >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&schedule_config_ptr->begin_time);
    }
    proto::BattlePassSchedule::set_begin_time(proto, schedule_config_ptr->begin_time);
    if ( *(_BYTE *)(((unsigned __int64)&schedule_config_ptr->end_time >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)schedule_config_ptr + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&schedule_config_ptr->end_time >> 3)
                                                                         + 0x7FFF8000) )
    {
      __asan_report_load4(&schedule_config_ptr->end_time);
    }
    proto::BattlePassSchedule::set_end_time(proto, schedule_config_ptr->end_time);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v32);
    v5 = (unsigned int)std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v32)
       + 31016;
    common::tools::TimeUtils::getNow();
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(this);
    }
    BattlePassExcelConfigMgr::getScheduleCycleIdxAndTime(
      (const BattlePassExcelConfigMgr *const)&__t,
      v5,
      this->schedule_id);
    std::shared_ptr<Config>::~shared_ptr(&v32);
    idx = std::get<0ul,unsigned int,unsigned int,unsigned int>(&__t);
    cbegin_time = std::get<1ul,unsigned int,unsigned int,unsigned int>(&__t);
    cend_time = std::get<2ul,unsigned int,unsigned int,unsigned int>(&__t);
    v6 = proto::BattlePassSchedule::mutable_cur_cycle(proto);
    if ( *(_BYTE *)(((unsigned __int64)idx >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)idx & 7) + 3) >= *(_BYTE *)(((unsigned __int64)idx >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(idx);
    }
    proto::BattlePassCycle::set_cycle_idx(v6, *idx);
    v7 = proto::BattlePassSchedule::mutable_cur_cycle(proto);
    if ( *(_BYTE *)(((unsigned __int64)cbegin_time >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)cbegin_time & 7) + 3) >= *(_BYTE *)(((unsigned __int64)cbegin_time >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(cbegin_time);
    }
    proto::BattlePassCycle::set_begin_time(v7, *cbegin_time);
    v8 = proto::BattlePassSchedule::mutable_cur_cycle(proto);
    v9 = (google::protobuf::uint32 *)std::min<unsigned int>(cend_time, &schedule_config_ptr->end_time);
    v10 = v9;
    if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v9);
    }
    proto::BattlePassCycle::set_end_time(v8, *v10);
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v32);
  v11 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v32);
  is_internal = Config::isInternalServer(v11);
  std::shared_ptr<Config>::~shared_ptr(&v32);
  v12 = proto::BattlePassSchedule::mutable_product_info(proto);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v32);
  v13 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v32);
  ShopmallExcelConfigMgr::getFirstProductIdByPlayType[abi:cxx11](
    &value,
    &v13->design_config.txt_config_mgr.shopmall_config_mgr,
    is_internal,
    platform_type,
    is_epic,
    PRODUCT_PLAY_TYPE_BATTLE_PASS_NORMAL);
  proto::BattlePassProduct::set_normal_product_id(v12, &value);
  std::string::~string(&value);
  std::shared_ptr<Config>::~shared_ptr(&v32);
  v14 = proto::BattlePassSchedule::mutable_product_info(proto);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v32);
  v15 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v32);
  ShopmallExcelConfigMgr::getFirstProductIdByPlayType[abi:cxx11](
    &value,
    &v15->design_config.txt_config_mgr.shopmall_config_mgr,
    is_internal,
    platform_type,
    is_epic,
    PRODUCT_PLAY_TYPE_BATTLE_PASS_EXTRA);
  proto::BattlePassProduct::set_extra_product_id(v14, &value);
  std::string::~string(&value);
  std::shared_ptr<Config>::~shared_ptr(&v32);
  v16 = proto::BattlePassSchedule::mutable_product_info(proto);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v32);
  v17 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v32);
  ShopmallExcelConfigMgr::getFirstProductIdByPlayType[abi:cxx11](
    &value,
    &v17->design_config.txt_config_mgr.shopmall_config_mgr,
    is_internal,
    platform_type,
    is_epic,
    PRODUCT_PLAY_TYPE_BATTLE_PASS_UPGRADE);
  proto::BattlePassProduct::set_upgrade_product_id(v16, &value);
  std::string::~string(&value);
  std::shared_ptr<Config>::~shared_ptr(&v32);
  if ( *(_BYTE *)(((unsigned __int64)&this->paid_platform_flags >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->paid_platform_flags >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->paid_platform_flags);
  }
  proto::BattlePassSchedule::set_paid_platform_flags(proto, this->paid_platform_flags);
  return 0;
};

// Line 103: range 00000000150BA608-00000000150BA71F
int32_t __cdecl BattlePassSchedule::initWhenCreate(BattlePassSchedule *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  v1 = (((_BYTE)this + 4) & 7u) + 3;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store4(&this->level, v1, v2);
  this->level = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->point >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->point >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->point, v1, &this->point);
  }
  this->point = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->unlock_status >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->unlock_status >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->unlock_status, v3, v4);
  this->unlock_status = BATTLE_PASS_UNLOCK_FREE;
  if ( *(char *)(((unsigned __int64)&this->is_extra_paid_reward_taken >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_extra_paid_reward_taken, v3, &this->is_extra_paid_reward_taken);
  this->is_extra_paid_reward_taken = 0;
  return 0;
};

// Line 113: range 00000000150BA720-00000000150BAD37
// local variable allocation has failed, the output may be wrong!
void __cdecl BattlePassSchedule::addPoint(
        BattlePassSchedule *const this,
        uint32_t add_point,
        uint32_t reason,
        uint32_t mission_id,
        Player *player)
{
  BattlePassExcelConfigMgr *p_battle_pass_excel_config_mgr; // rcx
  __int64 v6; // rdx
  char v7; // al
  BattlePassExcelConfigMgr *v8; // rcx
  uint32_t point; // ecx
  PlayerBattlePassComp *BattlePassComp; // rdi
  uint32_t v11; // ecx
  PlayerBattlePassComp *v12; // rdx
  uint32_t v13; // ecx
  BattlePassExcelConfigMgr *v14; // rcx
  BattlePassExcelConfigMgr *v15; // rcx
  PlayerBattlePassComp *v16; // rax
  PlayerBattlePassComp *v17; // rax
  uint32_t add_pointa; // [rsp+14h] [rbp-4Ch]
  unsigned int old_point; // [rsp+28h] [rbp-38h]
  uint32_t rest_add_point; // [rsp+2Ch] [rbp-34h]
  const data::BattlePassLevelExcelConfig *level_config_ptr; // [rsp+30h] [rbp-30h]
  const data::BattlePassLevelExcelConfig *next_level_config_ptra; // [rsp+38h] [rbp-28h]
  const data::BattlePassLevelExcelConfig *next_level_config_ptr; // [rsp+38h] [rbp-28h]
  std::shared_ptr<Config> v28[2]; // [rsp+40h] [rbp-20h] BYREF

  add_pointa = add_point;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v28);
  p_battle_pass_excel_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v28)->design_config.txt_config_mgr.battle_pass_excel_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->level);
  }
  next_level_config_ptra = data::BattlePassExcelConfigMgrBase::findBattlePassLevelExcelConfig(
                             p_battle_pass_excel_config_mgr,
                             this->level + 1);
  std::shared_ptr<Config>::~shared_ptr(v28);
  if ( next_level_config_ptra )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->point >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->point >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->point);
    }
    old_point = this->point;
    rest_add_point = add_point;
    *(_QWORD *)&add_point = add_point;
    v6 = SAFE_ADD<unsigned int,unsigned int>(old_point, add_point);
    v7 = *(_BYTE *)(((unsigned __int64)&this->point >> 3) + 0x7FFF8000);
    if ( v7 != 0 && v7 <= 3 )
    {
      LOBYTE(add_point) = v7 != 0;
      __asan_report_store4(&this->point, *(_QWORD *)&add_point, v6);
    }
    this->point = v6;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)v28);
    v8 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v28)->design_config.txt_config_mgr.battle_pass_excel_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->level);
    }
    level_config_ptr = data::BattlePassExcelConfigMgrBase::findBattlePassLevelExcelConfig(v8, this->level);
    std::shared_ptr<Config>::~shared_ptr(v28);
    if ( level_config_ptr )
    {
      do
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->point >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->point >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->point);
        }
        point = this->point;
        if ( *(_BYTE *)(((unsigned __int64)&level_config_ptr->level_up_need_point >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)level_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_config_ptr->level_up_need_point >> 3)
                                                                          + 0x7FFF8000) )
        {
          __asan_report_load4(&level_config_ptr->level_up_need_point);
        }
        if ( point < level_config_ptr->level_up_need_point )
          break;
        BattlePassComp = Player::getBattlePassComp(player);
        if ( *(_BYTE *)(((unsigned __int64)&level_config_ptr->level_up_need_point >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)level_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_config_ptr->level_up_need_point >> 3)
                                                                          + 0x7FFF8000) )
        {
          BattlePassComp = (PlayerBattlePassComp *)&level_config_ptr->level_up_need_point;
          __asan_report_load4(&level_config_ptr->level_up_need_point);
        }
        PlayerBattlePassComp::logAddPointSplit(
          BattlePassComp,
          level_config_ptr->level_up_need_point - old_point,
          this,
          reason,
          mission_id);
        v11 = rest_add_point + old_point;
        if ( *(_BYTE *)(((unsigned __int64)&level_config_ptr->level_up_need_point >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)level_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_config_ptr->level_up_need_point >> 3)
                                                                          + 0x7FFF8000) )
        {
          __asan_report_load4(&level_config_ptr->level_up_need_point);
        }
        rest_add_point = v11 - level_config_ptr->level_up_need_point;
        old_point = 0;
        if ( *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&this->level);
        }
        ++this->level;
        v12 = Player::getBattlePassComp(player);
        PlayerBattlePassComp::logLevelUp(v12, this);
        if ( *(_BYTE *)(((unsigned __int64)&this->point >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->point >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->point);
        }
        v13 = this->point;
        if ( *(_BYTE *)(((unsigned __int64)&level_config_ptr->level_up_need_point >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)level_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_config_ptr->level_up_need_point >> 3)
                                                                          + 0x7FFF8000) )
        {
          __asan_report_load4(&level_config_ptr->level_up_need_point);
        }
        this->point = v13 - level_config_ptr->level_up_need_point;
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)v28);
        v14 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v28)->design_config.txt_config_mgr.battle_pass_excel_config_mgr;
        if ( *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&this->level);
        }
        level_config_ptr = data::BattlePassExcelConfigMgrBase::findBattlePassLevelExcelConfig(v14, this->level);
        std::shared_ptr<Config>::~shared_ptr(v28);
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)v28);
        v15 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v28)->design_config.txt_config_mgr.battle_pass_excel_config_mgr;
        if ( *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&this->level);
        }
        next_level_config_ptr = data::BattlePassExcelConfigMgrBase::findBattlePassLevelExcelConfig(v15, this->level + 1);
        std::shared_ptr<Config>::~shared_ptr(v28);
        if ( !level_config_ptr )
          break;
      }
      while ( next_level_config_ptr );
      if ( rest_add_point )
      {
        v16 = Player::getBattlePassComp(player);
        PlayerBattlePassComp::logAddPointSplit(v16, rest_add_point, this, reason, mission_id);
      }
      v17 = Player::getBattlePassComp(player);
      PlayerBattlePassComp::logAddPoint(v17, add_pointa, this, reason, mission_id);
    }
  }
};

// Line 157: range 00000000150BAD38-00000000150BADEA
int32_t __cdecl BattlePassMission::fromBin(BattlePassMission *const this, const proto::BattlePassMissionBin *bin)
{
  uint32_t v2; // ecx
  char v3; // dl
  __int64 v4; // rdx
  google::protobuf::uint32 v5; // edi
  __int64 v6; // rdx
  const proto::BattlePassMissionBin *bina; // [rsp+0h] [rbp-10h]

  bina = bin;
  v2 = proto::BattlePassMissionBin::mission_id(bin);
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  LOBYTE(bin) = v3 != 0;
  v4 = (v3 != 0) & (unsigned __int8)((char)(((unsigned __int8)this & 7) + 3) >= v3);
  if ( (_BYTE)v4 )
    __asan_report_store4(this, bin, v4);
  this->mission_id = v2;
  v5 = proto::BattlePassMissionBin::mission_status(bina);
  v6 = (*(_BYTE *)(((unsigned __int64)&this->mission_status >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->mission_status >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
  {
    v5 = (_DWORD)this + 4;
    __asan_report_store4(&this->mission_status, (((_BYTE)this + 4) & 7u) + 3, v6);
  }
  this->mission_status = v5;
  return 0;
};

// Line 164: range 00000000150BADEC-00000000150BAE9F
int32_t __cdecl BattlePassMission::toBin(const BattlePassMission *const this, proto::BattlePassMissionBin *bin)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  proto::BattlePassMissionBin::set_mission_id(bin, this->mission_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->mission_status >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->mission_status >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->mission_status);
  }
  proto::BattlePassMissionBin::set_mission_status(bin, this->mission_status);
  return 0;
};

// Line 171: range 00000000150BAEA0-00000000150BAEF8
int32_t __cdecl BattlePassMission::initWhenCreate(BattlePassMission *const this)
{
  __int64 v1; // rdx

  v1 = (*(_BYTE *)(((unsigned __int64)&this->mission_status >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->mission_status >> 3) + 0x7FFF8000));
  if ( (_BYTE)v1 )
    __asan_report_store4(&this->mission_status, (((_BYTE)this + 4) & 7u) + 3, v1);
  this->mission_status = BattlePassMission_MissionStatus_MISSION_UNFINISHED;
  return 0;
};

// Line 177: range 00000000150BAEFA-00000000150BB6AE
int32_t __cdecl PlayerBattlePassComp::fromBin(
        PlayerBattlePassComp *const this,
        const proto::PlayerDataBin *player_data_bin)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  uint32_t v6; // eax
  common::milog::MiLogStream *v7; // r14
  int v8; // r15d
  BattlePassSchedule *v9; // rax
  unsigned int *v10; // rcx
  BattlePassSchedule *v11; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,BattlePassSchedule>,false,false>,bool> v12; // rax
  common::milog::MiLogStream *v13; // r14
  uint32_t v14; // eax
  common::milog::MiLogStream *v15; // r14
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rcx
  BattlePassMission *v18; // r15
  unsigned int *v19; // rcx
  BattlePassMission *v20; // r8
  uint32_t v21; // edx
  uint32_t refresh_time; // edx
  uint32_t v23; // edx
  int32_t result; // eax
  google::protobuf::RepeatedPtrField<proto::BattlePassMissionBin>::const_iterator __for_begin_0; // [rsp+28h] [rbp-1B8h] BYREF
  google::protobuf::RepeatedPtrField<proto::BattlePassMissionBin>::const_iterator __for_end; // [rsp+30h] [rbp-1B0h] BYREF
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin; // [rsp+38h] [rbp-1A8h]
  const proto::PlayerBattlePassCompBin *bp_bin; // [rsp+40h] [rbp-1A0h]
  const google::protobuf::RepeatedPtrField<proto::BattlePassScheduleBin> *__for_range; // [rsp+48h] [rbp-198h]
  const WatcherExcelConfigMgr *watcher_config_mgr; // [rsp+50h] [rbp-190h]
  const google::protobuf::RepeatedPtrField<proto::BattlePassMissionBin> *__for_range_0; // [rsp+58h] [rbp-188h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range_1; // [rsp+60h] [rbp-180h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end_0; // [rsp+68h] [rbp-178h]
  const proto::BattlePassMissionBin *mission_bin; // [rsp+70h] [rbp-170h]
  const proto::BattlePassScheduleBin *bp_schedule_bin; // [rsp+78h] [rbp-168h]
  std::shared_ptr<Config> v36; // [rsp+80h] [rbp-160h] BYREF
  common::milog::MiLogStream v37; // [rsp+90h] [rbp-150h] BYREF
  common::milog::MiLogStream v38; // [rsp+B0h] [rbp-130h] BYREF
  char v39[272]; // [rsp+D0h] [rbp-110h] BYREF

  v3 = (unsigned __int64)v39;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 14 watcher_id:208 64 8 11 mission:201 96 88 12 schedule:181";
  *(_QWORD *)(v3 + 16) = PlayerBattlePassComp::fromBin;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862725] = -218103808;
  v5[536862726] = -202116109;
  bp_bin = proto::PlayerDataBin::battle_pass_bin(player_data_bin);
  __for_range = proto::PlayerBattlePassCompBin::schedule_bin_list(bp_bin);
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::BattlePassScheduleBin>::begin(__for_range).it_;
  *(google::protobuf::RepeatedPtrField<proto::BattlePassScheduleBin>::const_iterator *)(v3 + 64) = google::protobuf::RepeatedPtrField<proto::BattlePassScheduleBin>::end(__for_range);
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::BattlePassScheduleBin const>::operator!=(
            (const google::protobuf::internal::RepeatedPtrIterator<const proto::BattlePassScheduleBin> *const)&__for_end,
            (const google::protobuf::internal::RepeatedPtrIterator<const proto::BattlePassScheduleBin>::iterator *)(v3 + 64)) )
  {
    bp_schedule_bin = google::protobuf::internal::RepeatedPtrIterator<proto::BattlePassScheduleBin const>::operator*((const google::protobuf::internal::RepeatedPtrIterator<const proto::BattlePassScheduleBin> *const)&__for_end);
    v6 = proto::BattlePassScheduleBin::schedule_id(bp_schedule_bin);
    BattlePassSchedule::BattlePassSchedule((BattlePassSchedule *const)(v3 + 96), v6);
    if ( BattlePassSchedule::fromBin((BattlePassSchedule *const)(v3 + 96), bp_schedule_bin) )
    {
      common::milog::MiLogStream::create(
        &v38,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/battle_pass/player_battle_pass_comp.cpp",
        "fromBin",
        184);
      v7 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
             &v38,
             (const char (*)[41])"BattlePass from bin failed, schedule_id:");
      *(_DWORD *)(v3 + 48) = proto::BattlePassScheduleBin::schedule_id(bp_schedule_bin);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v38);
      v2 = -1;
      v8 = 0;
    }
    else
    {
      v9 = std::move<BattlePassSchedule &>((BattlePassSchedule *)(v3 + 96));
      v12 = std::unordered_map<unsigned int,BattlePassSchedule>::emplace<unsigned int &,BattlePassSchedule>(
              &this->schedule_map_,
              (unsigned int *)(v3 + 96),
              v9,
              v10,
              v11);
      if ( !v12.second )
      {
        common::milog::MiLogStream::create(
          &v38,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/battle_pass/player_battle_pass_comp.cpp",
          "fromBin",
          189);
        v13 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                &v38,
                (const char (*)[36])"Schedule Id duplicate, schedule_id:");
        *(_DWORD *)(v3 + 48) = proto::BattlePassScheduleBin::schedule_id(bp_schedule_bin);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream(&v38);
        v2 = -1;
        v8 = 0;
      }
      else
      {
        v8 = 1;
      }
    }
    BattlePassSchedule::~BattlePassSchedule((BattlePassSchedule *const)(v3 + 96));
    if ( v8 != 1 )
      goto LABEL_27;
    google::protobuf::internal::RepeatedPtrIterator<proto::BattlePassScheduleBin const>::operator++((google::protobuf::internal::RepeatedPtrIterator<const proto::BattlePassScheduleBin> *const)&__for_end);
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v36);
  watcher_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v36)->design_config.txt_config_mgr.watcher_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v36);
  __for_range_0 = proto::PlayerBattlePassCompBin::cur_battle_pass_mission_bin_list(bp_bin);
  __for_begin_0.it_ = google::protobuf::RepeatedPtrField<proto::BattlePassMissionBin>::begin(__for_range_0).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::BattlePassMissionBin>::end(__for_range_0).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::BattlePassMissionBin const>::operator!=(
            &__for_begin_0,
            &__for_end) )
  {
    mission_bin = google::protobuf::internal::RepeatedPtrIterator<proto::BattlePassMissionBin const>::operator*(&__for_begin_0);
    v14 = proto::BattlePassMissionBin::mission_id(mission_bin);
    if ( WatcherExcelConfigMgr::isWatcherDisused(watcher_config_mgr, v14) )
    {
      common::milog::MiLogStream::create(
        &v37,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/battle_pass/player_battle_pass_comp.cpp",
        "fromBin",
        198);
      v15 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
              &v37,
              (const char (*)[30])"watcher disused, mission_bin:");
      google::protobuf::Message::ShortDebugString[abi:cxx11](
        (std::string *)&v38,
        &mission_bin->google::protobuf::Message);
      v16 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v15, (const std::string *)&v38);
      v17 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v16, (const char (*)[9])" player:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      operator<<(v17, this->player_);
      std::string::~string(&v38);
      common::milog::MiLogStream::~MiLogStream(&v37);
    }
    else
    {
      *(_QWORD *)(v3 + 64) = 0LL;
      *(_DWORD *)(v3 + 64) = proto::BattlePassMissionBin::mission_id(mission_bin);
      BattlePassMission::fromBin((BattlePassMission *const)(v3 + 64), mission_bin);
      v18 = std::move<BattlePassMission &>((BattlePassMission *)(v3 + 64));
      *(_DWORD *)(v3 + 48) = proto::BattlePassMissionBin::mission_id(mission_bin);
      std::unordered_map<unsigned int,BattlePassMission>::emplace<unsigned int,BattlePassMission>(
        &this->cur_mission_map_,
        (unsigned int *)(v3 + 48),
        v18,
        v19,
        v20);
    }
    google::protobuf::internal::RepeatedPtrIterator<proto::BattlePassMissionBin const>::operator++(&__for_begin_0);
  }
  v21 = proto::PlayerBattlePassCompBin::cur_schedule_id(bp_bin);
  PlayerBattlePassComp::setCurScheduleId(this, v21);
  refresh_time = proto::PlayerBattlePassCompBin::last_refresh_time(bp_bin);
  PlayerBattlePassComp::setLastRefreshTime(this, refresh_time);
  v23 = proto::PlayerBattlePassCompBin::weekly_last_refresh_time(bp_bin);
  PlayerBattlePassComp::setWeeklyLastRefreshTime(this, v23);
  __for_range_1 = proto::PlayerBattlePassCompBin::cross_schedule_weekly_watcher_list(bp_bin);
  __for_begin = google::protobuf::RepeatedField<unsigned int>::begin(__for_range_1);
  __for_end_0 = google::protobuf::RepeatedField<unsigned int>::end(__for_range_1);
  while ( __for_begin != __for_end_0 )
  {
    if ( *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)__for_begin & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(__for_begin);
    }
    *(_DWORD *)(v3 + 48) = *__for_begin;
    std::set<unsigned int>::insert(
      &this->cross_schedule_weekly_watcher_set_,
      (const std::set<unsigned int>::value_type *)(v3 + 48));
    ++__for_begin;
  }
  v2 = 0;
LABEL_27:
  result = v2;
  if ( v39 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8014) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 217: range 00000000150BB6B0-00000000150BBA3D
int32_t __cdecl PlayerBattlePassComp::toBin(PlayerBattlePassComp *const this, proto::PlayerDataBin *player_data_bin)
{
  common::milog::MiLogStream *v2; // rax
  uint32_t CurScheduleId; // eax
  uint32_t LastRefreshTime; // eax
  uint32_t WeeklyLastRefreshTime; // eax
  unsigned int *v7; // rax
  google::protobuf::uint32 *v8; // rdx
  std::unordered_map<unsigned int,BattlePassSchedule>::iterator __for_begin; // [rsp+20h] [rbp-A0h] BYREF
  std::unordered_map<unsigned int,BattlePassSchedule>::iterator __for_end; // [rsp+28h] [rbp-98h] BYREF
  proto::PlayerBattlePassCompBin *bp_bin; // [rsp+30h] [rbp-90h]
  std::unordered_map<unsigned int,BattlePassSchedule> *__for_range; // [rsp+38h] [rbp-88h]
  std::unordered_map<unsigned int,BattlePassMission> *__for_range_0; // [rsp+40h] [rbp-80h]
  std::set<unsigned int> *__for_range_1; // [rsp+48h] [rbp-78h]
  const std::pair<unsigned int const,BattlePassMission> *v15; // [rsp+50h] [rbp-70h]
  std::tuple_element<0,const std::pair<unsigned int const,BattlePassMission> >::type *_; // [rsp+58h] [rbp-68h]
  std::tuple_element<1,const std::pair<unsigned int const,BattlePassMission> >::type *mission; // [rsp+60h] [rbp-60h]
  proto::BattlePassMissionBin *mission_bin; // [rsp+68h] [rbp-58h]
  const std::pair<unsigned int const,BattlePassSchedule> *v19; // [rsp+70h] [rbp-50h]
  std::tuple_element<0,const std::pair<unsigned int const,BattlePassSchedule> >::type *schedule_id; // [rsp+78h] [rbp-48h]
  std::tuple_element<1,const std::pair<unsigned int const,BattlePassSchedule> >::type *schedule; // [rsp+80h] [rbp-40h]
  proto::BattlePassScheduleBin *schedule_bin; // [rsp+88h] [rbp-38h]
  common::milog::MiLogStream v23; // [rsp+90h] [rbp-30h] BYREF

  bp_bin = proto::PlayerDataBin::mutable_battle_pass_bin(player_data_bin);
  __for_range = &this->schedule_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,BattlePassSchedule>::begin(&this->schedule_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,BattlePassSchedule>::end(&this->schedule_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,BattlePassSchedule>,false>(&__for_begin, &__for_end) )
  {
    v19 = std::__detail::_Node_iterator<std::pair<unsigned int const,BattlePassSchedule>,false,false>::operator*(&__for_begin);
    schedule_id = std::get<0ul,unsigned int const,BattlePassSchedule>(v19);
    schedule = (std::tuple_element<1,const std::pair<unsigned int const,BattlePassSchedule> >::type *)std::get<1ul,unsigned int const,BattlePassSchedule>(v19);
    schedule_bin = proto::PlayerBattlePassCompBin::add_schedule_bin_list(bp_bin);
    if ( BattlePassSchedule::toBin(schedule, schedule_bin) )
    {
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/battle_pass/player_battle_pass_comp.cpp",
        "toBin",
        224);
      v2 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
             &v23,
             (const char (*)[35])"Schedule toBin failed schedule_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, schedule_id);
      common::milog::MiLogStream::~MiLogStream(&v23);
      return -1;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,BattlePassSchedule>,false,false>::operator++(&__for_begin);
  }
  __for_range_0 = &this->cur_mission_map_;
  __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,BattlePassSchedule>,false>::__node_type *)std::unordered_map<unsigned int,BattlePassMission>::begin(&this->cur_mission_map_)._M_cur;
  __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,BattlePassSchedule>,false>::__node_type *)std::unordered_map<unsigned int,BattlePassMission>::end(__for_range_0)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,BattlePassMission>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,BattlePassMission>,false> *)&__for_begin,
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,BattlePassMission>,false> *)&__for_end) )
  {
    v15 = std::__detail::_Node_iterator<std::pair<unsigned int const,BattlePassMission>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,BattlePassMission>,false,false> *const)&__for_begin);
    _ = std::get<0ul,unsigned int const,BattlePassMission>(v15);
    mission = (std::tuple_element<1,const std::pair<unsigned int const,BattlePassMission> >::type *)std::get<1ul,unsigned int const,BattlePassMission>(v15);
    mission_bin = proto::PlayerBattlePassCompBin::add_cur_battle_pass_mission_bin_list(bp_bin);
    BattlePassMission::toBin(mission, mission_bin);
    std::__detail::_Node_iterator<std::pair<unsigned int const,BattlePassMission>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,BattlePassMission>,false,false> *const)&__for_begin);
  }
  CurScheduleId = PlayerBattlePassComp::getCurScheduleId(this);
  proto::PlayerBattlePassCompBin::set_cur_schedule_id(bp_bin, CurScheduleId);
  LastRefreshTime = PlayerBattlePassComp::getLastRefreshTime(this);
  proto::PlayerBattlePassCompBin::set_last_refresh_time(bp_bin, LastRefreshTime);
  WeeklyLastRefreshTime = PlayerBattlePassComp::getWeeklyLastRefreshTime(this);
  proto::PlayerBattlePassCompBin::set_weekly_last_refresh_time(bp_bin, WeeklyLastRefreshTime);
  __for_range_1 = &this->cross_schedule_weekly_watcher_set_;
  __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,BattlePassSchedule>,false>::__node_type *)std::set<unsigned int>::begin(&this->cross_schedule_weekly_watcher_set_)._M_node;
  __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,BattlePassSchedule>,false>::__node_type *)std::set<unsigned int>::end(__for_range_1)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_begin,
            (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_end) )
  {
    v7 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin);
    v8 = v7;
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v7);
    }
    proto::PlayerBattlePassCompBin::add_cross_schedule_weekly_watcher_list(bp_bin, *v8);
    std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin);
  }
  return 0;
};

// Line 245: range 00000000150BBA3E-00000000150BBD05
int32_t __cdecl PlayerBattlePassComp::init(PlayerBattlePassComp *const this)
{
  std::weak_ptr<PlayerBattlePassComp> *v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  int32_t result; // eax
  std::weak_ptr<PlayerBattlePassComp> *EventComp; // [rsp+10h] [rbp-B0h]
  std::weak_ptr<PlayerBattlePassComp> *p_this_wtr; // [rsp+20h] [rbp-A0h]
  std::weak_ptr<Observer> v7; // [rsp+30h] [rbp-90h] BYREF
  std::shared_ptr<PlayerBattlePassComp> __r; // [rsp+40h] [rbp-80h] BYREF
  char v9[112]; // [rsp+50h] [rbp-70h] BYREF

  v1 = (std::weak_ptr<PlayerBattlePassComp> *)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = (std::weak_ptr<PlayerBattlePassComp> *)v2;
  }
  v1->_M_ptr = (std::__weak_ptr<PlayerBattlePassComp,(__gnu_cxx::_Lock_policy)2>::element_type *)1102416563;
  v1->_M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)"1 32 16 12 this_wtr:246";
  v1[1]._M_ptr = (std::__weak_ptr<PlayerBattlePassComp,(__gnu_cxx::_Lock_policy)2>::element_type *)PlayerBattlePassComp::init;
  v3 = (unsigned __int64)v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  toThisPtr<PlayerBattlePassComp>((PlayerBattlePassComp *)&__r);
  std::weak_ptr<PlayerBattlePassComp>::weak_ptr<PlayerBattlePassComp,void>(v1 + 2, &__r);
  std::shared_ptr<PlayerBattlePassComp>::~shared_ptr(&__r);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  p_this_wtr = (std::weak_ptr<PlayerBattlePassComp> *)Player::getEventComp(this->player_);
  std::weak_ptr<PlayerBattlePassComp>::weak_ptr((std::weak_ptr<PlayerBattlePassComp> *const)&__r, v1 + 2);
  PlayerEventComp::registerObserver<PlayerBattlePassComp,WatcherProgressUpdateEvent>(
    (PlayerEventComp *const)&v7,
    p_this_wtr,
    (void (*)(PlayerBattlePassComp *, const WatcherProgressUpdateEvent *))&__r);
  std::weak_ptr<Observer>::~weak_ptr(&v7);
  std::weak_ptr<PlayerBattlePassComp>::~weak_ptr((std::weak_ptr<PlayerBattlePassComp> *const)&__r);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  EventComp = (std::weak_ptr<PlayerBattlePassComp> *)Player::getEventComp(this->player_);
  std::weak_ptr<PlayerBattlePassComp>::weak_ptr((std::weak_ptr<PlayerBattlePassComp> *const)&v7, v1 + 2);
  PlayerEventComp::registerObserver<PlayerBattlePassComp,OpenStateChangeEvent>(
    (PlayerEventComp *const)&__r,
    EventComp,
    (void (*)(PlayerBattlePassComp *, const OpenStateChangeEvent *))&v7);
  std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&__r);
  std::weak_ptr<PlayerBattlePassComp>::~weak_ptr((std::weak_ptr<PlayerBattlePassComp> *const)&v7);
  std::weak_ptr<PlayerBattlePassComp>::~weak_ptr(v1 + 2);
  result = 0;
  if ( v9 == (char *)v1 )
  {
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v1->_M_ptr = (std::__weak_ptr<PlayerBattlePassComp,(__gnu_cxx::_Lock_policy)2>::element_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 254: range 00000000150BBD06-00000000150BBD14
int32_t __cdecl PlayerBattlePassComp::onFirstLogin(PlayerBattlePassComp *const this)
{
  return 0;
};

// Line 260: range 00000000150BBD16-00000000150BBD4F
int32_t __cdecl PlayerBattlePassComp::onLogin(PlayerBattlePassComp *const this, bool is_new_player)
{
  PlayerBattlePassComp::tryRefreshSchedule(this, 0);
  PlayerBattlePassComp::tryRefreshMission(this, 0);
  return 0;
};

// Line 268: range 00000000150BBD50-00000000150BBD80
void __cdecl PlayerBattlePassComp::onDailyRefresh(PlayerBattlePassComp *const this)
{
  PlayerBattlePassComp::tryRefreshSchedule(this, 1);
  PlayerBattlePassComp::tryRefreshMission(this, 1);
};

// Line 275: range 00000000150BBD82-00000000150BBDF7
void __cdecl PlayerBattlePassComp::onOpenStateChange(
        PlayerBattlePassComp *const this,
        const OpenStateChangeEvent *event)
{
  if ( *(_BYTE *)(((unsigned __int64)&event->key >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->key >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->key);
  }
  if ( event->key == 1300 )
  {
    PlayerBattlePassComp::tryRefreshSchedule(this, 1);
    PlayerBattlePassComp::tryRefreshMission(this, 1);
  }
};

// Line 284: range 00000000150BBDF8-00000000150BC240
int32_t __cdecl PlayerBattlePassComp::notifyAllData(PlayerBattlePassComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  std::__shared_ptr_access<proto::BattlePassAllDataNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  std::__shared_ptr_access<proto::BattlePassAllDataNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::__shared_ptr_access<proto::BattlePassAllDataNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  proto::BattlePassSchedule *v7; // r15
  bool isEpic; // r14
  uint32_t PlatformType; // eax
  std::__shared_ptr_access<proto::BattlePassAllDataNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  Player *player; // r14
  int32_t result; // eax
  std::unordered_map<unsigned int,BattlePassMission>::iterator __for_begin; // [rsp+18h] [rbp-C8h] BYREF
  std::unordered_map<unsigned int,BattlePassMission>::iterator __for_end; // [rsp+20h] [rbp-C0h] BYREF
  BattlePassSchedule *cur_schedule_ptr; // [rsp+28h] [rbp-B8h]
  const WatcherExcelConfigMgr *watcher_config_mgr; // [rsp+30h] [rbp-B0h]
  std::unordered_map<unsigned int,BattlePassMission> *__for_range; // [rsp+38h] [rbp-A8h]
  std::pair<unsigned int const,BattlePassMission> *__in; // [rsp+40h] [rbp-A0h]
  std::tuple_element<0,std::pair<unsigned int const,BattlePassMission> >::type *mission_id; // [rsp+48h] [rbp-98h]
  std::tuple_element<1,std::pair<unsigned int const,BattlePassMission> >::type *mission; // [rsp+50h] [rbp-90h]
  proto::BattlePassMission *mission_proto; // [rsp+58h] [rbp-88h]
  std::shared_ptr<const google::protobuf::Message> v22; // [rsp+60h] [rbp-80h] BYREF
  char v23[112]; // [rsp+70h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 13 proto_ptr:285";
  *(_QWORD *)(v1 + 16) = PlayerBattlePassComp::notifyAllData;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  common::tools::perf::make_shared<proto::BattlePassAllDataNotify>();
  cur_schedule_ptr = PlayerBattlePassComp::findCurSchedule(this);
  v4 = std::__shared_ptr_access<proto::BattlePassAllDataNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::BattlePassAllDataNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
  proto::BattlePassAllDataNotify::set_have_cur_schedule(v4, 0);
  if ( cur_schedule_ptr )
  {
    v5 = std::__shared_ptr_access<proto::BattlePassAllDataNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::BattlePassAllDataNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    proto::BattlePassAllDataNotify::set_have_cur_schedule(v5, 1);
    v6 = std::__shared_ptr_access<proto::BattlePassAllDataNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::BattlePassAllDataNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    v7 = proto::BattlePassAllDataNotify::mutable_cur_schedule(v6);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    isEpic = Player::isEpic(this->player_);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    PlatformType = Player::getPlatformType(this->player_);
    BattlePassSchedule::toClient(cur_schedule_ptr, PlatformType, isEpic, v7);
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v22);
  watcher_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v22)->design_config.txt_config_mgr.watcher_config_mgr;
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v22);
  __for_range = &this->cur_mission_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,BattlePassMission>::begin(&this->cur_mission_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,BattlePassMission>::end(&this->cur_mission_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,BattlePassMission>,false>(&__for_begin, &__for_end) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,BattlePassMission>,false,false>::operator*(&__for_begin);
    mission_id = std::get<0ul,unsigned int const,BattlePassMission>(__in);
    mission = std::get<1ul,unsigned int const,BattlePassMission>(__in);
    if ( *(_BYTE *)(((unsigned __int64)mission_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)mission_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)mission_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(mission_id);
    }
    if ( !WatcherExcelConfigMgr::isWatcherDisused(watcher_config_mgr, *mission_id) )
    {
      v10 = std::__shared_ptr_access<proto::BattlePassAllDataNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::BattlePassAllDataNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      mission_proto = proto::BattlePassAllDataNotify::add_mission_list(v10);
      if ( *(_BYTE *)(((unsigned __int64)mission_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)mission_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)mission_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(mission_id);
      }
      PlayerBattlePassComp::fillMissionProto(this, *mission_id, mission_proto);
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,BattlePassMission>,false,false>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  player = this->player_;
  std::dynamic_pointer_cast<google::protobuf::Message const,proto::BattlePassAllDataNotify>((const std::shared_ptr<proto::BattlePassAllDataNotify> *)&v22);
  Player::sendMessage(player, &v22, 0LL);
  std::shared_ptr<google::protobuf::Message const>::~shared_ptr(&v22);
  std::shared_ptr<proto::BattlePassAllDataNotify>::~shared_ptr((std::shared_ptr<proto::BattlePassAllDataNotify> *const)(v1 + 32));
  result = 0;
  if ( v23 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 309: range 00000000150BC242-00000000150BC446
void __cdecl PlayerBattlePassComp::tryRefreshSchedule(PlayerBattlePassComp *const this, bool is_notify)
{
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  std::allocator<unsigned int> __a; // [rsp+1Bh] [rbp-65h] BYREF
  uint32_t now; // [rsp+1Ch] [rbp-64h]
  uint32_t config_cur_schedule_id; // [rsp+20h] [rbp-60h]
  uint32_t last_schedule_id; // [rsp+24h] [rbp-5Ch]
  std::initializer_list<unsigned int> __l; // [rsp+28h] [rbp-58h] BYREF
  std::vector<unsigned int> keep_id_vec; // [rsp+40h] [rbp-40h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  BasicComp = Player::getBasicComp(this->player_);
  if ( PlayerBasicComp::isStateOpen(BasicComp, 0x514u) )
  {
    now = common::tools::TimeUtils::getNow();
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&__l._M_len);
    v3 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&__l._M_len);
    config_cur_schedule_id = BattlePassExcelConfigMgr::getCurScheduleId(
                               &v3->design_config.txt_config_mgr.battle_pass_excel_config_mgr,
                               now);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&__l._M_len);
    if ( config_cur_schedule_id == PlayerBattlePassComp::getCurScheduleId(this) )
    {
      if ( is_notify )
        PlayerBattlePassComp::notifyCurSchedule(this);
    }
    else
    {
      last_schedule_id = PlayerBattlePassComp::getCurScheduleId(this);
      if ( last_schedule_id )
        PlayerBattlePassComp::finishSchedule(this, last_schedule_id, is_notify);
      if ( config_cur_schedule_id )
        PlayerBattlePassComp::startSchedule(this, config_cur_schedule_id, is_notify);
      __l._M_array = (std::initializer_list<unsigned int>::iterator)__PAIR64__(config_cur_schedule_id, last_schedule_id);
      std::allocator<unsigned int>::allocator(&__a);
      std::vector<unsigned int>::vector(&keep_id_vec, (std::initializer_list<unsigned int>)__PAIR128__(2LL, &__l), &__a);
      PlayerBattlePassComp::checkOutdateScedule(this, &keep_id_vec);
      std::vector<unsigned int>::~vector(&keep_id_vec);
      std::allocator<unsigned int>::~allocator(&__a);
    }
    PlayerBattlePassComp::internalCheckSendNotifyMail(this);
  }
};

// Line 344: range 00000000150BC448-00000000150BCACC
void __fastcall PlayerBattlePassComp::finishSchedule(
        PlayerBattlePassComp *const this,
        uint32_t schedule_id,
        bool is_notify)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rcx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rcx
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v13; // rax
  uint32_t *v14; // rdx
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v15; // rax
  unsigned int *v16; // rdx
  uint32_t CurScheduleId; // eax
  unsigned int mission_id_1; // [rsp+18h] [rbp-128h]
  std::unordered_map<unsigned int,BattlePassMission>::iterator __for_begin; // [rsp+20h] [rbp-120h] BYREF
  std::unordered_map<unsigned int,BattlePassMission>::iterator __for_end; // [rsp+28h] [rbp-118h] BYREF
  const data::BattlePassScheduleExcelConfig *config_ptr; // [rsp+38h] [rbp-108h]
  std::unordered_map<unsigned int,BattlePassMission> *__for_range; // [rsp+40h] [rbp-100h]
  std::vector<unsigned int> *__for_range_0; // [rsp+48h] [rbp-F8h]
  std::vector<unsigned int> *__for_range_1; // [rsp+50h] [rbp-F0h]
  std::pair<unsigned int const,BattlePassMission> *__in; // [rsp+58h] [rbp-E8h]
  std::tuple_element<0,std::pair<unsigned int const,BattlePassMission> >::type *mission_id; // [rsp+60h] [rbp-E0h]
  std::tuple_element<1,std::pair<unsigned int const,BattlePassMission> >::type *_; // [rsp+68h] [rbp-D8h]
  std::shared_ptr<Config> v30; // [rsp+70h] [rbp-D0h] BYREF
  common::milog::MiLogStream v31; // [rsp+80h] [rbp-C0h] BYREF
  char v32[160]; // [rsp+A0h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 15 schedule_id:343 64 24 11 del_vec:357";
  *(_QWORD *)(v3 + 16) = PlayerBattlePassComp::finishSchedule;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218103808;
  v5[536862723] = -202116109;
  *(_DWORD *)(v3 + 48) = schedule_id;
  if ( PlayerBattlePassComp::findSchedule(this, *(_DWORD *)(v3 + 48)) )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v30);
    v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v30);
    config_ptr = data::BattlePassExcelConfigMgrBase::findBattlePassScheduleExcelConfig(
                   &v9->design_config.txt_config_mgr.battle_pass_excel_config_mgr,
                   *(_DWORD *)(v3 + 48));
    std::shared_ptr<Config>::~shared_ptr(&v30);
    if ( config_ptr )
    {
      std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 64));
      __for_range = &this->cur_mission_map_;
      __for_begin._M_cur = std::unordered_map<unsigned int,BattlePassMission>::begin(&this->cur_mission_map_)._M_cur;
      __for_end._M_cur = std::unordered_map<unsigned int,BattlePassMission>::end(&this->cur_mission_map_)._M_cur;
      while ( std::__detail::operator!=<std::pair<unsigned int const,BattlePassMission>,false>(&__for_begin, &__for_end) )
      {
        __in = std::__detail::_Node_iterator<std::pair<unsigned int const,BattlePassMission>,false,false>::operator*(&__for_begin);
        mission_id = std::get<0ul,unsigned int const,BattlePassMission>(__in);
        _ = std::get<1ul,unsigned int const,BattlePassMission>(__in);
        std::vector<unsigned int>::push_back((std::vector<unsigned int> *const)(v3 + 64), mission_id);
        std::__detail::_Node_iterator<std::pair<unsigned int const,BattlePassMission>,false,false>::operator++(&__for_begin);
      }
      __for_range_0 = (std::vector<unsigned int> *)(v3 + 64);
      __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,BattlePassMission>,false>::__node_type *)std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v3 + 64))._M_current;
      __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,BattlePassMission>,false>::__node_type *)std::vector<unsigned int>::end(__for_range_0)._M_current;
      while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_begin,
                (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_end) )
      {
        v13 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin);
        v14 = v13;
        if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v13);
        }
        PlayerBattlePassComp::delMission(this, *v14);
        __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin);
      }
      if ( is_notify )
        PlayerBattlePassComp::notifyMission(this, (const std::vector<unsigned int> *)(v3 + 64));
      __for_range_1 = (std::vector<unsigned int> *)(v3 + 64);
      __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,BattlePassMission>,false>::__node_type *)std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v3 + 64))._M_current;
      __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,BattlePassMission>,false>::__node_type *)std::vector<unsigned int>::end(__for_range_1)._M_current;
      while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_begin,
                (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_end) )
      {
        v15 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin);
        v16 = v15;
        if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v15);
        }
        mission_id_1 = *v16;
        CurScheduleId = PlayerBattlePassComp::getCurScheduleId(this);
        PlayerBattlePassComp::logMissionUpdate(this, CurScheduleId, mission_id_1);
        __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin);
      }
      PlayerBattlePassComp::setCurScheduleId(this, 0);
      PlayerBattlePassComp::setLastRefreshTime(this, 0);
      if ( is_notify )
        PlayerBattlePassComp::notifyCurSchedule(this);
      std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 64));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v31,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/battle_pass/player_battle_pass_comp.cpp",
        "finishSchedule",
        354);
      v10 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(&v31, (const char (*)[34])off_256FAA40);
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v11, (const char (*)[9])" player:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      operator<<(v12, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v31);
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v31,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/battle_pass/player_battle_pass_comp.cpp",
      "finishSchedule",
      348);
    v6 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(&v31, (const char (*)[32])off_256FAA00);
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 48));
    v8 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v7, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    operator<<(v8, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v31);
  }
  if ( v32 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 385: range 00000000150BCACE-00000000150BD1F7
void __fastcall PlayerBattlePassComp::startSchedule(
        PlayerBattlePassComp *const this,
        uint32_t schedule_id,
        bool is_notify)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rcx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool v10; // r14
  common::milog::MiLogStream *v11; // rax
  BattlePassSchedule *v12; // rax
  unsigned int *v13; // rcx
  BattlePassSchedule *v14; // r8
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  unsigned int *v16; // rax
  unsigned int *v17; // rdx
  std::__detail::_Node_iterator_base<unsigned int,false>::__node_type *M_cur; // r14
  std::__detail::_Node_iterator_base<unsigned int,false>::__node_type *v19; // r15
  unsigned int *v20; // rax
  uint32_t *v21; // rdx
  uint32_t CurScheduleId; // eax
  std::allocator<unsigned int> __a; // [rsp+27h] [rbp-1C9h] BYREF
  uint32_t mission_id_0; // [rsp+28h] [rbp-1C8h]
  unsigned int mission_id; // [rsp+2Ch] [rbp-1C4h]
  std::unordered_set<unsigned int>::iterator __for_begin; // [rsp+30h] [rbp-1C0h] BYREF
  std::unordered_set<unsigned int>::iterator __for_end; // [rsp+38h] [rbp-1B8h] BYREF
  std::unordered_set<unsigned int> *__for_range; // [rsp+40h] [rbp-1B0h]
  std::unordered_set<unsigned int> *__for_range_0; // [rsp+48h] [rbp-1A8h]
  std::shared_ptr<Config> v31; // [rsp+50h] [rbp-1A0h] BYREF
  std::vector<unsigned int> mission_id_vec; // [rsp+60h] [rbp-190h] BYREF
  common::milog::MiLogStream v33; // [rsp+80h] [rbp-170h] BYREF
  char v34[336]; // [rsp+A0h] [rbp-150h] BYREF

  v3 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(288LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 15 schedule_id:384 64 56 18 mission_id_set:401 160 88 12 schedule:396";
  *(_QWORD *)(v3 + 16) = PlayerBattlePassComp::startSchedule;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862723] = -234881024;
  v5[536862724] = -218959118;
  v5[536862727] = -218103808;
  v5[536862728] = -202116109;
  *(_DWORD *)(v3 + 48) = schedule_id;
  if ( common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,BattlePassSchedule>,unsigned int>(
         &this->schedule_map_,
         (const unsigned int *)(v3 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v33,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/battle_pass/player_battle_pass_comp.cpp",
      "startSchedule",
      388);
    v6 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(&v33, (const char (*)[29])off_256FAB40);
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 48));
    v8 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v7, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    operator<<(v8, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v33);
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v31);
    v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v31);
    v10 = data::BattlePassExcelConfigMgrBase::findBattlePassScheduleExcelConfig(
            &v9->design_config.txt_config_mgr.battle_pass_excel_config_mgr,
            *(_DWORD *)(v3 + 48)) == 0LL;
    std::shared_ptr<Config>::~shared_ptr(&v31);
    if ( v10 )
    {
      common::milog::MiLogStream::create(
        &v33,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/battle_pass/player_battle_pass_comp.cpp",
        "startSchedule",
        393);
      v11 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
              &v33,
              (const char (*)[40])"schedule config not exist, schedule_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v33);
    }
    else
    {
      BattlePassSchedule::BattlePassSchedule((BattlePassSchedule *const)(v3 + 160), *(_DWORD *)(v3 + 48));
      BattlePassSchedule::initWhenCreate((BattlePassSchedule *const)(v3 + 160));
      v12 = std::move<BattlePassSchedule &>((BattlePassSchedule *)(v3 + 160));
      std::unordered_map<unsigned int,BattlePassSchedule>::emplace<unsigned int &,BattlePassSchedule>(
        &this->schedule_map_,
        (unsigned int *)(v3 + 160),
        v12,
        v13,
        v14);
      PlayerBattlePassComp::setCurScheduleId(this, *(_DWORD *)(v3 + 160));
      PlayerBattlePassComp::setLastRefreshTime(this, 0);
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v31);
      v15 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v31);
      BattlePassExcelConfigMgr::getScheduleMissionSet(
        (std::unordered_set<unsigned int> *)(v3 + 64),
        &v15->design_config.txt_config_mgr.battle_pass_excel_config_mgr,
        *(_DWORD *)(v3 + 160));
      std::shared_ptr<Config>::~shared_ptr(&v31);
      __for_range = (std::unordered_set<unsigned int> *)(v3 + 64);
      __for_begin._M_cur = std::unordered_set<unsigned int>::begin((std::unordered_set<unsigned int> *const)(v3 + 64))._M_cur;
      __for_end._M_cur = std::unordered_set<unsigned int>::end((std::unordered_set<unsigned int> *const)(v3 + 64))._M_cur;
      while ( std::__detail::operator!=<unsigned int,false>(&__for_begin, &__for_end) )
      {
        v16 = (unsigned int *)std::__detail::_Node_iterator<unsigned int,true,false>::operator*(&__for_begin);
        v17 = v16;
        if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v16);
        }
        mission_id = *v17;
        PlayerBattlePassComp::addMission(this, mission_id);
        std::__detail::_Node_iterator<unsigned int,true,false>::operator++(&__for_begin);
      }
      if ( is_notify )
      {
        M_cur = std::unordered_set<unsigned int>::begin((std::unordered_set<unsigned int> *const)(v3 + 64))._M_cur;
        v19 = std::unordered_set<unsigned int>::end((std::unordered_set<unsigned int> *const)(v3 + 64))._M_cur;
        std::allocator<unsigned int>::allocator(&__a);
        std::vector<unsigned int>::vector<std::__detail::_Node_iterator<unsigned int,true,false>,void>(
          &mission_id_vec,
          (std::__detail::_Node_iterator<unsigned int,true,false>)M_cur,
          (std::__detail::_Node_iterator<unsigned int,true,false>)v19,
          &__a);
        PlayerBattlePassComp::notifyMission(this, &mission_id_vec);
        std::vector<unsigned int>::~vector(&mission_id_vec);
        std::allocator<unsigned int>::~allocator(&__a);
        PlayerBattlePassComp::notifyCurSchedule(this);
      }
      __for_range_0 = (std::unordered_set<unsigned int> *)(v3 + 64);
      __for_begin._M_cur = std::unordered_set<unsigned int>::begin((std::unordered_set<unsigned int> *const)(v3 + 64))._M_cur;
      __for_end._M_cur = std::unordered_set<unsigned int>::end(__for_range_0)._M_cur;
      while ( std::__detail::operator!=<unsigned int,false>(&__for_begin, &__for_end) )
      {
        v20 = (unsigned int *)std::__detail::_Node_iterator<unsigned int,true,false>::operator*(&__for_begin);
        v21 = v20;
        if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v20 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v20);
        }
        mission_id_0 = *v21;
        CurScheduleId = PlayerBattlePassComp::getCurScheduleId(this);
        PlayerBattlePassComp::logMissionUpdate(this, CurScheduleId, mission_id_0);
        std::__detail::_Node_iterator<unsigned int,true,false>::operator++(&__for_begin);
      }
      std::unordered_set<unsigned int>::~unordered_set((std::unordered_set<unsigned int> *const)(v3 + 64));
      BattlePassSchedule::~BattlePassSchedule((BattlePassSchedule *const)(v3 + 160));
    }
  }
  if ( v34 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF800C) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF801C) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8020) = -168430091;
  }
};

// Line 418: range 00000000150BD1F8-00000000150BD5A9
void __cdecl PlayerBattlePassComp::checkOutdateScedule(
        PlayerBattlePassComp *const this,
        const std::vector<unsigned int> *keep_id_vec)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  unsigned int v5; // eax
  std::tuple_element<0,std::pair<unsigned int const,BattlePassSchedule> >::type v6; // r14d
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v7; // rax
  _DWORD *v8; // rdx
  std::unordered_map<unsigned int,BattlePassSchedule>::iterator __for_begin; // [rsp+18h] [rbp-E8h] BYREF
  std::unordered_map<unsigned int,BattlePassSchedule>::iterator __for_end; // [rsp+20h] [rbp-E0h] BYREF
  std::unordered_map<unsigned int,BattlePassSchedule> *__for_range; // [rsp+28h] [rbp-D8h]
  std::vector<unsigned int> *__for_range_0; // [rsp+30h] [rbp-D0h]
  std::pair<unsigned int const,BattlePassSchedule> *__in; // [rsp+38h] [rbp-C8h]
  std::tuple_element<0,std::pair<unsigned int const,BattlePassSchedule> >::type *id; // [rsp+40h] [rbp-C0h]
  std::tuple_element<1,std::pair<unsigned int const,BattlePassSchedule> >::type *_; // [rsp+48h] [rbp-B8h]
  char v16[176]; // [rsp+50h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 6 id:438 64 24 17 delete_id_vec:419";
  *(_QWORD *)(v2 + 16) = PlayerBattlePassComp::checkOutdateScedule;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 64));
  if ( PlayerBattlePassComp::getCurScheduleId(this) )
    v5 = 2;
  else
    v5 = 1;
  if ( std::unordered_map<unsigned int,BattlePassSchedule>::size(&this->schedule_map_) > v5 )
  {
    __for_range = &this->schedule_map_;
    __for_begin._M_cur = std::unordered_map<unsigned int,BattlePassSchedule>::begin(&this->schedule_map_)._M_cur;
    __for_end._M_cur = std::unordered_map<unsigned int,BattlePassSchedule>::end(&this->schedule_map_)._M_cur;
    while ( std::__detail::operator!=<std::pair<unsigned int const,BattlePassSchedule>,false>(&__for_begin, &__for_end) )
    {
      __in = std::__detail::_Node_iterator<std::pair<unsigned int const,BattlePassSchedule>,false,false>::operator*(&__for_begin);
      id = std::get<0ul,unsigned int const,BattlePassSchedule>(__in);
      _ = std::get<1ul,unsigned int const,BattlePassSchedule>(__in);
      if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(id);
      }
      v6 = *id;
      if ( v6 != PlayerBattlePassComp::getCurScheduleId(this)
        && !common::tools::MiscUtils::isContains<unsigned int>(keep_id_vec, id) )
      {
        std::vector<unsigned int>::push_back((std::vector<unsigned int> *const)(v2 + 64), id);
      }
      std::__detail::_Node_iterator<std::pair<unsigned int const,BattlePassSchedule>,false,false>::operator++(&__for_begin);
    }
    __for_range_0 = (std::vector<unsigned int> *)(v2 + 64);
    __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,BattlePassSchedule>,false>::__node_type *)std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v2 + 64))._M_current;
    __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,BattlePassSchedule>,false>::__node_type *)std::vector<unsigned int>::end(__for_range_0)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_begin,
              (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_end) )
    {
      v7 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin);
      v8 = v7;
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v7);
      }
      *(_DWORD *)(v2 + 48) = *v8;
      std::unordered_map<unsigned int,BattlePassSchedule>::erase(
        &this->schedule_map_,
        (const std::unordered_map<unsigned int,BattlePassSchedule>::key_type *)(v2 + 48));
      __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin);
    }
  }
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 64));
  if ( v16 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 445: range 00000000150BD5AA-00000000150BD7BD
void __fastcall PlayerBattlePassComp::restartScheduleByGm(PlayerBattlePassComp *const this, uint32_t schedule_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::allocator<unsigned int> __a; // [rsp+23h] [rbp-9Dh] BYREF
  uint32_t last_schedule_id; // [rsp+24h] [rbp-9Ch]
  std::initializer_list<unsigned int> __l; // [rsp+28h] [rbp-98h] BYREF
  char v8[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 15 schedule_id:444";
  *(_QWORD *)(v2 + 16) = PlayerBattlePassComp::restartScheduleByGm;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = schedule_id;
  last_schedule_id = PlayerBattlePassComp::getCurScheduleId(this);
  if ( last_schedule_id )
    PlayerBattlePassComp::finishSchedule(this, last_schedule_id, 1);
  std::unordered_map<unsigned int,BattlePassSchedule>::erase(
    &this->schedule_map_,
    (const std::unordered_map<unsigned int,BattlePassSchedule>::key_type *)(v2 + 32));
  PlayerBattlePassComp::startSchedule(this, *(_DWORD *)(v2 + 32), 1);
  LODWORD(__l._M_array) = *(_DWORD *)(v2 + 32);
  HIDWORD(__l._M_array) = last_schedule_id;
  std::allocator<unsigned int>::allocator(&__a);
  std::vector<unsigned int>::vector(
    (std::vector<unsigned int> *const)&__l._M_len,
    (std::initializer_list<unsigned int>)__PAIR128__(2LL, &__l),
    &__a);
  PlayerBattlePassComp::checkOutdateScedule(this, (const std::vector<unsigned int> *)&__l._M_len);
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)&__l._M_len);
  std::allocator<unsigned int>::~allocator(&__a);
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 458: range 00000000150BD7BE-00000000150BD911
BattlePassSchedule *__fastcall PlayerBattlePassComp::findSchedule(
        PlayerBattlePassComp *const this,
        uint32_t schedule_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  BattlePassSchedule *result; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,BattlePassSchedule>,false> __y; // [rsp+18h] [rbp-88h] BYREF
  char v7[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 15 schedule_id:457 64 8 8 iter:459";
  *(_QWORD *)(v2 + 16) = PlayerBattlePassComp::findSchedule;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = schedule_id;
  *(std::unordered_map<unsigned int,BattlePassSchedule>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,BattlePassSchedule>::find(
                                                                                  &this->schedule_map_,
                                                                                  (const std::unordered_map<unsigned int,BattlePassSchedule>::key_type *)(v2 + 48));
  __y._M_cur = std::unordered_map<unsigned int,BattlePassSchedule>::end(&this->schedule_map_)._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned int const,BattlePassSchedule>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,BattlePassSchedule>,false> *)(v2 + 64),
         &__y) )
  {
    result = 0LL;
  }
  else
  {
    result = &std::__detail::_Node_iterator<std::pair<unsigned int const,BattlePassSchedule>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,BattlePassSchedule>,false,false> *const)(v2 + 64))->second;
  }
  if ( v7 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 468: range 00000000150BD912-00000000150BD93B
BattlePassSchedule *__cdecl PlayerBattlePassComp::findCurSchedule(PlayerBattlePassComp *const this)
{
  uint32_t CurScheduleId; // edx

  CurScheduleId = PlayerBattlePassComp::getCurScheduleId(this);
  return PlayerBattlePassComp::findSchedule(this, CurScheduleId);
};

// Line 473: range 00000000150BD93C-00000000150BDBAD
void __cdecl PlayerBattlePassComp::notifyCurSchedule(PlayerBattlePassComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  std::__shared_ptr_access<proto::BattlePassCurScheduleUpdateNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  std::__shared_ptr_access<proto::BattlePassCurScheduleUpdateNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::__shared_ptr_access<proto::BattlePassCurScheduleUpdateNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  proto::BattlePassSchedule *v7; // r15
  bool isEpic; // r14
  uint32_t PlatformType; // esi
  Player *player; // r14
  const BattlePassSchedule *cur_schedule_ptr; // [rsp+18h] [rbp-88h]
  std::shared_ptr<proto::BattlePassCurScheduleUpdateNotify> __r; // [rsp+20h] [rbp-80h] BYREF
  char v13[112]; // [rsp+30h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 13 proto_ptr:474";
  *(_QWORD *)(v1 + 16) = PlayerBattlePassComp::notifyCurSchedule;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  common::tools::perf::make_shared<proto::BattlePassCurScheduleUpdateNotify>();
  cur_schedule_ptr = PlayerBattlePassComp::findCurSchedule(this);
  v4 = std::__shared_ptr_access<proto::BattlePassCurScheduleUpdateNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::BattlePassCurScheduleUpdateNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
  proto::BattlePassCurScheduleUpdateNotify::set_have_cur_schedule(v4, 0);
  if ( cur_schedule_ptr )
  {
    v5 = std::__shared_ptr_access<proto::BattlePassCurScheduleUpdateNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::BattlePassCurScheduleUpdateNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    proto::BattlePassCurScheduleUpdateNotify::set_have_cur_schedule(v5, 1);
    v6 = std::__shared_ptr_access<proto::BattlePassCurScheduleUpdateNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::BattlePassCurScheduleUpdateNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    v7 = proto::BattlePassCurScheduleUpdateNotify::mutable_cur_schedule(v6);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    isEpic = Player::isEpic(this->player_);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    PlatformType = Player::getPlatformType(this->player_);
    BattlePassSchedule::toClient(cur_schedule_ptr, PlatformType, isEpic, v7);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  player = this->player_;
  std::dynamic_pointer_cast<google::protobuf::Message const,proto::BattlePassCurScheduleUpdateNotify>(&__r);
  Player::sendMessage(player, (common::minet::ConstMessagePtr *)&__r, 0LL);
  std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&__r);
  std::shared_ptr<proto::BattlePassCurScheduleUpdateNotify>::~shared_ptr((std::shared_ptr<proto::BattlePassCurScheduleUpdateNotify> *const)(v1 + 32));
  if ( v13 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 487: range 00000000150BDBAE-00000000150BDC36
int32_t __cdecl PlayerBattlePassComp::addCurSchedulePointByGm(PlayerBattlePassComp *const this, uint32_t add_point)
{
  BattlePassSchedule *cur_schedule_ptr; // [rsp+18h] [rbp-8h]

  cur_schedule_ptr = PlayerBattlePassComp::findCurSchedule(this);
  if ( !cur_schedule_ptr )
    return -1;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  BattlePassSchedule::addPoint(cur_schedule_ptr, add_point, 2u, 0, this->player_);
  PlayerBattlePassComp::notifyCurSchedule(this);
  return 0;
};

// Line 498: range 00000000150BDC38-00000000150BE6D0
__int64 __fastcall PlayerBattlePassComp::checkCanBuyBattlePass(
        PlayerBattlePassComp *const this,
        uint32_t schedule_id,
        uint32_t play_type)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rcx
  __int64 result; // rax
  BattlePassExcelConfigMgr *p_battle_pass_excel_config_mgr; // rcx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  unsigned int v11; // eax
  PlayerItemComp *ItemComp; // r14
  common::milog::MiLogStream *v13; // rax
  bool isBattlePassClosed; // [rsp+Ch] [rbp-154h]
  uint32_t end_time; // [rsp+Ch] [rbp-154h]
  std::initializer_list<unsigned int> __la; // [rsp+10h] [rbp-150h]
  PlayerItemComp *__l; // [rsp+10h] [rbp-150h]
  std::allocator<unsigned int> __a; // [rsp+3Fh] [rbp-121h] BYREF
  std::initializer_list<unsigned int> v20; // [rsp+40h] [rbp-120h] BYREF
  const BattlePassSchedule *schedule_ptr; // [rsp+50h] [rbp-110h]
  const data::BattlePassScheduleExcelConfig *schedule_config_ptr; // [rsp+58h] [rbp-108h]
  std::shared_ptr<Config> v23; // [rsp+60h] [rbp-100h] BYREF
  std::vector<unsigned int> reward_id_vec; // [rsp+70h] [rbp-F0h] BYREF
  common::milog::MiLogStream v25; // [rsp+90h] [rbp-D0h] BYREF
  char v26[176]; // [rsp+B0h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 13 play_type:497 64 24 17 action_reason:524";
  *(_QWORD *)(v3 + 16) = PlayerBattlePassComp::checkCanBuyBattlePass;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218103808;
  v5[536862723] = -202116109;
  *(_DWORD *)(v3 + 48) = play_type;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v23);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v23);
  isBattlePassClosed = FeatureSwitchMgr::isBattlePassClosed(&v6->feature_switch_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v23);
  if ( !isBattlePassClosed )
  {
    schedule_ptr = PlayerBattlePassComp::findCurSchedule(this);
    if ( !schedule_ptr )
      goto LABEL_12;
    if ( *(_BYTE *)(((unsigned __int64)schedule_ptr >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)schedule_ptr >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(schedule_ptr);
    }
    if ( schedule_id != schedule_ptr->schedule_id )
    {
LABEL_12:
      result = 1541LL;
      goto LABEL_66;
    }
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v23);
    p_battle_pass_excel_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v23)->design_config.txt_config_mgr.battle_pass_excel_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)schedule_ptr >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)schedule_ptr >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(schedule_ptr);
    }
    schedule_config_ptr = data::BattlePassExcelConfigMgrBase::findBattlePassScheduleExcelConfig(
                            p_battle_pass_excel_config_mgr,
                            schedule_ptr->schedule_id);
    std::shared_ptr<Config>::~shared_ptr(&v23);
    if ( !schedule_config_ptr )
    {
      result = 1541LL;
      goto LABEL_66;
    }
    HIDWORD(v20._M_array) = common::tools::TimeUtils::getNow();
    if ( *(_BYTE *)(((unsigned __int64)&schedule_config_ptr->begin_time >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&schedule_config_ptr->begin_time >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&schedule_config_ptr->begin_time);
    }
    if ( HIDWORD(v20._M_array) < schedule_config_ptr->begin_time )
      goto LABEL_23;
    if ( *(_BYTE *)(((unsigned __int64)&schedule_config_ptr->end_time >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)schedule_config_ptr + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&schedule_config_ptr->end_time >> 3)
                                                                         + 0x7FFF8000) )
    {
      __asan_report_load4(&schedule_config_ptr->end_time);
    }
    if ( HIDWORD(v20._M_array) > schedule_config_ptr->end_time )
    {
LABEL_23:
      result = 1541LL;
      goto LABEL_66;
    }
    if ( *(_BYTE *)(((unsigned __int64)&schedule_config_ptr->end_time >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)schedule_config_ptr + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&schedule_config_ptr->end_time >> 3)
                                                                         + 0x7FFF8000) )
    {
      __asan_report_load4(&schedule_config_ptr->end_time);
    }
    end_time = schedule_config_ptr->end_time;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v23);
    v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v23);
    LOBYTE(end_time) = end_time <= 60
                                 * ConstValueExcelConfigMgr::getBattlePassPurchaseCloseAheadMinutes(&v10->design_config.txt_config_mgr.const_value_config_mgr)
                                 + HIDWORD(v20._M_array);
    std::shared_ptr<Config>::~shared_ptr(&v23);
    if ( (_BYTE)end_time )
    {
      result = 1544LL;
      goto LABEL_66;
    }
    ActionReason::ActionReason(
      (ActionReason *const)(v3 + 64),
      ACTION_REASON_BATTLE_PASS_PAID_REWARD,
      ITEM_LIMIT_BATTLE_PASS_PAID_REWARD);
    v11 = *(_DWORD *)(v3 + 48);
    if ( v11 == 3 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&schedule_ptr->unlock_status >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)schedule_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&schedule_ptr->unlock_status >> 3)
                                                                    + 0x7FFF8000) )
      {
        __asan_report_load4(&schedule_ptr->unlock_status);
      }
      if ( schedule_ptr->unlock_status != BATTLE_PASS_UNLOCK_PAID )
      {
        common::milog::MiLogStream::create(
          &v25,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/battle_pass/player_battle_pass_comp.cpp",
          "checkCanBuyBattlePass",
          553);
        common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(&v25, (const char (*)[33])off_256FAD40);
        common::milog::MiLogStream::~MiLogStream(&v25);
        result = 0xFFFFFFFFLL;
        goto LABEL_66;
      }
      if ( *(char *)(((unsigned __int64)&schedule_ptr->is_extra_paid_reward_taken >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&schedule_ptr->is_extra_paid_reward_taken);
      if ( schedule_ptr->is_extra_paid_reward_taken )
      {
        result = 1542LL;
        goto LABEL_66;
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      __l = Player::getItemComp(this->player_);
      if ( *(_BYTE *)(((unsigned __int64)&schedule_config_ptr->extra_paid_reward_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&schedule_config_ptr->extra_paid_reward_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&schedule_config_ptr->extra_paid_reward_id);
      }
      LODWORD(v20._M_array) = schedule_config_ptr->extra_paid_reward_id;
      std::allocator<unsigned int>::allocator(&__a);
      std::vector<unsigned int>::vector(
        &reward_id_vec,
        (std::initializer_list<unsigned int>)__PAIR128__(1LL, &v20),
        &__a);
      LODWORD(v20._M_len) = PlayerItemComp::checkGrantRewards(__l, &reward_id_vec, (const ActionReason *)(v3 + 64));
      std::vector<unsigned int>::~vector(&reward_id_vec);
      std::allocator<unsigned int>::~allocator(&__a);
      if ( LODWORD(v20._M_len) )
      {
        result = LODWORD(v20._M_len);
        goto LABEL_66;
      }
    }
    else
    {
      if ( v11 > 3 )
      {
LABEL_64:
        common::milog::MiLogStream::create(
          &v25,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/battle_pass/player_battle_pass_comp.cpp",
          "checkCanBuyBattlePass",
          569);
        v13 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                &v25,
                (const char (*)[19])"invalid play type:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream(&v25);
        result = 0xFFFFFFFFLL;
        goto LABEL_66;
      }
      if ( v11 == 1 )
      {
        if ( *(_BYTE *)(((unsigned __int64)&schedule_ptr->unlock_status >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)schedule_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&schedule_ptr->unlock_status >> 3)
                                                                      + 0x7FFF8000) )
        {
          __asan_report_load4(&schedule_ptr->unlock_status);
        }
        if ( schedule_ptr->unlock_status == BATTLE_PASS_UNLOCK_PAID )
        {
          result = 1542LL;
          goto LABEL_66;
        }
      }
      else
      {
        if ( v11 != 2 )
          goto LABEL_64;
        if ( *(_BYTE *)(((unsigned __int64)&schedule_ptr->unlock_status >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)schedule_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&schedule_ptr->unlock_status >> 3)
                                                                      + 0x7FFF8000) )
        {
          __asan_report_load4(&schedule_ptr->unlock_status);
        }
        if ( schedule_ptr->unlock_status == BATTLE_PASS_UNLOCK_PAID )
          goto LABEL_43;
        if ( *(char *)(((unsigned __int64)&schedule_ptr->is_extra_paid_reward_taken >> 3) + 0x7FFF8000) < 0 )
          __asan_report_load1(&schedule_ptr->is_extra_paid_reward_taken);
        if ( schedule_ptr->is_extra_paid_reward_taken )
        {
LABEL_43:
          result = 1542LL;
          goto LABEL_66;
        }
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        ItemComp = Player::getItemComp(this->player_);
        if ( *(_BYTE *)(((unsigned __int64)&schedule_config_ptr->extra_paid_reward_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&schedule_config_ptr->extra_paid_reward_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&schedule_config_ptr->extra_paid_reward_id);
        }
        LODWORD(v20._M_array) = schedule_config_ptr->extra_paid_reward_id;
        __la._M_array = (std::initializer_list<unsigned int>::iterator)&v20;
        __la._M_len = 1LL;
        std::allocator<unsigned int>::allocator(&__a);
        std::vector<unsigned int>::vector(&reward_id_vec, __la, &__a);
        HIDWORD(v20._M_len) = PlayerItemComp::checkGrantRewards(
                                ItemComp,
                                &reward_id_vec,
                                (const ActionReason *)(v3 + 64));
        std::vector<unsigned int>::~vector(&reward_id_vec);
        std::allocator<unsigned int>::~allocator(&__a);
        if ( HIDWORD(v20._M_len) )
        {
          result = HIDWORD(v20._M_len);
          goto LABEL_66;
        }
      }
    }
    result = 0LL;
    goto LABEL_66;
  }
  common::milog::MiLogStream::create(
    &v25,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/battle_pass/player_battle_pass_comp.cpp",
    "checkCanBuyBattlePass",
    501);
  v7 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
         &v25,
         (const char (*)[29])"battle pass closed, player_:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  operator<<(v7, this->player_);
  common::milog::MiLogStream::~MiLogStream(&v25);
  result = 142LL;
LABEL_66:
  if ( v26 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 576: range 00000000150BE6D2-00000000150BE758
int32_t __cdecl PlayerBattlePassComp::checkCanUnlockPaidBattlePass(
        PlayerBattlePassComp *const this,
        uint32_t schedule_id)
{
  BattlePassSchedule *schedule_ptr; // [rsp+18h] [rbp-8h]

  schedule_ptr = PlayerBattlePassComp::findSchedule(this, schedule_id);
  if ( !schedule_ptr )
    return -1;
  if ( *(_BYTE *)(((unsigned __int64)&schedule_ptr->unlock_status >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)schedule_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&schedule_ptr->unlock_status >> 3)
                                                                + 0x7FFF8000) )
  {
    __asan_report_load4(&schedule_ptr->unlock_status);
  }
  if ( schedule_ptr->unlock_status == BATTLE_PASS_UNLOCK_FREE )
    return 0;
  else
    return -1;
};

// Line 590: range 00000000150BE75A-00000000150BEBBA
__int64 __fastcall PlayerBattlePassComp::normalUnlockPaidBattlePass(
        PlayerBattlePassComp *const this,
        uint32_t schedule_id,
        uint32_t platform_type)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  common::milog::MiLogStream *v6; // rax
  __int64 result; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rcx
  BattlePassSchedule *schedule_ptr; // [rsp+10h] [rbp-C0h]
  const data::BattlePassScheduleExcelConfig *schedule_config_ptr; // [rsp+18h] [rbp-B8h]
  std::shared_ptr<Config> v16; // [rsp+20h] [rbp-B0h] BYREF
  std::vector<unsigned int> reward_id_vec; // [rsp+30h] [rbp-A0h] BYREF
  common::milog::MiLogStream v18; // [rsp+50h] [rbp-80h] BYREF
  char v19[96]; // [rsp+70h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 15 schedule_id:589";
  *(_QWORD *)(v3 + 16) = PlayerBattlePassComp::normalUnlockPaidBattlePass;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = schedule_id;
  schedule_ptr = PlayerBattlePassComp::findSchedule(this, *(_DWORD *)(v3 + 32));
  if ( schedule_ptr )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v16);
    v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v16);
    schedule_config_ptr = data::BattlePassExcelConfigMgrBase::findBattlePassScheduleExcelConfig(
                            &v8->design_config.txt_config_mgr.battle_pass_excel_config_mgr,
                            *(_DWORD *)(v3 + 32));
    std::shared_ptr<Config>::~shared_ptr(&v16);
    if ( schedule_config_ptr )
    {
      if ( PlayerBattlePassComp::unlockPaidBattlePass(this, *(_DWORD *)(v3 + 32), platform_type) )
      {
        common::milog::MiLogStream::create(
          &v18,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/battle_pass/player_battle_pass_comp.cpp",
          "normalUnlockPaidBattlePass",
          607);
        v10 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                &v18,
                (const char (*)[41])"unlock paid schedule failed schedule_id:");
        v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v10,
                (const unsigned int *)(v3 + 32));
        v12 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v11, (const char (*)[9])" player:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        operator<<(v12, this->player_);
        common::milog::MiLogStream::~MiLogStream(&v18);
        result = 0xFFFFFFFFLL;
      }
      else
      {
        if ( PlayerBattlePassComp::getCurScheduleId(this) == *(_DWORD *)(v3 + 32) )
          PlayerBattlePassComp::notifyCurSchedule(this);
        memset(&reward_id_vec, 0, sizeof(reward_id_vec));
        std::vector<unsigned int>::vector(&reward_id_vec);
        PlayerBattlePassComp::notifyBuyBattlePass(this, schedule_ptr, 1u, &reward_id_vec, 0);
        std::vector<unsigned int>::~vector(&reward_id_vec);
        PlayerBattlePassComp::logBuyBattlePass(this, schedule_ptr, PRODUCT_PLAY_TYPE_BATTLE_PASS_NORMAL);
        result = 0LL;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/battle_pass/player_battle_pass_comp.cpp",
        "normalUnlockPaidBattlePass",
        601);
      v9 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
             &v18,
             (const char (*)[40])"schedule config not exist. schedule_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v18);
      result = 0xFFFFFFFFLL;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/battle_pass/player_battle_pass_comp.cpp",
      "normalUnlockPaidBattlePass",
      595);
    v6 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
           &v18,
           (const char (*)[33])"schedule not exist. schedule_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v18);
    result = 0xFFFFFFFFLL;
  }
  if ( v19 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 623: range 00000000150BEBBC-00000000150BF52F
__int64 __fastcall PlayerBattlePassComp::extraUnlockPaidBattlePass(
        PlayerBattlePassComp *const this,
        uint32_t schedule_id,
        uint32_t platform_type)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  unsigned int M_array_high; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // rax
  PlayerItemComp *ItemComp; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rcx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rcx
  Player *player; // rcx
  __int64 extra_paid_add_point; // rsi
  PlayerItemComp *p_over_limit_mail_id; // rdi
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  __int64 result; // rax
  std::allocator<unsigned int> __a; // [rsp+27h] [rbp-139h] BYREF
  std::initializer_list<unsigned int> __l; // [rsp+28h] [rbp-138h] BYREF
  const data::BattlePassScheduleExcelConfig *schedule_config_ptr; // [rsp+38h] [rbp-128h]
  std::shared_ptr<Config> v28; // [rsp+40h] [rbp-120h] BYREF
  common::milog::MiLogStream v29; // [rsp+50h] [rbp-110h] BYREF
  char v30[240]; // [rsp+70h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 15 schedule_id:622 64 24 17 reward_id_vec:637 128 24 17 action_reason:639";
  *(_QWORD *)(v3 + 16) = PlayerBattlePassComp::extraUnlockPaidBattlePass;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234881024;
  v5[536862723] = -218959118;
  v5[536862724] = -218103808;
  v5[536862725] = -202116109;
  *(_DWORD *)(v3 + 48) = schedule_id;
  __l._M_len = (std::initializer_list<unsigned int>::size_type)PlayerBattlePassComp::findSchedule(
                                                                 this,
                                                                 *(_DWORD *)(v3 + 48));
  if ( !__l._M_len )
  {
    common::milog::MiLogStream::create(
      &v29,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/battle_pass/player_battle_pass_comp.cpp",
      "extraUnlockPaidBattlePass",
      628);
    v6 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
           &v29,
           (const char (*)[33])"schedule not exist. schedule_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v29);
    M_array_high = -1;
    goto LABEL_40;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v28);
  v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v28);
  schedule_config_ptr = data::BattlePassExcelConfigMgrBase::findBattlePassScheduleExcelConfig(
                          &v8->design_config.txt_config_mgr.battle_pass_excel_config_mgr,
                          *(_DWORD *)(v3 + 48));
  std::shared_ptr<Config>::~shared_ptr(&v28);
  if ( !schedule_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v29,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/battle_pass/player_battle_pass_comp.cpp",
      "extraUnlockPaidBattlePass",
      634);
    v9 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
           &v29,
           (const char (*)[40])"schedule config not exist. schedule_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v29);
    M_array_high = -1;
    goto LABEL_40;
  }
  if ( *(_BYTE *)(((unsigned __int64)&schedule_config_ptr->extra_paid_reward_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&schedule_config_ptr->extra_paid_reward_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&schedule_config_ptr->extra_paid_reward_id);
  }
  LODWORD(__l._M_array) = schedule_config_ptr->extra_paid_reward_id;
  std::allocator<unsigned int>::allocator(&__a);
  std::vector<unsigned int>::vector(
    (std::vector<unsigned int> *const)(v3 + 64),
    (std::initializer_list<unsigned int>)__PAIR128__(1LL, &__l),
    &__a);
  std::allocator<unsigned int>::~allocator(&__a);
  ActionReason::ActionReason(
    (ActionReason *const)(v3 + 128),
    ACTION_REASON_BATTLE_PASS_PAID_REWARD,
    ITEM_LIMIT_BATTLE_PASS_PAID_REWARD);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  ItemComp = Player::getItemComp(this->player_);
  HIDWORD(__l._M_array) = PlayerItemComp::checkGrantRewards(
                            ItemComp,
                            (const std::vector<unsigned int> *)(v3 + 64),
                            (const ActionReason *)(v3 + 128));
  if ( HIDWORD(__l._M_array) )
  {
    common::milog::MiLogStream::create(
      &v29,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/battle_pass/player_battle_pass_comp.cpp",
      "extraUnlockPaidBattlePass",
      643);
    v11 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
            &v29,
            (const char (*)[34])"checkGrantReward fail, reward_id:");
    v12 = common::milog::MiLogStream::operator<<<unsigned int>(v11, (const std::vector<unsigned int> *)(v3 + 64));
    v13 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v12, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
  }
  else
  {
    if ( PlayerBattlePassComp::unlockPaidBattlePass(this, *(_DWORD *)(v3 + 48), platform_type) )
    {
      common::milog::MiLogStream::create(
        &v29,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/battle_pass/player_battle_pass_comp.cpp",
        "extraUnlockPaidBattlePass",
        648);
      v14 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
              &v29,
              (const char (*)[41])"unlock paid schedule failed schedule_id:");
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 48));
      v16 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v15, (const char (*)[9])" player:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      operator<<(v16, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v29);
      M_array_high = -1;
      goto LABEL_39;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    player = this->player_;
    if ( *(_BYTE *)(((unsigned __int64)&schedule_config_ptr->extra_paid_add_point >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)schedule_config_ptr + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&schedule_config_ptr->extra_paid_add_point >> 3)
                                                                          + 0x7FFF8000) )
    {
      __asan_report_load4(&schedule_config_ptr->extra_paid_add_point);
    }
    extra_paid_add_point = schedule_config_ptr->extra_paid_add_point;
    BattlePassSchedule::addPoint((BattlePassSchedule *const)__l._M_len, extra_paid_add_point, 0, 0, player);
    if ( *(char *)(((__l._M_len + 72) >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(__l._M_len + 72, extra_paid_add_point, __l._M_len + 72);
    *(_BYTE *)(__l._M_len + 72) = 1;
    if ( PlayerBattlePassComp::getCurScheduleId(this) == *(_DWORD *)(v3 + 48) )
      PlayerBattlePassComp::notifyCurSchedule(this);
    if ( *(_BYTE *)(((unsigned __int64)&schedule_config_ptr->extra_paid_add_point >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)schedule_config_ptr + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&schedule_config_ptr->extra_paid_add_point >> 3)
                                                                          + 0x7FFF8000) )
    {
      __asan_report_load4(&schedule_config_ptr->extra_paid_add_point);
    }
    PlayerBattlePassComp::notifyBuyBattlePass(
      this,
      (const BattlePassSchedule *)__l._M_len,
      2u,
      (const std::vector<unsigned int> *)(v3 + 64),
      schedule_config_ptr->extra_paid_add_point);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    p_over_limit_mail_id = Player::getItemComp(this->player_);
    if ( *(_BYTE *)(((unsigned __int64)&schedule_config_ptr->over_limit_mail_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&schedule_config_ptr->over_limit_mail_id >> 3) + 0x7FFF8000) <= 3 )
    {
      p_over_limit_mail_id = (PlayerItemComp *)&schedule_config_ptr->over_limit_mail_id;
      __asan_report_load4(&schedule_config_ptr->over_limit_mail_id);
    }
    if ( !PlayerItemComp::grantRewardsOrSendMail(
            p_over_limit_mail_id,
            (const std::vector<unsigned int> *)(v3 + 64),
            schedule_config_ptr->over_limit_mail_id,
            (const ActionReason *)(v3 + 128)) )
    {
      PlayerBattlePassComp::logBuyBattlePass(
        this,
        (const BattlePassSchedule *)__l._M_len,
        PRODUCT_PLAY_TYPE_BATTLE_PASS_EXTRA);
      M_array_high = 0;
      goto LABEL_39;
    }
    common::milog::MiLogStream::create(
      &v29,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/battle_pass/player_battle_pass_comp.cpp",
      "extraUnlockPaidBattlePass",
      663);
    v20 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
            &v29,
            (const char (*)[29])"grantReward fail, reward_id:");
    v21 = common::milog::MiLogStream::operator<<<unsigned int>(v20, (const std::vector<unsigned int> *)(v3 + 64));
    v13 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v21, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
  }
  operator<<(v13, this->player_);
  common::milog::MiLogStream::~MiLogStream(&v29);
  M_array_high = HIDWORD(__l._M_array);
LABEL_39:
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 64));
LABEL_40:
  result = M_array_high;
  if ( v30 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 671: range 00000000150BF530-00000000150BFFD4
__int64 __fastcall PlayerBattlePassComp::upgradeFromNormalToExtra(
        PlayerBattlePassComp *const this,
        uint32_t schedule_id,
        uint32_t platform_type)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rcx
  unsigned int M_array_high; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rcx
  PlayerItemComp *ItemComp; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rcx
  Player *player; // rcx
  uint32_t PlatformFlag; // ecx
  PlayerItemComp *p_over_limit_mail_id; // rdi
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  __int64 result; // rax
  std::allocator<unsigned int> __a; // [rsp+27h] [rbp-139h] BYREF
  std::initializer_list<unsigned int> __l; // [rsp+28h] [rbp-138h] BYREF
  const data::BattlePassScheduleExcelConfig *schedule_config_ptr; // [rsp+38h] [rbp-128h]
  std::shared_ptr<Config> v30; // [rsp+40h] [rbp-120h] BYREF
  common::milog::MiLogStream v31; // [rsp+50h] [rbp-110h] BYREF
  char v32[240]; // [rsp+70h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 15 schedule_id:670 64 24 17 reward_id_vec:692 128 24 17 action_reason:693";
  *(_QWORD *)(v3 + 16) = PlayerBattlePassComp::upgradeFromNormalToExtra;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234881024;
  v5[536862723] = -218959118;
  v5[536862724] = -218103808;
  v5[536862725] = -202116109;
  *(_DWORD *)(v3 + 48) = schedule_id;
  __l._M_len = (std::initializer_list<unsigned int>::size_type)PlayerBattlePassComp::findSchedule(
                                                                 this,
                                                                 *(_DWORD *)(v3 + 48));
  if ( !__l._M_len )
  {
    common::milog::MiLogStream::create(
      &v31,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/battle_pass/player_battle_pass_comp.cpp",
      "upgradeFromNormalToExtra",
      675);
    v6 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(&v31, (const char (*)[52])off_256FB140);
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 48));
    v8 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v7, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    operator<<(v8, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v31);
    M_array_high = -1;
    goto LABEL_49;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v30);
  v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v30);
  schedule_config_ptr = data::BattlePassExcelConfigMgrBase::findBattlePassScheduleExcelConfig(
                          &v10->design_config.txt_config_mgr.battle_pass_excel_config_mgr,
                          *(_DWORD *)(v3 + 48));
  std::shared_ptr<Config>::~shared_ptr(&v30);
  if ( !schedule_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v31,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/battle_pass/player_battle_pass_comp.cpp",
      "upgradeFromNormalToExtra",
      682);
    v11 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
            &v31,
            (const char (*)[40])"schedule config not exist. schedule_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v31);
    M_array_high = -1;
    goto LABEL_49;
  }
  if ( *(_BYTE *)(((__l._M_len + 12) >> 3) + 0x7FFF8000) != 0
    && (char)(((LOBYTE(__l._M_len) + 12) & 7) + 3) >= *(_BYTE *)(((__l._M_len + 12) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(__l._M_len + 12);
  }
  if ( *(_DWORD *)(__l._M_len + 12) == 2 )
  {
    if ( *(char *)(((__l._M_len + 72) >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(__l._M_len + 72);
    if ( !*(_BYTE *)(__l._M_len + 72) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&schedule_config_ptr->extra_paid_reward_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&schedule_config_ptr->extra_paid_reward_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&schedule_config_ptr->extra_paid_reward_id);
      }
      LODWORD(__l._M_array) = schedule_config_ptr->extra_paid_reward_id;
      std::allocator<unsigned int>::allocator(&__a);
      std::vector<unsigned int>::vector(
        (std::vector<unsigned int> *const)(v3 + 64),
        (std::initializer_list<unsigned int>)__PAIR128__(1LL, &__l),
        &__a);
      std::allocator<unsigned int>::~allocator(&__a);
      ActionReason::ActionReason(
        (ActionReason *const)(v3 + 128),
        ACTION_REASON_BATTLE_PASS_PAID_REWARD,
        ITEM_LIMIT_BATTLE_PASS_PAID_REWARD);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      ItemComp = Player::getItemComp(this->player_);
      HIDWORD(__l._M_array) = PlayerItemComp::checkGrantRewards(
                                ItemComp,
                                (const std::vector<unsigned int> *)(v3 + 64),
                                (const ActionReason *)(v3 + 128));
      if ( HIDWORD(__l._M_array) )
      {
        common::milog::MiLogStream::create(
          &v31,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/battle_pass/player_battle_pass_comp.cpp",
          "upgradeFromNormalToExtra",
          697);
        v16 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                &v31,
                (const char (*)[34])"checkGrantReward fail, reward_id:");
        v17 = common::milog::MiLogStream::operator<<<unsigned int>(v16, (const std::vector<unsigned int> *)(v3 + 64));
        v18 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v17, (const char (*)[9])" player:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
      }
      else
      {
        if ( *(char *)(((__l._M_len + 72) >> 3) + 0x7FFF8000) < 0 )
          __asan_report_store1(__l._M_len + 72, v3 + 64, __l._M_len + 72);
        *(_BYTE *)(__l._M_len + 72) = 1;
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        player = this->player_;
        if ( *(_BYTE *)(((unsigned __int64)&schedule_config_ptr->extra_paid_add_point >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)schedule_config_ptr + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&schedule_config_ptr->extra_paid_add_point >> 3)
                                                                              + 0x7FFF8000) )
        {
          __asan_report_load4(&schedule_config_ptr->extra_paid_add_point);
        }
        BattlePassSchedule::addPoint(
          (BattlePassSchedule *const)__l._M_len,
          schedule_config_ptr->extra_paid_add_point,
          0,
          0,
          player);
        PlatformFlag = TxtConfigMgr::getPlatformFlag(platform_type);
        if ( *(_BYTE *)(((__l._M_len + 84) >> 3) + 0x7FFF8000) != 0
          && (char)(((LOBYTE(__l._M_len) + 84) & 7) + 3) >= *(_BYTE *)(((__l._M_len + 84) >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(__l._M_len + 84);
        }
        *(_DWORD *)(__l._M_len + 84) |= PlatformFlag;
        if ( PlayerBattlePassComp::getCurScheduleId(this) == *(_DWORD *)(v3 + 48) )
          PlayerBattlePassComp::notifyCurSchedule(this);
        if ( *(_BYTE *)(((unsigned __int64)&schedule_config_ptr->extra_paid_add_point >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)schedule_config_ptr + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&schedule_config_ptr->extra_paid_add_point >> 3)
                                                                              + 0x7FFF8000) )
        {
          __asan_report_load4(&schedule_config_ptr->extra_paid_add_point);
        }
        PlayerBattlePassComp::notifyBuyBattlePass(
          this,
          (const BattlePassSchedule *)__l._M_len,
          3u,
          (const std::vector<unsigned int> *)(v3 + 64),
          schedule_config_ptr->extra_paid_add_point);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        p_over_limit_mail_id = Player::getItemComp(this->player_);
        if ( *(_BYTE *)(((unsigned __int64)&schedule_config_ptr->over_limit_mail_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&schedule_config_ptr->over_limit_mail_id >> 3) + 0x7FFF8000) <= 3 )
        {
          p_over_limit_mail_id = (PlayerItemComp *)&schedule_config_ptr->over_limit_mail_id;
          __asan_report_load4(&schedule_config_ptr->over_limit_mail_id);
        }
        if ( !PlayerItemComp::grantRewardsOrSendMail(
                p_over_limit_mail_id,
                (const std::vector<unsigned int> *)(v3 + 64),
                schedule_config_ptr->over_limit_mail_id,
                (const ActionReason *)(v3 + 128)) )
        {
          PlayerBattlePassComp::logBuyBattlePass(
            this,
            (const BattlePassSchedule *)__l._M_len,
            PRODUCT_PLAY_TYPE_BATTLE_PASS_UPGRADE);
          M_array_high = 0;
          goto LABEL_48;
        }
        common::milog::MiLogStream::create(
          &v31,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/battle_pass/player_battle_pass_comp.cpp",
          "upgradeFromNormalToExtra",
          712);
        v22 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                &v31,
                (const char (*)[29])"grantReward fail, reward_id:");
        v23 = common::milog::MiLogStream::operator<<<unsigned int>(v22, (const std::vector<unsigned int> *)(v3 + 64));
        v18 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v23, (const char (*)[9])" player:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
      }
      operator<<(v18, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v31);
      M_array_high = HIDWORD(__l._M_array);
LABEL_48:
      std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 64));
      goto LABEL_49;
    }
  }
  common::milog::MiLogStream::create(
    &v31,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/player/battle_pass/player_battle_pass_comp.cpp",
    "upgradeFromNormalToExtra",
    688);
  v12 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
          &v31,
          (const char (*)[45])"cannot upgrade invalid schedule schedule_id:");
  v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 48));
  v14 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v13, (const char (*)[9])" player:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  operator<<(v14, this->player_);
  common::milog::MiLogStream::~MiLogStream(&v31);
  M_array_high = -1;
LABEL_49:
  result = M_array_high;
  if ( v32 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 720: range 00000000150BFFD6-00000000150C0453
void __cdecl PlayerBattlePassComp::notifyBuyBattlePass(
        PlayerBattlePassComp *const this,
        const BattlePassSchedule *schedule,
        uint32_t product_play_type,
        const std::vector<unsigned int> *reward_id_vec,
        uint32_t add_point)
{
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  _DWORD *v7; // r13
  std::__shared_ptr_access<proto::BattlePassBuySuccNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  std::__shared_ptr_access<proto::BattlePassBuySuccNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<proto::BattlePassBuySuccNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  PlayerItemComp *ItemComp; // rcx
  std::__shared_ptr_access<proto::BattlePassBuySuccNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  proto::ItemParam *v13; // rax
  common::milog::MiLogStream *v14; // rdx
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rcx
  Player *player; // r14
  std::vector<ItemParam>::iterator __for_begin; // [rsp+20h] [rbp-100h] BYREF
  std::vector<ItemParam>::iterator __for_end; // [rsp+28h] [rbp-F8h] BYREF
  std::vector<ItemParam> *__for_range; // [rsp+30h] [rbp-F0h]
  ItemParam *param; // [rsp+38h] [rbp-E8h]
  std::shared_ptr<proto::BattlePassBuySuccNotify> __r; // [rsp+40h] [rbp-E0h] BYREF
  common::milog::MiLogStream v26; // [rsp+50h] [rbp-D0h] BYREF
  char v27[176]; // [rsp+70h] [rbp-B0h] BYREF

  v5 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(128LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 32 16 13 proto_ptr:722 64 24 18 item_param_vec:726";
  *(_QWORD *)(v5 + 16) = PlayerBattlePassComp::notifyBuyBattlePass;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -219021312;
  v7[536862722] = -218103808;
  v7[536862723] = -202116109;
  common::tools::perf::make_shared<proto::BattlePassBuySuccNotify>();
  v8 = std::__shared_ptr_access<proto::BattlePassBuySuccNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::BattlePassBuySuccNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 32));
  if ( *(_BYTE *)(((unsigned __int64)schedule >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)schedule >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(schedule);
  }
  proto::BattlePassBuySuccNotify::set_schedule_id(v8, schedule->schedule_id);
  v9 = std::__shared_ptr_access<proto::BattlePassBuySuccNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::BattlePassBuySuccNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 32));
  proto::BattlePassBuySuccNotify::set_product_play_type(v9, product_play_type);
  v10 = std::__shared_ptr_access<proto::BattlePassBuySuccNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::BattlePassBuySuccNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 32));
  proto::BattlePassBuySuccNotify::set_add_point(v10, add_point);
  std::vector<ItemParam>::vector((std::vector<ItemParam> *const)(v5 + 64));
  if ( !std::vector<unsigned int>::empty(reward_id_vec) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    ItemComp = Player::getItemComp(this->player_);
    if ( PlayerItemComp::getItemParamVecByRewardIdVec(ItemComp, reward_id_vec, (std::vector<ItemParam> *)(v5 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v26,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/battle_pass/player_battle_pass_comp.cpp",
        "notifyBuyBattlePass",
        738);
      v14 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
              &v26,
              (const char (*)[50])"getItemParamVecByRewardIdVec fail, reward_id_vec:");
      v15 = common::milog::MiLogStream::operator<<<unsigned int>(v14, reward_id_vec);
      v16 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v15, (const char (*)[9])" player:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      operator<<(v16, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v26);
    }
    else
    {
      __for_range = (std::vector<ItemParam> *)(v5 + 64);
      __for_begin._M_current = std::vector<ItemParam>::begin((std::vector<ItemParam> *const)(v5 + 64))._M_current;
      __for_end._M_current = std::vector<ItemParam>::end((std::vector<ItemParam> *const)(v5 + 64))._M_current;
      while ( __gnu_cxx::operator!=<ItemParam *,std::vector<ItemParam>>(&__for_begin, &__for_end) )
      {
        param = __gnu_cxx::__normal_iterator<ItemParam *,std::vector<ItemParam>>::operator*(&__for_begin);
        v12 = std::__shared_ptr_access<proto::BattlePassBuySuccNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::BattlePassBuySuccNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 32));
        v13 = proto::BattlePassBuySuccNotify::add_item_list(v12);
        ItemParam::toClient(param, v13);
        __gnu_cxx::__normal_iterator<ItemParam *,std::vector<ItemParam>>::operator++(&__for_begin);
      }
    }
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  player = this->player_;
  std::dynamic_pointer_cast<google::protobuf::Message const,proto::BattlePassBuySuccNotify>(&__r);
  Player::sendMessage(player, (common::minet::ConstMessagePtr *)&__r, 0LL);
  std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&__r);
  std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v5 + 64));
  std::shared_ptr<proto::BattlePassBuySuccNotify>::~shared_ptr((std::shared_ptr<proto::BattlePassBuySuccNotify> *const)(v5 + 32));
  if ( v27 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 748: range 00000000150C0454-00000000150C07CB
__int64 __fastcall PlayerBattlePassComp::unlockPaidBattlePass(
        PlayerBattlePassComp *const this,
        uint32_t schedule_id,
        uint32_t platform_type)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rcx
  __int64 result; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  __int64 v12; // rdx
  uint32_t PlatformFlag; // ecx
  BattlePassSchedule *schedule_ptr; // [rsp+18h] [rbp-88h]
  common::milog::MiLogStream v16; // [rsp+20h] [rbp-80h] BYREF
  char v17[96]; // [rsp+40h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 15 schedule_id:747";
  *(_QWORD *)(v3 + 16) = PlayerBattlePassComp::unlockPaidBattlePass;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = schedule_id;
  schedule_ptr = PlayerBattlePassComp::findSchedule(this, *(_DWORD *)(v3 + 32));
  if ( !schedule_ptr )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/battle_pass/player_battle_pass_comp.cpp",
      "unlockPaidBattlePass",
      752);
    v6 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(&v16, (const char (*)[52])off_256FB140);
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 32));
    v8 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v7, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
LABEL_7:
    operator<<(v8, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v16);
    result = 0xFFFFFFFFLL;
    goto LABEL_17;
  }
  if ( PlayerBattlePassComp::checkCanUnlockPaidBattlePass(this, *(_DWORD *)(v3 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/battle_pass/player_battle_pass_comp.cpp",
      "unlockPaidBattlePass",
      758);
    v10 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
            &v16,
            (const char (*)[58])"check normal unlock inexist schedule. failed schedule_id:");
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 32));
    v8 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v11, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    goto LABEL_7;
  }
  v12 = (*(_BYTE *)(((unsigned __int64)&schedule_ptr->unlock_status >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)schedule_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&schedule_ptr->unlock_status >> 3) + 0x7FFF8000));
  if ( (_BYTE)v12 )
    __asan_report_store4(&schedule_ptr->unlock_status, (((_BYTE)schedule_ptr + 12) & 7u) + 3, v12);
  schedule_ptr->unlock_status = BATTLE_PASS_UNLOCK_PAID;
  PlatformFlag = TxtConfigMgr::getPlatformFlag(platform_type);
  if ( *(_BYTE *)(((unsigned __int64)&schedule_ptr->paid_platform_flags >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)schedule_ptr + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&schedule_ptr->paid_platform_flags >> 3)
                                                                + 0x7FFF8000) )
  {
    __asan_report_load4(&schedule_ptr->paid_platform_flags);
  }
  schedule_ptr->paid_platform_flags |= PlatformFlag;
  result = 0LL;
LABEL_17:
  if ( v17 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 769: range 00000000150C07CC-00000000150C2206
int32_t __cdecl PlayerBattlePassComp::checkCanTakeBattlePassReward(
        PlayerBattlePassComp *const this,
        const proto::BattlePassRewardTakeOption *option)
{
  unsigned __int64 v2; // r15
  __int64 v3; // rax
  _DWORD *v4; // r13
  const proto::BattlePassRewardTag *v5; // rax
  proto::BattlePassUnlockStatus v6; // r14d
  const proto::BattlePassRewardTag *v7; // rax
  uint32_t v8; // ebx
  const proto::BattlePassRewardTag *v9; // rax
  uint32_t v10; // eax
  common::milog::MiLogStream *v11; // rcx
  int32_t v12; // ebx
  BattlePassExcelConfigMgr *p_battle_pass_excel_config_mgr; // rsi
  common::milog::MiLogStream *v14; // rcx
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  uint32_t paid_platform_flags; // ebx
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rbx
  PlayerItemComp *ItemComp; // r14
  bool v25; // bl
  common::milog::MiLogStream *v26; // rax
  const data::MaterialExcelConfigMgrBase *p_material_config_mgr; // rdi
  PlayerItemComp *v28; // rbx
  uint32_t v29; // eax
  common::milog::MiLogStream *v30; // rax
  PlayerItemComp *v31; // r14
  bool v32; // bl
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rcx
  PlayerItemComp *v36; // rbx
  uint32_t v37; // eax
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v38; // rdx
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v39; // rdx
  PlayerItemComp *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  PlayerItemComp *v44; // rbx
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rax
  PlayerItemComp *v48; // rbx
  common::milog::MiLogStream *v49; // rax
  common::milog::MiLogStream *v50; // rax
  common::milog::MiLogStream *v51; // rax
  PlayerItemComp *v52; // rbx
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // rax
  common::milog::MiLogStream *v55; // rax
  int32_t result; // eax
  std::initializer_list<unsigned int> __l; // [rsp+10h] [rbp-430h]
  std::initializer_list<unsigned int> v58; // [rsp+20h] [rbp-420h]
  std::initializer_list<ItemParam> v59; // [rsp+30h] [rbp-410h]
  std::initializer_list<ItemParam> v60; // [rsp+40h] [rbp-400h]
  std::allocator<unsigned int> __a; // [rsp+67h] [rbp-3D9h] BYREF
  unsigned int val; // [rsp+68h] [rbp-3D8h] BYREF
  int32_t ret; // [rsp+6Ch] [rbp-3D4h]
  std::vector<ItemParam>::iterator __for_begin; // [rsp+70h] [rbp-3D0h] BYREF
  std::vector<ItemParam>::iterator __for_end; // [rsp+78h] [rbp-3C8h] BYREF
  std::vector<data::ItemUseConfig>::const_iterator __for_begin_0; // [rsp+80h] [rbp-3C0h] BYREF
  std::vector<data::ItemUseConfig>::const_iterator __for_end_0; // [rsp+88h] [rbp-3B8h] BYREF
  BattlePassSchedule *schedule_ptr; // [rsp+90h] [rbp-3B0h]
  std::vector<ItemParam> *__for_range; // [rsp+98h] [rbp-3A8h]
  const ItemParam *item_param; // [rsp+A0h] [rbp-3A0h]
  const data::MaterialExcelConfig *material_excel_config_ptr; // [rsp+A8h] [rbp-398h]
  const std::vector<data::ItemUseConfig> *__for_range_0; // [rsp+B0h] [rbp-390h]
  const data::ItemUseConfig *item_use_config; // [rsp+B8h] [rbp-388h]
  std::shared_ptr<Config> v76; // [rsp+C0h] [rbp-380h] BYREF
  std::vector<unsigned int> reward_id_vec; // [rsp+D0h] [rbp-370h] BYREF
  common::milog::MiLogStream v78; // [rsp+F0h] [rbp-350h] BYREF
  char v79[816]; // [rsp+110h] [rbp-330h] BYREF

  v2 = (unsigned __int64)v79;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(768LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "12 32 4 13 reward_id:833 48 12 7 tag:770 80 16 18 add_item_param:848 112 24 12 item_vec:810 176 "
                        "24 17 action_reason:857 240 24 31 select_reward_action_reason:864 304 24 29 select_item_action_r"
                        "eason:874 368 24 28 total_item_action_reason:884 432 48 32 select_reward_item_count_map:807 512 "
                        "48 30 select_item_item_count_map:808 592 48 24 total_item_count_map:809 672 56 11 tag_set:777";
  *(_QWORD *)(v2 + 16) = PlayerBattlePassComp::checkCanTakeBattlePassReward;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862721] = 0x4000000;
  v4[536862722] = 62194;
  v4[536862723] = 62194;
  v4[536862724] = -218959360;
  v4[536862725] = 62194;
  v4[536862726] = -218959360;
  v4[536862727] = 62194;
  v4[536862728] = -218959360;
  v4[536862729] = 62194;
  v4[536862730] = -218959360;
  v4[536862731] = 62194;
  v4[536862732] = -218959360;
  v4[536862733] = 62194;
  v4[536862735] = -218959118;
  v4[536862737] = -219021312;
  v4[536862738] = 62194;
  v4[536862740] = -218959118;
  v4[536862742] = -218103808;
  v4[536862743] = -202116109;
  v5 = proto::BattlePassRewardTakeOption::tag(option);
  v6 = proto::BattlePassRewardTag::unlock_status(v5);
  v7 = proto::BattlePassRewardTakeOption::tag(option);
  v8 = proto::BattlePassRewardTag::level(v7);
  v9 = proto::BattlePassRewardTakeOption::tag(option);
  v10 = proto::BattlePassRewardTag::reward_id(v9);
  BattlePassRewardTag::BattlePassRewardTag((BattlePassRewardTag *const)(v2 + 48), v6, v8, v10);
  schedule_ptr = PlayerBattlePassComp::findCurSchedule(this);
  if ( schedule_ptr )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v76);
    p_battle_pass_excel_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v76)->design_config.txt_config_mgr.battle_pass_excel_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)schedule_ptr >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)schedule_ptr >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(schedule_ptr);
    }
    BattlePassExcelConfigMgr::getBattlePassScheduleAllRewardTagSet(
      (std::unordered_set<BattlePassRewardTag> *)(v2 + 672),
      p_battle_pass_excel_config_mgr,
      schedule_ptr->schedule_id);
    std::shared_ptr<Config>::~shared_ptr(&v76);
    if ( !common::tools::MiscUtils::isContains<std::unordered_set<BattlePassRewardTag>,BattlePassRewardTag>(
            (std::unordered_set<BattlePassRewardTag> *)(v2 + 672),
            (const BattlePassRewardTag *)(v2 + 48)) )
    {
      common::milog::MiLogStream::create(
        &v78,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/battle_pass/player_battle_pass_comp.cpp",
        "checkCanTakeBattlePassReward",
        780);
      v14 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
              &v78,
              (const char (*)[26])"reward not exist, player:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      v15 = operator<<(v14, this->player_);
      v16 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v15, (const char (*)[6])" tag:");
      operator<<(v16, (const BattlePassRewardTag *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v78);
      v12 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&schedule_ptr->unlock_status >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)schedule_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&schedule_ptr->unlock_status >> 3)
                                                                    + 0x7FFF8000) )
      {
        __asan_report_load4(&schedule_ptr->unlock_status);
      }
      if ( schedule_ptr->unlock_status >= *(_DWORD *)(v2 + 48) )
      {
        if ( *(_BYTE *)(((unsigned __int64)&schedule_ptr->level >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)schedule_ptr + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&schedule_ptr->level >> 3)
                                                                     + 0x7FFF8000) )
        {
          __asan_report_load4(&schedule_ptr->level);
        }
        if ( schedule_ptr->level >= *(_DWORD *)(v2 + 52) )
        {
          if ( common::tools::MiscUtils::isContains<std::unordered_set<BattlePassRewardTag>,BattlePassRewardTag>(
                 &schedule_ptr->reward_taken_set,
                 (const BattlePassRewardTag *)(v2 + 48)) )
          {
            common::milog::MiLogStream::create(
              &v78,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/battle_pass/player_battle_pass_comp.cpp",
              "checkCanTakeBattlePassReward",
              795);
            v19 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                    &v78,
                    (const char (*)[28])"reward has been taken, tag:");
            operator<<(v19, (const BattlePassRewardTag *)(v2 + 48));
            common::milog::MiLogStream::~MiLogStream(&v78);
            v12 = -1;
          }
          else
          {
            if ( *(_DWORD *)(v2 + 48) != 2 )
              goto LABEL_33;
            if ( *(_BYTE *)(((unsigned __int64)&schedule_ptr->paid_platform_flags >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)schedule_ptr + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&schedule_ptr->paid_platform_flags >> 3)
                                                                          + 0x7FFF8000) )
            {
              __asan_report_load4(&schedule_ptr->paid_platform_flags);
            }
            paid_platform_flags = schedule_ptr->paid_platform_flags;
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            if ( (paid_platform_flags & Player::getPlatformFlag(this->player_)) != 0 )
            {
LABEL_33:
              std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v2 + 432));
              std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v2 + 512));
              std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v2 + 592));
              std::vector<ItemParam>::vector((std::vector<ItemParam> *const)(v2 + 112));
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8(&this->player_);
              ItemComp = Player::getItemComp(this->player_);
              val = *(_DWORD *)(v2 + 56);
              __l._M_array = &val;
              __l._M_len = 1LL;
              std::allocator<unsigned int>::allocator(&__a);
              std::vector<unsigned int>::vector(&reward_id_vec, __l, &__a);
              v25 = PlayerItemComp::getItemParamVecByRewardIdVec(
                      ItemComp,
                      &reward_id_vec,
                      (std::vector<ItemParam> *)(v2 + 112)) != 0;
              std::vector<unsigned int>::~vector(&reward_id_vec);
              std::allocator<unsigned int>::~allocator(&__a);
              if ( v25 )
              {
                common::milog::MiLogStream::create(
                  &v78,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/battle_pass/player_battle_pass_comp.cpp",
                  "checkCanTakeBattlePassReward",
                  813);
                v26 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                        &v78,
                        (const char (*)[25])"getItemParam fails, tag:");
                operator<<(v26, (const BattlePassRewardTag *)(v2 + 48));
                common::milog::MiLogStream::~MiLogStream(&v78);
                v12 = -1;
              }
              else
              {
                ItemParam::addVecToItemCountMap(
                  (const std::vector<ItemParam> *)(v2 + 112),
                  (std::map<unsigned int,unsigned int> *)(v2 + 592));
                if ( proto::BattlePassRewardTakeOption::option_idx(option) )
                {
                  __for_range = (std::vector<ItemParam> *)(v2 + 112);
                  __for_begin._M_current = std::vector<ItemParam>::begin((std::vector<ItemParam> *const)(v2 + 112))._M_current;
                  __for_end._M_current = std::vector<ItemParam>::end(__for_range)._M_current;
                  while ( __gnu_cxx::operator!=<ItemParam *,std::vector<ItemParam>>(&__for_begin, &__for_end) )
                  {
                    item_param = __gnu_cxx::__normal_iterator<ItemParam *,std::vector<ItemParam>>::operator*(&__for_begin);
                    ServiceBox::findService<GameserverService>();
                    GameserverService::getConfig((GameserverService *const)&v76);
                    p_material_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v76)->design_config.txt_config_mgr.material_config_mgr;
                    if ( *(_BYTE *)(((unsigned __int64)item_param >> 3) + 0x7FFF8000) != 0
                      && (char)(((unsigned __int8)item_param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)item_param >> 3)
                                                                                   + 0x7FFF8000) )
                    {
                      p_material_config_mgr = (const data::MaterialExcelConfigMgrBase *)item_param;
                      __asan_report_load4(item_param);
                    }
                    material_excel_config_ptr = data::MaterialExcelConfigMgrBase::findMaterialExcelConfig(
                                                  p_material_config_mgr,
                                                  item_param->item_id);
                    std::shared_ptr<Config>::~shared_ptr(&v76);
                    if ( material_excel_config_ptr )
                    {
                      if ( *(_BYTE *)(((unsigned __int64)&material_excel_config_ptr->material_type >> 3) + 0x7FFF8000) != 0
                        && (char)((((_BYTE)material_excel_config_ptr + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&material_excel_config_ptr->material_type >> 3)
                                                                                                 + 0x7FFF8000) )
                      {
                        __asan_report_load4(&material_excel_config_ptr->material_type);
                      }
                      if ( material_excel_config_ptr->material_type == MATERIAL_SELECTABLE_CHEST )
                      {
                        __for_range_0 = &material_excel_config_ptr->item_use;
                        __for_begin_0._M_current = std::vector<data::ItemUseConfig>::begin(&material_excel_config_ptr->item_use)._M_current;
                        __for_end_0._M_current = std::vector<data::ItemUseConfig>::end(__for_range_0)._M_current;
                        while ( __gnu_cxx::operator!=<data::ItemUseConfig const*,std::vector<data::ItemUseConfig>>(
                                  &__for_begin_0,
                                  &__for_end_0) )
                        {
                          item_use_config = __gnu_cxx::__normal_iterator<data::ItemUseConfig const*,std::vector<data::ItemUseConfig>>::operator*(&__for_begin_0);
                          if ( *(_BYTE *)(((unsigned __int64)&item_use_config->use_op >> 3) + 0x7FFF8000) != 0
                            && *(_BYTE *)(((unsigned __int64)&item_use_config->use_op >> 3) + 0x7FFF8000) <= 3 )
                          {
                            __asan_report_load4(&item_use_config->use_op);
                          }
                          if ( item_use_config->use_op == ITEM_USE_GRANT_SELECT_REWARD )
                          {
                            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                              __asan_report_load8(&this->player_);
                            v28 = Player::getItemComp(this->player_);
                            v29 = proto::BattlePassRewardTakeOption::option_idx(option);
                            *(_DWORD *)(v2 + 32) = PlayerItemComp::getUseConfigSelectId<unsigned int>(
                                                     v28,
                                                     item_use_config,
                                                     v29);
                            if ( !*(_DWORD *)(v2 + 32) )
                            {
                              common::milog::MiLogStream::create(
                                &v78,
                                &common::milog::MiLogDefault::default_log_obj_,
                                3u,
                                "./src/player/battle_pass/player_battle_pass_comp.cpp",
                                "checkCanTakeBattlePassReward",
                                836);
                              v30 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                                      &v78,
                                      (const char (*)[33])off_256FB800);
                              operator<<(v30, (const BattlePassRewardTag *)(v2 + 48));
                              common::milog::MiLogStream::~MiLogStream(&v78);
                            }
                            std::vector<ItemParam>::vector((std::vector<ItemParam> *const)(v2 + 368));
                            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                              __asan_report_load8(&this->player_);
                            v31 = Player::getItemComp(this->player_);
                            val = *(_DWORD *)(v2 + 32);
                            v58._M_array = &val;
                            v58._M_len = 1LL;
                            std::allocator<unsigned int>::allocator(&__a);
                            std::vector<unsigned int>::vector(&reward_id_vec, v58, &__a);
                            v32 = PlayerItemComp::getItemParamVecByRewardIdVec(
                                    v31,
                                    &reward_id_vec,
                                    (std::vector<ItemParam> *)(v2 + 368)) != 0;
                            std::vector<unsigned int>::~vector(&reward_id_vec);
                            std::allocator<unsigned int>::~allocator(&__a);
                            if ( v32 )
                            {
                              common::milog::MiLogStream::create(
                                &v78,
                                &common::milog::MiLogDefault::default_log_obj_,
                                3u,
                                "./src/player/battle_pass/player_battle_pass_comp.cpp",
                                "checkCanTakeBattlePassReward",
                                841);
                              v33 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                                      &v78,
                                      (const char (*)[46])"getItemParamVecByRewardIdVec fail, reward_id:");
                              v34 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                      v33,
                                      (const unsigned int *)(v2 + 32));
                              v35 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(
                                      v34,
                                      (const char (*)[9])" player:");
                              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                                __asan_report_load8(&this->player_);
                              operator<<(v35, this->player_);
                              common::milog::MiLogStream::~MiLogStream(&v78);
                            }
                            ItemParam::addVecToItemCountMap(
                              (const std::vector<ItemParam> *)(v2 + 368),
                              (std::map<unsigned int,unsigned int> *)(v2 + 432));
                            ItemParam::addVecToItemCountMap(
                              (const std::vector<ItemParam> *)(v2 + 368),
                              (std::map<unsigned int,unsigned int> *)(v2 + 592));
                            std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v2 + 368));
                          }
                          if ( *(_BYTE *)(((unsigned __int64)&item_use_config->use_op >> 3) + 0x7FFF8000) != 0
                            && *(_BYTE *)(((unsigned __int64)&item_use_config->use_op >> 3) + 0x7FFF8000) <= 3 )
                          {
                            __asan_report_load4(&item_use_config->use_op);
                          }
                          if ( item_use_config->use_op == ITEM_USE_ADD_SELECT_ITEM )
                          {
                            *(_DWORD *)(v2 + 80) = 0;
                            *(_DWORD *)(v2 + 84) = 0;
                            *(_DWORD *)(v2 + 88) = 0;
                            *(_DWORD *)(v2 + 92) = 0;
                            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                              __asan_report_load8(&this->player_);
                            v36 = Player::getItemComp(this->player_);
                            v37 = proto::BattlePassRewardTakeOption::option_idx(option);
                            *(_DWORD *)(v2 + 80) = PlayerItemComp::getUseConfigSelectId<unsigned int>(
                                                     v36,
                                                     item_use_config,
                                                     v37);
                            *(_DWORD *)(v2 + 84) = 1;
                            v38 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v2 + 88);
                            v76._M_ptr = *(std::__shared_ptr<Config,(__gnu_cxx::_Lock_policy)2>::element_type **)(v2 + 80);
                            v76._M_refcount._M_pi = v38;
                            v59._M_array = (std::initializer_list<ItemParam>::iterator)&v76;
                            v59._M_len = 1LL;
                            std::allocator<ItemParam>::allocator((std::allocator<ItemParam> *const)&__a);
                            std::vector<ItemParam>::vector(
                              (std::vector<ItemParam> *const)&reward_id_vec,
                              v59,
                              (const std::vector<ItemParam>::allocator_type *)&__a);
                            ItemParam::addVecToItemCountMap(
                              (const std::vector<ItemParam> *)&reward_id_vec,
                              (std::map<unsigned int,unsigned int> *)(v2 + 512));
                            std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)&reward_id_vec);
                            std::allocator<ItemParam>::~allocator((std::allocator<ItemParam> *const)&__a);
                            v39 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v2 + 88);
                            v76._M_ptr = *(std::__shared_ptr<Config,(__gnu_cxx::_Lock_policy)2>::element_type **)(v2 + 80);
                            v76._M_refcount._M_pi = v39;
                            v60._M_array = (std::initializer_list<ItemParam>::iterator)&v76;
                            v60._M_len = 1LL;
                            std::allocator<ItemParam>::allocator((std::allocator<ItemParam> *const)&__a);
                            std::vector<ItemParam>::vector(
                              (std::vector<ItemParam> *const)&reward_id_vec,
                              v60,
                              (const std::vector<ItemParam>::allocator_type *)&__a);
                            ItemParam::addVecToItemCountMap(
                              (const std::vector<ItemParam> *)&reward_id_vec,
                              (std::map<unsigned int,unsigned int> *)(v2 + 592));
                            std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)&reward_id_vec);
                            std::allocator<ItemParam>::~allocator((std::allocator<ItemParam> *const)&__a);
                          }
                          __gnu_cxx::__normal_iterator<data::ItemUseConfig const*,std::vector<data::ItemUseConfig>>::operator++(&__for_begin_0);
                        }
                      }
                    }
                    __gnu_cxx::__normal_iterator<ItemParam *,std::vector<ItemParam>>::operator++(&__for_begin);
                  }
                }
                ActionReason::ActionReason(
                  (ActionReason *const)(v2 + 176),
                  ACTION_REASON_BATTLE_PASS_LEVEL_REWARD,
                  ITEM_LIMIT_BATTLE_PASS_LEVEL_REWARD);
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8(&this->player_);
                v40 = Player::getItemComp(this->player_);
                ret = PlayerItemComp::checkAddItemBatch(
                        v40,
                        (const std::vector<ItemParam> *)(v2 + 112),
                        (const ActionReason *)(v2 + 176));
                if ( ret )
                {
                  common::milog::MiLogStream::create(
                    &v78,
                    &common::milog::MiLogDefault::default_log_obj_,
                    1u,
                    "./src/player/battle_pass/player_battle_pass_comp.cpp",
                    "checkCanTakeBattlePassReward",
                    861);
                  v41 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                          &v78,
                          (const char (*)[30])"checkAddItemBatch fails, tag:");
                  v42 = operator<<(v41, (const BattlePassRewardTag *)(v2 + 48));
                  v43 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                          v42,
                          (const char (*)[11])" item_vec:");
                  common::milog::MiLogStream::operator<<<ItemParam>(v43, (const std::vector<ItemParam> *)(v2 + 112));
                  common::milog::MiLogStream::~MiLogStream(&v78);
                  v12 = ret;
                }
                else
                {
                  ActionReason::ActionReason(
                    (ActionReason *const)(v2 + 240),
                    ACTION_REASON_BATTLE_PASS_LEVEL_REWARD,
                    ITEM_LIMIT_USE_ITEM_REWARD);
                  if ( std::map<unsigned int,unsigned int>::empty((const std::map<unsigned int,unsigned int> *const)(v2 + 432)) )
                    goto LABEL_79;
                  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                    __asan_report_load8(&this->player_);
                  v44 = Player::getItemComp(this->player_);
                  ItemParam::vecFromItemCountMap(
                    (std::vector<ItemParam> *)&reward_id_vec,
                    (const std::map<unsigned int,unsigned int> *)(v2 + 432));
                  ret = PlayerItemComp::checkAddItemBatch(
                          v44,
                          (const std::vector<ItemParam> *)&reward_id_vec,
                          (const ActionReason *)(v2 + 240));
                  std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)&reward_id_vec);
                  if ( ret )
                  {
                    common::milog::MiLogStream::create(
                      &v78,
                      &common::milog::MiLogDefault::default_log_obj_,
                      3u,
                      "./src/player/battle_pass/player_battle_pass_comp.cpp",
                      "checkCanTakeBattlePassReward",
                      870);
                    v45 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                            &v78,
                            (const char (*)[30])"checkAddItemBatch fails, tag:");
                    v46 = operator<<(v45, (const BattlePassRewardTag *)(v2 + 48));
                    v47 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                            v46,
                            (const char (*)[31])" select_reward_item_count_map:");
                    common::milog::MiLogStream::operator<<<unsigned int,unsigned int>(
                      v47,
                      (const std::map<unsigned int,unsigned int> *)(v2 + 432));
                    common::milog::MiLogStream::~MiLogStream(&v78);
                    v12 = ret;
                  }
                  else
                  {
LABEL_79:
                    ActionReason::ActionReason(
                      (ActionReason *const)(v2 + 304),
                      ACTION_REASON_BATTLE_PASS_LEVEL_REWARD,
                      ITEM_LIMIT_USE_ITEM);
                    if ( std::map<unsigned int,unsigned int>::empty((const std::map<unsigned int,unsigned int> *const)(v2 + 512)) )
                      goto LABEL_84;
                    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                      __asan_report_load8(&this->player_);
                    v48 = Player::getItemComp(this->player_);
                    ItemParam::vecFromItemCountMap(
                      (std::vector<ItemParam> *)&reward_id_vec,
                      (const std::map<unsigned int,unsigned int> *)(v2 + 512));
                    ret = PlayerItemComp::checkAddItemBatch(
                            v48,
                            (const std::vector<ItemParam> *)&reward_id_vec,
                            (const ActionReason *)(v2 + 304));
                    std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)&reward_id_vec);
                    if ( ret )
                    {
                      common::milog::MiLogStream::create(
                        &v78,
                        &common::milog::MiLogDefault::default_log_obj_,
                        3u,
                        "./src/player/battle_pass/player_battle_pass_comp.cpp",
                        "checkCanTakeBattlePassReward",
                        880);
                      v49 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                              &v78,
                              (const char (*)[30])"checkAddItemBatch fails, tag:");
                      v50 = operator<<(v49, (const BattlePassRewardTag *)(v2 + 48));
                      v51 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                              v50,
                              (const char (*)[29])" select_item_item_count_map:");
                      common::milog::MiLogStream::operator<<<unsigned int,unsigned int>(
                        v51,
                        (const std::map<unsigned int,unsigned int> *)(v2 + 512));
                      common::milog::MiLogStream::~MiLogStream(&v78);
                      v12 = ret;
                    }
                    else
                    {
LABEL_84:
                      ActionReason::ActionReason(
                        (ActionReason *const)(v2 + 368),
                        ACTION_REASON_BATTLE_PASS_LEVEL_REWARD,
                        ITEM_LIMIT_UNLIMITED);
                      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                        __asan_report_load8(&this->player_);
                      v52 = Player::getItemComp(this->player_);
                      ItemParam::vecFromItemCountMap(
                        (std::vector<ItemParam> *)&reward_id_vec,
                        (const std::map<unsigned int,unsigned int> *)(v2 + 592));
                      ret = PlayerItemComp::checkAddItemBatch(
                              v52,
                              (const std::vector<ItemParam> *)&reward_id_vec,
                              (const ActionReason *)(v2 + 368));
                      std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)&reward_id_vec);
                      if ( ret )
                      {
                        common::milog::MiLogStream::create(
                          &v78,
                          &common::milog::MiLogDefault::default_log_obj_,
                          3u,
                          "./src/player/battle_pass/player_battle_pass_comp.cpp",
                          "checkCanTakeBattlePassReward",
                          888);
                        v53 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                                &v78,
                                (const char (*)[30])"checkAddItemBatch fails, tag:");
                        v54 = operator<<(v53, (const BattlePassRewardTag *)(v2 + 48));
                        v55 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                                v54,
                                (const char (*)[23])" total_item_count_map:");
                        common::milog::MiLogStream::operator<<<unsigned int,unsigned int>(
                          v55,
                          (const std::map<unsigned int,unsigned int> *)(v2 + 592));
                        common::milog::MiLogStream::~MiLogStream(&v78);
                        v12 = ret;
                      }
                      else
                      {
                        v12 = 0;
                      }
                    }
                  }
                }
              }
              std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v2 + 112));
              std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v2 + 592));
              std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v2 + 512));
              std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v2 + 432));
            }
            else
            {
              common::milog::MiLogStream::create(
                &v78,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/battle_pass/player_battle_pass_comp.cpp",
                "checkCanTakeBattlePassReward",
                803);
              v21 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                      &v78,
                      (const char (*)[22])"paid platform flags: ");
              v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v21,
                      &schedule_ptr->paid_platform_flags);
              v23 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                      v22,
                      (const char (*)[19])" , platform type: ");
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8(&this->player_);
              val = Player::getPlatformType(this->player_);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &val);
              common::milog::MiLogStream::~MiLogStream(&v78);
              v12 = -1;
            }
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v78,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/battle_pass/player_battle_pass_comp.cpp",
            "checkCanTakeBattlePassReward",
            790);
          v18 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                  &v78,
                  (const char (*)[33])"level small than tag level, tag:");
          operator<<(v18, (const BattlePassRewardTag *)(v2 + 48));
          common::milog::MiLogStream::~MiLogStream(&v78);
          v12 = -1;
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v78,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/battle_pass/player_battle_pass_comp.cpp",
          "checkCanTakeBattlePassReward",
          785);
        v17 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                &v78,
                (const char (*)[49])"unlock_status small than tag unlock_status, tag:");
        operator<<(v17, (const BattlePassRewardTag *)(v2 + 48));
        common::milog::MiLogStream::~MiLogStream(&v78);
        v12 = -1;
      }
    }
    std::unordered_set<BattlePassRewardTag>::~unordered_set((std::unordered_set<BattlePassRewardTag> *const)(v2 + 672));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v78,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/battle_pass/player_battle_pass_comp.cpp",
      "checkCanTakeBattlePassReward",
      774);
    v11 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
            &v78,
            (const char (*)[44])"no cur schedule cannot take reward, player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    operator<<(v11, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v78);
    v12 = -1;
  }
  result = v12;
  if ( v79 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF803C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8044) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8050) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8058) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8058) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 896: range 00000000150C2208-00000000150C33A4
int32_t __cdecl PlayerBattlePassComp::takeBattlePassReward(
        PlayerBattlePassComp *const this,
        const proto::BattlePassRewardTakeOption *option,
        std::vector<ItemParam> *display_vec)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  int32_t v6; // r14d
  common::milog::MiLogStream *v7; // rcx
  const proto::BattlePassRewardTag *v8; // rax
  const proto::BattlePassRewardTag *v9; // rax
  const proto::BattlePassRewardTag *v10; // rax
  uint32_t v11; // eax
  PlayerItemComp *ItemComp; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  MaterialExcelConfigMgr *p_material_config_mgr; // rcx
  char v16; // al
  uint32_t v17; // ecx
  common::milog::MiLogStream *v18; // rax
  std::__shared_ptr_access<Material,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  unsigned __int64 v20; // rdx
  const unsigned int *v21; // rax
  _DWORD *v22; // rdx
  std::__shared_ptr_access<Material,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  uint64_t Guid; // rax
  PlayerItemComp *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rcx
  PlayerItemComp *v29; // rax
  ItemParam *M_current; // r15
  ItemParam *v31; // r14
  uint32_t v32; // ecx
  int32_t result; // eax
  google::protobuf::uint32 level; // [rsp+Ch] [rbp-314h]
  std::initializer_list<unsigned int> __la; // [rsp+10h] [rbp-310h]
  uint32_t *__l; // [rsp+10h] [rbp-310h]
  PlayerItemComp *__lb; // [rsp+10h] [rbp-310h]
  PlayerItemComp *__lc; // [rsp+10h] [rbp-310h]
  ItemParam *__ld; // [rsp+10h] [rbp-310h]
  proto::BattlePassUnlockStatus unlock_status; // [rsp+20h] [rbp-300h]
  PlayerItemComp *unlock_statusa; // [rsp+20h] [rbp-300h]
  ItemParam *unlock_statusb; // [rsp+20h] [rbp-300h]
  std::allocator<unsigned int> __a; // [rsp+4Bh] [rbp-2D5h] BYREF
  unsigned int v45[5]; // [rsp+4Ch] [rbp-2D4h] BYREF
  std::vector<data::ItemUseConfig>::const_iterator __for_begin_0; // [rsp+60h] [rbp-2C0h] BYREF
  std::vector<data::ItemUseConfig>::const_iterator __for_end_0; // [rsp+68h] [rbp-2B8h] BYREF
  __gnu_cxx::__normal_iterator<ItemParam*,std::vector<ItemParam> > __i; // [rsp+70h] [rbp-2B0h] BYREF
  __gnu_cxx::__normal_iterator<const ItemParam*,std::vector<ItemParam> > __position; // [rsp+78h] [rbp-2A8h] BYREF
  BattlePassSchedule *schedule_ptr; // [rsp+80h] [rbp-2A0h]
  std::vector<ItemParam> *__for_range; // [rsp+88h] [rbp-298h]
  const ItemParam *item_param; // [rsp+90h] [rbp-290h]
  const data::MaterialExcelConfig *material_excel_config_ptr; // [rsp+98h] [rbp-288h]
  const std::vector<data::ItemUseConfig> *__for_range_0; // [rsp+A0h] [rbp-280h]
  const data::ItemUseConfig *item_use_config; // [rsp+A8h] [rbp-278h]
  std::vector<unsigned int> reward_id_vec; // [rsp+B0h] [rbp-270h] BYREF
  common::milog::MiLogStream v57; // [rsp+D0h] [rbp-250h] BYREF
  char v58[560]; // [rsp+F0h] [rbp-230h] BYREF

  v3 = (unsigned __int64)v58;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(512LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "10 48 4 13 reward_id:951 64 8 10 reason:945 96 12 7 tag:908 128 16 16 material_ptr:936 160 16 18"
                        " add_item_param:961 192 24 18 final_item_vec:909 256 24 17 action_reason:912 320 24 12 item_vec:"
                        "918 384 24 13 use_param:942 448 24 19 reward_item_vec:952";
  *(_QWORD *)(v3 + 16) = PlayerBattlePassComp::takeBattlePassReward;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -219020288;
  v5[536862724] = -219021312;
  v5[536862725] = -219021312;
  v5[536862726] = -234881024;
  v5[536862727] = -218959118;
  v5[536862728] = -234881024;
  v5[536862729] = -218959118;
  v5[536862730] = -234881024;
  v5[536862731] = -218959118;
  v5[536862732] = -234881024;
  v5[536862733] = -218959118;
  v5[536862734] = -218103808;
  v5[536862735] = -202116109;
  if ( PlayerBattlePassComp::checkCanTakeBattlePassReward(this, option) )
  {
    common::milog::MiLogStream::create(
      &v57,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/battle_pass/player_battle_pass_comp.cpp",
      "takeBattlePassReward",
      899);
    common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
      &v57,
      (const char (*)[36])"checkCanTakeBattlePassReward failed");
    common::milog::MiLogStream::~MiLogStream(&v57);
    v6 = -1;
  }
  else
  {
    schedule_ptr = PlayerBattlePassComp::findCurSchedule(this);
    if ( schedule_ptr )
    {
      v8 = proto::BattlePassRewardTakeOption::tag(option);
      unlock_status = proto::BattlePassRewardTag::unlock_status(v8);
      v9 = proto::BattlePassRewardTakeOption::tag(option);
      level = proto::BattlePassRewardTag::level(v9);
      v10 = proto::BattlePassRewardTakeOption::tag(option);
      v11 = proto::BattlePassRewardTag::reward_id(v10);
      BattlePassRewardTag::BattlePassRewardTag((BattlePassRewardTag *const)(v3 + 96), unlock_status, level, v11);
      std::vector<ItemParam>::vector((std::vector<ItemParam> *const)(v3 + 192));
      std::unordered_set<BattlePassRewardTag>::insert(
        &schedule_ptr->reward_taken_set,
        (const std::unordered_set<BattlePassRewardTag>::value_type *)(v3 + 96));
      ActionReason::ActionReason(
        (ActionReason *const)(v3 + 256),
        ACTION_REASON_BATTLE_PASS_LEVEL_REWARD,
        ITEM_LIMIT_BATTLE_PASS_LEVEL_REWARD);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      ItemComp = Player::getItemComp(this->player_);
      if ( PlayerItemComp::grantReward(ItemComp, *(_DWORD *)(v3 + 104), (const ActionReason *)(v3 + 256), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v57,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/battle_pass/player_battle_pass_comp.cpp",
          "takeBattlePassReward",
          915);
        v13 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                &v57,
                (const char (*)[31])"grantReward failed, reward_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 104));
        common::milog::MiLogStream::~MiLogStream(&v57);
        v6 = -1;
      }
      else
      {
        std::vector<ItemParam>::vector((std::vector<ItemParam> *const)(v3 + 320));
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        unlock_statusa = Player::getItemComp(this->player_);
        v45[0] = *(_DWORD *)(v3 + 104);
        __la._M_array = v45;
        __la._M_len = 1LL;
        std::allocator<unsigned int>::allocator(&__a);
        std::vector<unsigned int>::vector(&reward_id_vec, __la, &__a);
        LOBYTE(__la._M_array) = PlayerItemComp::getItemParamVecByRewardIdVec(
                                  unlock_statusa,
                                  &reward_id_vec,
                                  (std::vector<ItemParam> *)(v3 + 320)) != 0;
        std::vector<unsigned int>::~vector(&reward_id_vec);
        std::allocator<unsigned int>::~allocator(&__a);
        if ( LOBYTE(__la._M_array) )
        {
          common::milog::MiLogStream::create(
            &v57,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/battle_pass/player_battle_pass_comp.cpp",
            "takeBattlePassReward",
            921);
          v14 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                  &v57,
                  (const char (*)[25])"getItemParam fails, tag:");
          operator<<(v14, (const BattlePassRewardTag *)(v3 + 96));
          common::milog::MiLogStream::~MiLogStream(&v57);
        }
        __for_range = (std::vector<ItemParam> *)(v3 + 320);
        *(std::vector<ItemParam>::iterator *)&v45[1] = std::vector<ItemParam>::begin((std::vector<ItemParam> *const)(v3 + 320));
        *(std::vector<ItemParam>::iterator *)&v45[3] = std::vector<ItemParam>::end(__for_range);
        while ( __gnu_cxx::operator!=<ItemParam *,std::vector<ItemParam>>(
                  (const __gnu_cxx::__normal_iterator<ItemParam*,std::vector<ItemParam> > *)&v45[1],
                  (const __gnu_cxx::__normal_iterator<ItemParam*,std::vector<ItemParam> > *)&v45[3]) )
        {
          item_param = __gnu_cxx::__normal_iterator<ItemParam *,std::vector<ItemParam>>::operator*((const __gnu_cxx::__normal_iterator<ItemParam*,std::vector<ItemParam> > *const)&v45[1]);
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)(v3 + 160));
          p_material_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160))->design_config.txt_config_mgr.material_config_mgr;
          if ( *(_BYTE *)(((unsigned __int64)item_param >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)item_param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)item_param >> 3)
                                                                         + 0x7FFF8000) )
          {
            __asan_report_load4(item_param);
          }
          material_excel_config_ptr = data::MaterialExcelConfigMgrBase::findMaterialExcelConfig(
                                        p_material_config_mgr,
                                        item_param->item_id);
          std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 160));
          if ( !material_excel_config_ptr )
            goto LABEL_27;
          if ( *(_BYTE *)(((unsigned __int64)&material_excel_config_ptr->material_type >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)material_excel_config_ptr + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&material_excel_config_ptr->material_type >> 3)
                                                                                     + 0x7FFF8000) )
          {
            __asan_report_load4(&material_excel_config_ptr->material_type);
          }
          if ( material_excel_config_ptr->material_type == MATERIAL_SELECTABLE_CHEST
            && proto::BattlePassRewardTakeOption::option_idx(option) )
          {
            v16 = 0;
          }
          else
          {
LABEL_27:
            v16 = 1;
          }
          if ( v16 )
          {
            std::vector<ItemParam>::emplace_back<ItemParam const&>(
              (std::vector<ItemParam> *const)(v3 + 192),
              item_param,
              item_param);
          }
          else
          {
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            v17 = (unsigned int)Player::getItemComp(this->player_);
            if ( *(_BYTE *)(((unsigned __int64)item_param >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)item_param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)item_param >> 3)
                                                                           + 0x7FFF8000) )
            {
              __asan_report_load4(item_param);
            }
            PlayerItemComp::findMaterial((PlayerItemComp *const)(v3 + 128), v17);
            if ( std::operator==<Material>(0LL, (const std::shared_ptr<Material> *)(v3 + 128)) )
            {
              common::milog::MiLogStream::create(
                &v57,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/battle_pass/player_battle_pass_comp.cpp",
                "takeBattlePassReward",
                939);
              v18 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                      &v57,
                      (const char (*)[26])"cannot find material, id:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &item_param->item_id);
              common::milog::MiLogStream::~MiLogStream(&v57);
            }
            else
            {
              *(_DWORD *)(v3 + 384) = 0;
              *(_QWORD *)(v3 + 392) = 0LL;
              *(_DWORD *)(v3 + 400) = 0;
              *(_DWORD *)(v3 + 400) = proto::BattlePassRewardTakeOption::option_idx(option);
              __l = &item_param->count;
              v19 = std::__shared_ptr_access<Material,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Material,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
              if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
                __asan_report_load8(v19);
              v20 = (unsigned __int64)(v19->_vptr_Item + 8);
              if ( *(_BYTE *)((v20 >> 3) + 0x7FFF8000) )
                __asan_report_load8(v19->_vptr_Item + 8);
              v45[0] = (*(__int64 (__fastcall **)(std::__shared_ptr_access<Material,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v20)(v19);
              v21 = std::min<unsigned int>(v45, __l);
              v22 = v21;
              if ( *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v21 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v21);
              }
              *(_DWORD *)(v3 + 384) = *v22;
              SubItemReason::SubItemReason((SubItemReason *const)(v3 + 64), ACTION_REASON_BATTLE_PASS_LEVEL_REWARD);
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8(&this->player_);
              __lb = Player::getItemComp(this->player_);
              v23 = std::__shared_ptr_access<Material,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Material,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
              Guid = Item::getGuid(v23);
              PlayerItemComp::useItem(__lb, Guid, (const ItemUseParam *)(v3 + 384), (const SubItemReason *)(v3 + 64));
              __for_range_0 = &material_excel_config_ptr->item_use;
              __for_begin_0._M_current = std::vector<data::ItemUseConfig>::begin(&material_excel_config_ptr->item_use)._M_current;
              __for_end_0._M_current = std::vector<data::ItemUseConfig>::end(__for_range_0)._M_current;
              while ( __gnu_cxx::operator!=<data::ItemUseConfig const*,std::vector<data::ItemUseConfig>>(
                        &__for_begin_0,
                        &__for_end_0) )
              {
                item_use_config = __gnu_cxx::__normal_iterator<data::ItemUseConfig const*,std::vector<data::ItemUseConfig>>::operator*(&__for_begin_0);
                if ( *(_BYTE *)(((unsigned __int64)&item_use_config->use_op >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&item_use_config->use_op >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4(&item_use_config->use_op);
                }
                if ( item_use_config->use_op == ITEM_USE_GRANT_SELECT_REWARD )
                {
                  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                    __asan_report_load8(&this->player_);
                  v25 = Player::getItemComp(this->player_);
                  *(_DWORD *)(v3 + 48) = PlayerItemComp::getUseConfigSelectId<unsigned int>(
                                           v25,
                                           item_use_config,
                                           *(_DWORD *)(v3 + 400));
                  std::vector<ItemParam>::vector((std::vector<ItemParam> *const)(v3 + 448));
                  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                    __asan_report_load8(&this->player_);
                  __lc = Player::getItemComp(this->player_);
                  v45[0] = *(_DWORD *)(v3 + 48);
                  std::allocator<unsigned int>::allocator(&__a);
                  std::vector<unsigned int>::vector(
                    &reward_id_vec,
                    (std::initializer_list<unsigned int>)__PAIR128__(1LL, v45),
                    &__a);
                  LOBYTE(__lc) = PlayerItemComp::getItemParamVecByRewardIdVec(
                                   __lc,
                                   &reward_id_vec,
                                   (std::vector<ItemParam> *)(v3 + 448)) != 0;
                  std::vector<unsigned int>::~vector(&reward_id_vec);
                  std::allocator<unsigned int>::~allocator(&__a);
                  if ( (_BYTE)__lc )
                  {
                    common::milog::MiLogStream::create(
                      &v57,
                      &common::milog::MiLogDefault::default_log_obj_,
                      3u,
                      "./src/player/battle_pass/player_battle_pass_comp.cpp",
                      "takeBattlePassReward",
                      955);
                    v26 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                            &v57,
                            (const char (*)[46])"getItemParamVecByRewardIdVec fail, reward_id:");
                    v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                            v26,
                            (const unsigned int *)(v3 + 48));
                    v28 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(
                            v27,
                            (const char (*)[9])" player:");
                    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                      __asan_report_load8(&this->player_);
                    operator<<(v28, this->player_);
                    common::milog::MiLogStream::~MiLogStream(&v57);
                  }
                  unlock_statusb = std::vector<ItemParam>::end((std::vector<ItemParam> *const)(v3 + 448))._M_current;
                  __ld = std::vector<ItemParam>::begin((std::vector<ItemParam> *const)(v3 + 448))._M_current;
                  __i._M_current = std::vector<ItemParam>::end((std::vector<ItemParam> *const)(v3 + 192))._M_current;
                  __gnu_cxx::__normal_iterator<ItemParam const*,std::vector<ItemParam>>::__normal_iterator<ItemParam*>(
                    &__position,
                    &__i);
                  std::vector<ItemParam>::insert<__gnu_cxx::__normal_iterator<ItemParam*,std::vector<ItemParam>>,void>(
                    (std::vector<ItemParam> *const)(v3 + 192),
                    __position,
                    (__gnu_cxx::__normal_iterator<ItemParam*,std::vector<ItemParam> >)__ld,
                    (__gnu_cxx::__normal_iterator<ItemParam*,std::vector<ItemParam> >)unlock_statusb);
                  std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v3 + 448));
                }
                if ( *(_BYTE *)(((unsigned __int64)&item_use_config->use_op >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&item_use_config->use_op >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4(&item_use_config->use_op);
                }
                if ( item_use_config->use_op == ITEM_USE_ADD_SELECT_ITEM )
                {
                  *(_DWORD *)(v3 + 160) = 0;
                  *(_DWORD *)(v3 + 164) = 0;
                  *(_DWORD *)(v3 + 168) = 0;
                  *(_DWORD *)(v3 + 172) = 0;
                  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                    __asan_report_load8(&this->player_);
                  v29 = Player::getItemComp(this->player_);
                  *(_DWORD *)(v3 + 160) = PlayerItemComp::getUseConfigSelectId<unsigned int>(
                                            v29,
                                            item_use_config,
                                            *(_DWORD *)(v3 + 400));
                  *(_DWORD *)(v3 + 164) = 1;
                  std::vector<ItemParam>::push_back(
                    (std::vector<ItemParam> *const)(v3 + 192),
                    (const std::vector<ItemParam>::value_type *)(v3 + 160));
                }
                __gnu_cxx::__normal_iterator<data::ItemUseConfig const*,std::vector<data::ItemUseConfig>>::operator++(&__for_begin_0);
              }
            }
            std::shared_ptr<Material>::~shared_ptr((std::shared_ptr<Material> *const)(v3 + 128));
          }
          __gnu_cxx::__normal_iterator<ItemParam *,std::vector<ItemParam>>::operator++((__gnu_cxx::__normal_iterator<ItemParam*,std::vector<ItemParam> > *const)&v45[1]);
        }
        M_current = std::vector<ItemParam>::end((std::vector<ItemParam> *const)(v3 + 192))._M_current;
        v31 = std::vector<ItemParam>::begin((std::vector<ItemParam> *const)(v3 + 192))._M_current;
        __position._M_current = std::vector<ItemParam>::end(display_vec)._M_current;
        __gnu_cxx::__normal_iterator<ItemParam const*,std::vector<ItemParam>>::__normal_iterator<ItemParam*>(
          (__gnu_cxx::__normal_iterator<const ItemParam*,std::vector<ItemParam> > *const)(v3 + 64),
          (const __gnu_cxx::__normal_iterator<ItemParam*,std::vector<ItemParam> > *)&__position);
        std::vector<ItemParam>::insert<__gnu_cxx::__normal_iterator<ItemParam*,std::vector<ItemParam>>,void>(
          display_vec,
          *(std::vector<ItemParam>::const_iterator *)(v3 + 64),
          (__gnu_cxx::__normal_iterator<ItemParam*,std::vector<ItemParam> >)v31,
          (__gnu_cxx::__normal_iterator<ItemParam*,std::vector<ItemParam> >)M_current);
        PlayerBattlePassComp::notifyCurSchedule(this);
        v32 = proto::BattlePassRewardTakeOption::option_idx(option);
        if ( *(_BYTE *)(((unsigned __int64)schedule_ptr >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)schedule_ptr >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(schedule_ptr);
        }
        PlayerBattlePassComp::logTakeLevelReward(
          this,
          schedule_ptr->schedule_id,
          (const BattlePassRewardTag *)(v3 + 96),
          v32,
          (const std::vector<ItemParam> *)(v3 + 192));
        v6 = 0;
        std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v3 + 320));
      }
      std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v3 + 192));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v57,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/battle_pass/player_battle_pass_comp.cpp",
        "takeBattlePassReward",
        905);
      v7 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
             &v57,
             (const char (*)[44])"no cur schedule cannot take reward, player:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      operator<<(v7, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v57);
      v6 = -1;
    }
  }
  result = v6;
  if ( v58 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 975: range 00000000150C33A6-00000000150C3C32
__int64 __fastcall PlayerBattlePassComp::tryBuyBattlePassLevel(PlayerBattlePassComp *const this, uint32_t level)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rcx
  __int64 result; // rax
  BattlePassExcelConfigMgr *p_battle_pass_excel_config_mgr; // rcx
  common::milog::MiLogStream *v8; // rcx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rcx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  BattlePassExcelConfigMgr *v14; // r14
  unsigned int v15; // ecx
  uint32_t v16; // eax
  bool v17; // r14
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rcx
  PlayerItemComp *ItemComp; // rax
  PlayerItemComp *v24; // rax
  uint32_t v25; // edi
  uint32_t v26; // ecx
  uint32_t v27; // edx
  unsigned int ret; // [rsp+1Ch] [rbp-E4h]
  BattlePassSchedule *schedule_ptr; // [rsp+20h] [rbp-E0h]
  const data::BattlePassScheduleExcelConfig *config_ptr; // [rsp+28h] [rbp-D8h]
  common::milog::MiLogStream v32; // [rsp+30h] [rbp-D0h] BYREF
  char v33[176]; // [rsp+50h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 9 level:974 64 8 11 reason:1007 96 16 9 param:998";
  *(_QWORD *)(v2 + 16) = PlayerBattlePassComp::tryBuyBattlePassLevel;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202178560;
  *(_DWORD *)(v2 + 48) = level;
  schedule_ptr = PlayerBattlePassComp::findCurSchedule(this);
  if ( schedule_ptr )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v2 + 96));
    p_battle_pass_excel_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96))->design_config.txt_config_mgr.battle_pass_excel_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)schedule_ptr >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)schedule_ptr >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(schedule_ptr);
    }
    config_ptr = data::BattlePassExcelConfigMgrBase::findBattlePassScheduleExcelConfig(
                   p_battle_pass_excel_config_mgr,
                   schedule_ptr->schedule_id);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 96));
    if ( config_ptr )
    {
      if ( *(_DWORD *)(v2 + 48) )
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)(v2 + 96));
        v14 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96))->design_config.txt_config_mgr.battle_pass_excel_config_mgr;
        v15 = *(_DWORD *)(v2 + 48);
        if ( *(_BYTE *)(((unsigned __int64)&schedule_ptr->level >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)schedule_ptr + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&schedule_ptr->level >> 3)
                                                                     + 0x7FFF8000) )
        {
          __asan_report_load4(&schedule_ptr->level);
        }
        v16 = SAFE_ADD<unsigned int,unsigned int>(schedule_ptr->level, v15);
        v17 = data::BattlePassExcelConfigMgrBase::findBattlePassLevelExcelConfig(v14, v16) == 0LL;
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 96));
        if ( v17 )
        {
          common::milog::MiLogStream::create(
            &v32,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/battle_pass/player_battle_pass_comp.cpp",
            "tryBuyBattlePassLevel",
            995);
          v18 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                  &v32,
                  (const char (*)[21])"level overflow, now:");
          v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &schedule_ptr->level);
          v20 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v19, (const char (*)[10])" try_add:");
          v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v20,
                  (const unsigned int *)(v2 + 48));
          v22 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v21, (const char (*)[9])" player:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          operator<<(v22, this->player_);
          common::milog::MiLogStream::~MiLogStream(&v32);
          result = 1543LL;
        }
        else
        {
          *(_DWORD *)(v2 + 96) = 0;
          *(_DWORD *)(v2 + 100) = 0;
          *(_DWORD *)(v2 + 104) = 0;
          *(_DWORD *)(v2 + 108) = 0;
          *(_DWORD *)(v2 + 96) = 201;
          if ( *(_BYTE *)(((unsigned __int64)&config_ptr->buy_level_cost_coin_num >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&config_ptr->buy_level_cost_coin_num >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&config_ptr->buy_level_cost_coin_num);
          }
          *(_DWORD *)(v2 + 100) = SAFE_MULTIPLY<unsigned int,unsigned int>(
                                    *(_DWORD *)(v2 + 48),
                                    config_ptr->buy_level_cost_coin_num);
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          ItemComp = Player::getItemComp(this->player_);
          ret = PlayerItemComp::checkSubItem(ItemComp, (const ItemParam *)(v2 + 96));
          if ( ret )
          {
            result = ret;
          }
          else
          {
            SubItemReason::SubItemReason((SubItemReason *const)(v2 + 64), ACTION_REASON_BUY_BATTLE_PASS_LEVEL);
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            v24 = Player::getItemComp(this->player_);
            PlayerItemComp::subItem(v24, (const ItemParam *)(v2 + 96), (const SubItemReason *)(v2 + 64));
            if ( *(_BYTE *)(((unsigned __int64)&schedule_ptr->level >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)schedule_ptr + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&schedule_ptr->level >> 3)
                                                                         + 0x7FFF8000) )
            {
              __asan_report_load4(&schedule_ptr->level);
            }
            schedule_ptr->level += *(_DWORD *)(v2 + 48);
            PlayerBattlePassComp::notifyCurSchedule(this);
            v25 = *(_DWORD *)(v2 + 100);
            if ( *(_BYTE *)(((unsigned __int64)&schedule_ptr->level >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)schedule_ptr + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&schedule_ptr->level >> 3)
                                                                         + 0x7FFF8000) )
            {
              v25 = (_DWORD)schedule_ptr + 4;
              __asan_report_load4(&schedule_ptr->level);
            }
            v26 = schedule_ptr->level;
            v27 = *(_DWORD *)(v2 + 48);
            if ( *(_BYTE *)(((unsigned __int64)schedule_ptr >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)schedule_ptr >> 3) + 0x7FFF8000) <= 3 )
            {
              v25 = (unsigned int)schedule_ptr;
              __asan_report_load4(schedule_ptr);
            }
            PlayerBattlePassComp::logBuyLevel(this, schedule_ptr->schedule_id, v27, v26, v25);
            result = 0LL;
          }
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v32,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/battle_pass/player_battle_pass_comp.cpp",
          "tryBuyBattlePassLevel",
          990);
        v11 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(&v32, (const char (*)[28])off_256FBD20);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        v12 = operator<<(v11, this->player_);
        v13 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v12, (const char (*)[14])" schedule_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &schedule_ptr->schedule_id);
        common::milog::MiLogStream::~MiLogStream(&v32);
        result = 0xFFFFFFFFLL;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v32,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/battle_pass/player_battle_pass_comp.cpp",
        "tryBuyBattlePassLevel",
        985);
      v8 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
             &v32,
             (const char (*)[32])"no cur schedule config, player:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      v9 = operator<<(v8, this->player_);
      v10 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v9, (const char (*)[14])" schedule_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &schedule_ptr->schedule_id);
      common::milog::MiLogStream::~MiLogStream(&v32);
      result = 1541LL;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v32,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/battle_pass/player_battle_pass_comp.cpp",
      "tryBuyBattlePassLevel",
      979);
    v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v32,
           (const char (*)[25])"no cur schedule, player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    operator<<(v5, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v32);
    result = 1541LL;
  }
  if ( v33 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1018: range 00000000150C3C34-00000000150C58CD
void __cdecl PlayerBattlePassComp::tryRefreshMission(PlayerBattlePassComp *const this, bool is_notify)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::__detail::_Node_iterator_base<unsigned int,false>::__node_type *M_cur; // r14
  std::unordered_set<unsigned int>::iterator v7; // rax
  std::_Rb_tree_const_iterator<unsigned int>::reference v8; // rax
  _DWORD *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rcx
  std::__detail::_Node_iterator<unsigned int,true,false>::reference v13; // rax
  _DWORD *v14; // rdx
  bool v15; // r14
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rcx
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rcx
  uint32_t LastRefreshTime; // eax
  uint32_t CurScheduleId; // eax
  std::pair<unsigned int const,BattlePassMission> *n; // rax
  char v28; // al
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v29; // rax
  _DWORD *v30; // rdx
  std::__detail::_Node_iterator<unsigned int,true,false>::reference v31; // rax
  _DWORD *v32; // rdx
  uint32_t v33; // eax
  uint32_t v34; // eax
  std::tuple_element<0,std::tuple<unsigned int,unsigned int,unsigned int> >::type v35; // ecx
  uint32_t v36; // eax
  std::__detail::_Node_iterator_base<unsigned int,false>::__node_type *v37; // r14
  std::unordered_set<unsigned int>::iterator v38; // rax
  std::pair<unsigned int const,BattlePassMission> *v39; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v40; // rax
  _DWORD *v41; // rdx
  std::__detail::_Node_iterator<unsigned int,true,false>::reference v42; // rax
  _DWORD *v43; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v44; // rax
  uint32_t BattlePassCycleRefreshMissionNum; // eax
  unsigned int *M_current; // r15
  unsigned int *v47; // r14
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v48; // rax
  _DWORD *v49; // rdx
  __int64 v50; // rdx
  common::milog::MiLogStream *v51; // rax
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rax
  uint32_t WatcherComp; // ecx
  std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v55; // rax
  std::__detail::_Node_iterator_base<unsigned int,false>::__node_type *v57; // r14
  std::__detail::_Node_iterator_base<unsigned int,false>::__node_type *v58; // r15
  unsigned int *v59; // rax
  uint32_t *v60; // rdx
  uint32_t v61; // ecx
  common::milog::MiLogStream *v62; // rax
  common::milog::MiLogStream *v63; // rax
  common::milog::MiLogStream *v64; // rcx
  std::allocator<unsigned int> __a; // [rsp+23h] [rbp-4FDh] BYREF
  uint32_t now; // [rsp+24h] [rbp-4FCh]
  uint32_t offset; // [rsp+28h] [rbp-4F8h]
  uint32_t mission_id_2; // [rsp+2Ch] [rbp-4F4h]
  std::set<unsigned int>::iterator __for_begin; // [rsp+30h] [rbp-4F0h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+38h] [rbp-4E8h] BYREF
  const BattlePassExcelConfigMgr *battle_pass_config_mgr; // [rsp+40h] [rbp-4E0h]
  const WatcherExcelConfigMgr *watcher_config_mgr; // [rsp+48h] [rbp-4D8h]
  PlayerWatcherComp *watcher_comp; // [rsp+50h] [rbp-4D0h]
  std::set<unsigned int> *__for_range; // [rsp+58h] [rbp-4C8h]
  std::unordered_set<unsigned int> *__for_range_0; // [rsp+60h] [rbp-4C0h]
  BattlePassSchedule *schedule_ptr; // [rsp+68h] [rbp-4B8h]
  std::unordered_map<unsigned int,BattlePassMission> *__for_range_1; // [rsp+70h] [rbp-4B0h]
  std::vector<unsigned int> *__for_range_2; // [rsp+78h] [rbp-4A8h]
  std::unordered_set<unsigned int> *__for_range_3; // [rsp+80h] [rbp-4A0h]
  std::tuple_element<0,std::tuple<unsigned int,unsigned int,unsigned int> >::type *old_cycle_idx; // [rsp+88h] [rbp-498h]
  std::tuple_element<0,std::tuple<unsigned int,unsigned int> >::type *old_begin_time; // [rsp+90h] [rbp-490h]
  std::tuple_element<0,std::tuple<unsigned int> >::type *old_end_time; // [rsp+98h] [rbp-488h]
  std::tuple_element<0,std::tuple<unsigned int,unsigned int,unsigned int> >::type *new_cycle_idx; // [rsp+A0h] [rbp-480h]
  std::tuple_element<0,std::tuple<unsigned int,unsigned int> >::type *new_begin_time; // [rsp+A8h] [rbp-478h]
  std::tuple_element<0,std::tuple<unsigned int> >::type *new_end_time; // [rsp+B0h] [rbp-470h]
  std::unordered_map<unsigned int,BattlePassMission> *__for_range_4; // [rsp+B8h] [rbp-468h]
  std::vector<unsigned int> *__for_range_5; // [rsp+C0h] [rbp-460h]
  std::unordered_set<unsigned int> *__for_range_6; // [rsp+C8h] [rbp-458h]
  std::vector<unsigned int> *__for_range_7; // [rsp+D0h] [rbp-450h]
  const data::BattlePassMissionExcelConfig *mission_config_ptr; // [rsp+D8h] [rbp-448h]
  std::tuple_element<0,std::pair<unsigned int const,BattlePassMission> >::type *mission_id_0; // [rsp+E0h] [rbp-440h]
  std::tuple_element<1,std::pair<unsigned int const,BattlePassMission> >::type *__0; // [rsp+E8h] [rbp-438h]
  std::unordered_map<unsigned int,BattlePassMission> *__for_range_8; // [rsp+F0h] [rbp-430h]
  std::unordered_set<unsigned int> *__for_range_9; // [rsp+F8h] [rbp-428h]
  std::pair<unsigned int const,BattlePassMission> *v95; // [rsp+100h] [rbp-420h]
  std::tuple_element<0,std::pair<unsigned int const,BattlePassMission> >::type *mission_id_1; // [rsp+108h] [rbp-418h]
  std::tuple_element<1,std::pair<unsigned int const,BattlePassMission> >::type *mission; // [rsp+110h] [rbp-410h]
  std::tuple_element<0,std::pair<unsigned int const,BattlePassMission> >::type *mission_id; // [rsp+118h] [rbp-408h]
  std::tuple_element<1,std::pair<unsigned int const,BattlePassMission> >::type *_; // [rsp+120h] [rbp-400h]
  std::tuple<unsigned int,unsigned int,unsigned int> __t; // [rsp+12Ch] [rbp-3F4h] BYREF
  std::tuple<unsigned int,unsigned int,unsigned int> v101; // [rsp+138h] [rbp-3E8h] BYREF
  std::pair<unsigned int const,BattlePassMission> __in; // [rsp+144h] [rbp-3DCh] BYREF
  common::milog::MiLogStream v103; // [rsp+150h] [rbp-3D0h] BYREF
  char v104[944]; // [rsp+170h] [rbp-3B0h] BYREF

  v2 = (unsigned __int64)v104;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(896LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "13 48 4 28 current_week_begin_time:1025 64 4 15 mission_id:1128 80 16 16 watcher_ptr:1142 112 24"
                        " 23 del_mission_id_vec:1067 176 24 23 del_mission_id_vec:1093 240 24 25 cycle_mission_id_vec:110"
                        "7 304 24 23 add_mission_id_vec:1108 368 24 18 select_id_vec:1125 432 48 20 old_watcher_set:1029 "
                        "512 56 41 cross_schedule_weekly_mission_id_set:1024 608 56 26 change_mission_id_set:1065 704 56 "
                        "25 daily_mission_id_set:1066 800 56 25 cycle_mission_id_set:1091";
  *(_QWORD *)(v2 + 16) = PlayerBattlePassComp::tryRefreshMission;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = 61956;
  v4[536862723] = 62194;
  v4[536862724] = -218959360;
  v4[536862725] = 62194;
  v4[536862726] = -218959360;
  v4[536862727] = 62194;
  v4[536862728] = -218959360;
  v4[536862729] = 62194;
  v4[536862730] = -218959360;
  v4[536862731] = 62194;
  v4[536862732] = -218959360;
  v4[536862733] = 62194;
  v4[536862735] = -218959118;
  v4[536862737] = -234881024;
  v4[536862738] = -218959118;
  v4[536862740] = -234881024;
  v4[536862741] = -218959118;
  v4[536862743] = -234881024;
  v4[536862744] = -218959118;
  v4[536862746] = -218103808;
  v4[536862747] = -202116109;
  now = common::tools::TimeUtils::getNow();
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v2 + 80));
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
  offset = ConstValueExcelConfigMgr::getTimeOffsetSec(&v5->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 80));
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v2 + 80));
  battle_pass_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80))->design_config.txt_config_mgr.battle_pass_excel_config_mgr;
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 80));
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v2 + 80));
  watcher_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80))->design_config.txt_config_mgr.watcher_config_mgr;
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 80));
  BattlePassExcelConfigMgr::getCrossScheduleCycleMissionSet(
    (std::unordered_set<unsigned int> *)(v2 + 512),
    battle_pass_config_mgr);
  *(_DWORD *)(v2 + 48) = common::tools::TimeUtils::getWeekTime(now, offset);
  if ( PlayerBattlePassComp::getWeeklyLastRefreshTime(this) < *(_DWORD *)(v2 + 48) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    watcher_comp = Player::getWatcherComp(this->player_);
    std::set<unsigned int>::set((std::set<unsigned int> *const)(v2 + 432), &this->cross_schedule_weekly_watcher_set_);
    std::set<unsigned int>::clear(&this->cross_schedule_weekly_watcher_set_);
    M_cur = std::unordered_set<unsigned int>::end((std::unordered_set<unsigned int> *const)(v2 + 512))._M_cur;
    v7._M_cur = std::unordered_set<unsigned int>::begin((std::unordered_set<unsigned int> *const)(v2 + 512))._M_cur;
    std::set<unsigned int>::insert<std::__detail::_Node_iterator<unsigned int,true,false>>(
      (std::set<unsigned int> *const)(v2 + 432),
      v7,
      (std::__detail::_Node_iterator<unsigned int,true,false>)M_cur);
    __for_range = (std::set<unsigned int> *)(v2 + 432);
    __for_begin._M_node = std::set<unsigned int>::begin((const std::set<unsigned int> *const)(v2 + 432))._M_node;
    __for_end._M_node = std::set<unsigned int>::end((const std::set<unsigned int> *const)(v2 + 432))._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v8 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
      v9 = v8;
      if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v8);
      }
      *(_DWORD *)(v2 + 64) = *v9;
      if ( PlayerWatcherComp::delWatcher(watcher_comp, *(_DWORD *)(v2 + 64)) )
      {
        common::milog::MiLogStream::create(
          &v103,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/battle_pass/player_battle_pass_comp.cpp",
          "tryRefreshMission",
          1036);
        v10 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(&v103, (const char (*)[39])off_256FC000);
        v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v10,
                (const unsigned int *)(v2 + 64));
        v12 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v11, (const char (*)[9])" player:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        operator<<(v12, this->player_);
        common::milog::MiLogStream::~MiLogStream(&v103);
      }
      std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
    }
    __for_range_0 = (std::unordered_set<unsigned int> *)(v2 + 512);
    __for_begin._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)std::unordered_set<unsigned int>::begin((std::unordered_set<unsigned int> *const)(v2 + 512))._M_cur;
    __for_end._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)std::unordered_set<unsigned int>::end(__for_range_0)._M_cur;
    while ( std::__detail::operator!=<unsigned int,false>(
              (const std::__detail::_Node_iterator_base<unsigned int,false> *)&__for_begin,
              (const std::__detail::_Node_iterator_base<unsigned int,false> *)&__for_end) )
    {
      v13 = std::__detail::_Node_iterator<unsigned int,true,false>::operator*((const std::__detail::_Node_iterator<unsigned int,true,false> *const)&__for_begin);
      v14 = v13;
      if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v13);
      }
      *(_DWORD *)(v2 + 64) = *v14;
      PlayerWatcherComp::addWatcherAndNotify(
        (PlayerWatcherComp *const)(v2 + 80),
        (uint32_t)watcher_comp,
        *(_DWORD *)(v2 + 64));
      v15 = std::operator==<BaseWatcher>(0LL, (const std::shared_ptr<BaseWatcher> *)(v2 + 80));
      std::shared_ptr<BaseWatcher>::~shared_ptr((std::shared_ptr<BaseWatcher> *const)(v2 + 80));
      if ( v15 )
      {
        common::milog::MiLogStream::create(
          &v103,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/battle_pass/player_battle_pass_comp.cpp",
          "tryRefreshMission",
          1043);
        v16 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(&v103, (const char (*)[39])off_256FC060);
        v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v16,
                (const unsigned int *)(v2 + 64));
        v18 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v17, (const char (*)[9])" player:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        operator<<(v18, this->player_);
        common::milog::MiLogStream::~MiLogStream(&v103);
      }
      else
      {
        std::set<unsigned int>::insert(
          &this->cross_schedule_weekly_watcher_set_,
          (const std::set<unsigned int>::value_type *)(v2 + 64));
      }
      std::__detail::_Node_iterator<unsigned int,true,false>::operator++((std::__detail::_Node_iterator<unsigned int,true,false> *const)&__for_begin);
    }
    PlayerBattlePassComp::setWeeklyLastRefreshTime(this, *(_DWORD *)(v2 + 48));
    common::milog::MiLogStream::create(
      &v103,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/battle_pass/player_battle_pass_comp.cpp",
      "tryRefreshMission",
      1049);
    v19 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
            &v103,
            (const char (*)[21])"weekly refresh time:");
    v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v2 + 48));
    v21 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v20, (const char (*)[16])", old_watchers:");
    v22 = common::milog::MiLogStream::operator<<<unsigned int>(v21, (const std::set<unsigned int> *)(v2 + 432));
    v23 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v22, (const char (*)[16])", new watchers:");
    v24 = common::milog::MiLogStream::operator<<<unsigned int>(v23, &this->cross_schedule_weekly_watcher_set_);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    operator<<(v24, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v103);
    std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 432));
  }
  schedule_ptr = PlayerBattlePassComp::findCurSchedule(this);
  if ( schedule_ptr )
  {
    LastRefreshTime = PlayerBattlePassComp::getLastRefreshTime(this);
    if ( !common::tools::TimeUtils::isSameDay(now, LastRefreshTime, offset) )
    {
      std::unordered_set<unsigned int>::unordered_set((std::unordered_set<unsigned int> *const)(v2 + 608));
      CurScheduleId = PlayerBattlePassComp::getCurScheduleId(this);
      BattlePassExcelConfigMgr::getDailyMissionSet(
        (std::unordered_set<unsigned int> *)(v2 + 704),
        battle_pass_config_mgr,
        CurScheduleId);
      std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 112));
      __for_range_1 = &this->cur_mission_map_;
      __for_begin._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)std::unordered_map<unsigned int,BattlePassMission>::begin(&this->cur_mission_map_)._M_cur;
      __for_end._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)std::unordered_map<unsigned int,BattlePassMission>::end(__for_range_1)._M_cur;
      while ( std::__detail::operator!=<std::pair<unsigned int const,BattlePassMission>,false>(
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,BattlePassMission>,false> *)&__for_begin,
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,BattlePassMission>,false> *)&__for_end) )
      {
        n = std::__detail::_Node_iterator<std::pair<unsigned int const,BattlePassMission>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,BattlePassMission>,false,false> *const)&__for_begin);
        if ( ((unsigned __int8)n & 7) >= *(_BYTE *)(((unsigned __int64)n >> 3) + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)n >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&n->second.mission_status + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)n + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&n->second.mission_status + 3) >> 3)
                                                         + 0x7FFF8000) )
        {
          n = (std::pair<unsigned int const,BattlePassMission> *)__asan_report_load_n(n, 12LL);
        }
        __in = *n;
        mission_id = std::get<0ul,unsigned int const,BattlePassMission>(&__in);
        _ = std::get<1ul,unsigned int const,BattlePassMission>(&__in);
        if ( common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
               (std::unordered_set<unsigned int> *)(v2 + 704),
               mission_id) )
        {
          goto LABEL_39;
        }
        if ( *(_BYTE *)(((unsigned __int64)mission_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)mission_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)mission_id >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(mission_id);
        }
        if ( WatcherExcelConfigMgr::isWatcherDisused(watcher_config_mgr, *mission_id) )
LABEL_39:
          v28 = 1;
        else
          v28 = 0;
        if ( v28 )
          std::vector<unsigned int>::push_back((std::vector<unsigned int> *const)(v2 + 112), mission_id);
        std::__detail::_Node_iterator<std::pair<unsigned int const,BattlePassMission>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,BattlePassMission>,false,false> *const)&__for_begin);
      }
      __for_range_2 = (std::vector<unsigned int> *)(v2 + 112);
      __for_begin._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v2 + 112))._M_current;
      __for_end._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)std::vector<unsigned int>::end(__for_range_2)._M_current;
      while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_begin,
                (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_end) )
      {
        v29 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin);
        v30 = v29;
        if ( *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v29 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v29);
        }
        *(_DWORD *)(v2 + 64) = *v30;
        PlayerBattlePassComp::delMission(this, *(_DWORD *)(v2 + 64));
        std::unordered_set<unsigned int>::insert(
          (std::unordered_set<unsigned int> *const)(v2 + 608),
          (const std::unordered_set<unsigned int>::value_type *)(v2 + 64));
        __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin);
      }
      __for_range_3 = (std::unordered_set<unsigned int> *)(v2 + 704);
      __for_begin._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)std::unordered_set<unsigned int>::begin((std::unordered_set<unsigned int> *const)(v2 + 704))._M_cur;
      __for_end._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)std::unordered_set<unsigned int>::end(__for_range_3)._M_cur;
      while ( std::__detail::operator!=<unsigned int,false>(
                (const std::__detail::_Node_iterator_base<unsigned int,false> *)&__for_begin,
                (const std::__detail::_Node_iterator_base<unsigned int,false> *)&__for_end) )
      {
        v31 = std::__detail::_Node_iterator<unsigned int,true,false>::operator*((const std::__detail::_Node_iterator<unsigned int,true,false> *const)&__for_begin);
        v32 = v31;
        if ( *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v31 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v31);
        }
        *(_DWORD *)(v2 + 64) = *v32;
        PlayerBattlePassComp::addMission(this, *(_DWORD *)(v2 + 64));
        std::unordered_set<unsigned int>::insert(
          (std::unordered_set<unsigned int> *const)(v2 + 608),
          (const std::unordered_set<unsigned int>::value_type *)(v2 + 64));
        std::__detail::_Node_iterator<unsigned int,true,false>::operator++((std::__detail::_Node_iterator<unsigned int,true,false> *const)&__for_begin);
      }
      PlayerBattlePassComp::getLastRefreshTime(this);
      v33 = PlayerBattlePassComp::getCurScheduleId(this);
      BattlePassExcelConfigMgr::getScheduleCycleIdxAndTime(
        (const BattlePassExcelConfigMgr *const)&__t,
        (uint32_t)battle_pass_config_mgr,
        v33);
      old_cycle_idx = std::get<0ul,unsigned int,unsigned int,unsigned int>(&__t);
      old_begin_time = std::get<1ul,unsigned int,unsigned int,unsigned int>(&__t);
      old_end_time = std::get<2ul,unsigned int,unsigned int,unsigned int>(&__t);
      v34 = PlayerBattlePassComp::getCurScheduleId(this);
      BattlePassExcelConfigMgr::getScheduleCycleIdxAndTime(
        (const BattlePassExcelConfigMgr *const)&v101,
        (uint32_t)battle_pass_config_mgr,
        v34);
      new_cycle_idx = std::get<0ul,unsigned int,unsigned int,unsigned int>(&v101);
      new_begin_time = std::get<1ul,unsigned int,unsigned int,unsigned int>(&v101);
      new_end_time = std::get<2ul,unsigned int,unsigned int,unsigned int>(&v101);
      if ( *(_BYTE *)(((unsigned __int64)old_cycle_idx >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)old_cycle_idx & 7) + 3) >= *(_BYTE *)(((unsigned __int64)old_cycle_idx >> 3)
                                                                        + 0x7FFF8000) )
      {
        __asan_report_load4(old_cycle_idx);
      }
      v35 = *old_cycle_idx;
      if ( *(_BYTE *)(((unsigned __int64)new_cycle_idx >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)new_cycle_idx & 7) + 3) >= *(_BYTE *)(((unsigned __int64)new_cycle_idx >> 3)
                                                                        + 0x7FFF8000) )
      {
        __asan_report_load4(new_cycle_idx);
      }
      if ( v35 != *new_cycle_idx )
      {
        v36 = PlayerBattlePassComp::getCurScheduleId(this);
        BattlePassExcelConfigMgr::getInScheduleCycleMissionSet(
          (std::unordered_set<unsigned int> *)(v2 + 800),
          battle_pass_config_mgr,
          v36);
        v37 = std::unordered_set<unsigned int>::end((std::unordered_set<unsigned int> *const)(v2 + 512))._M_cur;
        v38._M_cur = std::unordered_set<unsigned int>::begin((std::unordered_set<unsigned int> *const)(v2 + 512))._M_cur;
        std::unordered_set<unsigned int>::insert<std::__detail::_Node_iterator<unsigned int,true,false>>(
          (std::unordered_set<unsigned int> *const)(v2 + 800),
          v38,
          (std::__detail::_Node_iterator<unsigned int,true,false>)v37);
        std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 176));
        __for_range_4 = &this->cur_mission_map_;
        __for_begin._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)std::unordered_map<unsigned int,BattlePassMission>::begin(&this->cur_mission_map_)._M_cur;
        __for_end._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)std::unordered_map<unsigned int,BattlePassMission>::end(__for_range_4)._M_cur;
        while ( std::__detail::operator!=<std::pair<unsigned int const,BattlePassMission>,false>(
                  (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,BattlePassMission>,false> *)&__for_begin,
                  (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,BattlePassMission>,false> *)&__for_end) )
        {
          v39 = std::__detail::_Node_iterator<std::pair<unsigned int const,BattlePassMission>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,BattlePassMission>,false,false> *const)&__for_begin);
          if ( ((unsigned __int8)v39 & 7) >= *(_BYTE *)(((unsigned __int64)v39 >> 3) + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)v39 >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)((((unsigned __int64)&v39->second.mission_status + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)v39 + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&v39->second.mission_status + 3) >> 3)
                                                             + 0x7FFF8000) )
          {
            v39 = (std::pair<unsigned int const,BattlePassMission> *)__asan_report_load_n(v39, 12LL);
          }
          __in = *v39;
          mission_id_0 = std::get<0ul,unsigned int const,BattlePassMission>(&__in);
          __0 = std::get<1ul,unsigned int const,BattlePassMission>(&__in);
          if ( common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
                 (std::unordered_set<unsigned int> *)(v2 + 800),
                 mission_id_0) )
          {
            std::vector<unsigned int>::push_back((std::vector<unsigned int> *const)(v2 + 176), mission_id_0);
          }
          std::__detail::_Node_iterator<std::pair<unsigned int const,BattlePassMission>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,BattlePassMission>,false,false> *const)&__for_begin);
        }
        __for_range_5 = (std::vector<unsigned int> *)(v2 + 176);
        __for_begin._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v2 + 176))._M_current;
        __for_end._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)std::vector<unsigned int>::end(__for_range_5)._M_current;
        while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
                  (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_begin,
                  (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_end) )
        {
          v40 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin);
          v41 = v40;
          if ( *(_BYTE *)(((unsigned __int64)v40 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v40 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v40 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v40);
          }
          *(_DWORD *)(v2 + 64) = *v41;
          PlayerBattlePassComp::delMission(this, *(_DWORD *)(v2 + 64));
          std::unordered_set<unsigned int>::insert(
            (std::unordered_set<unsigned int> *const)(v2 + 608),
            (const std::unordered_set<unsigned int>::value_type *)(v2 + 64));
          __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin);
        }
        std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 240));
        std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 304));
        __for_range_6 = (std::unordered_set<unsigned int> *)(v2 + 800);
        __for_begin._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)std::unordered_set<unsigned int>::begin((std::unordered_set<unsigned int> *const)(v2 + 800))._M_cur;
        __for_end._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)std::unordered_set<unsigned int>::end(__for_range_6)._M_cur;
        while ( std::__detail::operator!=<unsigned int,false>(
                  (const std::__detail::_Node_iterator_base<unsigned int,false> *)&__for_begin,
                  (const std::__detail::_Node_iterator_base<unsigned int,false> *)&__for_end) )
        {
          v42 = std::__detail::_Node_iterator<unsigned int,true,false>::operator*((const std::__detail::_Node_iterator<unsigned int,true,false> *const)&__for_begin);
          v43 = v42;
          if ( *(_BYTE *)(((unsigned __int64)v42 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v42 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v42 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v42);
          }
          *(_DWORD *)(v2 + 64) = *v43;
          mission_config_ptr = data::BattlePassExcelConfigMgrBase::findBattlePassMissionExcelConfig(
                                 battle_pass_config_mgr,
                                 *(_DWORD *)(v2 + 64));
          if ( mission_config_ptr )
          {
            if ( *(char *)(((unsigned __int64)&mission_config_ptr->is_force >> 3) + 0x7FFF8000) < 0 )
              __asan_report_load1(&mission_config_ptr->is_force);
            if ( mission_config_ptr->is_force )
              std::vector<unsigned int>::push_back(
                (std::vector<unsigned int> *const)(v2 + 304),
                (const std::vector<unsigned int>::value_type *)(v2 + 64));
            else
              std::vector<unsigned int>::push_back(
                (std::vector<unsigned int> *const)(v2 + 240),
                (const std::vector<unsigned int>::value_type *)(v2 + 64));
          }
          std::__detail::_Node_iterator<unsigned int,true,false>::operator++((std::__detail::_Node_iterator<unsigned int,true,false> *const)&__for_begin);
        }
        std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 368));
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)(v2 + 80));
        v44 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
        BattlePassCycleRefreshMissionNum = ConstValueExcelConfigMgr::getBattlePassCycleRefreshMissionNum(&v44->design_config.txt_config_mgr.const_value_config_mgr);
        common::tools::RandomUtils::randomSelect<unsigned int>(
          (const std::vector<unsigned int> *)(v2 + 240),
          (std::vector<unsigned int> *)(v2 + 368),
          BattlePassCycleRefreshMissionNum);
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 80));
        M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v2 + 368))._M_current;
        v47 = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v2 + 368))._M_current;
        __for_begin._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v2 + 304))._M_current;
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::__normal_iterator<unsigned int *>(
          (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)&__for_end,
          (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_begin);
        std::vector<unsigned int>::insert<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>,void>(
          (std::vector<unsigned int> *const)(v2 + 304),
          (std::vector<unsigned int>::const_iterator)__for_end._M_node,
          (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)v47,
          (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)M_current);
        __for_range_7 = (std::vector<unsigned int> *)(v2 + 304);
        __for_begin._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v2 + 304))._M_current;
        __for_end._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)std::vector<unsigned int>::end(__for_range_7)._M_current;
        while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
                  (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_begin,
                  (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_end) )
        {
          v48 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin);
          v49 = v48;
          if ( *(_BYTE *)(((unsigned __int64)v48 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v48 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v48 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v48);
          }
          *(_DWORD *)(v2 + 64) = *v49;
          PlayerBattlePassComp::addMission(this, *(_DWORD *)(v2 + 64));
          std::unordered_set<unsigned int>::insert(
            (std::unordered_set<unsigned int> *const)(v2 + 608),
            (const std::unordered_set<unsigned int>::value_type *)(v2 + 64));
          __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin);
        }
        v50 = (*(_BYTE *)(((unsigned __int64)&schedule_ptr->cur_cycle_points >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)schedule_ptr + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&schedule_ptr->cur_cycle_points >> 3) + 0x7FFF8000));
        if ( (_BYTE)v50 )
          __asan_report_store4(&schedule_ptr->cur_cycle_points, (((_BYTE)schedule_ptr + 76) & 7u) + 3, v50);
        schedule_ptr->cur_cycle_points = 0;
        common::milog::MiLogStream::create(
          &v103,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/battle_pass/player_battle_pass_comp.cpp",
          "tryRefreshMission",
          1136);
        v51 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                &v103,
                (const char (*)[33])"refresh battle pass cycle, from:");
        v52 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v51, old_cycle_idx);
        v53 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v52, (const char (*)[5])" to:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v53, new_cycle_idx);
        common::milog::MiLogStream::~MiLogStream(&v103);
        std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 368));
        std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 304));
        std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 240));
        std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 176));
        std::unordered_set<unsigned int>::~unordered_set((std::unordered_set<unsigned int> *const)(v2 + 800));
      }
      PlayerBattlePassComp::setLastRefreshTime(this, now);
      __for_range_8 = &this->cur_mission_map_;
      __for_begin._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)std::unordered_map<unsigned int,BattlePassMission>::begin(&this->cur_mission_map_)._M_cur;
      __for_end._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)std::unordered_map<unsigned int,BattlePassMission>::end(__for_range_8)._M_cur;
      while ( std::__detail::operator!=<std::pair<unsigned int const,BattlePassMission>,false>(
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,BattlePassMission>,false> *)&__for_begin,
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,BattlePassMission>,false> *)&__for_end) )
      {
        v95 = std::__detail::_Node_iterator<std::pair<unsigned int const,BattlePassMission>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,BattlePassMission>,false,false> *const)&__for_begin);
        mission_id_1 = std::get<0ul,unsigned int const,BattlePassMission>(v95);
        mission = std::get<1ul,unsigned int const,BattlePassMission>(v95);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        WatcherComp = (unsigned int)Player::getWatcherComp(this->player_);
        if ( *(_BYTE *)(((unsigned __int64)mission_id_1 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)mission_id_1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)mission_id_1 >> 3)
                                                                         + 0x7FFF8000) )
        {
          __asan_report_load4(mission_id_1);
        }
        PlayerWatcherComp::findWatcher((PlayerWatcherComp *const)(v2 + 80), WatcherComp);
        if ( std::operator!=<BaseWatcher>(0LL, (const std::shared_ptr<BaseWatcher> *)(v2 + 80)) )
        {
          v55 = std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
          if ( BaseWatcher::isFinished(v55) )
          {
            if ( *(_BYTE *)(((unsigned __int64)mission_id_1 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)mission_id_1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)mission_id_1 >> 3)
                                                                             + 0x7FFF8000) )
            {
              __asan_report_load4(mission_id_1);
            }
            PlayerBattlePassComp::finishMission(this, *mission_id_1, is_notify);
          }
        }
        std::shared_ptr<BaseWatcher>::~shared_ptr((std::shared_ptr<BaseWatcher> *const)(v2 + 80));
        std::__detail::_Node_iterator<std::pair<unsigned int const,BattlePassMission>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,BattlePassMission>,false,false> *const)&__for_begin);
      }
      if ( is_notify )
      {
        v57 = std::unordered_set<unsigned int>::begin((std::unordered_set<unsigned int> *const)(v2 + 608))._M_cur;
        v58 = std::unordered_set<unsigned int>::end((std::unordered_set<unsigned int> *const)(v2 + 608))._M_cur;
        std::allocator<unsigned int>::allocator(&__a);
        std::vector<unsigned int>::vector<std::__detail::_Node_iterator<unsigned int,true,false>,void>(
          (std::vector<unsigned int> *const)(v2 + 368),
          (std::__detail::_Node_iterator<unsigned int,true,false>)v57,
          (std::__detail::_Node_iterator<unsigned int,true,false>)v58,
          &__a);
        PlayerBattlePassComp::notifyMission(this, (const std::vector<unsigned int> *)(v2 + 368));
        std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 368));
        std::allocator<unsigned int>::~allocator(&__a);
      }
      __for_range_9 = (std::unordered_set<unsigned int> *)(v2 + 608);
      __for_begin._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)std::unordered_set<unsigned int>::begin((std::unordered_set<unsigned int> *const)(v2 + 608))._M_cur;
      __for_end._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)std::unordered_set<unsigned int>::end(__for_range_9)._M_cur;
      while ( std::__detail::operator!=<unsigned int,false>(
                (const std::__detail::_Node_iterator_base<unsigned int,false> *)&__for_begin,
                (const std::__detail::_Node_iterator_base<unsigned int,false> *)&__for_end) )
      {
        v59 = (unsigned int *)std::__detail::_Node_iterator<unsigned int,true,false>::operator*((const std::__detail::_Node_iterator<unsigned int,true,false> *const)&__for_begin);
        v60 = v59;
        if ( *(_BYTE *)(((unsigned __int64)v59 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v59 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v59 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v59);
        }
        mission_id_2 = *v60;
        v61 = PlayerBattlePassComp::getCurScheduleId(this);
        PlayerBattlePassComp::logMissionUpdate(this, v61, mission_id_2);
        std::__detail::_Node_iterator<unsigned int,true,false>::operator++((std::__detail::_Node_iterator<unsigned int,true,false> *const)&__for_begin);
      }
      common::milog::MiLogStream::create(
        &v103,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/battle_pass/player_battle_pass_comp.cpp",
        "tryRefreshMission",
        1157);
      v62 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
              &v103,
              (const char (*)[45])"refresh battle pass mission, change mission:");
      v63 = common::milog::MiLogStream::operator<<<unsigned int>(
              v62,
              (const std::unordered_set<unsigned int> *)(v2 + 608));
      v64 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v63, (const char (*)[10])" player_:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      operator<<(v64, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v103);
      std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 112));
      std::unordered_set<unsigned int>::~unordered_set((std::unordered_set<unsigned int> *const)(v2 + 704));
      std::unordered_set<unsigned int>::~unordered_set((std::unordered_set<unsigned int> *const)(v2 + 608));
    }
  }
  std::unordered_set<unsigned int>::~unordered_set((std::unordered_set<unsigned int> *const)(v2 + 512));
  if ( v104 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF803C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8044) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8050) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF805C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8068) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8058) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8060) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8068) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1162: range 00000000150C58CE-00000000150C5A21
BattlePassMission *__fastcall PlayerBattlePassComp::findMission(PlayerBattlePassComp *const this, uint32_t mission_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  BattlePassMission *result; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,BattlePassMission>,false> __y; // [rsp+18h] [rbp-88h] BYREF
  char v7[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 15 mission_id:1161 64 8 9 iter:1163";
  *(_QWORD *)(v2 + 16) = PlayerBattlePassComp::findMission;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = mission_id;
  *(std::unordered_map<unsigned int,BattlePassMission>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,BattlePassMission>::find(
                                                                                 &this->cur_mission_map_,
                                                                                 (const std::unordered_map<unsigned int,BattlePassMission>::key_type *)(v2 + 48));
  __y._M_cur = std::unordered_map<unsigned int,BattlePassMission>::end(&this->cur_mission_map_)._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned int const,BattlePassMission>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,BattlePassMission>,false> *)(v2 + 64),
         &__y) )
  {
    result = 0LL;
  }
  else
  {
    result = &std::__detail::_Node_iterator<std::pair<unsigned int const,BattlePassMission>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,BattlePassMission>,false,false> *const)(v2 + 64))->second;
  }
  if ( v7 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 1172: range 00000000150C5A22-00000000150C6122
__int64 __fastcall PlayerBattlePassComp::addMission(PlayerBattlePassComp *const this, uint32_t mission_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rcx
  __int64 result; // rax
  BattlePassMission *v9; // rax
  unsigned int *v10; // rcx
  BattlePassMission *v11; // r8
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  bool v13; // r14
  uint32_t WatcherComp; // eax
  bool v15; // r14
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rcx
  uint32_t v19; // eax
  bool v20; // r14
  uint32_t v21; // eax
  bool v22; // r14
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rcx
  std::shared_ptr<Config> v28; // [rsp+10h] [rbp-C0h] BYREF
  common::milog::MiLogStream v29; // [rsp+20h] [rbp-B0h] BYREF
  char v30[144]; // [rsp+40h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 15 mission_id:1171 64 8 12 mission:1178";
  *(_QWORD *)(v2 + 16) = PlayerBattlePassComp::addMission;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = mission_id;
  if ( common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,BattlePassMission>,unsigned int>(
         &this->cur_mission_map_,
         (const unsigned int *)(v2 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v29,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/battle_pass/player_battle_pass_comp.cpp",
      "addMission",
      1175);
    v5 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(&v29, (const char (*)[38])off_256FC360);
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v6, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    operator<<(v7, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v29);
    result = 0xFFFFFFFFLL;
    goto LABEL_28;
  }
  *(_QWORD *)(v2 + 64) = 0LL;
  *(_DWORD *)(v2 + 64) = *(_DWORD *)(v2 + 48);
  BattlePassMission::initWhenCreate((BattlePassMission *const)(v2 + 64));
  v9 = std::move<BattlePassMission &>((BattlePassMission *)(v2 + 64));
  std::unordered_map<unsigned int,BattlePassMission>::emplace<unsigned int &,BattlePassMission>(
    &this->cur_mission_map_,
    (unsigned int *)(v2 + 48),
    v9,
    v10,
    v11);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v28);
  v12 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v28);
  v13 = !BattlePassExcelConfigMgr::isCrossScheduleCycleMission(
           &v12->design_config.txt_config_mgr.battle_pass_excel_config_mgr,
           *(_DWORD *)(v2 + 48));
  std::shared_ptr<Config>::~shared_ptr(&v28);
  if ( v13 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    WatcherComp = (unsigned int)Player::getWatcherComp(this->player_);
    PlayerWatcherComp::addWatcherAndNotify((PlayerWatcherComp *const)&v28, WatcherComp, *(_DWORD *)(v2 + 48));
    v15 = std::operator==<BaseWatcher>(0LL, (const std::shared_ptr<BaseWatcher> *)&v28);
    std::shared_ptr<BaseWatcher>::~shared_ptr((std::shared_ptr<BaseWatcher> *const)&v28);
    if ( v15 )
    {
      common::milog::MiLogStream::create(
        &v29,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/battle_pass/player_battle_pass_comp.cpp",
        "addMission",
        1185);
      v16 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(&v29, (const char (*)[39])off_256FC060);
      v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v2 + 48));
      v18 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v17, (const char (*)[9])" player:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
LABEL_14:
      operator<<(v18, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v29);
      result = 0xFFFFFFFFLL;
      goto LABEL_28;
    }
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    v19 = (unsigned int)Player::getWatcherComp(this->player_);
    PlayerWatcherComp::findWatcher((PlayerWatcherComp *const)&v28, v19);
    v20 = std::operator==<BaseWatcher>(0LL, (const std::shared_ptr<BaseWatcher> *)&v28);
    std::shared_ptr<BaseWatcher>::~shared_ptr((std::shared_ptr<BaseWatcher> *const)&v28);
    if ( v20 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      v21 = (unsigned int)Player::getWatcherComp(this->player_);
      PlayerWatcherComp::addWatcherAndNotify((PlayerWatcherComp *const)&v28, v21, *(_DWORD *)(v2 + 48));
      v22 = std::operator==<BaseWatcher>(0LL, (const std::shared_ptr<BaseWatcher> *)&v28);
      std::shared_ptr<BaseWatcher>::~shared_ptr((std::shared_ptr<BaseWatcher> *const)&v28);
      if ( v22 )
      {
        common::milog::MiLogStream::create(
          &v29,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/battle_pass/player_battle_pass_comp.cpp",
          "addMission",
          1193);
        v23 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(&v29, (const char (*)[39])off_256FC060);
        v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v23,
                (const unsigned int *)(v2 + 48));
        v18 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v24, (const char (*)[9])" player:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        goto LABEL_14;
      }
      std::set<unsigned int>::insert(
        &this->cross_schedule_weekly_watcher_set_,
        (const std::set<unsigned int>::value_type *)(v2 + 48));
    }
  }
  common::milog::MiLogStream::create(
    &v29,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/battle_pass/player_battle_pass_comp.cpp",
    "addMission",
    1199);
  v25 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(&v29, (const char (*)[13])off_256FC3C0);
  v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, (const unsigned int *)(v2 + 48));
  v27 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v26, (const char (*)[10])" player_:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  operator<<(v27, this->player_);
  common::milog::MiLogStream::~MiLogStream(&v29);
  result = 0LL;
LABEL_28:
  if ( v30 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 1205: range 00000000150C6124-00000000150C676D
__int64 __fastcall PlayerBattlePassComp::finishMission(
        PlayerBattlePassComp *const this,
        uint32_t mission_id,
        bool is_notify)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rcx
  __int64 result; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  PlayerWatcherComp *WatcherComp; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rcx
  __int64 v15; // rdx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rcx
  bool v19; // [rsp+8h] [rbp-E8h]
  PlayerWatcherComp *v20; // [rsp+8h] [rbp-E8h]
  std::allocator<unsigned int> __a; // [rsp+23h] [rbp-CDh] BYREF
  std::initializer_list<unsigned int> __l; // [rsp+24h] [rbp-CCh] BYREF
  std::vector<unsigned int> watcher_vec; // [rsp+40h] [rbp-B0h] BYREF
  common::milog::MiLogStream v25; // [rsp+60h] [rbp-90h] BYREF
  char v26[112]; // [rsp+80h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 15 mission_id:1204";
  *(_QWORD *)(v3 + 16) = PlayerBattlePassComp::finishMission;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = mission_id;
  *(std::initializer_list<unsigned int>::iterator *)((char *)&__l._M_array + 4) = (std::initializer_list<unsigned int>::iterator)PlayerBattlePassComp::findMission(this, *(_DWORD *)(v3 + 32));
  if ( !*(std::initializer_list<unsigned int>::iterator *)((char *)&__l._M_array + 4) )
    goto LABEL_8;
  if ( *(_BYTE *)(((unsigned __int64)(*(std::initializer_list<unsigned int>::iterator *)((char *)&__l._M_array + 4) + 1) >> 3)
                + 0x7FFF8000) != 0
    && (char)(((BYTE4(__l._M_array) + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(*(std::initializer_list<unsigned int>::iterator *)((char *)&__l._M_array + 4)
                                                                                   + 1) >> 3)
                                                               + 0x7FFF8000) )
  {
    __asan_report_load4(*(std::initializer_list<unsigned int>::iterator *)((char *)&__l._M_array + 4) + 1);
  }
  if ( (*(_DWORD **)((char *)&__l._M_array + 4))[1] == 1 )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)((char *)&__l._M_len + 4));
    v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&__l._M_len + 4);
    v19 = !BattlePassExcelConfigMgr::isCrossScheduleCycleMission(
             &v10->design_config.txt_config_mgr.battle_pass_excel_config_mgr,
             *(_DWORD *)(v3 + 32));
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)((char *)&__l._M_len + 4));
    if ( !v19 )
      goto LABEL_18;
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    WatcherComp = Player::getWatcherComp(this->player_);
    if ( PlayerWatcherComp::delWatcher(WatcherComp, *(_DWORD *)(v3 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v25,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/battle_pass/player_battle_pass_comp.cpp",
        "finishMission",
        1217);
      v12 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(&v25, (const char (*)[39])off_256FC4C0);
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 32));
      v14 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v13, (const char (*)[9])" player:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      operator<<(v14, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v25);
      result = 0xFFFFFFFFLL;
    }
    else
    {
LABEL_18:
      v15 = (*(_BYTE *)(((unsigned __int64)(*(std::initializer_list<unsigned int>::iterator *)((char *)&__l._M_array + 4)
                                          + 1) >> 3)
                      + 0x7FFF8000) != 0) & (unsigned __int8)((char)(((BYTE4(__l._M_array) + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(*(std::initializer_list<unsigned int>::iterator *)((char *)&__l._M_array + 4) + 1) >> 3) + 0x7FFF8000));
      if ( (_BYTE)v15 )
        __asan_report_store4(
          *(std::initializer_list<unsigned int>::iterator *)((char *)&__l._M_array + 4) + 1,
          ((BYTE4(__l._M_array) + 4) & 7u) + 3,
          v15);
      (*(_DWORD **)((char *)&__l._M_array + 4))[1] = 2;
      if ( is_notify )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        v20 = Player::getWatcherComp(this->player_);
        LODWORD(__l._M_array) = *(_DWORD *)(v3 + 32);
        std::allocator<unsigned int>::allocator(&__a);
        std::vector<unsigned int>::vector(
          &watcher_vec,
          (std::initializer_list<unsigned int>)__PAIR128__(1LL, &__l),
          &__a);
        PlayerWatcherComp::notifyWatcherChange(v20, &watcher_vec);
        std::vector<unsigned int>::~vector(&watcher_vec);
        std::allocator<unsigned int>::~allocator(&__a);
        PlayerBattlePassComp::notifyMission(this, *(_DWORD *)(v3 + 32));
      }
      common::milog::MiLogStream::create(
        &v25,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/battle_pass/player_battle_pass_comp.cpp",
        "finishMission",
        1228);
      v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v25, (const char (*)[16])"finish mission:");
      v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v3 + 32));
      v18 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v17, (const char (*)[10])" player_:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      operator<<(v18, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v25);
      result = 0LL;
    }
  }
  else
  {
LABEL_8:
    common::milog::MiLogStream::create(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/battle_pass/player_battle_pass_comp.cpp",
      "finishMission",
      1209);
    v6 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(&v25, (const char (*)[63])off_256FC460);
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 32));
    v8 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v7, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    operator<<(v8, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v25);
    result = 0xFFFFFFFFLL;
  }
  if ( v26 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1234: range 00000000150C676E-00000000150C6C96
__int64 __fastcall PlayerBattlePassComp::delMission(PlayerBattlePassComp *const this, uint32_t mission_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rcx
  __int64 result; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool v10; // r14
  std::__detail::_Node_iterator<std::pair<unsigned int const,BattlePassMission>,false,false>::pointer v11; // rdx
  proto::BattlePassMission::MissionStatus *p_mission_status; // rax
  PlayerWatcherComp *WatcherComp; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rcx
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rcx
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,BattlePassMission>,false> __y; // [rsp+18h] [rbp-C8h] BYREF
  std::shared_ptr<Config> v21; // [rsp+20h] [rbp-C0h] BYREF
  common::milog::MiLogStream v22; // [rsp+30h] [rbp-B0h] BYREF
  char v23[144]; // [rsp+50h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 15 mission_id:1233 64 8 9 iter:1235";
  *(_QWORD *)(v2 + 16) = PlayerBattlePassComp::delMission;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = mission_id;
  *(std::unordered_map<unsigned int,BattlePassMission>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,BattlePassMission>::find(
                                                                                 &this->cur_mission_map_,
                                                                                 (const std::unordered_map<unsigned int,BattlePassMission>::key_type *)(v2 + 48));
  __y._M_cur = std::unordered_map<unsigned int,BattlePassMission>::end(&this->cur_mission_map_)._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned int const,BattlePassMission>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,BattlePassMission>,false> *)(v2 + 64),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/battle_pass/player_battle_pass_comp.cpp",
      "delMission",
      1238);
    v5 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(&v22, (const char (*)[42])off_256FC5E0);
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v6, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    operator<<(v7, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v22);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v21);
    v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v21);
    v10 = !BattlePassExcelConfigMgr::isCrossScheduleCycleMission(
             &v9->design_config.txt_config_mgr.battle_pass_excel_config_mgr,
             *(_DWORD *)(v2 + 48));
    std::shared_ptr<Config>::~shared_ptr(&v21);
    if ( v10 )
    {
      v11 = std::__detail::_Node_iterator<std::pair<unsigned int const,BattlePassMission>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,BattlePassMission>,false,false> *const)(v2 + 64));
      p_mission_status = &v11->second.mission_status;
      if ( *(_BYTE *)(((unsigned __int64)p_mission_status >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_mission_status & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_mission_status >> 3)
                                                                           + 0x7FFF8000) )
      {
        __asan_report_load4(p_mission_status);
      }
      if ( v11->second.mission_status == BattlePassMission_MissionStatus_MISSION_UNFINISHED )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        WatcherComp = Player::getWatcherComp(this->player_);
        if ( PlayerWatcherComp::delWatcher(WatcherComp, *(_DWORD *)(v2 + 48)) )
        {
          common::milog::MiLogStream::create(
            &v22,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/battle_pass/player_battle_pass_comp.cpp",
            "delMission",
            1247);
          v14 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(&v22, (const char (*)[39])off_256FC4C0);
          v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v14,
                  (const unsigned int *)(v2 + 48));
          v16 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v15, (const char (*)[9])" player:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          operator<<(v16, this->player_);
          common::milog::MiLogStream::~MiLogStream(&v22);
        }
      }
    }
    std::unordered_map<unsigned int,BattlePassMission>::erase(
      &this->cur_mission_map_,
      (const std::unordered_map<unsigned int,BattlePassMission>::key_type *)(v2 + 48));
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/battle_pass/player_battle_pass_comp.cpp",
      "delMission",
      1254);
    v17 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(&v22, (const char (*)[13])off_256FC640);
    v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v2 + 48));
    v19 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v18, (const char (*)[10])" player_:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    operator<<(v19, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v22);
    result = 0LL;
  }
  if ( v23 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 1260: range 00000000150C6C98-00000000150C6D94
bool __cdecl PlayerBattlePassComp::isMissionLimitByCyclePoint(PlayerBattlePassComp *const this, uint32_t mission_id)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  const data::BattlePassMissionExcelConfig *config_ptr; // [rsp+18h] [rbp-28h]
  std::shared_ptr<Config> v5[2]; // [rsp+20h] [rbp-20h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v5);
  v2 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v5);
  config_ptr = data::BattlePassExcelConfigMgrBase::findBattlePassMissionExcelConfig(
                 &v2->design_config.txt_config_mgr.battle_pass_excel_config_mgr,
                 mission_id);
  std::shared_ptr<Config>::~shared_ptr(v5);
  if ( !config_ptr )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&config_ptr->refresh_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)config_ptr + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->refresh_type >> 3)
                                                               + 0x7FFF8000) )
  {
    __asan_report_load4(&config_ptr->refresh_type);
  }
  return config_ptr->refresh_type < (unsigned int)BATTLE_PASS_MISSION_REFRESH_SCHEDULE
      || config_ptr->refresh_type == BATTLE_PASS_MISSION_REFRESH_CYCLE_CROSS_SCHEDULE;
};

// Line 1276: range 00000000150C6D96-00000000150C7BDE
int32_t __cdecl PlayerBattlePassComp::takeMissionPoint(
        PlayerBattlePassComp *const this,
        std::vector<unsigned int> *mission_id_vec)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rdx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rcx
  int32_t v8; // r14d
  BattlePassExcelConfigMgr *p_battle_pass_excel_config_mgr; // rcx
  common::milog::MiLogStream *v10; // rdx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rcx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rcx
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v16; // rax
  _DWORD *v17; // rdx
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rcx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rcx
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rcx
  uint32_t cycle_point_upper_limit; // ecx
  uint32_t v29; // eax
  const unsigned int *v30; // rax
  _DWORD *v31; // rdx
  __int64 v32; // rdx
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rcx
  uint32_t v36; // r14d
  uint32_t CurScheduleId; // ecx
  int32_t result; // eax
  uint32_t reason; // [rsp+14h] [rbp-19Ch]
  std::vector<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-198h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-190h] BYREF
  BattlePassSchedule *schedule_ptr; // [rsp+28h] [rbp-188h]
  const data::BattlePassScheduleExcelConfig *schedule_config_ptr; // [rsp+30h] [rbp-180h]
  std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-178h]
  BattlePassMission *mission_ptr; // [rsp+40h] [rbp-170h]
  const data::BattlePassMissionExcelConfig *mission_config_ptr; // [rsp+48h] [rbp-168h]
  std::shared_ptr<Config> v47; // [rsp+50h] [rbp-160h] BYREF
  common::milog::MiLogStream v48; // [rsp+60h] [rbp-150h] BYREF
  common::milog::MiLogStream v49; // [rsp+80h] [rbp-130h] BYREF
  common::milog::MiLogStream v50; // [rsp+A0h] [rbp-110h] BYREF
  common::milog::MiLogStream v51; // [rsp+C0h] [rbp-F0h] BYREF
  char v52[208]; // [rsp+E0h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v52;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 4 15 mission_id:1295 64 4 14 add_point:1314 80 4 23 possible_add_point:1317 96 24 24 real_m"
                        "ission_id_vec:1294";
  *(_QWORD *)(v2 + 16) = PlayerBattlePassComp::takeMissionPoint;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -234556924;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  schedule_ptr = PlayerBattlePassComp::findCurSchedule(this);
  if ( schedule_ptr )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v47);
    p_battle_pass_excel_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v47)->design_config.txt_config_mgr.battle_pass_excel_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)schedule_ptr >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)schedule_ptr >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(schedule_ptr);
    }
    schedule_config_ptr = data::BattlePassExcelConfigMgrBase::findBattlePassScheduleExcelConfig(
                            p_battle_pass_excel_config_mgr,
                            schedule_ptr->schedule_id);
    std::shared_ptr<Config>::~shared_ptr(&v47);
    if ( schedule_config_ptr )
    {
      if ( std::vector<unsigned int>::empty(mission_id_vec) )
      {
        common::milog::MiLogStream::create(
          &v51,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/battle_pass/player_battle_pass_comp.cpp",
          "takeMissionPoint",
          1291);
        v15 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                &v51,
                (const char (*)[34])"mission_id_vec is empty, player_:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        operator<<(v15, this->player_);
        common::milog::MiLogStream::~MiLogStream(&v51);
        v8 = -1;
      }
      else
      {
        std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 96));
        __for_range = mission_id_vec;
        __for_begin._M_current = std::vector<unsigned int>::begin(mission_id_vec)._M_current;
        __for_end._M_current = std::vector<unsigned int>::end(mission_id_vec)._M_current;
        while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
        {
          v16 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
          v17 = v16;
          if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v16);
          }
          *(_DWORD *)(v2 + 48) = *v17;
          mission_ptr = PlayerBattlePassComp::findMission(this, *(_DWORD *)(v2 + 48));
          if ( !mission_ptr )
            goto LABEL_26;
          if ( *(_BYTE *)(((unsigned __int64)&mission_ptr->mission_status >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)mission_ptr + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&mission_ptr->mission_status >> 3)
                                                                      + 0x7FFF8000) )
          {
            __asan_report_load4(&mission_ptr->mission_status);
          }
          if ( mission_ptr->mission_status == BattlePassMission_MissionStatus_MISSION_FINISHED )
          {
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)&v47);
            v21 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v47);
            mission_config_ptr = data::BattlePassExcelConfigMgrBase::findBattlePassMissionExcelConfig(
                                   &v21->design_config.txt_config_mgr.battle_pass_excel_config_mgr,
                                   *(_DWORD *)(v2 + 48));
            std::shared_ptr<Config>::~shared_ptr(&v47);
            if ( mission_config_ptr )
            {
              if ( *(char *)(((unsigned __int64)&mission_config_ptr->is_disuse >> 3) + 0x7FFF8000) < 0 )
                __asan_report_load1(&mission_config_ptr->is_disuse);
              if ( mission_config_ptr->is_disuse )
              {
                common::milog::MiLogStream::create(
                  &v50,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/player/battle_pass/player_battle_pass_comp.cpp",
                  "takeMissionPoint",
                  1311);
                v25 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                        &v50,
                        (const char (*)[29])"mission disused, mission id:");
                v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v25,
                        (const unsigned int *)(v2 + 48));
                v27 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v26, (const char (*)[9])" player:");
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8(&this->player_);
                operator<<(v27, this->player_);
                common::milog::MiLogStream::~MiLogStream(&v50);
              }
              else
              {
                if ( *(_BYTE *)(((unsigned __int64)&mission_config_ptr->add_point >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)mission_config_ptr + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&mission_config_ptr->add_point >> 3)
                                                                                     + 0x7FFF8000) )
                {
                  __asan_report_load4(&mission_config_ptr->add_point);
                }
                *(_DWORD *)(v2 + 64) = mission_config_ptr->add_point;
                if ( PlayerBattlePassComp::isMissionLimitByCyclePoint(this, *(_DWORD *)(v2 + 48)) )
                {
                  if ( *(_BYTE *)(((unsigned __int64)&schedule_config_ptr->cycle_point_upper_limit >> 3) + 0x7FFF8000) != 0
                    && (char)((((_BYTE)schedule_config_ptr + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&schedule_config_ptr->cycle_point_upper_limit >> 3)
                                                                                        + 0x7FFF8000) )
                  {
                    __asan_report_load4(&schedule_config_ptr->cycle_point_upper_limit);
                  }
                  cycle_point_upper_limit = schedule_config_ptr->cycle_point_upper_limit;
                  if ( *(_BYTE *)(((unsigned __int64)&schedule_ptr->cur_cycle_points >> 3) + 0x7FFF8000) != 0
                    && (char)((((_BYTE)schedule_ptr + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&schedule_ptr->cur_cycle_points >> 3)
                                                                                + 0x7FFF8000) )
                  {
                    __asan_report_load4(&schedule_ptr->cur_cycle_points);
                  }
                  if ( cycle_point_upper_limit <= schedule_ptr->cur_cycle_points )
                    v29 = 0;
                  else
                    v29 = schedule_config_ptr->cycle_point_upper_limit - schedule_ptr->cur_cycle_points;
                  *(_DWORD *)(v2 + 80) = v29;
                  v30 = std::min<unsigned int>((const unsigned int *)(v2 + 64), (const unsigned int *)(v2 + 80));
                  v31 = v30;
                  if ( *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)v30 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_load4(v30);
                  }
                  *(_DWORD *)(v2 + 64) = *v31;
                  if ( *(_BYTE *)(((unsigned __int64)&schedule_ptr->cur_cycle_points >> 3) + 0x7FFF8000) != 0
                    && (char)((((_BYTE)schedule_ptr + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&schedule_ptr->cur_cycle_points >> 3)
                                                                                + 0x7FFF8000) )
                  {
                    __asan_report_load4(&schedule_ptr->cur_cycle_points);
                  }
                  schedule_ptr->cur_cycle_points += *(_DWORD *)(v2 + 64);
                }
                reason = 3;
                if ( *(_BYTE *)(((unsigned __int64)&mission_config_ptr->refresh_type >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)mission_config_ptr + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&mission_config_ptr->refresh_type >> 3)
                                                                                     + 0x7FFF8000) )
                {
                  __asan_report_load4(&mission_config_ptr->refresh_type);
                }
                if ( mission_config_ptr->refresh_type == BATTLE_PASS_MISSION_REFRESH_CYCLE )
                {
                  reason = 4;
                }
                else
                {
                  if ( *(_BYTE *)(((unsigned __int64)&mission_config_ptr->refresh_type >> 3) + 0x7FFF8000) != 0
                    && (char)((((_BYTE)mission_config_ptr + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&mission_config_ptr->refresh_type >> 3)
                                                                                       + 0x7FFF8000) )
                  {
                    __asan_report_load4(&mission_config_ptr->refresh_type);
                  }
                  if ( mission_config_ptr->refresh_type == BATTLE_PASS_MISSION_REFRESH_SCHEDULE )
                  {
                    reason = 5;
                  }
                  else
                  {
                    if ( *(_BYTE *)(((unsigned __int64)&mission_config_ptr->refresh_type >> 3) + 0x7FFF8000) != 0
                      && (char)((((_BYTE)mission_config_ptr + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&mission_config_ptr->refresh_type >> 3)
                                                                                         + 0x7FFF8000) )
                    {
                      __asan_report_load4(&mission_config_ptr->refresh_type);
                    }
                    if ( mission_config_ptr->refresh_type == BATTLE_PASS_MISSION_REFRESH_CYCLE_CROSS_SCHEDULE )
                      reason = 6;
                  }
                }
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8(&this->player_);
                BattlePassSchedule::addPoint(
                  schedule_ptr,
                  *(_DWORD *)(v2 + 64),
                  reason,
                  *(_DWORD *)(v2 + 48),
                  this->player_);
                v32 = (*(_BYTE *)(((unsigned __int64)&mission_ptr->mission_status >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)mission_ptr + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&mission_ptr->mission_status >> 3) + 0x7FFF8000));
                if ( (_BYTE)v32 )
                  __asan_report_store4(&mission_ptr->mission_status, (((_BYTE)mission_ptr + 4) & 7u) + 3, v32);
                mission_ptr->mission_status = BattlePassMission_MissionStatus_MISSION_POINT_TAKEN;
                common::milog::MiLogStream::create(
                  &v51,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/player/battle_pass/player_battle_pass_comp.cpp",
                  "takeMissionPoint",
                  1339);
                v33 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                        &v51,
                        (const char (*)[21])"take mission point :");
                v34 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v33,
                        (const unsigned int *)(v2 + 48));
                v35 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                        v34,
                        (const char (*)[10])" player_:");
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8(&this->player_);
                operator<<(v35, this->player_);
                common::milog::MiLogStream::~MiLogStream(&v51);
                v36 = *(_DWORD *)(v2 + 48);
                CurScheduleId = PlayerBattlePassComp::getCurScheduleId(this);
                PlayerBattlePassComp::logMissionUpdate(this, CurScheduleId, v36);
                std::vector<unsigned int>::push_back(
                  (std::vector<unsigned int> *const)(v2 + 96),
                  (const std::vector<unsigned int>::value_type *)(v2 + 48));
              }
            }
            else
            {
              common::milog::MiLogStream::create(
                &v49,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/battle_pass/player_battle_pass_comp.cpp",
                "takeMissionPoint",
                1306);
              v22 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                      &v49,
                      (const char (*)[45])off_256FC900);
              v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v22,
                      (const unsigned int *)(v2 + 48));
              v24 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v23, (const char (*)[9])" player:");
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8(&this->player_);
              operator<<(v24, this->player_);
              common::milog::MiLogStream::~MiLogStream(&v49);
            }
          }
          else
          {
LABEL_26:
            common::milog::MiLogStream::create(
              &v48,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/battle_pass/player_battle_pass_comp.cpp",
              "takeMissionPoint",
              1300);
            v18 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
                    &v48,
                    (const char (*)[52])off_256FC8A0);
            v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v18,
                    (const unsigned int *)(v2 + 48));
            v20 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v19, (const char (*)[9])" player:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            operator<<(v20, this->player_);
            common::milog::MiLogStream::~MiLogStream(&v48);
          }
          __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
        }
        PlayerBattlePassComp::notifyMission(this, (const std::vector<unsigned int> *)(v2 + 96));
        PlayerBattlePassComp::notifyCurSchedule(this);
        std::vector<unsigned int>::operator=(mission_id_vec, (const std::vector<unsigned int> *)(v2 + 96));
        v8 = 0;
        std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 96));
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v51,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/battle_pass/player_battle_pass_comp.cpp",
        "takeMissionPoint",
        1286);
      v10 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(&v51, (const char (*)[58])off_256FC7A0);
      v11 = common::milog::MiLogStream::operator<<<unsigned int>(v10, mission_id_vec);
      v12 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v11, (const char (*)[9])" player:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      v13 = operator<<(v12, this->player_);
      v14 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v13, (const char (*)[11])" schedule:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &schedule_ptr->schedule_id);
      common::milog::MiLogStream::~MiLogStream(&v51);
      v8 = -1;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v51,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/battle_pass/player_battle_pass_comp.cpp",
      "takeMissionPoint",
      1280);
    v5 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(&v51, (const char (*)[51])off_256FC740);
    v6 = common::milog::MiLogStream::operator<<<unsigned int>(v5, mission_id_vec);
    v7 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v6, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    operator<<(v7, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v51);
    v8 = -1;
  }
  result = v8;
  if ( v52 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 1351: range 00000000150C7BE0-00000000150C8116
void __fastcall PlayerBattlePassComp::fillMissionProto(
        PlayerBattlePassComp *const this,
        uint32_t mission_id,
        proto::BattlePassMission *proto)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rcx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  PlayerWatcherComp *WatcherComp; // rax
  google::protobuf::uint32 *mission_config_ptr; // [rsp+20h] [rbp-C0h]
  BattlePassMission *mission_ptr; // [rsp+28h] [rbp-B8h]
  std::shared_ptr<Config> v16; // [rsp+30h] [rbp-B0h] BYREF
  common::milog::MiLogStream v17; // [rsp+40h] [rbp-A0h] BYREF
  char v18[128]; // [rsp+60h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 15 mission_id:1350 64 8 18 progress_pair:1365";
  *(_QWORD *)(v3 + 16) = PlayerBattlePassComp::fillMissionProto;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 48) = mission_id;
  proto::BattlePassMission::set_mission_id(proto, *(_DWORD *)(v3 + 48));
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v16);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v16);
  mission_config_ptr = (google::protobuf::uint32 *)data::BattlePassExcelConfigMgrBase::findBattlePassMissionExcelConfig(
                                                     &v6->design_config.txt_config_mgr.battle_pass_excel_config_mgr,
                                                     *(_DWORD *)(v3 + 48));
  std::shared_ptr<Config>::~shared_ptr(&v16);
  if ( !mission_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/battle_pass/player_battle_pass_comp.cpp",
      "fillMissionProto",
      1356);
    v7 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(&v17, (const char (*)[55])off_256FCA60);
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
    v9 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v8, (const char (*)[8])"player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
LABEL_7:
    operator<<(v9, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v17);
    goto LABEL_23;
  }
  mission_ptr = PlayerBattlePassComp::findMission(this, *(_DWORD *)(v3 + 48));
  if ( !mission_ptr )
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/battle_pass/player_battle_pass_comp.cpp",
      "fillMissionProto",
      1362);
    v10 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(&v17, (const char (*)[54])off_256FCAC0);
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 48));
    v9 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v11, (const char (*)[8])"player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    goto LABEL_7;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  WatcherComp = Player::getWatcherComp(this->player_);
  *(std::pair<unsigned int,unsigned int> *)(v3 + 64) = PlayerWatcherComp::getWatcherProgress(
                                                         WatcherComp,
                                                         *(_DWORD *)(v3 + 48));
  proto::BattlePassMission::set_cur_progress(proto, *(_DWORD *)(v3 + 64));
  if ( *(_BYTE *)(((unsigned __int64)(mission_config_ptr + 20) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)(mission_config_ptr + 20) >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(mission_config_ptr + 20);
  }
  proto::BattlePassMission::set_total_progress(proto, mission_config_ptr[20]);
  if ( *(_BYTE *)(((unsigned __int64)(mission_config_ptr + 29) >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)mission_config_ptr + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(mission_config_ptr + 29) >> 3)
                                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(mission_config_ptr + 29);
  }
  proto::BattlePassMission::set_reward_battle_pass_point(proto, mission_config_ptr[29]);
  if ( *(_BYTE *)(((unsigned __int64)(mission_config_ptr + 27) >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)mission_config_ptr + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(mission_config_ptr + 27) >> 3)
                                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(mission_config_ptr + 27);
  }
  proto::BattlePassMission::set_mission_type(proto, mission_config_ptr[27]);
  if ( *(_BYTE *)(((unsigned __int64)&mission_ptr->mission_status >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)mission_ptr + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&mission_ptr->mission_status >> 3)
                                                              + 0x7FFF8000) )
  {
    __asan_report_load4(&mission_ptr->mission_status);
  }
  proto::BattlePassMission::set_mission_status(proto, mission_ptr->mission_status);
LABEL_23:
  if ( v18 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 1375: range 00000000150C8118-00000000150C82D7
int32_t __cdecl PlayerBattlePassComp::notifyMission(PlayerBattlePassComp *const this, uint32_t mission_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t result; // eax
  std::allocator<unsigned int> __a; // [rsp+2Bh] [rbp-95h] BYREF
  std::initializer_list<unsigned int> __l; // [rsp+2Ch] [rbp-94h] BYREF

  v2 = (unsigned __int64)&__l._M_array + 4;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 24 8 vec:1376";
  *(_QWORD *)(v2 + 16) = PlayerBattlePassComp::notifyMission;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218103808;
  v4[536862722] = -202116109;
  LODWORD(__l._M_array) = mission_id;
  std::allocator<unsigned int>::allocator(&__a);
  std::vector<unsigned int>::vector(
    (std::vector<unsigned int> *const)(v2 + 32),
    (std::initializer_list<unsigned int>)__PAIR128__(1LL, &__l),
    &__a);
  std::allocator<unsigned int>::~allocator(&__a);
  PlayerBattlePassComp::notifyMission(this, (const std::vector<unsigned int> *)(v2 + 32));
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 32));
  result = 0;
  if ( (std::initializer_list<unsigned int>::iterator *)((char *)&__l._M_array + 4) == (std::initializer_list<unsigned int>::iterator *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 1382: range 00000000150C82D8-00000000150C86B6
int32_t __cdecl PlayerBattlePassComp::notifyMission(
        PlayerBattlePassComp *const this,
        const std::vector<unsigned int> *mission_id_vec)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v5; // rax
  _DWORD *v6; // rdx
  std::__shared_ptr_access<proto::BattlePassMissionUpdateNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<proto::BattlePassMissionDelNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<proto::BattlePassMissionUpdateNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  Player *player; // r14
  std::__shared_ptr_access<proto::BattlePassMissionDelNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  Player *v12; // r14
  int32_t result; // eax
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+10h] [rbp-E0h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+18h] [rbp-D8h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+20h] [rbp-D0h]
  proto::BattlePassMission *mission_proto; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::BattlePassMissionUpdateNotify> __r; // [rsp+30h] [rbp-C0h] BYREF
  char v19[176]; // [rsp+40h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 15 mission_id:1385 64 16 21 update_proto_ptr:1383 96 16 18 del_proto_ptr:1384";
  *(_QWORD *)(v2 + 16) = PlayerBattlePassComp::notifyMission;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  common::tools::perf::make_shared<proto::BattlePassMissionUpdateNotify>();
  common::tools::perf::make_shared<proto::BattlePassMissionDelNotify>();
  __for_range = mission_id_vec;
  __for_begin._M_current = std::vector<unsigned int>::begin(mission_id_vec)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(mission_id_vec)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v5 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
    v6 = v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v5);
    }
    *(_DWORD *)(v2 + 48) = *v6;
    if ( common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,BattlePassMission>,unsigned int>(
           &this->cur_mission_map_,
           (const unsigned int *)(v2 + 48)) )
    {
      v7 = std::__shared_ptr_access<proto::BattlePassMissionUpdateNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::BattlePassMissionUpdateNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      mission_proto = proto::BattlePassMissionUpdateNotify::add_mission_list(v7);
      PlayerBattlePassComp::fillMissionProto(this, *(_DWORD *)(v2 + 48), mission_proto);
    }
    else
    {
      v8 = std::__shared_ptr_access<proto::BattlePassMissionDelNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::BattlePassMissionDelNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      proto::BattlePassMissionDelNotify::add_del_mission_id_list(v8, *(_DWORD *)(v2 + 48));
    }
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  v9 = std::__shared_ptr_access<proto::BattlePassMissionUpdateNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::BattlePassMissionUpdateNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  if ( proto::BattlePassMissionUpdateNotify::mission_list_size(v9) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    player = this->player_;
    std::dynamic_pointer_cast<google::protobuf::Message const,proto::BattlePassMissionUpdateNotify>(&__r);
    Player::sendMessage(player, (common::minet::ConstMessagePtr *)&__r, 0LL);
    std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&__r);
  }
  v11 = std::__shared_ptr_access<proto::BattlePassMissionDelNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::BattlePassMissionDelNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
  if ( proto::BattlePassMissionDelNotify::del_mission_id_list_size(v11) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    v12 = this->player_;
    std::dynamic_pointer_cast<google::protobuf::Message const,proto::BattlePassMissionDelNotify>((const std::shared_ptr<proto::BattlePassMissionDelNotify> *)&__r);
    Player::sendMessage(v12, (common::minet::ConstMessagePtr *)&__r, 0LL);
    std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&__r);
  }
  std::shared_ptr<proto::BattlePassMissionDelNotify>::~shared_ptr((std::shared_ptr<proto::BattlePassMissionDelNotify> *const)(v2 + 96));
  std::shared_ptr<proto::BattlePassMissionUpdateNotify>::~shared_ptr((std::shared_ptr<proto::BattlePassMissionUpdateNotify> *const)(v2 + 64));
  result = 0;
  if ( v19 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1409: range 00000000150C86B8-00000000150C8826
void __cdecl PlayerBattlePassComp::onWatcherProgressUpdate(
        PlayerBattlePassComp *const this,
        const WatcherProgressUpdateEvent *event)
{
  uint32_t watcher_id; // ebx
  uint32_t CurScheduleId; // ecx

  if ( common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,BattlePassMission>,unsigned int>(
         &this->cur_mission_map_,
         &event->watcher_id) )
  {
    if ( *(char *)(((unsigned __int64)&event->is_finished >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&event->is_finished);
    if ( event->is_finished )
    {
      if ( *(_BYTE *)(((unsigned __int64)&event->watcher_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&event->watcher_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&event->watcher_id);
      }
      PlayerBattlePassComp::finishMission(this, event->watcher_id, 1);
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&event->watcher_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&event->watcher_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&event->watcher_id);
      }
      PlayerBattlePassComp::notifyMission(this, event->watcher_id);
    }
    if ( *(_BYTE *)(((unsigned __int64)&event->watcher_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&event->watcher_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&event->watcher_id);
    }
    watcher_id = event->watcher_id;
    CurScheduleId = PlayerBattlePassComp::getCurScheduleId(this);
    PlayerBattlePassComp::logMissionUpdate(this, CurScheduleId, watcher_id);
  }
};

// Line 1427: range 00000000150C8828-00000000150C8CDC
void __cdecl PlayerBattlePassComp::logBuyBattlePass(
        PlayerBattlePassComp *const this,
        const BattlePassSchedule *schedule,
        data::ProductPlayType play_type)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyBattlePassBuy,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyBattlePassBuy,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyBattlePassBuy,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rcx
  BattlePassExcelConfigMgr *p_battle_pass_excel_config_mgr; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyBattlePassBuy,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // r14
  time_t Now; // rcx
  Player *player; // r14
  std::string v14; // [rsp+0h] [rbp-100h]
  google::protobuf::uint32 play_typea; // [rsp+Ch] [rbp-F4h]
  const BattlePassSchedule *schedulea; // [rsp+10h] [rbp-F0h]
  PlayerBattlePassComp *thisa; // [rsp+18h] [rbp-E8h]
  const data::BattlePassScheduleExcelConfig *config_ptr; // [rsp+28h] [rbp-D8h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+30h] [rbp-D0h] BYREF
  std::shared_ptr<google::protobuf::Message> v20; // [rsp+40h] [rbp-C0h] BYREF
  std::string v21; // [rsp+50h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+70h] [rbp-90h] BYREF

  *(&v14._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  v14._anon_0._M_allocated_capacity = (std::string::size_type)schedule;
  HIDWORD(v14._M_string_length) = play_type;
  v3 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 1 11 holder:1428 64 16 12 log_ptr:1429";
  *(_QWORD *)(v3 + 16) = PlayerBattlePassComp::logBuyBattlePass;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  BasicComp = Player::getBasicComp(this->player_);
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v21, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48), 0xAA0u, v14);
  std::string::~string(&v21);
  common::tools::perf::make_shared<proto_log::PlayerLogBodyBattlePassBuy>();
  v7 = std::__shared_ptr_access<proto_log::PlayerLogBodyBattlePassBuy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBattlePassBuy,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
  if ( *(_BYTE *)(((unsigned __int64)schedulea >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)schedulea >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(schedulea);
  }
  proto_log::PlayerLogBodyBattlePassBuy::set_schedule_id(v7, schedulea->schedule_id);
  v8 = std::__shared_ptr_access<proto_log::PlayerLogBodyBattlePassBuy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBattlePassBuy,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
  proto_log::PlayerLogBodyBattlePassBuy::set_buy_play_type(v8, play_typea);
  v9 = std::__shared_ptr_access<proto_log::PlayerLogBodyBattlePassBuy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBattlePassBuy,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&schedulea->level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)schedulea + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&schedulea->level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&schedulea->level);
  }
  proto_log::PlayerLogBodyBattlePassBuy::set_cur_level(v9, schedulea->level);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v20);
  p_battle_pass_excel_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v20)->design_config.txt_config_mgr.battle_pass_excel_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)schedulea >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)schedulea >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(schedulea);
  }
  config_ptr = data::BattlePassExcelConfigMgrBase::findBattlePassScheduleExcelConfig(
                 p_battle_pass_excel_config_mgr,
                 schedulea->schedule_id);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v20);
  if ( config_ptr )
  {
    v11 = std::__shared_ptr_access<proto_log::PlayerLogBodyBattlePassBuy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBattlePassBuy,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    Now = common::tools::TimeUtils::getNow();
    if ( *(_BYTE *)(((unsigned __int64)&config_ptr->begin_time >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config_ptr->begin_time >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config_ptr->begin_time);
    }
    proto_log::PlayerLogBodyBattlePassBuy::set_pass_days(v11, (Now - config_ptr->begin_time) / 86400);
  }
  if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&thisa->player_);
  player = thisa->player_;
  std::shared_ptr<google::protobuf::Message>::shared_ptr(&v20, 0LL);
  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyBattlePassBuy,void>(
    &p_body_ptr,
    (const std::shared_ptr<proto_log::PlayerLogBodyBattlePassBuy> *)(v3 + 64));
  Player::printStatLog(player, &p_body_ptr, &v20, 0xEu);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v20);
  std::shared_ptr<proto_log::PlayerLogBodyBattlePassBuy>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyBattlePassBuy> *const)(v3 + 64));
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48));
  if ( v22 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 1442: range 00000000150C8CDE-00000000150C9190
void __cdecl PlayerBattlePassComp::logTakeLevelReward(
        PlayerBattlePassComp *const this,
        uint32_t schedule_id,
        const BattlePassRewardTag *tag,
        uint32_t option_idx,
        const std::vector<ItemParam> *total_get_vec)
{
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  _DWORD *v7; // r13
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyBattlePassTakeLevelReward,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyBattlePassTakeLevelReward,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyBattlePassTakeLevelReward,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyBattlePassTakeLevelReward,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyBattlePassTakeLevelReward,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyBattlePassTakeLevelReward,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  proto_log::ItemLog *v15; // rax
  Player *player; // r14
  std::string total_get_veca; // [rsp+0h] [rbp-110h]
  const std::vector<ItemParam> *total_get_vecb; // [rsp+0h] [rbp-110h]
  google::protobuf::uint32 *taga; // [rsp+8h] [rbp-108h]
  uint32_t option_idxa; // [rsp+10h] [rbp-100h]
  google::protobuf::uint32 schedule_ida; // [rsp+14h] [rbp-FCh]
  PlayerBattlePassComp *thisa; // [rsp+18h] [rbp-F8h]
  std::vector<ItemParam>::const_iterator __for_begin; // [rsp+20h] [rbp-F0h] BYREF
  std::vector<ItemParam>::const_iterator __for_end; // [rsp+28h] [rbp-E8h] BYREF
  const std::vector<ItemParam> *__for_range; // [rsp+30h] [rbp-E0h]
  const ItemParam *param; // [rsp+38h] [rbp-D8h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+40h] [rbp-D0h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+50h] [rbp-C0h] BYREF
  std::string v29; // [rsp+60h] [rbp-B0h] BYREF
  char v30[144]; // [rsp+80h] [rbp-90h] BYREF

  *(&total_get_veca._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  HIDWORD(total_get_veca._anon_0._M_allocated_capacity) = schedule_id;
  total_get_veca._M_string_length = (std::string::size_type)tag;
  *(_DWORD *)total_get_veca._anon_0._M_local_buf = option_idx;
  total_get_veca._M_dataplus._M_p = (std::string::pointer)total_get_vec;
  v5 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 48 1 11 holder:1443 64 16 12 log_ptr:1444";
  *(_QWORD *)(v5 + 16) = PlayerBattlePassComp::logTakeLevelReward;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234753551;
  v7[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  BasicComp = Player::getBasicComp(this->player_);
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v29, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v5 + 48), 0xAA1u, total_get_veca);
  std::string::~string(&v29);
  common::tools::perf::make_shared<proto_log::PlayerLogBodyBattlePassTakeLevelReward>();
  v9 = std::__shared_ptr_access<proto_log::PlayerLogBodyBattlePassTakeLevelReward,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBattlePassTakeLevelReward,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
  proto_log::PlayerLogBodyBattlePassTakeLevelReward::set_schedule_id(v9, schedule_ida);
  v10 = std::__shared_ptr_access<proto_log::PlayerLogBodyBattlePassTakeLevelReward,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBattlePassTakeLevelReward,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
  if ( *(_BYTE *)(((unsigned __int64)(taga + 1) >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)taga + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(taga + 1) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(taga + 1);
  }
  proto_log::PlayerLogBodyBattlePassTakeLevelReward::set_level(v10, taga[1]);
  v11 = std::__shared_ptr_access<proto_log::PlayerLogBodyBattlePassTakeLevelReward,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBattlePassTakeLevelReward,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
  if ( *(_BYTE *)(((unsigned __int64)taga >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)taga & 7) + 3) >= *(_BYTE *)(((unsigned __int64)taga >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(taga);
  }
  proto_log::PlayerLogBodyBattlePassTakeLevelReward::set_unlock_status(v11, *taga);
  v12 = std::__shared_ptr_access<proto_log::PlayerLogBodyBattlePassTakeLevelReward,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBattlePassTakeLevelReward,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
  if ( *(_BYTE *)(((unsigned __int64)(taga + 2) >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)taga + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(taga + 2) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(taga + 2);
  }
  proto_log::PlayerLogBodyBattlePassTakeLevelReward::set_reward_id(v12, taga[2]);
  v13 = std::__shared_ptr_access<proto_log::PlayerLogBodyBattlePassTakeLevelReward,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBattlePassTakeLevelReward,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
  proto_log::PlayerLogBodyBattlePassTakeLevelReward::set_option_idx(v13, option_idxa);
  __for_range = total_get_vecb;
  __for_begin._M_current = std::vector<ItemParam>::begin(total_get_vecb)._M_current;
  __for_end._M_current = std::vector<ItemParam>::end(total_get_vecb)._M_current;
  while ( __gnu_cxx::operator!=<ItemParam const*,std::vector<ItemParam>>(&__for_begin, &__for_end) )
  {
    param = __gnu_cxx::__normal_iterator<ItemParam const*,std::vector<ItemParam>>::operator*(&__for_begin);
    v14 = std::__shared_ptr_access<proto_log::PlayerLogBodyBattlePassTakeLevelReward,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBattlePassTakeLevelReward,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
    v15 = proto_log::PlayerLogBodyBattlePassTakeLevelReward::add_item_vec(v14);
    ItemParam::toItemLog(param, v15);
    __gnu_cxx::__normal_iterator<ItemParam const*,std::vector<ItemParam>>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&thisa->player_);
  player = thisa->player_;
  std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyBattlePassTakeLevelReward,void>(
    &p_body_ptr,
    (const std::shared_ptr<proto_log::PlayerLogBodyBattlePassTakeLevelReward> *)(v5 + 64));
  Player::printStatLog(player, &p_body_ptr, &p_body_ext_ptr, 0xEu);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
  std::shared_ptr<proto_log::PlayerLogBodyBattlePassTakeLevelReward>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyBattlePassTakeLevelReward> *const)(v5 + 64));
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v5 + 48));
  if ( v30 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 1458: range 00000000150C9192-00000000150C98C9
void __cdecl PlayerBattlePassComp::logAddPoint(
        PlayerBattlePassComp *const this,
        uint32_t add_point,
        const BattlePassSchedule *schedule,
        uint32_t reason,
        uint32_t mission_id)
{
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  _DWORD *v7; // r13
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyBattlePassAddPoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyBattlePassAddPoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyBattlePassAddPoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyBattlePassAddPoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rcx
  BattlePassExcelConfigMgr *p_battle_pass_excel_config_mgr; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyBattlePassAddPoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyBattlePassAddPoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyBattlePassAddPoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  unsigned int v17; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyBattlePassAddPoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rcx
  unsigned int v19; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyBattlePassAddPoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  Player *player; // r14
  std::string v22; // [rsp+0h] [rbp-130h]
  uint32_t mission_ida; // [rsp+4h] [rbp-12Ch]
  const BattlePassSchedule *schedulea; // [rsp+8h] [rbp-128h]
  uint32_t reasona; // [rsp+10h] [rbp-120h]
  uint32_t add_pointa; // [rsp+14h] [rbp-11Ch]
  PlayerBattlePassComp *thisa; // [rsp+18h] [rbp-118h]
  uint32_t schedule_id; // [rsp+24h] [rbp-10Ch]
  uint32_t now; // [rsp+28h] [rbp-108h]
  uint32_t day_idx; // [rsp+2Ch] [rbp-104h]
  const data::BattlePassLevelExcelConfig *config_ptr; // [rsp+30h] [rbp-100h]
  google::protobuf::uint32 *cycle_idx; // [rsp+38h] [rbp-F8h]
  std::tuple_element<0,std::tuple<unsigned int,unsigned int> >::type *begin_time; // [rsp+40h] [rbp-F0h]
  std::tuple<unsigned int,unsigned int,unsigned int> __t; // [rsp+54h] [rbp-DCh] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+60h] [rbp-D0h] BYREF
  std::shared_ptr<google::protobuf::Message> v36; // [rsp+70h] [rbp-C0h] BYREF
  std::string v37; // [rsp+80h] [rbp-B0h] BYREF
  char v38[144]; // [rsp+A0h] [rbp-90h] BYREF

  *(&v22._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  HIDWORD(v22._anon_0._M_allocated_capacity) = add_point;
  v22._M_string_length = (std::string::size_type)schedule;
  *(_DWORD *)v22._anon_0._M_local_buf = reason;
  HIDWORD(v22._M_dataplus._M_p) = mission_id;
  v5 = (unsigned __int64)v38;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 48 1 11 holder:1459 64 16 12 log_ptr:1460";
  *(_QWORD *)(v5 + 16) = PlayerBattlePassComp::logAddPoint;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234753551;
  v7[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  BasicComp = Player::getBasicComp(this->player_);
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v37, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v5 + 48), 0xAA2u, v22);
  std::string::~string(&v37);
  common::tools::perf::make_shared<proto_log::PlayerLogBodyBattlePassAddPoint>();
  v9 = std::__shared_ptr_access<proto_log::PlayerLogBodyBattlePassAddPoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBattlePassAddPoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
  if ( *(_BYTE *)(((unsigned __int64)schedulea >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)schedulea >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(schedulea);
  }
  proto_log::PlayerLogBodyBattlePassAddPoint::set_schedule_id(v9, schedulea->schedule_id);
  v10 = std::__shared_ptr_access<proto_log::PlayerLogBodyBattlePassAddPoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBattlePassAddPoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
  proto_log::PlayerLogBodyBattlePassAddPoint::set_add_point(v10, add_pointa);
  v11 = std::__shared_ptr_access<proto_log::PlayerLogBodyBattlePassAddPoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBattlePassAddPoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&schedulea->level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)schedulea + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&schedulea->level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&schedulea->level);
  }
  proto_log::PlayerLogBodyBattlePassAddPoint::set_cur_level(v11, schedulea->level);
  v12 = std::__shared_ptr_access<proto_log::PlayerLogBodyBattlePassAddPoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBattlePassAddPoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&schedulea->point >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&schedulea->point >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&schedulea->point);
  }
  proto_log::PlayerLogBodyBattlePassAddPoint::set_cur_point(v12, schedulea->point);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v36);
  p_battle_pass_excel_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v36)->design_config.txt_config_mgr.battle_pass_excel_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&schedulea->level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)schedulea + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&schedulea->level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&schedulea->level);
  }
  config_ptr = data::BattlePassExcelConfigMgrBase::findBattlePassLevelExcelConfig(
                 p_battle_pass_excel_config_mgr,
                 schedulea->level);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v36);
  if ( config_ptr )
  {
    v14 = std::__shared_ptr_access<proto_log::PlayerLogBodyBattlePassAddPoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBattlePassAddPoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&config_ptr->level_up_need_point >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->level_up_need_point >> 3)
                                                                + 0x7FFF8000) )
    {
      __asan_report_load4(&config_ptr->level_up_need_point);
    }
    proto_log::PlayerLogBodyBattlePassAddPoint::set_total_need_point(v14, config_ptr->level_up_need_point);
  }
  v15 = std::__shared_ptr_access<proto_log::PlayerLogBodyBattlePassAddPoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBattlePassAddPoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
  proto_log::PlayerLogBodyBattlePassAddPoint::set_reason(v15, reasona);
  v16 = std::__shared_ptr_access<proto_log::PlayerLogBodyBattlePassAddPoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBattlePassAddPoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
  proto_log::PlayerLogBodyBattlePassAddPoint::set_mission_id(v16, mission_ida);
  if ( *(_BYTE *)(((unsigned __int64)schedulea >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)schedulea >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(schedulea);
  }
  schedule_id = schedulea->schedule_id;
  now = common::tools::TimeUtils::getNow();
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v36);
  v17 = (unsigned int)std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v36);
  BattlePassExcelConfigMgr::getScheduleCycleIdxAndTime(
    (const BattlePassExcelConfigMgr *const)&__t,
    v17 + 31016,
    schedule_id);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v36);
  cycle_idx = std::get<0ul,unsigned int,unsigned int,unsigned int>(&__t);
  begin_time = std::get<1ul,unsigned int,unsigned int,unsigned int>(&__t);
  std::get<2ul,unsigned int,unsigned int,unsigned int>(&__t);
  v18 = std::__shared_ptr_access<proto_log::PlayerLogBodyBattlePassAddPoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBattlePassAddPoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
  if ( *(_BYTE *)(((unsigned __int64)cycle_idx >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)cycle_idx & 7) + 3) >= *(_BYTE *)(((unsigned __int64)cycle_idx >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(cycle_idx);
  }
  proto_log::PlayerLogBodyBattlePassAddPoint::set_cycle_idx(v18, *cycle_idx);
  if ( *(_BYTE *)(((unsigned __int64)begin_time >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)begin_time & 7) + 3) >= *(_BYTE *)(((unsigned __int64)begin_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(begin_time);
  }
  if ( now <= *begin_time )
    v19 = 0;
  else
    v19 = (now - *begin_time) / 0x15180;
  day_idx = v19;
  v20 = std::__shared_ptr_access<proto_log::PlayerLogBodyBattlePassAddPoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBattlePassAddPoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
  proto_log::PlayerLogBodyBattlePassAddPoint::set_day_idx(v20, day_idx);
  if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&thisa->player_);
  player = thisa->player_;
  std::shared_ptr<google::protobuf::Message>::shared_ptr(&v36, 0LL);
  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyBattlePassAddPoint,void>(
    &p_body_ptr,
    (const std::shared_ptr<proto_log::PlayerLogBodyBattlePassAddPoint> *)(v5 + 64));
  Player::printStatLog(player, &p_body_ptr, &v36, 0xEu);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v36);
  std::shared_ptr<proto_log::PlayerLogBodyBattlePassAddPoint>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyBattlePassAddPoint> *const)(v5 + 64));
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v5 + 48));
  if ( v38 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 1482: range 00000000150C98CA-00000000150C9E88
void __cdecl PlayerBattlePassComp::logAddPointSplit(
        PlayerBattlePassComp *const this,
        uint32_t add_point,
        const BattlePassSchedule *schedule,
        uint32_t reason,
        uint32_t mission_id)
{
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  _DWORD *v7; // r13
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyBattlePassAddPointSplit,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyBattlePassAddPointSplit,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyBattlePassAddPointSplit,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyBattlePassAddPointSplit,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyBattlePassAddPointSplit,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  unsigned int v14; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyBattlePassAddPointSplit,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rcx
  unsigned int v16; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyBattlePassAddPointSplit,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  Player *player; // r14
  std::string v19; // [rsp+0h] [rbp-130h]
  uint32_t mission_ida; // [rsp+4h] [rbp-12Ch]
  const BattlePassSchedule *schedulea; // [rsp+8h] [rbp-128h]
  uint32_t reasona; // [rsp+10h] [rbp-120h]
  uint32_t add_pointa; // [rsp+14h] [rbp-11Ch]
  PlayerBattlePassComp *thisa; // [rsp+18h] [rbp-118h]
  uint32_t schedule_id; // [rsp+2Ch] [rbp-104h]
  uint32_t now; // [rsp+30h] [rbp-100h]
  uint32_t day_idx; // [rsp+34h] [rbp-FCh]
  google::protobuf::uint32 *cycle_idx; // [rsp+38h] [rbp-F8h]
  std::tuple_element<0,std::tuple<unsigned int,unsigned int> >::type *begin_time; // [rsp+40h] [rbp-F0h]
  std::tuple<unsigned int,unsigned int,unsigned int> __t; // [rsp+54h] [rbp-DCh] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+60h] [rbp-D0h] BYREF
  std::shared_ptr<google::protobuf::Message> v32; // [rsp+70h] [rbp-C0h] BYREF
  std::string v33; // [rsp+80h] [rbp-B0h] BYREF
  char v34[144]; // [rsp+A0h] [rbp-90h] BYREF

  *(&v19._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  HIDWORD(v19._anon_0._M_allocated_capacity) = add_point;
  v19._M_string_length = (std::string::size_type)schedule;
  *(_DWORD *)v19._anon_0._M_local_buf = reason;
  HIDWORD(v19._M_dataplus._M_p) = mission_id;
  v5 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 48 1 11 holder:1483 64 16 12 log_ptr:1484";
  *(_QWORD *)(v5 + 16) = PlayerBattlePassComp::logAddPointSplit;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234753551;
  v7[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  BasicComp = Player::getBasicComp(this->player_);
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v33, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v5 + 48), 0xAA6u, v19);
  std::string::~string(&v33);
  common::tools::perf::make_shared<proto_log::PlayerLogBodyBattlePassAddPointSplit>();
  v9 = std::__shared_ptr_access<proto_log::PlayerLogBodyBattlePassAddPointSplit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBattlePassAddPointSplit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
  if ( *(_BYTE *)(((unsigned __int64)schedulea >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)schedulea >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(schedulea);
  }
  proto_log::PlayerLogBodyBattlePassAddPointSplit::set_schedule_id(v9, schedulea->schedule_id);
  v10 = std::__shared_ptr_access<proto_log::PlayerLogBodyBattlePassAddPointSplit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBattlePassAddPointSplit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
  proto_log::PlayerLogBodyBattlePassAddPointSplit::set_add_point(v10, add_pointa);
  v11 = std::__shared_ptr_access<proto_log::PlayerLogBodyBattlePassAddPointSplit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBattlePassAddPointSplit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&schedulea->level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)schedulea + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&schedulea->level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&schedulea->level);
  }
  proto_log::PlayerLogBodyBattlePassAddPointSplit::set_cur_level(v11, schedulea->level);
  v12 = std::__shared_ptr_access<proto_log::PlayerLogBodyBattlePassAddPointSplit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBattlePassAddPointSplit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
  proto_log::PlayerLogBodyBattlePassAddPointSplit::set_reason(v12, reasona);
  v13 = std::__shared_ptr_access<proto_log::PlayerLogBodyBattlePassAddPointSplit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBattlePassAddPointSplit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
  proto_log::PlayerLogBodyBattlePassAddPointSplit::set_mission_id(v13, mission_ida);
  if ( *(_BYTE *)(((unsigned __int64)schedulea >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)schedulea >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(schedulea);
  }
  schedule_id = schedulea->schedule_id;
  now = common::tools::TimeUtils::getNow();
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v32);
  v14 = (unsigned int)std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v32);
  BattlePassExcelConfigMgr::getScheduleCycleIdxAndTime(
    (const BattlePassExcelConfigMgr *const)&__t,
    v14 + 31016,
    schedule_id);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v32);
  cycle_idx = std::get<0ul,unsigned int,unsigned int,unsigned int>(&__t);
  begin_time = std::get<1ul,unsigned int,unsigned int,unsigned int>(&__t);
  std::get<2ul,unsigned int,unsigned int,unsigned int>(&__t);
  v15 = std::__shared_ptr_access<proto_log::PlayerLogBodyBattlePassAddPointSplit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBattlePassAddPointSplit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
  if ( *(_BYTE *)(((unsigned __int64)cycle_idx >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)cycle_idx & 7) + 3) >= *(_BYTE *)(((unsigned __int64)cycle_idx >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(cycle_idx);
  }
  proto_log::PlayerLogBodyBattlePassAddPointSplit::set_cycle_idx(v15, *cycle_idx);
  if ( *(_BYTE *)(((unsigned __int64)begin_time >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)begin_time & 7) + 3) >= *(_BYTE *)(((unsigned __int64)begin_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(begin_time);
  }
  if ( now <= *begin_time )
    v16 = 0;
  else
    v16 = (now - *begin_time) / 0x15180;
  day_idx = v16;
  v17 = std::__shared_ptr_access<proto_log::PlayerLogBodyBattlePassAddPointSplit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBattlePassAddPointSplit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
  proto_log::PlayerLogBodyBattlePassAddPointSplit::set_day_idx(v17, day_idx);
  if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&thisa->player_);
  player = thisa->player_;
  std::shared_ptr<google::protobuf::Message>::shared_ptr(&v32, 0LL);
  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyBattlePassAddPointSplit,void>(
    &p_body_ptr,
    (const std::shared_ptr<proto_log::PlayerLogBodyBattlePassAddPointSplit> *)(v5 + 64));
  Player::printStatLog(player, &p_body_ptr, &v32, 0xEu);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v32);
  std::shared_ptr<proto_log::PlayerLogBodyBattlePassAddPointSplit>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyBattlePassAddPointSplit> *const)(v5 + 64));
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v5 + 48));
  if ( v34 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 1499: range 00000000150C9E8A-00000000150CA291
// local variable allocation has failed, the output may be wrong!
void __cdecl PlayerBattlePassComp::logLevelUp(PlayerBattlePassComp *const this, const BattlePassSchedule *schedule)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyBattlePassLevelUp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyBattlePassLevelUp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyBattlePassLevelUp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyBattlePassLevelUp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rcx
  Player *v10; // r14
  std::string schedulea; // [rsp+0h] [rbp-E0h] OVERLAPPED BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+20h] [rbp-C0h] BYREF
  std::string v13; // [rsp+30h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+50h] [rbp-90h] BYREF

  schedulea._M_string_length = (std::string::size_type)this;
  schedulea._M_dataplus._M_p = (std::string::pointer)schedule;
  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 1 11 holder:1500 64 16 12 log_ptr:1501";
  *(_QWORD *)(v2 + 16) = PlayerBattlePassComp::logLevelUp;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -202178560;
  if ( *(_BYTE *)(((schedulea._M_string_length + 24) >> 3) + 0x7FFF8000) )
    __asan_report_load8(schedulea._M_string_length + 24);
  BasicComp = Player::getBasicComp(*(Player *const *)(schedulea._M_string_length + 24));
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v13, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48), 0xAA3u, schedulea);
  std::string::~string(&v13);
  common::tools::perf::make_shared<proto_log::PlayerLogBodyBattlePassLevelUp>();
  v6 = std::__shared_ptr_access<proto_log::PlayerLogBodyBattlePassLevelUp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBattlePassLevelUp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  if ( *(_BYTE *)(((unsigned __int64)schedulea._M_dataplus._M_p >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)schedulea._M_dataplus._M_p >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(schedulea._M_dataplus._M_p);
  }
  proto_log::PlayerLogBodyBattlePassLevelUp::set_schedule_id(v6, *(_DWORD *)schedulea._M_dataplus._M_p);
  v7 = std::__shared_ptr_access<proto_log::PlayerLogBodyBattlePassLevelUp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBattlePassLevelUp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  if ( *(_BYTE *)(((unsigned __int64)(schedulea._M_dataplus._M_p + 4) >> 3) + 0x7FFF8000) != 0
    && (char)(((LOBYTE(schedulea._M_dataplus._M_p) + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(schedulea._M_dataplus._M_p
                                                                                                  + 4) >> 3)
                                                                              + 0x7FFF8000) )
  {
    __asan_report_load4(schedulea._M_dataplus._M_p + 4);
  }
  proto_log::PlayerLogBodyBattlePassLevelUp::set_cur_level(v7, *((_DWORD *)schedulea._M_dataplus._M_p + 1));
  v8 = std::__shared_ptr_access<proto_log::PlayerLogBodyBattlePassLevelUp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBattlePassLevelUp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  if ( *(_BYTE *)(((unsigned __int64)(schedulea._M_dataplus._M_p + 8) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)(schedulea._M_dataplus._M_p + 8) >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(schedulea._M_dataplus._M_p + 8);
  }
  proto_log::PlayerLogBodyBattlePassLevelUp::set_cur_point(v8, *((_DWORD *)schedulea._M_dataplus._M_p + 2));
  v9 = std::__shared_ptr_access<proto_log::PlayerLogBodyBattlePassLevelUp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBattlePassLevelUp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  if ( *(_BYTE *)(((unsigned __int64)(schedulea._M_dataplus._M_p + 12) >> 3) + 0x7FFF8000) != 0
    && (char)(((LOBYTE(schedulea._M_dataplus._M_p) + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(schedulea._M_dataplus._M_p + 12) >> 3)
                                                                               + 0x7FFF8000) )
  {
    __asan_report_load4(schedulea._M_dataplus._M_p + 12);
  }
  proto_log::PlayerLogBodyBattlePassLevelUp::set_unlock_status(v9, *((_DWORD *)schedulea._M_dataplus._M_p + 3));
  if ( *(_BYTE *)(((schedulea._M_string_length + 24) >> 3) + 0x7FFF8000) )
    __asan_report_load8(schedulea._M_string_length + 24);
  v10 = *(Player **)(schedulea._M_string_length + 24);
  std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyBattlePassLevelUp,void>(
    (std::shared_ptr<google::protobuf::Message> *const)&schedulea._anon_0,
    (const std::shared_ptr<proto_log::PlayerLogBodyBattlePassLevelUp> *)(v2 + 64));
  Player::printStatLog(v10, (MessagePtr *)&schedulea._anon_0, &p_body_ext_ptr, 0xEu);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)&schedulea._anon_0);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
  std::shared_ptr<proto_log::PlayerLogBodyBattlePassLevelUp>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyBattlePassLevelUp> *const)(v2 + 64));
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48));
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 1510: range 00000000150CA292-00000000150CA983
void __cdecl PlayerBattlePassComp::logMissionUpdate(
        PlayerBattlePassComp *const this,
        uint32_t schedule_id,
        uint32_t mission_id)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyBattlePassMissionUpdate,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyBattlePassMissionUpdate,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyBattlePassMissionUpdate,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyBattlePassMissionUpdate,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rcx
  unsigned int v11; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyBattlePassMissionUpdate,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rcx
  unsigned int v13; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyBattlePassMissionUpdate,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyBattlePassMissionUpdate,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  Player *player; // r14
  std::string mission_ida; // [rsp+0h] [rbp-130h]
  uint32_t mission_idb; // [rsp+0h] [rbp-130h]
  uint32_t schedule_ida; // [rsp+4h] [rbp-12Ch]
  PlayerBattlePassComp *thisa; // [rsp+8h] [rbp-128h]
  uint32_t type; // [rsp+1Ch] [rbp-114h]
  uint32_t now; // [rsp+20h] [rbp-110h]
  uint32_t day_idx; // [rsp+24h] [rbp-10Ch]
  const BattlePassMission *mission_ptr; // [rsp+28h] [rbp-108h]
  google::protobuf::uint32 *cycle_idx; // [rsp+30h] [rbp-100h]
  std::tuple_element<0,std::tuple<unsigned int,unsigned int> >::type *begin_time; // [rsp+38h] [rbp-F8h]
  const data::BattlePassMissionExcelConfig *mission_config_ptr; // [rsp+48h] [rbp-E8h]
  std::tuple<unsigned int,unsigned int,unsigned int> __t; // [rsp+54h] [rbp-DCh] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+60h] [rbp-D0h] BYREF
  std::shared_ptr<google::protobuf::Message> v31; // [rsp+70h] [rbp-C0h] BYREF
  std::string v32; // [rsp+80h] [rbp-B0h] BYREF
  char v33[144]; // [rsp+A0h] [rbp-90h] BYREF

  mission_ida._M_string_length = (std::string::size_type)this;
  HIDWORD(mission_ida._M_dataplus._M_p) = schedule_id;
  LODWORD(mission_ida._M_dataplus._M_p) = mission_id;
  v3 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 1 11 holder:1511 64 16 12 log_ptr:1512";
  *(_QWORD *)(v3 + 16) = PlayerBattlePassComp::logMissionUpdate;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  BasicComp = Player::getBasicComp(this->player_);
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v32, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48), 0xAA4u, mission_ida);
  std::string::~string(&v32);
  common::tools::perf::make_shared<proto_log::PlayerLogBodyBattlePassMissionUpdate>();
  v7 = std::__shared_ptr_access<proto_log::PlayerLogBodyBattlePassMissionUpdate,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBattlePassMissionUpdate,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
  proto_log::PlayerLogBodyBattlePassMissionUpdate::set_schedule_id(v7, schedule_ida);
  v8 = std::__shared_ptr_access<proto_log::PlayerLogBodyBattlePassMissionUpdate,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBattlePassMissionUpdate,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
  proto_log::PlayerLogBodyBattlePassMissionUpdate::set_mission_id(v8, mission_idb);
  mission_ptr = PlayerBattlePassComp::findMission(thisa, mission_idb);
  if ( mission_ptr )
  {
    v10 = std::__shared_ptr_access<proto_log::PlayerLogBodyBattlePassMissionUpdate,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBattlePassMissionUpdate,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&mission_ptr->mission_status >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)mission_ptr + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&mission_ptr->mission_status >> 3)
                                                                + 0x7FFF8000) )
    {
      __asan_report_load4(&mission_ptr->mission_status);
    }
    proto_log::PlayerLogBodyBattlePassMissionUpdate::set_mission_status(v10, mission_ptr->mission_status);
  }
  else
  {
    v9 = std::__shared_ptr_access<proto_log::PlayerLogBodyBattlePassMissionUpdate,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBattlePassMissionUpdate,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    proto_log::PlayerLogBodyBattlePassMissionUpdate::set_is_delete(v9, 1);
  }
  now = common::tools::TimeUtils::getNow();
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v31);
  v11 = (unsigned int)std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v31);
  BattlePassExcelConfigMgr::getScheduleCycleIdxAndTime(
    (const BattlePassExcelConfigMgr *const)&__t,
    v11 + 31016,
    schedule_ida);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v31);
  cycle_idx = std::get<0ul,unsigned int,unsigned int,unsigned int>(&__t);
  begin_time = std::get<1ul,unsigned int,unsigned int,unsigned int>(&__t);
  std::get<2ul,unsigned int,unsigned int,unsigned int>(&__t);
  v12 = std::__shared_ptr_access<proto_log::PlayerLogBodyBattlePassMissionUpdate,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBattlePassMissionUpdate,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
  if ( *(_BYTE *)(((unsigned __int64)cycle_idx >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)cycle_idx & 7) + 3) >= *(_BYTE *)(((unsigned __int64)cycle_idx >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(cycle_idx);
  }
  proto_log::PlayerLogBodyBattlePassMissionUpdate::set_cycle_idx(v12, *cycle_idx);
  if ( *(_BYTE *)(((unsigned __int64)begin_time >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)begin_time & 7) + 3) >= *(_BYTE *)(((unsigned __int64)begin_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(begin_time);
  }
  if ( now <= *begin_time )
    v13 = 0;
  else
    v13 = (now - *begin_time) / 0x15180;
  day_idx = v13;
  v14 = std::__shared_ptr_access<proto_log::PlayerLogBodyBattlePassMissionUpdate,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBattlePassMissionUpdate,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
  proto_log::PlayerLogBodyBattlePassMissionUpdate::set_day_idx(v14, day_idx);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v31);
  v15 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v31);
  mission_config_ptr = data::BattlePassExcelConfigMgrBase::findBattlePassMissionExcelConfig(
                         &v15->design_config.txt_config_mgr.battle_pass_excel_config_mgr,
                         mission_idb);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v31);
  if ( mission_config_ptr )
  {
    type = 3;
    if ( *(_BYTE *)(((unsigned __int64)&mission_config_ptr->refresh_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)mission_config_ptr + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&mission_config_ptr->refresh_type >> 3)
                                                                         + 0x7FFF8000) )
    {
      __asan_report_load4(&mission_config_ptr->refresh_type);
    }
    if ( mission_config_ptr->refresh_type == BATTLE_PASS_MISSION_REFRESH_CYCLE )
    {
      type = 4;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&mission_config_ptr->refresh_type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)mission_config_ptr + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&mission_config_ptr->refresh_type >> 3)
                                                                           + 0x7FFF8000) )
      {
        __asan_report_load4(&mission_config_ptr->refresh_type);
      }
      if ( mission_config_ptr->refresh_type == BATTLE_PASS_MISSION_REFRESH_SCHEDULE )
      {
        type = 5;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&mission_config_ptr->refresh_type >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)mission_config_ptr + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&mission_config_ptr->refresh_type >> 3)
                                                                             + 0x7FFF8000) )
        {
          __asan_report_load4(&mission_config_ptr->refresh_type);
        }
        if ( mission_config_ptr->refresh_type == BATTLE_PASS_MISSION_REFRESH_CYCLE_CROSS_SCHEDULE )
          type = 6;
      }
    }
    v16 = std::__shared_ptr_access<proto_log::PlayerLogBodyBattlePassMissionUpdate,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBattlePassMissionUpdate,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    proto_log::PlayerLogBodyBattlePassMissionUpdate::set_mission_type(v16, type);
  }
  if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&thisa->player_);
  player = thisa->player_;
  std::shared_ptr<google::protobuf::Message>::shared_ptr(&v31, 0LL);
  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyBattlePassMissionUpdate,void>(
    &p_body_ptr,
    (const std::shared_ptr<proto_log::PlayerLogBodyBattlePassMissionUpdate> *)(v3 + 64));
  Player::printStatLog(player, &p_body_ptr, &v31, 0xEu);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v31);
  std::shared_ptr<proto_log::PlayerLogBodyBattlePassMissionUpdate>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyBattlePassMissionUpdate> *const)(v3 + 64));
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48));
  if ( v33 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 1551: range 00000000150CA984-00000000150CACA6
void __cdecl PlayerBattlePassComp::logBuyLevel(
        PlayerBattlePassComp *const this,
        uint32_t schedule_id,
        uint32_t buy_level,
        uint32_t cur_level,
        uint32_t cost_hcoin_num)
{
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  _DWORD *v7; // r13
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyBattlePassBuyLevel,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyBattlePassBuyLevel,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyBattlePassBuyLevel,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyBattlePassBuyLevel,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  Player *player; // r14
  std::string v14; // [rsp+0h] [rbp-F0h]
  google::protobuf::uint32 cost_hcoin_numa; // [rsp+8h] [rbp-E8h]
  google::protobuf::uint32 cur_levela; // [rsp+Ch] [rbp-E4h]
  google::protobuf::uint32 buy_levela; // [rsp+10h] [rbp-E0h]
  google::protobuf::uint32 schedule_ida; // [rsp+14h] [rbp-DCh]
  PlayerBattlePassComp *thisa; // [rsp+18h] [rbp-D8h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+20h] [rbp-D0h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+30h] [rbp-C0h] BYREF
  std::string v22; // [rsp+40h] [rbp-B0h] BYREF
  char v23[144]; // [rsp+60h] [rbp-90h] BYREF

  *(&v14._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  HIDWORD(v14._anon_0._M_allocated_capacity) = schedule_id;
  *(_DWORD *)v14._anon_0._M_local_buf = buy_level;
  HIDWORD(v14._M_string_length) = cur_level;
  LODWORD(v14._M_string_length) = cost_hcoin_num;
  v5 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 48 1 11 holder:1552 64 16 12 log_ptr:1553";
  *(_QWORD *)(v5 + 16) = PlayerBattlePassComp::logBuyLevel;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234753551;
  v7[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  BasicComp = Player::getBasicComp(this->player_);
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v22, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v5 + 48), 0xAA7u, v14);
  std::string::~string(&v22);
  common::tools::perf::make_shared<proto_log::PlayerLogBodyBattlePassBuyLevel>();
  v9 = std::__shared_ptr_access<proto_log::PlayerLogBodyBattlePassBuyLevel,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBattlePassBuyLevel,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
  proto_log::PlayerLogBodyBattlePassBuyLevel::set_schedule_id(v9, schedule_ida);
  v10 = std::__shared_ptr_access<proto_log::PlayerLogBodyBattlePassBuyLevel,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBattlePassBuyLevel,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
  proto_log::PlayerLogBodyBattlePassBuyLevel::set_buy_level(v10, buy_levela);
  v11 = std::__shared_ptr_access<proto_log::PlayerLogBodyBattlePassBuyLevel,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBattlePassBuyLevel,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
  proto_log::PlayerLogBodyBattlePassBuyLevel::set_cur_level(v11, cur_levela);
  v12 = std::__shared_ptr_access<proto_log::PlayerLogBodyBattlePassBuyLevel,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBattlePassBuyLevel,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
  proto_log::PlayerLogBodyBattlePassBuyLevel::set_cost_hcoin_num(v12, cost_hcoin_numa);
  if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&thisa->player_);
  player = thisa->player_;
  std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyBattlePassBuyLevel,void>(
    &p_body_ptr,
    (const std::shared_ptr<proto_log::PlayerLogBodyBattlePassBuyLevel> *)(v5 + 64));
  Player::printStatLog(player, &p_body_ptr, &p_body_ext_ptr, 0xEu);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
  std::shared_ptr<proto_log::PlayerLogBodyBattlePassBuyLevel>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyBattlePassBuyLevel> *const)(v5 + 64));
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v5 + 48));
  if ( v23 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 1563: range 00000000150CACA8-00000000150CB600
void __cdecl PlayerBattlePassComp::internalCheckSendNotifyMail(PlayerBattlePassComp *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // rbx
  PlayerBasicComp *BasicComp; // rax
  BattlePassExcelConfigMgr *p_battle_pass_excel_config_mgr; // rcx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rcx
  unsigned int v9; // ecx
  common::milog::MiLogStream *i; // r14
  __int64 cur_schedule_id; // rsi
  PlayerMailComp *MailComp; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rcx
  std::allocator<char> __a; // [rsp+1Bh] [rbp-235h] BYREF
  uint32_t send_mail_time; // [rsp+1Ch] [rbp-234h]
  BattlePassSchedule *schedule_ptr; // [rsp+20h] [rbp-230h]
  const data::BattlePassScheduleExcelConfig *schedule_config_ptr; // [rsp+28h] [rbp-228h]
  std::shared_ptr<Config> v22; // [rsp+30h] [rbp-220h] BYREF
  std::string __lhs; // [rsp+40h] [rbp-210h] BYREF
  common::milog::MiLogStream v24; // [rsp+60h] [rbp-1F0h] BYREF
  char v25[464]; // [rsp+80h] [rbp-1D0h] BYREF

  v1 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_3(416LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 32 16 transaction:1598 112 232 14 mail_data:1592";
  *(_QWORD *)(v1 + 16) = PlayerBattlePassComp::internalCheckSendNotifyMail;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862722] = -219021312;
  v3[536862723] = 62194;
  v3[536862730] = -218103808;
  v3[536862731] = -202116109;
  v3[536862732] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  BasicComp = Player::getBasicComp(this->player_);
  if ( PlayerBasicComp::isStateOpen(BasicComp, 0x515u) )
  {
    schedule_ptr = PlayerBattlePassComp::findCurSchedule(this);
    if ( schedule_ptr )
    {
      if ( *(char *)(((unsigned __int64)&schedule_ptr->is_notify_mail_sent >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&schedule_ptr->is_notify_mail_sent);
      if ( !schedule_ptr->is_notify_mail_sent )
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v22);
        p_battle_pass_excel_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v22)->design_config.txt_config_mgr.battle_pass_excel_config_mgr;
        if ( *(_BYTE *)(((unsigned __int64)&this->cur_schedule_id_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->cur_schedule_id_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->cur_schedule_id_);
        }
        schedule_config_ptr = data::BattlePassExcelConfigMgrBase::findBattlePassScheduleExcelConfig(
                                p_battle_pass_excel_config_mgr,
                                this->cur_schedule_id_);
        std::shared_ptr<Config>::~shared_ptr(&v22);
        if ( schedule_config_ptr )
        {
          if ( *(_BYTE *)(((unsigned __int64)&schedule_config_ptr->mail_config_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&schedule_config_ptr->mail_config_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&schedule_config_ptr->mail_config_id);
          }
          if ( schedule_config_ptr->mail_config_id )
          {
            if ( *(_BYTE *)(((unsigned __int64)&schedule_config_ptr->mail_day_count >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)schedule_config_ptr - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&schedule_config_ptr->mail_day_count >> 3)
                                                                                  + 0x7FFF8000) )
            {
              __asan_report_load4(&schedule_config_ptr->mail_day_count);
            }
            v9 = SAFE_MULTIPLY<unsigned int,int>(schedule_config_ptr->mail_day_count, 86400);
            if ( *(_BYTE *)(((unsigned __int64)&schedule_config_ptr->begin_time >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&schedule_config_ptr->begin_time >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&schedule_config_ptr->begin_time);
            }
            send_mail_time = SAFE_ADD<unsigned int,unsigned int>(schedule_config_ptr->begin_time, v9);
            if ( common::tools::TimeUtils::getNow() >= send_mail_time )
            {
              MailData::MailData((MailData *const)(v1 + 112));
              if ( *(_BYTE *)(((unsigned __int64)&schedule_config_ptr->mail_config_id >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&schedule_config_ptr->mail_config_id >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&schedule_config_ptr->mail_config_id);
              }
              *(_DWORD *)(v1 + 260) = schedule_config_ptr->mail_config_id;
              *(_DWORD *)(v1 + 292) = 102;
              if ( *(_BYTE *)(((unsigned __int64)&schedule_config_ptr->end_time >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)schedule_config_ptr + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&schedule_config_ptr->end_time >> 3)
                                                                                   + 0x7FFF8000) )
              {
                __asan_report_load4(&schedule_config_ptr->end_time);
              }
              common::tools::TimeUtils::getStrByTime[abi:cxx11]((std::string *)&v24, schedule_config_ptr->end_time);
              std::vector<std::string>::operator=(
                (std::vector<std::string> *const)(v1 + 264),
                (std::initializer_list<std::string >)__PAIR128__(1LL, &v24));
              for ( i = (common::milog::MiLogStream *)v25; i != &v24; std::string::~string(i) )
                --i;
              *(_DWORD *)(v1 + 328) = 102;
              *(_DWORD *)(v1 + 288) = 1510;
              if ( *(_BYTE *)(((unsigned __int64)&this->cur_schedule_id_ >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&this->cur_schedule_id_ >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&this->cur_schedule_id_);
              }
              cur_schedule_id = this->cur_schedule_id_;
              common::tools::StringUtils::numToStr<unsigned int>((std::string *)&v24, cur_schedule_id);
              std::allocator<char>::allocator(&__a, cur_schedule_id);
              std::string::basic_string<std::allocator<char>>(&__lhs, "battle_pass_notify:", &__a);
              std::operator+<char>((std::string *)(v1 + 48), &__lhs, (std::string *)&v24);
              std::string::~string(&__lhs);
              std::allocator<char>::~allocator(&__a);
              std::string::~string(&v24);
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8(&this->player_);
              MailComp = Player::getMailComp(this->player_);
              if ( PlayerMailComp::addExcelMailAndTryAttachRewardWhenAvailable(
                     MailComp,
                     (MailData *)(v1 + 112),
                     (const std::string *)(v1 + 48)) )
              {
                common::milog::MiLogStream::create(
                  &v24,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/battle_pass/player_battle_pass_comp.cpp",
                  "internalCheckSendNotifyMail",
                  1601);
                v13 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
                        &v24,
                        (const char (*)[66])"addExcelMailAndTryAttachRewardWhenAvailable fail, mail_config_id:");
                v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v13,
                        &schedule_config_ptr->mail_config_id);
                v15 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                        v14,
                        (const char (*)[26])" battle pass schedule_id:");
                v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v15,
                        &this->cur_schedule_id_);
                v17 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v16, (const char (*)[9])" player:");
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8(&this->player_);
                operator<<(v17, this->player_);
                common::milog::MiLogStream::~MiLogStream(&v24);
              }
              else
              {
                if ( *(char *)(((unsigned __int64)&schedule_ptr->is_notify_mail_sent >> 3) + 0x7FFF8000) < 0 )
                  __asan_report_store1(&schedule_ptr->is_notify_mail_sent, v1 + 112, &schedule_ptr->is_notify_mail_sent);
                schedule_ptr->is_notify_mail_sent = 1;
              }
              std::string::~string((void *)(v1 + 48));
              MailData::~MailData((MailData *const)(v1 + 112));
            }
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v24,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/battle_pass/player_battle_pass_comp.cpp",
            "internalCheckSendNotifyMail",
            1580);
          v6 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
                 &v24,
                 (const char (*)[53])"findBattlePassScheduleExcelConfig fail, schedule_id:");
          v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->cur_schedule_id_);
          v8 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v7, (const char (*)[9])" player:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          operator<<(v8, this->player_);
          common::milog::MiLogStream::~MiLogStream(&v24);
        }
      }
    }
  }
  if ( v25 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8030) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8030) = -168430091;
  }
};
