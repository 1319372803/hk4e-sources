// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/recharge/player_recharge_comp.cpp

// Line 34: range 0000000013E1BB8E-0000000013E1BC8A
uint32_t __cdecl CardProductData::getRemainRewardDays(const CardProductData *const this, uint32_t day_offset)
{
  time_t v2; // rdx
  time_t v4; // rdx
  uint32_t remain_days; // [rsp+10h] [rbp-10h]
  uint32_t expire_day; // [rsp+14h] [rbp-Ch]
  uint32_t now; // [rsp+18h] [rbp-8h]
  uint32_t now_day; // [rsp+1Ch] [rbp-4h]

  v2 = day_offset;
  if ( *(_BYTE *)(((unsigned __int64)&this->expire_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->expire_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->expire_time);
  }
  expire_day = common::tools::TimeUtils::getTimeDay(this->expire_time, v2);
  now = common::tools::TimeUtils::getNow();
  now_day = common::tools::TimeUtils::getTimeDay(now, day_offset);
  if ( now_day >= expire_day )
    return 0;
  remain_days = expire_day - now_day;
  v4 = day_offset;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  if ( common::tools::TimeUtils::isSameDay(now, this->last_daily_reward_time, v4) && remain_days )
    --remain_days;
  return remain_days;
};

// Line 53: range 0000000013E1BC8C-0000000013E1CF45
int32_t __cdecl PlayerRechargeComp::fromBin(
        PlayerRechargeComp *const this,
        const proto::PlayerDataBin *player_data_bin)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  unsigned __int64 v5; // rax
  unsigned int v6; // r14d
  const unsigned int *v7; // rsi
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v8; // rax
  unsigned int *v9; // rdx
  char v10; // cl
  unsigned __int64 v11; // rax
  unsigned int v12; // r14d
  const unsigned int *v13; // rsi
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v14; // rax
  unsigned int *v15; // rdx
  char v16; // cl
  google::protobuf::RepeatedPtrField<proto::McoinProductConfigBin>::const_iterator *p_for_end_0; // rsi
  std::unordered_map<unsigned int,McoinProductData>::key_type *p_k; // rsi
  uint32_t buy_time; // edx
  char v20; // al
  uint32_t v21; // ecx
  char v22; // dl
  bool v23; // dl
  std::set<std::string> *p_product_id_set; // r14
  const google::protobuf::RepeatedPtrField<std::string > *v25; // rax
  void *const *it; // r15
  const google::protobuf::RepeatedPtrField<std::string > *v27; // rax
  google::protobuf::RepeatedPtrField<std::string >::const_iterator v28; // rax
  uint32_t refreshed; // edx
  char v30; // al
  google::protobuf::RepeatedPtrField<proto::McoinProductConfigBin>::const_iterator *v31; // rsi
  std::unordered_map<unsigned int,McoinProductData>::key_type *v32; // rsi
  uint32_t daily_reward_time; // edx
  char v34; // al
  uint32_t v35; // ecx
  char v36; // dl
  bool v37; // dl
  uint32_t v38; // edx
  char v39; // al
  std::set<std::string> *v40; // r14
  const google::protobuf::RepeatedPtrField<std::string > *v41; // rax
  void *const *v42; // r15
  const google::protobuf::RepeatedPtrField<std::string > *v43; // rax
  void *const *v44; // rsi
  uint32_t send_remind_mail_time; // edx
  char v46; // al
  uint32_t v47; // edx
  char v48; // al
  void *const *v49; // r15
  google::protobuf::RepeatedPtrField<std::string >::const_iterator v50; // rax
  uint32_t v51; // ecx
  char v52; // dl
  std::unordered_map<unsigned int,McoinProductData>::key_type *v53; // rsi
  bool v54; // dl
  std::unordered_map<unsigned int,McoinProductData>::key_type *v55; // rsi
  uint32_t v56; // edx
  char v57; // al
  const google::protobuf::RepeatedPtrField<std::string > *v58; // rax
  uint32_t v59; // ecx
  char v60; // dl
  std::unordered_map<unsigned int,McoinProductData>::key_type *v61; // rsi
  bool v62; // dl
  uint32_t v63; // ecx
  char v64; // dl
  std::unordered_map<unsigned int,McoinProductData>::key_type *v65; // rsi
  bool v66; // dl
  uint32_t v67; // ecx
  char v68; // dl
  bool v69; // dl
  uint32_t v70; // ecx
  char v71; // dl
  bool v72; // dl
  uint32_t v73; // ecx
  char v74; // dl
  bool v75; // dl
  const std::string *v76; // rax
  google::protobuf::uint32 v77; // eax
  google::protobuf::uint32 v78; // eax
  google::protobuf::uint32 v79; // eax
  google::protobuf::uint32 v80; // eax
  google::protobuf::uint32 v81; // eax
  proto::OrderFinishNotify *v82; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,proto::OrderFinishNotify> >,bool> v83; // rax
  int32_t result; // eax
  std::unordered_map<unsigned int,McoinProductData>::key_type __k; // [rsp+28h] [rbp-248h] BYREF
  uint32_t now; // [rsp+2Ch] [rbp-244h]
  google::protobuf::RepeatedPtrField<proto::OrderNotifySaveBin>::const_iterator __for_begin_1; // [rsp+30h] [rbp-240h] BYREF
  google::protobuf::RepeatedPtrField<proto::OrderNotifySaveBin>::const_iterator __for_end_1; // [rsp+38h] [rbp-238h] BYREF
  google::protobuf::RepeatedPtrField<proto::OrderFinishNotifyBin>::const_iterator __for_begin_2; // [rsp+40h] [rbp-230h] BYREF
  google::protobuf::RepeatedPtrField<proto::OrderFinishNotifyBin>::const_iterator __for_end_2; // [rsp+48h] [rbp-228h] BYREF
  google::protobuf::RepeatedPtrField<proto::McoinProductConfigBin>::const_iterator __for_begin_0; // [rsp+50h] [rbp-220h] BYREF
  google::protobuf::RepeatedPtrField<proto::McoinProductConfigBin>::const_iterator __for_end_0; // [rsp+58h] [rbp-218h] BYREF
  const proto::PlayerRechargeCompBin *proto_comp; // [rsp+60h] [rbp-210h]
  const google::protobuf::Map<unsigned int,unsigned int> *__for_range; // [rsp+68h] [rbp-208h]
  const google::protobuf::Map<unsigned int,unsigned int> *__for_range_0; // [rsp+70h] [rbp-200h]
  const google::protobuf::RepeatedPtrField<proto::McoinProductConfigBin> *__for_range_1; // [rsp+78h] [rbp-1F8h]
  const google::protobuf::RepeatedPtrField<proto::CardProductConfigBin> *__for_range_2; // [rsp+80h] [rbp-1F0h]
  const google::protobuf::RepeatedPtrField<std::string > *ps4_package_product_list; // [rsp+88h] [rbp-1E8h]
  const google::protobuf::RepeatedPtrField<proto::GoogleGiftCardProductBin> *__for_range_3; // [rsp+90h] [rbp-1E0h]
  const google::protobuf::RepeatedPtrField<proto::ConcertProductBin> *__for_range_4; // [rsp+98h] [rbp-1D8h]
  const google::protobuf::RepeatedPtrField<proto::AppleGiftCardProductBin> *__for_range_5; // [rsp+A0h] [rbp-1D0h]
  const google::protobuf::RepeatedPtrField<proto::PsnCompensationProductBin> *__for_range_6; // [rsp+A8h] [rbp-1C8h]
  const google::protobuf::RepeatedPtrField<proto::OrderNotifySaveBin> *__for_range_7; // [rsp+B0h] [rbp-1C0h]
  const proto::OrderNotifySaveBin *order_notify_bin; // [rsp+B8h] [rbp-1B8h]
  std::map<unsigned int,proto::OrderFinishNotify> *notify_map; // [rsp+C0h] [rbp-1B0h]
  const google::protobuf::RepeatedPtrField<proto::OrderFinishNotifyBin> *__for_range_8; // [rsp+C8h] [rbp-1A8h]
  const proto::OrderFinishNotifyBin *order_notify; // [rsp+D0h] [rbp-1A0h]
  const google::protobuf::RepeatedPtrField<proto::OrderFinishNotifyItemBin> *__for_range_9; // [rsp+D8h] [rbp-198h]
  const proto::OrderFinishNotifyItemBin *item; // [rsp+E0h] [rbp-190h]
  proto::ItemParam *client_item; // [rsp+E8h] [rbp-188h]
  const proto::PsnCompensationProductBin *product_bin_2; // [rsp+F0h] [rbp-180h]
  PsnCompensationProductData *product_data_2; // [rsp+F8h] [rbp-178h]
  const proto::AppleGiftCardProductBin *product_bin_1; // [rsp+100h] [rbp-170h]
  AppleGiftCardProductData *product_data_1; // [rsp+108h] [rbp-168h]
  const proto::ConcertProductBin *product_bin_0; // [rsp+110h] [rbp-160h]
  ConcertProductData *product_data_0; // [rsp+118h] [rbp-158h]
  const proto::GoogleGiftCardProductBin *product_bin; // [rsp+120h] [rbp-150h]
  GoogleGiftCardProductData *product_data; // [rsp+128h] [rbp-148h]
  const proto::CardProductConfigBin *card_bin; // [rsp+130h] [rbp-140h]
  CardProductData *card_data; // [rsp+138h] [rbp-138h]
  const proto::McoinProductConfigBin *mcoin_bin; // [rsp+140h] [rbp-130h]
  McoinProductData *mcoin_data; // [rsp+148h] [rbp-128h]
  const unsigned int *p_order_id_0; // [rsp+150h] [rbp-120h]
  const unsigned int *p_order_id; // [rsp+158h] [rbp-118h]
  google::protobuf::Map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+160h] [rbp-110h] BYREF
  google::protobuf::Map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+180h] [rbp-F0h] BYREF
  common::milog::MiLogStream v127; // [rsp+1A0h] [rbp-D0h] BYREF
  char v128[176]; // [rsp+1C0h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v128;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 64 17 client_notify:137";
  *(_QWORD *)(v2 + 16) = PlayerRechargeComp::fromBin;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450892) = -202116109;
  proto_comp = proto::PlayerDataBin::recharge_bin(player_data_bin);
  std::unordered_map<unsigned int,unsigned int>::clear(&this->wait_mark_db_map_);
  __for_range = proto::PlayerRechargeCompBin::wait_mark_db_map(proto_comp);
  google::protobuf::Map<unsigned int,unsigned int>::begin(&__for_begin, __for_range);
  google::protobuf::Map<unsigned int,unsigned int>::end(&__for_end, __for_range);
  while ( google::protobuf::operator!=(&__for_begin, &__for_end) )
  {
    p_order_id = (const unsigned int *)google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator*(&__for_begin);
    v5 = (unsigned __int64)(p_order_id + 1);
    if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) != 0 && (char)((v5 & 7) + 3) >= *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
      __asan_report_load4(v5);
    v6 = p_order_id[1];
    v7 = p_order_id;
    v8 = std::unordered_map<unsigned int,unsigned int>::operator[](&this->wait_mark_db_map_, p_order_id);
    v9 = v8;
    v10 = *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000);
    if ( v10 != 0 && (char)(((unsigned __int8)v8 & 7) + 3) >= v10 )
    {
      LOBYTE(v7) = v10 != 0;
      __asan_report_store4(v8, v7, (_BYTE)v8);
    }
    *v9 = v6;
    google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator++(&__for_begin);
  }
  now = common::tools::TimeUtils::getNow();
  std::unordered_map<unsigned int,unsigned int>::clear(&this->finished_order_map_);
  __for_range_0 = proto::PlayerRechargeCompBin::finished_order_map(proto_comp);
  google::protobuf::Map<unsigned int,unsigned int>::begin(&__for_begin, __for_range_0);
  google::protobuf::Map<unsigned int,unsigned int>::end(&__for_end, __for_range_0);
  while ( google::protobuf::operator!=(&__for_begin, &__for_end) )
  {
    p_order_id_0 = (const unsigned int *)google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator*(&__for_begin);
    v11 = (unsigned __int64)(p_order_id_0 + 1);
    if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) != 0 && (char)((v11 & 7) + 3) >= *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
      __asan_report_load4(v11);
    if ( now <= p_order_id_0[1] + 1209600 )
    {
      v12 = p_order_id_0[1];
      v13 = p_order_id_0;
      v14 = std::unordered_map<unsigned int,unsigned int>::operator[](&this->finished_order_map_, p_order_id_0);
      v15 = v14;
      v16 = *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000);
      if ( v16 != 0 && (char)(((unsigned __int8)v14 & 7) + 3) >= v16 )
      {
        LOBYTE(v13) = v16 != 0;
        __asan_report_store4(v14, v13, (_BYTE)v14);
      }
      *v15 = v12;
    }
    google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator++(&__for_begin);
  }
  std::unordered_map<unsigned int,McoinProductData>::clear(&this->mcoin_product_map_);
  __for_range_1 = proto::PlayerRechargeCompBin::mcoin_product_list(proto_comp);
  __for_begin_0.it_ = google::protobuf::RepeatedPtrField<proto::McoinProductConfigBin>::begin(__for_range_1).it_;
  __for_end_0.it_ = google::protobuf::RepeatedPtrField<proto::McoinProductConfigBin>::end(__for_range_1).it_;
  while ( 1 )
  {
    p_for_end_0 = &__for_end_0;
    if ( !google::protobuf::internal::RepeatedPtrIterator<proto::McoinProductConfigBin const>::operator!=(
            &__for_begin_0,
            &__for_end_0) )
      break;
    mcoin_bin = google::protobuf::internal::RepeatedPtrIterator<proto::McoinProductConfigBin const>::operator*(&__for_begin_0);
    __k = proto::McoinProductConfigBin::config_id(mcoin_bin);
    p_k = &__k;
    mcoin_data = std::unordered_map<unsigned int,McoinProductData>::operator[](&this->mcoin_product_map_, &__k);
    buy_time = proto::McoinProductConfigBin::last_buy_time(mcoin_bin);
    v20 = *(_BYTE *)(((unsigned __int64)mcoin_data >> 3) + 0x7FFF8000);
    if ( v20 != 0 && v20 <= 3 )
    {
      LOBYTE(p_k) = v20 != 0;
      __asan_report_store4(mcoin_data, p_k, buy_time);
    }
    mcoin_data->last_buy_time = buy_time;
    v21 = proto::McoinProductConfigBin::buy_times(mcoin_bin);
    v22 = *(_BYTE *)(((unsigned __int64)&mcoin_data->buy_times >> 3) + 0x7FFF8000);
    LOBYTE(p_k) = v22 != 0;
    v23 = v22 != 0 && (char)((((_BYTE)mcoin_data + 4) & 7) + 3) >= v22;
    if ( v23 )
      __asan_report_store4(&mcoin_data->buy_times, p_k, v23);
    mcoin_data->buy_times = v21;
    p_product_id_set = &mcoin_data->product_id_set;
    v25 = proto::McoinProductConfigBin::product_id_list[abi:cxx11](mcoin_bin);
    it = google::protobuf::RepeatedPtrField<std::string>::cend(v25).it_;
    v27 = proto::McoinProductConfigBin::product_id_list[abi:cxx11](mcoin_bin);
    v28.it_ = google::protobuf::RepeatedPtrField<std::string>::cbegin(v27).it_;
    std::set<std::string>::insert<google::protobuf::internal::RepeatedPtrIterator<std::string const>>(
      p_product_id_set,
      v28,
      (google::protobuf::internal::RepeatedPtrIterator<const std::string >)it);
    google::protobuf::internal::RepeatedPtrIterator<proto::McoinProductConfigBin const>::operator++(&__for_begin_0);
  }
  refreshed = proto::PlayerRechargeCompBin::mcoin_product_refresh_time(proto_comp);
  v30 = *(_BYTE *)(((unsigned __int64)&this->mcoin_product_refresh_time_ >> 3) + 0x7FFF8000);
  if ( v30 != 0 && v30 <= 3 )
  {
    LOBYTE(p_for_end_0) = v30 != 0;
    __asan_report_store4(&this->mcoin_product_refresh_time_, p_for_end_0, refreshed);
  }
  this->mcoin_product_refresh_time_ = refreshed;
  std::unordered_map<unsigned int,CardProductData>::clear(&this->card_product_map_);
  __for_range_2 = proto::PlayerRechargeCompBin::card_product_list(proto_comp);
  __for_begin_0.it_ = google::protobuf::RepeatedPtrField<proto::CardProductConfigBin>::begin(__for_range_2).it_;
  __for_end_0.it_ = google::protobuf::RepeatedPtrField<proto::CardProductConfigBin>::end(__for_range_2).it_;
  while ( 1 )
  {
    v31 = &__for_end_0;
    if ( !google::protobuf::internal::RepeatedPtrIterator<proto::CardProductConfigBin const>::operator!=(
            (const google::protobuf::internal::RepeatedPtrIterator<const proto::CardProductConfigBin> *const)&__for_begin_0,
            (const google::protobuf::internal::RepeatedPtrIterator<const proto::CardProductConfigBin>::iterator *)&__for_end_0) )
      break;
    card_bin = google::protobuf::internal::RepeatedPtrIterator<proto::CardProductConfigBin const>::operator*((const google::protobuf::internal::RepeatedPtrIterator<const proto::CardProductConfigBin> *const)&__for_begin_0);
    __k = proto::CardProductConfigBin::config_id(card_bin);
    v32 = &__k;
    card_data = std::unordered_map<unsigned int,CardProductData>::operator[](&this->card_product_map_, &__k);
    daily_reward_time = proto::CardProductConfigBin::last_daily_reward_time(card_bin);
    v34 = *(_BYTE *)(((unsigned __int64)card_data >> 3) + 0x7FFF8000);
    if ( v34 != 0 && v34 <= 3 )
    {
      LOBYTE(v32) = v34 != 0;
      __asan_report_store4(card_data, v32, daily_reward_time);
    }
    card_data->last_daily_reward_time = daily_reward_time;
    v35 = proto::CardProductConfigBin::take_effect_time(card_bin);
    v36 = *(_BYTE *)(((unsigned __int64)&card_data->take_effect_time >> 3) + 0x7FFF8000);
    LOBYTE(v32) = v36 != 0;
    v37 = v36 != 0 && (char)((((_BYTE)card_data + 4) & 7) + 3) >= v36;
    if ( v37 )
      __asan_report_store4(&card_data->take_effect_time, v32, v37);
    card_data->take_effect_time = v35;
    v38 = proto::CardProductConfigBin::expire_time(card_bin);
    v39 = *(_BYTE *)(((unsigned __int64)&card_data->expire_time >> 3) + 0x7FFF8000);
    if ( v39 != 0 && v39 <= 3 )
    {
      LOBYTE(v32) = v39 != 0;
      __asan_report_store4(&card_data->expire_time, v32, v38);
    }
    card_data->expire_time = v38;
    v40 = &card_data->product_id_set;
    v41 = proto::CardProductConfigBin::product_id_list[abi:cxx11](card_bin);
    v42 = google::protobuf::RepeatedPtrField<std::string>::cend(v41).it_;
    v43 = proto::CardProductConfigBin::product_id_list[abi:cxx11](card_bin);
    v44 = google::protobuf::RepeatedPtrField<std::string>::cbegin(v43).it_;
    std::set<std::string>::insert<google::protobuf::internal::RepeatedPtrIterator<std::string const>>(
      v40,
      (google::protobuf::internal::RepeatedPtrIterator<const std::string >)v44,
      (google::protobuf::internal::RepeatedPtrIterator<const std::string >)v42);
    send_remind_mail_time = proto::CardProductConfigBin::last_send_remind_mail_time(card_bin);
    v46 = *(_BYTE *)(((unsigned __int64)&card_data->last_send_remind_mail_time >> 3) + 0x7FFF8000);
    if ( v46 != 0 && v46 <= 3 )
    {
      LOBYTE(v44) = v46 != 0;
      __asan_report_store4(&card_data->last_send_remind_mail_time, v44, send_remind_mail_time);
    }
    card_data->last_send_remind_mail_time = send_remind_mail_time;
    google::protobuf::internal::RepeatedPtrIterator<proto::CardProductConfigBin const>::operator++((google::protobuf::internal::RepeatedPtrIterator<const proto::CardProductConfigBin> *const)&__for_begin_0);
  }
  v47 = proto::PlayerRechargeCompBin::vip_point(proto_comp);
  v48 = *(_BYTE *)(((unsigned __int64)&this->vip_point_ >> 3) + 0x7FFF8000);
  if ( v48 != 0 && v48 <= 3 )
  {
    LOBYTE(v31) = v48 != 0;
    __asan_report_store4(&this->vip_point_, v31, v47);
  }
  this->vip_point_ = v47;
  std::unordered_set<std::string>::clear(&this->ps4_package_product_set_);
  ps4_package_product_list = proto::PlayerRechargeCompBin::ps4_package_product_list[abi:cxx11](proto_comp);
  v49 = google::protobuf::RepeatedPtrField<std::string>::cend(ps4_package_product_list).it_;
  v50.it_ = google::protobuf::RepeatedPtrField<std::string>::cbegin(ps4_package_product_list).it_;
  std::unordered_set<std::string>::insert<google::protobuf::internal::RepeatedPtrIterator<std::string const>>(
    &this->ps4_package_product_set_,
    v50,
    (google::protobuf::internal::RepeatedPtrIterator<const std::string >)v49);
  std::unordered_map<unsigned int,GoogleGiftCardProductData>::clear(&this->google_gift_card_product_map_);
  __for_range_3 = proto::PlayerRechargeCompBin::google_gift_card_list(proto_comp);
  __for_begin_0.it_ = google::protobuf::RepeatedPtrField<proto::GoogleGiftCardProductBin>::begin(__for_range_3).it_;
  __for_end_0.it_ = google::protobuf::RepeatedPtrField<proto::GoogleGiftCardProductBin>::end(__for_range_3).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::GoogleGiftCardProductBin const>::operator!=(
            (const google::protobuf::internal::RepeatedPtrIterator<const proto::GoogleGiftCardProductBin> *const)&__for_begin_0,
            (const google::protobuf::internal::RepeatedPtrIterator<const proto::GoogleGiftCardProductBin>::iterator *)&__for_end_0) )
  {
    product_bin = google::protobuf::internal::RepeatedPtrIterator<proto::GoogleGiftCardProductBin const>::operator*((const google::protobuf::internal::RepeatedPtrIterator<const proto::GoogleGiftCardProductBin> *const)&__for_begin_0);
    __k = proto::GoogleGiftCardProductBin::config_id(product_bin);
    v53 = &__k;
    product_data = std::unordered_map<unsigned int,GoogleGiftCardProductData>::operator[](
                     &this->google_gift_card_product_map_,
                     &__k);
    v51 = proto::GoogleGiftCardProductBin::buy_times(product_bin);
    v52 = *(_BYTE *)(((unsigned __int64)product_data >> 3) + 0x7FFF8000);
    LOBYTE(v53) = v52 != 0;
    v54 = v52 != 0 && (char)(((unsigned __int8)product_data & 7) + 3) >= v52;
    if ( v54 )
      __asan_report_store4(product_data, v53, v54);
    product_data->buy_times = v51;
    google::protobuf::internal::RepeatedPtrIterator<proto::GoogleGiftCardProductBin const>::operator++((google::protobuf::internal::RepeatedPtrIterator<const proto::GoogleGiftCardProductBin> *const)&__for_begin_0);
  }
  std::unordered_map<unsigned int,ConcertProductData>::clear(&this->concert_product_map_);
  __for_range_4 = proto::PlayerRechargeCompBin::concert_product_list(proto_comp);
  __for_begin_0.it_ = google::protobuf::RepeatedPtrField<proto::ConcertProductBin>::begin(__for_range_4).it_;
  __for_end_0.it_ = google::protobuf::RepeatedPtrField<proto::ConcertProductBin>::end(__for_range_4).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::ConcertProductBin const>::operator!=(
            (const google::protobuf::internal::RepeatedPtrIterator<const proto::ConcertProductBin> *const)&__for_begin_0,
            (const google::protobuf::internal::RepeatedPtrIterator<const proto::ConcertProductBin>::iterator *)&__for_end_0) )
  {
    product_bin_0 = google::protobuf::internal::RepeatedPtrIterator<proto::ConcertProductBin const>::operator*((const google::protobuf::internal::RepeatedPtrIterator<const proto::ConcertProductBin> *const)&__for_begin_0);
    __k = proto::ConcertProductBin::config_id(product_bin_0);
    v55 = &__k;
    product_data_0 = std::unordered_map<unsigned int,ConcertProductData>::operator[](&this->concert_product_map_, &__k);
    v56 = proto::ConcertProductBin::buy_times(product_bin_0);
    v57 = *(_BYTE *)(((unsigned __int64)product_data_0 >> 3) + 0x7FFF8000);
    if ( v57 != 0 && v57 <= 3 )
    {
      LOBYTE(v55) = v57 != 0;
      __asan_report_store4(product_data_0, v55, v56);
    }
    product_data_0->buy_times = v56;
    v58 = proto::ConcertProductBin::ticket_list[abi:cxx11](product_bin_0);
    common::tools::MiscUtils::fromRepeated<std::string,std::string>(&product_data_0->ticket_vec, v58);
    google::protobuf::internal::RepeatedPtrIterator<proto::ConcertProductBin const>::operator++((google::protobuf::internal::RepeatedPtrIterator<const proto::ConcertProductBin> *const)&__for_begin_0);
  }
  std::unordered_map<unsigned int,AppleGiftCardProductData>::clear(&this->apple_gift_card_product_map_);
  __for_range_5 = proto::PlayerRechargeCompBin::apple_gift_card_list(proto_comp);
  __for_begin_0.it_ = google::protobuf::RepeatedPtrField<proto::AppleGiftCardProductBin>::begin(__for_range_5).it_;
  __for_end_0.it_ = google::protobuf::RepeatedPtrField<proto::AppleGiftCardProductBin>::end(__for_range_5).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::AppleGiftCardProductBin const>::operator!=(
            (const google::protobuf::internal::RepeatedPtrIterator<const proto::AppleGiftCardProductBin> *const)&__for_begin_0,
            (const google::protobuf::internal::RepeatedPtrIterator<const proto::AppleGiftCardProductBin>::iterator *)&__for_end_0) )
  {
    product_bin_1 = google::protobuf::internal::RepeatedPtrIterator<proto::AppleGiftCardProductBin const>::operator*((const google::protobuf::internal::RepeatedPtrIterator<const proto::AppleGiftCardProductBin> *const)&__for_begin_0);
    __k = proto::AppleGiftCardProductBin::config_id(product_bin_1);
    v61 = &__k;
    product_data_1 = std::unordered_map<unsigned int,AppleGiftCardProductData>::operator[](
                       &this->apple_gift_card_product_map_,
                       &__k);
    v59 = proto::AppleGiftCardProductBin::buy_times(product_bin_1);
    v60 = *(_BYTE *)(((unsigned __int64)product_data_1 >> 3) + 0x7FFF8000);
    LOBYTE(v61) = v60 != 0;
    v62 = v60 != 0 && (char)(((unsigned __int8)product_data_1 & 7) + 3) >= v60;
    if ( v62 )
      __asan_report_store4(product_data_1, v61, v62);
    product_data_1->buy_times = v59;
    google::protobuf::internal::RepeatedPtrIterator<proto::AppleGiftCardProductBin const>::operator++((google::protobuf::internal::RepeatedPtrIterator<const proto::AppleGiftCardProductBin> *const)&__for_begin_0);
  }
  std::unordered_map<unsigned int,PsnCompensationProductData>::clear(&this->psn_compensation_product_map_);
  __for_range_6 = proto::PlayerRechargeCompBin::psn_compensation_product_list(proto_comp);
  __for_begin_0.it_ = google::protobuf::RepeatedPtrField<proto::PsnCompensationProductBin>::begin(__for_range_6).it_;
  __for_end_0.it_ = google::protobuf::RepeatedPtrField<proto::PsnCompensationProductBin>::end(__for_range_6).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::PsnCompensationProductBin const>::operator!=(
            (const google::protobuf::internal::RepeatedPtrIterator<const proto::PsnCompensationProductBin> *const)&__for_begin_0,
            (const google::protobuf::internal::RepeatedPtrIterator<const proto::PsnCompensationProductBin>::iterator *)&__for_end_0) )
  {
    product_bin_2 = google::protobuf::internal::RepeatedPtrIterator<proto::PsnCompensationProductBin const>::operator*((const google::protobuf::internal::RepeatedPtrIterator<const proto::PsnCompensationProductBin> *const)&__for_begin_0);
    __k = proto::PsnCompensationProductBin::config_id(product_bin_2);
    v65 = &__k;
    product_data_2 = std::unordered_map<unsigned int,PsnCompensationProductData>::operator[](
                       &this->psn_compensation_product_map_,
                       &__k);
    v63 = proto::PsnCompensationProductBin::buy_times(product_bin_2);
    v64 = *(_BYTE *)(((unsigned __int64)product_data_2 >> 3) + 0x7FFF8000);
    LOBYTE(v65) = v64 != 0;
    v66 = v64 != 0 && (char)(((unsigned __int8)product_data_2 & 7) + 3) >= v64;
    if ( v66 )
      __asan_report_store4(product_data_2, v65, v66);
    product_data_2->buy_times = v63;
    v67 = proto::PsnCompensationProductBin::last_buy_time(product_bin_2);
    v68 = *(_BYTE *)(((unsigned __int64)&product_data_2->last_buy_time >> 3) + 0x7FFF8000);
    LOBYTE(v65) = v68 != 0;
    v69 = v68 != 0 && (char)((((_BYTE)product_data_2 + 4) & 7) + 3) >= v68;
    if ( v69 )
      __asan_report_store4(&product_data_2->last_buy_time, v65, v69);
    product_data_2->last_buy_time = v67;
    v70 = proto::PsnCompensationProductBin::month_buy_times(product_bin_2);
    v71 = *(_BYTE *)(((unsigned __int64)&product_data_2->month_buy_times >> 3) + 0x7FFF8000);
    LOBYTE(v65) = v71 != 0;
    v72 = v71 != 0 && (char)((((_BYTE)product_data_2 + 8) & 7) + 3) >= v71;
    if ( v72 )
      __asan_report_store4(&product_data_2->month_buy_times, v65, v72);
    product_data_2->month_buy_times = v70;
    v73 = proto::PsnCompensationProductBin::month_last_buy_time(product_bin_2);
    v74 = *(_BYTE *)(((unsigned __int64)&product_data_2->month_last_buy_time >> 3) + 0x7FFF8000);
    LOBYTE(v65) = v74 != 0;
    v75 = v74 != 0 && (char)((((_BYTE)product_data_2 + 12) & 7) + 3) >= v74;
    if ( v75 )
      __asan_report_store4(&product_data_2->month_last_buy_time, v65, v75);
    product_data_2->month_last_buy_time = v73;
    google::protobuf::internal::RepeatedPtrIterator<proto::PsnCompensationProductBin const>::operator++((google::protobuf::internal::RepeatedPtrIterator<const proto::PsnCompensationProductBin> *const)&__for_begin_0);
  }
  std::unordered_map<unsigned int,std::map<unsigned int,proto::OrderFinishNotify>>::clear(&this->saved_order_notify_map_);
  __for_range_7 = proto::PlayerRechargeCompBin::order_notify_save_list(proto_comp);
  __for_begin_1.it_ = google::protobuf::RepeatedPtrField<proto::OrderNotifySaveBin>::begin(__for_range_7).it_;
  __for_end_1.it_ = google::protobuf::RepeatedPtrField<proto::OrderNotifySaveBin>::end(__for_range_7).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::OrderNotifySaveBin const>::operator!=(
            &__for_begin_1,
            &__for_end_1) )
  {
    order_notify_bin = google::protobuf::internal::RepeatedPtrIterator<proto::OrderNotifySaveBin const>::operator*(&__for_begin_1);
    __k = proto::OrderNotifySaveBin::platform_type(order_notify_bin);
    notify_map = std::unordered_map<unsigned int,std::map<unsigned int,proto::OrderFinishNotify>>::operator[](
                   &this->saved_order_notify_map_,
                   &__k);
    __for_range_8 = proto::OrderNotifySaveBin::order_notify_list(order_notify_bin);
    __for_begin_2.it_ = google::protobuf::RepeatedPtrField<proto::OrderFinishNotifyBin>::begin(__for_range_8).it_;
    __for_end_2.it_ = google::protobuf::RepeatedPtrField<proto::OrderFinishNotifyBin>::end(__for_range_8).it_;
    while ( google::protobuf::internal::RepeatedPtrIterator<proto::OrderFinishNotifyBin const>::operator!=(
              &__for_begin_2,
              &__for_end_2) )
    {
      order_notify = google::protobuf::internal::RepeatedPtrIterator<proto::OrderFinishNotifyBin const>::operator*(&__for_begin_2);
      proto::OrderFinishNotify::OrderFinishNotify((proto::OrderFinishNotify *const)(v2 + 32));
      v76 = proto::OrderFinishNotifyBin::product_id[abi:cxx11](order_notify);
      proto::OrderFinishNotify::set_product_id((proto::OrderFinishNotify *const)(v2 + 32), v76);
      v77 = proto::OrderFinishNotifyBin::add_mcoin(order_notify);
      proto::OrderFinishNotify::set_add_mcoin((proto::OrderFinishNotify *const)(v2 + 32), v77);
      v78 = proto::OrderFinishNotifyBin::card_product_remain_days(order_notify);
      proto::OrderFinishNotify::set_card_product_remain_days((proto::OrderFinishNotify *const)(v2 + 32), v78);
      v79 = proto::OrderFinishNotifyBin::order_id(order_notify);
      proto::OrderFinishNotify::set_order_id((proto::OrderFinishNotify *const)(v2 + 32), v79);
      __for_range_9 = proto::OrderFinishNotifyBin::item_list(order_notify);
      __for_begin_0.it_ = google::protobuf::RepeatedPtrField<proto::OrderFinishNotifyItemBin>::begin(__for_range_9).it_;
      __for_end_0.it_ = google::protobuf::RepeatedPtrField<proto::OrderFinishNotifyItemBin>::end(__for_range_9).it_;
      while ( google::protobuf::internal::RepeatedPtrIterator<proto::OrderFinishNotifyItemBin const>::operator!=(
                (const google::protobuf::internal::RepeatedPtrIterator<const proto::OrderFinishNotifyItemBin> *const)&__for_begin_0,
                (const google::protobuf::internal::RepeatedPtrIterator<const proto::OrderFinishNotifyItemBin>::iterator *)&__for_end_0) )
      {
        item = google::protobuf::internal::RepeatedPtrIterator<proto::OrderFinishNotifyItemBin const>::operator*((const google::protobuf::internal::RepeatedPtrIterator<const proto::OrderFinishNotifyItemBin> *const)&__for_begin_0);
        client_item = proto::OrderFinishNotify::add_item_list((proto::OrderFinishNotify *const)(v2 + 32));
        v80 = proto::OrderFinishNotifyItemBin::item_id(item);
        proto::ItemParam::set_item_id(client_item, v80);
        v81 = proto::OrderFinishNotifyItemBin::count(item);
        proto::ItemParam::set_count(client_item, v81);
        google::protobuf::internal::RepeatedPtrIterator<proto::OrderFinishNotifyItemBin const>::operator++((google::protobuf::internal::RepeatedPtrIterator<const proto::OrderFinishNotifyItemBin> *const)&__for_begin_0);
      }
      __k = proto::OrderFinishNotify::order_id((const proto::OrderFinishNotify *const)(v2 + 32));
      v83 = std::map<unsigned int,proto::OrderFinishNotify>::emplace<unsigned int,proto::OrderFinishNotify&>(
              notify_map,
              &__k,
              (proto::OrderFinishNotify *)(v2 + 32),
              &__k,
              v82);
      if ( !v83.second )
      {
        common::milog::MiLogStream::create(
          &v127,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/recharge/player_recharge_comp.cpp",
          "fromBin",
          150);
        common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
          &v127,
          (const char (*)[26])" notify order duplicated!");
        common::milog::MiLogStream::~MiLogStream(&v127);
      }
      proto::OrderFinishNotify::~OrderFinishNotify((proto::OrderFinishNotify *const)(v2 + 32));
      google::protobuf::internal::RepeatedPtrIterator<proto::OrderFinishNotifyBin const>::operator++(&__for_begin_2);
    }
    google::protobuf::internal::RepeatedPtrIterator<proto::OrderNotifySaveBin const>::operator++(&__for_begin_1);
  }
  result = 0;
  if ( v128 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 158: range 0000000013E1CF46-0000000013E1E2F1
int32_t __cdecl PlayerRechargeComp::toBin(PlayerRechargeComp *const this, proto::PlayerDataBin *player_data_bin)
{
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v2; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type v3; // ebx
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *v4; // rsi
  unsigned int *v5; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v6; // rdx
  char v7; // cl
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v8; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type v9; // ebx
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *v10; // rsi
  unsigned int *v11; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v12; // rdx
  char v13; // cl
  std::string *v14; // rax
  google::protobuf::RepeatedPtrField<std::string > *v15; // rax
  const std::string *v16; // rax
  google::protobuf::uint32 v17; // eax
  google::protobuf::uint32 v18; // eax
  google::protobuf::uint32 v19; // eax
  google::protobuf::uint32 v20; // eax
  google::protobuf::uint32 v21; // eax
  std::unordered_map<unsigned int,std::map<unsigned int,proto::OrderFinishNotify>>::iterator __for_begin_1; // [rsp+10h] [rbp-220h] BYREF
  std::unordered_map<unsigned int,std::map<unsigned int,proto::OrderFinishNotify>>::iterator __for_end_1; // [rsp+18h] [rbp-218h] BYREF
  std::unordered_map<unsigned int,McoinProductData>::iterator __for_begin_0; // [rsp+20h] [rbp-210h] BYREF
  std::unordered_map<unsigned int,McoinProductData>::iterator __for_end_0; // [rsp+28h] [rbp-208h] BYREF
  std::unordered_map<unsigned int,unsigned int>::iterator __for_begin; // [rsp+30h] [rbp-200h] BYREF
  std::unordered_map<unsigned int,unsigned int>::iterator __for_end; // [rsp+38h] [rbp-1F8h] BYREF
  proto::PlayerRechargeCompBin *proto_comp; // [rsp+40h] [rbp-1F0h]
  google::protobuf::Map<unsigned int,unsigned int> *proto_finished_order_map; // [rsp+48h] [rbp-1E8h]
  std::unordered_map<unsigned int,unsigned int> *__for_range; // [rsp+50h] [rbp-1E0h]
  google::protobuf::Map<unsigned int,unsigned int> *proto_wait_mark_db_map; // [rsp+58h] [rbp-1D8h]
  std::unordered_map<unsigned int,unsigned int> *__for_range_0; // [rsp+60h] [rbp-1D0h]
  std::unordered_map<unsigned int,McoinProductData> *__for_range_1; // [rsp+68h] [rbp-1C8h]
  std::unordered_map<unsigned int,CardProductData> *__for_range_3; // [rsp+70h] [rbp-1C0h]
  std::unordered_set<std::string> *__for_range_5; // [rsp+78h] [rbp-1B8h]
  std::unordered_map<unsigned int,GoogleGiftCardProductData> *__for_range_6; // [rsp+80h] [rbp-1B0h]
  std::unordered_map<unsigned int,ConcertProductData> *__for_range_7; // [rsp+88h] [rbp-1A8h]
  std::unordered_map<unsigned int,AppleGiftCardProductData> *__for_range_8; // [rsp+90h] [rbp-1A0h]
  std::unordered_map<unsigned int,PsnCompensationProductData> *__for_range_9; // [rsp+98h] [rbp-198h]
  std::unordered_map<unsigned int,std::map<unsigned int,proto::OrderFinishNotify>> *__for_range_10; // [rsp+A0h] [rbp-190h]
  const std::pair<unsigned int const,std::map<unsigned int,proto::OrderFinishNotify> > *v42; // [rsp+A8h] [rbp-188h]
  std::tuple_element<0,const std::pair<unsigned int const,std::map<unsigned int,proto::OrderFinishNotify> > >::type *platform_type; // [rsp+B0h] [rbp-180h]
  std::tuple_element<1,const std::pair<unsigned int const,std::map<unsigned int,proto::OrderFinishNotify> > >::type *order_notify_map; // [rsp+B8h] [rbp-178h]
  proto::OrderNotifySaveBin *order_notify_bin; // [rsp+C0h] [rbp-170h]
  const std::map<unsigned int,proto::OrderFinishNotify> *__for_range_11; // [rsp+C8h] [rbp-168h]
  const std::pair<unsigned int const,proto::OrderFinishNotify> *v47; // [rsp+D0h] [rbp-160h]
  std::tuple_element<0,const std::pair<unsigned int const,proto::OrderFinishNotify> >::type *_; // [rsp+D8h] [rbp-158h]
  std::tuple_element<1,const std::pair<unsigned int const,proto::OrderFinishNotify> >::type *order_notify; // [rsp+E0h] [rbp-150h]
  proto::OrderFinishNotifyBin *notify_bin; // [rsp+E8h] [rbp-148h]
  const google::protobuf::RepeatedPtrField<proto::ItemParam> *__for_range_12; // [rsp+F0h] [rbp-140h]
  const proto::ItemParam *item; // [rsp+F8h] [rbp-138h]
  proto::OrderFinishNotifyItemBin *item_bin; // [rsp+100h] [rbp-130h]
  const std::pair<unsigned int const,PsnCompensationProductData> *v54; // [rsp+108h] [rbp-128h]
  std::tuple_element<0,const std::pair<unsigned int const,PsnCompensationProductData> >::type *config_id_4; // [rsp+110h] [rbp-120h]
  std::tuple_element<1,const std::pair<unsigned int const,PsnCompensationProductData> >::type *product_data_2; // [rsp+118h] [rbp-118h]
  proto::PsnCompensationProductBin *product_bin_2; // [rsp+120h] [rbp-110h]
  const std::pair<unsigned int const,AppleGiftCardProductData> *v58; // [rsp+128h] [rbp-108h]
  std::tuple_element<0,const std::pair<unsigned int const,AppleGiftCardProductData> >::type *config_id_3; // [rsp+130h] [rbp-100h]
  std::tuple_element<1,const std::pair<unsigned int const,AppleGiftCardProductData> >::type *product_data_1; // [rsp+138h] [rbp-F8h]
  proto::AppleGiftCardProductBin *product_bin_1; // [rsp+140h] [rbp-F0h]
  const std::pair<unsigned int const,ConcertProductData> *v62; // [rsp+148h] [rbp-E8h]
  std::tuple_element<0,const std::pair<unsigned int const,ConcertProductData> >::type *config_id_2; // [rsp+150h] [rbp-E0h]
  std::tuple_element<1,const std::pair<unsigned int const,ConcertProductData> >::type *product_data_0; // [rsp+158h] [rbp-D8h]
  proto::ConcertProductBin *product_bin_0; // [rsp+160h] [rbp-D0h]
  const std::pair<unsigned int const,GoogleGiftCardProductData> *v66; // [rsp+168h] [rbp-C8h]
  std::tuple_element<0,const std::pair<unsigned int const,GoogleGiftCardProductData> >::type *config_id_1; // [rsp+170h] [rbp-C0h]
  std::tuple_element<1,const std::pair<unsigned int const,GoogleGiftCardProductData> >::type *product_data; // [rsp+178h] [rbp-B8h]
  proto::GoogleGiftCardProductBin *product_bin; // [rsp+180h] [rbp-B0h]
  const std::string *product_id_1; // [rsp+188h] [rbp-A8h]
  const std::pair<unsigned int const,CardProductData> *v71; // [rsp+190h] [rbp-A0h]
  std::tuple_element<0,const std::pair<unsigned int const,CardProductData> >::type *config_id_0; // [rsp+198h] [rbp-98h]
  std::tuple_element<1,const std::pair<unsigned int const,CardProductData> >::type *card_data; // [rsp+1A0h] [rbp-90h]
  proto::CardProductConfigBin *card_bin; // [rsp+1A8h] [rbp-88h]
  const std::set<std::string> *__for_range_4; // [rsp+1B0h] [rbp-80h]
  const std::string *product_id_0; // [rsp+1B8h] [rbp-78h]
  const std::pair<unsigned int const,McoinProductData> *v77; // [rsp+1C0h] [rbp-70h]
  std::tuple_element<0,const std::pair<unsigned int const,McoinProductData> >::type *config_id; // [rsp+1C8h] [rbp-68h]
  std::tuple_element<1,const std::pair<unsigned int const,McoinProductData> >::type *mcoin_data; // [rsp+1D0h] [rbp-60h]
  proto::McoinProductConfigBin *mcoin_bin; // [rsp+1D8h] [rbp-58h]
  const std::set<std::string> *__for_range_2; // [rsp+1E0h] [rbp-50h]
  const std::string *product_id; // [rsp+1E8h] [rbp-48h]
  const std::pair<unsigned int const,unsigned int> *v83; // [rsp+1F0h] [rbp-40h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *order_id_0; // [rsp+1F8h] [rbp-38h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *finish_time_0; // [rsp+200h] [rbp-30h]
  const std::pair<unsigned int const,unsigned int> *v86; // [rsp+208h] [rbp-28h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *order_id; // [rsp+210h] [rbp-20h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *finish_time; // [rsp+218h] [rbp-18h]

  proto_comp = proto::PlayerDataBin::mutable_recharge_bin(player_data_bin);
  proto_finished_order_map = proto::PlayerRechargeCompBin::mutable_finished_order_map(proto_comp);
  __for_range = &this->finished_order_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,unsigned int>::begin(&this->finished_order_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,unsigned int>::end(&this->finished_order_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(&__for_begin, &__for_end) )
  {
    v86 = std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator*(&__for_begin);
    order_id = std::get<0ul,unsigned int const,unsigned int>(v86);
    v2 = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v86);
    finish_time = v2;
    if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v2);
    }
    v3 = *finish_time;
    v4 = order_id;
    v5 = google::protobuf::Map<unsigned int,unsigned int>::operator[](proto_finished_order_map, order_id);
    v6 = v5;
    v7 = *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000);
    if ( v7 != 0 && (char)(((unsigned __int8)v5 & 7) + 3) >= v7 )
    {
      LOBYTE(v4) = v7 != 0;
      __asan_report_store4(v5, v4, (_BYTE)v5);
    }
    *v6 = v3;
    std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator++(&__for_begin);
  }
  proto_wait_mark_db_map = proto::PlayerRechargeCompBin::mutable_wait_mark_db_map(proto_comp);
  __for_range_0 = &this->wait_mark_db_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,unsigned int>::begin(&this->wait_mark_db_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,unsigned int>::end(__for_range_0)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(&__for_begin, &__for_end) )
  {
    v83 = std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator*(&__for_begin);
    order_id_0 = std::get<0ul,unsigned int const,unsigned int>(v83);
    v8 = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v83);
    finish_time_0 = v8;
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v8);
    }
    v9 = *finish_time_0;
    v10 = order_id_0;
    v11 = google::protobuf::Map<unsigned int,unsigned int>::operator[](proto_wait_mark_db_map, order_id_0);
    v12 = v11;
    v13 = *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000);
    if ( v13 != 0 && (char)(((unsigned __int8)v11 & 7) + 3) >= v13 )
    {
      LOBYTE(v10) = v13 != 0;
      __asan_report_store4(v11, v10, (_BYTE)v11);
    }
    *v12 = v9;
    std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator++(&__for_begin);
  }
  __for_range_1 = &this->mcoin_product_map_;
  __for_begin_0._M_cur = std::unordered_map<unsigned int,McoinProductData>::begin(&this->mcoin_product_map_)._M_cur;
  __for_end_0._M_cur = std::unordered_map<unsigned int,McoinProductData>::end(__for_range_1)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,McoinProductData>,false>(&__for_begin_0, &__for_end_0) )
  {
    v77 = std::__detail::_Node_iterator<std::pair<unsigned int const,McoinProductData>,false,false>::operator*(&__for_begin_0);
    config_id = std::get<0ul,unsigned int const,McoinProductData>(v77);
    mcoin_data = (std::tuple_element<1,const std::pair<unsigned int const,McoinProductData> >::type *)std::get<1ul,unsigned int const,McoinProductData>(v77);
    mcoin_bin = proto::PlayerRechargeCompBin::add_mcoin_product_list(proto_comp);
    if ( *(_BYTE *)(((unsigned __int64)config_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)config_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)config_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(config_id);
    }
    proto::McoinProductConfigBin::set_config_id(mcoin_bin, *config_id);
    if ( *(_BYTE *)(((unsigned __int64)mcoin_data >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)mcoin_data >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(mcoin_data);
    }
    proto::McoinProductConfigBin::set_last_buy_time(mcoin_bin, mcoin_data->last_buy_time);
    if ( *(_BYTE *)(((unsigned __int64)&mcoin_data->buy_times >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)mcoin_data + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&mcoin_data->buy_times >> 3)
                                                               + 0x7FFF8000) )
    {
      __asan_report_load4(&mcoin_data->buy_times);
    }
    proto::McoinProductConfigBin::set_buy_times(mcoin_bin, mcoin_data->buy_times);
    __for_range_2 = &mcoin_data->product_id_set;
    __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false>::__node_type *)std::set<std::string>::begin(&mcoin_data->product_id_set)._M_node;
    __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false>::__node_type *)std::set<std::string>::end(__for_range_2)._M_node;
    while ( std::operator!=(
              (const std::_Rb_tree_const_iterator<std::string >::_Self *)&__for_begin,
              (const std::_Rb_tree_const_iterator<std::string >::_Self *)&__for_end) )
    {
      product_id = std::_Rb_tree_const_iterator<std::string>::operator*((const std::_Rb_tree_const_iterator<std::string > *const)&__for_begin);
      proto::McoinProductConfigBin::add_product_id_list(mcoin_bin, product_id);
      std::_Rb_tree_const_iterator<std::string>::operator++((std::_Rb_tree_const_iterator<std::string > *const)&__for_begin);
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,McoinProductData>,false,false>::operator++(&__for_begin_0);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->mcoin_product_refresh_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->mcoin_product_refresh_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->mcoin_product_refresh_time_);
  }
  proto::PlayerRechargeCompBin::set_mcoin_product_refresh_time(proto_comp, this->mcoin_product_refresh_time_);
  __for_range_3 = &this->card_product_map_;
  __for_begin_0._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,McoinProductData>,false>::__node_type *)std::unordered_map<unsigned int,CardProductData>::begin(&this->card_product_map_)._M_cur;
  __for_end_0._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,McoinProductData>,false>::__node_type *)std::unordered_map<unsigned int,CardProductData>::end(__for_range_3)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,CardProductData>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,CardProductData>,false> *)&__for_begin_0,
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,CardProductData>,false> *)&__for_end_0) )
  {
    v71 = std::__detail::_Node_iterator<std::pair<unsigned int const,CardProductData>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,CardProductData>,false,false> *const)&__for_begin_0);
    config_id_0 = std::get<0ul,unsigned int const,CardProductData>(v71);
    card_data = (std::tuple_element<1,const std::pair<unsigned int const,CardProductData> >::type *)std::get<1ul,unsigned int const,CardProductData>(v71);
    card_bin = proto::PlayerRechargeCompBin::add_card_product_list(proto_comp);
    if ( *(_BYTE *)(((unsigned __int64)config_id_0 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)config_id_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)config_id_0 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(config_id_0);
    }
    proto::CardProductConfigBin::set_config_id(card_bin, *config_id_0);
    if ( *(_BYTE *)(((unsigned __int64)card_data >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)card_data >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(card_data);
    }
    proto::CardProductConfigBin::set_last_daily_reward_time(card_bin, card_data->last_daily_reward_time);
    if ( *(_BYTE *)(((unsigned __int64)&card_data->take_effect_time >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)card_data + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&card_data->take_effect_time >> 3)
                                                              + 0x7FFF8000) )
    {
      __asan_report_load4(&card_data->take_effect_time);
    }
    proto::CardProductConfigBin::set_take_effect_time(card_bin, card_data->take_effect_time);
    if ( *(_BYTE *)(((unsigned __int64)&card_data->expire_time >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&card_data->expire_time >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&card_data->expire_time);
    }
    proto::CardProductConfigBin::set_expire_time(card_bin, card_data->expire_time);
    if ( *(_BYTE *)(((unsigned __int64)&card_data->last_send_remind_mail_time >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&card_data->last_send_remind_mail_time >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&card_data->last_send_remind_mail_time);
    }
    proto::CardProductConfigBin::set_last_send_remind_mail_time(card_bin, card_data->last_send_remind_mail_time);
    __for_range_4 = &card_data->product_id_set;
    __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false>::__node_type *)std::set<std::string>::begin(&card_data->product_id_set)._M_node;
    __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false>::__node_type *)std::set<std::string>::end(__for_range_4)._M_node;
    while ( std::operator!=(
              (const std::_Rb_tree_const_iterator<std::string >::_Self *)&__for_begin,
              (const std::_Rb_tree_const_iterator<std::string >::_Self *)&__for_end) )
    {
      product_id_0 = std::_Rb_tree_const_iterator<std::string>::operator*((const std::_Rb_tree_const_iterator<std::string > *const)&__for_begin);
      proto::CardProductConfigBin::add_product_id_list(card_bin, product_id_0);
      std::_Rb_tree_const_iterator<std::string>::operator++((std::_Rb_tree_const_iterator<std::string > *const)&__for_begin);
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,CardProductData>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,CardProductData>,false,false> *const)&__for_begin_0);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->vip_point_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->vip_point_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->vip_point_);
  }
  proto::PlayerRechargeCompBin::set_vip_point(proto_comp, this->vip_point_);
  __for_range_5 = &this->ps4_package_product_set_;
  __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false>::__node_type *)std::unordered_set<std::string>::begin(&this->ps4_package_product_set_)._M_cur;
  __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false>::__node_type *)std::unordered_set<std::string>::end(__for_range_5)._M_cur;
  while ( std::__detail::operator!=<std::string,true>(
            (const std::__detail::_Node_iterator_base<std::string,true> *)&__for_begin,
            (const std::__detail::_Node_iterator_base<std::string,true> *)&__for_end) )
  {
    product_id_1 = std::__detail::_Node_iterator<std::string,true,true>::operator*((const std::__detail::_Node_iterator<std::string,true,true> *const)&__for_begin);
    v14 = proto::PlayerRechargeCompBin::add_ps4_package_product_list[abi:cxx11](proto_comp);
    std::string::operator=(v14, product_id_1);
    std::__detail::_Node_iterator<std::string,true,true>::operator++((std::__detail::_Node_iterator<std::string,true,true> *const)&__for_begin);
  }
  __for_range_6 = &this->google_gift_card_product_map_;
  __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false>::__node_type *)std::unordered_map<unsigned int,GoogleGiftCardProductData>::begin(&this->google_gift_card_product_map_)._M_cur;
  __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false>::__node_type *)std::unordered_map<unsigned int,GoogleGiftCardProductData>::end(__for_range_6)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,GoogleGiftCardProductData>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,GoogleGiftCardProductData>,false> *)&__for_begin,
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,GoogleGiftCardProductData>,false> *)&__for_end) )
  {
    v66 = std::__detail::_Node_iterator<std::pair<unsigned int const,GoogleGiftCardProductData>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,GoogleGiftCardProductData>,false,false> *const)&__for_begin);
    config_id_1 = std::get<0ul,unsigned int const,GoogleGiftCardProductData>(v66);
    product_data = (std::tuple_element<1,const std::pair<unsigned int const,GoogleGiftCardProductData> >::type *)std::get<1ul,unsigned int const,GoogleGiftCardProductData>(v66);
    product_bin = proto::PlayerRechargeCompBin::add_google_gift_card_list(proto_comp);
    if ( *(_BYTE *)(((unsigned __int64)config_id_1 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)config_id_1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)config_id_1 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(config_id_1);
    }
    proto::GoogleGiftCardProductBin::set_config_id(product_bin, *config_id_1);
    if ( *(_BYTE *)(((unsigned __int64)product_data >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)product_data & 7) + 3) >= *(_BYTE *)(((unsigned __int64)product_data >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(product_data);
    }
    proto::GoogleGiftCardProductBin::set_buy_times(product_bin, product_data->buy_times);
    std::__detail::_Node_iterator<std::pair<unsigned int const,GoogleGiftCardProductData>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,GoogleGiftCardProductData>,false,false> *const)&__for_begin);
  }
  __for_range_7 = &this->concert_product_map_;
  __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false>::__node_type *)std::unordered_map<unsigned int,ConcertProductData>::begin(&this->concert_product_map_)._M_cur;
  __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false>::__node_type *)std::unordered_map<unsigned int,ConcertProductData>::end(__for_range_7)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,ConcertProductData>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,ConcertProductData>,false> *)&__for_begin,
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,ConcertProductData>,false> *)&__for_end) )
  {
    v62 = std::__detail::_Node_iterator<std::pair<unsigned int const,ConcertProductData>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,ConcertProductData>,false,false> *const)&__for_begin);
    config_id_2 = std::get<0ul,unsigned int const,ConcertProductData>(v62);
    product_data_0 = (std::tuple_element<1,const std::pair<unsigned int const,ConcertProductData> >::type *)std::get<1ul,unsigned int const,ConcertProductData>(v62);
    product_bin_0 = proto::PlayerRechargeCompBin::add_concert_product_list(proto_comp);
    if ( *(_BYTE *)(((unsigned __int64)config_id_2 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)config_id_2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)config_id_2 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(config_id_2);
    }
    proto::ConcertProductBin::set_config_id(product_bin_0, *config_id_2);
    if ( *(_BYTE *)(((unsigned __int64)product_data_0 >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)product_data_0 >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(product_data_0);
    }
    proto::ConcertProductBin::set_buy_times(product_bin_0, product_data_0->buy_times);
    v15 = proto::ConcertProductBin::mutable_ticket_list[abi:cxx11](product_bin_0);
    common::tools::MiscUtils::toRepeated<std::string,std::string>(&product_data_0->ticket_vec, v15);
    std::__detail::_Node_iterator<std::pair<unsigned int const,ConcertProductData>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,ConcertProductData>,false,false> *const)&__for_begin);
  }
  __for_range_8 = &this->apple_gift_card_product_map_;
  __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false>::__node_type *)std::unordered_map<unsigned int,AppleGiftCardProductData>::begin(&this->apple_gift_card_product_map_)._M_cur;
  __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false>::__node_type *)std::unordered_map<unsigned int,AppleGiftCardProductData>::end(__for_range_8)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,AppleGiftCardProductData>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,AppleGiftCardProductData>,false> *)&__for_begin,
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,AppleGiftCardProductData>,false> *)&__for_end) )
  {
    v58 = std::__detail::_Node_iterator<std::pair<unsigned int const,AppleGiftCardProductData>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,AppleGiftCardProductData>,false,false> *const)&__for_begin);
    config_id_3 = std::get<0ul,unsigned int const,AppleGiftCardProductData>(v58);
    product_data_1 = (std::tuple_element<1,const std::pair<unsigned int const,AppleGiftCardProductData> >::type *)std::get<1ul,unsigned int const,AppleGiftCardProductData>(v58);
    product_bin_1 = proto::PlayerRechargeCompBin::add_apple_gift_card_list(proto_comp);
    if ( *(_BYTE *)(((unsigned __int64)config_id_3 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)config_id_3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)config_id_3 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(config_id_3);
    }
    proto::AppleGiftCardProductBin::set_config_id(product_bin_1, *config_id_3);
    if ( *(_BYTE *)(((unsigned __int64)product_data_1 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)product_data_1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)product_data_1 >> 3)
                                                                       + 0x7FFF8000) )
    {
      __asan_report_load4(product_data_1);
    }
    proto::AppleGiftCardProductBin::set_buy_times(product_bin_1, product_data_1->buy_times);
    std::__detail::_Node_iterator<std::pair<unsigned int const,AppleGiftCardProductData>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,AppleGiftCardProductData>,false,false> *const)&__for_begin);
  }
  __for_range_9 = &this->psn_compensation_product_map_;
  __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false>::__node_type *)std::unordered_map<unsigned int,PsnCompensationProductData>::begin(&this->psn_compensation_product_map_)._M_cur;
  __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false>::__node_type *)std::unordered_map<unsigned int,PsnCompensationProductData>::end(__for_range_9)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,PsnCompensationProductData>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,PsnCompensationProductData>,false> *)&__for_begin,
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,PsnCompensationProductData>,false> *)&__for_end) )
  {
    v54 = std::__detail::_Node_iterator<std::pair<unsigned int const,PsnCompensationProductData>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,PsnCompensationProductData>,false,false> *const)&__for_begin);
    config_id_4 = std::get<0ul,unsigned int const,PsnCompensationProductData>(v54);
    product_data_2 = (std::tuple_element<1,const std::pair<unsigned int const,PsnCompensationProductData> >::type *)std::get<1ul,unsigned int const,PsnCompensationProductData>(v54);
    product_bin_2 = proto::PlayerRechargeCompBin::add_psn_compensation_product_list(proto_comp);
    if ( *(_BYTE *)(((unsigned __int64)config_id_4 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)config_id_4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)config_id_4 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(config_id_4);
    }
    proto::PsnCompensationProductBin::set_config_id(product_bin_2, *config_id_4);
    if ( *(_BYTE *)(((unsigned __int64)product_data_2 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)product_data_2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)product_data_2 >> 3)
                                                                       + 0x7FFF8000) )
    {
      __asan_report_load4(product_data_2);
    }
    proto::PsnCompensationProductBin::set_buy_times(product_bin_2, product_data_2->buy_times);
    if ( *(_BYTE *)(((unsigned __int64)&product_data_2->last_buy_time >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)product_data_2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&product_data_2->last_buy_time >> 3)
                                                                   + 0x7FFF8000) )
    {
      __asan_report_load4(&product_data_2->last_buy_time);
    }
    proto::PsnCompensationProductBin::set_last_buy_time(product_bin_2, product_data_2->last_buy_time);
    if ( *(_BYTE *)(((unsigned __int64)&product_data_2->month_buy_times >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)product_data_2 + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&product_data_2->month_buy_times >> 3)
                                                                   + 0x7FFF8000) )
    {
      __asan_report_load4(&product_data_2->month_buy_times);
    }
    proto::PsnCompensationProductBin::set_month_buy_times(product_bin_2, product_data_2->month_buy_times);
    if ( *(_BYTE *)(((unsigned __int64)&product_data_2->month_last_buy_time >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)product_data_2 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&product_data_2->month_last_buy_time >> 3)
                                                                    + 0x7FFF8000) )
    {
      __asan_report_load4(&product_data_2->month_last_buy_time);
    }
    proto::PsnCompensationProductBin::set_month_last_buy_time(product_bin_2, product_data_2->month_last_buy_time);
    std::__detail::_Node_iterator<std::pair<unsigned int const,PsnCompensationProductData>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,PsnCompensationProductData>,false,false> *const)&__for_begin);
  }
  __for_range_10 = &this->saved_order_notify_map_;
  __for_begin_1._M_cur = std::unordered_map<unsigned int,std::map<unsigned int,proto::OrderFinishNotify>>::begin(&this->saved_order_notify_map_)._M_cur;
  __for_end_1._M_cur = std::unordered_map<unsigned int,std::map<unsigned int,proto::OrderFinishNotify>>::end(__for_range_10)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::map<unsigned int,proto::OrderFinishNotify>>,false>(
            &__for_begin_1,
            &__for_end_1) )
  {
    v42 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::map<unsigned int,proto::OrderFinishNotify>>,false,false>::operator*(&__for_begin_1);
    platform_type = std::get<0ul,unsigned int const,std::map<unsigned int,proto::OrderFinishNotify>>(v42);
    order_notify_map = (std::tuple_element<1,const std::pair<unsigned int const,std::map<unsigned int,proto::OrderFinishNotify> > >::type *)std::get<1ul,unsigned int const,std::map<unsigned int,proto::OrderFinishNotify>>(v42);
    if ( !std::map<unsigned int,proto::OrderFinishNotify>::empty(order_notify_map) )
    {
      order_notify_bin = proto::PlayerRechargeCompBin::add_order_notify_save_list(proto_comp);
      if ( *(_BYTE *)(((unsigned __int64)platform_type >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)platform_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)platform_type >> 3)
                                                                        + 0x7FFF8000) )
      {
        __asan_report_load4(platform_type);
      }
      proto::OrderNotifySaveBin::set_platform_type(order_notify_bin, *platform_type);
      __for_range_11 = order_notify_map;
      __for_begin_0._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,McoinProductData>,false>::__node_type *)std::map<unsigned int,proto::OrderFinishNotify>::begin(order_notify_map)._M_node;
      __for_end_0._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,McoinProductData>,false>::__node_type *)std::map<unsigned int,proto::OrderFinishNotify>::end(__for_range_11)._M_node;
      while ( std::operator!=(
                (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::OrderFinishNotify> >::_Self *)&__for_begin_0,
                (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::OrderFinishNotify> >::_Self *)&__for_end_0) )
      {
        v47 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::OrderFinishNotify>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::OrderFinishNotify> > *const)&__for_begin_0);
        _ = std::get<0ul,unsigned int const,proto::OrderFinishNotify>(v47);
        order_notify = (std::tuple_element<1,const std::pair<unsigned int const,proto::OrderFinishNotify> >::type *)std::get<1ul,unsigned int const,proto::OrderFinishNotify>(v47);
        notify_bin = proto::OrderNotifySaveBin::add_order_notify_list(order_notify_bin);
        v16 = proto::OrderFinishNotify::product_id[abi:cxx11](order_notify);
        proto::OrderFinishNotifyBin::set_product_id(notify_bin, v16);
        v17 = proto::OrderFinishNotify::add_mcoin(order_notify);
        proto::OrderFinishNotifyBin::set_add_mcoin(notify_bin, v17);
        v18 = proto::OrderFinishNotify::card_product_remain_days(order_notify);
        proto::OrderFinishNotifyBin::set_card_product_remain_days(notify_bin, v18);
        v19 = proto::OrderFinishNotify::order_id(order_notify);
        proto::OrderFinishNotifyBin::set_order_id(notify_bin, v19);
        __for_range_12 = proto::OrderFinishNotify::item_list(order_notify);
        __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false>::__node_type *)google::protobuf::RepeatedPtrField<proto::ItemParam>::begin(__for_range_12).it_;
        __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false>::__node_type *)google::protobuf::RepeatedPtrField<proto::ItemParam>::end(__for_range_12).it_;
        while ( google::protobuf::internal::RepeatedPtrIterator<proto::ItemParam const>::operator!=(
                  (const google::protobuf::internal::RepeatedPtrIterator<const proto::ItemParam> *const)&__for_begin,
                  (const google::protobuf::internal::RepeatedPtrIterator<const proto::ItemParam>::iterator *)&__for_end) )
        {
          item = google::protobuf::internal::RepeatedPtrIterator<proto::ItemParam const>::operator*((const google::protobuf::internal::RepeatedPtrIterator<const proto::ItemParam> *const)&__for_begin);
          item_bin = proto::OrderFinishNotifyBin::add_item_list(notify_bin);
          v20 = proto::ItemParam::item_id(item);
          proto::OrderFinishNotifyItemBin::set_item_id(item_bin, v20);
          v21 = proto::ItemParam::count(item);
          proto::OrderFinishNotifyItemBin::set_count(item_bin, v21);
          google::protobuf::internal::RepeatedPtrIterator<proto::ItemParam const>::operator++((google::protobuf::internal::RepeatedPtrIterator<const proto::ItemParam> *const)&__for_begin);
        }
        std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::OrderFinishNotify>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::OrderFinishNotify> > *const)&__for_begin_0);
      }
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::map<unsigned int,proto::OrderFinishNotify>>,false,false>::operator++(&__for_begin_1);
  }
  return 0;
};

// Line 265: range 0000000013E1E2F2-0000000013E1E5B0
int32_t __cdecl PlayerRechargeComp::init(PlayerRechargeComp *const this)
{
  unsigned __int64 p_pending_que; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t v4; // r14d
  int32_t result; // eax
  std::weak_ptr<PlayerRechargeComp> *p_this_wtr; // [rsp+10h] [rbp-E0h]
  std::weak_ptr<PlayerRechargeComp> v7; // [rsp+20h] [rbp-D0h] BYREF
  PlayerEventComp varC0; // [rsp+30h] [rbp-C0h] BYREF

  p_pending_que = (unsigned __int64)&varC0.event_center_.context_.pending_que_;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      p_pending_que = v2;
  }
  *(_QWORD *)p_pending_que = 1102416563LL;
  *(_QWORD *)(p_pending_que + 8) = "2 32 16 12 this_ptr:266 64 16 12 this_wtr:272";
  *(_QWORD *)(p_pending_que + 16) = PlayerRechargeComp::init;
  v3 = (_DWORD *)(p_pending_que >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  toThisPtr<PlayerRechargeComp>((PlayerRechargeComp *)(p_pending_que + 32));
  if ( std::operator==<PlayerRechargeComp>(0LL, (const std::shared_ptr<PlayerRechargeComp> *)(p_pending_que + 32)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&varC0._M_weak_this._M_refcount,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/recharge/player_recharge_comp.cpp",
      "init",
      269);
    common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
      (common::milog::MiLogStream *const)&varC0._M_weak_this._M_refcount,
      (const char (*)[17])"toThisPtr failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&varC0._M_weak_this._M_refcount);
    v4 = -1;
  }
  else
  {
    std::weak_ptr<PlayerRechargeComp>::weak_ptr<PlayerRechargeComp,void>(
      (std::weak_ptr<PlayerRechargeComp> *const)(p_pending_que + 64),
      (const std::shared_ptr<PlayerRechargeComp> *)(p_pending_que + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    p_this_wtr = (std::weak_ptr<PlayerRechargeComp> *)Player::getEventComp(this->player_);
    std::weak_ptr<PlayerRechargeComp>::weak_ptr(&v7, (const std::weak_ptr<PlayerRechargeComp> *)(p_pending_que + 64));
    PlayerEventComp::registerObserver<PlayerRechargeComp,PostEnterSceneEvent>(
      &varC0,
      p_this_wtr,
      (void (*)(PlayerRechargeComp *, const PostEnterSceneEvent *))&v7);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&varC0);
    std::weak_ptr<PlayerRechargeComp>::~weak_ptr(&v7);
    v4 = 0;
    std::weak_ptr<PlayerRechargeComp>::~weak_ptr((std::weak_ptr<PlayerRechargeComp> *const)(p_pending_que + 64));
  }
  std::shared_ptr<PlayerRechargeComp>::~shared_ptr((std::shared_ptr<PlayerRechargeComp> *const)(p_pending_que + 32));
  result = v4;
  if ( &varC0.event_center_.context_.pending_que_ == (std::queue<std::variant<std::weak_ptr<Observer>,std::shared_ptr<BaseEvent> >> *)p_pending_que )
  {
    *(_QWORD *)((p_pending_que >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((p_pending_que >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)p_pending_que = 1172321806LL;
    *(_QWORD *)((p_pending_que >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((p_pending_que >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 278: range 0000000013E1E5B2-0000000013E1E794
void __cdecl PlayerRechargeComp::onPostEnterSceneEvent(
        PlayerRechargeComp *const this,
        const PostEnterSceneEvent *event)
{
  ShopmallExcelConfigMgr *p_shopmall_config_mgr; // rbx
  const std::string *v3; // rax
  uint32_t PlatformType; // eax
  uint32_t platform_type; // [rsp+1Ch] [rbp-54h]
  std::map<unsigned int,proto::OrderFinishNotify>::iterator __for_begin; // [rsp+20h] [rbp-50h] BYREF
  std::map<unsigned int,proto::OrderFinishNotify>::iterator __for_end; // [rsp+28h] [rbp-48h] BYREF
  std::map<unsigned int,proto::OrderFinishNotify> *__for_range; // [rsp+30h] [rbp-40h]
  const std::pair<unsigned int const,proto::OrderFinishNotify> *v9; // [rsp+38h] [rbp-38h]
  std::tuple_element<0,const std::pair<unsigned int const,proto::OrderFinishNotify> >::type *_; // [rsp+40h] [rbp-30h]
  std::tuple_element<1,const std::pair<unsigned int const,proto::OrderFinishNotify> >::type *order_notify; // [rsp+48h] [rbp-28h]
  std::shared_ptr<Config> v12[2]; // [rsp+50h] [rbp-20h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&event->enter_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->enter_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&event->enter_type);
  }
  if ( event->enter_type == ENTER_SELF )
  {
    __for_range = &this->cached_order_notify_map_;
    __for_begin._M_node = std::map<unsigned int,proto::OrderFinishNotify>::begin(&this->cached_order_notify_map_)._M_node;
    __for_end._M_node = std::map<unsigned int,proto::OrderFinishNotify>::end(&this->cached_order_notify_map_)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v9 = std::_Rb_tree_iterator<std::pair<unsigned int const,proto::OrderFinishNotify>>::operator*(&__for_begin);
      _ = std::get<0ul,unsigned int const,proto::OrderFinishNotify>(v9);
      order_notify = (std::tuple_element<1,const std::pair<unsigned int const,proto::OrderFinishNotify> >::type *)std::get<1ul,unsigned int const,proto::OrderFinishNotify>(v9);
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)v12);
      p_shopmall_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v12)->design_config.txt_config_mgr.shopmall_config_mgr;
      v3 = proto::OrderFinishNotify::product_id[abi:cxx11](order_notify);
      platform_type = ShopmallExcelConfigMgr::getChargePlatformTypeByProductId(p_shopmall_config_mgr, v3);
      std::shared_ptr<Config>::~shared_ptr(v12);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      PlatformType = Player::getPlatformType(this->player_);
      if ( TxtConfigMgr::isPlatformTyepInSameOperator(platform_type, PlatformType) )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        Player::sendProto(this->player_, order_notify);
      }
      std::_Rb_tree_iterator<std::pair<unsigned int const,proto::OrderFinishNotify>>::operator++(&__for_begin);
    }
  }
};

// Line 297: range 0000000013E1E796-0000000013E1EB0D
int32_t __cdecl PlayerRechargeComp::onLogin(PlayerRechargeComp *const this, bool is_new_player)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t result; // eax
  std::unordered_map<unsigned int,unsigned int>::iterator __for_begin; // [rsp+10h] [rbp-100h] BYREF
  std::unordered_map<unsigned int,unsigned int>::iterator __for_end; // [rsp+18h] [rbp-F8h] BYREF
  std::unordered_map<unsigned int,unsigned int> *__for_range; // [rsp+20h] [rbp-F0h]
  const std::pair<unsigned int const,unsigned int> *v9; // [rsp+28h] [rbp-E8h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *order_id; // [rsp+30h] [rbp-E0h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *finish_time; // [rsp+38h] [rbp-D8h]
  char v12[208]; // [rsp+40h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 24 7 req:299 96 32 7 req:305";
  *(_QWORD *)(v2 + 16) = PlayerRechargeComp::onLogin;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234881024;
  v4[536862722] = -218959118;
  v4[536862724] = -202116109;
  proto::GetUnfinishedOrderReq::GetUnfinishedOrderReq((proto::GetUnfinishedOrderReq *const)(v2 + 32));
  PlayerRechargeComp::notifyOaservice<proto::GetUnfinishedOrderReq>(
    this,
    (const proto::GetUnfinishedOrderReq *)(v2 + 32));
  if ( !std::unordered_map<unsigned int,unsigned int>::empty(&this->wait_mark_db_map_) )
  {
    proto::MarkOrderFinishedReq::MarkOrderFinishedReq((proto::MarkOrderFinishedReq *const)(v2 + 96));
    proto::MarkOrderFinishedReq::set_is_retry((proto::MarkOrderFinishedReq *const)(v2 + 96), 1);
    __for_range = &this->wait_mark_db_map_;
    __for_begin._M_cur = std::unordered_map<unsigned int,unsigned int>::begin(&this->wait_mark_db_map_)._M_cur;
    __for_end._M_cur = std::unordered_map<unsigned int,unsigned int>::end(&this->wait_mark_db_map_)._M_cur;
    while ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(&__for_begin, &__for_end) )
    {
      v9 = std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator*(&__for_begin);
      order_id = std::get<0ul,unsigned int const,unsigned int>(v9);
      finish_time = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v9);
      if ( *(_BYTE *)(((unsigned __int64)order_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)order_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)order_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(order_id);
      }
      proto::MarkOrderFinishedReq::set_order_id((proto::MarkOrderFinishedReq *const)(v2 + 96), *order_id);
      if ( *(_BYTE *)(((unsigned __int64)finish_time >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)finish_time & 7) + 3) >= *(_BYTE *)(((unsigned __int64)finish_time >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(finish_time);
      }
      proto::MarkOrderFinishedReq::set_finish_time((proto::MarkOrderFinishedReq *const)(v2 + 96), *finish_time);
      PlayerRechargeComp::notifyOaservice<proto::MarkOrderFinishedReq>(
        this,
        (const proto::MarkOrderFinishedReq *)(v2 + 96));
      std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator++(&__for_begin);
    }
    proto::MarkOrderFinishedReq::~MarkOrderFinishedReq((proto::MarkOrderFinishedReq *const)(v2 + 96));
  }
  PlayerRechargeComp::refreshProductLimit(this);
  PlayerRechargeComp::tryGrantCardProductDailyReward(this);
  PlayerRechargeComp::trySendCardProductRemindMail(this);
  PlayerRechargeComp::pushSaveOrderNotifyToCacheOrderNotify(this);
  proto::GetUnfinishedOrderReq::~GetUnfinishedOrderReq((proto::GetUnfinishedOrderReq *const)(v2 + 32));
  result = 0;
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
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

// Line 305: range 0000000013EDF594-0000000013EDF89E
void __cdecl PlayerRechargeComp::notifyOaservice<proto::MarkOrderFinishedReq>(
        PlayerRechargeComp *const this,
        const proto::MarkOrderFinishedReq *proto)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  GameserverService *v5; // r14
  unsigned __int64 v6; // rdx
  common::minet::Packet *v7; // r14
  uint32_t Uid; // eax
  common::minet::Packet *v9; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // r14
  unsigned __int64 v12; // rax
  void (__fastcall *v13)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v15; // [rsp+30h] [rbp-90h] BYREF
  char v16[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 packet_ptr:361";
  *(_QWORD *)(v2 + 16) = PlayerRechargeComp::notifyOaservice<proto::MarkOrderFinishedReq>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::minet::PacketUtils::createPacket<proto::MarkOrderFinishedReq>((const proto::MarkOrderFinishedReq *)(v2 + 32));
  if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/recharge/player_recharge_comp.cpp",
      "notifyOaservice",
      364);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v15, (const char (*)[19])"createPacket fails");
    common::milog::MiLogStream::~MiLogStream(&v15);
  }
  else
  {
    v5 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    ServiceBase::setPacketSource(v5, (common::minet::PacketPtr)__PAIR128__(v6, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v7 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    Uid = Player::getUid(this->player_);
    common::minet::Packet::setUserId(v7, Uid);
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::minet::Packet::setTargetService(v9, 0x10u);
    v10 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
    v11 = v10;
    if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v10);
    v12 = (unsigned __int64)(v11->_vptr_NetworkMgrBase + 8);
    if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
      v12 = __asan_report_load8(v11->_vptr_NetworkMgrBase + 8);
    v13 = *(void (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v12;
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    v13(v11, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 32));
  if ( v16 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 324: range 0000000013E1EB0E-0000000013E1EB4C
void __cdecl PlayerRechargeComp::onDailyRefresh(PlayerRechargeComp *const this)
{
  PlayerRechargeComp::refreshProductLimit(this);
  PlayerRechargeComp::tryGrantCardProductDailyReward(this);
  PlayerRechargeComp::notifyAllResinCard(this);
  PlayerRechargeComp::trySendCardProductRemindMail(this);
};

// Line 335: range 0000000013E1EB4E-0000000013E1EFAE
int32_t __cdecl PlayerRechargeComp::notifyAllData(PlayerRechargeComp *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::remove_reference<const std::string&>::type *v6; // rax
  std::string *v7; // rax
  int32_t v8; // r14d
  int32_t result; // eax
  bool is_internal; // [rsp+1Eh] [rbp-142h]
  bool is_epic; // [rsp+1Fh] [rbp-141h]
  google::protobuf::uint32 remain_days; // [rsp+20h] [rbp-140h]
  uint32_t platform_type; // [rsp+24h] [rbp-13Ch]
  std::map<std::string,std::string>::iterator __for_begin; // [rsp+28h] [rbp-138h] BYREF
  std::map<std::string,std::string>::iterator __for_end; // [rsp+30h] [rbp-130h] BYREF
  std::map<std::string,std::string> *__for_range; // [rsp+38h] [rbp-128h]
  std::pair<const std::string,std::string > *__in; // [rsp+40h] [rbp-120h]
  std::tuple_element<0,std::pair<const std::string,std::string > >::type *product_id; // [rsp+48h] [rbp-118h]
  std::tuple_element<1,std::pair<const std::string,std::string > >::type *price_tier; // [rsp+50h] [rbp-110h]
  proto::ProductPriceTier *product_price_tier; // [rsp+58h] [rbp-108h]
  std::shared_ptr<Config> v21; // [rsp+60h] [rbp-100h] BYREF
  char v22[240]; // [rsp+70h] [rbp-F0h] BYREF

  v1 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(192LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 48 10 notify:339 112 48 15 product_map:347";
  *(_QWORD *)(v1 + 16) = PlayerRechargeComp::notifyAllData;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862722] = -219021312;
  v3[536862723] = 62194;
  v3[536862725] = -202116109;
  PlayerRechargeComp::notifyAllResinCard(this);
  proto::PlayerRechargeDataNotify::PlayerRechargeDataNotify((proto::PlayerRechargeDataNotify *const)(v1 + 32));
  remain_days = PlayerRechargeComp::getHcoinCardProductRemainRewardDays(this);
  proto::PlayerRechargeDataNotify::set_card_product_remain_days(
    (proto::PlayerRechargeDataNotify *const)(v1 + 32),
    remain_days);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v21);
  v4 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v21);
  is_internal = Config::isInternalServer(v4);
  std::shared_ptr<Config>::~shared_ptr(&v21);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  platform_type = Player::getPlatformType(this->player_);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  is_epic = Player::isEpic(this->player_);
  std::map<std::string,std::string>::map((std::map<std::string,std::string> *const)(v1 + 112));
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v21);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v21);
  ShopmallExcelConfigMgr::findDisplayProductTierMap(
    &v5->design_config.txt_config_mgr.shopmall_config_mgr,
    is_internal,
    platform_type,
    is_epic,
    (std::map<std::string,std::string> *)(v1 + 112));
  std::shared_ptr<Config>::~shared_ptr(&v21);
  __for_range = (std::map<std::string,std::string> *)(v1 + 112);
  __for_begin._M_node = std::map<std::string,std::string>::begin((std::map<std::string,std::string> *const)(v1 + 112))._M_node;
  __for_end._M_node = std::map<std::string,std::string>::end((std::map<std::string,std::string> *const)(v1 + 112))._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<std::string const,std::string>>::operator*(&__for_begin);
    product_id = std::get<0ul,std::string const,std::string>(__in);
    price_tier = std::get<1ul,std::string const,std::string>(__in);
    product_price_tier = proto::PlayerRechargeDataNotify::add_product_price_tier_list((proto::PlayerRechargeDataNotify *const)(v1 + 32));
    v6 = std::move<std::string const&>(product_id);
    proto::ProductPriceTier::set_product_id(product_price_tier, v6);
    v7 = std::move<std::string &>(price_tier);
    proto::ProductPriceTier::set_price_tier(product_price_tier, v7);
    std::_Rb_tree_iterator<std::pair<std::string const,std::string>>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  v8 = Player::sendProto(this->player_, (const google::protobuf::Message *)(v1 + 32));
  std::map<std::string,std::string>::~map((std::map<std::string,std::string> *const)(v1 + 112));
  proto::PlayerRechargeDataNotify::~PlayerRechargeDataNotify((proto::PlayerRechargeDataNotify *const)(v1 + 32));
  result = v8;
  if ( v22 == (char *)v1 )
  {
    *(_DWORD *)((v1 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 359: range 0000000013EE0E90-0000000013EE119A
void __cdecl PlayerRechargeComp::notifyOaservice<proto::GetSpecificUnfinishedReq>(
        PlayerRechargeComp *const this,
        const proto::GetSpecificUnfinishedReq *proto)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  GameserverService *v5; // r14
  unsigned __int64 v6; // rdx
  common::minet::Packet *v7; // r14
  uint32_t Uid; // eax
  common::minet::Packet *v9; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // r14
  unsigned __int64 v12; // rax
  void (__fastcall *v13)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v15; // [rsp+30h] [rbp-90h] BYREF
  char v16[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 packet_ptr:361";
  *(_QWORD *)(v2 + 16) = PlayerRechargeComp::notifyOaservice<proto::GetSpecificUnfinishedReq>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::minet::PacketUtils::createPacket<proto::GetSpecificUnfinishedReq>((const proto::GetSpecificUnfinishedReq *)(v2 + 32));
  if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/recharge/player_recharge_comp.cpp",
      "notifyOaservice",
      364);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v15, (const char (*)[19])"createPacket fails");
    common::milog::MiLogStream::~MiLogStream(&v15);
  }
  else
  {
    v5 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    ServiceBase::setPacketSource(v5, (common::minet::PacketPtr)__PAIR128__(v6, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v7 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    Uid = Player::getUid(this->player_);
    common::minet::Packet::setUserId(v7, Uid);
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::minet::Packet::setTargetService(v9, 0x10u);
    v10 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
    v11 = v10;
    if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v10);
    v12 = (unsigned __int64)(v11->_vptr_NetworkMgrBase + 8);
    if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
      v12 = __asan_report_load8(v11->_vptr_NetworkMgrBase + 8);
    v13 = *(void (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v12;
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    v13(v11, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 32));
  if ( v16 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 359: range 0000000013EDF26E-0000000013EDF578
void __cdecl PlayerRechargeComp::notifyOaservice<proto::GetUnfinishedOrderReq>(
        PlayerRechargeComp *const this,
        const proto::GetUnfinishedOrderReq *proto)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  GameserverService *v5; // r14
  unsigned __int64 v6; // rdx
  common::minet::Packet *v7; // r14
  uint32_t Uid; // eax
  common::minet::Packet *v9; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // r14
  unsigned __int64 v12; // rax
  void (__fastcall *v13)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v15; // [rsp+30h] [rbp-90h] BYREF
  char v16[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 packet_ptr:361";
  *(_QWORD *)(v2 + 16) = PlayerRechargeComp::notifyOaservice<proto::GetUnfinishedOrderReq>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::minet::PacketUtils::createPacket<proto::GetUnfinishedOrderReq>((const proto::GetUnfinishedOrderReq *)(v2 + 32));
  if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/recharge/player_recharge_comp.cpp",
      "notifyOaservice",
      364);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v15, (const char (*)[19])"createPacket fails");
    common::milog::MiLogStream::~MiLogStream(&v15);
  }
  else
  {
    v5 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    ServiceBase::setPacketSource(v5, (common::minet::PacketPtr)__PAIR128__(v6, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v7 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    Uid = Player::getUid(this->player_);
    common::minet::Packet::setUserId(v7, Uid);
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::minet::Packet::setTargetService(v9, 0x10u);
    v10 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
    v11 = v10;
    if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v10);
    v12 = (unsigned __int64)(v11->_vptr_NetworkMgrBase + 8);
    if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
      v12 = __asan_report_load8(v11->_vptr_NetworkMgrBase + 8);
    v13 = *(void (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v12;
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    v13(v11, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 32));
  if ( v16 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 375: range 0000000013E1EFB0-0000000013E2036B
int32_t __cdecl PlayerRechargeComp::getShopProductList(
        PlayerRechargeComp *const this,
        data::ShopType shop_type,
        proto::Shop *shop_proto)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  bool isRechargeSystemClosed; // r14
  int32_t result; // eax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  TxtConfigMgr *p_txt_config_mgr; // rax
  bool v11; // r14
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v12; // rax
  _DWORD *v13; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  bool isRechargeConfigIdClosed; // r14
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  TxtConfigMgr *v24; // rdx
  data::ShopType *p_card_product_shop_type; // rax
  bool v26; // r15
  const ShopmallExcelConfigMgr *p_shopmall_config_mgr; // rdi
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  FeatureSwitchMgr *p_feature_switch_mgr; // rcx
  bool v36; // r14
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  TxtConfigMgr *v39; // rax
  bool v40; // r14
  const ShopmallExcelConfigMgr *v41; // rdi
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // rax
  FeatureSwitchMgr *v49; // rcx
  bool v50; // r14
  common::milog::MiLogStream *v51; // rax
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rax
  bool is_internal; // [rsp+22h] [rbp-16Eh]
  bool is_epic; // [rsp+23h] [rbp-16Dh]
  uint32_t now; // [rsp+24h] [rbp-16Ch]
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-168h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-160h] BYREF
  const std::vector<unsigned int> *mcoin_config_id_vec; // [rsp+38h] [rbp-158h]
  const std::vector<unsigned int> *__for_range; // [rsp+40h] [rbp-150h]
  const std::string *product_id; // [rsp+48h] [rbp-148h]
  const data::ProductMcoinDetailConfig *mcoin_config_ptr; // [rsp+50h] [rbp-140h]
  proto::ShopMcoinProduct *mcoin_proto; // [rsp+58h] [rbp-138h]
  const std::unordered_map<unsigned int,data::ProductCardDetailConfig> *card_detail_config_map; // [rsp+60h] [rbp-130h]
  const std::unordered_map<unsigned int,data::ProductCardDetailConfig> *__for_range_0; // [rsp+68h] [rbp-128h]
  const std::pair<unsigned int const,data::ProductCardDetailConfig> *v68; // [rsp+70h] [rbp-120h]
  std::tuple_element<0,const std::pair<unsigned int const,data::ProductCardDetailConfig> >::type *config_id; // [rsp+78h] [rbp-118h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ProductCardDetailConfig> >::type *card_config; // [rsp+80h] [rbp-110h]
  const std::string *product_id_0; // [rsp+88h] [rbp-108h]
  proto::ShopCardProduct *card_proto; // [rsp+90h] [rbp-100h]
  const std::unordered_map<unsigned int,data::ProductConcertPackageDetailConfig> *concert_package_detail_config_map; // [rsp+98h] [rbp-F8h]
  const std::unordered_map<unsigned int,data::ProductConcertPackageDetailConfig> *__for_range_1; // [rsp+A0h] [rbp-F0h]
  const std::pair<unsigned int const,data::ProductConcertPackageDetailConfig> *v75; // [rsp+A8h] [rbp-E8h]
  std::tuple_element<0,const std::pair<unsigned int const,data::ProductConcertPackageDetailConfig> >::type *config_id_0; // [rsp+B0h] [rbp-E0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ProductConcertPackageDetailConfig> >::type *concert_config; // [rsp+B8h] [rbp-D8h]
  const std::string *product_id_1; // [rsp+C0h] [rbp-D0h]
  proto::ShopConcertProduct *concert_proto; // [rsp+C8h] [rbp-C8h]
  std::shared_ptr<Config> v80; // [rsp+D0h] [rbp-C0h] BYREF
  common::milog::MiLogStream v81; // [rsp+E0h] [rbp-B0h] BYREF
  char v82[144]; // [rsp+100h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v82;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 17 platform_type:385 64 4 13 config_id:390";
  *(_QWORD *)(v3 + 16) = PlayerRechargeComp::getShopProductList;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116348;
  PlayerRechargeComp::refreshProductLimit(this);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v80);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v80);
  isRechargeSystemClosed = FeatureSwitchMgr::isRechargeSystemClosed(&v6->feature_switch_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v80);
  if ( isRechargeSystemClosed )
  {
    common::milog::MiLogStream::create(
      &v81,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/recharge/player_recharge_comp.cpp",
      "getShopProductList",
      380);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
      &v81,
      (const char (*)[26])"recharge system is closed");
    common::milog::MiLogStream::~MiLogStream(&v81);
    result = 0;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v80);
    v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v80);
    is_internal = Config::isInternalServer(v9);
    std::shared_ptr<Config>::~shared_ptr(&v80);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    *(_DWORD *)(v3 + 48) = Player::getPlatformType(this->player_);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    is_epic = Player::isEpic(this->player_);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v80);
    p_txt_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v80)->design_config.txt_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&p_txt_config_mgr->shopmall_config_mgr.mcoin_product_shop_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&p_txt_config_mgr->shopmall_config_mgr.mcoin_product_shop_type >> 3) + 0x7FFF8000) <= 3 )
    {
      p_txt_config_mgr = (TxtConfigMgr *)__asan_report_load4(&p_txt_config_mgr->shopmall_config_mgr.mcoin_product_shop_type);
    }
    v11 = shop_type == p_txt_config_mgr->shopmall_config_mgr.mcoin_product_shop_type;
    std::shared_ptr<Config>::~shared_ptr(&v80);
    if ( v11 )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v80);
      mcoin_config_id_vec = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v80)->design_config.txt_config_mgr.shopmall_config_mgr.sorted_mcoin_config_id_vec;
      std::shared_ptr<Config>::~shared_ptr(&v80);
      __for_range = mcoin_config_id_vec;
      __for_begin._M_current = std::vector<unsigned int>::begin(mcoin_config_id_vec)._M_current;
      __for_end._M_current = std::vector<unsigned int>::end(mcoin_config_id_vec)._M_current;
      while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
      {
        v12 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
        v13 = v12;
        if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v12);
        }
        *(_DWORD *)(v3 + 64) = *v13;
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v80);
        v14 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v80);
        product_id = ShopmallExcelConfigMgr::findProductIdByConfigId[abi:cxx11](
                       &v14->design_config.txt_config_mgr.shopmall_config_mgr,
                       is_internal,
                       *(_DWORD *)(v3 + 48),
                       is_epic,
                       *(_DWORD *)(v3 + 64));
        std::shared_ptr<Config>::~shared_ptr(&v80);
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v80);
        v15 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v80);
        mcoin_config_ptr = ShopmallExcelConfigMgr::findProductMcoinDetailConfig(
                             &v15->design_config.txt_config_mgr.shopmall_config_mgr,
                             product_id);
        std::shared_ptr<Config>::~shared_ptr(&v80);
        if ( mcoin_config_ptr )
        {
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v80);
          v19 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v80);
          isRechargeConfigIdClosed = FeatureSwitchMgr::isRechargeConfigIdClosed(
                                       &v19->feature_switch_mgr,
                                       *(_DWORD *)(v3 + 64));
          std::shared_ptr<Config>::~shared_ptr(&v80);
          if ( isRechargeConfigIdClosed )
          {
            common::milog::MiLogStream::create(
              &v81,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/recharge/player_recharge_comp.cpp",
              "getShopProductList",
              401);
            v21 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                    &v81,
                    (const char (*)[20])"recharge config_id:");
            v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v21,
                    (const unsigned int *)(v3 + 64));
            common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v22, (const char (*)[11])off_25170540);
            common::milog::MiLogStream::~MiLogStream(&v81);
          }
          else
          {
            if ( *(char *)(((unsigned __int64)&mcoin_config_ptr->is_audit >> 3) + 0x7FFF8000) < 0 )
              __asan_report_load1(&mcoin_config_ptr->is_audit);
            if ( !mcoin_config_ptr->is_audit )
              goto LABEL_28;
            if ( *(_BYTE *)(((unsigned __int64)&mcoin_config_ptr->original_product_type >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&mcoin_config_ptr->original_product_type >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&mcoin_config_ptr->original_product_type);
            }
            if ( mcoin_config_ptr->original_product_type != PRODUCT_TYPE_APPLE_GIFT_CARD || *(_DWORD *)(v3 + 48) != 7 )
            {
LABEL_28:
              mcoin_proto = proto::Shop::add_mcoin_product_list(shop_proto);
              proto::ShopMcoinProduct::set_product_id(mcoin_proto, product_id);
              PlayerRechargeComp::productConfigToClient(this, mcoin_config_ptr, mcoin_proto);
            }
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v81,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/recharge/player_recharge_comp.cpp",
            "getShopProductList",
            396);
          v16 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                  &v81,
                  (const char (*)[31])"findProductDetailConfig fails:");
          v17 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v16, product_id);
          v18 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v17, (const char (*)[12])" config_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v3 + 64));
          common::milog::MiLogStream::~MiLogStream(&v81);
        }
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
      }
    }
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v80);
    v23 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v80);
    v24 = &v23->design_config.txt_config_mgr;
    p_card_product_shop_type = &v23->design_config.txt_config_mgr.shopmall_config_mgr.card_product_shop_type;
    if ( *(_BYTE *)(((unsigned __int64)p_card_product_shop_type >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_card_product_shop_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_card_product_shop_type >> 3)
                                                                                 + 0x7FFF8000) )
    {
      __asan_report_load4(p_card_product_shop_type);
    }
    v26 = shop_type == v24->shopmall_config_mgr.card_product_shop_type && PlayerRechargeComp::isSupportCardProduct(this);
    std::shared_ptr<Config>::~shared_ptr(&v80);
    if ( v26 )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v80);
      card_detail_config_map = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v80)->design_config.txt_config_mgr.shopmall_config_mgr.product_card_detail_config_map;
      std::shared_ptr<Config>::~shared_ptr(&v80);
      __for_range_0 = card_detail_config_map;
      __for_begin._M_current = (const unsigned int *)std::unordered_map<unsigned int,data::ProductCardDetailConfig>::begin(card_detail_config_map)._M_cur;
      __for_end._M_current = (const unsigned int *)std::unordered_map<unsigned int,data::ProductCardDetailConfig>::end(__for_range_0)._M_cur;
      while ( std::__detail::operator!=<std::pair<unsigned int const,data::ProductCardDetailConfig>,false>(
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProductCardDetailConfig>,false> *)&__for_begin,
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProductCardDetailConfig>,false> *)&__for_end) )
      {
        v68 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ProductCardDetailConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ProductCardDetailConfig>,false,false> *const)&__for_begin);
        config_id = std::get<0ul,unsigned int const,data::ProductCardDetailConfig>(v68);
        card_config = (std::tuple_element<1,const std::pair<unsigned int const,data::ProductCardDetailConfig> >::type *)std::get<1ul,unsigned int const,data::ProductCardDetailConfig>(v68);
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v80);
        p_shopmall_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v80)->design_config.txt_config_mgr.shopmall_config_mgr;
        if ( *(_BYTE *)(((unsigned __int64)config_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)config_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)config_id >> 3) + 0x7FFF8000) )
        {
          p_shopmall_config_mgr = (const ShopmallExcelConfigMgr *)config_id;
          __asan_report_load4(config_id);
        }
        product_id_0 = ShopmallExcelConfigMgr::findProductIdByConfigId[abi:cxx11](
                         p_shopmall_config_mgr,
                         is_internal,
                         *(_DWORD *)(v3 + 48),
                         is_epic,
                         *config_id);
        std::shared_ptr<Config>::~shared_ptr(&v80);
        if ( (unsigned __int8)std::string::empty(product_id_0) )
        {
          common::milog::MiLogStream::create(
            &v81,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/recharge/player_recharge_comp.cpp",
            "getShopProductList",
            428);
          v28 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                  &v81,
                  (const char (*)[31])"findProductIdByConfigId fails:");
          v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, config_id);
          v30 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                  v29,
                  (const char (*)[14])" is_internal:");
          v31 = common::milog::MiLogStream::operator<<(v30, is_internal);
          v32 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  v31,
                  (const char (*)[16])" platform_type:");
          v33 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v32,
                  (const unsigned int *)(v3 + 48));
          v34 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v33, (const char (*)[11])" is_epic: ");
          common::milog::MiLogStream::operator<<(v34, is_epic);
          common::milog::MiLogStream::~MiLogStream(&v81);
        }
        else
        {
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v80);
          p_feature_switch_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v80)->feature_switch_mgr;
          if ( *(_BYTE *)(((unsigned __int64)config_id >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)config_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)config_id >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(config_id);
          }
          v36 = FeatureSwitchMgr::isRechargeConfigIdClosed(p_feature_switch_mgr, *config_id);
          std::shared_ptr<Config>::~shared_ptr(&v80);
          if ( v36 )
          {
            common::milog::MiLogStream::create(
              &v81,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/recharge/player_recharge_comp.cpp",
              "getShopProductList",
              433);
            v37 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                    &v81,
                    (const char (*)[20])"recharge config_id:");
            v38 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v37, config_id);
            common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v38, (const char (*)[11])off_25170540);
            common::milog::MiLogStream::~MiLogStream(&v81);
          }
          else
          {
            card_proto = proto::Shop::add_card_product_list(shop_proto);
            proto::ShopCardProduct::set_product_id(card_proto, product_id_0);
            PlayerRechargeComp::productConfigToClient(this, card_config, card_proto);
          }
        }
        std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ProductCardDetailConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ProductCardDetailConfig>,false,false> *const)&__for_begin);
      }
    }
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v80);
    v39 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v80)->design_config.txt_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&v39->shopmall_config_mgr.concert_product_shop_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v39->shopmall_config_mgr.concert_product_shop_type >> 3) + 0x7FFF8000) <= 3 )
    {
      v39 = (TxtConfigMgr *)__asan_report_load4(&v39->shopmall_config_mgr.concert_product_shop_type);
    }
    v40 = shop_type == v39->shopmall_config_mgr.concert_product_shop_type;
    std::shared_ptr<Config>::~shared_ptr(&v80);
    if ( v40 )
    {
      now = common::tools::TimeUtils::getNow();
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v80);
      concert_package_detail_config_map = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v80)->design_config.txt_config_mgr.shopmall_config_mgr.product_concert_package_detail_config_map;
      std::shared_ptr<Config>::~shared_ptr(&v80);
      __for_range_1 = concert_package_detail_config_map;
      __for_begin._M_current = (const unsigned int *)std::unordered_map<unsigned int,data::ProductConcertPackageDetailConfig>::begin(concert_package_detail_config_map)._M_cur;
      __for_end._M_current = (const unsigned int *)std::unordered_map<unsigned int,data::ProductConcertPackageDetailConfig>::end(__for_range_1)._M_cur;
      while ( std::__detail::operator!=<std::pair<unsigned int const,data::ProductConcertPackageDetailConfig>,false>(
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProductConcertPackageDetailConfig>,false> *)&__for_begin,
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProductConcertPackageDetailConfig>,false> *)&__for_end) )
      {
        v75 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ProductConcertPackageDetailConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ProductConcertPackageDetailConfig>,false,false> *const)&__for_begin);
        config_id_0 = std::get<0ul,unsigned int const,data::ProductConcertPackageDetailConfig>(v75);
        concert_config = (std::tuple_element<1,const std::pair<unsigned int const,data::ProductConcertPackageDetailConfig> >::type *)std::get<1ul,unsigned int const,data::ProductConcertPackageDetailConfig>(v75);
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v80);
        v41 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v80)->design_config.txt_config_mgr.shopmall_config_mgr;
        if ( *(_BYTE *)(((unsigned __int64)config_id_0 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)config_id_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)config_id_0 >> 3)
                                                                        + 0x7FFF8000) )
        {
          v41 = (const ShopmallExcelConfigMgr *)config_id_0;
          __asan_report_load4(config_id_0);
        }
        product_id_1 = ShopmallExcelConfigMgr::findProductIdByConfigId[abi:cxx11](
                         v41,
                         is_internal,
                         *(_DWORD *)(v3 + 48),
                         is_epic,
                         *config_id_0);
        std::shared_ptr<Config>::~shared_ptr(&v80);
        if ( (unsigned __int8)std::string::empty(product_id_1) )
        {
          common::milog::MiLogStream::create(
            &v81,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/recharge/player_recharge_comp.cpp",
            "getShopProductList",
            452);
          v42 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                  &v81,
                  (const char (*)[31])"findProductIdByConfigId fails:");
          v43 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v42, config_id_0);
          v44 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                  v43,
                  (const char (*)[14])" is_internal:");
          v45 = common::milog::MiLogStream::operator<<(v44, is_internal);
          v46 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  v45,
                  (const char (*)[16])" platform_type:");
          v47 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v46,
                  (const unsigned int *)(v3 + 48));
          v48 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v47, (const char (*)[11])" is_epic: ");
          common::milog::MiLogStream::operator<<(v48, is_epic);
          common::milog::MiLogStream::~MiLogStream(&v81);
        }
        else
        {
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v80);
          v49 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v80)->feature_switch_mgr;
          if ( *(_BYTE *)(((unsigned __int64)config_id_0 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)config_id_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)config_id_0 >> 3)
                                                                          + 0x7FFF8000) )
          {
            __asan_report_load4(config_id_0);
          }
          v50 = FeatureSwitchMgr::isRechargeConfigIdClosed(v49, *config_id_0);
          std::shared_ptr<Config>::~shared_ptr(&v80);
          if ( v50 )
          {
            common::milog::MiLogStream::create(
              &v81,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/recharge/player_recharge_comp.cpp",
              "getShopProductList",
              458);
            v51 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                    &v81,
                    (const char (*)[20])"recharge config_id:");
            v52 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v51, config_id_0);
            common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v52, (const char (*)[11])off_25170540);
            common::milog::MiLogStream::~MiLogStream(&v81);
          }
          else
          {
            if ( *(_BYTE *)(((unsigned __int64)&concert_config->begin_timestamp >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&concert_config->begin_timestamp >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&concert_config->begin_timestamp);
            }
            if ( !concert_config->begin_timestamp )
              goto LABEL_71;
            if ( *(_BYTE *)(((unsigned __int64)&concert_config->end_timestamp >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)concert_config - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&concert_config->end_timestamp >> 3)
                                                                            + 0x7FFF8000) )
            {
              __asan_report_load4(&concert_config->end_timestamp);
            }
            if ( concert_config->end_timestamp
              && (now < concert_config->begin_timestamp || now > concert_config->end_timestamp) )
            {
              common::milog::MiLogStream::create(
                &v81,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/player/recharge/player_recharge_comp.cpp",
                "getShopProductList",
                466);
              v53 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                      &v81,
                      (const char (*)[36])"concert product not in time range: ");
              common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v53, product_id_1);
              common::milog::MiLogStream::~MiLogStream(&v81);
            }
            else
            {
LABEL_71:
              concert_proto = proto::Shop::add_concert_product_list(shop_proto);
              proto::ShopConcertProduct::set_product_id(concert_proto, product_id_1);
              PlayerRechargeComp::productConfigToClient(this, concert_config, concert_proto);
            }
          }
        }
        std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ProductConcertPackageDetailConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ProductConcertPackageDetailConfig>,false,false> *const)&__for_begin);
      }
    }
    result = 0;
  }
  if ( v82 == (char *)v3 )
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
  return result;
};

// Line 482: range 0000000013E2036C-0000000013E20713
int32_t __cdecl PlayerRechargeComp::getShopRecommendProductList(
        PlayerRechargeComp *const this,
        const std::vector<unsigned int> *config_id_vec,
        proto::Shop *shop_proto)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  bool isRechargeSystemClosed; // r14
  int32_t result; // eax
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v9; // rax
  _DWORD *v10; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  bool isRechargeConfigIdClosed; // r14
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-B8h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-B0h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-A8h]
  std::shared_ptr<Config> v19; // [rsp+40h] [rbp-A0h] BYREF
  common::milog::MiLogStream v20; // [rsp+50h] [rbp-90h] BYREF
  char v21[112]; // [rsp+70h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 13 config_id:488";
  *(_QWORD *)(v3 + 16) = PlayerRechargeComp::getShopRecommendProductList;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v19);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v19);
  isRechargeSystemClosed = FeatureSwitchMgr::isRechargeSystemClosed(&v6->feature_switch_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v19);
  if ( isRechargeSystemClosed )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/recharge/player_recharge_comp.cpp",
      "getShopRecommendProductList",
      485);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
      &v20,
      (const char (*)[26])"recharge system is closed");
    common::milog::MiLogStream::~MiLogStream(&v20);
    result = 0;
  }
  else
  {
    __for_range = config_id_vec;
    __for_begin._M_current = std::vector<unsigned int>::begin(config_id_vec)._M_current;
    __for_end._M_current = std::vector<unsigned int>::end(config_id_vec)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
    {
      v9 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
      v10 = v9;
      if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v9);
      }
      *(_DWORD *)(v3 + 32) = *v10;
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v19);
      v11 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v19);
      isRechargeConfigIdClosed = FeatureSwitchMgr::isRechargeConfigIdClosed(
                                   &v11->feature_switch_mgr,
                                   *(_DWORD *)(v3 + 32));
      std::shared_ptr<Config>::~shared_ptr(&v19);
      if ( isRechargeConfigIdClosed )
      {
        common::milog::MiLogStream::create(
          &v20,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/recharge/player_recharge_comp.cpp",
          "getShopRecommendProductList",
          492);
        v13 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                &v20,
                (const char (*)[20])"recharge config_id:");
        v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v13,
                (const unsigned int *)(v3 + 32));
        common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v14, (const char (*)[11])off_25170540);
        common::milog::MiLogStream::~MiLogStream(&v20);
      }
      else
      {
        PlayerRechargeComp::fillRecommendProductData(this, *(_DWORD *)(v3 + 32), shop_proto);
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
    }
    result = 0;
  }
  if ( v21 == (char *)v3 )
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

// Line 501: range 0000000013E20714-0000000013E20FCE
__int64 __fastcall PlayerRechargeComp::fillRecommendProductData(
        PlayerRechargeComp *const this,
        uint32_t config_id,
        proto::Shop *shop_proto)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  __int64 result; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  bool is_internal; // [rsp+26h] [rbp-FAh]
  bool is_epic; // [rsp+27h] [rbp-F9h]
  uint32_t platform_type; // [rsp+28h] [rbp-F8h]
  uint32_t now; // [rsp+2Ch] [rbp-F4h]
  const std::string *product_id; // [rsp+30h] [rbp-F0h]
  const data::ProductDetailConfig *product_config_ptr; // [rsp+38h] [rbp-E8h]
  const data::ProductConcertPackageDetailConfig *concert_config_ptr; // [rsp+40h] [rbp-E0h]
  proto::ShopConcertProduct *concert_proto; // [rsp+48h] [rbp-D8h]
  const data::ProductCardDetailConfig *card_config_ptr; // [rsp+50h] [rbp-D0h]
  proto::ShopCardProduct *card_proto; // [rsp+58h] [rbp-C8h]
  const data::ProductMcoinDetailConfig *mcoin_config_ptr; // [rsp+60h] [rbp-C0h]
  proto::ShopMcoinProduct *mcoin_proto; // [rsp+68h] [rbp-B8h]
  std::shared_ptr<Config> v30; // [rsp+70h] [rbp-B0h] BYREF
  common::milog::MiLogStream v31; // [rsp+80h] [rbp-A0h] BYREF
  char v32[128]; // [rsp+A0h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 16 product_type:512 64 4 13 config_id:500";
  *(_QWORD *)(v3 + 16) = PlayerRechargeComp::fillRecommendProductData;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116348;
  *(_DWORD *)(v3 + 64) = config_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v30);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v30);
  is_internal = Config::isInternalServer(v6);
  std::shared_ptr<Config>::~shared_ptr(&v30);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  platform_type = Player::getPlatformType(this->player_);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  is_epic = Player::isEpic(this->player_);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v30);
  v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v30);
  product_id = ShopmallExcelConfigMgr::findProductIdByConfigId[abi:cxx11](
                 &v7->design_config.txt_config_mgr.shopmall_config_mgr,
                 is_internal,
                 platform_type,
                 is_epic,
                 *(_DWORD *)(v3 + 64));
  std::shared_ptr<Config>::~shared_ptr(&v30);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v30);
  v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v30);
  product_config_ptr = ShopmallExcelConfigMgr::findProductDetailConfig(
                         &v8->design_config.txt_config_mgr.shopmall_config_mgr,
                         product_id);
  std::shared_ptr<Config>::~shared_ptr(&v30);
  if ( !product_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v31,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/recharge/player_recharge_comp.cpp",
      "fillRecommendProductData",
      509);
    v9 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
           &v31,
           (const char (*)[31])"findProductDetailConfig fails:");
    v10 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, product_id);
    v11 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v10, (const char (*)[12])" config_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 64));
    common::milog::MiLogStream::~MiLogStream(&v31);
    result = 0xFFFFFFFFLL;
    goto LABEL_33;
  }
  if ( *(_BYTE *)(((unsigned __int64)&product_config_ptr->product_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&product_config_ptr->product_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&product_config_ptr->product_type);
  }
  *(_DWORD *)(v3 + 48) = product_config_ptr->product_type;
  switch ( *(_DWORD *)(v3 + 48) )
  {
    case 1:
      mcoin_config_ptr = (const data::ProductMcoinDetailConfig *)__dynamic_cast(
                                                                   product_config_ptr,
                                                                   (const struct __class_type_info *)&`typeinfo for'data::ProductDetailConfig,
                                                                   (const struct __class_type_info *)&`typeinfo for'data::ProductMcoinDetailConfig,
                                                                   0LL);
      if ( !mcoin_config_ptr )
      {
        common::milog::MiLogStream::create(
          &v31,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/recharge/player_recharge_comp.cpp",
          "fillRecommendProductData",
          518);
        v13 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                &v31,
                (const char (*)[45])"dynamic_cast ProductMcoinDetailConfig fails:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v13, product_id);
        common::milog::MiLogStream::~MiLogStream(&v31);
        result = 0xFFFFFFFFLL;
        goto LABEL_33;
      }
      mcoin_proto = proto::Shop::add_mcoin_product_list(shop_proto);
      proto::ShopMcoinProduct::set_product_id(mcoin_proto, product_id);
      PlayerRechargeComp::productConfigToClient(this, mcoin_config_ptr, mcoin_proto);
      break;
    case 2:
      card_config_ptr = (const data::ProductCardDetailConfig *)__dynamic_cast(
                                                                 product_config_ptr,
                                                                 (const struct __class_type_info *)&`typeinfo for'data::ProductDetailConfig,
                                                                 (const struct __class_type_info *)&`typeinfo for'data::ProductCardDetailConfig,
                                                                 0LL);
      if ( !card_config_ptr )
      {
        common::milog::MiLogStream::create(
          &v31,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/recharge/player_recharge_comp.cpp",
          "fillRecommendProductData",
          530);
        v14 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                &v31,
                (const char (*)[44])"dynamic_cast ProductCardDetailConfig fails:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v14, product_id);
        common::milog::MiLogStream::~MiLogStream(&v31);
        result = 0xFFFFFFFFLL;
        goto LABEL_33;
      }
      card_proto = proto::Shop::add_card_product_list(shop_proto);
      proto::ShopCardProduct::set_product_id(card_proto, product_id);
      PlayerRechargeComp::productConfigToClient(this, card_config_ptr, card_proto);
      break;
    case 6:
      concert_config_ptr = (const data::ProductConcertPackageDetailConfig *)__dynamic_cast(
                                                                              product_config_ptr,
                                                                              (const struct __class_type_info *)&`typeinfo for'data::ProductDetailConfig,
                                                                              (const struct __class_type_info *)&`typeinfo for'data::ProductConcertPackageDetailConfig,
                                                                              0LL);
      if ( !concert_config_ptr )
      {
        common::milog::MiLogStream::create(
          &v31,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/recharge/player_recharge_comp.cpp",
          "fillRecommendProductData",
          542);
        v15 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
                &v31,
                (const char (*)[54])"dynamic_cast ProductConcertPackageDetailConfig fails:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v15, product_id);
        common::milog::MiLogStream::~MiLogStream(&v31);
        result = 0xFFFFFFFFLL;
        goto LABEL_33;
      }
      now = common::tools::TimeUtils::getNow();
      if ( *(_BYTE *)(((unsigned __int64)&concert_config_ptr->begin_timestamp >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&concert_config_ptr->begin_timestamp >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&concert_config_ptr->begin_timestamp);
      }
      if ( concert_config_ptr->begin_timestamp )
      {
        if ( *(_BYTE *)(((unsigned __int64)&concert_config_ptr->end_timestamp >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)concert_config_ptr - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&concert_config_ptr->end_timestamp >> 3)
                                                                            + 0x7FFF8000) )
        {
          __asan_report_load4(&concert_config_ptr->end_timestamp);
        }
        if ( concert_config_ptr->end_timestamp && now <= concert_config_ptr->end_timestamp )
        {
          concert_proto = proto::Shop::add_concert_product_list(shop_proto);
          proto::ShopConcertProduct::set_product_id(concert_proto, product_id);
          PlayerRechargeComp::productConfigToClient(this, concert_config_ptr, concert_proto);
        }
      }
      break;
    default:
      common::milog::MiLogStream::create(
        &v31,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/recharge/player_recharge_comp.cpp",
        "fillRecommendProductData",
        560);
      v16 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(&v31, (const char (*)[37])off_251708E0);
      common::milog::MiLogStream::operator<<<data::ProductType,(data::ProductType*)0>(
        v16,
        (const data::ProductType *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v31);
      break;
  }
  result = 0LL;
LABEL_33:
  if ( v32 == (char *)v3 )
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
  return result;
};

// Line 566: range 0000000013E20FD0-0000000013E211A6
void __cdecl PlayerRechargeComp::productConfigToClient(
        const PlayerRechargeComp *const this,
        const data::ProductMcoinDetailConfig *mcoin_config,
        proto::ShopMcoinProduct *mcoin_proto)
{
  uint32_t McoinProductBuyTimes; // edx

  proto::ShopMcoinProduct::set_price_tier(mcoin_proto, &mcoin_config->price_tier);
  if ( *(_BYTE *)(((unsigned __int64)&mcoin_config->mcoin_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&mcoin_config->mcoin_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&mcoin_config->mcoin_num);
  }
  proto::ShopMcoinProduct::set_mcoin_base(mcoin_proto, mcoin_config->mcoin_num);
  if ( *(_BYTE *)(((unsigned __int64)&mcoin_config->mcoin_non_first >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)mcoin_config + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&mcoin_config->mcoin_non_first >> 3)
                                                                + 0x7FFF8000) )
  {
    __asan_report_load4(&mcoin_config->mcoin_non_first);
  }
  proto::ShopMcoinProduct::set_mcoin_non_first(mcoin_proto, mcoin_config->mcoin_non_first);
  if ( *(_BYTE *)(((unsigned __int64)&mcoin_config->mcoin_first >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&mcoin_config->mcoin_first >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&mcoin_config->mcoin_first);
  }
  proto::ShopMcoinProduct::set_mcoin_first(mcoin_proto, mcoin_config->mcoin_first);
  if ( *(char *)(((unsigned __int64)&mcoin_config->is_audit >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&mcoin_config->is_audit);
  proto::ShopMcoinProduct::set_is_audit(mcoin_proto, mcoin_config->is_audit);
  if ( *(char *)(((unsigned __int64)&mcoin_config->is_audit >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&mcoin_config->is_audit);
  if ( mcoin_config->is_audit )
    proto::ShopMcoinProduct::set_price_tier(mcoin_proto, &mcoin_config->audit_display_tier);
  McoinProductBuyTimes = PlayerRechargeComp::getMcoinProductBuyTimes(this, mcoin_config);
  proto::ShopMcoinProduct::set_bought_num(mcoin_proto, McoinProductBuyTimes);
};

// Line 585: range 0000000013E211A8-0000000013E2184C
void __cdecl PlayerRechargeComp::productConfigToClient(
        const PlayerRechargeComp *const this,
        const data::ProductCardDetailConfig *card_config,
        proto::ShopCardProduct *card_proto)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,CardProductData>,false,false>::pointer v7; // rax
  uint32_t RemainRewardDays; // edx
  proto::ShopCardProduct_ResinCard *v9; // rax
  proto::ItemParam *v10; // rax
  proto::ShopCardProduct_ResinCard *v11; // rax
  proto::ItemParam *v12; // rax
  uint32_t day_offset; // [rsp+2Ch] [rbp-D4h]
  std::map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+30h] [rbp-D0h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+38h] [rbp-C8h] BYREF
  const std::map<unsigned int,unsigned int> *__for_range; // [rsp+40h] [rbp-C0h]
  const std::map<unsigned int,unsigned int> *__for_range_0; // [rsp+48h] [rbp-B8h]
  const std::pair<unsigned int const,unsigned int> *v19; // [rsp+50h] [rbp-B0h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *k_0; // [rsp+58h] [rbp-A8h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v_0; // [rsp+60h] [rbp-A0h]
  const std::pair<unsigned int const,unsigned int> *v22; // [rsp+68h] [rbp-98h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *k; // [rsp+70h] [rbp-90h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v; // [rsp+78h] [rbp-88h]
  char v25[128]; // [rsp+80h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 8 iter:592 64 16 14 item_param:611";
  *(_QWORD *)(v3 + 16) = PlayerRechargeComp::productConfigToClient;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -202178560;
  proto::ShopCardProduct::set_price_tier(card_proto, &card_config->price_tier);
  if ( *(_BYTE *)(((unsigned __int64)&card_config->mcoin_base >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&card_config->mcoin_base >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&card_config->mcoin_base);
  }
  proto::ShopCardProduct::set_mcoin_base(card_proto, card_config->mcoin_base);
  if ( *(_BYTE *)(((unsigned __int64)&card_config->hcoin_per_day >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)card_config + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&card_config->hcoin_per_day >> 3)
                                                               + 0x7FFF8000) )
  {
    __asan_report_load4(&card_config->hcoin_per_day);
  }
  proto::ShopCardProduct::set_hcoin_per_day(card_proto, card_config->hcoin_per_day);
  if ( *(_BYTE *)(((unsigned __int64)&card_config->days >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&card_config->days >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&card_config->days);
  }
  proto::ShopCardProduct::set_days(card_proto, card_config->days);
  *(std::unordered_map<unsigned int,CardProductData>::const_iterator *)(v3 + 32) = std::unordered_map<unsigned int,CardProductData>::find(
                                                                                     &this->card_product_map_,
                                                                                     &card_config->config_id);
  __for_end._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr)std::unordered_map<unsigned int,CardProductData>::end(&this->card_product_map_)._M_cur;
  if ( std::__detail::operator!=<std::pair<unsigned int const,CardProductData>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,CardProductData>,false> *)(v3 + 32),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,CardProductData>,false> *)&__for_end) )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v3 + 64));
    v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    day_offset = ConstValueExcelConfigMgr::getTimeOffsetSec(&v6->design_config.txt_config_mgr.const_value_config_mgr);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 64));
    v7 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,CardProductData>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,CardProductData>,false,false> *const)(v3 + 32));
    RemainRewardDays = CardProductData::getRemainRewardDays(&v7->second, day_offset);
    proto::ShopCardProduct::set_remain_reward_days(card_proto, RemainRewardDays);
  }
  if ( *(_BYTE *)(((unsigned __int64)&card_config->card_product_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&card_config->card_product_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&card_config->card_product_type);
  }
  proto::ShopCardProduct::set_card_product_type(card_proto, card_config->card_product_type);
  if ( *(_BYTE *)(((unsigned __int64)&card_config->card_product_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&card_config->card_product_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&card_config->card_product_type);
  }
  if ( card_config->card_product_type == CARD_PRODUCT_TYPE_RESIN )
  {
    __for_range = &card_config->base_item_map;
    __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(&card_config->base_item_map)._M_node;
    __for_end._M_node = std::map<unsigned int,unsigned int>::end(__for_range)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v22 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
      k = std::get<0ul,unsigned int const,unsigned int>(v22);
      v = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v22);
      *(_DWORD *)(v3 + 64) = 0;
      *(_DWORD *)(v3 + 68) = 0;
      *(_DWORD *)(v3 + 72) = 0;
      *(_DWORD *)(v3 + 76) = 0;
      if ( *(_BYTE *)(((unsigned __int64)k >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)k & 7) + 3) >= *(_BYTE *)(((unsigned __int64)k >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(k);
      }
      *(_DWORD *)(v3 + 64) = *k;
      if ( *(_BYTE *)(((unsigned __int64)v >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v);
      }
      *(_DWORD *)(v3 + 68) = *v;
      v9 = proto::ShopCardProduct::mutable_resin_card(card_proto);
      v10 = proto::ShopCardProduct_ResinCard::add_base_item_list(v9);
      ItemParam::toClient((const ItemParam *const)(v3 + 64), v10);
      std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
    }
    __for_range_0 = &card_config->per_day_item_map;
    __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(&card_config->per_day_item_map)._M_node;
    __for_end._M_node = std::map<unsigned int,unsigned int>::end(__for_range_0)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v19 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
      k_0 = std::get<0ul,unsigned int const,unsigned int>(v19);
      v_0 = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v19);
      *(_DWORD *)(v3 + 64) = 0;
      *(_DWORD *)(v3 + 68) = 0;
      *(_DWORD *)(v3 + 72) = 0;
      *(_DWORD *)(v3 + 76) = 0;
      if ( *(_BYTE *)(((unsigned __int64)k_0 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)k_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)k_0 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(k_0);
      }
      *(_DWORD *)(v3 + 64) = *k_0;
      if ( *(_BYTE *)(((unsigned __int64)v_0 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v_0 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v_0);
      }
      *(_DWORD *)(v3 + 68) = *v_0;
      v11 = proto::ShopCardProduct::mutable_resin_card(card_proto);
      v12 = proto::ShopCardProduct_ResinCard::add_per_day_item_list(v11);
      ItemParam::toClient((const ItemParam *const)(v3 + 64), v12);
      std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
    }
  }
  if ( v25 == (char *)v3 )
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

// Line 620: range 0000000013E2184E-0000000013E219DE
void __cdecl PlayerRechargeComp::productConfigToClient(
        const PlayerRechargeComp *const this,
        const data::ProductConcertPackageDetailConfig *concert_config,
        proto::ShopConcertProduct *concert_proto)
{
  google::protobuf::uint32 ConcertProductObtainCount; // edx
  google::protobuf::uint32 ConcertProductBuyTimes; // edx

  proto::ShopConcertProduct::set_price_tier(concert_proto, &concert_config->price_tier);
  if ( *(_BYTE *)(((unsigned __int64)&concert_config->config_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&concert_config->config_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&concert_config->config_id);
  }
  ConcertProductObtainCount = PlayerRechargeComp::getConcertProductObtainCount(this, concert_config->config_id);
  proto::ShopConcertProduct::set_obtain_count(concert_proto, ConcertProductObtainCount);
  proto::ShopConcertProduct::set_obtain_limit(concert_proto, 1u);
  if ( *(_BYTE *)(((unsigned __int64)&concert_config->begin_timestamp >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&concert_config->begin_timestamp >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&concert_config->begin_timestamp);
  }
  proto::ShopConcertProduct::set_begin_time(concert_proto, concert_config->begin_timestamp);
  if ( *(_BYTE *)(((unsigned __int64)&concert_config->end_timestamp >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)concert_config - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&concert_config->end_timestamp >> 3)
                                                                  + 0x7FFF8000) )
  {
    __asan_report_load4(&concert_config->end_timestamp);
  }
  proto::ShopConcertProduct::set_end_time(concert_proto, concert_config->end_timestamp);
  if ( *(_BYTE *)(((unsigned __int64)&concert_config->config_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&concert_config->config_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&concert_config->config_id);
  }
  ConcertProductBuyTimes = PlayerRechargeComp::getConcertProductBuyTimes(this, concert_config->config_id);
  proto::ShopConcertProduct::set_buy_times(concert_proto, ConcertProductBuyTimes);
};

// Line 631: range 0000000013E219E0-0000000013E23B38
int32_t __cdecl PlayerRechargeComp::onRecharge(
        PlayerRechargeComp *const this,
        const proto::RechargeReq *req,
        proto::RechargeRsp *rsp_0)
{
  int32_t v3; // r13d
  unsigned __int64 v4; // r14
  __int64 v5; // rax
  _DWORD *v6; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  bool isRechargeSystemClosed; // r15
  const proto::ShopMcoinProduct *v9; // rax
  const std::string *v10; // rax
  const std::string *v11; // rdx
  ShopmallExcelConfigMgr *v12; // r13
  const std::string *v13; // rax
  common::milog::MiLogStream *v14; // r13
  const std::string *v15; // rax
  const std::string *v16; // rax
  const std::string *v17; // rax
  google::protobuf::uint32 v18; // ecx
  google::protobuf::uint32 v19; // ecx
  google::protobuf::uint32 v20; // ecx
  char v21; // al
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // r13
  const std::string *v25; // rax
  const proto::ShopCardProduct *v26; // rax
  const std::string *v27; // rax
  const std::string *v28; // rdx
  ShopmallExcelConfigMgr *p_shopmall_config_mgr; // r13
  const std::string *v30; // rax
  ShopmallExcelConfigMgr *v31; // r13
  const std::string *v32; // rax
  common::milog::MiLogStream *v33; // r13
  const std::string *v34; // rax
  const std::string *v35; // rax
  google::protobuf::uint32 v36; // ecx
  google::protobuf::uint32 v37; // ecx
  char v38; // al
  common::milog::MiLogStream *v39; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v40; // rax
  bool isMinorsRechargeHintEnabled; // r13
  bool isMinor; // dl
  common::milog::MiLogStream *v43; // r13
  const std::string *v44; // rax
  const proto::PlayProduct *v45; // rax
  const std::string *v46; // rax
  const std::string *v47; // rdx
  ShopmallExcelConfigMgr *v48; // r13
  const std::string *v49; // rax
  common::milog::MiLogStream *v50; // r13
  const std::string *v51; // rax
  const std::string *v52; // rax
  PlayerBattlePassComp *BattlePassComp; // r15
  uint32_t play_type; // r13d
  uint32_t v55; // eax
  common::milog::MiLogStream *v56; // r13
  common::milog::MiLogStream *v57; // rax
  common::milog::MiLogStream *v58; // r13
  const std::string *v59; // rax
  common::milog::MiLogStream *v60; // rax
  common::milog::MiLogStream *v61; // rax
  common::milog::MiLogStream *v62; // r13
  const std::string *v63; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v64; // rax
  bool v65; // r13
  bool v66; // dl
  const std::string *v67; // rax
  const proto::ShopConcertProduct *v68; // rax
  const std::string *v69; // rax
  const std::string *v70; // rdx
  ShopmallExcelConfigMgr *v71; // r15
  const std::string *v72; // rax
  common::milog::MiLogStream *v73; // r13
  const std::string *v74; // rax
  const std::string *v75; // rax
  common::milog::MiLogStream *v76; // r13
  common::milog::MiLogStream *v77; // rax
  common::milog::MiLogStream *v78; // rax
  common::milog::MiLogStream *v79; // rax
  common::milog::MiLogStream *v80; // r13
  common::milog::MiLogStream *v81; // r13
  common::milog::MiLogStream *v82; // rax
  common::milog::MiLogStream *v83; // rax
  common::milog::MiLogStream *v84; // rax
  common::milog::MiLogStream *v85; // rax
  common::milog::MiLogStream *v86; // r13
  const std::string *v87; // rax
  std::vector<data::PackageContentConfig>::size_type v88; // rax
  PlayerItemComp *ItemComp; // rax
  common::milog::MiLogStream *v90; // r13
  common::milog::MiLogStream *v91; // rax
  common::milog::MiLogStream *v92; // r13
  const std::string *v93; // rax
  int v94; // r15d
  const std::string *v95; // rax
  FeatureSwitchMgr *p_feature_switch_mgr; // rcx
  bool isRechargeConfigIdClosed; // r13
  common::milog::MiLogStream *v98; // rax
  common::milog::MiLogStream *v99; // rax
  common::milog::MiLogStream *v100; // r13
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-1F4h] BYREF
  uint32_t now; // [rsp+30h] [rbp-1F0h]
  int32_t ret_2; // [rsp+34h] [rbp-1ECh]
  int32_t ret_1; // [rsp+38h] [rbp-1E8h]
  uint32_t platform_type; // [rsp+3Ch] [rbp-1E4h]
  int32_t ret; // [rsp+40h] [rbp-1E0h]
  int32_t ret_0; // [rsp+44h] [rbp-1DCh]
  std::vector<data::PackageContentConfig>::const_iterator __for_begin; // [rsp+48h] [rbp-1D8h] BYREF
  std::vector<data::PackageContentConfig>::const_iterator __for_end; // [rsp+50h] [rbp-1D0h] BYREF
  const data::ProductDetailConfig *detail_config_ptr; // [rsp+58h] [rbp-1C8h]
  const proto::ShopConcertProduct *concert_product; // [rsp+60h] [rbp-1C0h]
  const data::ProductConcertPackageDetailConfig *concert_config_ptr; // [rsp+68h] [rbp-1B8h]
  const std::vector<data::PackageContentConfig> *__for_range; // [rsp+70h] [rbp-1B0h]
  const data::PackageContentConfig *content; // [rsp+78h] [rbp-1A8h]
  const proto::PlayProduct *play_product; // [rsp+80h] [rbp-1A0h]
  const data::ProductPlayDetailConfig *play_config_ptr; // [rsp+88h] [rbp-198h]
  const proto::ShopCardProduct *card_product; // [rsp+90h] [rbp-190h]
  const data::ProductCardDetailConfig *card_config_ptr; // [rsp+98h] [rbp-188h]
  const proto::ShopMcoinProduct *mcoin_product; // [rsp+A0h] [rbp-180h]
  const data::ProductMcoinDetailConfig *mcoin_config_ptr; // [rsp+A8h] [rbp-178h]
  common::milog::MiLogStream v123; // [rsp+B0h] [rbp-170h] BYREF
  char v124[336]; // [rsp+D0h] [rbp-150h] BYREF

  v4 = (unsigned __int64)v124;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(288LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "6 32 4 16 obtain_count:796 48 4 14 bought_num:680 64 16 14 item_param:822 96 24 18 item_param_ve"
                        "c:818 160 24 10 reason:825 224 32 14 product_id:640";
  *(_QWORD *)(v4 + 16) = PlayerRechargeComp::onRecharge;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -219021312;
  v6[536862723] = -234881024;
  v6[536862724] = -218959118;
  v6[536862725] = -234881024;
  v6[536862726] = -218959118;
  v6[536862728] = -202116109;
  PlayerRechargeComp::refreshProductLimit(this);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v4 + 64));
  v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
  isRechargeSystemClosed = FeatureSwitchMgr::isRechargeSystemClosed(&v7->feature_switch_mgr);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 64));
  if ( isRechargeSystemClosed )
  {
    common::milog::MiLogStream::create(
      &v123,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/recharge/player_recharge_comp.cpp",
      "onRecharge",
      636);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
      &v123,
      (const char (*)[26])"recharge system is closed");
    common::milog::MiLogStream::~MiLogStream(&v123);
    v3 = 142;
    goto LABEL_136;
  }
  std::string::basic_string(v4 + 224);
  detail_config_ptr = 0LL;
  v9 = proto::RechargeReq::mcoin_product(req);
  v10 = proto::ShopMcoinProduct::product_id[abi:cxx11](v9);
  if ( (unsigned __int8)std::string::empty(v10) == 1 )
  {
    v26 = proto::RechargeReq::card_product(req);
    v27 = proto::ShopCardProduct::product_id[abi:cxx11](v26);
    if ( (unsigned __int8)std::string::empty(v27) != 1 )
    {
      card_product = proto::RechargeReq::card_product(req);
      v28 = proto::ShopCardProduct::product_id[abi:cxx11](card_product);
      proto::RechargeRsp::set_product_id(rsp_0, v28);
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)(v4 + 64));
      p_shopmall_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64))->design_config.txt_config_mgr.shopmall_config_mgr;
      v30 = proto::ShopCardProduct::product_id[abi:cxx11](card_product);
      card_config_ptr = ShopmallExcelConfigMgr::findProductCardDetailConfig(p_shopmall_config_mgr, v30);
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 64));
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)(v4 + 64));
      v31 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64))->design_config.txt_config_mgr.shopmall_config_mgr;
      v32 = proto::ShopCardProduct::product_id[abi:cxx11](card_product);
      platform_type = ShopmallExcelConfigMgr::getChargePlatformTypeByProductId(v31, v32);
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 64));
      if ( !card_config_ptr )
      {
        common::milog::MiLogStream::create(
          &v123,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/recharge/player_recharge_comp.cpp",
          "onRecharge",
          698);
        v33 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                &v123,
                (const char (*)[29])"findProductCardConfig fails:");
        v34 = proto::ShopCardProduct::product_id[abi:cxx11](card_product);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v33, v34);
        common::milog::MiLogStream::~MiLogStream(&v123);
        v3 = -1;
        goto LABEL_135;
      }
      v35 = proto::ShopCardProduct::price_tier[abi:cxx11](card_product);
      if ( std::operator!=<char>(v35, &card_config_ptr->price_tier) )
        goto LABEL_42;
      v36 = proto::ShopCardProduct::mcoin_base(card_product);
      if ( *(_BYTE *)(((unsigned __int64)&card_config_ptr->mcoin_base >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&card_config_ptr->mcoin_base >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&card_config_ptr->mcoin_base);
      }
      if ( v36 != card_config_ptr->mcoin_base )
        goto LABEL_42;
      v37 = proto::ShopCardProduct::hcoin_per_day(card_product);
      if ( *(_BYTE *)(((unsigned __int64)&card_config_ptr->hcoin_per_day >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)card_config_ptr + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&card_config_ptr->hcoin_per_day >> 3)
                                                                       + 0x7FFF8000) )
      {
        __asan_report_load4(&card_config_ptr->hcoin_per_day);
      }
      if ( v37 == card_config_ptr->hcoin_per_day )
        v38 = 0;
      else
LABEL_42:
        v38 = 1;
      if ( v38 )
      {
        common::milog::MiLogStream::create(
          &v123,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/recharge/player_recharge_comp.cpp",
          "onRecharge",
          706);
        common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
          &v123,
          (const char (*)[30])"card product config not match");
        common::milog::MiLogStream::~MiLogStream(&v123);
        v3 = -1;
        goto LABEL_135;
      }
      if ( *(_BYTE *)(((unsigned __int64)&card_config_ptr->card_product_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&card_config_ptr->card_product_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&card_config_ptr->card_product_type);
      }
      if ( card_config_ptr->card_product_type == CARD_PRODUCT_TYPE_HCOIN )
      {
        ret = PlayerRechargeComp::checkCanGetHcoinCardProduct(this, card_config_ptr, platform_type);
        if ( ret )
        {
          common::milog::MiLogStream::create(
            &v123,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/recharge/player_recharge_comp.cpp",
            "onRecharge",
            714);
          v39 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                  &v123,
                  (const char (*)[40])"checkCanGetHcoinCardProduct fails, uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          val = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v39, &val);
          common::milog::MiLogStream::~MiLogStream(&v123);
          v3 = ret;
          goto LABEL_135;
        }
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)(v4 + 64));
        v40 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
        isMinorsRechargeHintEnabled = FeatureSwitchMgr::isMinorsRechargeHintEnabled(&v40->feature_switch_mgr);
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 64));
        if ( isMinorsRechargeHintEnabled )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          isMinor = Player::isMinor(this->player_);
          proto::RechargeRsp::set_is_show_minors_hint(rsp_0, isMinor);
        }
      }
      if ( *(_BYTE *)(((unsigned __int64)&card_config_ptr->card_product_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&card_config_ptr->card_product_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&card_config_ptr->card_product_type);
      }
      if ( card_config_ptr->card_product_type == CARD_PRODUCT_TYPE_RESIN )
      {
        ret_0 = PlayerRechargeComp::checkCanGetResinCardProduct(this, card_config_ptr);
        if ( ret_0 )
        {
          common::milog::MiLogStream::create(
            &v123,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/recharge/player_recharge_comp.cpp",
            "onRecharge",
            728);
          v43 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                  &v123,
                  (const char (*)[40])"checkCanGetResinCardProduct fails, uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          val = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v43, &val);
          common::milog::MiLogStream::~MiLogStream(&v123);
          v3 = ret_0;
          goto LABEL_135;
        }
      }
      detail_config_ptr = card_config_ptr;
      v44 = proto::ShopCardProduct::product_id[abi:cxx11](card_product);
      std::string::operator=(v4 + 224, v44);
    }
    else
    {
      v45 = proto::RechargeReq::play_product(req);
      v46 = proto::PlayProduct::product_id[abi:cxx11](v45);
      if ( (unsigned __int8)std::string::empty(v46) != 1 )
      {
        play_product = proto::RechargeReq::play_product(req);
        v47 = proto::PlayProduct::product_id[abi:cxx11](play_product);
        proto::RechargeRsp::set_product_id(rsp_0, v47);
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)(v4 + 64));
        v48 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64))->design_config.txt_config_mgr.shopmall_config_mgr;
        v49 = proto::PlayProduct::product_id[abi:cxx11](play_product);
        play_config_ptr = ShopmallExcelConfigMgr::findProductPlayDetailConfig(v48, v49);
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 64));
        if ( !play_config_ptr )
        {
          common::milog::MiLogStream::create(
            &v123,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/recharge/player_recharge_comp.cpp",
            "onRecharge",
            742);
          v50 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                  &v123,
                  (const char (*)[35])"findProductPlayDetailConfig fails:");
          v51 = proto::PlayProduct::product_id[abi:cxx11](play_product);
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v50, v51);
          common::milog::MiLogStream::~MiLogStream(&v123);
          v3 = -1;
          goto LABEL_135;
        }
        v52 = proto::PlayProduct::price_tier[abi:cxx11](play_product);
        if ( std::operator!=<char>(&play_config_ptr->price_tier, v52) )
        {
          common::milog::MiLogStream::create(
            &v123,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/recharge/player_recharge_comp.cpp",
            "onRecharge",
            747);
          common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
            &v123,
            (const char (*)[28])"price tier config not match");
          common::milog::MiLogStream::~MiLogStream(&v123);
          v3 = -1;
          goto LABEL_135;
        }
        if ( *(_BYTE *)(((unsigned __int64)&play_config_ptr->play_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&play_config_ptr->play_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&play_config_ptr->play_type);
        }
        if ( (unsigned int)(play_config_ptr->play_type - 1) > 2 )
        {
          common::milog::MiLogStream::create(
            &v123,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/recharge/player_recharge_comp.cpp",
            "onRecharge",
            766);
          v60 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v123, (const char (*)[23])off_25170E60);
          v61 = common::milog::MiLogStream::operator<<<data::ProductPlayType,(data::ProductPlayType*)0>(
                  v60,
                  &play_config_ptr->play_type);
          v62 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v61, (const char (*)[13])" ,product_id");
          v63 = proto::PlayProduct::product_id[abi:cxx11](play_product);
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v62, v63);
          common::milog::MiLogStream::~MiLogStream(&v123);
          v3 = -1;
          goto LABEL_135;
        }
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        BattlePassComp = Player::getBattlePassComp(this->player_);
        if ( *(_BYTE *)(((unsigned __int64)&play_config_ptr->play_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&play_config_ptr->play_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&play_config_ptr->play_type);
        }
        play_type = play_config_ptr->play_type;
        v55 = proto::PlayProduct::schedule_id(play_product);
        ret_1 = PlayerBattlePassComp::checkCanBuyBattlePass(BattlePassComp, v55, play_type);
        if ( ret_1 )
        {
          common::milog::MiLogStream::create(
            &v123,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/recharge/player_recharge_comp.cpp",
            "onRecharge",
            759);
          v56 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                  &v123,
                  (const char (*)[43])"checkCanBuyBattlePass failed, schedule_id:");
          val = proto::PlayProduct::schedule_id(play_product);
          v57 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v56, &val);
          v58 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v57, (const char (*)[13])" product_id:");
          v59 = proto::PlayProduct::product_id[abi:cxx11](play_product);
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v58, v59);
          common::milog::MiLogStream::~MiLogStream(&v123);
          v3 = ret_1;
          goto LABEL_135;
        }
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)(v4 + 64));
        v64 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
        v65 = FeatureSwitchMgr::isMinorsRechargeHintEnabled(&v64->feature_switch_mgr);
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 64));
        if ( v65 )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          v66 = Player::isMinor(this->player_);
          proto::RechargeRsp::set_is_show_minors_hint(rsp_0, v66);
        }
        detail_config_ptr = play_config_ptr;
        v67 = proto::PlayProduct::product_id[abi:cxx11](play_product);
        std::string::operator=(v4 + 224, v67);
      }
      else
      {
        v68 = proto::RechargeReq::concert_product(req);
        v69 = proto::ShopConcertProduct::product_id[abi:cxx11](v68);
        if ( (unsigned __int8)std::string::empty(v69) != 1 )
        {
          concert_product = proto::RechargeReq::concert_product(req);
          v70 = proto::ShopConcertProduct::product_id[abi:cxx11](concert_product);
          proto::RechargeRsp::set_product_id(rsp_0, v70);
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)(v4 + 64));
          v71 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64))->design_config.txt_config_mgr.shopmall_config_mgr;
          v72 = proto::ShopConcertProduct::product_id[abi:cxx11](concert_product);
          concert_config_ptr = ShopmallExcelConfigMgr::findProductConcertPackageDetailConfig(v71, v72);
          std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 64));
          if ( !concert_config_ptr )
          {
            common::milog::MiLogStream::create(
              &v123,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/recharge/player_recharge_comp.cpp",
              "onRecharge",
              786);
            v73 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                    &v123,
                    (const char (*)[45])"findProductConcertPackageDetailConfig fails:");
            v74 = proto::ShopConcertProduct::product_id[abi:cxx11](concert_product);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v73, v74);
            common::milog::MiLogStream::~MiLogStream(&v123);
            v3 = -1;
            goto LABEL_135;
          }
          v75 = proto::ShopConcertProduct::price_tier[abi:cxx11](concert_product);
          if ( std::operator!=<char>(&concert_config_ptr->price_tier, v75) )
          {
            common::milog::MiLogStream::create(
              &v123,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/recharge/player_recharge_comp.cpp",
              "onRecharge",
              792);
            common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
              &v123,
              (const char (*)[28])"price tier config not match");
            common::milog::MiLogStream::~MiLogStream(&v123);
            v3 = -1;
            goto LABEL_135;
          }
          if ( *(_BYTE *)(((unsigned __int64)&concert_config_ptr->config_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&concert_config_ptr->config_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&concert_config_ptr->config_id);
          }
          *(_DWORD *)(v4 + 32) = PlayerRechargeComp::getConcertProductObtainCount(this, concert_config_ptr->config_id);
          if ( proto::ShopConcertProduct::obtain_count(concert_product) != *(_DWORD *)(v4 + 32) )
          {
            common::milog::MiLogStream::create(
              &v123,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/recharge/player_recharge_comp.cpp",
              "onRecharge",
              799);
            v76 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v123, (const char (*)[5])"uid:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            *(_DWORD *)(v4 + 48) = Player::getUid(this->player_);
            v77 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v76,
                    (const unsigned int *)(v4 + 48));
            v78 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                    v77,
                    (const char (*)[31])" concert product obtain_count:");
            v79 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v78,
                    (const unsigned int *)(v4 + 32));
            v80 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v79, (const char (*)[9])" client:");
            val = proto::ShopConcertProduct::obtain_count(concert_product);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v80, &val);
            common::milog::MiLogStream::~MiLogStream(&v123);
            v3 = -1;
            goto LABEL_135;
          }
          if ( *(_DWORD *)(v4 + 32) )
          {
            common::milog::MiLogStream::create(
              &v123,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/recharge/player_recharge_comp.cpp",
              "onRecharge",
              804);
            v81 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v123, (const char (*)[5])"uid:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            val = Player::getUid(this->player_);
            v82 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v81, &val);
            v83 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                    v82,
                    (const char (*)[31])" concert product obtain_count:");
            v84 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v83,
                    (const unsigned int *)(v4 + 32));
            v85 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    v84,
                    (const char (*)[16])" obtain_limit: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v85,
              &PlayerRechargeComp::concert_product_obtain_limit);
            common::milog::MiLogStream::~MiLogStream(&v123);
            v3 = 2014;
            goto LABEL_135;
          }
          now = common::tools::TimeUtils::getNow();
          if ( *(_BYTE *)(((unsigned __int64)&concert_config_ptr->begin_timestamp >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&concert_config_ptr->begin_timestamp >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&concert_config_ptr->begin_timestamp);
          }
          if ( concert_config_ptr->begin_timestamp )
          {
            if ( *(_BYTE *)(((unsigned __int64)&concert_config_ptr->end_timestamp >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)concert_config_ptr - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&concert_config_ptr->end_timestamp >> 3)
                                                                                + 0x7FFF8000) )
            {
              __asan_report_load4(&concert_config_ptr->end_timestamp);
            }
            if ( concert_config_ptr->end_timestamp
              && (now < concert_config_ptr->begin_timestamp || now > concert_config_ptr->end_timestamp) )
            {
              common::milog::MiLogStream::create(
                &v123,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/recharge/player_recharge_comp.cpp",
                "onRecharge",
                813);
              v86 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                      &v123,
                      (const char (*)[36])"concert product not in time range: ");
              v87 = proto::ShopConcertProduct::product_id[abi:cxx11](concert_product);
              common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v86, v87);
              common::milog::MiLogStream::~MiLogStream(&v123);
              v3 = -1;
              goto LABEL_135;
            }
          }
          std::vector<ItemParam>::vector((std::vector<ItemParam> *const)(v4 + 96));
          v88 = std::vector<data::PackageContentConfig>::size(&concert_config_ptr->content_vec);
          std::vector<ItemParam>::reserve((std::vector<ItemParam> *const)(v4 + 96), v88);
          __for_range = &concert_config_ptr->content_vec;
          __for_begin._M_current = std::vector<data::PackageContentConfig>::begin(&concert_config_ptr->content_vec)._M_current;
          __for_end._M_current = std::vector<data::PackageContentConfig>::end(&concert_config_ptr->content_vec)._M_current;
          while ( __gnu_cxx::operator!=<data::PackageContentConfig const*,std::vector<data::PackageContentConfig>>(
                    &__for_begin,
                    &__for_end) )
          {
            content = __gnu_cxx::__normal_iterator<data::PackageContentConfig const*,std::vector<data::PackageContentConfig>>::operator*(&__for_begin);
            *(_QWORD *)(v4 + 64) = 0LL;
            *(_QWORD *)(v4 + 72) = 0LL;
            if ( *(_BYTE *)(((unsigned __int64)&content->material_id >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&content->material_id >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&content->material_id);
            }
            *(_DWORD *)(v4 + 64) = content->material_id;
            if ( *(_BYTE *)(((unsigned __int64)&content->material_num >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)content + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&content->material_num >> 3)
                                                                     + 0x7FFF8000) )
            {
              __asan_report_load4(&content->material_num);
            }
            *(_DWORD *)(v4 + 68) = content->material_num;
            std::vector<ItemParam>::push_back(
              (std::vector<ItemParam> *const)(v4 + 96),
              (const std::vector<ItemParam>::value_type *)(v4 + 64));
            __gnu_cxx::__normal_iterator<data::PackageContentConfig const*,std::vector<data::PackageContentConfig>>::operator++(&__for_begin);
          }
          ActionReason::ActionReason(
            (ActionReason *const)(v4 + 160),
            ACTION_REASON_RECHARGE_CONCERT_PRODUCT,
            ITEM_LIMIT_UNLIMITED);
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          ItemComp = Player::getItemComp(this->player_);
          ret_2 = PlayerItemComp::checkAddItemBatch(
                    ItemComp,
                    (const std::vector<ItemParam> *)(v4 + 96),
                    (const ActionReason *)(v4 + 160));
          if ( ret_2 )
          {
            common::milog::MiLogStream::create(
              &v123,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/recharge/player_recharge_comp.cpp",
              "onRecharge",
              829);
            v90 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                    &v123,
                    (const char (*)[31])"checkAddItemBatch failed, uid:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            val = Player::getUid(this->player_);
            v91 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v90, &val);
            v92 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                    v91,
                    (const char (*)[15])" ,product_id: ");
            v93 = proto::ShopConcertProduct::product_id[abi:cxx11](concert_product);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v92, v93);
            common::milog::MiLogStream::~MiLogStream(&v123);
            v3 = ret_2;
            v94 = 0;
          }
          else
          {
            detail_config_ptr = concert_config_ptr;
            v95 = proto::ShopConcertProduct::product_id[abi:cxx11](concert_product);
            std::string::operator=(v4 + 224, v95);
            v94 = 1;
          }
          std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v4 + 96));
          if ( v94 != 1 )
            goto LABEL_135;
        }
      }
    }
    goto LABEL_124;
  }
  mcoin_product = proto::RechargeReq::mcoin_product(req);
  v11 = proto::ShopMcoinProduct::product_id[abi:cxx11](mcoin_product);
  proto::RechargeRsp::set_product_id(rsp_0, v11);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v4 + 64));
  v12 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64))->design_config.txt_config_mgr.shopmall_config_mgr;
  v13 = proto::ShopMcoinProduct::product_id[abi:cxx11](mcoin_product);
  mcoin_config_ptr = ShopmallExcelConfigMgr::findProductMcoinDetailConfig(v12, v13);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 64));
  if ( mcoin_config_ptr )
  {
    if ( *(char *)(((unsigned __int64)&mcoin_config_ptr->is_audit >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&mcoin_config_ptr->is_audit);
    if ( !mcoin_config_ptr->is_audit )
    {
      v16 = proto::ShopMcoinProduct::price_tier[abi:cxx11](mcoin_product);
      if ( std::operator!=<char>(v16, &mcoin_config_ptr->price_tier) )
      {
        common::milog::MiLogStream::create(
          &v123,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/recharge/player_recharge_comp.cpp",
          "onRecharge",
          659);
        common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
          &v123,
          (const char (*)[35])"mcoin product price tier not match");
        common::milog::MiLogStream::~MiLogStream(&v123);
        v3 = -1;
        goto LABEL_135;
      }
    }
    else
    {
      v17 = proto::ShopMcoinProduct::price_tier[abi:cxx11](mcoin_product);
      if ( std::operator!=<char>(v17, &mcoin_config_ptr->audit_display_tier) )
      {
        common::milog::MiLogStream::create(
          &v123,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/recharge/player_recharge_comp.cpp",
          "onRecharge",
          668);
        common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
          &v123,
          (const char (*)[35])"mcoin product price tier not match");
        common::milog::MiLogStream::~MiLogStream(&v123);
        v3 = -1;
        goto LABEL_135;
      }
    }
    v18 = proto::ShopMcoinProduct::mcoin_base(mcoin_product);
    if ( *(_BYTE *)(((unsigned __int64)&mcoin_config_ptr->mcoin_num >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&mcoin_config_ptr->mcoin_num >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&mcoin_config_ptr->mcoin_num);
    }
    if ( v18 != mcoin_config_ptr->mcoin_num )
      goto LABEL_25;
    v19 = proto::ShopMcoinProduct::mcoin_non_first(mcoin_product);
    if ( *(_BYTE *)(((unsigned __int64)&mcoin_config_ptr->mcoin_non_first >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)mcoin_config_ptr + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&mcoin_config_ptr->mcoin_non_first >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4(&mcoin_config_ptr->mcoin_non_first);
    }
    if ( v19 != mcoin_config_ptr->mcoin_non_first )
      goto LABEL_25;
    v20 = proto::ShopMcoinProduct::mcoin_first(mcoin_product);
    if ( *(_BYTE *)(((unsigned __int64)&mcoin_config_ptr->mcoin_first >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&mcoin_config_ptr->mcoin_first >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&mcoin_config_ptr->mcoin_first);
    }
    if ( v20 == mcoin_config_ptr->mcoin_first )
      v21 = 0;
    else
LABEL_25:
      v21 = 1;
    if ( v21 )
    {
      common::milog::MiLogStream::create(
        &v123,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/recharge/player_recharge_comp.cpp",
        "onRecharge",
        677);
      common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
        &v123,
        (const char (*)[31])"mcoin product config not match");
      common::milog::MiLogStream::~MiLogStream(&v123);
      v3 = -1;
      goto LABEL_135;
    }
    *(_DWORD *)(v4 + 48) = PlayerRechargeComp::getMcoinProductBuyTimes(this, mcoin_config_ptr);
    if ( proto::ShopMcoinProduct::bought_num(mcoin_product) != *(_DWORD *)(v4 + 48) )
    {
      common::milog::MiLogStream::create(
        &v123,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/recharge/player_recharge_comp.cpp",
        "onRecharge",
        683);
      v22 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
              &v123,
              (const char (*)[25])"mcoin product buy_times:");
      v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, (const unsigned int *)(v4 + 48));
      v24 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v23, (const char (*)[9])" client:");
      val = proto::ShopMcoinProduct::bought_num(mcoin_product);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, &val);
      common::milog::MiLogStream::~MiLogStream(&v123);
      v3 = -1;
      goto LABEL_135;
    }
    detail_config_ptr = mcoin_config_ptr;
    v25 = proto::ShopMcoinProduct::product_id[abi:cxx11](mcoin_product);
    std::string::operator=(v4 + 224, v25);
LABEL_124:
    if ( detail_config_ptr )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)(v4 + 64));
      p_feature_switch_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64))->feature_switch_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&detail_config_ptr->config_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&detail_config_ptr->config_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&detail_config_ptr->config_id);
      }
      isRechargeConfigIdClosed = FeatureSwitchMgr::isRechargeConfigIdClosed(
                                   p_feature_switch_mgr,
                                   detail_config_ptr->config_id);
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 64));
      if ( isRechargeConfigIdClosed )
      {
        common::milog::MiLogStream::create(
          &v123,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/recharge/player_recharge_comp.cpp",
          "onRecharge",
          844);
        v98 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                &v123,
                (const char (*)[20])"recharge config_id:");
        v99 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v98, &detail_config_ptr->config_id);
        common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v99, (const char (*)[11])off_25170540);
        common::milog::MiLogStream::~MiLogStream(&v123);
        v3 = 142;
      }
      else
      {
        if ( !PlayerRechargeComp::isProductIdValid(this, (const std::string *)(v4 + 224)) )
        {
          common::milog::MiLogStream::create(
            &v123,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/recharge/player_recharge_comp.cpp",
            "onRecharge",
            849);
          v100 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                   &v123,
                   (const char (*)[29])"isProductIdValid fails, uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          val = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v100, &val);
          common::milog::MiLogStream::~MiLogStream(&v123);
        }
        v3 = 0;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v123,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/recharge/player_recharge_comp.cpp",
        "onRecharge",
        839);
      common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(&v123, (const char (*)[22])off_25171040);
      common::milog::MiLogStream::~MiLogStream(&v123);
      v3 = -1;
    }
    goto LABEL_135;
  }
  common::milog::MiLogStream::create(
    &v123,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/player/recharge/player_recharge_comp.cpp",
    "onRecharge",
    650);
  v14 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
          &v123,
          (const char (*)[36])"findProductMcoinDetailConfig fails:");
  v15 = proto::ShopMcoinProduct::product_id[abi:cxx11](mcoin_product);
  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v14, v15);
  common::milog::MiLogStream::~MiLogStream(&v123);
  v3 = -1;
LABEL_135:
  std::string::~string((void *)(v4 + 224));
LABEL_136:
  result = v3;
  if ( v124 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8020) = -168430091;
  }
  return result;
};

// Line 857: range 0000000013E23B3A-0000000013E23EB7
bool __cdecl PlayerRechargeComp::isProductIdValid(const PlayerRechargeComp *const this, const std::string *product_id)
{
  ShopmallExcelConfigMgr *p_shopmall_config_mgr; // rdx
  common::milog::MiLogStream *v3; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  const ShopmallExcelConfigMgr *p_config_id; // rdi
  common::milog::MiLogStream *v7; // rdx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rbx
  bool is_internal; // [rsp+16h] [rbp-5Ah]
  bool is_epic; // [rsp+17h] [rbp-59h]
  unsigned int val; // [rsp+18h] [rbp-58h] BYREF
  uint32_t platform_type; // [rsp+1Ch] [rbp-54h]
  const data::ProductIdConfig *product_id_config_ptr; // [rsp+20h] [rbp-50h]
  const std::string *expected_product_id; // [rsp+28h] [rbp-48h]
  std::shared_ptr<Config> v19; // [rsp+30h] [rbp-40h] BYREF
  common::milog::MiLogStream v20; // [rsp+40h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v19);
  p_shopmall_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v19)->design_config.txt_config_mgr.shopmall_config_mgr;
  product_id_config_ptr = data::ShopmallExcelConfigMgrBase::findProductIdConfig(p_shopmall_config_mgr, product_id);
  std::shared_ptr<Config>::~shared_ptr(&v19);
  if ( product_id_config_ptr )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v19);
    v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v19);
    is_internal = Config::isInternalServer(v5);
    std::shared_ptr<Config>::~shared_ptr(&v19);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    platform_type = Player::getPlatformType(this->player_);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    is_epic = Player::isEpic(this->player_);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v19);
    p_config_id = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v19)->design_config.txt_config_mgr.shopmall_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&product_id_config_ptr->config_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&product_id_config_ptr->config_id >> 3) + 0x7FFF8000) <= 3 )
    {
      p_config_id = (const ShopmallExcelConfigMgr *)&product_id_config_ptr->config_id;
      __asan_report_load4(&product_id_config_ptr->config_id);
    }
    expected_product_id = ShopmallExcelConfigMgr::findProductIdByConfigId[abi:cxx11](
                            p_config_id,
                            is_internal,
                            platform_type,
                            is_epic,
                            product_id_config_ptr->config_id);
    std::shared_ptr<Config>::~shared_ptr(&v19);
    if ( std::operator!=<char>(expected_product_id, product_id) )
    {
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/recharge/player_recharge_comp.cpp",
        "isProductIdValid",
        870);
      v7 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(&v20, (const char (*)[12])"product_id:");
      v8 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, product_id);
      v9 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
             v8,
             (const char (*)[22])" expected_product_id:");
      v10 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, expected_product_id);
      v11 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v10, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &val);
      common::milog::MiLogStream::~MiLogStream(&v20);
      return 0;
    }
    else
    {
      return 1;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/recharge/player_recharge_comp.cpp",
      "isProductIdValid",
      861);
    v3 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
           &v20,
           (const char (*)[28])"findProductIdConfig fails, ");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v3, product_id);
    common::milog::MiLogStream::~MiLogStream(&v20);
    return 0;
  }
};

// Line 878: range 0000000013E23EB8-0000000013E23FC4
bool __cdecl PlayerRechargeComp::isSupportCardProduct(PlayerRechargeComp *const this)
{
  char v1; // bl
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rdx
  bool v3; // r12
  std::shared_ptr<Config> v5[2]; // [rsp+10h] [rbp-20h] BYREF

  v1 = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  if ( !Player::isPsnPlatform(this->player_) )
    goto LABEL_7;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v5);
  v1 = 1;
  v2 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v5);
  if ( *(_BYTE *)(((unsigned __int64)&v2->is_ps4_recharge_card >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v2 - 82) & 7) >= *(_BYTE *)(((unsigned __int64)&v2->is_ps4_recharge_card >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&v2->is_ps4_recharge_card);
  }
  if ( v2->is_ps4_recharge_card )
LABEL_7:
    v3 = 1;
  else
    v3 = 0;
  if ( v1 )
    std::shared_ptr<Config>::~shared_ptr(v5);
  return v3;
};

// Line 884: range 0000000013E23FC6-0000000013E24661
void __cdecl PlayerRechargeComp::refreshProductLimit(PlayerRechargeComp *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  GameserverService *v4; // rsi
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // r14
  common::milog::MiLogStream *v7; // rax
  uint32_t *p_month_last_buy_time; // rax
  bool v9; // dl
  bool v10; // dl
  common::milog::MiLogStream *v11; // r14
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  unsigned int val; // [rsp+14h] [rbp-11Ch] BYREF
  uint32_t now; // [rsp+18h] [rbp-118h]
  uint32_t refresh_time; // [rsp+1Ch] [rbp-114h]
  std::unordered_map<unsigned int,PsnCompensationProductData>::iterator __for_begin; // [rsp+20h] [rbp-110h] BYREF
  std::unordered_map<unsigned int,PsnCompensationProductData>::iterator __for_end; // [rsp+28h] [rbp-108h] BYREF
  std::unordered_map<unsigned int,PsnCompensationProductData> *__for_range; // [rsp+30h] [rbp-100h]
  std::pair<unsigned int const,PsnCompensationProductData> *__in; // [rsp+38h] [rbp-F8h]
  std::tuple_element<0,std::pair<unsigned int const,PsnCompensationProductData> >::type *config_id; // [rsp+40h] [rbp-F0h]
  std::tuple_element<1,std::pair<unsigned int const,PsnCompensationProductData> >::type *product_data; // [rsp+48h] [rbp-E8h]
  std::shared_ptr<Config> v30; // [rsp+50h] [rbp-E0h] BYREF
  common::milog::MiLogStream v31; // [rsp+60h] [rbp-D0h] BYREF
  common::milog::MiLogStream v32; // [rsp+80h] [rbp-B0h] BYREF
  char v33[144]; // [rsp+A0h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 13 now_month:897 64 4 18 last_buy_month:902";
  *(_QWORD *)(v1 + 16) = PlayerRechargeComp::refreshProductLimit;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202116348;
  now = common::tools::TimeUtils::getNow();
  v4 = ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v30);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v30);
  refresh_time = ConstValueExcelConfigMgr::getMcoinProductRefreshTime(&v5->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v30);
  if ( *(_BYTE *)(((unsigned __int64)&this->mcoin_product_refresh_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->mcoin_product_refresh_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->mcoin_product_refresh_time_);
  }
  if ( refresh_time > this->mcoin_product_refresh_time_ && refresh_time <= now )
  {
    std::unordered_map<unsigned int,McoinProductData>::clear(&this->mcoin_product_map_);
    if ( *(_BYTE *)(((unsigned __int64)&this->mcoin_product_refresh_time_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->mcoin_product_refresh_time_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->mcoin_product_refresh_time_, v4, (_BYTE)this - 56);
    }
    this->mcoin_product_refresh_time_ = now;
    common::milog::MiLogStream::create(
      &v32,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/player/recharge/player_recharge_comp.cpp",
      "refreshProductLimit",
      892);
    v6 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v32, (const char (*)[6])"uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(v7, (const char (*)[24])" refresh mcoin product!");
    common::milog::MiLogStream::~MiLogStream(&v32);
  }
  *(_DWORD *)(v1 + 48) = common::tools::TimeUtils::getTimeMonth(now);
  __for_range = &this->psn_compensation_product_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,PsnCompensationProductData>::begin(&this->psn_compensation_product_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,PsnCompensationProductData>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,PsnCompensationProductData>,false>(
            &__for_begin,
            &__for_end) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,PsnCompensationProductData>,false,false>::operator*(&__for_begin);
    config_id = std::get<0ul,unsigned int const,PsnCompensationProductData>(__in);
    product_data = std::get<1ul,unsigned int const,PsnCompensationProductData>(__in);
    p_month_last_buy_time = &product_data->month_last_buy_time;
    if ( *(_BYTE *)(((unsigned __int64)p_month_last_buy_time >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_month_last_buy_time & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_month_last_buy_time >> 3)
                                                                              + 0x7FFF8000) )
    {
      __asan_report_load4(p_month_last_buy_time);
    }
    if ( product_data->month_last_buy_time )
    {
      *(_DWORD *)(v1 + 64) = common::tools::TimeUtils::getTimeMonth(product_data->month_last_buy_time);
      if ( *(_DWORD *)(v1 + 64) >= *(_DWORD *)(v1 + 48) )
      {
        if ( *(_DWORD *)(v1 + 64) > *(_DWORD *)(v1 + 48) )
        {
          common::milog::MiLogStream::create(
            &v32,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/recharge/player_recharge_comp.cpp",
            "refreshProductLimit",
            912);
          v18 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
                  &v32,
                  (const char (*)[59])"last_buy_month is greater than now_month, last_buy_month: ");
          v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v18,
                  (const unsigned int *)(v1 + 64));
          v20 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                  v19,
                  (const char (*)[14])" ,now_month: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)(v1 + 48));
          common::milog::MiLogStream::~MiLogStream(&v32);
        }
      }
      else
      {
        v9 = *(_BYTE *)(((unsigned __int64)&product_data->month_buy_times >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)product_data + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&product_data->month_buy_times >> 3)
                                                                     + 0x7FFF8000);
        if ( v9 )
          __asan_report_store4(&product_data->month_buy_times, (((_BYTE)product_data + 8) & 7u) + 3, v9);
        product_data->month_buy_times = 0;
        v10 = *(_BYTE *)(((unsigned __int64)&product_data->month_last_buy_time >> 3) + 0x7FFF8000) != 0
           && (char)((((_BYTE)product_data + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&product_data->month_last_buy_time >> 3)
                                                                       + 0x7FFF8000);
        if ( v10 )
          __asan_report_store4(&product_data->month_last_buy_time, (((_BYTE)product_data + 12) & 7u) + 3, v10);
        product_data->month_last_buy_time = 0;
        common::milog::MiLogStream::create(
          &v31,
          &common::milog::MiLogDefault::default_log_obj_,
          2u,
          "./src/player/recharge/player_recharge_comp.cpp",
          "refreshProductLimit",
          907);
        v11 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v31, (const char (*)[6])"uid: ");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        val = Player::getUid(this->player_);
        v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &val);
        v13 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                v12,
                (const char (*)[47])" refresh psn compensatopm product, config_id: ");
        v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, config_id);
        v15 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                v14,
                (const char (*)[19])" ,last_buy_month: ");
        v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v15,
                (const unsigned int *)(v1 + 64));
        v17 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v16, (const char (*)[14])" ,now_month: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v1 + 48));
        common::milog::MiLogStream::~MiLogStream(&v31);
      }
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,PsnCompensationProductData>,false,false>::operator++(&__for_begin);
  }
  if ( v33 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 921: range 0000000013E24662-0000000013E26429
int32_t __cdecl PlayerRechargeComp::processOrder(PlayerRechargeComp *const this, const proto::Order *proto_order)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // r14
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  int32_t v9; // r14d
  common::milog::MiLogStream *v10; // r14
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  const std::string *v14; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  const std::string *v16; // rax
  __gnu_cxx::__enable_if<true,bool>::__type v17; // r14
  const std::string *v18; // rax
  ShopmallExcelConfigMgr *p_shopmall_config_mgr; // r14
  const std::string *v20; // rax
  const std::string *ProductIdByEntitlementId; // rax
  common::milog::MiLogStream *v22; // r14
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // r14
  const std::string *v27; // rax
  common::milog::MiLogStream *v28; // rax
  const std::string *v29; // rax
  ShopmallExcelConfigMgr *v30; // r14
  const std::string *v31; // rax
  const std::string *ProductIdByCatalogItemId; // rax
  common::milog::MiLogStream *v33; // r14
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // r14
  const std::string *v38; // rax
  common::milog::MiLogStream *v39; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v40; // rax
  common::milog::MiLogStream *v41; // r14
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v45; // rax
  common::milog::MiLogStream *v46; // rax
  const std::string *v47; // rax
  common::milog::MiLogStream *v49; // r14
  PlayerBasicComp *BasicComp; // rax
  char *v51; // rsi
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v52; // rax
  uint32_t *v53; // rdx
  char v54; // cl
  char *v55; // rsi
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v56; // rax
  uint32_t *v57; // rdx
  char v58; // cl
  common::milog::MiLogStream *v59; // rax
  common::milog::MiLogStream *v60; // rax
  common::milog::MiLogStream *v61; // r14
  unsigned int v62; // edx
  __int64 v63; // rsi
  SelectType v64; // edx
  char v65; // al
  GameserverService *v66; // r14
  unsigned __int64 v67; // rdx
  common::minet::Packet *v68; // r14
  uint32_t Uid; // eax
  common::minet::Packet *v70; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v71; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v72; // r14
  unsigned __int64 v73; // rax
  void (__fastcall *v74)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  uint32_t HcoinCardProductRemainRewardDays; // eax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v76; // rax
  google::protobuf::uint32 CardProductRemainRewardDays; // eax
  proto::ItemParam *v78; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v79; // rax
  uint32_t PlatformType; // eax
  char v81; // al
  proto::OrderFinishNotify *v82; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,proto::OrderFinishNotify> >,bool> v83; // rax
  common::milog::MiLogStream *v84; // rax
  common::milog::MiLogStream *v85; // rax
  std::map<unsigned int,proto::OrderFinishNotify>::iterator v86; // rax
  common::milog::MiLogStream *v88; // rax
  proto::OrderFinishNotify *v89; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,proto::OrderFinishNotify> >,bool> v90; // rax
  common::milog::MiLogStream *v91; // rax
  common::milog::MiLogStream *v92; // rax
  std::map<unsigned int,proto::OrderFinishNotify>::iterator v93; // rax
  common::milog::MiLogStream *v94; // rax
  common::milog::MiLogStream *v95; // rax
  common::milog::MiLogStream *v96; // rax
  common::milog::MiLogStream *v97; // rax
  common::milog::MiLogStream *v98; // rax
  int32_t result; // eax
  std::string v100; // [rsp+0h] [rbp-290h]
  bool is_point_card; // [rsp+27h] [rbp-269h]
  int32_t ret; // [rsp+28h] [rbp-268h]
  uint32_t now; // [rsp+2Ch] [rbp-264h]
  std::vector<ItemParam>::iterator __for_begin; // [rsp+30h] [rbp-260h] BYREF
  std::vector<ItemParam>::iterator __for_end; // [rsp+38h] [rbp-258h] BYREF
  const data::PriceTierConfig *price_tier_config_ptr; // [rsp+40h] [rbp-250h]
  const data::ProductDetailConfig *product_config_ptr; // [rsp+48h] [rbp-248h]
  const data::ProductCardDetailConfig *card_config_ptr; // [rsp+50h] [rbp-240h]
  std::vector<ItemParam> *__for_range; // [rsp+58h] [rbp-238h]
  std::map<unsigned int,proto::OrderFinishNotify> *notify_map; // [rsp+60h] [rbp-230h]
  ItemParam *p; // [rsp+68h] [rbp-228h]
  std::shared_ptr<common::minet::Packet> v112; // [rsp+70h] [rbp-220h] BYREF
  common::milog::MiLogStream v113; // [rsp+80h] [rbp-210h] BYREF
  char v114[496]; // [rsp+A0h] [rbp-1F0h] BYREF

  *(&v100._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  v100._anon_0._M_allocated_capacity = (std::string::size_type)proto_order;
  v2 = (unsigned __int64)v114;
  v100._M_string_length = (std::string::size_type)v114;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(448LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "9 48 1 10 holder:998 64 4 12 order_id:922 80 4 16 product_type:935 96 4 18 platform_type:1118 11"
                        "2 16 15 packet_ptr:1009 144 32 14 product_id:934 208 32 8 req:1005 272 40 11 result:1020 352 64 11 notify:1096";
  *(_QWORD *)(v2 + 16) = PlayerRechargeComp::processOrder;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234556924;
  v4[536862723] = 61956;
  v4[536862724] = 62194;
  v4[536862725] = -219021312;
  v4[536862726] = 62194;
  v4[536862727] = -219021312;
  v4[536862728] = 62194;
  v4[536862729] = -234881024;
  v4[536862730] = -218959118;
  v4[536862733] = -202116109;
  *(_DWORD *)(v2 + 64) = proto::Order::id(proto_order);
  if ( common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,unsigned int>,unsigned int>(
         &this->wait_mark_db_map_,
         (const unsigned int *)(v2 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v113,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/recharge/player_recharge_comp.cpp",
      "processOrder",
      925);
    v5 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v113, (const char (*)[5])"uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    *(_DWORD *)(v2 + 96) = Player::getUid(this->player_);
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 96));
    v7 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v6, (const char (*)[11])" order_id:");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 64));
    common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v8, (const char (*)[11])" wait_mark");
    common::milog::MiLogStream::~MiLogStream(&v113);
    v9 = -1;
    goto LABEL_125;
  }
  if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,unsigned int>,unsigned int>(
          &this->finished_order_map_,
          (const unsigned int *)(v2 + 64)) )
  {
    v14 = proto::Order::product_id[abi:cxx11](proto_order);
    std::string::basic_string(v2 + 144, v14);
    *(_DWORD *)(v2 + 80) = 0;
    price_tier_config_ptr = 0LL;
    is_point_card = 0;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v112);
    v15 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v112);
    v16 = ConstValueExcelConfigMgr::getPointCardProductId[abi:cxx11](&v15->design_config.txt_config_mgr.const_value_config_mgr);
    v17 = std::operator==<char>(v16, (const std::string *)(v2 + 144));
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v112);
    if ( v17 )
    {
      is_point_card = 1;
      ret = PlayerRechargeComp::checkPointCardProduct(this, proto_order);
      if ( ret )
      {
        common::milog::MiLogStream::create(
          &v113,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/recharge/player_recharge_comp.cpp",
          "processOrder",
          945);
        common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
          &v113,
          (const char (*)[28])"checkPointCardProduct fails");
        common::milog::MiLogStream::~MiLogStream(&v113);
        v9 = ret;
LABEL_124:
        std::string::~string((void *)(v2 + 144));
        goto LABEL_125;
      }
    }
    else
    {
      v18 = proto::Order::pay_plat[abi:cxx11](proto_order);
      if ( std::operator==<char>(v18, "sony") )
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v112);
        p_shopmall_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v112)->design_config.txt_config_mgr.shopmall_config_mgr;
        v20 = proto::Order::product_id[abi:cxx11](proto_order);
        ProductIdByEntitlementId = ShopmallExcelConfigMgr::findProductIdByEntitlementId(p_shopmall_config_mgr, v20);
        std::string::operator=(v2 + 144, ProductIdByEntitlementId);
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v112);
        if ( (unsigned __int8)std::string::empty(v2 + 144) )
        {
          common::milog::MiLogStream::create(
            &v113,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/recharge/player_recharge_comp.cpp",
            "processOrder",
            957);
          v22 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v113, (const char (*)[5])"uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          *(_DWORD *)(v2 + 96) = Player::getUid(this->player_);
          v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v22,
                  (const unsigned int *)(v2 + 96));
          v24 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v23, (const char (*)[11])" order_id:");
          v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v24,
                  (const unsigned int *)(v2 + 64));
          v26 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                  v25,
                  (const char (*)[17])" entitlement_id:");
          v27 = proto::Order::product_id[abi:cxx11](proto_order);
          v28 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v26, v27);
          common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v28, (const char (*)[7])" fails");
          common::milog::MiLogStream::~MiLogStream(&v113);
          v9 = -1;
          goto LABEL_124;
        }
      }
      else
      {
        v29 = proto::Order::pay_plat[abi:cxx11](proto_order);
        if ( std::operator==<char>(v29, "epic") )
        {
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v112);
          v30 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v112)->design_config.txt_config_mgr.shopmall_config_mgr;
          v31 = proto::Order::product_id[abi:cxx11](proto_order);
          ProductIdByCatalogItemId = ShopmallExcelConfigMgr::findProductIdByCatalogItemId(v30, v31);
          std::string::operator=(v2 + 144, ProductIdByCatalogItemId);
          std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v112);
          if ( (unsigned __int8)std::string::empty(v2 + 144) )
          {
            common::milog::MiLogStream::create(
              &v113,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/player/recharge/player_recharge_comp.cpp",
              "processOrder",
              968);
            v33 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v113, (const char (*)[5])"uid:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            *(_DWORD *)(v2 + 96) = Player::getUid(this->player_);
            v34 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v33,
                    (const unsigned int *)(v2 + 96));
            v35 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v34, (const char (*)[11])" order_id:");
            v36 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v35,
                    (const unsigned int *)(v2 + 64));
            v37 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                    v36,
                    (const char (*)[18])" catalog_item_id:");
            v38 = proto::Order::product_id[abi:cxx11](proto_order);
            v39 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v37, v38);
            common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v39, (const char (*)[7])" fails");
            common::milog::MiLogStream::~MiLogStream(&v113);
            v9 = -1;
            goto LABEL_124;
          }
        }
      }
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v112);
      v40 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v112);
      product_config_ptr = ShopmallExcelConfigMgr::findProductDetailConfig(
                             &v40->design_config.txt_config_mgr.shopmall_config_mgr,
                             (const std::string *)(v2 + 144));
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v112);
      if ( !product_config_ptr )
      {
        common::milog::MiLogStream::create(
          &v113,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/recharge/player_recharge_comp.cpp",
          "processOrder",
          975);
        v41 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v113, (const char (*)[5])"uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        *(_DWORD *)(v2 + 96) = Player::getUid(this->player_);
        v42 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v41,
                (const unsigned int *)(v2 + 96));
        v43 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                v42,
                (const char (*)[33])" findProductDetailConfig fails, ");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v43, (const std::string *)(v2 + 144));
        common::milog::MiLogStream::~MiLogStream(&v113);
        v9 = -1;
        goto LABEL_124;
      }
      if ( *(_BYTE *)(((unsigned __int64)&product_config_ptr->product_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&product_config_ptr->product_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&product_config_ptr->product_type);
      }
      *(_DWORD *)(v2 + 80) = product_config_ptr->product_type;
      if ( !*(_DWORD *)(v2 + 80) )
      {
        common::milog::MiLogStream::create(
          &v113,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/recharge/player_recharge_comp.cpp",
          "processOrder",
          981);
        v44 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                &v113,
                (const char (*)[46])"product_config_ptr type is None, product_id: ");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v44, (const std::string *)(v2 + 144));
        common::milog::MiLogStream::~MiLogStream(&v113);
        v9 = -1;
        goto LABEL_124;
      }
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v112);
      v45 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v112);
      price_tier_config_ptr = data::ShopmallExcelConfigMgrBase::findPriceTierConfig(
                                &v45->design_config.txt_config_mgr.shopmall_config_mgr,
                                &product_config_ptr->price_tier);
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v112);
      if ( !price_tier_config_ptr )
      {
        common::milog::MiLogStream::create(
          &v113,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/recharge/player_recharge_comp.cpp",
          "processOrder",
          987);
        v46 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                &v113,
                (const char (*)[27])"findPriceTierConfig fails:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v46, &product_config_ptr->price_tier);
        common::milog::MiLogStream::~MiLogStream(&v113);
        v9 = -1;
        goto LABEL_124;
      }
      v47 = proto::Order::pay_plat[abi:cxx11](proto_order);
      if ( std::operator!=<char>(v47, "codashop")
        && !PlayerRechargeComp::isProductIdValid(this, (const std::string *)(v2 + 144)) )
      {
        common::milog::MiLogStream::create(
          &v113,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/recharge/player_recharge_comp.cpp",
          "processOrder",
          994);
        v49 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                &v113,
                (const char (*)[29])"isProductIdValid fails, uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        *(_DWORD *)(v2 + 96) = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v49, (const unsigned int *)(v2 + 96));
        common::milog::MiLogStream::~MiLogStream(&v113);
      }
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    BasicComp = Player::getBasicComp(this->player_);
    PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v113, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48), 0x65u, v100);
    std::string::~string(&v113);
    PlayerRechargeComp::refreshProductLimit(*((PlayerRechargeComp *const *)&v100._anon_0._M_allocated_capacity + 1));
    PlayerRechargeComp::tryGrantCardProductDailyReward(*((PlayerRechargeComp *const *)&v100._anon_0._M_allocated_capacity
                                                       + 1));
    now = common::tools::TimeUtils::getNow();
    proto::MarkOrderFinishedReq::MarkOrderFinishedReq((proto::MarkOrderFinishedReq *const)(v2 + 208));
    proto::MarkOrderFinishedReq::set_order_id((proto::MarkOrderFinishedReq *const)(v2 + 208), *(_DWORD *)(v2 + 64));
    proto::MarkOrderFinishedReq::set_finish_time((proto::MarkOrderFinishedReq *const)(v2 + 208), now);
    proto::MarkOrderFinishedReq::set_is_retry((proto::MarkOrderFinishedReq *const)(v2 + 208), 0);
    common::minet::PacketUtils::createPacket<proto::MarkOrderFinishedReq>((const proto::MarkOrderFinishedReq *)(v2 + 112));
    if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v2 + 112)) )
    {
      common::milog::MiLogStream::create(
        &v113,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/recharge/player_recharge_comp.cpp",
        "processOrder",
        1012);
      common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
        &v113,
        (const char (*)[40])"createPacket MarkOrderFinishedReq fails");
      common::milog::MiLogStream::~MiLogStream(&v113);
      v9 = -1;
    }
    else
    {
      v51 = (char *)(v2 + 64);
      v52 = std::unordered_map<unsigned int,unsigned int>::operator[](
              (std::unordered_map<unsigned int,unsigned int> *const)(*(&v100._anon_0._M_allocated_capacity + 1) + 32),
              (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 64));
      v53 = v52;
      v54 = *(_BYTE *)(((unsigned __int64)v52 >> 3) + 0x7FFF8000);
      if ( v54 != 0 && (char)(((unsigned __int8)v52 & 7) + 3) >= v54 )
      {
        LOBYTE(v51) = v54 != 0;
        __asan_report_store4(v52, v51, (_BYTE)v52);
      }
      *v53 = now;
      v55 = (char *)(v2 + 64);
      v56 = std::unordered_map<unsigned int,unsigned int>::operator[](
              (std::unordered_map<unsigned int,unsigned int> *const)(*(&v100._anon_0._M_allocated_capacity + 1) + 88),
              (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 64));
      v57 = v56;
      v58 = *(_BYTE *)(((unsigned __int64)v56 >> 3) + 0x7FFF8000);
      if ( v58 != 0 && (char)(((unsigned __int8)v56 & 7) + 3) >= v58 )
      {
        LOBYTE(v55) = v58 != 0;
        __asan_report_store4(v56, v55, (_BYTE)v56);
      }
      *v57 = now;
      TakeProductResult::TakeProductResult((TakeProductResult *const)(v2 + 272));
      *(_BYTE *)(v2 + 280) = 1;
      if ( is_point_card )
      {
        PlayerRechargeComp::takePointCardProduct(
          *((PlayerRechargeComp *const *)&v100._anon_0._M_allocated_capacity + 1),
          (const proto::Order *)v100._anon_0._M_allocated_capacity,
          (TakeProductResult *)(v2 + 272));
      }
      else
      {
        if ( price_tier_config_ptr )
        {
          if ( *(_BYTE *)(((unsigned __int64)&price_tier_config_ptr->vip_point >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&price_tier_config_ptr->vip_point >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&price_tier_config_ptr->vip_point);
          }
          *(_DWORD *)(v2 + 276) = price_tier_config_ptr->vip_point;
        }
        switch ( *(_DWORD *)(v2 + 80) )
        {
          case 1:
            PlayerRechargeComp::takeMcoinProduct(
              *((PlayerRechargeComp *const *)&v100._anon_0._M_allocated_capacity + 1),
              (const std::string *)(v2 + 144),
              (TakeProductResult *)(v2 + 272));
            break;
          case 2:
            PlayerRechargeComp::takeCardProduct(
              *((PlayerRechargeComp *const *)&v100._anon_0._M_allocated_capacity + 1),
              (const std::string *)(v2 + 144),
              (TakeProductResult *)(v2 + 272));
            break;
          case 4:
            PlayerRechargeComp::takePlayProduct(
              *((PlayerRechargeComp *const *)&v100._anon_0._M_allocated_capacity + 1),
              (const std::string *)(v2 + 144),
              (TakeProductResult *)(v2 + 272));
            break;
          case 3:
            PlayerRechargeComp::takePackageProduct(
              *((PlayerRechargeComp *const *)&v100._anon_0._M_allocated_capacity + 1),
              (const std::string *)(v2 + 144),
              (TakeProductResult *)(v2 + 272));
            break;
          case 5:
            PlayerRechargeComp::takeGoogleGiftCardProduct(
              *((PlayerRechargeComp *const *)&v100._anon_0._M_allocated_capacity + 1),
              (const std::string *)(v2 + 144),
              (TakeProductResult *)(v2 + 272));
            break;
          case 6:
            PlayerRechargeComp::takeConcertProduct(
              *((PlayerRechargeComp *const *)&v100._anon_0._M_allocated_capacity + 1),
              (const std::string *)(v2 + 144),
              (TakeProductResult *)(v2 + 272));
            break;
          case 7:
            PlayerRechargeComp::takeAppleGiftCardProduct(
              *((PlayerRechargeComp *const *)&v100._anon_0._M_allocated_capacity + 1),
              (const std::string *)(v2 + 144),
              (TakeProductResult *)(v2 + 272));
            break;
          case 8:
            PlayerRechargeComp::takePsnCompensationProduct(
              *((PlayerRechargeComp *const *)&v100._anon_0._M_allocated_capacity + 1),
              (const std::string *)(v2 + 144),
              (TakeProductResult *)(v2 + 272));
            break;
          default:
            common::milog::MiLogStream::create(
              &v113,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/player/recharge/player_recharge_comp.cpp",
              "processOrder",
              1077);
            v59 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                    &v113,
                    (const char (*)[27])off_25171880);
            v60 = common::milog::MiLogStream::operator<<<data::ProductType,(data::ProductType*)0>(
                    v59,
                    (const data::ProductType *)(v2 + 80));
            v61 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v60, (const char (*)[7])" uid: ");
            if ( *(_BYTE *)(((*(&v100._anon_0._M_allocated_capacity + 1) + 24) >> 3) + 0x7FFF8000) )
              __asan_report_load8(*(&v100._anon_0._M_allocated_capacity + 1) + 24);
            *(_DWORD *)(v2 + 96) = Player::getUid(*(const Player *const *)(*(&v100._anon_0._M_allocated_capacity + 1)
                                                                         + 24));
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v61, (const unsigned int *)(v2 + 96));
            common::milog::MiLogStream::~MiLogStream(&v113);
            *(_BYTE *)(v2 + 280) = 0;
            break;
        }
      }
      v62 = *(_DWORD *)(v2 + 276);
      if ( *(_BYTE *)(((*(&v100._anon_0._M_allocated_capacity + 1) + 600) >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((*(&v100._anon_0._M_allocated_capacity + 1) + 600) >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(*(&v100._anon_0._M_allocated_capacity + 1) + 600);
      }
      v63 = v62;
      v64 = SAFE_ADD<unsigned int,unsigned int>(*(_DWORD *)(*(&v100._anon_0._M_allocated_capacity + 1) + 600), v62);
      v65 = *(_BYTE *)(((*(&v100._anon_0._M_allocated_capacity + 1) + 600) >> 3) + 0x7FFF8000);
      if ( v65 != 0 && v65 <= 3 )
      {
        LOBYTE(v63) = v65 != 0;
        __asan_report_store4(*(&v100._anon_0._M_allocated_capacity + 1) + 600, v63, v64);
      }
      *(_DWORD *)(*(&v100._anon_0._M_allocated_capacity + 1) + 600) = v64;
      v66 = ServiceBox::findService<GameserverService>();
      std::shared_ptr<common::minet::Packet>::shared_ptr(
        &v112,
        (const std::shared_ptr<common::minet::Packet> *)(v2 + 112));
      ServiceBase::setPacketSource(v66, (common::minet::PacketPtr)__PAIR128__(v67, &v112));
      std::shared_ptr<common::minet::Packet>::~shared_ptr(&v112);
      v68 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
      if ( *(_BYTE *)(((*(&v100._anon_0._M_allocated_capacity + 1) + 24) >> 3) + 0x7FFF8000) )
        __asan_report_load8(*(&v100._anon_0._M_allocated_capacity + 1) + 24);
      Uid = Player::getUid(*(const Player *const *)(*(&v100._anon_0._M_allocated_capacity + 1) + 24));
      common::minet::Packet::setUserId(v68, Uid);
      v70 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
      common::minet::Packet::setTargetService(v70, 0x10u);
      v71 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
      v72 = v71;
      if ( *(_BYTE *)(((unsigned __int64)v71 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v71);
      v73 = (unsigned __int64)(v72->_vptr_NetworkMgrBase + 8);
      if ( *(_BYTE *)((v73 >> 3) + 0x7FFF8000) )
        v73 = __asan_report_load8(v72->_vptr_NetworkMgrBase + 8);
      v74 = *(void (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v73;
      std::shared_ptr<common::minet::Packet>::shared_ptr(
        &v112,
        (const std::shared_ptr<common::minet::Packet> *)(v2 + 112));
      v74(v72, &v112);
      std::shared_ptr<common::minet::Packet>::~shared_ptr(&v112);
      if ( *(_DWORD *)(v2 + 80) != 3
        && *(_DWORD *)(v2 + 80) != 5
        && *(_DWORD *)(v2 + 80) != 7
        && *(_DWORD *)(v2 + 80) != 8 )
      {
        proto::OrderFinishNotify::OrderFinishNotify((proto::OrderFinishNotify *const)(v2 + 352));
        proto::OrderFinishNotify::set_product_id(
          (proto::OrderFinishNotify *const)(v2 + 352),
          (const std::string *)(v2 + 144));
        proto::OrderFinishNotify::set_add_mcoin((proto::OrderFinishNotify *const)(v2 + 352), *(_DWORD *)(v2 + 272));
        HcoinCardProductRemainRewardDays = PlayerRechargeComp::getHcoinCardProductRemainRewardDays(*((PlayerRechargeComp *const *)&v100._anon_0._M_allocated_capacity + 1));
        proto::OrderFinishNotify::set_card_product_remain_days(
          (proto::OrderFinishNotify *const)(v2 + 352),
          HcoinCardProductRemainRewardDays);
        if ( *(_DWORD *)(v2 + 80) == 2 )
        {
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v112);
          v76 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v112);
          card_config_ptr = ShopmallExcelConfigMgr::findProductCardDetailConfig(
                              &v76->design_config.txt_config_mgr.shopmall_config_mgr,
                              (const std::string *)(v2 + 144));
          std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v112);
          if ( card_config_ptr )
          {
            if ( *(_BYTE *)(((unsigned __int64)&card_config_ptr->config_id >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&card_config_ptr->config_id >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&card_config_ptr->config_id);
            }
            CardProductRemainRewardDays = PlayerRechargeComp::getCardProductRemainRewardDays(
                                            *((PlayerRechargeComp *const *)&v100._anon_0._M_allocated_capacity + 1),
                                            card_config_ptr->config_id);
            proto::OrderFinishNotify::set_card_product_remain_days(
              (proto::OrderFinishNotify *const)(v2 + 352),
              CardProductRemainRewardDays);
          }
        }
        __for_range = (std::vector<ItemParam> *)(v2 + 288);
        __for_begin._M_current = std::vector<ItemParam>::begin((std::vector<ItemParam> *const)(v2 + 288))._M_current;
        __for_end._M_current = std::vector<ItemParam>::end((std::vector<ItemParam> *const)(v2 + 288))._M_current;
        while ( __gnu_cxx::operator!=<ItemParam *,std::vector<ItemParam>>(&__for_begin, &__for_end) )
        {
          p = __gnu_cxx::__normal_iterator<ItemParam *,std::vector<ItemParam>>::operator*(&__for_begin);
          v78 = proto::OrderFinishNotify::add_item_list((proto::OrderFinishNotify *const)(v2 + 352));
          ItemParam::toClient(p, v78);
          __gnu_cxx::__normal_iterator<ItemParam *,std::vector<ItemParam>>::operator++(&__for_begin);
        }
        proto::OrderFinishNotify::set_order_id((proto::OrderFinishNotify *const)(v2 + 352), *(_DWORD *)(v2 + 64));
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v112);
        v79 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v112);
        *(_DWORD *)(v2 + 96) = ShopmallExcelConfigMgr::getChargePlatformTypeByProductId(
                                 &v79->design_config.txt_config_mgr.shopmall_config_mgr,
                                 (const std::string *)(v2 + 144));
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v112);
        if ( !*(_DWORD *)(v2 + 272) )
          goto LABEL_102;
        if ( *(_BYTE *)(((*(&v100._anon_0._M_allocated_capacity + 1) + 24) >> 3) + 0x7FFF8000) )
          __asan_report_load8(*(&v100._anon_0._M_allocated_capacity + 1) + 24);
        PlatformType = Player::getPlatformType(*(const Player *const *)(*(&v100._anon_0._M_allocated_capacity + 1) + 24));
        if ( !TxtConfigMgr::isPlatformTyepInSameOperator(*(_DWORD *)(v2 + 96), PlatformType) )
          v81 = 0;
        else
LABEL_102:
          v81 = 1;
        if ( v81 )
        {
          if ( *(_BYTE *)(((*(&v100._anon_0._M_allocated_capacity + 1) + 24) >> 3) + 0x7FFF8000) )
            __asan_report_load8(*(&v100._anon_0._M_allocated_capacity + 1) + 24);
          Player::sendProto(
            *(Player *const *)(*(&v100._anon_0._M_allocated_capacity + 1) + 24),
            (const google::protobuf::Message *)(v2 + 352));
          v83 = std::map<unsigned int,proto::OrderFinishNotify>::emplace<unsigned int &,proto::OrderFinishNotify&>(
                  (std::map<unsigned int,proto::OrderFinishNotify> *const)(*(&v100._anon_0._M_allocated_capacity + 1)
                                                                         + 608),
                  (unsigned int *)(v2 + 64),
                  (proto::OrderFinishNotify *)(v2 + 352),
                  (unsigned int *)(*(&v100._anon_0._M_allocated_capacity + 1) + 608),
                  v82);
          if ( !v83.second )
          {
            common::milog::MiLogStream::create(
              &v113,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/player/recharge/player_recharge_comp.cpp",
              "processOrder",
              1124);
            v84 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                    &v113,
                    (const char (*)[18])"emplace order_id:");
            v85 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v84,
                    (const unsigned int *)(v2 + 64));
            common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v85, (const char (*)[7])" fails");
            common::milog::MiLogStream::~MiLogStream(&v113);
          }
          if ( std::map<unsigned int,proto::OrderFinishNotify>::size((const std::map<unsigned int,proto::OrderFinishNotify> *const)(*(&v100._anon_0._M_allocated_capacity + 1) + 608)) > 0x14 )
          {
            v86._M_node = std::map<unsigned int,proto::OrderFinishNotify>::begin((std::map<unsigned int,proto::OrderFinishNotify> *const)(*(&v100._anon_0._M_allocated_capacity + 1) + 608))._M_node;
            std::map<unsigned int,proto::OrderFinishNotify>::erase[abi:cxx11](
              (std::map<unsigned int,proto::OrderFinishNotify> *const)(*(&v100._anon_0._M_allocated_capacity + 1) + 608),
              v86);
          }
        }
        else
        {
          if ( *(_DWORD *)(v2 + 272) && !std::vector<ItemParam>::empty((const std::vector<ItemParam> *const)(v2 + 288)) )
          {
            common::milog::MiLogStream::create(
              &v113,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/player/recharge/player_recharge_comp.cpp",
              "processOrder",
              1138);
            v88 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
                    &v113,
                    (const char (*)[56])"order have both mcoin and item! notify err! product_id:");
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v88, (const std::string *)(v2 + 144));
            common::milog::MiLogStream::~MiLogStream(&v113);
          }
          notify_map = std::unordered_map<unsigned int,std::map<unsigned int,proto::OrderFinishNotify>>::operator[](
                         (std::unordered_map<unsigned int,std::map<unsigned int,proto::OrderFinishNotify>> *const)(*(&v100._anon_0._M_allocated_capacity + 1) + 376),
                         (const std::unordered_map<unsigned int,std::map<unsigned int,proto::OrderFinishNotify>>::key_type *)(v2 + 96));
          v90 = std::map<unsigned int,proto::OrderFinishNotify>::emplace<unsigned int &,proto::OrderFinishNotify&>(
                  notify_map,
                  (unsigned int *)(v2 + 64),
                  (proto::OrderFinishNotify *)(v2 + 352),
                  (unsigned int *)(v2 + 64),
                  v89);
          if ( !v90.second )
          {
            common::milog::MiLogStream::create(
              &v113,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/player/recharge/player_recharge_comp.cpp",
              "processOrder",
              1143);
            v91 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                    &v113,
                    (const char (*)[29])"emplace save_order order_id:");
            v92 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v91,
                    (const unsigned int *)(v2 + 64));
            common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v92, (const char (*)[7])" fails");
            common::milog::MiLogStream::~MiLogStream(&v113);
          }
          if ( std::map<unsigned int,proto::OrderFinishNotify>::size(notify_map) > 0x3E8 )
          {
            v93._M_node = std::map<unsigned int,proto::OrderFinishNotify>::begin(notify_map)._M_node;
            std::map<unsigned int,proto::OrderFinishNotify>::erase[abi:cxx11](notify_map, v93);
          }
        }
        proto::OrderFinishNotify::~OrderFinishNotify((proto::OrderFinishNotify *const)(v2 + 352));
      }
      PlayerRechargeComp::logRecharge(
        *((PlayerRechargeComp *const *)&v100._anon_0._M_allocated_capacity + 1),
        (const proto::Order *)v100._anon_0._M_allocated_capacity,
        (const TakeProductResult *)(v2 + 272));
      PlayerRechargeComp::reportTrackingIO(
        *((PlayerRechargeComp *const *)&v100._anon_0._M_allocated_capacity + 1),
        (const proto::Order *)v100._anon_0._M_allocated_capacity,
        price_tier_config_ptr);
      PlayerRechargeComp::reportAdjustTracking(
        *((PlayerRechargeComp *const *)&v100._anon_0._M_allocated_capacity + 1),
        (const proto::Order *)v100._anon_0._M_allocated_capacity,
        price_tier_config_ptr);
      common::milog::MiLogStream::create(
        &v113,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/recharge/player_recharge_comp.cpp",
        "processOrder",
        1161);
      v94 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
              &v113,
              (const char (*)[24])"processOrder order_id: ");
      v95 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v94, (const unsigned int *)(v2 + 64));
      v96 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v95, (const char (*)[14])" succ! mcoin:");
      v97 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v96,
              (const unsigned int *)(v2 + 272));
      v98 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v97, (const char (*)[11])" vippoint:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v98, (const unsigned int *)(v2 + 276));
      common::milog::MiLogStream::~MiLogStream(&v113);
      v9 = 0;
      TakeProductResult::~TakeProductResult((TakeProductResult *const)(v2 + 272));
    }
    std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 112));
    proto::MarkOrderFinishedReq::~MarkOrderFinishedReq((proto::MarkOrderFinishedReq *const)(v2 + 208));
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48));
    goto LABEL_124;
  }
  common::milog::MiLogStream::create(
    &v113,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/player/recharge/player_recharge_comp.cpp",
    "processOrder",
    930);
  v10 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v113, (const char (*)[5])"uid:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  *(_DWORD *)(v2 + 96) = Player::getUid(this->player_);
  v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 96));
  v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])" order_id:");
  v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v2 + 64));
  common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v13, (const char (*)[17])" alreay finished");
  common::milog::MiLogStream::~MiLogStream(&v113);
  v9 = -1;
LABEL_125:
  result = v9;
  if ( v100._M_string_length == v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8028) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8034) = 0;
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
  }
  return result;
};

// Line 1166: range 0000000013E2642A-0000000013E268AA
int32_t __cdecl PlayerRechargeComp::checkPointCardProduct(
        const PlayerRechargeComp *const this,
        const proto::Order *order)
{
  common::milog::MiLogStream *v2; // rbx
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v4; // rbx
  common::milog::MiLogStream *v5; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  uint32_t v8; // ebx
  common::milog::MiLogStream *v10; // rbx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rbx
  common::milog::MiLogStream *v13; // rax
  unsigned int v14; // eax
  const std::string *v15; // rax
  google::protobuf::uint32 v16; // ebx
  google::protobuf::uint32 v17; // ebx
  common::milog::MiLogStream *v19; // rbx
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rbx
  common::milog::MiLogStream *v22; // rax
  unsigned int val; // [rsp+10h] [rbp-50h] BYREF
  unsigned int v24; // [rsp+14h] [rbp-4Ch] BYREF
  uint32_t mcoin_per_point_card; // [rsp+18h] [rbp-48h]
  uint32_t mcoin; // [rsp+1Ch] [rbp-44h]
  std::shared_ptr<Config> v27; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v28; // [rsp+30h] [rbp-30h] BYREF

  if ( proto::Order::product_num(order) )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v27);
    v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v27);
    mcoin_per_point_card = ConstValueExcelConfigMgr::getMcoinPerPointCard(&v7->design_config.txt_config_mgr.const_value_config_mgr);
    std::shared_ptr<Config>::~shared_ptr(&v27);
    if ( proto::Order::product_num(order)
      && mcoin_per_point_card
      && (v8 = mcoin_per_point_card * proto::Order::product_num(order),
          mcoin_per_point_card != v8 / proto::Order::product_num(order)) )
    {
      common::milog::MiLogStream::create(
        &v28,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/recharge/player_recharge_comp.cpp",
        "checkPointCardProduct",
        1177);
      v10 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v28, (const char (*)[5])"uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
      v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])" order_id:");
      v24 = proto::Order::id(order);
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &v24);
      common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v13, (const char (*)[23])" product_num overflow!");
      common::milog::MiLogStream::~MiLogStream(&v28);
      return -1;
    }
    else
    {
      v14 = proto::Order::product_num(order);
      mcoin = SAFE_MULTIPLY<unsigned int,unsigned int>(v14, mcoin_per_point_card);
      v15 = proto::Order::bonus[abi:cxx11](order);
      if ( std::operator==<char>("mcoin", v15)
        && (proto::Order::bonus_num(order)
         && mcoin
         && (v16 = proto::Order::bonus_num(order) + mcoin, v16 < proto::Order::bonus_num(order))
         || !proto::Order::bonus_num(order)
         && !mcoin
         && (v17 = proto::Order::bonus_num(order), v17 > proto::Order::bonus_num(order))) )
      {
        common::milog::MiLogStream::create(
          &v28,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/recharge/player_recharge_comp.cpp",
          "checkPointCardProduct",
          1183);
        v19 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v28, (const char (*)[5])"uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        val = Player::getUid(this->player_);
        v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &val);
        v21 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v20, (const char (*)[11])" order_id:");
        v24 = proto::Order::id(order);
        v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &v24);
        common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v22, (const char (*)[17])" bonus overflow!");
        common::milog::MiLogStream::~MiLogStream(&v28);
        return -1;
      }
      else
      {
        return 0;
      }
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v28,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/recharge/player_recharge_comp.cpp",
      "checkPointCardProduct",
      1169);
    v2 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v28, (const char (*)[5])"uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    v3 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
    v4 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v3, (const char (*)[11])" order_id:");
    v24 = proto::Order::id(order);
    v5 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &v24);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v5, (const char (*)[26])" 0 == order.product_num()");
    common::milog::MiLogStream::~MiLogStream(&v28);
    return -1;
  }
};

// Line 1190: range 0000000013E268AC-0000000013E2757A
void __cdecl PlayerRechargeComp::takePointCardProduct(
        PlayerRechargeComp *const this,
        const proto::Order *order,
        TakeProductResult *result)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  unsigned int v7; // eax
  __int64 v8; // rsi
  uint32_t v9; // edx
  char v10; // al
  const std::string *v11; // rax
  unsigned int v12; // ecx
  __int64 v13; // rsi
  uint32_t v14; // edx
  char v15; // al
  const std::string *v16; // rax
  const std::string *v17; // rax
  const std::string *v18; // rax
  common::milog::MiLogStream *v19; // r14
  const std::string *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // r14
  ShopmallExcelConfigMgr *p_shopmall_config_mgr; // r14
  const std::string *v24; // rax
  PlayerItemComp *ItemComp; // rdi
  common::milog::MiLogStream *v26; // r14
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // r14
  PlayerItemComp *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // r14
  PlayerItemComp *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v37; // rax
  unsigned int v38; // eax
  uint32_t v39; // edi
  bool v40; // dl
  common::milog::MiLogStream *v41; // r14
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rdx
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // rax
  common::milog::MiLogStream *v50; // rbx
  common::milog::MiLogStream *v51; // rax
  common::milog::MiLogStream *v52; // rbx
  float b; // [rsp+4h] [rbp-15Ch]
  unsigned int Uid; // [rsp+20h] [rbp-140h] BYREF
  unsigned int val; // [rsp+24h] [rbp-13Ch] BYREF
  uint32_t mcoin_per_point_card; // [rsp+28h] [rbp-138h]
  uint32_t platform_type; // [rsp+2Ch] [rbp-134h]
  common::milog::MiLogStream v61; // [rsp+30h] [rbp-130h] BYREF
  char v62[272]; // [rsp+50h] [rbp-110h] BYREF

  v3 = (unsigned __int64)v62;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 32 4 10 hcoin:1193 48 4 10 scoin:1194 64 16 15 item_param:1223 96 24 11 reason:1214 160 24 17 "
                        "bonus_reason:1220";
  *(_QWORD *)(v3 + 16) = PlayerRechargeComp::takePointCardProduct;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -219021312;
  v5[536862723] = -234881024;
  v5[536862724] = -218959118;
  v5[536862725] = -218103808;
  v5[536862726] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v3 + 64));
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
  mcoin_per_point_card = ConstValueExcelConfigMgr::getMcoinPerPointCard(&v6->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 64));
  v7 = proto::Order::product_num(order);
  v8 = mcoin_per_point_card;
  v9 = SAFE_MULTIPLY<unsigned int,unsigned int>(v7, mcoin_per_point_card);
  v10 = *(_BYTE *)(((unsigned __int64)result >> 3) + 0x7FFF8000);
  if ( v10 != 0 && v10 <= 3 )
  {
    LOBYTE(v8) = v10 != 0;
    __asan_report_store4(result, v8, v9);
  }
  result->mcoin = v9;
  *(_DWORD *)(v3 + 32) = 0;
  *(_DWORD *)(v3 + 48) = 0;
  v11 = proto::Order::bonus[abi:cxx11](order);
  if ( std::operator==<char>("mcoin", v11) )
  {
    v12 = proto::Order::bonus_num(order);
    if ( *(_BYTE *)(((unsigned __int64)result >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)result >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(result);
    }
    v13 = v12;
    v14 = SAFE_ADD<unsigned int,unsigned int>(result->mcoin, v12);
    v15 = *(_BYTE *)(((unsigned __int64)result >> 3) + 0x7FFF8000);
    if ( v15 != 0 && v15 <= 3 )
    {
      LOBYTE(v13) = v15 != 0;
      __asan_report_store4(result, v13, v14);
    }
    result->mcoin = v14;
  }
  else
  {
    v16 = proto::Order::bonus[abi:cxx11](order);
    if ( std::operator==<char>("hcoin", v16) )
    {
      *(_DWORD *)(v3 + 32) = proto::Order::bonus_num(order);
    }
    else
    {
      v17 = proto::Order::bonus[abi:cxx11](order);
      if ( std::operator==<char>("scoin", v17) )
      {
        *(_DWORD *)(v3 + 48) = proto::Order::bonus_num(order);
      }
      else
      {
        v18 = proto::Order::bonus[abi:cxx11](order);
        if ( (unsigned __int8)std::string::empty(v18) != 1 )
        {
          common::milog::MiLogStream::create(
            &v61,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/recharge/player_recharge_comp.cpp",
            "takePointCardProduct",
            1209);
          v19 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v61, (const char (*)[19])off_25171CA0);
          v20 = proto::Order::bonus[abi:cxx11](order);
          v21 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v19, v20);
          v22 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v21, (const char (*)[11])" order_id:");
          val = proto::Order::id(order);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &val);
          common::milog::MiLogStream::~MiLogStream(&v61);
        }
      }
    }
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v3 + 64));
  p_shopmall_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64))->design_config.txt_config_mgr.shopmall_config_mgr;
  v24 = proto::Order::product_id[abi:cxx11](order);
  platform_type = ShopmallExcelConfigMgr::getChargePlatformTypeByProductId(p_shopmall_config_mgr, v24);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 64));
  ActionReason::ActionReason((ActionReason *const)(v3 + 96), ACTION_REASON_RECHARGE, ITEM_LIMIT_UNLIMITED);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  ItemComp = Player::getItemComp(this->player_);
  if ( *(_BYTE *)(((unsigned __int64)result >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)result >> 3) + 0x7FFF8000) <= 3 )
  {
    ItemComp = (PlayerItemComp *)result;
    __asan_report_load4(result);
  }
  if ( PlayerItemComp::addMcoin(ItemComp, result->mcoin, (const ActionReason *)(v3 + 96), 1, platform_type) )
  {
    common::milog::MiLogStream::create(
      &v61,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/recharge/player_recharge_comp.cpp",
      "takePointCardProduct",
      1217);
    v26 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
            &v61,
            (const char (*)[21])"addMcoin fails, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    Uid = Player::getUid(this->player_);
    v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, &Uid);
    v28 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v27, (const char (*)[11])" order_id:");
    val = proto::Order::id(order);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, &val);
    common::milog::MiLogStream::~MiLogStream(&v61);
  }
  ActionReason::ActionReason((ActionReason *const)(v3 + 160), ACTION_REASON_RECHARGE_BONUS, ITEM_LIMIT_UNLIMITED);
  if ( *(_DWORD *)(v3 + 32) )
  {
    *(_QWORD *)(v3 + 64) = 0LL;
    *(_QWORD *)(v3 + 72) = 0LL;
    *(_DWORD *)(v3 + 64) = 201;
    *(_DWORD *)(v3 + 68) = *(_DWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    v29 = Player::getItemComp(this->player_);
    if ( PlayerItemComp::addItem(v29, (const ItemParam *)(v3 + 64), (const ActionReason *)(v3 + 160), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v61,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/recharge/player_recharge_comp.cpp",
        "takePointCardProduct",
        1226);
      v30 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v61, (const char (*)[15])"addItem hcoin:");
      v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, (const unsigned int *)(v3 + 32));
      v32 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v31, (const char (*)[13])" fails, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, &val);
      common::milog::MiLogStream::~MiLogStream(&v61);
    }
  }
  if ( *(_DWORD *)(v3 + 48) )
  {
    *(_QWORD *)(v3 + 64) = 0LL;
    *(_QWORD *)(v3 + 72) = 0LL;
    *(_DWORD *)(v3 + 64) = 202;
    *(_DWORD *)(v3 + 68) = *(_DWORD *)(v3 + 48);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    v33 = Player::getItemComp(this->player_);
    if ( PlayerItemComp::addItem(v33, (const ItemParam *)(v3 + 64), (const ActionReason *)(v3 + 160), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v61,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/recharge/player_recharge_comp.cpp",
        "takePointCardProduct",
        1234);
      v34 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v61, (const char (*)[15])"addItem scoin:");
      v35 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v34, (const unsigned int *)(v3 + 48));
      v36 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v35, (const char (*)[13])" fails, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v36, &val);
      common::milog::MiLogStream::~MiLogStream(&v61);
    }
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v3 + 64));
  v37 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
  b = ConstValueExcelConfigMgr::getVipPointPerPointCard(&v37->design_config.txt_config_mgr.const_value_config_mgr);
  v38 = proto::Order::product_num(order);
  v39 = (int)SAFE_MULTIPLY<unsigned int,float>(v38, b);
  v40 = *(_BYTE *)(((unsigned __int64)&result->vip_point >> 3) + 0x7FFF8000) != 0
     && (char)((((_BYTE)result + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&result->vip_point >> 3) + 0x7FFF8000);
  if ( v40 )
  {
    v39 = (_DWORD)result + 4;
    __asan_report_store4(&result->vip_point, (((_BYTE)result + 4) & 7u) + 3, v40);
  }
  result->vip_point = v39;
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 64));
  if ( proto::Order::vip_point_num(order) )
  {
    common::milog::MiLogStream::create(
      &v61,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/recharge/player_recharge_comp.cpp",
      "takePointCardProduct",
      1242);
    v41 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(&v61, (const char (*)[27])off_25171DE0);
    val = proto::Order::vip_point_num(order);
    v42 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v41, &val);
    v43 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v42, (const char (*)[19])" result.vip_point:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v43, &result->vip_point);
    common::milog::MiLogStream::~MiLogStream(&v61);
  }
  common::milog::MiLogStream::create(
    &v61,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "./src/player/recharge/player_recharge_comp.cpp",
    "takePointCardProduct",
    1245);
  v44 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
          &v61,
          (const char (*)[23])"take point_card mcoin:");
  v45 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v44, &result->mcoin);
  v46 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v45, (const char (*)[8])" hcoin:");
  v47 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v46, (const unsigned int *)(v3 + 32));
  v48 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v47, (const char (*)[8])" scoin:");
  v49 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v48, (const unsigned int *)(v3 + 48));
  v50 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v49, (const char (*)[11])" order_id:");
  Uid = proto::Order::id(order);
  v51 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v50, &Uid);
  v52 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v51, (const char (*)[6])" uid:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  val = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v52, &val);
  common::milog::MiLogStream::~MiLogStream(&v61);
  if ( v62 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = -168430091;
  }
};

// Line 1250: range 0000000013E2757C-0000000013E27D83
void __cdecl PlayerRechargeComp::takeMcoinProduct(
        PlayerRechargeComp *const this,
        const std::string *product_id,
        TakeProductResult *result)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  ShopmallExcelConfigMgr *p_shopmall_config_mgr; // rdx
  common::milog::MiLogStream *v7; // rdx
  uint32_t *p_buy_times; // rax
  unsigned int mcoin_first; // edx
  __int64 v10; // rsi
  uint32_t v11; // edx
  char v12; // al
  unsigned int mcoin_non_first; // edx
  __int64 v14; // rsi
  uint32_t v15; // edx
  char v16; // al
  __int64 Now; // rsi
  ShopmallExcelConfigMgr *v18; // rdx
  PlayerItemComp *ItemComp; // rdi
  common::milog::MiLogStream *v20; // r13
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rdx
  common::milog::MiLogStream *v23; // rdx
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rdx
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // r13
  unsigned int val; // [rsp+24h] [rbp-CCh] BYREF
  uint32_t platform_type; // [rsp+28h] [rbp-C8h]
  const data::ProductMcoinDetailConfig *mcoin_config_ptr; // [rsp+30h] [rbp-C0h]
  McoinProductData *mcoin_data; // [rsp+38h] [rbp-B8h]
  std::shared_ptr<Config> v36; // [rsp+40h] [rbp-B0h] BYREF
  common::milog::MiLogStream v37; // [rsp+50h] [rbp-A0h] BYREF
  char v38[128]; // [rsp+70h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v38;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 24 15 pay_reason:1277";
  *(_QWORD *)(v3 + 16) = PlayerRechargeComp::takeMcoinProduct;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218103808;
  v5[536862722] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v36);
  p_shopmall_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v36)->design_config.txt_config_mgr.shopmall_config_mgr;
  mcoin_config_ptr = ShopmallExcelConfigMgr::findProductMcoinDetailConfig(p_shopmall_config_mgr, product_id);
  std::shared_ptr<Config>::~shared_ptr(&v36);
  if ( mcoin_config_ptr )
  {
    mcoin_data = std::unordered_map<unsigned int,McoinProductData>::operator[](
                   &this->mcoin_product_map_,
                   &mcoin_config_ptr->config_id);
    p_buy_times = &mcoin_data->buy_times;
    if ( *(_BYTE *)(((unsigned __int64)p_buy_times >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_buy_times & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_buy_times >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_buy_times);
    }
    if ( mcoin_data->buy_times )
    {
      if ( *(_BYTE *)(((unsigned __int64)&mcoin_config_ptr->mcoin_non_first >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)mcoin_config_ptr + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&mcoin_config_ptr->mcoin_non_first >> 3)
                                                                        + 0x7FFF8000) )
      {
        __asan_report_load4(&mcoin_config_ptr->mcoin_non_first);
      }
      mcoin_non_first = mcoin_config_ptr->mcoin_non_first;
      if ( *(_BYTE *)(((unsigned __int64)&mcoin_config_ptr->mcoin_num >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&mcoin_config_ptr->mcoin_num >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&mcoin_config_ptr->mcoin_num);
      }
      v14 = mcoin_non_first;
      v15 = SAFE_ADD<unsigned int,unsigned int>(mcoin_config_ptr->mcoin_num, mcoin_non_first);
      v16 = *(_BYTE *)(((unsigned __int64)result >> 3) + 0x7FFF8000);
      if ( v16 != 0 && v16 <= 3 )
      {
        LOBYTE(v14) = v16 != 0;
        __asan_report_store4(result, v14, v15);
      }
      result->mcoin = v15;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&mcoin_config_ptr->mcoin_first >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&mcoin_config_ptr->mcoin_first >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&mcoin_config_ptr->mcoin_first);
      }
      mcoin_first = mcoin_config_ptr->mcoin_first;
      if ( *(_BYTE *)(((unsigned __int64)&mcoin_config_ptr->mcoin_num >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&mcoin_config_ptr->mcoin_num >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&mcoin_config_ptr->mcoin_num);
      }
      v10 = mcoin_first;
      v11 = SAFE_ADD<unsigned int,unsigned int>(mcoin_config_ptr->mcoin_num, mcoin_first);
      v12 = *(_BYTE *)(((unsigned __int64)result >> 3) + 0x7FFF8000);
      if ( v12 != 0 && v12 <= 3 )
      {
        LOBYTE(v10) = v12 != 0;
        __asan_report_store4(result, v10, v11);
      }
      result->mcoin = v11;
    }
    if ( *(_BYTE *)(((unsigned __int64)&mcoin_data->buy_times >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)mcoin_data + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&mcoin_data->buy_times >> 3)
                                                               + 0x7FFF8000) )
    {
      __asan_report_load4(&mcoin_data->buy_times);
    }
    ++mcoin_data->buy_times;
    Now = (unsigned int)common::tools::TimeUtils::getNow();
    if ( *(_BYTE *)(((unsigned __int64)mcoin_data >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)mcoin_data >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(mcoin_data, Now, (_BYTE)mcoin_data);
    }
    mcoin_data->last_buy_time = Now;
    std::set<std::string>::insert(&mcoin_data->product_id_set, product_id);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v36);
    v18 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v36)->design_config.txt_config_mgr.shopmall_config_mgr;
    platform_type = ShopmallExcelConfigMgr::getChargePlatformTypeByProductId(v18, product_id);
    std::shared_ptr<Config>::~shared_ptr(&v36);
    ActionReason::ActionReason((ActionReason *const)(v3 + 32), ACTION_REASON_RECHARGE, ITEM_LIMIT_UNLIMITED);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    ItemComp = Player::getItemComp(this->player_);
    if ( *(_BYTE *)(((unsigned __int64)result >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)result >> 3) + 0x7FFF8000) <= 3 )
    {
      ItemComp = (PlayerItemComp *)result;
      __asan_report_load4(result);
    }
    if ( PlayerItemComp::addMcoin(ItemComp, result->mcoin, (const ActionReason *)(v3 + 32), 1, platform_type) )
    {
      common::milog::MiLogStream::create(
        &v37,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/recharge/player_recharge_comp.cpp",
        "takeMcoinProduct",
        1281);
      v20 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
              &v37,
              (const char (*)[21])"addMcoin fails, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &val);
      v22 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v21, (const char (*)[8])" mcoin:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &result->mcoin);
      common::milog::MiLogStream::~MiLogStream(&v37);
    }
    common::milog::MiLogStream::create(
      &v37,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/recharge/player_recharge_comp.cpp",
      "takeMcoinProduct",
      1284);
    v23 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
            &v37,
            (const char (*)[23])"task mcoin product_id:");
    v24 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v23, product_id);
    v25 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v24, (const char (*)[8])" mcoin:");
    v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, &result->mcoin);
    v27 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v26, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, &val);
    common::milog::MiLogStream::~MiLogStream(&v37);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v37,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/recharge/player_recharge_comp.cpp",
      "takeMcoinProduct",
      1254);
    v7 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           &v37,
           (const char (*)[36])"findProductMcoinDetailConfig fails:");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, product_id);
    common::milog::MiLogStream::~MiLogStream(&v37);
  }
  if ( v38 == (char *)v3 )
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

// Line 1288: range 0000000013E27D84-0000000013E29447
void __cdecl PlayerRechargeComp::takeCardProduct(
        PlayerRechargeComp *const this,
        const std::string *product_id,
        TakeProductResult *result)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  ShopmallExcelConfigMgr *p_shopmall_config_mgr; // rdx
  common::milog::MiLogStream *v7; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  ShopmallExcelConfigMgr *v9; // rdx
  std::pair<unsigned int const,unsigned int> *v10; // rax
  std::pair<unsigned int const,unsigned int> *v11; // rdx
  PlayerItemComp *ItemComp; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // r14
  int v15; // r14d
  time_t v16; // r14
  common::milog::MiLogStream *v18; // r14
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  uint32_t expire_time; // ecx
  common::milog::MiLogStream *v22; // r14
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  __int64 v25; // rsi
  bool v26; // dl
  uint32_t take_effect_time; // ecx
  uint32_t v28; // ecx
  char v29; // al
  common::milog::MiLogStream *v30; // r14
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  const std::string *v33; // rsi
  uint32_t mcoin_base; // ecx
  char v35; // al
  ShopmallExcelConfigMgr *v36; // rdx
  PlayerItemComp *v37; // rdi
  common::milog::MiLogStream *v38; // rbx
  common::milog::MiLogStream *v39; // rbx
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rdx
  std::pair<unsigned int const,unsigned int> *v44; // rax
  std::pair<unsigned int const,unsigned int> *v45; // rdx
  PlayerItemComp *v46; // rax
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // r14
  ItemParam *M_current; // r15
  common::milog::MiLogStream *v50; // r14
  common::milog::MiLogStream *v51; // rax
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // rdx
  ItemParam *__last; // [rsp+10h] [rbp-1D0h]
  unsigned int val; // [rsp+34h] [rbp-1ACh] BYREF
  uint32_t day_offset; // [rsp+38h] [rbp-1A8h]
  uint32_t now; // [rsp+3Ch] [rbp-1A4h]
  uint32_t now_day; // [rsp+40h] [rbp-1A0h]
  uint32_t platform_type; // [rsp+44h] [rbp-19Ch]
  uint32_t platform_type_0; // [rsp+50h] [rbp-190h]
  std::map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+58h] [rbp-188h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+60h] [rbp-180h] BYREF
  const data::ProductCardDetailConfig *card_config_ptr; // [rsp+68h] [rbp-178h]
  CardProductData *card_data; // [rsp+70h] [rbp-170h]
  const std::map<unsigned int,unsigned int> *__for_range; // [rsp+78h] [rbp-168h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *k; // [rsp+80h] [rbp-160h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *v; // [rsp+88h] [rbp-158h]
  const std::map<unsigned int,unsigned int> *__for_range_0; // [rsp+90h] [rbp-150h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *k_0; // [rsp+98h] [rbp-148h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *v_0; // [rsp+A0h] [rbp-140h]
  std::pair<unsigned int const,unsigned int> __in; // [rsp+A8h] [rbp-138h] BYREF
  common::milog::MiLogStream v79; // [rsp+B0h] [rbp-130h] BYREF
  char v80[272]; // [rsp+D0h] [rbp-110h] BYREF

  v3 = (unsigned __int64)v80;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 4 23 remain_reward_days:1328 64 16 15 item_param:1370 96 24 11 reason:1366 160 24 12 add_vec:1367";
  *(_QWORD *)(v3 + 16) = PlayerRechargeComp::takeCardProduct;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -219021312;
  v5[536862723] = -234881024;
  v5[536862724] = -218959118;
  v5[536862725] = -218103808;
  v5[536862726] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v3 + 64));
  p_shopmall_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64))->design_config.txt_config_mgr.shopmall_config_mgr;
  card_config_ptr = ShopmallExcelConfigMgr::findProductCardDetailConfig(p_shopmall_config_mgr, product_id);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 64));
  if ( !card_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v79,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/recharge/player_recharge_comp.cpp",
      "takeCardProduct",
      1292);
    v7 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
           &v79,
           (const char (*)[35])"findProductCardDetailConfig fails:");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, product_id);
    common::milog::MiLogStream::~MiLogStream(&v79);
    goto LABEL_97;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v3 + 64));
  v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
  day_offset = ConstValueExcelConfigMgr::getTimeOffsetSec(&v8->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 64));
  now = common::tools::TimeUtils::getNow();
  now_day = common::tools::TimeUtils::getTimeDay(now, day_offset);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v3 + 64));
  v9 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64))->design_config.txt_config_mgr.shopmall_config_mgr;
  platform_type = ShopmallExcelConfigMgr::getChargePlatformTypeByProductId(v9, product_id);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 64));
  card_data = std::unordered_map<unsigned int,CardProductData>::operator[](
                &this->card_product_map_,
                &card_config_ptr->config_id);
  if ( *(_BYTE *)(((unsigned __int64)&card_config_ptr->card_product_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&card_config_ptr->card_product_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&card_config_ptr->card_product_type);
  }
  if ( card_config_ptr->card_product_type != CARD_PRODUCT_TYPE_RESIN )
    goto LABEL_26;
  ActionReason::ActionReason((ActionReason *const)(v3 + 96), ACTION_REASON_RECHARGE_CARD, ITEM_LIMIT_RESIN_CARD);
  *(_BYTE *)(v3 + 110) = 0;
  std::vector<ItemParam>::vector((std::vector<ItemParam> *const)(v3 + 160));
  __for_range = &card_config_ptr->base_item_map;
  __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(&card_config_ptr->base_item_map)._M_node;
  __for_end._M_node = std::map<unsigned int,unsigned int>::end(&card_config_ptr->base_item_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v10 = (std::pair<unsigned int const,unsigned int> *)std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
    v11 = v10;
    if ( ((unsigned __int8)v10 & 7) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&v10->second + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v10 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v10->second + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load_n(v10, 8LL);
    }
    __in = *v11;
    k = std::get<0ul,unsigned int const,unsigned int>(&__in);
    v = std::get<1ul,unsigned int const,unsigned int>(&__in);
    *(_DWORD *)(v3 + 64) = 0;
    *(_DWORD *)(v3 + 68) = 0;
    *(_DWORD *)(v3 + 72) = 0;
    *(_DWORD *)(v3 + 76) = 0;
    if ( *(_BYTE *)(((unsigned __int64)k >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)k & 7) + 3) >= *(_BYTE *)(((unsigned __int64)k >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(k);
    }
    *(_DWORD *)(v3 + 64) = *k;
    if ( *(_BYTE *)(((unsigned __int64)v >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v);
    }
    *(_DWORD *)(v3 + 68) = *v;
    std::vector<ItemParam>::emplace_back<ItemParam&>(
      (std::vector<ItemParam> *const)(v3 + 160),
      (ItemParam *)(v3 + 64),
      (ItemParam *)(v3 + 64));
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  ItemComp = Player::getItemComp(this->player_);
  if ( PlayerItemComp::checkAddItemBatch(
         ItemComp,
         (const std::vector<ItemParam> *)(v3 + 160),
         (const ActionReason *)(v3 + 96)) )
  {
    common::milog::MiLogStream::create(
      &v79,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/player/recharge/player_recharge_comp.cpp",
      "takeCardProduct",
      1319);
    v13 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
            &v79,
            (const char (*)[58])"checkAddItemBatch failed, replace,card_product_config_id:");
    v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &card_config_ptr->config_id);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &val);
    common::milog::MiLogStream::~MiLogStream(&v79);
    PlayerRechargeComp::replaceCardProductWithMcoin(this, card_config_ptr, result, platform_type);
    v15 = 0;
  }
  else
  {
    v15 = 1;
  }
  std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v3 + 160));
  if ( v15 == 1 )
  {
LABEL_26:
    if ( *(_BYTE *)(((unsigned __int64)&card_data->expire_time >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&card_data->expire_time >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&card_data->expire_time);
    }
    if ( card_data->expire_time
      && (v16 = now_day, v16 < common::tools::TimeUtils::getTimeDay(card_data->expire_time, day_offset)) )
    {
      *(_DWORD *)(v3 + 48) = CardProductData::getRemainRewardDays(card_data, day_offset);
      if ( *(_BYTE *)(((unsigned __int64)&card_config_ptr->total_limit_days >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)card_config_ptr + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&card_config_ptr->total_limit_days >> 3)
                                                                       + 0x7FFF8000) )
      {
        __asan_report_load4(&card_config_ptr->total_limit_days);
      }
      if ( card_config_ptr->total_limit_days < *(_DWORD *)(v3 + 48) )
      {
        common::milog::MiLogStream::create(
          &v79,
          &common::milog::MiLogDefault::default_log_obj_,
          2u,
          "./src/player/recharge/player_recharge_comp.cpp",
          "takeCardProduct",
          1332);
        v18 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v79, (const char (*)[5])"uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        val = Player::getUid(this->player_);
        v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &val);
        v20 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                v19,
                (const char (*)[21])" remain_reward_days:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream(&v79);
        PlayerRechargeComp::replaceCardProductWithMcoin(this, card_config_ptr, result, platform_type);
        goto LABEL_97;
      }
      if ( *(_BYTE *)(((unsigned __int64)&card_data->expire_time >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&card_data->expire_time >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&card_data->expire_time);
      }
      expire_time = card_data->expire_time;
      if ( *(_BYTE *)(((unsigned __int64)&card_config_ptr->days >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&card_config_ptr->days >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&card_config_ptr->days);
      }
      card_data->expire_time = expire_time + 86400 * card_config_ptr->days;
      common::milog::MiLogStream::create(
        &v79,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "./src/player/recharge/player_recharge_comp.cpp",
        "takeCardProduct",
        1339);
      v22 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v79, (const char (*)[6])"uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &val);
      v24 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
              v23,
              (const char (*)[25])" card_data continue to: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, &card_data->expire_time);
      common::milog::MiLogStream::~MiLogStream(&v79);
    }
    else
    {
      v25 = (((_BYTE)card_data + 4) & 7u) + 3;
      v26 = *(_BYTE *)(((unsigned __int64)&card_data->take_effect_time >> 3) + 0x7FFF8000) != 0
         && (char)((((_BYTE)card_data + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&card_data->take_effect_time >> 3)
                                                                 + 0x7FFF8000);
      if ( v26 )
        __asan_report_store4(&card_data->take_effect_time, v25, v26);
      card_data->take_effect_time = now;
      take_effect_time = card_data->take_effect_time;
      if ( *(_BYTE *)(((unsigned __int64)&card_config_ptr->days >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&card_config_ptr->days >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&card_config_ptr->days);
      }
      v28 = 86400 * card_config_ptr->days + take_effect_time;
      v29 = *(_BYTE *)(((unsigned __int64)&card_data->expire_time >> 3) + 0x7FFF8000);
      LOBYTE(v25) = v29 != 0;
      if ( v29 != 0 && v29 <= 3 )
        __asan_report_store4(&card_data->expire_time, v25, (_BYTE)card_data + 8);
      card_data->expire_time = v28;
      if ( *(_BYTE *)(((unsigned __int64)card_data >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)card_data >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(card_data, v25, (_BYTE)card_data);
      }
      card_data->last_daily_reward_time = 0;
      common::milog::MiLogStream::create(
        &v79,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "./src/player/recharge/player_recharge_comp.cpp",
        "takeCardProduct",
        1347);
      v30 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v79, (const char (*)[6])"uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, &val);
      v32 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              v31,
              (const char (*)[22])" start new card_data:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, &card_data->expire_time);
      common::milog::MiLogStream::~MiLogStream(&v79);
    }
    v33 = product_id;
    std::set<std::string>::insert(&card_data->product_id_set, product_id);
    if ( *(_BYTE *)(((unsigned __int64)&card_config_ptr->card_product_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&card_config_ptr->card_product_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&card_config_ptr->card_product_type);
    }
    if ( card_config_ptr->card_product_type == CARD_PRODUCT_TYPE_HCOIN )
    {
      if ( *(_BYTE *)(((unsigned __int64)&card_config_ptr->mcoin_base >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&card_config_ptr->mcoin_base >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&card_config_ptr->mcoin_base);
      }
      mcoin_base = card_config_ptr->mcoin_base;
      v35 = *(_BYTE *)(((unsigned __int64)result >> 3) + 0x7FFF8000);
      if ( v35 != 0 && v35 <= 3 )
      {
        LOBYTE(v33) = v35 != 0;
        __asan_report_store4(result, v33, (_BYTE)result);
      }
      result->mcoin = mcoin_base;
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)(v3 + 64));
      v36 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64))->design_config.txt_config_mgr.shopmall_config_mgr;
      platform_type_0 = ShopmallExcelConfigMgr::getChargePlatformTypeByProductId(v36, product_id);
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 64));
      ActionReason::ActionReason((ActionReason *const)(v3 + 160), ACTION_REASON_RECHARGE_CARD, ITEM_LIMIT_MONTH_CARD);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      v37 = Player::getItemComp(this->player_);
      if ( *(_BYTE *)(((unsigned __int64)result >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)result >> 3) + 0x7FFF8000) <= 3 )
      {
        v37 = (PlayerItemComp *)result;
        __asan_report_load4(result);
      }
      if ( PlayerItemComp::addMcoin(v37, result->mcoin, (const ActionReason *)(v3 + 160), 1, platform_type_0) )
      {
        common::milog::MiLogStream::create(
          &v79,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/recharge/player_recharge_comp.cpp",
          "takeCardProduct",
          1360);
        v38 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                &v79,
                (const char (*)[22])"addMcoin fails, uid: ");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v38, &val);
        common::milog::MiLogStream::~MiLogStream(&v79);
      }
      common::milog::MiLogStream::create(
        &v79,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "./src/player/recharge/player_recharge_comp.cpp",
        "takeCardProduct",
        1362);
      v39 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v79, (const char (*)[5])"uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      v40 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v39, &val);
      v41 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
              v40,
              (const char (*)[18])" take base mcoin:");
      v42 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v41, &card_config_ptr->mcoin_base);
      v43 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v42, (const char (*)[15])" card product:");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v43, product_id);
      common::milog::MiLogStream::~MiLogStream(&v79);
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&card_config_ptr->card_product_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&card_config_ptr->card_product_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&card_config_ptr->card_product_type);
      }
      if ( card_config_ptr->card_product_type == CARD_PRODUCT_TYPE_RESIN )
      {
        ActionReason::ActionReason((ActionReason *const)(v3 + 96), ACTION_REASON_RECHARGE_CARD, ITEM_LIMIT_RESIN_CARD);
        std::vector<ItemParam>::vector((std::vector<ItemParam> *const)(v3 + 160));
        __for_range_0 = &card_config_ptr->base_item_map;
        __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(&card_config_ptr->base_item_map)._M_node;
        __for_end._M_node = std::map<unsigned int,unsigned int>::end(__for_range_0)._M_node;
        while ( std::operator!=(&__for_begin, &__for_end) )
        {
          v44 = (std::pair<unsigned int const,unsigned int> *)std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
          v45 = v44;
          if ( ((unsigned __int8)v44 & 7) >= *(_BYTE *)(((unsigned __int64)v44 >> 3) + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)v44 >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)((((unsigned __int64)&v44->second + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)v44 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v44->second + 3) >> 3) + 0x7FFF8000) )
          {
            __asan_report_load_n(v44, 8LL);
          }
          __in = *v45;
          k_0 = std::get<0ul,unsigned int const,unsigned int>(&__in);
          v_0 = std::get<1ul,unsigned int const,unsigned int>(&__in);
          *(_DWORD *)(v3 + 64) = 0;
          *(_DWORD *)(v3 + 68) = 0;
          *(_DWORD *)(v3 + 72) = 0;
          *(_DWORD *)(v3 + 76) = 0;
          if ( *(_BYTE *)(((unsigned __int64)k_0 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)k_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)k_0 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(k_0);
          }
          *(_DWORD *)(v3 + 64) = *k_0;
          if ( *(_BYTE *)(((unsigned __int64)v_0 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v_0 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v_0);
          }
          *(_DWORD *)(v3 + 68) = *v_0;
          std::vector<ItemParam>::emplace_back<ItemParam&>(
            (std::vector<ItemParam> *const)(v3 + 160),
            (ItemParam *)(v3 + 64),
            (ItemParam *)(v3 + 64));
          std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
        }
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        v46 = Player::getItemComp(this->player_);
        if ( PlayerItemComp::addItemBatch(
               v46,
               (const std::vector<ItemParam> *)(v3 + 160),
               (const ActionReason *)(v3 + 96),
               0LL) )
        {
          common::milog::MiLogStream::create(
            &v79,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/recharge/player_recharge_comp.cpp",
            "takeCardProduct",
            1379);
          v47 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                  &v79,
                  (const char (*)[45])"addItemBatch failed, card_product_config_id:");
          v48 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v47, &card_config_ptr->config_id);
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          val = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v48, &val);
          common::milog::MiLogStream::~MiLogStream(&v79);
        }
        __last = std::vector<ItemParam>::end((std::vector<ItemParam> *const)(v3 + 160))._M_current;
        M_current = std::vector<ItemParam>::begin((std::vector<ItemParam> *const)(v3 + 160))._M_current;
        __for_end._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr)std::vector<ItemParam>::end(&result->item_vec)._M_current;
        __gnu_cxx::__normal_iterator<ItemParam const*,std::vector<ItemParam>>::__normal_iterator<ItemParam*>(
          (__gnu_cxx::__normal_iterator<const ItemParam*,std::vector<ItemParam> > *const)&__in,
          (const __gnu_cxx::__normal_iterator<ItemParam*,std::vector<ItemParam> > *)&__for_end);
        std::vector<ItemParam>::insert<__gnu_cxx::__normal_iterator<ItemParam*,std::vector<ItemParam>>,void>(
          &result->item_vec,
          (std::vector<ItemParam>::const_iterator)__in,
          (__gnu_cxx::__normal_iterator<ItemParam*,std::vector<ItemParam> >)M_current,
          (__gnu_cxx::__normal_iterator<ItemParam*,std::vector<ItemParam> >)__last);
        common::milog::MiLogStream::create(
          &v79,
          &common::milog::MiLogDefault::default_log_obj_,
          2u,
          "./src/player/recharge/player_recharge_comp.cpp",
          "takeCardProduct",
          1382);
        v50 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v79, (const char (*)[5])"uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        val = Player::getUid(this->player_);
        v51 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v50, &val);
        v52 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v51, (const char (*)[12])" take item:");
        v53 = common::milog::MiLogStream::operator<<<ItemParam>(v52, (const std::vector<ItemParam> *)(v3 + 160));
        v54 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v53, (const char (*)[15])" card product:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v54, product_id);
        common::milog::MiLogStream::~MiLogStream(&v79);
        std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v3 + 160));
      }
    }
    PlayerRechargeComp::tryGrantCardProductDailyReward(this);
    PlayerRechargeComp::notifyAllResinCard(this);
  }
LABEL_97:
  if ( v80 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = -168430091;
  }
};

// Line 1392: range 0000000013E29448-0000000013E2989B
void __cdecl PlayerRechargeComp::replaceCardProductWithMcoin(
        PlayerRechargeComp *const this,
        const data::ProductCardDetailConfig *card_config,
        TakeProductResult *result,
        uint32_t platform_type)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r12
  uint32_t replace_mcoin_num; // ecx
  char v8; // al
  PlayerItemComp *ItemComp; // rdi
  common::milog::MiLogStream *v10; // r13
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rdx
  common::milog::MiLogStream *v15; // r13
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rdx
  unsigned int val; // [rsp+28h] [rbp-A8h] BYREF
  common::milog::MiLogStream v23; // [rsp+30h] [rbp-A0h] BYREF
  char v24[128]; // [rsp+50h] [rbp-80h] BYREF

  v4 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 24 15 pay_reason:1396";
  *(_QWORD *)(v4 + 16) = PlayerRechargeComp::replaceCardProductWithMcoin;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218103808;
  v6[536862722] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&card_config->replace_mcoin_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&card_config->replace_mcoin_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&card_config->replace_mcoin_num);
  }
  replace_mcoin_num = card_config->replace_mcoin_num;
  v8 = *(_BYTE *)(((unsigned __int64)result >> 3) + 0x7FFF8000);
  if ( v8 != 0 && v8 <= 3 )
  {
    LOBYTE(card_config) = v8 != 0;
    __asan_report_store4(result, card_config, (_BYTE)result);
  }
  result->mcoin = replace_mcoin_num;
  ActionReason::ActionReason((ActionReason *const)(v4 + 32), ACTION_REASON_RECHARGE_CARD_REPLACE, ITEM_LIMIT_UNLIMITED);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  ItemComp = Player::getItemComp(this->player_);
  if ( *(_BYTE *)(((unsigned __int64)result >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)result >> 3) + 0x7FFF8000) <= 3 )
  {
    ItemComp = (PlayerItemComp *)result;
    __asan_report_load4(result);
  }
  if ( PlayerItemComp::addMcoin(ItemComp, result->mcoin, (const ActionReason *)(v4 + 32), 1, platform_type) )
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/recharge/player_recharge_comp.cpp",
      "replaceCardProductWithMcoin",
      1400);
    v10 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
            &v23,
            (const char (*)[21])"addMcoin fails, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
    v12 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v11, (const char (*)[8])" mcoin:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &result->mcoin);
    common::milog::MiLogStream::~MiLogStream(&v23);
  }
  v13 = ((_BYTE)result + 9) & 7;
  v14 = (*(_BYTE *)(((unsigned __int64)&result->is_replace >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v13 >= *(_BYTE *)(((unsigned __int64)&result->is_replace >> 3) + 0x7FFF8000));
  if ( (_BYTE)v14 )
    __asan_report_store1(&result->is_replace, v13, v14);
  result->is_replace = 1;
  common::milog::MiLogStream::create(
    &v23,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "./src/player/recharge/player_recharge_comp.cpp",
    "replaceCardProductWithMcoin",
    1405);
  v15 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v23, (const char (*)[5])"uid:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  val = Player::getUid(this->player_);
  v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
  v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v16, (const char (*)[16])" replace mcoin:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &result->mcoin);
  common::milog::MiLogStream::~MiLogStream(&v23);
  if ( v24 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 1409: range 0000000013E2989C-0000000013E2AC73
void __cdecl PlayerRechargeComp::takePlayProduct(
        PlayerRechargeComp *const this,
        const std::string *product_id,
        TakeProductResult *result)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  ShopmallExcelConfigMgr *p_shopmall_config_mgr; // rdx
  common::milog::MiLogStream *v7; // rdx
  ShopmallExcelConfigMgr *v8; // rdx
  data::ProductPlayType play_type; // eax
  common::milog::MiLogStream *v10; // r13
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rdx
  PlayerBattlePassComp *v13; // rax
  PlayerBattlePassComp *v14; // rcx
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rsi
  uint32_t v18; // ecx
  char v19; // al
  PlayerItemComp *v20; // rdi
  common::milog::MiLogStream *v21; // r13
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rdx
  PlayerBattlePassComp *v24; // rax
  common::milog::MiLogStream *v25; // r13
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rdx
  PlayerBattlePassComp *v28; // rax
  PlayerBattlePassComp *v29; // rcx
  __int64 v30; // rsi
  __int64 v31; // rdx
  __int64 v32; // rsi
  uint32_t v33; // ecx
  char v34; // al
  PlayerItemComp *v35; // rdi
  common::milog::MiLogStream *v36; // r13
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rdx
  PlayerBattlePassComp *v39; // rax
  common::milog::MiLogStream *v40; // r13
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rdx
  PlayerBattlePassComp *BattlePassComp; // rax
  PlayerBattlePassComp *v44; // rcx
  __int64 v45; // rsi
  __int64 v46; // rdx
  __int64 v47; // rsi
  uint32_t replace_mcoin_num; // ecx
  char v49; // al
  PlayerItemComp *ItemComp; // rdi
  common::milog::MiLogStream *v51; // r13
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rdx
  PlayerBattlePassComp *v54; // rax
  common::milog::MiLogStream *v55; // r13
  common::milog::MiLogStream *v56; // rax
  common::milog::MiLogStream *v57; // rdx
  common::milog::MiLogStream *v58; // r13
  common::milog::MiLogStream *v59; // rax
  common::milog::MiLogStream *v60; // rdx
  common::milog::MiLogStream *v61; // rax
  common::milog::MiLogStream *v62; // rax
  unsigned int val; // [rsp+28h] [rbp-D8h] BYREF
  uint32_t platform_type; // [rsp+2Ch] [rbp-D4h]
  uint32_t cur_schedule_id_1; // [rsp+30h] [rbp-D0h]
  uint32_t cur_schedule_id_0; // [rsp+38h] [rbp-C8h]
  uint32_t cur_schedule_id; // [rsp+40h] [rbp-C0h]
  const data::ProductPlayDetailConfig *play_config_ptr; // [rsp+48h] [rbp-B8h]
  std::shared_ptr<Config> v75; // [rsp+50h] [rbp-B0h] BYREF
  common::milog::MiLogStream v76; // [rsp+60h] [rbp-A0h] BYREF
  char v77[128]; // [rsp+80h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v77;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 24 15 pay_reason:1479";
  *(_QWORD *)(v3 + 16) = PlayerRechargeComp::takePlayProduct;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218103808;
  v5[536862722] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v75);
  p_shopmall_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v75)->design_config.txt_config_mgr.shopmall_config_mgr;
  play_config_ptr = ShopmallExcelConfigMgr::findProductPlayDetailConfig(p_shopmall_config_mgr, product_id);
  std::shared_ptr<Config>::~shared_ptr(&v75);
  if ( play_config_ptr )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v75);
    v8 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v75)->design_config.txt_config_mgr.shopmall_config_mgr;
    platform_type = ShopmallExcelConfigMgr::getChargePlatformTypeByProductId(v8, product_id);
    std::shared_ptr<Config>::~shared_ptr(&v75);
    if ( *(_BYTE *)(((unsigned __int64)&play_config_ptr->play_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&play_config_ptr->play_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&play_config_ptr->play_type);
    }
    play_type = play_config_ptr->play_type;
    if ( play_type == PRODUCT_PLAY_TYPE_BATTLE_PASS_UPGRADE )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      BattlePassComp = Player::getBattlePassComp(this->player_);
      cur_schedule_id_1 = PlayerBattlePassComp::getCurScheduleId(BattlePassComp);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      v44 = Player::getBattlePassComp(this->player_);
      if ( *(_BYTE *)(((unsigned __int64)&play_config_ptr->play_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&play_config_ptr->play_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&play_config_ptr->play_type);
      }
      if ( PlayerBattlePassComp::checkCanBuyBattlePass(v44, cur_schedule_id_1, play_config_ptr->play_type) )
      {
        v45 = ((_BYTE)result + 9) & 7;
        v46 = (*(_BYTE *)(((unsigned __int64)&result->is_replace >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v45 >= *(_BYTE *)(((unsigned __int64)&result->is_replace >> 3) + 0x7FFF8000));
        if ( (_BYTE)v46 )
          __asan_report_store1(&result->is_replace, v45, v46);
        result->is_replace = 1;
        v47 = (((_BYTE)play_config_ptr + 60) & 7u) + 3;
        if ( *(_BYTE *)(((unsigned __int64)&play_config_ptr->replace_mcoin_num >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)play_config_ptr + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&play_config_ptr->replace_mcoin_num >> 3)
                                                                         + 0x7FFF8000) )
        {
          __asan_report_load4(&play_config_ptr->replace_mcoin_num);
        }
        replace_mcoin_num = play_config_ptr->replace_mcoin_num;
        v49 = *(_BYTE *)(((unsigned __int64)result >> 3) + 0x7FFF8000);
        if ( v49 != 0 && v49 <= 3 )
        {
          LOBYTE(v47) = v49 != 0;
          __asan_report_store4(result, v47, (_BYTE)result);
        }
        result->mcoin = replace_mcoin_num;
        ActionReason::ActionReason(
          (ActionReason *const)(v3 + 32),
          ACTION_REASON_RECHARGE_PLAY_REPLACE,
          ITEM_LIMIT_UNLIMITED);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        ItemComp = Player::getItemComp(this->player_);
        if ( *(_BYTE *)(((unsigned __int64)result >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)result >> 3) + 0x7FFF8000) <= 3 )
        {
          ItemComp = (PlayerItemComp *)result;
          __asan_report_load4(result);
        }
        if ( PlayerItemComp::addMcoin(ItemComp, result->mcoin, (const ActionReason *)(v3 + 32), 1, platform_type) )
        {
          common::milog::MiLogStream::create(
            &v76,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/recharge/player_recharge_comp.cpp",
            "takePlayProduct",
            1483);
          v51 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                  &v76,
                  (const char (*)[25])"addMcoin pay fails, uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          val = Player::getUid(this->player_);
          v52 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v51, &val);
          v53 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v52, (const char (*)[8])" mcoin:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v53, &result->mcoin);
          common::milog::MiLogStream::~MiLogStream(&v76);
          if ( *(_BYTE *)(((unsigned __int64)result >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)result >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_store4(result, result, (_BYTE)result);
          }
          result->mcoin = 0;
        }
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        v54 = Player::getBattlePassComp(this->player_);
        if ( PlayerBattlePassComp::upgradeFromNormalToExtra(v54, cur_schedule_id_1, platform_type) )
        {
          common::milog::MiLogStream::create(
            &v76,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/recharge/player_recharge_comp.cpp",
            "takePlayProduct",
            1490);
          v55 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v76, (const char (*)[5])"uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          val = Player::getUid(this->player_);
          v56 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v55, &val);
          v57 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                  v56,
                  (const char (*)[44])"take BATTLE_PASS_UPGRADE fails, product_id:");
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v57, product_id);
          common::milog::MiLogStream::~MiLogStream(&v76);
        }
      }
    }
    else if ( play_type <= PRODUCT_PLAY_TYPE_BATTLE_PASS_UPGRADE )
    {
      if ( play_type == PRODUCT_PLAY_TYPE_BATTLE_PASS_EXTRA )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        v28 = Player::getBattlePassComp(this->player_);
        cur_schedule_id_0 = PlayerBattlePassComp::getCurScheduleId(v28);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        v29 = Player::getBattlePassComp(this->player_);
        if ( *(_BYTE *)(((unsigned __int64)&play_config_ptr->play_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&play_config_ptr->play_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&play_config_ptr->play_type);
        }
        if ( PlayerBattlePassComp::checkCanBuyBattlePass(v29, cur_schedule_id_0, play_config_ptr->play_type) )
        {
          v30 = ((_BYTE)result + 9) & 7;
          v31 = (*(_BYTE *)(((unsigned __int64)&result->is_replace >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v30 >= *(_BYTE *)(((unsigned __int64)&result->is_replace >> 3) + 0x7FFF8000));
          if ( (_BYTE)v31 )
            __asan_report_store1(&result->is_replace, v30, v31);
          result->is_replace = 1;
          v32 = (((_BYTE)play_config_ptr + 60) & 7u) + 3;
          if ( *(_BYTE *)(((unsigned __int64)&play_config_ptr->replace_mcoin_num >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)play_config_ptr + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&play_config_ptr->replace_mcoin_num >> 3)
                                                                           + 0x7FFF8000) )
          {
            __asan_report_load4(&play_config_ptr->replace_mcoin_num);
          }
          v33 = play_config_ptr->replace_mcoin_num;
          v34 = *(_BYTE *)(((unsigned __int64)result >> 3) + 0x7FFF8000);
          if ( v34 != 0 && v34 <= 3 )
          {
            LOBYTE(v32) = v34 != 0;
            __asan_report_store4(result, v32, (_BYTE)result);
          }
          result->mcoin = v33;
          ActionReason::ActionReason(
            (ActionReason *const)(v3 + 32),
            ACTION_REASON_RECHARGE_PLAY_REPLACE,
            ITEM_LIMIT_UNLIMITED);
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          v35 = Player::getItemComp(this->player_);
          if ( *(_BYTE *)(((unsigned __int64)result >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)result >> 3) + 0x7FFF8000) <= 3 )
          {
            v35 = (PlayerItemComp *)result;
            __asan_report_load4(result);
          }
          if ( PlayerItemComp::addMcoin(v35, result->mcoin, (const ActionReason *)(v3 + 32), 1, platform_type) )
          {
            common::milog::MiLogStream::create(
              &v76,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/player/recharge/player_recharge_comp.cpp",
              "takePlayProduct",
              1459);
            v36 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                    &v76,
                    (const char (*)[25])"addMcoin pay fails, uid:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            val = Player::getUid(this->player_);
            v37 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v36, &val);
            v38 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v37, (const char (*)[8])" mcoin:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v38, &result->mcoin);
            common::milog::MiLogStream::~MiLogStream(&v76);
            if ( *(_BYTE *)(((unsigned __int64)result >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)result >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_store4(result, result, (_BYTE)result);
            }
            result->mcoin = 0;
          }
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          v39 = Player::getBattlePassComp(this->player_);
          if ( PlayerBattlePassComp::extraUnlockPaidBattlePass(v39, cur_schedule_id_0, platform_type) )
          {
            common::milog::MiLogStream::create(
              &v76,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/player/recharge/player_recharge_comp.cpp",
              "takePlayProduct",
              1466);
            v40 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v76, (const char (*)[5])"uid:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            val = Player::getUid(this->player_);
            v41 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v40, &val);
            v42 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                    v41,
                    (const char (*)[42])"take BATTLE_PASS_EXTRA fails, product_id:");
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v42, product_id);
            common::milog::MiLogStream::~MiLogStream(&v76);
          }
        }
      }
      else if ( play_type )
      {
        if ( play_type == PRODUCT_PLAY_TYPE_BATTLE_PASS_NORMAL )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          v13 = Player::getBattlePassComp(this->player_);
          cur_schedule_id = PlayerBattlePassComp::getCurScheduleId(v13);
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          v14 = Player::getBattlePassComp(this->player_);
          if ( *(_BYTE *)(((unsigned __int64)&play_config_ptr->play_type >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&play_config_ptr->play_type >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&play_config_ptr->play_type);
          }
          if ( PlayerBattlePassComp::checkCanBuyBattlePass(v14, cur_schedule_id, play_config_ptr->play_type) )
          {
            v15 = ((_BYTE)result + 9) & 7;
            v16 = (*(_BYTE *)(((unsigned __int64)&result->is_replace >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v15 >= *(_BYTE *)(((unsigned __int64)&result->is_replace >> 3) + 0x7FFF8000));
            if ( (_BYTE)v16 )
              __asan_report_store1(&result->is_replace, v15, v16);
            result->is_replace = 1;
            v17 = (((_BYTE)play_config_ptr + 60) & 7u) + 3;
            if ( *(_BYTE *)(((unsigned __int64)&play_config_ptr->replace_mcoin_num >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)play_config_ptr + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&play_config_ptr->replace_mcoin_num >> 3)
                                                                             + 0x7FFF8000) )
            {
              __asan_report_load4(&play_config_ptr->replace_mcoin_num);
            }
            v18 = play_config_ptr->replace_mcoin_num;
            v19 = *(_BYTE *)(((unsigned __int64)result >> 3) + 0x7FFF8000);
            if ( v19 != 0 && v19 <= 3 )
            {
              LOBYTE(v17) = v19 != 0;
              __asan_report_store4(result, v17, (_BYTE)result);
            }
            result->mcoin = v18;
            ActionReason::ActionReason(
              (ActionReason *const)(v3 + 32),
              ACTION_REASON_RECHARGE_PLAY_REPLACE,
              ITEM_LIMIT_UNLIMITED);
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            v20 = Player::getItemComp(this->player_);
            if ( *(_BYTE *)(((unsigned __int64)result >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)result >> 3) + 0x7FFF8000) <= 3 )
            {
              v20 = (PlayerItemComp *)result;
              __asan_report_load4(result);
            }
            if ( PlayerItemComp::addMcoin(v20, result->mcoin, (const ActionReason *)(v3 + 32), 1, platform_type) )
            {
              common::milog::MiLogStream::create(
                &v76,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/player/recharge/player_recharge_comp.cpp",
                "takePlayProduct",
                1435);
              v21 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                      &v76,
                      (const char (*)[21])"addMcoin fails, uid:");
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8(&this->player_);
              val = Player::getUid(this->player_);
              v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &val);
              v23 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v22, (const char (*)[8])" mcoin:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &result->mcoin);
              common::milog::MiLogStream::~MiLogStream(&v76);
              if ( *(_BYTE *)(((unsigned __int64)result >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)result >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_store4(result, result, (_BYTE)result);
              }
              result->mcoin = 0;
            }
          }
          else
          {
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            v24 = Player::getBattlePassComp(this->player_);
            if ( PlayerBattlePassComp::normalUnlockPaidBattlePass(v24, cur_schedule_id, platform_type) )
            {
              common::milog::MiLogStream::create(
                &v76,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/player/recharge/player_recharge_comp.cpp",
                "takePlayProduct",
                1442);
              v25 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v76, (const char (*)[5])"uid:");
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8(&this->player_);
              val = Player::getUid(this->player_);
              v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, &val);
              v27 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                      v26,
                      (const char (*)[43])"take BATTLE_PASS_NORMAL fails, product_id:");
              common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v27, product_id);
              common::milog::MiLogStream::~MiLogStream(&v76);
            }
          }
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v76,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/recharge/player_recharge_comp.cpp",
          "takePlayProduct",
          1420);
        v10 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v76, (const char (*)[5])"uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        val = Player::getUid(this->player_);
        v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
        v12 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                v11,
                (const char (*)[31])" Not support None, product_id:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v12, product_id);
        common::milog::MiLogStream::~MiLogStream(&v76);
      }
    }
    common::milog::MiLogStream::create(
      &v76,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/player/recharge/player_recharge_comp.cpp",
      "takePlayProduct",
      1497);
    v58 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v76, (const char (*)[5])"uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    v59 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v58, &val);
    v60 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v59, (const char (*)[19])" take playProduct:");
    v61 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v60, product_id);
    v62 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v61, (const char (*)[7])" type:");
    common::milog::MiLogStream::operator<<<data::ProductPlayType,(data::ProductPlayType*)0>(
      v62,
      &play_config_ptr->play_type);
    common::milog::MiLogStream::~MiLogStream(&v76);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v76,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/recharge/player_recharge_comp.cpp",
      "takePlayProduct",
      1413);
    v7 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
           &v76,
           (const char (*)[35])"findProductPlayDetailConfig fails:");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, product_id);
    common::milog::MiLogStream::~MiLogStream(&v76);
  }
  if ( v77 == (char *)v3 )
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

// Line 1501: range 0000000013E2AC74-0000000013E2B5EF
void __cdecl PlayerRechargeComp::takePackageProduct(
        PlayerRechargeComp *const this,
        const std::string *product_id,
        TakeProductResult *result)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  ShopmallExcelConfigMgr *p_shopmall_config_mgr; // rdx
  common::milog::MiLogStream *v7; // rdx
  common::milog::MiLogStream *v8; // rbx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rdx
  std::vector<data::PackageContentConfig>::size_type v11; // rax
  PlayerMailComp *MailComp; // rax
  common::milog::MiLogStream *v13; // r14
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rdx
  common::milog::MiLogStream *v16; // r14
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rdx
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  unsigned int val; // [rsp+20h] [rbp-1A0h] BYREF
  uint32_t mail_config_id; // [rsp+24h] [rbp-19Ch]
  std::vector<data::PackageContentConfig>::const_iterator __for_begin; // [rsp+28h] [rbp-198h] BYREF
  std::vector<data::PackageContentConfig>::const_iterator __for_end; // [rsp+30h] [rbp-190h] BYREF
  const data::ProductPS4PackageDetailConfig *package_config_ptr; // [rsp+38h] [rbp-188h]
  const std::vector<data::PackageContentConfig> *__for_range; // [rsp+40h] [rbp-180h]
  const data::PackageContentConfig *material; // [rsp+48h] [rbp-178h]
  common::milog::MiLogStream v29; // [rsp+50h] [rbp-170h] BYREF
  char v30[336]; // [rsp+70h] [rbp-150h] BYREF

  v3 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(288LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 32 8 9 iter:1511 64 16 15 item_param:1528 96 24 19 item_param_vec:1524 160 24 17 argument_vec:"
                        "1531 224 24 11 reason:1532";
  *(_QWORD *)(v3 + 16) = PlayerRechargeComp::takePackageProduct;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -219021312;
  v5[536862723] = -234881024;
  v5[536862724] = -218959118;
  v5[536862725] = -234881024;
  v5[536862726] = -218959118;
  v5[536862727] = -218103808;
  v5[536862728] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v3 + 64));
  p_shopmall_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64))->design_config.txt_config_mgr.shopmall_config_mgr;
  package_config_ptr = ShopmallExcelConfigMgr::findProductPS4PackageDetailConfig(p_shopmall_config_mgr, product_id);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 64));
  if ( package_config_ptr )
  {
    *(std::unordered_set<std::string>::iterator *)(v3 + 32) = std::unordered_set<std::string>::find(
                                                                &this->ps4_package_product_set_,
                                                                product_id);
    __for_end._M_current = (const data::PackageContentConfig *)std::unordered_set<std::string>::end(&this->ps4_package_product_set_)._M_cur;
    if ( std::__detail::operator!=<std::string,true>(
           (const std::__detail::_Node_iterator_base<std::string,true> *)(v3 + 32),
           (const std::__detail::_Node_iterator_base<std::string,true> *)&__for_end) )
    {
      common::milog::MiLogStream::create(
        &v29,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/recharge/player_recharge_comp.cpp",
        "takePackageProduct",
        1514);
      v8 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v29, (const char (*)[5])"uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
      v10 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
              v9,
              (const char (*)[29])" already takePackageProduct:");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, product_id);
      common::milog::MiLogStream::~MiLogStream(&v29);
      if ( *(char *)(((unsigned __int64)&result->is_succ >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(&result->is_succ, product_id, &result->is_succ);
      result->is_succ = 0;
    }
    else
    {
      std::unordered_set<std::string>::insert(&this->ps4_package_product_set_, product_id);
      if ( *(_BYTE *)(((unsigned __int64)&package_config_ptr->mail_config_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&package_config_ptr->mail_config_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&package_config_ptr->mail_config_id);
      }
      mail_config_id = package_config_ptr->mail_config_id;
      std::vector<ItemParam>::vector((std::vector<ItemParam> *const)(v3 + 96));
      v11 = std::vector<data::PackageContentConfig>::size(&package_config_ptr->content_vec);
      std::vector<ItemParam>::reserve((std::vector<ItemParam> *const)(v3 + 96), v11);
      __for_range = &package_config_ptr->content_vec;
      __for_begin._M_current = std::vector<data::PackageContentConfig>::begin(&package_config_ptr->content_vec)._M_current;
      __for_end._M_current = std::vector<data::PackageContentConfig>::end(__for_range)._M_current;
      while ( __gnu_cxx::operator!=<data::PackageContentConfig const*,std::vector<data::PackageContentConfig>>(
                &__for_begin,
                &__for_end) )
      {
        material = __gnu_cxx::__normal_iterator<data::PackageContentConfig const*,std::vector<data::PackageContentConfig>>::operator*(&__for_begin);
        *(_QWORD *)(v3 + 64) = 0LL;
        *(_QWORD *)(v3 + 72) = 0LL;
        if ( *(_BYTE *)(((unsigned __int64)&material->material_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&material->material_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&material->material_id);
        }
        *(_DWORD *)(v3 + 64) = material->material_id;
        if ( *(_BYTE *)(((unsigned __int64)&material->material_num >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)material + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&material->material_num >> 3)
                                                                  + 0x7FFF8000) )
        {
          __asan_report_load4(&material->material_num);
        }
        *(_DWORD *)(v3 + 68) = material->material_num;
        std::vector<ItemParam>::push_back(
          (std::vector<ItemParam> *const)(v3 + 96),
          (const std::vector<ItemParam>::value_type *)(v3 + 64));
        __gnu_cxx::__normal_iterator<data::PackageContentConfig const*,std::vector<data::PackageContentConfig>>::operator++(&__for_begin);
      }
      std::vector<std::string>::vector((std::vector<std::string> *const)(v3 + 160));
      ActionReason::ActionReason((ActionReason *const)(v3 + 224), ACTION_REASON_RECHARGE_PACKAGE, ITEM_LIMIT_UNLIMITED);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      MailComp = Player::getMailComp(this->player_);
      if ( PlayerMailComp::addMailById(
             MailComp,
             mail_config_id,
             0xAu,
             (const std::vector<ItemParam> *)(v3 + 96),
             (const std::vector<std::string> *)(v3 + 160),
             (const ActionReason *)(v3 + 224)) )
      {
        common::milog::MiLogStream::create(
          &v29,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/recharge/player_recharge_comp.cpp",
          "takePackageProduct",
          1535);
        v13 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                &v29,
                (const char (*)[24])"addMailById fails, uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        val = Player::getUid(this->player_);
        v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
        v15 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v14, (const char (*)[13])" product_id:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v15, product_id);
        common::milog::MiLogStream::~MiLogStream(&v29);
        if ( *(char *)(((unsigned __int64)&result->is_succ >> 3) + 0x7FFF8000) < 0 )
          __asan_report_store1(&result->is_succ, product_id, &result->is_succ);
        result->is_succ = 0;
      }
      common::milog::MiLogStream::create(
        &v29,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "./src/player/recharge/player_recharge_comp.cpp",
        "takePackageProduct",
        1539);
      v16 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v29, (const char (*)[5])"uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &val);
      v18 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              v17,
              (const char (*)[22])" take PackageProduct:");
      v19 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v18, product_id);
      v20 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v19, (const char (*)[12])" config_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &package_config_ptr->config_id);
      common::milog::MiLogStream::~MiLogStream(&v29);
      std::vector<std::string>::~vector((std::vector<std::string> *const)(v3 + 160));
      std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v3 + 96));
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v29,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/recharge/player_recharge_comp.cpp",
      "takePackageProduct",
      1505);
    v7 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           &v29,
           (const char (*)[36])"findProductMcoinDetailConfig fails:");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, product_id);
    common::milog::MiLogStream::~MiLogStream(&v29);
    if ( *(char *)(((unsigned __int64)&result->is_succ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&result->is_succ, product_id, &result->is_succ);
    result->is_succ = 0;
  }
  if ( v30 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8020) = 0;
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

// Line 1543: range 0000000013E2B5F0-0000000013E2C07A
void __cdecl PlayerRechargeComp::takeGoogleGiftCardProduct(
        PlayerRechargeComp *const this,
        const std::string *product_id,
        TakeProductResult *result)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  ShopmallExcelConfigMgr *p_shopmall_config_mgr; // rdx
  common::milog::MiLogStream *v7; // rdx
  std::__detail::_Node_iterator<std::pair<unsigned int const,GoogleGiftCardProductData>,false,false>::pointer v8; // rdx
  GoogleGiftCardProductData *p_second; // rax
  char v10; // al
  common::milog::MiLogStream *v11; // rbx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rdx
  GoogleGiftCardProductData *v14; // rax
  std::vector<data::PackageContentConfig>::size_type v15; // rax
  PlayerMailComp *MailComp; // rax
  common::milog::MiLogStream *v17; // r14
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rdx
  common::milog::MiLogStream *v20; // r14
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rdx
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  unsigned int val; // [rsp+28h] [rbp-1C8h] BYREF
  uint32_t mail_config_id; // [rsp+2Ch] [rbp-1C4h]
  std::vector<data::PackageContentConfig>::const_iterator __for_begin; // [rsp+30h] [rbp-1C0h] BYREF
  std::vector<data::PackageContentConfig>::const_iterator __for_end; // [rsp+38h] [rbp-1B8h] BYREF
  const data::ProductGoogleGiftCardDetailConfig *google_gift_card_config_ptr; // [rsp+40h] [rbp-1B0h]
  GoogleGiftCardProductData *product_data; // [rsp+48h] [rbp-1A8h]
  const std::vector<data::PackageContentConfig> *__for_range; // [rsp+50h] [rbp-1A0h]
  const data::PackageContentConfig *material; // [rsp+58h] [rbp-198h]
  common::milog::MiLogStream v34; // [rsp+60h] [rbp-190h] BYREF
  char v35[368]; // [rsp+80h] [rbp-170h] BYREF

  v3 = (unsigned __int64)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(320LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 48 4 14 config_id:1553 64 8 9 iter:1554 96 16 15 item_param:1571 128 24 19 item_param_vec:1567"
                        " 192 24 17 argument_vec:1574 256 24 11 reason:1575";
  *(_QWORD *)(v3 + 16) = PlayerRechargeComp::takeGoogleGiftCardProduct;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -219021312;
  v5[536862724] = -234881024;
  v5[536862725] = -218959118;
  v5[536862726] = -234881024;
  v5[536862727] = -218959118;
  v5[536862728] = -218103808;
  v5[536862729] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v3 + 96));
  p_shopmall_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96))->design_config.txt_config_mgr.shopmall_config_mgr;
  google_gift_card_config_ptr = ShopmallExcelConfigMgr::findProductGoogleGiftCardDetailConfig(
                                  p_shopmall_config_mgr,
                                  product_id);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 96));
  if ( google_gift_card_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&google_gift_card_config_ptr->config_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&google_gift_card_config_ptr->config_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&google_gift_card_config_ptr->config_id);
    }
    *(_DWORD *)(v3 + 48) = google_gift_card_config_ptr->config_id;
    *(std::unordered_map<unsigned int,GoogleGiftCardProductData>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,GoogleGiftCardProductData>::find(
                                                                                           &this->google_gift_card_product_map_,
                                                                                           (const std::unordered_map<unsigned int,GoogleGiftCardProductData>::key_type *)(v3 + 48));
    __for_end._M_current = (const data::PackageContentConfig *)std::unordered_map<unsigned int,GoogleGiftCardProductData>::end(&this->google_gift_card_product_map_)._M_cur;
    if ( !std::__detail::operator!=<std::pair<unsigned int const,GoogleGiftCardProductData>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,GoogleGiftCardProductData>,false> *)(v3 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,GoogleGiftCardProductData>,false> *)&__for_end) )
      goto LABEL_15;
    v8 = std::__detail::_Node_iterator<std::pair<unsigned int const,GoogleGiftCardProductData>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,GoogleGiftCardProductData>,false,false> *const)(v3 + 64));
    p_second = &v8->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
    }
    if ( v8->second.buy_times )
      v10 = 1;
    else
LABEL_15:
      v10 = 0;
    if ( v10 )
    {
      common::milog::MiLogStream::create(
        &v34,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/recharge/player_recharge_comp.cpp",
        "takeGoogleGiftCardProduct",
        1557);
      v11 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v34, (const char (*)[5])"uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &val);
      v13 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
              v12,
              (const char (*)[23])" already take product:");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v13, product_id);
      common::milog::MiLogStream::~MiLogStream(&v34);
      if ( *(char *)(((unsigned __int64)&result->is_succ >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(&result->is_succ, product_id, &result->is_succ);
      result->is_succ = 0;
    }
    else
    {
      v14 = std::unordered_map<unsigned int,GoogleGiftCardProductData>::operator[](
              &this->google_gift_card_product_map_,
              (const std::unordered_map<unsigned int,GoogleGiftCardProductData>::key_type *)(v3 + 48));
      product_data = v14;
      if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v14);
      }
      ++product_data->buy_times;
      if ( *(_BYTE *)(((unsigned __int64)&google_gift_card_config_ptr->mail_config_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&google_gift_card_config_ptr->mail_config_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&google_gift_card_config_ptr->mail_config_id);
      }
      mail_config_id = google_gift_card_config_ptr->mail_config_id;
      std::vector<ItemParam>::vector((std::vector<ItemParam> *const)(v3 + 128));
      v15 = std::vector<data::PackageContentConfig>::size(&google_gift_card_config_ptr->content_vec);
      std::vector<ItemParam>::reserve((std::vector<ItemParam> *const)(v3 + 128), v15);
      __for_range = &google_gift_card_config_ptr->content_vec;
      __for_begin._M_current = std::vector<data::PackageContentConfig>::begin(&google_gift_card_config_ptr->content_vec)._M_current;
      __for_end._M_current = std::vector<data::PackageContentConfig>::end(__for_range)._M_current;
      while ( __gnu_cxx::operator!=<data::PackageContentConfig const*,std::vector<data::PackageContentConfig>>(
                &__for_begin,
                &__for_end) )
      {
        material = __gnu_cxx::__normal_iterator<data::PackageContentConfig const*,std::vector<data::PackageContentConfig>>::operator*(&__for_begin);
        *(_QWORD *)(v3 + 96) = 0LL;
        *(_QWORD *)(v3 + 104) = 0LL;
        if ( *(_BYTE *)(((unsigned __int64)&material->material_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&material->material_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&material->material_id);
        }
        *(_DWORD *)(v3 + 96) = material->material_id;
        if ( *(_BYTE *)(((unsigned __int64)&material->material_num >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)material + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&material->material_num >> 3)
                                                                  + 0x7FFF8000) )
        {
          __asan_report_load4(&material->material_num);
        }
        *(_DWORD *)(v3 + 100) = material->material_num;
        std::vector<ItemParam>::push_back(
          (std::vector<ItemParam> *const)(v3 + 128),
          (const std::vector<ItemParam>::value_type *)(v3 + 96));
        __gnu_cxx::__normal_iterator<data::PackageContentConfig const*,std::vector<data::PackageContentConfig>>::operator++(&__for_begin);
      }
      std::vector<std::string>::vector((std::vector<std::string> *const)(v3 + 192));
      ActionReason::ActionReason(
        (ActionReason *const)(v3 + 256),
        ACTION_REASON_RECHARGE_GOOGLE_GIFT_GARD,
        ITEM_LIMIT_UNLIMITED);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      MailComp = Player::getMailComp(this->player_);
      if ( PlayerMailComp::addMailById(
             MailComp,
             mail_config_id,
             0xEu,
             (const std::vector<ItemParam> *)(v3 + 128),
             (const std::vector<std::string> *)(v3 + 192),
             (const ActionReason *)(v3 + 256)) )
      {
        common::milog::MiLogStream::create(
          &v34,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/recharge/player_recharge_comp.cpp",
          "takeGoogleGiftCardProduct",
          1578);
        v17 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                &v34,
                (const char (*)[24])"addMailById fails, uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        val = Player::getUid(this->player_);
        v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &val);
        v19 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v18, (const char (*)[13])" product_id:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v19, product_id);
        common::milog::MiLogStream::~MiLogStream(&v34);
        if ( *(char *)(((unsigned __int64)&result->is_succ >> 3) + 0x7FFF8000) < 0 )
          __asan_report_store1(&result->is_succ, product_id, &result->is_succ);
        result->is_succ = 0;
      }
      common::milog::MiLogStream::create(
        &v34,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "./src/player/recharge/player_recharge_comp.cpp",
        "takeGoogleGiftCardProduct",
        1582);
      v20 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v34, (const char (*)[5])"uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &val);
      v22 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
              v21,
              (const char (*)[29])" take GoogleGiftCardProduct:");
      v23 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v22, product_id);
      v24 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v23, (const char (*)[12])" config_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
        v24,
        &google_gift_card_config_ptr->config_id);
      common::milog::MiLogStream::~MiLogStream(&v34);
      std::vector<std::string>::~vector((std::vector<std::string> *const)(v3 + 192));
      std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v3 + 128));
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v34,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/recharge/player_recharge_comp.cpp",
      "takeGoogleGiftCardProduct",
      1547);
    v7 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
           &v34,
           (const char (*)[45])"findProductGoogleGiftCardDetailConfig fails:");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, product_id);
    common::milog::MiLogStream::~MiLogStream(&v34);
    if ( *(char *)(((unsigned __int64)&result->is_succ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&result->is_succ, product_id, &result->is_succ);
    result->is_succ = 0;
  }
  if ( v35 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1586: range 0000000013E2C07C-0000000013E2CB06
void __cdecl PlayerRechargeComp::takeAppleGiftCardProduct(
        PlayerRechargeComp *const this,
        const std::string *product_id,
        TakeProductResult *result)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  ShopmallExcelConfigMgr *p_shopmall_config_mgr; // rdx
  common::milog::MiLogStream *v7; // rdx
  std::__detail::_Node_iterator<std::pair<unsigned int const,AppleGiftCardProductData>,false,false>::pointer v8; // rdx
  AppleGiftCardProductData *p_second; // rax
  char v10; // al
  common::milog::MiLogStream *v11; // rbx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rdx
  AppleGiftCardProductData *v14; // rax
  std::vector<data::PackageContentConfig>::size_type v15; // rax
  PlayerMailComp *MailComp; // rax
  common::milog::MiLogStream *v17; // r14
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rdx
  common::milog::MiLogStream *v20; // r14
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rdx
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  unsigned int val; // [rsp+28h] [rbp-1C8h] BYREF
  uint32_t mail_config_id; // [rsp+2Ch] [rbp-1C4h]
  std::vector<data::PackageContentConfig>::const_iterator __for_begin; // [rsp+30h] [rbp-1C0h] BYREF
  std::vector<data::PackageContentConfig>::const_iterator __for_end; // [rsp+38h] [rbp-1B8h] BYREF
  const data::ProductAppleGiftCardDetailConfig *apple_gift_card_config_ptr; // [rsp+40h] [rbp-1B0h]
  AppleGiftCardProductData *product_data; // [rsp+48h] [rbp-1A8h]
  const std::vector<data::PackageContentConfig> *__for_range; // [rsp+50h] [rbp-1A0h]
  const data::PackageContentConfig *content; // [rsp+58h] [rbp-198h]
  common::milog::MiLogStream v34; // [rsp+60h] [rbp-190h] BYREF
  char v35[368]; // [rsp+80h] [rbp-170h] BYREF

  v3 = (unsigned __int64)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(320LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 48 4 14 config_id:1596 64 8 9 iter:1597 96 16 15 item_param:1614 128 24 19 item_param_vec:1610"
                        " 192 24 17 argument_vec:1617 256 24 11 reason:1618";
  *(_QWORD *)(v3 + 16) = PlayerRechargeComp::takeAppleGiftCardProduct;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -219021312;
  v5[536862724] = -234881024;
  v5[536862725] = -218959118;
  v5[536862726] = -234881024;
  v5[536862727] = -218959118;
  v5[536862728] = -218103808;
  v5[536862729] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v3 + 96));
  p_shopmall_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96))->design_config.txt_config_mgr.shopmall_config_mgr;
  apple_gift_card_config_ptr = ShopmallExcelConfigMgr::findProductAppleGiftCardDetailConfig(
                                 p_shopmall_config_mgr,
                                 product_id);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 96));
  if ( apple_gift_card_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&apple_gift_card_config_ptr->config_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&apple_gift_card_config_ptr->config_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&apple_gift_card_config_ptr->config_id);
    }
    *(_DWORD *)(v3 + 48) = apple_gift_card_config_ptr->config_id;
    *(std::unordered_map<unsigned int,AppleGiftCardProductData>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,AppleGiftCardProductData>::find(
                                                                                          &this->apple_gift_card_product_map_,
                                                                                          (const std::unordered_map<unsigned int,AppleGiftCardProductData>::key_type *)(v3 + 48));
    __for_end._M_current = (const data::PackageContentConfig *)std::unordered_map<unsigned int,AppleGiftCardProductData>::end(&this->apple_gift_card_product_map_)._M_cur;
    if ( !std::__detail::operator!=<std::pair<unsigned int const,AppleGiftCardProductData>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,AppleGiftCardProductData>,false> *)(v3 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,AppleGiftCardProductData>,false> *)&__for_end) )
      goto LABEL_15;
    v8 = std::__detail::_Node_iterator<std::pair<unsigned int const,AppleGiftCardProductData>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,AppleGiftCardProductData>,false,false> *const)(v3 + 64));
    p_second = &v8->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
    }
    if ( v8->second.buy_times )
      v10 = 1;
    else
LABEL_15:
      v10 = 0;
    if ( v10 )
    {
      common::milog::MiLogStream::create(
        &v34,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/recharge/player_recharge_comp.cpp",
        "takeAppleGiftCardProduct",
        1600);
      v11 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v34, (const char (*)[5])"uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &val);
      v13 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
              v12,
              (const char (*)[23])" already take product:");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v13, product_id);
      common::milog::MiLogStream::~MiLogStream(&v34);
      if ( *(char *)(((unsigned __int64)&result->is_succ >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(&result->is_succ, product_id, &result->is_succ);
      result->is_succ = 0;
    }
    else
    {
      v14 = std::unordered_map<unsigned int,AppleGiftCardProductData>::operator[](
              &this->apple_gift_card_product_map_,
              (const std::unordered_map<unsigned int,AppleGiftCardProductData>::key_type *)(v3 + 48));
      product_data = v14;
      if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v14);
      }
      ++product_data->buy_times;
      if ( *(_BYTE *)(((unsigned __int64)&apple_gift_card_config_ptr->mail_config_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&apple_gift_card_config_ptr->mail_config_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&apple_gift_card_config_ptr->mail_config_id);
      }
      mail_config_id = apple_gift_card_config_ptr->mail_config_id;
      std::vector<ItemParam>::vector((std::vector<ItemParam> *const)(v3 + 128));
      v15 = std::vector<data::PackageContentConfig>::size(&apple_gift_card_config_ptr->content_vec);
      std::vector<ItemParam>::reserve((std::vector<ItemParam> *const)(v3 + 128), v15);
      __for_range = &apple_gift_card_config_ptr->content_vec;
      __for_begin._M_current = std::vector<data::PackageContentConfig>::begin(&apple_gift_card_config_ptr->content_vec)._M_current;
      __for_end._M_current = std::vector<data::PackageContentConfig>::end(__for_range)._M_current;
      while ( __gnu_cxx::operator!=<data::PackageContentConfig const*,std::vector<data::PackageContentConfig>>(
                &__for_begin,
                &__for_end) )
      {
        content = __gnu_cxx::__normal_iterator<data::PackageContentConfig const*,std::vector<data::PackageContentConfig>>::operator*(&__for_begin);
        *(_QWORD *)(v3 + 96) = 0LL;
        *(_QWORD *)(v3 + 104) = 0LL;
        if ( *(_BYTE *)(((unsigned __int64)&content->material_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&content->material_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&content->material_id);
        }
        *(_DWORD *)(v3 + 96) = content->material_id;
        if ( *(_BYTE *)(((unsigned __int64)&content->material_num >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)content + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&content->material_num >> 3)
                                                                 + 0x7FFF8000) )
        {
          __asan_report_load4(&content->material_num);
        }
        *(_DWORD *)(v3 + 100) = content->material_num;
        std::vector<ItemParam>::push_back(
          (std::vector<ItemParam> *const)(v3 + 128),
          (const std::vector<ItemParam>::value_type *)(v3 + 96));
        __gnu_cxx::__normal_iterator<data::PackageContentConfig const*,std::vector<data::PackageContentConfig>>::operator++(&__for_begin);
      }
      std::vector<std::string>::vector((std::vector<std::string> *const)(v3 + 192));
      ActionReason::ActionReason(
        (ActionReason *const)(v3 + 256),
        ACTION_REASON_RECHARGE_APPLE_GIFT_GARD,
        ITEM_LIMIT_UNLIMITED);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      MailComp = Player::getMailComp(this->player_);
      if ( PlayerMailComp::addMailById(
             MailComp,
             mail_config_id,
             0x11u,
             (const std::vector<ItemParam> *)(v3 + 128),
             (const std::vector<std::string> *)(v3 + 192),
             (const ActionReason *)(v3 + 256)) )
      {
        common::milog::MiLogStream::create(
          &v34,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/recharge/player_recharge_comp.cpp",
          "takeAppleGiftCardProduct",
          1621);
        v17 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                &v34,
                (const char (*)[24])"addMailById fails, uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        val = Player::getUid(this->player_);
        v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &val);
        v19 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v18, (const char (*)[13])" product_id:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v19, product_id);
        common::milog::MiLogStream::~MiLogStream(&v34);
        if ( *(char *)(((unsigned __int64)&result->is_succ >> 3) + 0x7FFF8000) < 0 )
          __asan_report_store1(&result->is_succ, product_id, &result->is_succ);
        result->is_succ = 0;
      }
      common::milog::MiLogStream::create(
        &v34,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "./src/player/recharge/player_recharge_comp.cpp",
        "takeAppleGiftCardProduct",
        1625);
      v20 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v34, (const char (*)[5])"uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &val);
      v22 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
              v21,
              (const char (*)[28])" take AppleGiftCardProduct:");
      v23 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v22, product_id);
      v24 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v23, (const char (*)[12])" config_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
        v24,
        &apple_gift_card_config_ptr->config_id);
      common::milog::MiLogStream::~MiLogStream(&v34);
      std::vector<std::string>::~vector((std::vector<std::string> *const)(v3 + 192));
      std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v3 + 128));
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v34,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/recharge/player_recharge_comp.cpp",
      "takeAppleGiftCardProduct",
      1590);
    v7 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
           &v34,
           (const char (*)[44])"findProductAppleGiftCardDetailConfig fails:");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, product_id);
    common::milog::MiLogStream::~MiLogStream(&v34);
    if ( *(char *)(((unsigned __int64)&result->is_succ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&result->is_succ, product_id, &result->is_succ);
    result->is_succ = 0;
  }
  if ( v35 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1629: range 0000000013E2CB08-0000000013E2D874
void __cdecl PlayerRechargeComp::takePsnCompensationProduct(
        PlayerRechargeComp *const this,
        const std::string *product_id,
        TakeProductResult *result)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  ShopmallExcelConfigMgr *p_shopmall_config_mgr; // rdx
  common::milog::MiLogStream *v7; // rdx
  std::__detail::_Node_iterator<std::pair<unsigned int const,PsnCompensationProductData>,false,false>::pointer v8; // rdx
  uint32_t *p_month_buy_times; // rax
  common::milog::MiLogStream *v10; // r14
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rdx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // r14
  std::__detail::_Node_iterator<std::pair<unsigned int const,PsnCompensationProductData>,false,false>::pointer v15; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,PsnCompensationProductData>,false,false>::pointer v16; // rdx
  uint32_t *v17; // rax
  uint32_t month_buy_times; // ecx
  common::milog::MiLogStream *v19; // r14
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rdx
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // r14
  uint32_t *v24; // rsi
  bool v25; // dl
  bool v26; // dl
  std::vector<data::PackageContentConfig>::size_type v27; // rax
  PlayerMailComp *MailComp; // rax
  common::milog::MiLogStream *v29; // r14
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rdx
  common::milog::MiLogStream *v32; // r14
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rdx
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  unsigned int val; // [rsp+24h] [rbp-1CCh] BYREF
  uint32_t now; // [rsp+28h] [rbp-1C8h]
  uint32_t mail_config_id; // [rsp+2Ch] [rbp-1C4h]
  std::vector<data::PackageContentConfig>::const_iterator __for_begin; // [rsp+30h] [rbp-1C0h] BYREF
  std::vector<data::PackageContentConfig>::const_iterator __for_end; // [rsp+38h] [rbp-1B8h] BYREF
  const data::ProductPsnCompensationDetailConfig *psn_compensation_config_ptr; // [rsp+40h] [rbp-1B0h]
  PsnCompensationProductData *product_data; // [rsp+48h] [rbp-1A8h]
  const std::vector<data::PackageContentConfig> *__for_range; // [rsp+50h] [rbp-1A0h]
  const data::PackageContentConfig *content; // [rsp+58h] [rbp-198h]
  common::milog::MiLogStream v47; // [rsp+60h] [rbp-190h] BYREF
  char v48[368]; // [rsp+80h] [rbp-170h] BYREF

  v3 = (unsigned __int64)v48;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(320LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 48 4 14 config_id:1638 64 8 9 iter:1640 96 16 15 item_param:1671 128 24 19 item_param_vec:1667"
                        " 192 24 17 argument_vec:1674 256 24 11 reason:1675";
  *(_QWORD *)(v3 + 16) = PlayerRechargeComp::takePsnCompensationProduct;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -219021312;
  v5[536862724] = -234881024;
  v5[536862725] = -218959118;
  v5[536862726] = -234881024;
  v5[536862727] = -218959118;
  v5[536862728] = -218103808;
  v5[536862729] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v3 + 96));
  p_shopmall_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96))->design_config.txt_config_mgr.shopmall_config_mgr;
  psn_compensation_config_ptr = ShopmallExcelConfigMgr::findProductPsnCompensationDetailConfig(
                                  p_shopmall_config_mgr,
                                  product_id);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 96));
  if ( psn_compensation_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&psn_compensation_config_ptr->config_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&psn_compensation_config_ptr->config_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&psn_compensation_config_ptr->config_id);
    }
    *(_DWORD *)(v3 + 48) = psn_compensation_config_ptr->config_id;
    *(std::unordered_map<unsigned int,PsnCompensationProductData>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,PsnCompensationProductData>::find(
                                                                                            &this->psn_compensation_product_map_,
                                                                                            (const std::unordered_map<unsigned int,PsnCompensationProductData>::key_type *)(v3 + 48));
    __for_end._M_current = (const data::PackageContentConfig *)std::unordered_map<unsigned int,PsnCompensationProductData>::end(&this->psn_compensation_product_map_)._M_cur;
    if ( !std::__detail::operator!=<std::pair<unsigned int const,PsnCompensationProductData>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,PsnCompensationProductData>,false> *)(v3 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,PsnCompensationProductData>,false> *)&__for_end) )
      goto LABEL_27;
    v8 = std::__detail::_Node_iterator<std::pair<unsigned int const,PsnCompensationProductData>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,PsnCompensationProductData>,false,false> *const)(v3 + 64));
    p_month_buy_times = &v8->second.month_buy_times;
    if ( *(_BYTE *)(((unsigned __int64)p_month_buy_times >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_month_buy_times & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_month_buy_times >> 3)
                                                                          + 0x7FFF8000) )
    {
      __asan_report_load4(p_month_buy_times);
    }
    if ( v8->second.month_buy_times > 1 )
    {
      common::milog::MiLogStream::create(
        &v47,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/recharge/player_recharge_comp.cpp",
        "takePsnCompensationProduct",
        1647);
      v10 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v47, (const char (*)[5])"uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
      v12 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v11, (const char (*)[14])" ,product_id:");
      v13 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v12, product_id);
      v14 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
              v13,
              (const char (*)[23])" reach warning limit: ");
      v15 = std::__detail::_Node_iterator<std::pair<unsigned int const,PsnCompensationProductData>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,PsnCompensationProductData>,false,false> *const)(v3 + 64));
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &v15->second.month_buy_times);
      common::milog::MiLogStream::~MiLogStream(&v47);
    }
    v16 = std::__detail::_Node_iterator<std::pair<unsigned int const,PsnCompensationProductData>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,PsnCompensationProductData>,false,false> *const)(v3 + 64));
    v17 = &v16->second.month_buy_times;
    if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v17 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v17);
    }
    month_buy_times = v16->second.month_buy_times;
    if ( *(_BYTE *)(((unsigned __int64)&psn_compensation_config_ptr->limit_count >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)psn_compensation_config_ptr + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&psn_compensation_config_ptr->limit_count >> 3)
                                                                                 + 0x7FFF8000) )
    {
      __asan_report_load4(&psn_compensation_config_ptr->limit_count);
    }
    if ( month_buy_times >= psn_compensation_config_ptr->limit_count )
    {
      common::milog::MiLogStream::create(
        &v47,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/recharge/player_recharge_comp.cpp",
        "takePsnCompensationProduct",
        1652);
      v19 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v47, (const char (*)[5])"uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &val);
      v21 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v20, (const char (*)[14])" ,product_id:");
      v22 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v21, product_id);
      v23 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
              v22,
              (const char (*)[25])" reach month buy limit: ");
      v24 = &std::__detail::_Node_iterator<std::pair<unsigned int const,PsnCompensationProductData>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,PsnCompensationProductData>,false,false> *const)(v3 + 64))->second.month_buy_times;
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, v24);
      common::milog::MiLogStream::~MiLogStream(&v47);
      if ( *(char *)(((unsigned __int64)&result->is_succ >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(&result->is_succ, v24, &result->is_succ);
      result->is_succ = 0;
    }
    else
    {
LABEL_27:
      product_data = std::unordered_map<unsigned int,PsnCompensationProductData>::operator[](
                       &this->psn_compensation_product_map_,
                       (const std::unordered_map<unsigned int,PsnCompensationProductData>::key_type *)(v3 + 48));
      now = common::tools::TimeUtils::getNow();
      v25 = *(_BYTE *)(((unsigned __int64)&product_data->last_buy_time >> 3) + 0x7FFF8000) != 0
         && (char)((((_BYTE)product_data + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&product_data->last_buy_time >> 3)
                                                                    + 0x7FFF8000);
      if ( v25 )
        __asan_report_store4(&product_data->last_buy_time, (((_BYTE)product_data + 4) & 7u) + 3, v25);
      product_data->last_buy_time = now;
      if ( *(_BYTE *)(((unsigned __int64)product_data >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)product_data & 7) + 3) >= *(_BYTE *)(((unsigned __int64)product_data >> 3)
                                                                       + 0x7FFF8000) )
      {
        __asan_report_load4(product_data);
      }
      ++product_data->buy_times;
      v26 = *(_BYTE *)(((unsigned __int64)&product_data->month_last_buy_time >> 3) + 0x7FFF8000) != 0
         && (char)((((_BYTE)product_data + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&product_data->month_last_buy_time >> 3)
                                                                     + 0x7FFF8000);
      if ( v26 )
        __asan_report_store4(&product_data->month_last_buy_time, (((_BYTE)product_data + 12) & 7u) + 3, v26);
      product_data->month_last_buy_time = now;
      if ( *(_BYTE *)(((unsigned __int64)&product_data->month_buy_times >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)product_data + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&product_data->month_buy_times >> 3)
                                                                   + 0x7FFF8000) )
      {
        __asan_report_load4(&product_data->month_buy_times);
      }
      ++product_data->month_buy_times;
      if ( *(_BYTE *)(((unsigned __int64)&psn_compensation_config_ptr->mail_config_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&psn_compensation_config_ptr->mail_config_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&psn_compensation_config_ptr->mail_config_id);
      }
      mail_config_id = psn_compensation_config_ptr->mail_config_id;
      std::vector<ItemParam>::vector((std::vector<ItemParam> *const)(v3 + 128));
      v27 = std::vector<data::PackageContentConfig>::size(&psn_compensation_config_ptr->content_vec);
      std::vector<ItemParam>::reserve((std::vector<ItemParam> *const)(v3 + 128), v27);
      __for_range = &psn_compensation_config_ptr->content_vec;
      __for_begin._M_current = std::vector<data::PackageContentConfig>::begin(&psn_compensation_config_ptr->content_vec)._M_current;
      __for_end._M_current = std::vector<data::PackageContentConfig>::end(__for_range)._M_current;
      while ( __gnu_cxx::operator!=<data::PackageContentConfig const*,std::vector<data::PackageContentConfig>>(
                &__for_begin,
                &__for_end) )
      {
        content = __gnu_cxx::__normal_iterator<data::PackageContentConfig const*,std::vector<data::PackageContentConfig>>::operator*(&__for_begin);
        *(_QWORD *)(v3 + 96) = 0LL;
        *(_QWORD *)(v3 + 104) = 0LL;
        if ( *(_BYTE *)(((unsigned __int64)&content->material_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&content->material_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&content->material_id);
        }
        *(_DWORD *)(v3 + 96) = content->material_id;
        if ( *(_BYTE *)(((unsigned __int64)&content->material_num >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)content + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&content->material_num >> 3)
                                                                 + 0x7FFF8000) )
        {
          __asan_report_load4(&content->material_num);
        }
        *(_DWORD *)(v3 + 100) = content->material_num;
        std::vector<ItemParam>::push_back(
          (std::vector<ItemParam> *const)(v3 + 128),
          (const std::vector<ItemParam>::value_type *)(v3 + 96));
        __gnu_cxx::__normal_iterator<data::PackageContentConfig const*,std::vector<data::PackageContentConfig>>::operator++(&__for_begin);
      }
      std::vector<std::string>::vector((std::vector<std::string> *const)(v3 + 192));
      ActionReason::ActionReason(
        (ActionReason *const)(v3 + 256),
        ACTION_REASON_RECHARGE_PSN_COMPENSATION_PRODUCT,
        ITEM_LIMIT_UNLIMITED);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      MailComp = Player::getMailComp(this->player_);
      if ( PlayerMailComp::addMailById(
             MailComp,
             mail_config_id,
             0x12u,
             (const std::vector<ItemParam> *)(v3 + 128),
             (const std::vector<std::string> *)(v3 + 192),
             (const ActionReason *)(v3 + 256)) )
      {
        common::milog::MiLogStream::create(
          &v47,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/recharge/player_recharge_comp.cpp",
          "takePsnCompensationProduct",
          1678);
        v29 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                &v47,
                (const char (*)[24])"addMailById fails, uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        val = Player::getUid(this->player_);
        v30 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, &val);
        v31 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v30, (const char (*)[13])" product_id:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v31, product_id);
        common::milog::MiLogStream::~MiLogStream(&v47);
        if ( *(char *)(((unsigned __int64)&result->is_succ >> 3) + 0x7FFF8000) < 0 )
          __asan_report_store1(&result->is_succ, product_id, &result->is_succ);
        result->is_succ = 0;
      }
      common::milog::MiLogStream::create(
        &v47,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "./src/player/recharge/player_recharge_comp.cpp",
        "takePsnCompensationProduct",
        1682);
      v32 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v47, (const char (*)[5])"uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      v33 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, &val);
      v34 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
              v33,
              (const char (*)[30])" take PsnCompensationProduct:");
      v35 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v34, product_id);
      v36 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v35, (const char (*)[12])" config_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v36, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v47);
      std::vector<std::string>::~vector((std::vector<std::string> *const)(v3 + 192));
      std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v3 + 128));
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v47,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/recharge/player_recharge_comp.cpp",
      "takePsnCompensationProduct",
      1633);
    v7 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
           &v47,
           (const char (*)[46])"findProductPsnCompensationDetailConfig fails:");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, product_id);
    common::milog::MiLogStream::~MiLogStream(&v47);
    if ( *(char *)(((unsigned __int64)&result->is_succ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&result->is_succ, product_id, &result->is_succ);
    result->is_succ = 0;
  }
  if ( v48 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1686: range 0000000013E2D876-0000000013E2DA28
__int64 __fastcall PlayerRechargeComp::getConcertProductObtainCount(
        const PlayerRechargeComp *const this,
        uint32_t config_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,ConcertProductData>,false,false>::pointer v5; // rax
  uint32_t buy_times; // r14d
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,ConcertProductData>,false,false>::pointer v7; // rax
  __int64 result; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,ConcertProductData>,false> __y; // [rsp+18h] [rbp-98h] BYREF
  char v10[144]; // [rsp+20h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 14 config_id:1685 64 8 9 iter:1687";
  *(_QWORD *)(v2 + 16) = PlayerRechargeComp::getConcertProductObtainCount;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = config_id;
  *(std::unordered_map<unsigned int,ConcertProductData>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,ConcertProductData>::find(
                                                                                        &this->concert_product_map_,
                                                                                        (const std::unordered_map<unsigned int,ConcertProductData>::key_type *)(v2 + 48));
  __y._M_cur = std::unordered_map<unsigned int,ConcertProductData>::end(&this->concert_product_map_)._M_cur;
  if ( std::__detail::operator!=<std::pair<unsigned int const,ConcertProductData>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,ConcertProductData>,false> *)(v2 + 64),
         &__y) )
  {
    v5 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,ConcertProductData>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,ConcertProductData>,false,false> *const)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&v5->second >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v5->second >> 3) + 0x7FFF8000) <= 3 )
    {
      v5 = (std::__detail::_Node_const_iterator<std::pair<unsigned int const,ConcertProductData>,false,false>::pointer)__asan_report_load4(&v5->second);
    }
    buy_times = v5->second.buy_times;
    v7 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,ConcertProductData>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,ConcertProductData>,false,false> *const)(v2 + 64));
    result = buy_times + (unsigned int)std::vector<std::string>::size(&v7->second.ticket_vec);
  }
  else
  {
    result = 0LL;
  }
  if ( v10 == (char *)v2 )
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

// Line 1696: range 0000000013E2DA2A-0000000013E2DBB3
__int64 __fastcall PlayerRechargeComp::getConcertProductBuyTimes(
        const PlayerRechargeComp *const this,
        uint32_t config_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,ConcertProductData>,false,false>::pointer v5; // rax
  __int64 result; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,ConcertProductData>,false> __y; // [rsp+18h] [rbp-88h] BYREF
  char v8[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 14 config_id:1695 64 8 9 iter:1697";
  *(_QWORD *)(v2 + 16) = PlayerRechargeComp::getConcertProductBuyTimes;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = config_id;
  *(std::unordered_map<unsigned int,ConcertProductData>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,ConcertProductData>::find(
                                                                                        &this->concert_product_map_,
                                                                                        (const std::unordered_map<unsigned int,ConcertProductData>::key_type *)(v2 + 48));
  __y._M_cur = std::unordered_map<unsigned int,ConcertProductData>::end(&this->concert_product_map_)._M_cur;
  if ( std::__detail::operator!=<std::pair<unsigned int const,ConcertProductData>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,ConcertProductData>,false> *)(v2 + 64),
         &__y) )
  {
    v5 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,ConcertProductData>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,ConcertProductData>,false,false> *const)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&v5->second >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v5->second >> 3) + 0x7FFF8000) <= 3 )
    {
      v5 = (std::__detail::_Node_const_iterator<std::pair<unsigned int const,ConcertProductData>,false,false>::pointer)__asan_report_load4(&v5->second);
    }
    result = v5->second.buy_times;
  }
  else
  {
    result = 0LL;
  }
  if ( v8 == (char *)v2 )
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

// Line 1706: range 0000000013E2DBB4-0000000013E2EA2C
void __cdecl PlayerRechargeComp::takeConcertProduct(
        PlayerRechargeComp *const this,
        const std::string *product_id,
        TakeProductResult *result)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  ShopmallExcelConfigMgr *p_shopmall_config_mgr; // rdx
  common::milog::MiLogStream *v7; // rdx
  common::milog::MiLogStream *v8; // r14
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rdx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rdx
  uint32_t replace_mcoin_num; // ecx
  char v18; // al
  ShopmallExcelConfigMgr *v19; // rdx
  PlayerItemComp *ItemComp; // rdi
  common::milog::MiLogStream *v21; // rbx
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rdx
  common::milog::MiLogStream *v24; // rbx
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rdx
  std::vector<data::PackageContentConfig>::size_type v27; // rax
  PlayerItemComp *v28; // rax
  common::milog::MiLogStream *v29; // r14
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rdx
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  ItemParam *M_current; // r15
  common::milog::MiLogStream *v37; // r14
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rdx
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  ItemParam *__last; // [rsp+10h] [rbp-1B0h]
  unsigned int val; // [rsp+30h] [rbp-190h] BYREF
  uint32_t now; // [rsp+34h] [rbp-18Ch]
  uint32_t platform_type; // [rsp+38h] [rbp-188h]
  std::vector<data::PackageContentConfig>::const_iterator __for_begin; // [rsp+40h] [rbp-180h] BYREF
  std::vector<data::PackageContentConfig>::const_iterator __for_end; // [rsp+48h] [rbp-178h] BYREF
  const data::ProductConcertPackageDetailConfig *concert_config_ptr; // [rsp+50h] [rbp-170h]
  ConcertProductData *concert_product_data; // [rsp+58h] [rbp-168h]
  const std::vector<data::PackageContentConfig> *__for_range; // [rsp+60h] [rbp-160h]
  const data::PackageContentConfig *content; // [rsp+68h] [rbp-158h]
  common::milog::MiLogStream v56; // [rsp+70h] [rbp-150h] BYREF
  char v57[304]; // [rsp+90h] [rbp-130h] BYREF

  v3 = (unsigned __int64)v57;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 48 4 14 config_id:1715 64 4 17 obtain_count:1716 80 4 8 ret:1751 96 16 15 item_param:1747 128 "
                        "24 19 item_param_vec:1743 192 24 11 reason:1750";
  *(_QWORD *)(v3 + 16) = PlayerRechargeComp::takeConcertProduct;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862723] = -219021312;
  v5[536862724] = -234881024;
  v5[536862725] = -218959118;
  v5[536862726] = -218103808;
  v5[536862727] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v3 + 96));
  p_shopmall_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96))->design_config.txt_config_mgr.shopmall_config_mgr;
  concert_config_ptr = ShopmallExcelConfigMgr::findProductConcertPackageDetailConfig(p_shopmall_config_mgr, product_id);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 96));
  if ( concert_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&concert_config_ptr->config_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&concert_config_ptr->config_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&concert_config_ptr->config_id);
    }
    *(_DWORD *)(v3 + 48) = concert_config_ptr->config_id;
    *(_DWORD *)(v3 + 64) = PlayerRechargeComp::getConcertProductObtainCount(this, *(_DWORD *)(v3 + 48));
    now = common::tools::TimeUtils::getNow();
    if ( *(_DWORD *)(v3 + 64) )
      goto LABEL_17;
    if ( *(_BYTE *)(((unsigned __int64)&concert_config_ptr->begin_timestamp >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&concert_config_ptr->begin_timestamp >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&concert_config_ptr->begin_timestamp);
    }
    if ( now < concert_config_ptr->begin_timestamp )
      goto LABEL_17;
    if ( *(_BYTE *)(((unsigned __int64)&concert_config_ptr->delivery_end_timestamp >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&concert_config_ptr->delivery_end_timestamp >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&concert_config_ptr->delivery_end_timestamp);
    }
    if ( now > concert_config_ptr->delivery_end_timestamp )
    {
LABEL_17:
      common::milog::MiLogStream::create(
        &v56,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "./src/player/recharge/player_recharge_comp.cpp",
        "takeConcertProduct",
        1723);
      v8 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v56, (const char (*)[5])"uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
      v10 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v9, (const char (*)[12])" config_id:");
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v11, (const char (*)[14])" product_id: ");
      v13 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v12, product_id);
      v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v13, (const char (*)[16])" obtain_count: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 64));
      common::milog::MiLogStream::~MiLogStream(&v56);
      v15 = ((_BYTE)result + 9) & 7;
      v16 = (*(_BYTE *)(((unsigned __int64)&result->is_replace >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v15 >= *(_BYTE *)(((unsigned __int64)&result->is_replace >> 3) + 0x7FFF8000));
      if ( (_BYTE)v16 )
        __asan_report_store1(&result->is_replace, v15, v16);
      result->is_replace = 1;
      if ( *(_BYTE *)(((unsigned __int64)&concert_config_ptr->replace_mcoin_num >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&concert_config_ptr->replace_mcoin_num >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&concert_config_ptr->replace_mcoin_num);
      }
      replace_mcoin_num = concert_config_ptr->replace_mcoin_num;
      v18 = *(_BYTE *)(((unsigned __int64)result >> 3) + 0x7FFF8000);
      if ( v18 != 0 && v18 <= 3 )
      {
        LOBYTE(v15) = v18 != 0;
        __asan_report_store4(result, v15, (_BYTE)result);
      }
      result->mcoin = replace_mcoin_num;
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)(v3 + 96));
      v19 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96))->design_config.txt_config_mgr.shopmall_config_mgr;
      platform_type = ShopmallExcelConfigMgr::getChargePlatformTypeByProductId(v19, product_id);
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 96));
      ActionReason::ActionReason(
        (ActionReason *const)(v3 + 192),
        ACTION_REASON_RECHARGE_CONCERT_PRODUCT_REPLACE,
        ITEM_LIMIT_UNLIMITED);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      ItemComp = Player::getItemComp(this->player_);
      if ( *(_BYTE *)(((unsigned __int64)result >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)result >> 3) + 0x7FFF8000) <= 3 )
      {
        ItemComp = (PlayerItemComp *)result;
        __asan_report_load4(result);
      }
      if ( PlayerItemComp::addMcoin(ItemComp, result->mcoin, (const ActionReason *)(v3 + 192), 1, platform_type) )
      {
        common::milog::MiLogStream::create(
          &v56,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/recharge/player_recharge_comp.cpp",
          "takeConcertProduct",
          1732);
        v21 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                &v56,
                (const char (*)[21])"addMcoin fails, uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        val = Player::getUid(this->player_);
        v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &val);
        v23 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v22, (const char (*)[8])" mcoin:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &result->mcoin);
        common::milog::MiLogStream::~MiLogStream(&v56);
      }
      common::milog::MiLogStream::create(
        &v56,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "./src/player/recharge/player_recharge_comp.cpp",
        "takeConcertProduct",
        1735);
      v24 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v56, (const char (*)[5])"uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, &val);
      v26 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v25, (const char (*)[16])" replace mcoin:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, &result->mcoin);
      common::milog::MiLogStream::~MiLogStream(&v56);
    }
    else
    {
      concert_product_data = std::unordered_map<unsigned int,ConcertProductData>::operator[](
                               &this->concert_product_map_,
                               (const std::unordered_map<unsigned int,ConcertProductData>::key_type *)(v3 + 48));
      if ( *(_BYTE *)(((unsigned __int64)concert_product_data >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)concert_product_data >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(concert_product_data);
      }
      ++concert_product_data->buy_times;
      std::vector<ItemParam>::vector((std::vector<ItemParam> *const)(v3 + 128));
      v27 = std::vector<data::PackageContentConfig>::size(&concert_config_ptr->content_vec);
      std::vector<ItemParam>::reserve((std::vector<ItemParam> *const)(v3 + 128), v27);
      __for_range = &concert_config_ptr->content_vec;
      __for_begin._M_current = std::vector<data::PackageContentConfig>::begin(&concert_config_ptr->content_vec)._M_current;
      __for_end._M_current = std::vector<data::PackageContentConfig>::end(&concert_config_ptr->content_vec)._M_current;
      while ( __gnu_cxx::operator!=<data::PackageContentConfig const*,std::vector<data::PackageContentConfig>>(
                &__for_begin,
                &__for_end) )
      {
        content = __gnu_cxx::__normal_iterator<data::PackageContentConfig const*,std::vector<data::PackageContentConfig>>::operator*(&__for_begin);
        *(_QWORD *)(v3 + 96) = 0LL;
        *(_QWORD *)(v3 + 104) = 0LL;
        if ( *(_BYTE *)(((unsigned __int64)&content->material_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&content->material_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&content->material_id);
        }
        *(_DWORD *)(v3 + 96) = content->material_id;
        if ( *(_BYTE *)(((unsigned __int64)&content->material_num >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)content + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&content->material_num >> 3)
                                                                 + 0x7FFF8000) )
        {
          __asan_report_load4(&content->material_num);
        }
        *(_DWORD *)(v3 + 100) = content->material_num;
        std::vector<ItemParam>::push_back(
          (std::vector<ItemParam> *const)(v3 + 128),
          (const std::vector<ItemParam>::value_type *)(v3 + 96));
        __gnu_cxx::__normal_iterator<data::PackageContentConfig const*,std::vector<data::PackageContentConfig>>::operator++(&__for_begin);
      }
      ActionReason::ActionReason(
        (ActionReason *const)(v3 + 192),
        ACTION_REASON_RECHARGE_CONCERT_PRODUCT,
        ITEM_LIMIT_UNLIMITED);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      v28 = Player::getItemComp(this->player_);
      *(_DWORD *)(v3 + 80) = PlayerItemComp::addItemBatch(
                               v28,
                               (const std::vector<ItemParam> *)(v3 + 128),
                               (const ActionReason *)(v3 + 192),
                               0LL);
      if ( *(_DWORD *)(v3 + 80) )
      {
        common::milog::MiLogStream::create(
          &v56,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/recharge/player_recharge_comp.cpp",
          "takeConcertProduct",
          1754);
        v29 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                &v56,
                (const char (*)[26])"addItemBatch fails, uid: ");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        val = Player::getUid(this->player_);
        v30 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, &val);
        v31 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v30, (const char (*)[15])" ,product_id: ");
        v32 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v31, product_id);
        v33 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v32, (const char (*)[13])" ,config_id ");
        v34 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v33,
                (const unsigned int *)(v3 + 48));
        v35 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v34, (const char (*)[8])" ,ret: ");
        common::milog::MiLogStream::operator<<<int,(int *)0>(v35, (const int *)(v3 + 80));
        common::milog::MiLogStream::~MiLogStream(&v56);
        if ( *(char *)(((unsigned __int64)&result->is_succ >> 3) + 0x7FFF8000) < 0 )
          __asan_report_store1(&result->is_succ, v3 + 80, &result->is_succ);
        result->is_succ = 0;
      }
      __last = std::vector<ItemParam>::end((std::vector<ItemParam> *const)(v3 + 128))._M_current;
      M_current = std::vector<ItemParam>::begin((std::vector<ItemParam> *const)(v3 + 128))._M_current;
      __for_begin._M_current = (const data::PackageContentConfig *)std::vector<ItemParam>::end(&result->item_vec)._M_current;
      __gnu_cxx::__normal_iterator<ItemParam const*,std::vector<ItemParam>>::__normal_iterator<ItemParam*>(
        (__gnu_cxx::__normal_iterator<const ItemParam*,std::vector<ItemParam> > *const)&__for_end,
        (const __gnu_cxx::__normal_iterator<ItemParam*,std::vector<ItemParam> > *)&__for_begin);
      std::vector<ItemParam>::insert<__gnu_cxx::__normal_iterator<ItemParam*,std::vector<ItemParam>>,void>(
        &result->item_vec,
        (std::vector<ItemParam>::const_iterator)__for_end._M_current,
        (__gnu_cxx::__normal_iterator<ItemParam*,std::vector<ItemParam> >)M_current,
        (__gnu_cxx::__normal_iterator<ItemParam*,std::vector<ItemParam> >)__last);
      common::milog::MiLogStream::create(
        &v56,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "./src/player/recharge/player_recharge_comp.cpp",
        "takeConcertProduct",
        1759);
      v37 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v56, (const char (*)[5])"uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      v38 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v37, &val);
      v39 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
              v38,
              (const char (*)[23])" take ConcertProduct: ");
      v40 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v39, product_id);
      v41 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v40, (const char (*)[13])" config_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v41, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v56);
      std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v3 + 128));
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v56,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/recharge/player_recharge_comp.cpp",
      "takeConcertProduct",
      1710);
    v7 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
           &v56,
           (const char (*)[45])"findProductConcertPackageDetailConfig fails:");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, product_id);
    common::milog::MiLogStream::~MiLogStream(&v56);
    if ( *(char *)(((unsigned __int64)&result->is_succ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&result->is_succ, product_id, &result->is_succ);
    result->is_succ = 0;
  }
  if ( v57 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1763: range 0000000013E2EA2E-0000000013E2F4DF
int32_t __cdecl PlayerRechargeComp::sendConcertProductByMuip(
        PlayerRechargeComp *const this,
        const proto::SendConcertProductReq *req,
        proto::SendConcertProductRsp *rsp_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  int32_t v8; // r14d
  common::milog::MiLogStream *v9; // r14
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // r14
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  std::vector<data::PackageContentConfig>::size_type v24; // rax
  PlayerMailComp *MailComp; // rax
  common::milog::MiLogStream *v26; // r14
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-1B4h] BYREF
  uint32_t mail_config_id; // [rsp+30h] [rbp-1B0h]
  int32_t ret; // [rsp+34h] [rbp-1ACh]
  std::vector<data::PackageContentConfig>::const_iterator __for_begin; // [rsp+38h] [rbp-1A8h] BYREF
  std::vector<data::PackageContentConfig>::const_iterator __for_end; // [rsp+40h] [rbp-1A0h] BYREF
  const std::string *ticket; // [rsp+48h] [rbp-198h]
  const data::ProductConcertPackageDetailConfig *concert_config_ptr; // [rsp+50h] [rbp-190h]
  ConcertProductData *concert_product_data; // [rsp+58h] [rbp-188h]
  const std::vector<data::PackageContentConfig> *__for_range; // [rsp+60h] [rbp-180h]
  const data::PackageContentConfig *material; // [rsp+68h] [rbp-178h]
  common::milog::MiLogStream v41; // [rsp+70h] [rbp-170h] BYREF
  char v42[336]; // [rsp+90h] [rbp-150h] BYREF

  v3 = (unsigned __int64)v42;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(288LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 32 4 14 config_id:1765 48 4 17 obtain_count:1790 64 16 15 item_param:1806 96 24 19 item_param_"
                        "vec:1802 160 24 17 argument_vec:1809 224 24 11 reason:1810";
  *(_QWORD *)(v3 + 16) = PlayerRechargeComp::sendConcertProductByMuip;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -219021312;
  v5[536862723] = -234881024;
  v5[536862724] = -218959118;
  v5[536862725] = -234881024;
  v5[536862726] = -218959118;
  v5[536862727] = -218103808;
  v5[536862728] = -202116109;
  ticket = proto::SendConcertProductReq::ticket[abi:cxx11](req);
  *(_DWORD *)(v3 + 32) = proto::SendConcertProductReq::config_id(req);
  proto::SendConcertProductRsp::set_ticket(rsp_0, ticket);
  proto::SendConcertProductRsp::set_config_id(rsp_0, *(_DWORD *)(v3 + 32));
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v3 + 64));
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
  concert_config_ptr = data::ShopmallExcelConfigMgrBase::findProductConcertPackageDetailConfig(
                         &v6->design_config.txt_config_mgr.shopmall_config_mgr,
                         *(_DWORD *)(v3 + 32));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 64));
  if ( concert_config_ptr )
  {
    if ( (unsigned __int8)std::string::empty(ticket) )
    {
      common::milog::MiLogStream::create(
        &v41,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/recharge/player_recharge_comp.cpp",
        "sendConcertProductByMuip",
        1778);
      v9 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v41, (const char (*)[5])"uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
      v11 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v10, (const char (*)[12])" config_id:");
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 32));
      common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v12, (const char (*)[17])" ticket is empty");
      common::milog::MiLogStream::~MiLogStream(&v41);
      v8 = 2016;
    }
    else
    {
      concert_product_data = std::unordered_map<unsigned int,ConcertProductData>::operator[](
                               &this->concert_product_map_,
                               (const std::unordered_map<unsigned int,ConcertProductData>::key_type *)(v3 + 32));
      if ( common::tools::MiscUtils::isContains<std::string>(&concert_product_data->ticket_vec, ticket) )
      {
        common::milog::MiLogStream::create(
          &v41,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/recharge/player_recharge_comp.cpp",
          "sendConcertProductByMuip",
          1785);
        v13 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v41, (const char (*)[5])"uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        val = Player::getUid(this->player_);
        v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
        v15 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v14, (const char (*)[12])" config_id:");
        v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v15,
                (const unsigned int *)(v3 + 32));
        v17 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v16, (const char (*)[10])" ticket: ");
        v18 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v17, ticket);
        common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v18, (const char (*)[12])" duplicated");
        common::milog::MiLogStream::~MiLogStream(&v41);
        v8 = 2015;
      }
      else
      {
        *(_DWORD *)(v3 + 48) = PlayerRechargeComp::getConcertProductObtainCount(this, *(_DWORD *)(v3 + 32));
        if ( *(_DWORD *)(v3 + 48) )
        {
          common::milog::MiLogStream::create(
            &v41,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/recharge/player_recharge_comp.cpp",
            "sendConcertProductByMuip",
            1793);
          v19 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v41, (const char (*)[5])"uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          val = Player::getUid(this->player_);
          v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &val);
          v21 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v20, (const char (*)[12])" config_id:");
          v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v21,
                  (const unsigned int *)(v3 + 32));
          v23 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  v22,
                  (const char (*)[16])" obtain_count: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream(&v41);
          v8 = 2014;
        }
        else
        {
          std::vector<std::string>::push_back(&concert_product_data->ticket_vec, ticket);
          if ( *(_BYTE *)(((unsigned __int64)&concert_config_ptr->mail_config_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&concert_config_ptr->mail_config_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&concert_config_ptr->mail_config_id);
          }
          mail_config_id = concert_config_ptr->mail_config_id;
          std::vector<ItemParam>::vector((std::vector<ItemParam> *const)(v3 + 96));
          v24 = std::vector<data::PackageContentConfig>::size(&concert_config_ptr->content_vec);
          std::vector<ItemParam>::reserve((std::vector<ItemParam> *const)(v3 + 96), v24);
          __for_range = &concert_config_ptr->content_vec;
          __for_begin._M_current = std::vector<data::PackageContentConfig>::begin(&concert_config_ptr->content_vec)._M_current;
          __for_end._M_current = std::vector<data::PackageContentConfig>::end(&concert_config_ptr->content_vec)._M_current;
          while ( __gnu_cxx::operator!=<data::PackageContentConfig const*,std::vector<data::PackageContentConfig>>(
                    &__for_begin,
                    &__for_end) )
          {
            material = __gnu_cxx::__normal_iterator<data::PackageContentConfig const*,std::vector<data::PackageContentConfig>>::operator*(&__for_begin);
            *(_QWORD *)(v3 + 64) = 0LL;
            *(_QWORD *)(v3 + 72) = 0LL;
            if ( *(_BYTE *)(((unsigned __int64)&material->material_id >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&material->material_id >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&material->material_id);
            }
            *(_DWORD *)(v3 + 64) = material->material_id;
            if ( *(_BYTE *)(((unsigned __int64)&material->material_num >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)material + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&material->material_num >> 3)
                                                                      + 0x7FFF8000) )
            {
              __asan_report_load4(&material->material_num);
            }
            *(_DWORD *)(v3 + 68) = material->material_num;
            std::vector<ItemParam>::push_back(
              (std::vector<ItemParam> *const)(v3 + 96),
              (const std::vector<ItemParam>::value_type *)(v3 + 64));
            __gnu_cxx::__normal_iterator<data::PackageContentConfig const*,std::vector<data::PackageContentConfig>>::operator++(&__for_begin);
          }
          std::vector<std::string>::vector((std::vector<std::string> *const)(v3 + 160));
          ActionReason::ActionReason(
            (ActionReason *const)(v3 + 224),
            ACTION_REASON_SEND_CONCERT_PRODUCT_BY_MUIP,
            ITEM_LIMIT_UNLIMITED);
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          MailComp = Player::getMailComp(this->player_);
          ret = PlayerMailComp::addMailById(
                  MailComp,
                  mail_config_id,
                  0x10u,
                  (const std::vector<ItemParam> *)(v3 + 96),
                  (const std::vector<std::string> *)(v3 + 160),
                  (const ActionReason *)(v3 + 224));
          if ( ret )
          {
            common::milog::MiLogStream::create(
              &v41,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/player/recharge/player_recharge_comp.cpp",
              "sendConcertProductByMuip",
              1814);
            v26 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                    &v41,
                    (const char (*)[25])"addMailById failed, uid:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            val = Player::getUid(this->player_);
            v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, &val);
            v28 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                    v27,
                    (const char (*)[12])" config_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, (const unsigned int *)(v3 + 32));
            common::milog::MiLogStream::~MiLogStream(&v41);
            v8 = ret;
          }
          else
          {
            v8 = 0;
          }
          std::vector<std::string>::~vector((std::vector<std::string> *const)(v3 + 160));
          std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v3 + 96));
        }
      }
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v41,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/recharge/player_recharge_comp.cpp",
      "sendConcertProductByMuip",
      1772);
    v7 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
           &v41,
           (const char (*)[57])"findProductConcertPackageDetailConfig fails, config_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v41);
    v8 = 5;
  }
  result = v8;
  if ( v42 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8020) = 0;
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
  return result;
};

// Line 1822: range 0000000013E2F4E0-0000000013E2F719
int32_t __cdecl PlayerRechargeComp::queryConcertProductInfoByMuip(
        PlayerRechargeComp *const this,
        const proto::QueryConcertProductInfoReq *req,
        proto::QueryConcertProductInfoRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  int32_t result; // eax
  google::protobuf::uint32 ConcertProductObtainCount; // edx
  const data::ProductConcertPackageDetailConfig *concert_config_ptr; // [rsp+28h] [rbp-98h]
  std::shared_ptr<Config> v12; // [rsp+30h] [rbp-90h] BYREF
  common::milog::MiLogStream v13; // [rsp+40h] [rbp-80h] BYREF
  char v14[96]; // [rsp+60h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 14 config_id:1823";
  *(_QWORD *)(v3 + 16) = PlayerRechargeComp::queryConcertProductInfoByMuip;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = proto::QueryConcertProductInfoReq::config_id(req);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v12);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v12);
  concert_config_ptr = data::ShopmallExcelConfigMgrBase::findProductConcertPackageDetailConfig(
                         &v6->design_config.txt_config_mgr.shopmall_config_mgr,
                         *(_DWORD *)(v3 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v12);
  if ( concert_config_ptr )
  {
    proto::QueryConcertProductInfoRsp::set_config_id(rsp_0, *(_DWORD *)(v3 + 32));
    ConcertProductObtainCount = PlayerRechargeComp::getConcertProductObtainCount(this, *(_DWORD *)(v3 + 32));
    proto::QueryConcertProductInfoRsp::set_obtain_count(rsp_0, ConcertProductObtainCount);
    proto::QueryConcertProductInfoRsp::set_obtain_limit(rsp_0, 1u);
    result = 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/recharge/player_recharge_comp.cpp",
      "queryConcertProductInfoByMuip",
      1827);
    v7 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
           &v13,
           (const char (*)[57])"findProductConcertPackageDetailConfig fails, config_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v13);
    result = 5;
  }
  if ( v14 == (char *)v3 )
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

// Line 1840: range 0000000013E2F71A-0000000013E30237
void __cdecl PlayerRechargeComp::tryGrantCardProductDailyReward(PlayerRechargeComp *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  ShopmallExcelConfigMgr *p_shopmall_config_mgr; // rcx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r14
  time_t v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  time_t v13; // rdx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // r14
  PlayerItemComp *ItemComp; // rax
  common::milog::MiLogStream *v18; // r14
  PlayerItemComp *v19; // rax
  const std::string *v20; // rax
  uint32_t RemainRewardDays; // eax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  unsigned int val; // [rsp+1Ch] [rbp-1F4h] BYREF
  uint32_t day_offset; // [rsp+20h] [rbp-1F0h]
  uint32_t now; // [rsp+24h] [rbp-1ECh]
  uint32_t now_day; // [rsp+28h] [rbp-1E8h]
  uint32_t expire_day; // [rsp+2Ch] [rbp-1E4h]
  std::unordered_map<unsigned int,CardProductData>::iterator __for_begin; // [rsp+30h] [rbp-1E0h] BYREF
  std::unordered_map<unsigned int,CardProductData>::iterator __for_end; // [rsp+38h] [rbp-1D8h] BYREF
  std::_Rb_tree_const_iterator<std::string > v32; // [rsp+40h] [rbp-1D0h] BYREF
  std::unordered_map<unsigned int,CardProductData> *__for_range; // [rsp+48h] [rbp-1C8h]
  std::pair<unsigned int const,CardProductData> *__in; // [rsp+50h] [rbp-1C0h]
  std::tuple_element<0,std::pair<unsigned int const,CardProductData> >::type *config_id; // [rsp+58h] [rbp-1B8h]
  std::tuple_element<1,std::pair<unsigned int const,CardProductData> >::type *card_data; // [rsp+60h] [rbp-1B0h]
  const data::ProductCardDetailConfig *card_config_ptr; // [rsp+68h] [rbp-1A8h]
  std::shared_ptr<Config> v38; // [rsp+70h] [rbp-1A0h] BYREF
  common::milog::MiLogStream v39; // [rsp+80h] [rbp-190h] BYREF
  common::milog::MiLogStream v40; // [rsp+A0h] [rbp-170h] BYREF
  common::milog::MiLogStream v41; // [rsp+C0h] [rbp-150h] BYREF
  common::milog::MiLogStream v42; // [rsp+E0h] [rbp-130h] BYREF
  char v43[272]; // [rsp+100h] [rbp-110h] BYREF

  v1 = (unsigned __int64)v43;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(224LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 16 15 item_param:1868 80 24 11 reason:1869 144 40 11 notify:1882";
  *(_QWORD *)(v1 + 16) = PlayerRechargeComp::tryGrantCardProductDailyReward;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862722] = 62194;
  v3[536862723] = -218959360;
  v3[536862724] = 62194;
  v3[536862725] = -218103808;
  v3[536862726] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v1 + 48));
  v4 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 48));
  day_offset = ConstValueExcelConfigMgr::getTimeOffsetSec(&v4->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v1 + 48));
  now = common::tools::TimeUtils::getNow();
  now_day = common::tools::TimeUtils::getTimeDay(now, day_offset);
  __for_range = &this->card_product_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,CardProductData>::begin(&this->card_product_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,CardProductData>::end(&this->card_product_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,CardProductData>,false>(&__for_begin, &__for_end) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,CardProductData>,false,false>::operator*(&__for_begin);
    config_id = std::get<0ul,unsigned int const,CardProductData>(__in);
    card_data = std::get<1ul,unsigned int const,CardProductData>(__in);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v38);
    p_shopmall_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v38)->design_config.txt_config_mgr.shopmall_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)config_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)config_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)config_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(config_id);
    }
    card_config_ptr = data::ShopmallExcelConfigMgrBase::findProductCardDetailConfig(p_shopmall_config_mgr, *config_id);
    std::shared_ptr<Config>::~shared_ptr(&v38);
    if ( card_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&card_config_ptr->card_product_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&card_config_ptr->card_product_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&card_config_ptr->card_product_type);
      }
      if ( card_config_ptr->card_product_type == CARD_PRODUCT_TYPE_HCOIN )
      {
        v9 = day_offset;
        if ( *(_BYTE *)(((unsigned __int64)card_data >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)card_data >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(card_data);
        }
        if ( common::tools::TimeUtils::isSameDay(now, card_data->last_daily_reward_time, v9) )
        {
          common::milog::MiLogStream::create(
            &v40,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/recharge/player_recharge_comp.cpp",
            "tryGrantCardProductDailyReward",
            1859);
          v10 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v40, (const char (*)[6])"card:");
          v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, config_id);
          v12 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                  v11,
                  (const char (*)[33])" already take daily reward, uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          val = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
          common::milog::MiLogStream::~MiLogStream(&v40);
        }
        else
        {
          v13 = day_offset;
          if ( *(_BYTE *)(((unsigned __int64)&card_data->expire_time >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&card_data->expire_time >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&card_data->expire_time);
          }
          expire_day = common::tools::TimeUtils::getTimeDay(card_data->expire_time, v13);
          if ( now_day < expire_day )
          {
            *(_QWORD *)(v1 + 48) = 0LL;
            *(_QWORD *)(v1 + 56) = 0LL;
            *(_DWORD *)(v1 + 48) = 201;
            if ( *(_BYTE *)(((unsigned __int64)&card_config_ptr->hcoin_per_day >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)card_config_ptr + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&card_config_ptr->hcoin_per_day >> 3)
                                                                             + 0x7FFF8000) )
            {
              __asan_report_load4(&card_config_ptr->hcoin_per_day);
            }
            *(_DWORD *)(v1 + 52) = card_config_ptr->hcoin_per_day;
            ActionReason::ActionReason(
              (ActionReason *const)(v1 + 80),
              ACTION_REASON_RECHARGE_CARD_DAILY,
              ITEM_LIMIT_MONTH_CARD);
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            ItemComp = Player::getItemComp(this->player_);
            if ( PlayerItemComp::checkAddItem(ItemComp, (const ItemParam *)(v1 + 48), (const ActionReason *)(v1 + 80)) )
            {
              common::milog::MiLogStream::create(
                &v42,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/player/recharge/player_recharge_comp.cpp",
                "tryGrantCardProductDailyReward",
                1872);
              v18 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                      &v42,
                      (const char (*)[26])"checkAddHcoin fails, uid:");
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8(&this->player_);
              val = Player::getUid(this->player_);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &val);
              common::milog::MiLogStream::~MiLogStream(&v42);
            }
            else
            {
              if ( *(_BYTE *)(((unsigned __int64)card_data >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)card_data >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_store4(card_data, v1 + 48, (_BYTE)card_data);
              }
              card_data->last_daily_reward_time = now;
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8(&this->player_);
              v19 = Player::getItemComp(this->player_);
              PlayerItemComp::addItem(v19, (const ItemParam *)(v1 + 48), (const ActionReason *)(v1 + 80), 0LL);
              proto::CardProductRewardNotify::CardProductRewardNotify((proto::CardProductRewardNotify *const)(v1 + 144));
              if ( !std::set<std::string>::empty(&card_data->product_id_set) )
              {
                v32._M_node = std::set<std::string>::cbegin(&card_data->product_id_set)._M_node;
                v20 = std::_Rb_tree_const_iterator<std::string>::operator*(&v32);
                proto::CardProductRewardNotify::set_product_id((proto::CardProductRewardNotify *const)(v1 + 144), v20);
              }
              proto::CardProductRewardNotify::set_hcoin(
                (proto::CardProductRewardNotify *const)(v1 + 144),
                *(_DWORD *)(v1 + 52));
              RemainRewardDays = CardProductData::getRemainRewardDays(card_data, day_offset);
              proto::CardProductRewardNotify::set_remain_days(
                (proto::CardProductRewardNotify *const)(v1 + 144),
                RemainRewardDays);
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8(&this->player_);
              Player::sendProto(this->player_, (const google::protobuf::Message *)(v1 + 144));
              common::milog::MiLogStream::create(
                &v42,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/player/recharge/player_recharge_comp.cpp",
                "tryGrantCardProductDailyReward",
                1893);
              v22 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                      &v42,
                      (const char (*)[11])"take card:");
              v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, config_id);
              v24 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                      v23,
                      (const char (*)[21])" daily reward hcoin:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v24,
                &card_config_ptr->hcoin_per_day);
              common::milog::MiLogStream::~MiLogStream(&v42);
              proto::CardProductRewardNotify::~CardProductRewardNotify((proto::CardProductRewardNotify *const)(v1 + 144));
            }
          }
          else
          {
            common::milog::MiLogStream::create(
              &v41,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/recharge/player_recharge_comp.cpp",
              "tryGrantCardProductDailyReward",
              1865);
            v14 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v41, (const char (*)[6])"card:");
            v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, config_id);
            v16 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                    v15,
                    (const char (*)[15])" expired, uid:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            val = Player::getUid(this->player_);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &val);
            common::milog::MiLogStream::~MiLogStream(&v41);
          }
        }
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v39,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/recharge/player_recharge_comp.cpp",
        "tryGrantCardProductDailyReward",
        1849);
      v6 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
             &v39,
             (const char (*)[36])"findProductCardDetailConfig fails, ");
      v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, config_id);
      v8 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v7, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
      common::milog::MiLogStream::~MiLogStream(&v39);
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,CardProductData>,false,false>::operator++(&__for_begin);
  }
  if ( v43 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8018) = -168430091;
  }
};

// Line 1898: range 0000000013E30238-0000000013E30A84
void __cdecl PlayerRechargeComp::logRecharge(
        PlayerRechargeComp *const this,
        const proto::Order *order_proto,
        const TakeProductResult *result)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::__shared_ptr_access<proto_log::PlayerLogBodyRecharge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // r14
  uint32_t PlatformType; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyRecharge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // r14
  const std::string *v9; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyRecharge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // r14
  const std::string *v11; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyRecharge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // r14
  const std::string *v13; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyRecharge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // r14
  std::__shared_ptr_access<proto_log::PlayerLogBodyRecharge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // r14
  google::protobuf::uint32 v16; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyRecharge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // r14
  const std::string *v18; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyRecharge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // r14
  const std::string *v20; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyRecharge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // r14
  const std::string *v22; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyRecharge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // r14
  const std::string *v24; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyRecharge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // r14
  const std::string *v26; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyRecharge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyRecharge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyExtRecharge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // r14
  google::protobuf::uint32 v30; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyExtRecharge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v31; // r14
  google::protobuf::uint32 time; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyExtRecharge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v33; // r14
  const std::string *v34; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyExtRecharge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v35; // r14
  google::protobuf::uint32 v36; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyExtRecharge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v37; // r14
  const std::string *v38; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyExtRecharge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v39; // r14
  google::protobuf::uint32 v40; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyExtRecharge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v41; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyExtRecharge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v42; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyExtRecharge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v43; // r14
  const std::string *v44; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyExtRecharge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v45; // r14
  const std::string *v46; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyExtRecharge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v47; // r14
  const std::string *v48; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyExtRecharge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v49; // r14
  const std::string *v50; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyExtRecharge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v51; // r14
  const std::string *v52; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyExtRecharge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v53; // r14
  const std::string *v54; // rax
  Player *player; // r14
  const proto::PlayerLoginReq *login_req; // [rsp+28h] [rbp-D8h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+30h] [rbp-D0h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+40h] [rbp-C0h] BYREF
  std::string value; // [rsp+50h] [rbp-B0h] BYREF
  char v61[144]; // [rsp+70h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v61;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 16 12 log_ptr:1899 64 16 16 log_ext_ptr:1917";
  *(_QWORD *)(v3 + 16) = PlayerRechargeComp::logRecharge;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -202178560;
  common::tools::perf::make_shared<proto_log::PlayerLogBodyRecharge>();
  v6 = std::__shared_ptr_access<proto_log::PlayerLogBodyRecharge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRecharge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  PlatformType = Player::getPlatformType(this->player_);
  proto_log::PlayerLogBodyRecharge::set_platform(v6, PlatformType);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  login_req = Player::getSessionLoginReq(this->player_);
  v8 = std::__shared_ptr_access<proto_log::PlayerLogBodyRecharge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRecharge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
  v9 = proto::PlayerLoginReq::device_uuid[abi:cxx11](login_req);
  proto_log::PlayerLogBodyRecharge::set_device_uuid(v8, v9);
  v10 = std::__shared_ptr_access<proto_log::PlayerLogBodyRecharge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRecharge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
  v11 = proto::PlayerLoginReq::device_info[abi:cxx11](login_req);
  proto_log::PlayerLogBodyRecharge::set_device_info(v10, v11);
  v12 = std::__shared_ptr_access<proto_log::PlayerLogBodyRecharge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRecharge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
  v13 = proto::PlayerLoginReq::system_version[abi:cxx11](login_req);
  proto_log::PlayerLogBodyRecharge::set_system_info(v12, v13);
  v14 = std::__shared_ptr_access<proto_log::PlayerLogBodyRecharge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRecharge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Player::getPlayerClientIpForStatLog[abi:cxx11](&value, this->player_);
  proto_log::PlayerLogBodyRecharge::set_client_ip(v14, &value);
  std::string::~string(&value);
  v15 = std::__shared_ptr_access<proto_log::PlayerLogBodyRecharge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRecharge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
  v16 = proto::Order::id(order_proto);
  proto_log::PlayerLogBodyRecharge::set_order_id(v15, v16);
  v17 = std::__shared_ptr_access<proto_log::PlayerLogBodyRecharge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRecharge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
  v18 = proto::Order::product_id[abi:cxx11](order_proto);
  proto_log::PlayerLogBodyRecharge::set_product_name(v17, v18);
  v19 = std::__shared_ptr_access<proto_log::PlayerLogBodyRecharge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRecharge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
  v20 = proto::Order::price_tier[abi:cxx11](order_proto);
  proto_log::PlayerLogBodyRecharge::set_price_tier(v19, v20);
  v21 = std::__shared_ptr_access<proto_log::PlayerLogBodyRecharge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRecharge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
  v22 = proto::Order::pay_plat[abi:cxx11](order_proto);
  proto_log::PlayerLogBodyRecharge::set_pay_channel(v21, v22);
  v23 = std::__shared_ptr_access<proto_log::PlayerLogBodyRecharge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRecharge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
  v24 = proto::Order::currency[abi:cxx11](order_proto);
  proto_log::PlayerLogBodyRecharge::set_currency_code(v23, v24);
  v25 = std::__shared_ptr_access<proto_log::PlayerLogBodyRecharge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRecharge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
  v26 = proto::Order::total_fee[abi:cxx11](order_proto);
  proto_log::PlayerLogBodyRecharge::set_format_price(v25, v26);
  v27 = std::__shared_ptr_access<proto_log::PlayerLogBodyRecharge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRecharge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
  if ( *(_BYTE *)(((unsigned __int64)result >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)result >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(result);
  }
  proto_log::PlayerLogBodyRecharge::set_pay_coin_add(v27, result->mcoin);
  v28 = std::__shared_ptr_access<proto_log::PlayerLogBodyRecharge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRecharge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&result->vip_point >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)result + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&result->vip_point >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&result->vip_point);
  }
  proto_log::PlayerLogBodyRecharge::set_vip_point_add(v28, result->vip_point);
  common::tools::perf::make_shared<proto_log::PlayerLogBodyExtRecharge>();
  v29 = std::__shared_ptr_access<proto_log::PlayerLogBodyExtRecharge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyExtRecharge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
  v30 = proto::Order::trade_time(order_proto);
  proto_log::PlayerLogBodyExtRecharge::set_trade_time(v29, v30);
  v31 = std::__shared_ptr_access<proto_log::PlayerLogBodyExtRecharge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyExtRecharge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
  time = proto::Order::create_time(order_proto);
  common::tools::TimeUtils::getStrByTime[abi:cxx11](&value, time);
  proto_log::PlayerLogBodyExtRecharge::set_create_time(v31, &value);
  std::string::~string(&value);
  v33 = std::__shared_ptr_access<proto_log::PlayerLogBodyExtRecharge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyExtRecharge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
  v34 = proto::Order::trade_no[abi:cxx11](order_proto);
  proto_log::PlayerLogBodyExtRecharge::set_trade_no(v33, v34);
  v35 = std::__shared_ptr_access<proto_log::PlayerLogBodyExtRecharge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyExtRecharge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
  v36 = proto::Order::channel_id(order_proto);
  proto_log::PlayerLogBodyExtRecharge::set_channel_id(v35, v36);
  v37 = std::__shared_ptr_access<proto_log::PlayerLogBodyExtRecharge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyExtRecharge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
  v38 = proto::Order::channel_order_no[abi:cxx11](order_proto);
  proto_log::PlayerLogBodyExtRecharge::set_channel_order_no(v37, v38);
  v39 = std::__shared_ptr_access<proto_log::PlayerLogBodyExtRecharge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyExtRecharge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
  v40 = proto::Order::product_num(order_proto);
  proto_log::PlayerLogBodyExtRecharge::set_product_num(v39, v40);
  v41 = std::__shared_ptr_access<proto_log::PlayerLogBodyExtRecharge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyExtRecharge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
  if ( *(char *)(((unsigned __int64)&result->is_succ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&result->is_succ);
  proto_log::PlayerLogBodyExtRecharge::set_is_succ(v41, result->is_succ);
  v42 = std::__shared_ptr_access<proto_log::PlayerLogBodyExtRecharge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyExtRecharge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&result->is_replace >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)result + 9) & 7) >= *(_BYTE *)(((unsigned __int64)&result->is_replace >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&result->is_replace);
  }
  proto_log::PlayerLogBodyExtRecharge::set_is_replace(v42, result->is_replace);
  v43 = std::__shared_ptr_access<proto_log::PlayerLogBodyExtRecharge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyExtRecharge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
  v44 = proto::Order::pay_type[abi:cxx11](order_proto);
  proto_log::PlayerLogBodyExtRecharge::set_pay_type(v43, v44);
  v45 = std::__shared_ptr_access<proto_log::PlayerLogBodyExtRecharge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyExtRecharge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
  v46 = proto::Order::pay_vendor[abi:cxx11](order_proto);
  proto_log::PlayerLogBodyExtRecharge::set_pay_vendor(v45, v46);
  v47 = std::__shared_ptr_access<proto_log::PlayerLogBodyExtRecharge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyExtRecharge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
  v48 = proto::Order::client_type[abi:cxx11](order_proto);
  proto_log::PlayerLogBodyExtRecharge::set_client_type(v47, v48);
  v49 = std::__shared_ptr_access<proto_log::PlayerLogBodyExtRecharge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyExtRecharge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
  v50 = proto::Order::device[abi:cxx11](order_proto);
  proto_log::PlayerLogBodyExtRecharge::set_device(v49, v50);
  v51 = std::__shared_ptr_access<proto_log::PlayerLogBodyExtRecharge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyExtRecharge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
  v52 = proto::Order::client_ip[abi:cxx11](order_proto);
  proto_log::PlayerLogBodyExtRecharge::set_client_ip(v51, v52);
  v53 = std::__shared_ptr_access<proto_log::PlayerLogBodyExtRecharge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyExtRecharge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
  v54 = proto::Order::extend[abi:cxx11](order_proto);
  proto_log::PlayerLogBodyExtRecharge::set_extend(v53, v54);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  player = this->player_;
  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyExtRecharge,void>(
    &p_body_ext_ptr,
    (const std::shared_ptr<proto_log::PlayerLogBodyExtRecharge> *)(v3 + 64));
  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyRecharge,void>(
    &p_body_ptr,
    (const std::shared_ptr<proto_log::PlayerLogBodyRecharge> *)(v3 + 32));
  Player::printStatLog(player, &p_body_ptr, &p_body_ext_ptr, 0xEu);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
  std::shared_ptr<proto_log::PlayerLogBodyExtRecharge>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyExtRecharge> *const)(v3 + 64));
  std::shared_ptr<proto_log::PlayerLogBodyRecharge>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyRecharge> *const)(v3 + 32));
  if ( v61 == (char *)v3 )
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

// Line 1937: range 0000000013E30A86-0000000013E30DCD
__int64 __fastcall PlayerRechargeComp::onMarkOrderFinished(PlayerRechargeComp *const this, uint32_t order_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // r14
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r14
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  __int64 result; // rax
  unsigned int val; // [rsp+14h] [rbp-BCh] BYREF
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> __y; // [rsp+18h] [rbp-B8h] BYREF
  common::milog::MiLogStream v14; // [rsp+20h] [rbp-B0h] BYREF
  char v15[144]; // [rsp+40h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 13 order_id:1936 64 8 9 iter:1938";
  *(_QWORD *)(v2 + 16) = PlayerRechargeComp::onMarkOrderFinished;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = order_id;
  *(std::unordered_map<unsigned int,unsigned int>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                            &this->wait_mark_db_map_,
                                                                            (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  __y._M_cur = std::unordered_map<unsigned int,unsigned int>::end(&this->wait_mark_db_map_)._M_cur;
  if ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v2 + 64),
         &__y) )
  {
    std::unordered_map<unsigned int,unsigned int>::erase(
      &this->wait_mark_db_map_,
      *(std::unordered_map<unsigned int,unsigned int>::iterator *)(v2 + 64));
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/player/recharge/player_recharge_comp.cpp",
      "onMarkOrderFinished",
      1942);
    v5 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v14, (const char (*)[6])"uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    v7 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
           v6,
           (const char (*)[23])" onMarkOrderFinished: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v14);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/recharge/player_recharge_comp.cpp",
      "onMarkOrderFinished",
      1946);
    v8 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v14, (const char (*)[6])"uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
    v10 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
            v9,
            (const char (*)[28])" not in wait_mark_db_map_: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v14);
  }
  result = 0LL;
  if ( v15 == (char *)v2 )
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

// Line 1952: range 0000000013E30DCE-0000000013E30F31
__int64 __fastcall PlayerRechargeComp::onOrderDisplay(PlayerRechargeComp *const this, uint32_t order_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,proto::OrderFinishNotify> >::_Self __y; // [rsp+18h] [rbp-88h] BYREF
  char v7[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 13 order_id:1951 64 8 9 iter:1953";
  *(_QWORD *)(v2 + 16) = PlayerRechargeComp::onOrderDisplay;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = order_id;
  *(std::map<unsigned int,proto::OrderFinishNotify>::iterator *)(v2 + 64) = std::map<unsigned int,proto::OrderFinishNotify>::find(
                                                                              &this->cached_order_notify_map_,
                                                                              (const std::map<unsigned int,proto::OrderFinishNotify>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,proto::OrderFinishNotify>::end(&this->cached_order_notify_map_)._M_node;
  if ( std::operator!=(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,proto::OrderFinishNotify> >::_Self *)(v2 + 64),
         &__y) )
  {
    std::map<unsigned int,proto::OrderFinishNotify>::erase[abi:cxx11](
      &this->cached_order_notify_map_,
      *(std::map<unsigned int,proto::OrderFinishNotify>::iterator *)(v2 + 64));
  }
  result = 0LL;
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

// Line 1963: range 0000000013E30F32-0000000013E31073
void __cdecl PlayerRechargeComp::finishOrderByOffline(PlayerRechargeComp *const this, uint32_t order_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 24 8 req:1964";
  *(_QWORD *)(v2 + 16) = PlayerRechargeComp::finishOrderByOffline;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218103808;
  v4[536862722] = -202116109;
  proto::GetSpecificUnfinishedReq::GetSpecificUnfinishedReq((proto::GetSpecificUnfinishedReq *const)(v2 + 32));
  proto::GetSpecificUnfinishedReq::set_order_id((proto::GetSpecificUnfinishedReq *const)(v2 + 32), order_id);
  PlayerRechargeComp::notifyOaservice<proto::GetSpecificUnfinishedReq>(
    this,
    (const proto::GetSpecificUnfinishedReq *)(v2 + 32));
  proto::GetSpecificUnfinishedReq::~GetSpecificUnfinishedReq((proto::GetSpecificUnfinishedReq *const)(v2 + 32));
  if ( v5 == (char *)v2 )
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

// Line 1971: range 0000000013E31074-0000000013E310D8
uint32_t __cdecl PlayerRechargeComp::getHcoinCardProductRemainRewardDays(PlayerRechargeComp *const this)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v1; // rax
  uint32_t config_id; // [rsp+1Ch] [rbp-14h]
  std::shared_ptr<Config> v4; // [rsp+20h] [rbp-10h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v4);
  v1 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v4);
  config_id = ShopmallExcelConfigMgr::getHcoinCardProductConfigId(&v1->design_config.txt_config_mgr.shopmall_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v4);
  return PlayerRechargeComp::getCardProductRemainRewardDays(this, config_id);
};

// Line 1978: range 0000000013E310DA-0000000013E3129A
uint32_t __fastcall PlayerRechargeComp::getCardProductRemainRewardDays(
        PlayerRechargeComp *const this,
        uint32_t config_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,CardProductData>,false,false>::pointer v6; // rax
  uint32_t result; // eax
  uint32_t day_offset; // [rsp+14h] [rbp-9Ch]
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,CardProductData>,false> __y; // [rsp+18h] [rbp-98h] BYREF
  std::shared_ptr<Config> v10; // [rsp+20h] [rbp-90h] BYREF
  char v11[128]; // [rsp+30h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 14 config_id:1977 64 8 9 iter:1980";
  *(_QWORD *)(v2 + 16) = PlayerRechargeComp::getCardProductRemainRewardDays;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = config_id;
  *(std::unordered_map<unsigned int,CardProductData>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,CardProductData>::find(
                                                                               &this->card_product_map_,
                                                                               (const std::unordered_map<unsigned int,CardProductData>::key_type *)(v2 + 48));
  __y._M_cur = std::unordered_map<unsigned int,CardProductData>::end(&this->card_product_map_)._M_cur;
  if ( std::__detail::operator!=<std::pair<unsigned int const,CardProductData>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,CardProductData>,false> *)(v2 + 64),
         &__y) )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v10);
    v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v10);
    day_offset = ConstValueExcelConfigMgr::getTimeOffsetSec(&v5->design_config.txt_config_mgr.const_value_config_mgr);
    std::shared_ptr<Config>::~shared_ptr(&v10);
    v6 = std::__detail::_Node_iterator<std::pair<unsigned int const,CardProductData>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,CardProductData>,false,false> *const)(v2 + 64));
    result = CardProductData::getRemainRewardDays(&v6->second, day_offset);
  }
  else
  {
    result = 0;
  }
  if ( v11 == (char *)v2 )
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

// Line 1991: range 0000000013E3129C-0000000013E316F8
int32_t __cdecl PlayerRechargeComp::checkCanGetHcoinCardProduct(
        const PlayerRechargeComp *const this,
        const data::ProductCardDetailConfig *card_config_ptr,
        uint32_t platform_type)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rax
  int32_t result; // eax
  PlayerItemComp *ItemComp; // rdi
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r13
  const data::ProductCardDetailConfig *card_config_ptra; // [rsp+10h] [rbp-F0h]
  unsigned int val; // [rsp+28h] [rbp-D8h] BYREF
  int32_t ret; // [rsp+2Ch] [rbp-D4h]
  std::shared_ptr<Config> v19; // [rsp+30h] [rbp-D0h] BYREF
  common::milog::MiLogStream v20; // [rsp+40h] [rbp-C0h] BYREF
  char v21[160]; // [rsp+60h] [rbp-A0h] BYREF

  card_config_ptra = card_config_ptr;
  v3 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 14 config_id:1992 64 24 11 reason:2007";
  *(_QWORD *)(v3 + 16) = PlayerRechargeComp::checkCanGetHcoinCardProduct;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218103808;
  v5[536862723] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v19);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v19);
  *(_DWORD *)(v3 + 48) = ShopmallExcelConfigMgr::getHcoinCardProductConfigId(&v6->design_config.txt_config_mgr.shopmall_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v19);
  if ( !card_config_ptr )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v19);
    v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v19);
    card_config_ptra = data::ShopmallExcelConfigMgrBase::findProductCardDetailConfig(
                         &v7->design_config.txt_config_mgr.shopmall_config_mgr,
                         *(_DWORD *)(v3 + 48));
    std::shared_ptr<Config>::~shared_ptr(&v19);
  }
  if ( card_config_ptra )
  {
    if ( !PlayerRechargeComp::isCardProductRemainDaysValid(this, card_config_ptra) )
    {
      result = -1;
    }
    else
    {
      ActionReason::ActionReason((ActionReason *const)(v3 + 64), ACTION_REASON_RECHARGE_CARD, ITEM_LIMIT_MONTH_CARD);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      ItemComp = Player::getItemComp(this->player_);
      if ( *(_BYTE *)(((unsigned __int64)&card_config_ptra->mcoin_base >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&card_config_ptra->mcoin_base >> 3) + 0x7FFF8000) <= 3 )
      {
        ItemComp = (PlayerItemComp *)&card_config_ptra->mcoin_base;
        __asan_report_load4(&card_config_ptra->mcoin_base);
      }
      ret = PlayerItemComp::checkAddMcoin(
              ItemComp,
              card_config_ptra->mcoin_base,
              (const ActionReason *)(v3 + 64),
              platform_type);
      if ( ret )
      {
        common::milog::MiLogStream::create(
          &v20,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/recharge/player_recharge_comp.cpp",
          "checkCanGetHcoinCardProduct",
          2011);
        v11 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                &v20,
                (const char (*)[28])"checkAddMcoin fails, mcoin:");
        v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &card_config_ptra->mcoin_base);
        v13 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v12, (const char (*)[7])" uid: ");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
        common::milog::MiLogStream::~MiLogStream(&v20);
        result = ret;
      }
      else
      {
        result = 0;
      }
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/recharge/player_recharge_comp.cpp",
      "checkCanGetHcoinCardProduct",
      1999);
    v8 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
           &v20,
           (const char (*)[46])"findProductCardDetailConfig fails, config_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v20);
    result = -1;
  }
  if ( v21 == (char *)v3 )
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

// Line 2019: range 0000000013E316FA-0000000013E31CCA
int32_t __cdecl PlayerRechargeComp::checkCanGetResinCardProduct(
        const PlayerRechargeComp *const this,
        const data::ProductCardDetailConfig *card_config_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rcx
  int32_t v6; // r14d
  std::pair<unsigned int const,unsigned int> *v7; // rax
  std::pair<unsigned int const,unsigned int> *v8; // rdx
  PlayerItemComp *ItemComp; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+18h] [rbp-148h] BYREF
  int32_t ret; // [rsp+1Ch] [rbp-144h]
  std::map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+20h] [rbp-140h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+28h] [rbp-138h] BYREF
  const std::map<unsigned int,unsigned int> *__for_range; // [rsp+30h] [rbp-130h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *k; // [rsp+38h] [rbp-128h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *v; // [rsp+40h] [rbp-120h]
  std::pair<unsigned int const,unsigned int> __in; // [rsp+48h] [rbp-118h] BYREF
  common::milog::MiLogStream v21; // [rsp+50h] [rbp-110h] BYREF
  char v22[240]; // [rsp+70h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 16 15 item_param:2034 64 24 11 reason:2029 128 24 12 add_vec:2031";
  *(_QWORD *)(v2 + 16) = PlayerRechargeComp::checkCanGetResinCardProduct;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -234881024;
  v4[536862723] = -218959118;
  v4[536862724] = -218103808;
  v4[536862725] = -202116109;
  if ( card_config_ptr )
  {
    if ( !PlayerRechargeComp::isCardProductRemainDaysValid(this, card_config_ptr) )
    {
      v6 = -1;
    }
    else
    {
      ActionReason::ActionReason((ActionReason *const)(v2 + 64), ACTION_REASON_RECHARGE_CARD, ITEM_LIMIT_RESIN_CARD);
      *(_BYTE *)(v2 + 78) = 0;
      std::vector<ItemParam>::vector((std::vector<ItemParam> *const)(v2 + 128));
      __for_range = &card_config_ptr->base_item_map;
      __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(&card_config_ptr->base_item_map)._M_node;
      __for_end._M_node = std::map<unsigned int,unsigned int>::end(&card_config_ptr->base_item_map)._M_node;
      while ( std::operator!=(&__for_begin, &__for_end) )
      {
        v7 = (std::pair<unsigned int const,unsigned int> *)std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
        v8 = v7;
        if ( ((unsigned __int8)v7 & 7) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&v7->second + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)v7 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v7->second + 3) >> 3) + 0x7FFF8000) )
        {
          __asan_report_load_n(v7, 8LL);
        }
        __in = *v8;
        k = std::get<0ul,unsigned int const,unsigned int>(&__in);
        v = std::get<1ul,unsigned int const,unsigned int>(&__in);
        *(_DWORD *)(v2 + 32) = 0;
        *(_DWORD *)(v2 + 36) = 0;
        *(_DWORD *)(v2 + 40) = 0;
        *(_DWORD *)(v2 + 44) = 0;
        if ( *(_BYTE *)(((unsigned __int64)k >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)k & 7) + 3) >= *(_BYTE *)(((unsigned __int64)k >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(k);
        }
        *(_DWORD *)(v2 + 32) = *k;
        if ( *(_BYTE *)(((unsigned __int64)v >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v);
        }
        *(_DWORD *)(v2 + 36) = *v;
        std::vector<ItemParam>::emplace_back<ItemParam&>(
          (std::vector<ItemParam> *const)(v2 + 128),
          (ItemParam *)(v2 + 32),
          (ItemParam *)(v2 + 32));
        std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      ItemComp = Player::getItemComp(this->player_);
      ret = PlayerItemComp::checkAddItemBatch(
              ItemComp,
              (const std::vector<ItemParam> *)(v2 + 128),
              (const ActionReason *)(v2 + 64));
      if ( ret )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/recharge/player_recharge_comp.cpp",
          "checkCanGetResinCardProduct",
          2042);
        v10 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                &v21,
                (const char (*)[50])"checkAddItemBatch failed, card_product_config_id:");
        v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &card_config_ptr->config_id);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &val);
        common::milog::MiLogStream::~MiLogStream(&v21);
        v6 = ret;
      }
      else
      {
        v6 = 0;
      }
      std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v2 + 128));
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/recharge/player_recharge_comp.cpp",
      "checkCanGetResinCardProduct",
      2022);
    v5 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
           &v21,
           (const char (*)[37])"card_config_ptr is nullptr, player_:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    operator<<(v5, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v6 = -1;
  }
  result = v6;
  if ( v22 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 2049: range 0000000013E31CCC-0000000013E31D60
int32_t __cdecl PlayerRechargeComp::checkCanGetResinCardProduct(
        const PlayerRechargeComp *const this,
        uint32_t config_id)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  const data::ProductCardDetailConfig *config_ptr; // [rsp+18h] [rbp-28h]
  std::shared_ptr<Config> v5[2]; // [rsp+20h] [rbp-20h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v5);
  v2 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v5);
  config_ptr = data::ShopmallExcelConfigMgrBase::findProductCardDetailConfig(
                 &v2->design_config.txt_config_mgr.shopmall_config_mgr,
                 config_id);
  std::shared_ptr<Config>::~shared_ptr(v5);
  return PlayerRechargeComp::checkCanGetResinCardProduct(this, config_ptr);
};

// Line 2055: range 0000000013E31D62-0000000013E3209B
bool __cdecl PlayerRechargeComp::isCardProductRemainDaysValid(
        const PlayerRechargeComp *const this,
        const data::ProductCardDetailConfig *card_config)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,CardProductData>,false,false>::pointer v6; // rax
  common::milog::MiLogStream *v7; // r14
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  bool result; // al
  unsigned int val; // [rsp+10h] [rbp-D0h] BYREF
  uint32_t day_offset; // [rsp+14h] [rbp-CCh]
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,CardProductData>,false> __y; // [rsp+18h] [rbp-C8h] BYREF
  std::shared_ptr<Config> v16; // [rsp+20h] [rbp-C0h] BYREF
  common::milog::MiLogStream v17; // [rsp+30h] [rbp-B0h] BYREF
  char v18[144]; // [rsp+50h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 16 remain_days:2060 64 8 9 iter:2056";
  *(_QWORD *)(v2 + 16) = PlayerRechargeComp::isCardProductRemainDaysValid;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(std::unordered_map<unsigned int,CardProductData>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,CardProductData>::find(
                                                                                     &this->card_product_map_,
                                                                                     &card_config->config_id);
  __y._M_cur = std::unordered_map<unsigned int,CardProductData>::end(&this->card_product_map_)._M_cur;
  if ( !std::__detail::operator!=<std::pair<unsigned int const,CardProductData>,false>(
          (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,CardProductData>,false> *)(v2 + 64),
          &__y) )
    goto LABEL_11;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v16);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v16);
  day_offset = ConstValueExcelConfigMgr::getTimeOffsetSec(&v5->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v16);
  v6 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,CardProductData>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,CardProductData>,false,false> *const)(v2 + 64));
  *(_DWORD *)(v2 + 48) = CardProductData::getRemainRewardDays(&v6->second, day_offset);
  if ( *(_BYTE *)(((unsigned __int64)&card_config->total_limit_days >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)card_config + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&card_config->total_limit_days >> 3)
                                                               + 0x7FFF8000) )
  {
    __asan_report_load4(&card_config->total_limit_days);
  }
  if ( card_config->total_limit_days < *(_DWORD *)(v2 + 48) )
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/recharge/player_recharge_comp.cpp",
      "isCardProductRemainDaysValid",
      2063);
    v7 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v17, (const char (*)[5])"uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    v9 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v8, (const char (*)[12])" config_id:");
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &card_config->config_id);
    v11 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v10, (const char (*)[14])" remain days:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v17);
    result = 0;
  }
  else
  {
LABEL_11:
    result = 1;
  }
  if ( v18 == (char *)v2 )
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

// Line 2072: range 0000000013E3209C-0000000013E32609
__int64 __fastcall PlayerRechargeComp::useCardProductMaterial(PlayerRechargeComp *const this, uint32_t config_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  unsigned int v11; // r14d
  unsigned __int64 v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // r14
  __int64 result; // rax
  bool is_internal; // [rsp+16h] [rbp-FAh]
  bool is_epic; // [rsp+17h] [rbp-F9h]
  unsigned int val; // [rsp+18h] [rbp-F8h] BYREF
  uint32_t platform_type; // [rsp+1Ch] [rbp-F4h]
  const std::string *product_id; // [rsp+20h] [rbp-F0h]
  const data::ProductCardDetailConfig *card_config_ptr; // [rsp+28h] [rbp-E8h]
  std::shared_ptr<Config> v25; // [rsp+30h] [rbp-E0h] BYREF
  common::milog::MiLogStream v26; // [rsp+40h] [rbp-D0h] BYREF
  char v27[176]; // [rsp+60h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 4 14 config_id:2071 48 40 11 result:2085";
  *(_QWORD *)(v2 + 16) = PlayerRechargeComp::useCardProductMaterial;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  *(_DWORD *)(v2 + 32) = config_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v25);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v25);
  is_internal = Config::isInternalServer(v5);
  std::shared_ptr<Config>::~shared_ptr(&v25);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  platform_type = Player::getPlatformType(this->player_);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  is_epic = Player::isEpic(this->player_);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v25);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v25);
  product_id = ShopmallExcelConfigMgr::findProductIdByConfigId[abi:cxx11](
                 &v6->design_config.txt_config_mgr.shopmall_config_mgr,
                 is_internal,
                 platform_type,
                 is_epic,
                 *(_DWORD *)(v2 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v25);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v25);
  v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v25);
  card_config_ptr = ShopmallExcelConfigMgr::findProductCardDetailConfig(
                      &v7->design_config.txt_config_mgr.shopmall_config_mgr,
                      product_id);
  std::shared_ptr<Config>::~shared_ptr(&v25);
  if ( card_config_ptr )
  {
    TakeProductResult::TakeProductResult((TakeProductResult *const)(v2 + 48));
    *(_BYTE *)(v2 + 56) = 1;
    PlayerRechargeComp::takeCardProduct(this, product_id, (TakeProductResult *)(v2 + 48));
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    v12 = (unsigned __int64)(this->_vptr_PlayerCompBase + 10);
    if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
      v12 = __asan_report_load8(this->_vptr_PlayerCompBase + 10);
    (*(void (__fastcall **)(PlayerRechargeComp *const))v12)(this);
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/recharge/player_recharge_comp.cpp",
      "useCardProductMaterial",
      2091);
    v13 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(&v26, (const char (*)[12])"product_id:");
    v14 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v13, product_id);
    v15 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v14, (const char (*)[14])" succ! mcoin:");
    v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v2 + 48));
    v17 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v16, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &val);
    common::milog::MiLogStream::~MiLogStream(&v26);
    v11 = 0;
    TakeProductResult::~TakeProductResult((TakeProductResult *const)(v2 + 48));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/recharge/player_recharge_comp.cpp",
      "useCardProductMaterial",
      2080);
    v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
           &v26,
           (const char (*)[29])"findProductCardConfig fails:");
    v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, product_id);
    v10 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v9, (const char (*)[12])" config_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v26);
    v11 = -1;
  }
  result = v11;
  if ( v27 == (char *)v2 )
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

// Line 2097: range 0000000013E3260A-0000000013E327C1
void __cdecl PlayerRechargeComp::clearByGm(PlayerRechargeComp *const this)
{
  common::milog::MiLogStream *v1; // rbx
  unsigned int val; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v3; // [rsp+20h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v3,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "./src/player/recharge/player_recharge_comp.cpp",
    "clearByGm",
    2098);
  v1 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
         &v3,
         (const char (*)[29])"Attention: clearByGm!!! uid:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  val = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v1, &val);
  common::milog::MiLogStream::~MiLogStream(&v3);
  std::unordered_map<unsigned int,McoinProductData>::clear(&this->mcoin_product_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->mcoin_product_refresh_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->mcoin_product_refresh_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->mcoin_product_refresh_time_, &val, (_BYTE)this - 56);
  }
  this->mcoin_product_refresh_time_ = 0;
  std::unordered_map<unsigned int,CardProductData>::clear(&this->card_product_map_);
  std::unordered_set<std::string>::clear(&this->ps4_package_product_set_);
  std::unordered_map<unsigned int,GoogleGiftCardProductData>::clear(&this->google_gift_card_product_map_);
  std::unordered_map<unsigned int,std::map<unsigned int,proto::OrderFinishNotify>>::clear(&this->saved_order_notify_map_);
  std::map<unsigned int,proto::OrderFinishNotify>::clear(&this->cached_order_notify_map_);
  std::unordered_map<unsigned int,ConcertProductData>::clear(&this->concert_product_map_);
  std::unordered_map<unsigned int,AppleGiftCardProductData>::clear(&this->apple_gift_card_product_map_);
  std::unordered_map<unsigned int,PsnCompensationProductData>::clear(&this->psn_compensation_product_map_);
  PlayerRechargeComp::refreshProductLimit(this);
};

// Line 2115: range 0000000013E327C2-0000000013E32CC2
int32_t __cdecl PlayerRechargeComp::takeProductByGm(PlayerRechargeComp *const this, std::string *product_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  ShopmallExcelConfigMgr *p_shopmall_config_mgr; // rdx
  ShopmallExcelConfigMgr *v6; // rdx
  common::milog::MiLogStream *v7; // r13
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rdx
  int32_t v10; // r14d
  common::milog::MiLogStream *v11; // r14
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rdx
  int32_t result; // eax
  unsigned int val; // [rsp+10h] [rbp-F0h] BYREF
  data::ProductType product_type; // [rsp+14h] [rbp-ECh]
  const data::ProductDetailConfig *product_config_ptr; // [rsp+18h] [rbp-E8h]
  std::shared_ptr<Config> v18; // [rsp+20h] [rbp-E0h] BYREF
  common::milog::MiLogStream v19; // [rsp+30h] [rbp-D0h] BYREF
  char v20[176]; // [rsp+50h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 48 40 11 result:2129";
  *(_QWORD *)(v2 + 16) = PlayerRechargeComp::takeProductByGm;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v18);
  p_shopmall_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v18)->design_config.txt_config_mgr.shopmall_config_mgr;
  product_config_ptr = ShopmallExcelConfigMgr::findProductDetailConfig(p_shopmall_config_mgr, product_id);
  std::shared_ptr<Config>::~shared_ptr(&v18);
  if ( product_config_ptr
    || (common::tools::StringUtils::lower(product_id),
        ServiceBox::findService<GameserverService>(),
        GameserverService::getConfig((GameserverService *const)&v18),
        v6 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v18)->design_config.txt_config_mgr.shopmall_config_mgr,
        product_config_ptr = ShopmallExcelConfigMgr::findProductDetailConfig(v6, product_id),
        std::shared_ptr<Config>::~shared_ptr(&v18),
        product_config_ptr) )
  {
    PlayerRechargeComp::refreshProductLimit(this);
    if ( *(_BYTE *)(((unsigned __int64)&product_config_ptr->product_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&product_config_ptr->product_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&product_config_ptr->product_type);
    }
    product_type = product_config_ptr->product_type;
    TakeProductResult::TakeProductResult((TakeProductResult *const)(v2 + 48));
    *(_BYTE *)(v2 + 56) = 1;
    if ( product_type == PRODUCT_TYPE_CONCERT )
    {
      PlayerRechargeComp::takeConcertProduct(this, product_id, (TakeProductResult *)(v2 + 48));
    }
    else
    {
      if ( product_type != PRODUCT_TYPE_PSN_COMPENSATION )
      {
        common::milog::MiLogStream::create(
          &v19,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/recharge/player_recharge_comp.cpp",
          "takeProductByGm",
          2142);
        v11 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v19, (const char (*)[5])"uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        val = Player::getUid(this->player_);
        v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &val);
        v13 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                v12,
                (const char (*)[30])" takeProductByGm not support ");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v13, product_id);
        common::milog::MiLogStream::~MiLogStream(&v19);
        v10 = -1;
        goto LABEL_19;
      }
      PlayerRechargeComp::takePsnCompensationProduct(this, product_id, (TakeProductResult *)(v2 + 48));
    }
    v10 = 0;
LABEL_19:
    TakeProductResult::~TakeProductResult((TakeProductResult *const)(v2 + 48));
    goto LABEL_20;
  }
  common::milog::MiLogStream::create(
    &v19,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/player/recharge/player_recharge_comp.cpp",
    "takeProductByGm",
    2123);
  v7 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v19, (const char (*)[5])"uid:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  val = Player::getUid(this->player_);
  v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
  v9 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
         v8,
         (const char (*)[33])" findProductDetailConfig fails, ");
  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, product_id);
  common::milog::MiLogStream::~MiLogStream(&v19);
  v10 = -1;
LABEL_20:
  result = v10;
  if ( v20 == (char *)v2 )
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

// Line 2150: range 0000000013E32CC4-0000000013E32E1A
uint32_t __cdecl PlayerRechargeComp::getMcoinProductBuyTimes(
        const PlayerRechargeComp *const this,
        const data::ProductMcoinDetailConfig *mcoin_config)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,McoinProductData>,false,false>::pointer v5; // rdx
  uint32_t *p_buy_times; // rax
  uint32_t result; // eax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,McoinProductData>,false> __y; // [rsp+18h] [rbp-68h] BYREF
  char v9[96]; // [rsp+20h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 9 iter:2151";
  *(_QWORD *)(v2 + 16) = PlayerRechargeComp::getMcoinProductBuyTimes;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  *(std::unordered_map<unsigned int,McoinProductData>::const_iterator *)(v2 + 32) = std::unordered_map<unsigned int,McoinProductData>::find(
                                                                                      &this->mcoin_product_map_,
                                                                                      &mcoin_config->config_id);
  __y._M_cur = std::unordered_map<unsigned int,McoinProductData>::end(&this->mcoin_product_map_)._M_cur;
  if ( std::__detail::operator!=<std::pair<unsigned int const,McoinProductData>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,McoinProductData>,false> *)(v2 + 32),
         &__y) )
  {
    v5 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,McoinProductData>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,McoinProductData>,false,false> *const)(v2 + 32));
    p_buy_times = &v5->second.buy_times;
    if ( *(_BYTE *)(((unsigned __int64)p_buy_times >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_buy_times & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_buy_times >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_buy_times);
    }
    result = v5->second.buy_times;
  }
  else
  {
    result = 0;
  }
  if ( v9 == (char *)v2 )
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

// Line 2160: range 0000000013E32E1C-0000000013E3302E
__int64 __fastcall PlayerRechargeComp::addVipPoint(
        PlayerRechargeComp *const this,
        uint32_t point,
        const ActionReason *reason)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  unsigned int v6; // edx
  __int64 v7; // rsi
  uint32_t v8; // edx
  char v9; // al
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  __int64 result; // rax
  common::milog::MiLogStream v14; // [rsp+20h] [rbp-80h] BYREF
  char v15[96]; // [rsp+40h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 10 point:2159";
  *(_QWORD *)(v3 + 16) = PlayerRechargeComp::addVipPoint;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = point;
  v6 = *(_DWORD *)(v3 + 32);
  if ( *(_BYTE *)(((unsigned __int64)&this->vip_point_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->vip_point_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->vip_point_);
  }
  v7 = v6;
  v8 = SAFE_ADD<unsigned int,unsigned int>(this->vip_point_, v6);
  v9 = *(_BYTE *)(((unsigned __int64)&this->vip_point_ >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v7) = v9 != 0;
    __asan_report_store4(&this->vip_point_, v7, v8);
  }
  this->vip_point_ = v8;
  common::milog::MiLogStream::create(
    &v14,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "./src/player/recharge/player_recharge_comp.cpp",
    "addVipPoint",
    2162);
  v10 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v14, (const char (*)[17])"after add point:");
  v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 32));
  v12 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v11, (const char (*)[13])" vip_point_:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &this->vip_point_);
  common::milog::MiLogStream::~MiLogStream(&v14);
  result = 0LL;
  if ( v15 == (char *)v3 )
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

// Line 2169: range 0000000013E331D4-0000000013E345F3
void __cdecl PlayerRechargeComp::reportTrackingIO(
        PlayerRechargeComp *const this,
        const proto::Order *order_proto,
        const data::PriceTierConfig *price_tier_config_ptr)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  char v6; // al
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  bool v8; // r14
  const proto::PlayerLoginReq *SessionLoginReq; // rax
  const std::string *v10; // rax
  const std::string *v11; // rax
  Json::Value_0 *v12; // rax
  unsigned int Uid; // eax
  Json::Value_0 *v14; // rax
  const std::string *v15; // rax
  Json::Value_0 *v16; // rax
  const std::string *v17; // rax
  Json::Value_0 *v18; // rax
  const std::string *v19; // rax
  Json::Value_0 *v20; // rax
  Json::Value_0 *v21; // rax
  ShopmallExcelConfigMgr *p_shopmall_config_mgr; // rdx
  float CNYPriceFromTier; // xmm0_4
  Json::Value_0 *v24; // rax
  const std::string *v25; // rax
  Json::Value_0 *v26; // rax
  const std::string *v27; // rax
  Json::Value_0 *v28; // rax
  const std::string *v29; // rax
  Json::Value_0 *v30; // rax
  Json::Value_0 *v31; // rax
  const std::string *v32; // rax
  Json::Value_0 *v33; // rax
  const std::string *v34; // rax
  Json::Value_0 *v35; // rax
  const std::string *v36; // rax
  Json::Value_0 *v37; // rax
  const std::string *v38; // rax
  Json::Value_0 *v39; // rax
  Json::Value_0 *v40; // rax
  Json::Value_0 *v41; // rax
  const std::string *v42; // rax
  Json::Value_0 *v43; // rax
  const std::string *v44; // rax
  Json::Value_0 *v45; // rax
  Json::Value *v46; // rax
  std::map<std::string,std::string>::mapped_type *v47; // rax
  __int64 v48; // rsi
  GameserverService *v49; // r14
  common::milog::MiLogStream *v50; // rax
  TrackingIOConfig *tracking_io_config; // [rsp+20h] [rbp-300h]
  const proto::TrackingIOInfo *tracking_io_info; // [rsp+28h] [rbp-2F8h]
  std::shared_ptr<Config> v54; // [rsp+30h] [rbp-2F0h] BYREF
  common::milog::MiLogStream v55; // [rsp+40h] [rbp-2E0h] BYREF
  Json::Value_0 other; // [rsp+60h] [rbp-2C0h] BYREF
  char v57[656]; // [rsp+90h] [rbp-290h] BYREF

  v3 = (unsigned __int64)v57;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(608LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 48 1 13 callback:2251 64 40 9 body:2205 144 40 12 context:2205 224 48 16 json_writer:2248 304 "
                        "240 13 http_req:2239";
  *(_QWORD *)(v3 + 16) = PlayerRechargeComp::reportTrackingIO;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862723] = -218959360;
  v5[536862724] = 62194;
  v5[536862725] = -234881024;
  v5[536862726] = -218959118;
  v5[536862728] = -219021312;
  v5[536862729] = 62194;
  v5[536862737] = -202116109;
  v5[536862738] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  if ( Player::getPlatformType(this->player_) == 1 )
    goto LABEL_11;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  if ( Player::getPlatformType(this->player_) == 2 )
LABEL_11:
    v6 = 0;
  else
    v6 = 1;
  if ( !v6 )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v54);
    v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v54);
    v8 = !Config::isInternalServer(v7);
    std::shared_ptr<Config>::~shared_ptr(&v54);
    if ( !v8 )
    {
      if ( !price_tier_config_ptr )
      {
        common::milog::MiLogStream::create(
          &v55,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/recharge/player_recharge_comp.cpp",
          "reportTrackingIO",
          2183);
        common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
          &v55,
          (const char (*)[33])"price_tier_config_ptr is nullptr");
        common::milog::MiLogStream::~MiLogStream(&v55);
        goto LABEL_45;
      }
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v54);
      tracking_io_config = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v54)->tracking_io_config;
      std::shared_ptr<Config>::~shared_ptr(&v54);
      if ( *(_BYTE *)(((unsigned __int64)&tracking_io_config->is_enable >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)tracking_io_config + 97) & 7) >= *(_BYTE *)(((unsigned __int64)&tracking_io_config->is_enable >> 3)
                                                                        + 0x7FFF8000) )
      {
        __asan_report_load1(&tracking_io_config->is_enable);
      }
      if ( !tracking_io_config->is_enable )
      {
        common::milog::MiLogStream::create(
          &v55,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/recharge/player_recharge_comp.cpp",
          "reportTrackingIO",
          2190);
        common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v55, (const char (*)[19])"close tracking io!");
        common::milog::MiLogStream::~MiLogStream(&v55);
        goto LABEL_45;
      }
      if ( (unsigned __int8)std::string::empty(tracking_io_config) )
      {
        common::milog::MiLogStream::create(
          &v55,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/recharge/player_recharge_comp.cpp",
          "reportTrackingIO",
          2195);
        common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
          &v55,
          (const char (*)[34])"tracking_io_config host is empty!");
        common::milog::MiLogStream::~MiLogStream(&v55);
        goto LABEL_45;
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      SessionLoginReq = Player::getSessionLoginReq(this->player_);
      tracking_io_info = proto::PlayerLoginReq::tracking_io_info(SessionLoginReq);
      v10 = proto::TrackingIOInfo::appid[abi:cxx11](tracking_io_info);
      if ( (unsigned __int8)std::string::empty(v10) )
      {
        common::milog::MiLogStream::create(
          &v55,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/recharge/player_recharge_comp.cpp",
          "reportTrackingIO",
          2201);
        common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
          &v55,
          (const char (*)[44])"appid is empty, cannot report to TrackingIO");
        common::milog::MiLogStream::~MiLogStream(&v55);
        goto LABEL_45;
      }
      Json::Value::Value(v3 + 64, 0LL);
      Json::Value::Value(v3 + 144, 0LL);
      v11 = proto::TrackingIOInfo::appid[abi:cxx11](tracking_io_info);
      Json::Value::Value(&other, v11);
      v12 = Json::Value::operator[]((Json::Value_0 *const)(v3 + 64), "appid");
      Json::Value::operator=(v12, &other);
      Json::Value::~Value(&other);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      Uid = Player::getUid(this->player_);
      std::to_string((std::string *)&v55, Uid);
      Json::Value::Value(&other, &v55);
      v14 = Json::Value::operator[]((Json::Value_0 *const)(v3 + 64), off_25174080);
      Json::Value::operator=(v14, &other);
      Json::Value::~Value(&other);
      std::string::~string(&v55);
      v15 = proto::TrackingIOInfo::deviceid[abi:cxx11](tracking_io_info);
      Json::Value::Value(&other, v15);
      v16 = Json::Value::operator[]((Json::Value_0 *const)(v3 + 144), "_deviceid");
      Json::Value::operator=(v16, &other);
      Json::Value::~Value(&other);
      v17 = proto::Order::trade_no[abi:cxx11](order_proto);
      Json::Value::Value(&other, v17);
      v18 = Json::Value::operator[]((Json::Value_0 *const)(v3 + 144), "_transactionid");
      Json::Value::operator=(v18, &other);
      Json::Value::~Value(&other);
      v19 = proto::Order::pay_plat[abi:cxx11](order_proto);
      Json::Value::Value(&other, v19);
      v20 = Json::Value::operator[]((Json::Value_0 *const)(v3 + 144), "_paymenttype");
      Json::Value::operator=(v20, &other);
      Json::Value::~Value(&other);
      Json::Value::Value((Json::Value *)&other, off_25174180);
      v21 = Json::Value::operator[]((Json::Value_0 *const)(v3 + 144), "_currencytype");
      Json::Value::operator=(v21, &other);
      Json::Value::~Value(&other);
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v54);
      p_shopmall_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v54)->design_config.txt_config_mgr.shopmall_config_mgr;
      CNYPriceFromTier = ShopmallExcelConfigMgr::getCNYPriceFromTier(p_shopmall_config_mgr, price_tier_config_ptr);
      Json::Value::Value((Json::Value *)&other, CNYPriceFromTier);
      v24 = Json::Value::operator[]((Json::Value_0 *const)(v3 + 144), "_currencyamount");
      Json::Value::operator=(v24, &other);
      Json::Value::~Value(&other);
      std::shared_ptr<Config>::~shared_ptr(&v54);
      v25 = proto::TrackingIOInfo::current_caid[abi:cxx11](tracking_io_info);
      Json::Value::Value(&other, v25);
      v26 = Json::Value::operator[]((Json::Value_0 *const)(v3 + 144), "_current_caid");
      Json::Value::operator=(v26, &other);
      Json::Value::~Value(&other);
      v27 = proto::TrackingIOInfo::cached_caid[abi:cxx11](tracking_io_info);
      Json::Value::Value(&other, v27);
      v28 = Json::Value::operator[]((Json::Value_0 *const)(v3 + 144), "_cached_caid");
      Json::Value::operator=(v28, &other);
      Json::Value::~Value(&other);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      if ( Player::getPlatformType(this->player_) == 1 )
      {
        v29 = proto::TrackingIOInfo::deviceid[abi:cxx11](tracking_io_info);
        Json::Value::Value(&other, v29);
        v30 = Json::Value::operator[]((Json::Value_0 *const)(v3 + 144), "_idfa");
        Json::Value::operator=(v30, &other);
        Json::Value::~Value(&other);
        Json::Value::Value((Json::Value *)&other, off_25174300);
        v31 = Json::Value::operator[]((Json::Value_0 *const)(v3 + 144), "_ryos");
        Json::Value::operator=(v31, &other);
        Json::Value::~Value(&other);
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        if ( Player::getPlatformType(this->player_) != 2 )
        {
          common::milog::MiLogStream::create(
            &v55,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/recharge/player_recharge_comp.cpp",
            "reportTrackingIO",
            2231);
          common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
            &v55,
            (const char (*)[22])"it should not happen!");
          common::milog::MiLogStream::~MiLogStream(&v55);
LABEL_44:
          Json::Value::~Value((Json::Value_0 *const)(v3 + 144));
          Json::Value::~Value((Json::Value_0 *const)(v3 + 64));
          goto LABEL_45;
        }
        v32 = proto::TrackingIOInfo::deviceid[abi:cxx11](tracking_io_info);
        Json::Value::Value(&other, v32);
        v33 = Json::Value::operator[]((Json::Value_0 *const)(v3 + 144), "_imei");
        Json::Value::operator=(v33, &other);
        Json::Value::~Value(&other);
        v34 = proto::TrackingIOInfo::deviceid[abi:cxx11](tracking_io_info);
        Json::Value::Value(&other, v34);
        v35 = Json::Value::operator[]((Json::Value_0 *const)(v3 + 144), "_androidid");
        Json::Value::operator=(v35, &other);
        Json::Value::~Value(&other);
        v36 = proto::TrackingIOInfo::deviceid[abi:cxx11](tracking_io_info);
        Json::Value::Value(&other, v36);
        v37 = Json::Value::operator[]((Json::Value_0 *const)(v3 + 144), "_oaid");
        Json::Value::operator=(v37, &other);
        Json::Value::~Value(&other);
        v38 = proto::TrackingIOInfo::mac[abi:cxx11](tracking_io_info);
        Json::Value::Value(&other, v38);
        v39 = Json::Value::operator[]((Json::Value_0 *const)(v3 + 144), "_mac");
        Json::Value::operator=(v39, &other);
        Json::Value::~Value(&other);
        Json::Value::Value((Json::Value *)&other, "Android");
        v40 = Json::Value::operator[]((Json::Value_0 *const)(v3 + 144), "_ryos");
        Json::Value::operator=(v40, &other);
        Json::Value::~Value(&other);
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      Player::getPlayerClientIp[abi:cxx11]((std::string *)&v55, this->player_);
      Json::Value::Value(&other, &v55);
      v41 = Json::Value::operator[]((Json::Value_0 *const)(v3 + 144), off_25174500);
      Json::Value::operator=(v41, &other);
      Json::Value::~Value(&other);
      std::string::~string(&v55);
      v42 = proto::TrackingIOInfo::client_tz[abi:cxx11](tracking_io_info);
      Json::Value::Value(&other, v42);
      v43 = Json::Value::operator[]((Json::Value_0 *const)(v3 + 144), off_25174540);
      Json::Value::operator=(v43, &other);
      Json::Value::~Value(&other);
      v44 = proto::TrackingIOInfo::rydevicetype[abi:cxx11](tracking_io_info);
      Json::Value::Value(&other, v44);
      v45 = Json::Value::operator[]((Json::Value_0 *const)(v3 + 144), "_rydevicetype");
      Json::Value::operator=(v45, &other);
      Json::Value::~Value(&other);
      v46 = (Json::Value *)Json::Value::operator[]((Json::Value_0 *const)(v3 + 64), "context");
      Json::Value::operator=(v46);
      common::minet::http_client::HttpRequest::HttpRequest((common::minet::http_client::HttpRequest *const)(v3 + 304));
      std::string::operator=(v3 + 304, tracking_io_config);
      std::string::operator=(v3 + 336, &tracking_io_config->port);
      std::string::operator=(v3 + 368, &tracking_io_config->uri);
      *(_DWORD *)(v3 + 528) = 1;
      if ( *(char *)(((unsigned __int64)&tracking_io_config->is_ssl >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&tracking_io_config->is_ssl);
      *(_BYTE *)(v3 + 536) = tracking_io_config->is_ssl;
      std::allocator<char>::allocator(v3 + 48);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)&v55,
        "Content-Type",
        (const std::allocator<char> *)(v3 + 48));
      v47 = std::map<std::string,std::string>::operator[](
              (std::map<std::string,std::string> *const)(v3 + 400),
              (std::map<std::string,std::string>::key_type *)&v55);
      std::string::operator=(v47, "application/json");
      std::string::~string(&v55);
      std::allocator<char>::~allocator(v3 + 48);
      Json::FastWriter::FastWriter((Json::FastWriter *const)(v3 + 224));
      Json::FastWriter::write[abi:cxx11](
        (Json::String *)&v55,
        (Json::FastWriter *const)(v3 + 224),
        (const Json::Value *)(v3 + 64));
      v48 = std::string::c_str(&v55);
      std::string::operator=(v3 + 496, v48);
      std::string::~string(&v55);
      v49 = ServiceBox::findService<GameserverService>();
      std::function<void ()(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)>::function<PlayerRechargeComp::reportTrackingIO(proto::Order const&,data::PriceTierConfig const*)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &,common::minet::http_client::HttpResponse)#1},void,void>(
        (std::function<void(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest&&,common::minet::http_client::HttpResponse&&)> *const)&v55,
        (PlayerRechargeComp::reportTrackingIO::<lambda(common::minet::http_client::HttpRetcode, common::minet::http_client::HttpRequest&&, common::minet::http_client::HttpResponse&&)>)v48);
      LOBYTE(v49) = GameserverService::asyncHttpRequest(
                      v49,
                      (const common::minet::http_client::HttpRequest *)(v3 + 304),
                      10LL,
                      0,
                      (common::minet::http_client::ResponseCallBackFunc *)&v55) != 0;
      std::function<void ()(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)>::~function((std::function<void(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest&&,common::minet::http_client::HttpResponse&&)> *const)&v55);
      if ( (_BYTE)v49 )
      {
        common::milog::MiLogStream::create(
          &v55,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/recharge/player_recharge_comp.cpp",
          "reportTrackingIO",
          2257);
        v50 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                &v55,
                (const char (*)[39])"asyncHttpRequest fails, http req body:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v50, (const std::string *)(v3 + 496));
        common::milog::MiLogStream::~MiLogStream(&v55);
      }
      Json::FastWriter::~FastWriter((Json::FastWriter *const)(v3 + 224));
      common::minet::http_client::HttpRequest::~HttpRequest((common::minet::http_client::HttpRequest *const)(v3 + 304));
      goto LABEL_44;
    }
  }
LABEL_45:
  if ( v57 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF800C) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8014) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8044) = 0LL;
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
    *(_QWORD *)((v3 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8048) = -168430091;
  }
};

// Line 2251: range 0000000013E33030-0000000013E331D2
void __fastcall PlayerRechargeComp::reportTrackingIO(proto::Order const&,data::PriceTierConfig const*)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)#1}::operator()(
        const PlayerRechargeComp::reportTrackingIO::<lambda(common::minet::http_client::HttpRetcode, common::minet::http_client::HttpRequest&&, common::minet::http_client::HttpResponse&&)> *const __closure,
        common::minet::http_client::HttpRetcode retcode,
        common::minet::http_client::HttpRequest *http_req,
        common::minet::http_client::HttpResponse *http_rsp)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream v14; // [rsp+20h] [rbp-80h] BYREF
  char v15[96]; // [rsp+40h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 4 12 retcode:2251";
  *(_QWORD *)(v4 + 16) = PlayerRechargeComp::reportTrackingIO(proto::Order const&,data::PriceTierConfig const*)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)#1}::operator();
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116348;
  *(_DWORD *)(v4 + 32) = retcode;
  common::milog::MiLogStream::create(
    &v14,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/recharge/player_recharge_comp.cpp",
    "operator()",
    2253);
  v7 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(&v14, (const char (*)[9])"retcode:");
  v8 = common::milog::MiLogStream::operator<<<common::minet::http_client::HttpRetcode,(common::minet::http_client::HttpRetcode*)0>(
         v7,
         (const common::minet::http_client::HttpRetcode *)(v4 + 32));
  v9 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v8, (const char (*)[15])" request.body:");
  v10 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, &http_req->body);
  v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v10, (const char (*)[16])" response.body:");
  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v11, &http_rsp->body);
  common::milog::MiLogStream::~MiLogStream(&v14);
  if ( v15 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 2262: range 0000000013E345F4-0000000013E352C4
__int64 __fastcall PlayerRechargeComp::checkCanTakeResinCardDailyReward(
        PlayerRechargeComp *const this,
        uint32_t now,
        uint32_t config_id)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rbx
  unsigned int v11; // r14d
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rbx
  time_t v17; // rdx
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rbx
  time_t v21; // rdx
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  std::pair<unsigned int const,unsigned int> *v24; // rax
  std::pair<unsigned int const,unsigned int> *v25; // rdx
  PlayerItemComp *ItemComp; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // r14
  __int64 result; // rax
  unsigned int val; // [rsp+1Ch] [rbp-1A4h] BYREF
  uint32_t day_offset; // [rsp+20h] [rbp-1A0h]
  uint32_t now_day; // [rsp+24h] [rbp-19Ch]
  uint32_t expire_day; // [rsp+28h] [rbp-198h]
  int32_t ret; // [rsp+2Ch] [rbp-194h]
  std::map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+30h] [rbp-190h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+38h] [rbp-188h] BYREF
  const data::ProductCardDetailConfig *card_config_ptr; // [rsp+40h] [rbp-180h]
  CardProductData *card_data; // [rsp+48h] [rbp-178h]
  const std::map<unsigned int,unsigned int> *__for_range; // [rsp+50h] [rbp-170h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *k; // [rsp+58h] [rbp-168h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *v; // [rsp+60h] [rbp-160h]
  std::pair<unsigned int const,unsigned int> __in; // [rsp+68h] [rbp-158h] BYREF
  common::milog::MiLogStream v45; // [rsp+70h] [rbp-150h] BYREF
  char v46[304]; // [rsp+90h] [rbp-130h] BYREF

  v3 = (unsigned __int64)v46;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 48 4 14 config_id:2261 64 8 9 iter:2277 96 16 15 item_param:2300 128 24 11 reason:2295 192 24 12 add_vec:2297";
  *(_QWORD *)(v3 + 16) = PlayerRechargeComp::checkCanTakeResinCardDailyReward;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -219021312;
  v5[536862724] = -234881024;
  v5[536862725] = -218959118;
  v5[536862726] = -218103808;
  v5[536862727] = -202116109;
  *(_DWORD *)(v3 + 48) = config_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v3 + 96));
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
  day_offset = ConstValueExcelConfigMgr::getTimeOffsetSec(&v6->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 96));
  now_day = common::tools::TimeUtils::getTimeDay(now, day_offset);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v3 + 96));
  v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
  card_config_ptr = data::ShopmallExcelConfigMgrBase::findProductCardDetailConfig(
                      &v7->design_config.txt_config_mgr.shopmall_config_mgr,
                      *(_DWORD *)(v3 + 48));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 96));
  if ( !card_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v45,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/recharge/player_recharge_comp.cpp",
      "checkCanTakeResinCardDailyReward",
      2268);
    v8 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           &v45,
           (const char (*)[36])"findProductCardDetailConfig fails, ");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 48));
    v10 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v9, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
LABEL_7:
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
    common::milog::MiLogStream::~MiLogStream(&v45);
    v11 = -1;
    goto LABEL_50;
  }
  if ( *(_BYTE *)(((unsigned __int64)&card_config_ptr->card_product_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&card_config_ptr->card_product_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&card_config_ptr->card_product_type);
  }
  if ( card_config_ptr->card_product_type != CARD_PRODUCT_TYPE_RESIN )
  {
    common::milog::MiLogStream::create(
      &v45,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/recharge/player_recharge_comp.cpp",
      "checkCanTakeResinCardDailyReward",
      2274);
    v12 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
            &v45,
            (const char (*)[25])"card is not resin card, ");
    v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 48));
    v10 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v13, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    goto LABEL_7;
  }
  *(std::unordered_map<unsigned int,CardProductData>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,CardProductData>::find(
                                                                               &this->card_product_map_,
                                                                               (const std::unordered_map<unsigned int,CardProductData>::key_type *)(v3 + 48));
  __in = (std::pair<unsigned int const,unsigned int>)std::unordered_map<unsigned int,CardProductData>::end(&this->card_product_map_)._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned int const,CardProductData>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,CardProductData>,false> *)(v3 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,CardProductData>,false> *)&__in) )
  {
    common::milog::MiLogStream::create(
      &v45,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/recharge/player_recharge_comp.cpp",
      "checkCanTakeResinCardDailyReward",
      2280);
    v14 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
            &v45,
            (const char (*)[30])"card is not exist, config_id:");
    v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 48));
    v16 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v15, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
LABEL_17:
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &val);
    common::milog::MiLogStream::~MiLogStream(&v45);
    v11 = 665;
    goto LABEL_50;
  }
  card_data = &std::__detail::_Node_iterator<std::pair<unsigned int const,CardProductData>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,CardProductData>,false,false> *const)(v3 + 64))->second;
  v17 = day_offset;
  if ( *(_BYTE *)(((unsigned __int64)card_data >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)card_data >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(card_data);
  }
  if ( common::tools::TimeUtils::isSameDay(now, card_data->last_daily_reward_time, v17) )
  {
    common::milog::MiLogStream::create(
      &v45,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/recharge/player_recharge_comp.cpp",
      "checkCanTakeResinCardDailyReward",
      2286);
    v18 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v45, (const char (*)[6])"card:");
    v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v3 + 48));
    v20 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
            v19,
            (const char (*)[33])" already take daily reward, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &val);
    common::milog::MiLogStream::~MiLogStream(&v45);
    v11 = 664;
  }
  else
  {
    v21 = day_offset;
    if ( *(_BYTE *)(((unsigned __int64)&card_data->expire_time >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&card_data->expire_time >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&card_data->expire_time);
    }
    expire_day = common::tools::TimeUtils::getTimeDay(card_data->expire_time, v21);
    if ( now_day >= expire_day )
      goto LABEL_30;
    if ( *(_BYTE *)(((unsigned __int64)&card_data->take_effect_time >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)card_data + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&card_data->take_effect_time >> 3)
                                                              + 0x7FFF8000) )
    {
      __asan_report_load4(&card_data->take_effect_time);
    }
    if ( now < card_data->take_effect_time )
    {
LABEL_30:
      common::milog::MiLogStream::create(
        &v45,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/recharge/player_recharge_comp.cpp",
        "checkCanTakeResinCardDailyReward",
        2292);
      v22 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v45, (const char (*)[6])"card:");
      v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, (const unsigned int *)(v3 + 48));
      v16 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v23, (const char (*)[15])" expired, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      goto LABEL_17;
    }
    ActionReason::ActionReason((ActionReason *const)(v3 + 128), ACTION_REASON_RECHARGE_CARD, ITEM_LIMIT_RESIN_CARD);
    *(_BYTE *)(v3 + 142) = 0;
    std::vector<ItemParam>::vector((std::vector<ItemParam> *const)(v3 + 192));
    __for_range = &card_config_ptr->per_day_item_map;
    __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(&card_config_ptr->per_day_item_map)._M_node;
    __for_end._M_node = std::map<unsigned int,unsigned int>::end(&card_config_ptr->per_day_item_map)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v24 = (std::pair<unsigned int const,unsigned int> *)std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
      v25 = v24;
      if ( ((unsigned __int8)v24 & 7) >= *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&v24->second + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)v24 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v24->second + 3) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load_n(v24, 8LL);
      }
      __in = *v25;
      k = std::get<0ul,unsigned int const,unsigned int>(&__in);
      v = std::get<1ul,unsigned int const,unsigned int>(&__in);
      *(_DWORD *)(v3 + 96) = 0;
      *(_DWORD *)(v3 + 100) = 0;
      *(_DWORD *)(v3 + 104) = 0;
      *(_DWORD *)(v3 + 108) = 0;
      if ( *(_BYTE *)(((unsigned __int64)k >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)k & 7) + 3) >= *(_BYTE *)(((unsigned __int64)k >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(k);
      }
      *(_DWORD *)(v3 + 96) = *k;
      if ( *(_BYTE *)(((unsigned __int64)v >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v);
      }
      *(_DWORD *)(v3 + 100) = *v;
      std::vector<ItemParam>::emplace_back<ItemParam&>(
        (std::vector<ItemParam> *const)(v3 + 192),
        (ItemParam *)(v3 + 96),
        (ItemParam *)(v3 + 96));
      std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    ItemComp = Player::getItemComp(this->player_);
    ret = PlayerItemComp::checkAddItemBatch(
            ItemComp,
            (const std::vector<ItemParam> *)(v3 + 192),
            (const ActionReason *)(v3 + 128));
    if ( ret )
    {
      common::milog::MiLogStream::create(
        &v45,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/recharge/player_recharge_comp.cpp",
        "checkCanTakeResinCardDailyReward",
        2308);
      v27 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
              &v45,
              (const char (*)[50])"checkAddItemBatch failed, card_product_config_id:");
      v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, &card_config_ptr->config_id);
      v29 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v28, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, &val);
      common::milog::MiLogStream::~MiLogStream(&v45);
      v11 = ret;
    }
    else
    {
      v11 = 0;
    }
    std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v3 + 192));
  }
LABEL_50:
  result = v11;
  if ( v46 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 2315: range 0000000013E352C6-0000000013E35E1F
__int64 __fastcall PlayerRechargeComp::takeResinCardDailyReward(
        PlayerRechargeComp *const this,
        uint32_t now,
        uint32_t config_id,
        std::vector<ItemParam> *display_vec)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rbx
  unsigned int v11; // r14d
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rbx
  std::pair<unsigned int const,unsigned int> *v17; // rax
  std::pair<unsigned int const,unsigned int> *v18; // rdx
  PlayerItemComp *ItemComp; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  ItemParam *M_current; // r15
  ItemParam *v25; // r14
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  __int64 result; // rax
  common::milog::MiLogStream *v30; // [rsp+10h] [rbp-1E0h]
  std::allocator<unsigned int> __a; // [rsp+3Bh] [rbp-1B5h] BYREF
  unsigned int val; // [rsp+3Ch] [rbp-1B4h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+40h] [rbp-1B0h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+48h] [rbp-1A8h] BYREF
  const data::ProductCardDetailConfig *card_config_ptr; // [rsp+50h] [rbp-1A0h]
  CardProductData *card_data; // [rsp+58h] [rbp-198h]
  const std::map<unsigned int,unsigned int> *__for_range; // [rsp+60h] [rbp-190h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *k; // [rsp+68h] [rbp-188h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *v; // [rsp+70h] [rbp-180h]
  std::pair<unsigned int const,unsigned int> __in; // [rsp+78h] [rbp-178h] BYREF
  std::vector<unsigned int> config_id_vec; // [rsp+80h] [rbp-170h] BYREF
  common::milog::MiLogStream v44; // [rsp+A0h] [rbp-150h] BYREF
  char v45[304]; // [rsp+C0h] [rbp-130h] BYREF

  v4 = (unsigned __int64)v45;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(256LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "5 48 4 14 config_id:2314 64 8 9 iter:2327 96 16 15 item_param:2338 128 24 11 reason:2334 192 24 12 add_vec:2335";
  *(_QWORD *)(v4 + 16) = PlayerRechargeComp::takeResinCardDailyReward;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -218959360;
  v6[536862723] = -219021312;
  v6[536862724] = -234881024;
  v6[536862725] = -218959118;
  v6[536862726] = -218103808;
  v6[536862727] = -202116109;
  *(_DWORD *)(v4 + 48) = config_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v4 + 96));
  v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
  card_config_ptr = data::ShopmallExcelConfigMgrBase::findProductCardDetailConfig(
                      &v7->design_config.txt_config_mgr.shopmall_config_mgr,
                      *(_DWORD *)(v4 + 48));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 96));
  if ( !card_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v44,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/recharge/player_recharge_comp.cpp",
      "takeResinCardDailyReward",
      2319);
    v8 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           &v44,
           (const char (*)[36])"findProductCardDetailConfig fails, ");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v4 + 48));
    v10 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v9, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
LABEL_7:
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
    common::milog::MiLogStream::~MiLogStream(&v44);
    v11 = -1;
    goto LABEL_34;
  }
  if ( (unsigned int)PlayerRechargeComp::checkCanTakeResinCardDailyReward(this, now, *(_DWORD *)(v4 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v44,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/recharge/player_recharge_comp.cpp",
      "takeResinCardDailyReward",
      2324);
    v12 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
            &v44,
            (const char (*)[52])"checkCanTakeResinCardDailyReward failes, config_id:");
    v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v4 + 48));
    v10 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v13, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    goto LABEL_7;
  }
  *(std::unordered_map<unsigned int,CardProductData>::iterator *)(v4 + 64) = std::unordered_map<unsigned int,CardProductData>::find(
                                                                               &this->card_product_map_,
                                                                               (const std::unordered_map<unsigned int,CardProductData>::key_type *)(v4 + 48));
  __in = (std::pair<unsigned int const,unsigned int>)std::unordered_map<unsigned int,CardProductData>::end(&this->card_product_map_)._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned int const,CardProductData>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,CardProductData>,false> *)(v4 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,CardProductData>,false> *)&__in) )
  {
    common::milog::MiLogStream::create(
      &v44,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/recharge/player_recharge_comp.cpp",
      "takeResinCardDailyReward",
      2330);
    v14 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
            &v44,
            (const char (*)[30])"card is not exist, config_id:");
    v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v4 + 48));
    v16 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v15, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &val);
    common::milog::MiLogStream::~MiLogStream(&v44);
    v11 = -1;
  }
  else
  {
    card_data = &std::__detail::_Node_iterator<std::pair<unsigned int const,CardProductData>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,CardProductData>,false,false> *const)(v4 + 64))->second;
    ActionReason::ActionReason((ActionReason *const)(v4 + 128), ACTION_REASON_RECHARGE_CARD, ITEM_LIMIT_RESIN_CARD);
    std::vector<ItemParam>::vector((std::vector<ItemParam> *const)(v4 + 192));
    __for_range = &card_config_ptr->per_day_item_map;
    __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(&card_config_ptr->per_day_item_map)._M_node;
    __for_end._M_node = std::map<unsigned int,unsigned int>::end(&card_config_ptr->per_day_item_map)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v17 = (std::pair<unsigned int const,unsigned int> *)std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
      v18 = v17;
      if ( ((unsigned __int8)v17 & 7) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&v17->second + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)v17 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v17->second + 3) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load_n(v17, 8LL);
      }
      __in = *v18;
      k = std::get<0ul,unsigned int const,unsigned int>(&__in);
      v = std::get<1ul,unsigned int const,unsigned int>(&__in);
      *(_DWORD *)(v4 + 96) = 0;
      *(_DWORD *)(v4 + 100) = 0;
      *(_DWORD *)(v4 + 104) = 0;
      *(_DWORD *)(v4 + 108) = 0;
      if ( *(_BYTE *)(((unsigned __int64)k >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)k & 7) + 3) >= *(_BYTE *)(((unsigned __int64)k >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(k);
      }
      *(_DWORD *)(v4 + 96) = *k;
      if ( *(_BYTE *)(((unsigned __int64)v >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v);
      }
      *(_DWORD *)(v4 + 100) = *v;
      std::vector<ItemParam>::emplace_back<ItemParam&>(
        (std::vector<ItemParam> *const)(v4 + 192),
        (ItemParam *)(v4 + 96),
        (ItemParam *)(v4 + 96));
      std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
    }
    if ( *(_BYTE *)(((unsigned __int64)card_data >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)card_data >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(card_data, &__for_end, (_BYTE)card_data);
    }
    card_data->last_daily_reward_time = now;
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    ItemComp = Player::getItemComp(this->player_);
    if ( PlayerItemComp::addItemBatch(
           ItemComp,
           (const std::vector<ItemParam> *)(v4 + 192),
           (const ActionReason *)(v4 + 128),
           0LL) )
    {
      common::milog::MiLogStream::create(
        &v44,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/recharge/player_recharge_comp.cpp",
        "takeResinCardDailyReward",
        2348);
      v20 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
              &v44,
              (const char (*)[29])"addItemBatch fails, add_vec:");
      v21 = common::milog::MiLogStream::operator<<<ItemParam>(v20, (const std::vector<ItemParam> *)(v4 + 192));
      v22 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v21, (const char (*)[12])" config_id:");
      v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, (const unsigned int *)(v4 + 48));
      v30 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v23, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, &val);
      common::milog::MiLogStream::~MiLogStream(&v44);
    }
    val = *(_DWORD *)(v4 + 48);
    std::allocator<unsigned int>::allocator(&__a);
    std::vector<unsigned int>::vector(&config_id_vec, (std::initializer_list<unsigned int>)__PAIR128__(1LL, &val), &__a);
    PlayerRechargeComp::notifyResinCard(this, &config_id_vec);
    std::vector<unsigned int>::~vector(&config_id_vec);
    std::allocator<unsigned int>::~allocator(&__a);
    M_current = std::vector<ItemParam>::end((std::vector<ItemParam> *const)(v4 + 192))._M_current;
    v25 = std::vector<ItemParam>::begin((std::vector<ItemParam> *const)(v4 + 192))._M_current;
    __for_end._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr)std::vector<ItemParam>::end(display_vec)._M_current;
    __gnu_cxx::__normal_iterator<ItemParam const*,std::vector<ItemParam>>::__normal_iterator<ItemParam*>(
      (__gnu_cxx::__normal_iterator<const ItemParam*,std::vector<ItemParam> > *const)&__in,
      (const __gnu_cxx::__normal_iterator<ItemParam*,std::vector<ItemParam> > *)&__for_end);
    std::vector<ItemParam>::insert<__gnu_cxx::__normal_iterator<ItemParam*,std::vector<ItemParam>>,void>(
      display_vec,
      (std::vector<ItemParam>::const_iterator)__in,
      (__gnu_cxx::__normal_iterator<ItemParam*,std::vector<ItemParam> >)v25,
      (__gnu_cxx::__normal_iterator<ItemParam*,std::vector<ItemParam> >)M_current);
    common::milog::MiLogStream::create(
      &v44,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/recharge/player_recharge_comp.cpp",
      "takeResinCardDailyReward",
      2352);
    v26 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v44, (const char (*)[11])"take card:");
    v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, (const unsigned int *)(v4 + 48));
    v28 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v27, (const char (*)[15])" daily reward:");
    common::milog::MiLogStream::operator<<<ItemParam>(v28, (const std::vector<ItemParam> *)(v4 + 192));
    common::milog::MiLogStream::~MiLogStream(&v44);
    v11 = 0;
    std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v4 + 192));
  }
LABEL_34:
  result = v11;
  if ( v45 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 2357: range 0000000013E35E20-0000000013E3611D
void __cdecl PlayerRechargeComp::notifyAllResinCard(PlayerRechargeComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  ShopmallExcelConfigMgr *p_shopmall_config_mgr; // rcx
  std::unordered_map<unsigned int,CardProductData>::iterator __for_begin; // [rsp+18h] [rbp-C8h] BYREF
  std::unordered_map<unsigned int,CardProductData>::iterator __for_end; // [rsp+20h] [rbp-C0h] BYREF
  std::unordered_map<unsigned int,CardProductData> *__for_range; // [rsp+28h] [rbp-B8h]
  std::pair<unsigned int const,CardProductData> *__in; // [rsp+30h] [rbp-B0h]
  std::tuple_element<0,std::pair<unsigned int const,CardProductData> >::type *config_id; // [rsp+38h] [rbp-A8h]
  std::tuple_element<1,std::pair<unsigned int const,CardProductData> >::type *_; // [rsp+40h] [rbp-A0h]
  const data::ProductCardDetailConfig *card_config_ptr; // [rsp+48h] [rbp-98h]
  std::shared_ptr<Config> v12; // [rsp+50h] [rbp-90h] BYREF
  char v13[128]; // [rsp+60h] [rbp-80h] BYREF

  v1 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 24 11 id_vec:2358";
  *(_QWORD *)(v1 + 16) = PlayerRechargeComp::notifyAllResinCard;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218103808;
  v3[536862722] = -202116109;
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v1 + 32));
  __for_range = &this->card_product_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,CardProductData>::begin(&this->card_product_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,CardProductData>::end(&this->card_product_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,CardProductData>,false>(&__for_begin, &__for_end) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,CardProductData>,false,false>::operator*(&__for_begin);
    config_id = std::get<0ul,unsigned int const,CardProductData>(__in);
    _ = std::get<1ul,unsigned int const,CardProductData>(__in);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v12);
    p_shopmall_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v12)->design_config.txt_config_mgr.shopmall_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)config_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)config_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)config_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(config_id);
    }
    card_config_ptr = data::ShopmallExcelConfigMgrBase::findProductCardDetailConfig(p_shopmall_config_mgr, *config_id);
    std::shared_ptr<Config>::~shared_ptr(&v12);
    if ( card_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&card_config_ptr->card_product_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&card_config_ptr->card_product_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&card_config_ptr->card_product_type);
      }
      if ( card_config_ptr->card_product_type == CARD_PRODUCT_TYPE_RESIN )
        std::vector<unsigned int>::push_back((std::vector<unsigned int> *const)(v1 + 32), config_id);
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,CardProductData>,false,false>::operator++(&__for_begin);
  }
  PlayerRechargeComp::notifyResinCard(this, (const std::vector<unsigned int> *)(v1 + 32));
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v1 + 32));
  if ( v13 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 2376: range 0000000013E3611E-0000000013E3666B
void __cdecl PlayerRechargeComp::notifyResinCard(
        PlayerRechargeComp *const this,
        const std::vector<unsigned int> *config_id_vec)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v5; // rax
  _DWORD *v6; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  google::protobuf::uint32 CardProductRemainRewardDays; // eax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  time_t Now; // rax
  uint32_t time_offset; // [rsp+1Ch] [rbp-124h]
  uint32_t now_day; // [rsp+20h] [rbp-120h]
  uint32_t now_start_time; // [rsp+24h] [rbp-11Ch]
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-118h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-110h] BYREF
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,CardProductData>,false> __y; // [rsp+38h] [rbp-108h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+40h] [rbp-100h]
  const data::ProductCardDetailConfig *card_config_ptr; // [rsp+48h] [rbp-F8h]
  CardProductData *card_data; // [rsp+50h] [rbp-F0h]
  proto::ResinCardData *proto; // [rsp+58h] [rbp-E8h]
  std::shared_ptr<Config> v21; // [rsp+60h] [rbp-E0h] BYREF
  char v22[208]; // [rsp+70h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 7 id:2378 48 8 9 iter:2389 80 48 11 notify:2377";
  *(_QWORD *)(v2 + 16) = PlayerRechargeComp::notifyResinCard;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862721] = -234881024;
  v4[536862722] = 62194;
  v4[536862724] = -202116109;
  proto::ResinCardDataUpdateNotify::ResinCardDataUpdateNotify((proto::ResinCardDataUpdateNotify *const)(v2 + 80));
  __for_range = config_id_vec;
  __for_begin._M_current = std::vector<unsigned int>::begin(config_id_vec)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(config_id_vec)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v5 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
    v6 = v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v5);
    }
    *(_DWORD *)(v2 + 32) = *v6;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v21);
    v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v21);
    card_config_ptr = data::ShopmallExcelConfigMgrBase::findProductCardDetailConfig(
                        &v7->design_config.txt_config_mgr.shopmall_config_mgr,
                        *(_DWORD *)(v2 + 32));
    std::shared_ptr<Config>::~shared_ptr(&v21);
    if ( card_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&card_config_ptr->card_product_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&card_config_ptr->card_product_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&card_config_ptr->card_product_type);
      }
      if ( card_config_ptr->card_product_type == CARD_PRODUCT_TYPE_RESIN )
      {
        *(std::unordered_map<unsigned int,CardProductData>::iterator *)(v2 + 48) = std::unordered_map<unsigned int,CardProductData>::find(
                                                                                     &this->card_product_map_,
                                                                                     (const std::unordered_map<unsigned int,CardProductData>::key_type *)(v2 + 32));
        __y._M_cur = std::unordered_map<unsigned int,CardProductData>::end(&this->card_product_map_)._M_cur;
        if ( !std::__detail::operator==<std::pair<unsigned int const,CardProductData>,false>(
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,CardProductData>,false> *)(v2 + 48),
                &__y) )
        {
          card_data = &std::__detail::_Node_iterator<std::pair<unsigned int const,CardProductData>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,CardProductData>,false,false> *const)(v2 + 48))->second;
          proto = proto::ResinCardDataUpdateNotify::add_card_data_list((proto::ResinCardDataUpdateNotify *const)(v2 + 80));
          proto::ResinCardData::set_config_id(proto, *(_DWORD *)(v2 + 32));
          CardProductRemainRewardDays = PlayerRechargeComp::getCardProductRemainRewardDays(this, *(_DWORD *)(v2 + 32));
          proto::ResinCardData::set_remain_reward_days(proto, CardProductRemainRewardDays);
          if ( *(_BYTE *)(((unsigned __int64)card_data >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)card_data >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(card_data);
          }
          proto::ResinCardData::set_last_daily_reward_time(proto, card_data->last_daily_reward_time);
          if ( *(_BYTE *)(((unsigned __int64)&card_data->expire_time >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&card_data->expire_time >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&card_data->expire_time);
          }
          proto::ResinCardData::set_expire_time(proto, card_data->expire_time);
        }
      }
    }
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  if ( proto::ResinCardDataUpdateNotify::card_data_list_size((const proto::ResinCardDataUpdateNotify *const)(v2 + 80)) > 0 )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v21);
    v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v21);
    time_offset = ConstValueExcelConfigMgr::getTimeOffsetSec(&v9->design_config.txt_config_mgr.const_value_config_mgr);
    std::shared_ptr<Config>::~shared_ptr(&v21);
    Now = common::tools::TimeUtils::getNow();
    now_day = common::tools::TimeUtils::getTimeDay(Now, time_offset);
    now_start_time = common::tools::TimeUtils::getDailyStartTime(now_day, time_offset);
    proto::ResinCardDataUpdateNotify::set_today_start_time(
      (proto::ResinCardDataUpdateNotify *const)(v2 + 80),
      now_start_time);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 80));
  }
  proto::ResinCardDataUpdateNotify::~ResinCardDataUpdateNotify((proto::ResinCardDataUpdateNotify *const)(v2 + 80));
  if ( v22 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 2412: range 0000000013E3666C-0000000013E36ACF
void __cdecl PlayerRechargeComp::pushSaveOrderNotifyToCacheOrderNotify(PlayerRechargeComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  uint32_t v4; // ecx
  const proto::OrderFinishNotify *v5; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,proto::OrderFinishNotify> >,bool> v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  std::unordered_map<unsigned int,std::map<unsigned int,proto::OrderFinishNotify>>::iterator __for_begin; // [rsp+10h] [rbp-100h] BYREF
  std::unordered_map<unsigned int,std::map<unsigned int,proto::OrderFinishNotify>>::iterator __for_end; // [rsp+18h] [rbp-F8h] BYREF
  std::map<unsigned int,proto::OrderFinishNotify>::iterator __for_begin_0; // [rsp+20h] [rbp-F0h] BYREF
  std::map<unsigned int,proto::OrderFinishNotify>::iterator __for_end_0; // [rsp+28h] [rbp-E8h] BYREF
  std::unordered_map<unsigned int,std::map<unsigned int,proto::OrderFinishNotify>> *__for_range; // [rsp+30h] [rbp-E0h]
  std::pair<unsigned int const,std::map<unsigned int,proto::OrderFinishNotify> > *__in; // [rsp+38h] [rbp-D8h]
  std::tuple_element<0,std::pair<unsigned int const,std::map<unsigned int,proto::OrderFinishNotify> > >::type *platform_type; // [rsp+40h] [rbp-D0h]
  std::tuple_element<1,std::pair<unsigned int const,std::map<unsigned int,proto::OrderFinishNotify> > >::type *order_finish_notify_map; // [rsp+48h] [rbp-C8h]
  std::map<unsigned int,proto::OrderFinishNotify> *__for_range_0; // [rsp+50h] [rbp-C0h]
  const std::pair<unsigned int const,proto::OrderFinishNotify> *v24; // [rsp+58h] [rbp-B8h]
  std::tuple_element<0,const std::pair<unsigned int const,proto::OrderFinishNotify> >::type *order_id; // [rsp+60h] [rbp-B0h]
  std::tuple_element<1,const std::pair<unsigned int const,proto::OrderFinishNotify> >::type *order_finish_notify; // [rsp+68h] [rbp-A8h]
  common::milog::MiLogStream v27; // [rsp+70h] [rbp-A0h] BYREF
  common::milog::MiLogStream v28; // [rsp+90h] [rbp-80h] BYREF
  char v29[96]; // [rsp+B0h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 25 player_platform_type:2415";
  *(_QWORD *)(v1 + 16) = PlayerRechargeComp::pushSaveOrderNotifyToCacheOrderNotify;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  __for_range = &this->saved_order_notify_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,std::map<unsigned int,proto::OrderFinishNotify>>::begin(&this->saved_order_notify_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::map<unsigned int,proto::OrderFinishNotify>>::end(&this->saved_order_notify_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::map<unsigned int,proto::OrderFinishNotify>>,false>(
            &__for_begin,
            &__for_end) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,std::map<unsigned int,proto::OrderFinishNotify>>,false,false>::operator*(&__for_begin);
    platform_type = std::get<0ul,unsigned int const,std::map<unsigned int,proto::OrderFinishNotify>>(__in);
    order_finish_notify_map = std::get<1ul,unsigned int const,std::map<unsigned int,proto::OrderFinishNotify>>(__in);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    *(_DWORD *)(v1 + 32) = Player::getPlatformType(this->player_);
    v4 = *(_DWORD *)(v1 + 32);
    if ( *(_BYTE *)(((unsigned __int64)platform_type >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)platform_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)platform_type >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4(platform_type);
    }
    if ( TxtConfigMgr::isPlatformTyepInSameOperator(*platform_type, v4) )
    {
      __for_range_0 = order_finish_notify_map;
      __for_begin_0._M_node = std::map<unsigned int,proto::OrderFinishNotify>::begin(order_finish_notify_map)._M_node;
      __for_end_0._M_node = std::map<unsigned int,proto::OrderFinishNotify>::end(__for_range_0)._M_node;
      while ( std::operator!=(&__for_begin_0, &__for_end_0) )
      {
        v24 = std::_Rb_tree_iterator<std::pair<unsigned int const,proto::OrderFinishNotify>>::operator*(&__for_begin_0);
        order_id = std::get<0ul,unsigned int const,proto::OrderFinishNotify>(v24);
        order_finish_notify = (std::tuple_element<1,const std::pair<unsigned int const,proto::OrderFinishNotify> >::type *)std::get<1ul,unsigned int const,proto::OrderFinishNotify>(v24);
        v6 = std::map<unsigned int,proto::OrderFinishNotify>::emplace<unsigned int const&,proto::OrderFinishNotify const&>(
               &this->cached_order_notify_map_,
               order_id,
               order_finish_notify,
               (const unsigned int *)&this->cached_order_notify_map_,
               v5);
        if ( !v6.second )
        {
          common::milog::MiLogStream::create(
            &v27,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/recharge/player_recharge_comp.cpp",
            "pushSaveOrderNotifyToCacheOrderNotify",
            2422);
          v7 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                 &v27,
                 (const char (*)[18])"emplace order_id:");
          v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, order_id);
          common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v8, (const char (*)[7])" fails");
          common::milog::MiLogStream::~MiLogStream(&v27);
        }
        common::milog::MiLogStream::create(
          &v28,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/recharge/player_recharge_comp.cpp",
          "pushSaveOrderNotifyToCacheOrderNotify",
          2425);
        v9 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
               &v28,
               (const char (*)[20])"push platform_type:");
        v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, platform_type);
        v11 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                v10,
                (const char (*)[23])" player_platform_type:");
        v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v11,
                (const unsigned int *)(v1 + 32));
        v13 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v12, (const char (*)[8])" order:");
        v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, order_id);
        common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v14, (const char (*)[29])off_25174B80);
        common::milog::MiLogStream::~MiLogStream(&v28);
        std::_Rb_tree_iterator<std::pair<unsigned int const,proto::OrderFinishNotify>>::operator++(&__for_begin_0);
      }
      std::map<unsigned int,proto::OrderFinishNotify>::clear(order_finish_notify_map);
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::map<unsigned int,proto::OrderFinishNotify>>,false,false>::operator++(&__for_begin);
  }
  if ( v29 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 2435: range 0000000013E36AD0-0000000013E375EB
void __cdecl PlayerRechargeComp::trySendCardProductRemindMail(PlayerRechargeComp *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // rbx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  ShopmallExcelConfigMgr *p_shopmall_config_mgr; // rcx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r14
  time_t v9; // rdx
  uint32_t TimeDay; // eax
  __int64 v11; // rsi
  uint32_t v12; // eax
  std::string *i; // r14
  PlayerMailComp *MailComp; // rax
  common::milog::MiLogStream *v15; // r14
  common::milog::MiLogStream *v16; // rax
  std::initializer_list<std::string > __l; // [rsp+0h] [rbp-250h]
  std::allocator<std::string > __a; // [rsp+2Bh] [rbp-225h] BYREF
  unsigned int val; // [rsp+2Ch] [rbp-224h] BYREF
  uint32_t day_offset; // [rsp+30h] [rbp-220h]
  uint32_t now; // [rsp+34h] [rbp-21Ch]
  uint32_t now_day; // [rsp+38h] [rbp-218h]
  uint32_t expire_day; // [rsp+3Ch] [rbp-214h]
  uint32_t last_send_day; // [rsp+40h] [rbp-210h]
  uint32_t last_day; // [rsp+44h] [rbp-20Ch]
  uint32_t year; // [rsp+48h] [rbp-208h]
  uint32_t month; // [rsp+4Ch] [rbp-204h]
  uint32_t day; // [rsp+50h] [rbp-200h]
  uint32_t mail_id; // [rsp+54h] [rbp-1FCh]
  std::unordered_map<unsigned int,CardProductData>::iterator __for_begin; // [rsp+58h] [rbp-1F8h] BYREF
  std::unordered_map<unsigned int,CardProductData>::iterator __for_end; // [rsp+60h] [rbp-1F0h] BYREF
  std::unordered_map<unsigned int,CardProductData> *__for_range; // [rsp+68h] [rbp-1E8h]
  std::pair<unsigned int const,CardProductData> *__in; // [rsp+70h] [rbp-1E0h]
  std::tuple_element<0,std::pair<unsigned int const,CardProductData> >::type *config_id; // [rsp+78h] [rbp-1D8h]
  std::tuple_element<1,std::pair<unsigned int const,CardProductData> >::type *card_data; // [rsp+80h] [rbp-1D0h]
  const data::ProductCardDetailConfig *card_config_ptr; // [rsp+88h] [rbp-1C8h]
  std::shared_ptr<Config> v37; // [rsp+90h] [rbp-1C0h] BYREF
  common::milog::MiLogStream v38; // [rsp+A0h] [rbp-1B0h] BYREF
  std::string v39; // [rsp+C0h] [rbp-190h] BYREF
  std::string v40; // [rsp+E0h] [rbp-170h] BYREF
  std::string v41; // [rsp+100h] [rbp-150h] BYREF
  std::string v42; // [rsp+120h] [rbp-130h] BYREF
  char v43[272]; // [rsp+140h] [rbp-110h] BYREF

  v1 = (unsigned __int64)v43;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(224LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 32 24 11 reason:2476 96 24 14 dummy_vec:2477 160 24 9 args:2478";
  *(_QWORD *)(v1 + 16) = PlayerRechargeComp::trySendCardProductRemindMail;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234881024;
  v3[536862722] = -218959118;
  v3[536862723] = -234881024;
  v3[536862724] = -218959118;
  v3[536862725] = -218103808;
  v3[536862726] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v37);
  v4 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v37);
  day_offset = ConstValueExcelConfigMgr::getTimeOffsetSec(&v4->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v37);
  now = common::tools::TimeUtils::getNow();
  now_day = common::tools::TimeUtils::getTimeDay(now, day_offset);
  __for_range = &this->card_product_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,CardProductData>::begin(&this->card_product_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,CardProductData>::end(&this->card_product_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,CardProductData>,false>(&__for_begin, &__for_end) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,CardProductData>,false,false>::operator*(&__for_begin);
    config_id = std::get<0ul,unsigned int const,CardProductData>(__in);
    card_data = std::get<1ul,unsigned int const,CardProductData>(__in);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v37);
    p_shopmall_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v37)->design_config.txt_config_mgr.shopmall_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)config_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)config_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)config_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(config_id);
    }
    card_config_ptr = data::ShopmallExcelConfigMgrBase::findProductCardDetailConfig(p_shopmall_config_mgr, *config_id);
    std::shared_ptr<Config>::~shared_ptr(&v37);
    if ( card_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&card_config_ptr->remind_mail_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&card_config_ptr->remind_mail_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&card_config_ptr->remind_mail_id);
      }
      if ( card_config_ptr->remind_mail_id )
      {
        v9 = day_offset;
        if ( *(_BYTE *)(((unsigned __int64)&card_data->expire_time >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&card_data->expire_time >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&card_data->expire_time);
        }
        expire_day = common::tools::TimeUtils::getTimeDay(card_data->expire_time, v9);
        if ( *(_BYTE *)(((unsigned __int64)&card_data->last_send_remind_mail_time >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&card_data->last_send_remind_mail_time >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&card_data->last_send_remind_mail_time);
        }
        if ( card_data->last_send_remind_mail_time )
          TimeDay = common::tools::TimeUtils::getTimeDay(card_data->last_send_remind_mail_time, day_offset);
        else
          TimeDay = 0;
        last_send_day = TimeDay;
        if ( *(_BYTE *)(((unsigned __int64)&card_config_ptr->remind_mail_before_day_num >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)card_config_ptr - 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&card_config_ptr->remind_mail_before_day_num >> 3)
                                                                         + 0x7FFF8000) )
        {
          __asan_report_load4(&card_config_ptr->remind_mail_before_day_num);
        }
        if ( expire_day > card_config_ptr->remind_mail_before_day_num + last_send_day )
        {
          v11 = (((_BYTE)card_config_ptr - 76) & 7u) + 3;
          if ( *(_BYTE *)(((unsigned __int64)&card_config_ptr->remind_mail_before_day_num >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)card_config_ptr - 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&card_config_ptr->remind_mail_before_day_num >> 3)
                                                                           + 0x7FFF8000) )
          {
            __asan_report_load4(&card_config_ptr->remind_mail_before_day_num);
          }
          if ( expire_day <= card_config_ptr->remind_mail_before_day_num + now_day && now_day < expire_day )
          {
            if ( *(_BYTE *)(((unsigned __int64)&card_data->last_send_remind_mail_time >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&card_data->last_send_remind_mail_time >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_store4(&card_data->last_send_remind_mail_time, v11, (_BYTE)card_data + 64);
            }
            card_data->last_send_remind_mail_time = now;
            if ( expire_day <= now_day )
              v12 = 0;
            else
              v12 = expire_day - now_day;
            last_day = v12;
            if ( *(_BYTE *)(((unsigned __int64)&card_data->expire_time >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&card_data->expire_time >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&card_data->expire_time);
            }
            year = common::tools::TimeUtils::getTimeYear(card_data->expire_time) + 1970;
            if ( *(_BYTE *)(((unsigned __int64)&card_data->expire_time >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&card_data->expire_time >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&card_data->expire_time);
            }
            month = common::tools::TimeUtils::getTimeYearMonth(card_data->expire_time);
            if ( *(_BYTE *)(((unsigned __int64)&card_data->expire_time >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&card_data->expire_time >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&card_data->expire_time);
            }
            day = common::tools::TimeUtils::getTimeMonthDay(card_data->expire_time, 0LL);
            if ( *(_BYTE *)(((unsigned __int64)&card_config_ptr->remind_mail_id >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&card_config_ptr->remind_mail_id >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&card_config_ptr->remind_mail_id);
            }
            mail_id = card_config_ptr->remind_mail_id;
            ActionReason::ActionReason(
              (ActionReason *const)(v1 + 32),
              ACTION_REASON_RECHARGE_CARD_DAILY,
              ITEM_LIMIT_NONE);
            std::vector<ItemParam>::vector((std::vector<ItemParam> *const)(v1 + 96));
            common::tools::StringUtils::numToStr<unsigned int>(&v39, last_day);
            common::tools::StringUtils::numToStr<unsigned int>(&v40, year);
            common::tools::StringUtils::numToStr<unsigned int>(&v41, month);
            common::tools::StringUtils::numToStr<unsigned int>(&v42, day);
            __l._M_array = &v39;
            __l._M_len = 4LL;
            std::allocator<std::string>::allocator(&__a);
            std::vector<std::string>::vector((std::vector<std::string> *const)(v1 + 160), __l, &__a);
            std::allocator<std::string>::~allocator(&__a);
            for ( i = (std::string *)v43; i != &v39; std::string::~string(i) )
              --i;
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            MailComp = Player::getMailComp(this->player_);
            if ( PlayerMailComp::addMailById(
                   MailComp,
                   mail_id,
                   0xBu,
                   (const std::vector<ItemParam> *)(v1 + 96),
                   (const std::vector<std::string> *)(v1 + 160),
                   (const ActionReason *)(v1 + 32)) )
            {
              common::milog::MiLogStream::create(
                &v38,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/recharge/player_recharge_comp.cpp",
                "trySendCardProductRemindMail",
                2481);
              v15 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                      &v38,
                      (const char (*)[24])"addMailById fails, uid:");
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8(&this->player_);
              val = Player::getUid(this->player_);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
              common::milog::MiLogStream::~MiLogStream(&v38);
            }
            common::milog::MiLogStream::create(
              &v38,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/recharge/player_recharge_comp.cpp",
              "trySendCardProductRemindMail",
              2484);
            v16 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                    &v38,
                    (const char (*)[25])"send mail for config_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, config_id);
            common::milog::MiLogStream::~MiLogStream(&v38);
            std::vector<std::string>::~vector((std::vector<std::string> *const)(v1 + 160));
            std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v1 + 96));
          }
        }
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v38,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/recharge/player_recharge_comp.cpp",
        "trySendCardProductRemindMail",
        2444);
      v6 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
             &v38,
             (const char (*)[36])"findProductCardDetailConfig fails, ");
      v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, config_id);
      v8 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v7, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
      common::milog::MiLogStream::~MiLogStream(&v38);
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,CardProductData>,false,false>::operator++(&__for_begin);
  }
  if ( v43 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8018) = -168430091;
  }
};

// Line 2491: range 0000000013E37790-0000000013E38955
void __cdecl PlayerRechargeComp::reportAdjustTracking(
        PlayerRechargeComp *const this,
        const proto::Order *order_proto,
        const data::PriceTierConfig *price_tier_config_ptr)
{
  __m128i v3; // xmm0
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  char v7; // al
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  bool v9; // r14
  const proto::PlayerLoginReq *SessionLoginReq; // rax
  const std::string *v11; // rax
  common::milog::MiLogStream *v12; // rcx
  const std::string *v13; // rax
  std::map<std::string,std::string>::mapped_type *v14; // rax
  std::map<std::string,std::string>::mapped_type *v15; // rax
  const std::string *v16; // r14
  std::map<std::string,std::string>::mapped_type *v17; // rax
  const std::string *v18; // r14
  std::map<std::string,std::string>::mapped_type *v19; // rax
  const std::string *v20; // r14
  std::map<std::string,std::string>::mapped_type *v21; // rax
  const std::string *v22; // r14
  std::map<std::string,std::string>::mapped_type *v23; // rax
  const std::string *v24; // r14
  std::map<std::string,std::string>::mapped_type *v25; // rax
  const std::string *v26; // r14
  std::map<std::string,std::string>::mapped_type *v27; // rax
  std::map<std::string,std::string>::mapped_type *v28; // rax
  std::map<std::string,std::string>::mapped_type *v29; // rax
  ShopmallExcelConfigMgr *p_shopmall_config_mgr; // rdx
  std::map<std::string,std::string>::mapped_type *v31; // rax
  std::map<std::string,std::string>::mapped_type *v32; // rax
  GameserverService *v33; // r14
  common::milog::MiLogStream *v34; // rax
  unsigned int now; // [rsp+28h] [rbp-1F8h]
  AdjustTrackingConfig *adjust_tracking_config; // [rsp+30h] [rbp-1F0h]
  const proto::AdjustTrackingInfo *adjust_tracking_info; // [rsp+38h] [rbp-1E8h]
  std::shared_ptr<Config> v39; // [rsp+40h] [rbp-1E0h] BYREF
  std::string __k; // [rsp+50h] [rbp-1D0h] BYREF
  common::milog::MiLogStream v41; // [rsp+70h] [rbp-1B0h] BYREF
  char v42[400]; // [rsp+90h] [rbp-190h] BYREF

  v4 = (unsigned __int64)v42;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(352LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 32 1 13 callback:2559 48 240 13 http_req:2532";
  *(_QWORD *)(v4 + 16) = PlayerRechargeComp::reportAdjustTracking;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = 61953;
  v6[536862729] = -202116109;
  v6[536862730] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  if ( Player::getPlatformType(this->player_) == 1 )
    goto LABEL_11;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  if ( Player::getPlatformType(this->player_) == 2 )
LABEL_11:
    v7 = 0;
  else
    v7 = 1;
  if ( !v7 )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v39);
    v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v39);
    v9 = !Config::isInternalServer(v8);
    std::shared_ptr<Config>::~shared_ptr(&v39);
    if ( !v9 )
    {
      if ( !price_tier_config_ptr )
      {
        common::milog::MiLogStream::create(
          &v41,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/recharge/player_recharge_comp.cpp",
          "reportAdjustTracking",
          2505);
        common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
          &v41,
          (const char (*)[33])"price_tier_config_ptr is nullptr");
        common::milog::MiLogStream::~MiLogStream(&v41);
        goto LABEL_39;
      }
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v39);
      adjust_tracking_config = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v39)->adjust_tracking_config;
      std::shared_ptr<Config>::~shared_ptr(&v39);
      if ( *(_BYTE *)(((unsigned __int64)&adjust_tracking_config->is_enable >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)adjust_tracking_config + 97) & 7) >= *(_BYTE *)(((unsigned __int64)&adjust_tracking_config->is_enable >> 3)
                                                                            + 0x7FFF8000) )
      {
        __asan_report_load1(&adjust_tracking_config->is_enable);
      }
      if ( !adjust_tracking_config->is_enable )
      {
        common::milog::MiLogStream::create(
          &v41,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/recharge/player_recharge_comp.cpp",
          "reportAdjustTracking",
          2511);
        common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
          &v41,
          (const char (*)[23])"close adjust tracking!");
        common::milog::MiLogStream::~MiLogStream(&v41);
        goto LABEL_39;
      }
      if ( (unsigned __int8)std::string::empty(adjust_tracking_config) )
      {
        common::milog::MiLogStream::create(
          &v41,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/recharge/player_recharge_comp.cpp",
          "reportAdjustTracking",
          2516);
        common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
          &v41,
          (const char (*)[38])"adjust_tracking_config host is empty!");
        common::milog::MiLogStream::~MiLogStream(&v41);
        goto LABEL_39;
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      SessionLoginReq = Player::getSessionLoginReq(this->player_);
      adjust_tracking_info = proto::PlayerLoginReq::adjust_tracking_info(SessionLoginReq);
      v11 = proto::AdjustTrackingInfo::event_token[abi:cxx11](adjust_tracking_info);
      if ( (unsigned __int8)std::string::empty(v11) )
      {
        common::milog::MiLogStream::create(
          &v41,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/recharge/player_recharge_comp.cpp",
          "reportAdjustTracking",
          2522);
        v12 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
                &v41,
                (const char (*)[52])"event_token is empty, cannot report to TrackingIO, ");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
LABEL_27:
        operator<<(v12, this->player_);
        common::milog::MiLogStream::~MiLogStream(&v41);
        goto LABEL_39;
      }
      v13 = proto::AdjustTrackingInfo::app_token[abi:cxx11](adjust_tracking_info);
      if ( (unsigned __int8)std::string::empty(v13) )
      {
        common::milog::MiLogStream::create(
          &v41,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/recharge/player_recharge_comp.cpp",
          "reportAdjustTracking",
          2527);
        v12 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                &v41,
                (const char (*)[50])"app_token is empty, cannot report to TrackingIO, ");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        goto LABEL_27;
      }
      now = common::tools::TimeUtils::getNow();
      common::minet::http_client::HttpRequest::HttpRequest((common::minet::http_client::HttpRequest *const)(v4 + 48));
      std::string::operator=(v4 + 48, adjust_tracking_config);
      std::string::operator=(v4 + 80, &adjust_tracking_config->port);
      std::string::operator=(v4 + 112, &adjust_tracking_config->uri);
      *(_DWORD *)(v4 + 272) = 1;
      if ( *(char *)(((unsigned __int64)&adjust_tracking_config->is_ssl >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&adjust_tracking_config->is_ssl);
      *(_BYTE *)(v4 + 280) = adjust_tracking_config->is_ssl;
      std::allocator<char>::allocator(v4 + 32);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)&v41,
        "Content-Type",
        (const std::allocator<char> *)(v4 + 32));
      v14 = std::map<std::string,std::string>::operator[](
              (std::map<std::string,std::string> *const)(v4 + 144),
              (std::map<std::string,std::string>::key_type *)&v41);
      std::string::operator=(v14, "application/x-www-form-urlencoded");
      std::string::~string(&v41);
      std::allocator<char>::~allocator(v4 + 32);
      std::allocator<char>::allocator(v4 + 32);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)&v41,
        off_25174F00,
        (const std::allocator<char> *)(v4 + 32));
      v15 = std::map<std::string,std::string>::operator[](
              (std::map<std::string,std::string> *const)(v4 + 192),
              (std::map<std::string,std::string>::key_type *)&v41);
      std::string::operator=(v15, "1");
      std::string::~string(&v41);
      std::allocator<char>::~allocator(v4 + 32);
      v16 = proto::AdjustTrackingInfo::app_token[abi:cxx11](adjust_tracking_info);
      std::allocator<char>::allocator(v4 + 32);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)&v41,
        "app_token",
        (const std::allocator<char> *)(v4 + 32));
      v17 = std::map<std::string,std::string>::operator[](
              (std::map<std::string,std::string> *const)(v4 + 192),
              (std::map<std::string,std::string>::key_type *)&v41);
      std::string::operator=(v17, v16);
      std::string::~string(&v41);
      std::allocator<char>::~allocator(v4 + 32);
      v18 = proto::AdjustTrackingInfo::event_token[abi:cxx11](adjust_tracking_info);
      std::allocator<char>::allocator(v4 + 32);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)&v41,
        "event_token",
        (const std::allocator<char> *)(v4 + 32));
      v19 = std::map<std::string,std::string>::operator[](
              (std::map<std::string,std::string> *const)(v4 + 192),
              (std::map<std::string,std::string>::key_type *)&v41);
      std::string::operator=(v19, v18);
      std::string::~string(&v41);
      std::allocator<char>::~allocator(v4 + 32);
      v20 = proto::AdjustTrackingInfo::idfa[abi:cxx11](adjust_tracking_info);
      std::allocator<char>::allocator(v4 + 32);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)&v41,
        "idfa",
        (const std::allocator<char> *)(v4 + 32));
      v21 = std::map<std::string,std::string>::operator[](
              (std::map<std::string,std::string> *const)(v4 + 192),
              (std::map<std::string,std::string>::key_type *)&v41);
      std::string::operator=(v21, v20);
      std::string::~string(&v41);
      std::allocator<char>::~allocator(v4 + 32);
      v22 = proto::AdjustTrackingInfo::gps_adid[abi:cxx11](adjust_tracking_info);
      std::allocator<char>::allocator(v4 + 32);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)&v41,
        "gps_adid",
        (const std::allocator<char> *)(v4 + 32));
      v23 = std::map<std::string,std::string>::operator[](
              (std::map<std::string,std::string> *const)(v4 + 192),
              (std::map<std::string,std::string>::key_type *)&v41);
      std::string::operator=(v23, v22);
      std::string::~string(&v41);
      std::allocator<char>::~allocator(v4 + 32);
      v24 = proto::AdjustTrackingInfo::fire_adid[abi:cxx11](adjust_tracking_info);
      std::allocator<char>::allocator(v4 + 32);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)&v41,
        "fire_adid",
        (const std::allocator<char> *)(v4 + 32));
      v25 = std::map<std::string,std::string>::operator[](
              (std::map<std::string,std::string> *const)(v4 + 192),
              (std::map<std::string,std::string>::key_type *)&v41);
      std::string::operator=(v25, v24);
      std::string::~string(&v41);
      std::allocator<char>::~allocator(v4 + 32);
      v26 = proto::AdjustTrackingInfo::adid[abi:cxx11](adjust_tracking_info);
      std::allocator<char>::allocator(v4 + 32);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)&v41,
        "adid",
        (const std::allocator<char> *)(v4 + 32));
      v27 = std::map<std::string,std::string>::operator[](
              (std::map<std::string,std::string> *const)(v4 + 192),
              (std::map<std::string,std::string>::key_type *)&v41);
      std::string::operator=(v27, v26);
      std::string::~string(&v41);
      std::allocator<char>::~allocator(v4 + 32);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      Player::getPlayerClientIp[abi:cxx11]((std::string *)&v41, this->player_);
      std::allocator<char>::allocator(v4 + 32);
      std::string::basic_string<std::allocator<char>>(&__k, "ip_address", (const std::allocator<char> *)(v4 + 32));
      v28 = std::map<std::string,std::string>::operator[]((std::map<std::string,std::string> *const)(v4 + 192), &__k);
      std::string::operator=(v28, &v41);
      std::string::~string(&__k);
      std::allocator<char>::~allocator(v4 + 32);
      std::string::~string(&v41);
      std::to_string((std::string *)&v41, now);
      std::allocator<char>::allocator(v4 + 32);
      std::string::basic_string<std::allocator<char>>(&__k, "created_at_unix", (const std::allocator<char> *)(v4 + 32));
      v29 = std::map<std::string,std::string>::operator[]((std::map<std::string,std::string> *const)(v4 + 192), &__k);
      std::string::operator=(v29, &v41);
      std::string::~string(&__k);
      std::allocator<char>::~allocator(v4 + 32);
      std::string::~string(&v41);
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v39);
      p_shopmall_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v39)->design_config.txt_config_mgr.shopmall_config_mgr;
      *(float *)v3.m128i_i32 = ShopmallExcelConfigMgr::getCNYPriceFromTier(p_shopmall_config_mgr, price_tier_config_ptr);
      std::shared_ptr<Config>::~shared_ptr(&v39);
      std::to_string((std::string *)&v41, COERCE_FLOAT(_mm_cvtsi128_si32(v3)));
      std::allocator<char>::allocator(v4 + 32);
      std::string::basic_string<std::allocator<char>>(&__k, "revenue", (const std::allocator<char> *)(v4 + 32));
      v31 = std::map<std::string,std::string>::operator[]((std::map<std::string,std::string> *const)(v4 + 192), &__k);
      std::string::operator=(v31, &v41);
      std::string::~string(&__k);
      std::allocator<char>::~allocator(v4 + 32);
      std::string::~string(&v41);
      std::allocator<char>::allocator(v4 + 32);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)&v41,
        "currency",
        (const std::allocator<char> *)(v4 + 32));
      v32 = std::map<std::string,std::string>::operator[](
              (std::map<std::string,std::string> *const)(v4 + 192),
              (std::map<std::string,std::string>::key_type *)&v41);
      std::string::operator=(v32, off_25174180);
      std::string::~string(&v41);
      std::allocator<char>::~allocator(v4 + 32);
      common::milog::MiLogStream::create(
        &v41,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/recharge/player_recharge_comp.cpp",
        "reportAdjustTracking",
        2557);
      common::milog::MiLogStream::operator<<<std::string,std::string>(
        &v41,
        (const std::map<std::string,std::string> *)(v4 + 192));
      common::milog::MiLogStream::~MiLogStream(&v41);
      v33 = ServiceBox::findService<GameserverService>();
      std::function<void ()(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)>::function<PlayerRechargeComp::reportAdjustTracking(proto::Order const&,data::PriceTierConfig const*)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &,common::minet::http_client::HttpResponse)#1},void,void>(
        (std::function<void(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest&&,common::minet::http_client::HttpResponse&&)> *const)&v41,
        (PlayerRechargeComp::reportAdjustTracking::<lambda(common::minet::http_client::HttpRetcode, common::minet::http_client::HttpRequest&&, common::minet::http_client::HttpResponse&&)>)(v4 - 64));
      LOBYTE(v33) = GameserverService::asyncHttpRequest(
                      v33,
                      (const common::minet::http_client::HttpRequest *)(v4 + 48),
                      10LL,
                      0,
                      (common::minet::http_client::ResponseCallBackFunc *)&v41) != 0;
      std::function<void ()(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)>::~function((std::function<void(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest&&,common::minet::http_client::HttpResponse&&)> *const)&v41);
      if ( (_BYTE)v33 )
      {
        common::milog::MiLogStream::create(
          &v41,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/recharge/player_recharge_comp.cpp",
          "reportAdjustTracking",
          2565);
        v34 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                &v41,
                (const char (*)[39])"asyncHttpRequest fails, http req body:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v34, (const std::string *)(v4 + 240));
        common::milog::MiLogStream::~MiLogStream(&v41);
      }
      common::minet::http_client::HttpRequest::~HttpRequest((common::minet::http_client::HttpRequest *const)(v4 + 48));
    }
  }
LABEL_39:
  if ( v42 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8024) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8028) = -168430091;
  }
};

// Line 2559: range 0000000013E375EC-0000000013E3778E
void __fastcall PlayerRechargeComp::reportAdjustTracking(proto::Order const&,data::PriceTierConfig const*)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)#1}::operator()(
        const PlayerRechargeComp::reportAdjustTracking::<lambda(common::minet::http_client::HttpRetcode, common::minet::http_client::HttpRequest&&, common::minet::http_client::HttpResponse&&)> *const __closure,
        common::minet::http_client::HttpRetcode retcode,
        common::minet::http_client::HttpRequest *http_req,
        common::minet::http_client::HttpResponse *http_rsp)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream v14; // [rsp+20h] [rbp-80h] BYREF
  char v15[96]; // [rsp+40h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 4 12 retcode:2559";
  *(_QWORD *)(v4 + 16) = PlayerRechargeComp::reportAdjustTracking(proto::Order const&,data::PriceTierConfig const*)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)#1}::operator();
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116348;
  *(_DWORD *)(v4 + 32) = retcode;
  common::milog::MiLogStream::create(
    &v14,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/recharge/player_recharge_comp.cpp",
    "operator()",
    2561);
  v7 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(&v14, (const char (*)[9])"retcode:");
  v8 = common::milog::MiLogStream::operator<<<common::minet::http_client::HttpRetcode,(common::minet::http_client::HttpRetcode*)0>(
         v7,
         (const common::minet::http_client::HttpRetcode *)(v4 + 32));
  v9 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v8, (const char (*)[15])" request.body:");
  v10 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, &http_req->body);
  v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v10, (const char (*)[16])" response.body:");
  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v11, &http_rsp->body);
  common::milog::MiLogStream::~MiLogStream(&v14);
  if ( v15 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};
