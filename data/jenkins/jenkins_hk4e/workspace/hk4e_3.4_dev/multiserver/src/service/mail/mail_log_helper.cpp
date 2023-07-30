// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/service/mail/mail_log_helper.cpp

// Line 23: range 000000000DE8F356-000000000DE8F98B
int32_t __cdecl MailLogHelper::log(
        uint32_t uid,
        const proto::MailRedisData *mail,
        proto_log::MailOpType op_type,
        proto_log::MailOpReason op_reason)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  unsigned __int64 v6; // r13
  std::__shared_ptr_access<proto_log::MailLogBodyCommon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<proto_log::MailLogBodyCommon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<proto_log::MailLogBodyCommon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<proto_log::MailLogBodyCommon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // r14
  google::protobuf::uint32 v11; // eax
  std::__shared_ptr_access<proto_log::MailLogBodyCommon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // r14
  const std::string *v13; // rax
  std::__shared_ptr_access<proto_log::MailLogBodyCommon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // r14
  const std::string *v15; // rax
  std::__shared_ptr_access<proto_log::MailLogBodyCommon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // r14
  const std::string *v17; // rax
  std::__shared_ptr_access<proto_log::MailLogBodyCommon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // r14
  google::protobuf::uint32 v19; // eax
  std::__shared_ptr_access<proto_log::MailLogBodyCommon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // r14
  google::protobuf::uint32 v21; // eax
  std::__shared_ptr_access<proto_log::MailLogBodyCommon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  google::protobuf::uint32 v23; // eax
  google::protobuf::uint32 v24; // eax
  google::protobuf::uint32 v25; // eax
  google::protobuf::uint32 v26; // eax
  std::__shared_ptr_access<proto_log::MailLogBodyCommon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // r14
  google::protobuf::uint32 v28; // eax
  std::__shared_ptr_access<proto_log::MailLogBodyCommon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // r14
  google::protobuf::uint32 v30; // eax
  std::__shared_ptr_access<proto_log::MailLogBodyCommon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v31; // rax
  std::string *v32; // rax
  std::__shared_ptr_access<proto_log::MailLogBodyCommon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v33; // r14
  google::protobuf::uint32 v34; // eax
  std::__shared_ptr_access<proto_log::MailLogBodyCommon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v35; // r14
  google::protobuf::uint32 v36; // eax
  std::__shared_ptr_access<proto_log::MailLogBodyCommon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v37; // r14
  google::protobuf::uint32 v38; // eax
  std::__shared_ptr_access<proto_log::MailLogBodyCommon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v39; // r14
  const std::string *v40; // rax
  std::__shared_ptr_access<proto_log::MailLogBodyCommon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v41; // r14
  bool v42; // al
  std::__shared_ptr_access<proto_log::MailLogBodyCommon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v43; // r14
  bool is_attachment_got; // al
  std::__shared_ptr_access<proto_log::MailLogBodyCommon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v45; // r14
  google::protobuf::uint32 v46; // eax
  std::__shared_ptr_access<proto_log::MailLogBodyCommon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v47; // r14
  google::protobuf::uint32 v48; // eax
  int32_t result; // eax
  google::protobuf::RepeatedPtrField<proto::ItemParamBin>::const_iterator __for_begin; // [rsp+20h] [rbp-C0h] BYREF
  google::protobuf::RepeatedPtrField<proto::ItemParamBin>::const_iterator __for_end; // [rsp+28h] [rbp-B8h] BYREF
  const proto::MailBin *mail_bin; // [rsp+30h] [rbp-B0h]
  const google::protobuf::RepeatedPtrField<proto::ItemParamBin> *__for_range; // [rsp+38h] [rbp-A8h]
  const google::protobuf::RepeatedPtrField<std::string > *__for_range_0; // [rsp+40h] [rbp-A0h]
  const std::string *arg; // [rsp+48h] [rbp-98h]
  const proto::ItemParamBin *item_param_bin; // [rsp+50h] [rbp-90h]
  proto_log::MailItem *mail_item; // [rsp+58h] [rbp-88h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+60h] [rbp-80h] BYREF
  char v61[112]; // [rsp+70h] [rbp-70h] BYREF

  v4 = (unsigned __int64)v61;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 10 log_ptr:25";
  *(_QWORD *)(v4 + 16) = MailLogHelper::log;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  mail_bin = proto::MailRedisData::mail_bin(mail);
  common::tools::perf::make_shared<proto_log::MailLogBodyCommon>();
  v7 = std::__shared_ptr_access<proto_log::MailLogBodyCommon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::MailLogBodyCommon,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
  proto_log::MailLogBodyCommon::set_op_type(v7, op_type);
  v8 = std::__shared_ptr_access<proto_log::MailLogBodyCommon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::MailLogBodyCommon,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
  proto_log::MailLogBodyCommon::set_op_reason(v8, op_reason);
  v9 = std::__shared_ptr_access<proto_log::MailLogBodyCommon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::MailLogBodyCommon,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
  proto_log::MailLogBodyCommon::set_uid(v9, uid);
  v10 = std::__shared_ptr_access<proto_log::MailLogBodyCommon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::MailLogBodyCommon,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
  v11 = proto::MailRedisData::id(mail);
  proto_log::MailLogBodyCommon::set_mail_id(v10, v11);
  v12 = std::__shared_ptr_access<proto_log::MailLogBodyCommon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::MailLogBodyCommon,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
  v13 = proto::MailBin::title[abi:cxx11](mail_bin);
  proto_log::MailLogBodyCommon::set_title(v12, v13);
  v14 = std::__shared_ptr_access<proto_log::MailLogBodyCommon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::MailLogBodyCommon,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
  v15 = proto::MailBin::content[abi:cxx11](mail_bin);
  proto_log::MailLogBodyCommon::set_content(v14, v15);
  v16 = std::__shared_ptr_access<proto_log::MailLogBodyCommon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::MailLogBodyCommon,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
  v17 = proto::MailBin::sender[abi:cxx11](mail_bin);
  proto_log::MailLogBodyCommon::set_sender(v16, v17);
  v18 = std::__shared_ptr_access<proto_log::MailLogBodyCommon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::MailLogBodyCommon,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
  v19 = proto::MailBin::send_time(mail_bin);
  proto_log::MailLogBodyCommon::set_send_time(v18, v19);
  v20 = std::__shared_ptr_access<proto_log::MailLogBodyCommon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::MailLogBodyCommon,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
  v21 = proto::MailBin::expire_time(mail_bin);
  proto_log::MailLogBodyCommon::set_expire_time(v20, v21);
  __for_range = proto::MailBin::item_param_list(mail_bin);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::ItemParamBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::ItemParamBin>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::ItemParamBin const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    item_param_bin = google::protobuf::internal::RepeatedPtrIterator<proto::ItemParamBin const>::operator*(&__for_begin);
    v22 = std::__shared_ptr_access<proto_log::MailLogBodyCommon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::MailLogBodyCommon,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
    mail_item = proto_log::MailLogBodyCommon::add_item_list(v22);
    v23 = proto::ItemParamBin::item_id(item_param_bin);
    proto_log::MailItem::set_item_id(mail_item, v23);
    v24 = proto::ItemParamBin::count(item_param_bin);
    proto_log::MailItem::set_item_count(mail_item, v24);
    v25 = proto::ItemParamBin::level(item_param_bin);
    proto_log::MailItem::set_level(mail_item, v25);
    v26 = proto::ItemParamBin::promote_level(item_param_bin);
    proto_log::MailItem::set_promote_level(mail_item, v26);
    google::protobuf::internal::RepeatedPtrIterator<proto::ItemParamBin const>::operator++(&__for_begin);
  }
  v27 = std::__shared_ptr_access<proto_log::MailLogBodyCommon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::MailLogBodyCommon,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
  v28 = proto::MailBin::importance(mail_bin);
  proto_log::MailLogBodyCommon::set_importance(v27, v28);
  v29 = std::__shared_ptr_access<proto_log::MailLogBodyCommon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::MailLogBodyCommon,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
  v30 = proto::MailBin::config_id(mail_bin);
  proto_log::MailLogBodyCommon::set_config_id(v29, v30);
  __for_range_0 = proto::MailBin::argument_list[abi:cxx11](mail_bin);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<std::string>::begin(__for_range_0).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<std::string>::end(__for_range_0).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<std::string const>::operator!=(
            (const google::protobuf::internal::RepeatedPtrIterator<const std::string > *const)&__for_begin,
            (const google::protobuf::internal::RepeatedPtrIterator<const std::string >::iterator *)&__for_end) )
  {
    arg = google::protobuf::internal::RepeatedPtrIterator<std::string const>::operator*((const google::protobuf::internal::RepeatedPtrIterator<const std::string > *const)&__for_begin);
    v31 = std::__shared_ptr_access<proto_log::MailLogBodyCommon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::MailLogBodyCommon,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
    v32 = proto_log::MailLogBodyCommon::add_argument_list[abi:cxx11](v31);
    std::string::operator=(v32, arg);
    google::protobuf::internal::RepeatedPtrIterator<std::string const>::operator++((google::protobuf::internal::RepeatedPtrIterator<const std::string > *const)&__for_begin);
  }
  v33 = std::__shared_ptr_access<proto_log::MailLogBodyCommon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::MailLogBodyCommon,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
  v34 = proto::MailBin::reason_type(mail_bin);
  proto_log::MailLogBodyCommon::set_reason_type(v33, v34);
  v35 = std::__shared_ptr_access<proto_log::MailLogBodyCommon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::MailLogBodyCommon,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
  v36 = proto::MailBin::item_limit_type(mail_bin);
  proto_log::MailLogBodyCommon::set_item_limit_type(v35, v36);
  v37 = std::__shared_ptr_access<proto_log::MailLogBodyCommon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::MailLogBodyCommon,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
  v38 = proto::MailBin::source_type(mail_bin);
  proto_log::MailLogBodyCommon::set_source_type(v37, v38);
  v39 = std::__shared_ptr_access<proto_log::MailLogBodyCommon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::MailLogBodyCommon,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
  v40 = proto::MailBin::tag[abi:cxx11](mail_bin);
  proto_log::MailLogBodyCommon::set_tag(v39, v40);
  v41 = std::__shared_ptr_access<proto_log::MailLogBodyCommon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::MailLogBodyCommon,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
  v42 = proto::MailRedisData::is_read(mail);
  proto_log::MailLogBodyCommon::set_is_read(v41, v42);
  v43 = std::__shared_ptr_access<proto_log::MailLogBodyCommon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::MailLogBodyCommon,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
  is_attachment_got = proto::MailRedisData::is_attachment_got(mail);
  proto_log::MailLogBodyCommon::set_is_attachment_got(v43, is_attachment_got);
  v45 = std::__shared_ptr_access<proto_log::MailLogBodyCommon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::MailLogBodyCommon,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
  v46 = proto::MailBin::importance(mail_bin);
  proto_log::MailLogBodyCommon::set_is_star(v45, v46 != 0);
  v47 = std::__shared_ptr_access<proto_log::MailLogBodyCommon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::MailLogBodyCommon,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
  v48 = proto::MailBin::collect_state(mail_bin);
  proto_log::MailLogBodyCommon::set_collect_state(v47, v48);
  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::MailLogBodyCommon,void>(
    &p_body_ptr,
    (const std::shared_ptr<proto_log::MailLogBodyCommon> *)(v4 + 32));
  MailLogHelper::printStatLog(&p_body_ptr);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
  std::shared_ptr<proto_log::MailLogBodyCommon>::~shared_ptr((std::shared_ptr<proto_log::MailLogBodyCommon> *const)(v4 + 32));
  result = 0;
  if ( v61 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 68: range 000000000DE8F98C-000000000DE8FE8B
int32_t __cdecl MailLogHelper::printStatLog(MessagePtr *p_body_ptr)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  int32_t v4; // r14d
  common::milog::MiLogStream *v6; // rax
  std::__shared_ptr_access<proto_log::MailLogHead,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // r14
  time_t v8; // rax
  std::__shared_ptr_access<proto_log::MailLogHead,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<proto_log::MailLogHead,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // r14
  const std::string *v11; // rax
  MailService *v12; // rax
  int32_t result; // eax
  StatLogMgr *stat_log_mgr_ptr; // [rsp+18h] [rbp-158h]
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-150h] BYREF
  char v16[304]; // [rsp+40h] [rbp-130h] BYREF

  v1 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(256LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "5 32 4 12 action_id:70 48 4 16 sub_action_id:71 64 16 15 head_log_ptr:69 96 32 11 trans_no:72 16"
                        "0 64 11 stat_log:92";
  *(_QWORD *)(v1 + 16) = MailLogHelper::printStatLog;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556924;
  v3[536862722] = -219021312;
  v3[536862724] = -218959118;
  v3[536862727] = -202116109;
  common::tools::perf::make_shared<proto_log::MailLogHead>();
  *(_DWORD *)(v1 + 32) = 0;
  *(_DWORD *)(v1 + 48) = 0;
  std::string::basic_string(v1 + 96);
  if ( StatLogUtils::getContextData((uint32_t *)(v1 + 32), (uint32_t *)(v1 + 48), (std::string *)(v1 + 96)) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/mail/mail_log_helper.cpp",
      "printStatLog",
      75);
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
      &v15,
      (const char (*)[29])"[MAIL] getContextData failed");
    common::milog::MiLogStream::~MiLogStream(&v15);
    v4 = -1;
  }
  else if ( !*(_DWORD *)(v1 + 32) || !proto_log::MailActionType_IsValid(*(_DWORD *)(v1 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/service/mail/mail_log_helper.cpp",
      "printStatLog",
      82);
    v6 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
           &v15,
           (const char (*)[27])"[MAIL] invalid action_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v1 + 32));
    common::milog::MiLogStream::~MiLogStream(&v15);
    v4 = -1;
  }
  else
  {
    v7 = std::__shared_ptr_access<proto_log::MailLogHead,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::MailLogHead,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
    v8 = time(0LL);
    common::tools::TimeUtils::getStrByTime[abi:cxx11]((std::string *)&v15, v8);
    proto_log::MailLogHead::set_time(v7, (std::string *)&v15);
    std::string::~string(&v15);
    v9 = std::__shared_ptr_access<proto_log::MailLogHead,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::MailLogHead,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
    proto_log::MailLogHead::set_action_id(v9, *(_DWORD *)(v1 + 32));
    v10 = std::__shared_ptr_access<proto_log::MailLogHead,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::MailLogHead,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
    v11 = proto_log::MailActionType_Name[abi:cxx11]((proto_log::MailActionType)*(_DWORD *)(v1 + 32));
    proto_log::MailLogHead::set_action_name(v10, v11);
    *(_QWORD *)(v1 + 160) = 0LL;
    *(_QWORD *)(v1 + 168) = 0LL;
    *(_QWORD *)(v1 + 176) = 0LL;
    *(_QWORD *)(v1 + 184) = 0LL;
    *(_QWORD *)(v1 + 192) = 0LL;
    *(_QWORD *)(v1 + 200) = 0LL;
    *(_QWORD *)(v1 + 208) = 0LL;
    *(_QWORD *)(v1 + 216) = 0LL;
    std::shared_ptr<google::protobuf::Message>::operator=<proto_log::MailLogHead>(
      (std::shared_ptr<google::protobuf::Message> *const)(v1 + 160),
      (const std::shared_ptr<proto_log::MailLogHead> *)(v1 + 64));
    std::shared_ptr<google::protobuf::Message>::operator=(
      (std::shared_ptr<google::protobuf::Message> *const)(v1 + 192),
      p_body_ptr);
    v12 = ServiceBox::findService<MailService>();
    stat_log_mgr_ptr = ServiceBase::findStatLogMgr(v12, 0x16u);
    if ( stat_log_mgr_ptr )
    {
      StatLogMgr::pushStatLog(stat_log_mgr_ptr, (const StatLog *)(v1 + 160));
      v4 = 0;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/service/mail/mail_log_helper.cpp",
        "printStatLog",
        99);
      common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v15, (const char (*)[20])"findStatLogMgr fail");
      common::milog::MiLogStream::~MiLogStream(&v15);
      v4 = -1;
    }
    StatLog::~StatLog((StatLog *const)(v1 + 160));
  }
  std::string::~string((void *)(v1 + 96));
  std::shared_ptr<proto_log::MailLogHead>::~shared_ptr((std::shared_ptr<proto_log::MailLogHead> *const)(v1 + 64));
  result = v4;
  if ( v16 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF801C) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};
