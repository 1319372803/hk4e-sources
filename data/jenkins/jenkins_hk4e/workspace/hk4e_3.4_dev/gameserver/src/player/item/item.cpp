// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/item/item.cpp

// Line 22: range 0000000017556620-0000000017556790
common::milog::MiLogStream *__cdecl operator<<(common::milog::MiLogStream *stream, const ActionReason *action_reason)
{
  common::milog::MiLogStream *v2; // rbx
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v4; // rbx
  const std::string *v5; // rax
  common::milog::MiLogStream *v6; // rax
  char *val; // [rsp+18h] [rbp-18h] BYREF

  v2 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
         stream,
         (const char (*)[26])"action_reason[limit_type:");
  if ( *(_BYTE *)(((unsigned __int64)&action_reason->limit_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)action_reason + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&action_reason->limit_type >> 3)
                                                                + 0x7FFF8000) )
  {
    __asan_report_load4(&action_reason->limit_type);
  }
  val = (char *)data::enumValToStr(action_reason->limit_type);
  v3 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v2, (const char *const *)&val);
  v4 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v3, (const char (*)[14])",reason_type:");
  if ( *(_BYTE *)(((unsigned __int64)action_reason >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)action_reason & 7) + 3) >= *(_BYTE *)(((unsigned __int64)action_reason >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(action_reason);
  }
  v5 = proto::ActionReasonType_Name[abi:cxx11](action_reason->reason_type);
  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v4, v5);
  if ( *(_BYTE *)(((unsigned __int64)&action_reason->quest_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)action_reason + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&action_reason->quest_id >> 3)
                                                                + 0x7FFF8000) )
  {
    __asan_report_load4(&action_reason->quest_id);
  }
  if ( action_reason->quest_id )
  {
    v6 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(stream, (const char (*)[11])",quest_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &action_reason->quest_id);
  }
  common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(stream, (const char (*)[2])"]");
  return stream;
};

// Line 31: range 0000000017556791-0000000017556820
common::milog::MiLogStream *__cdecl operator<<(
        common::milog::MiLogStream *stream,
        const SubItemReason *sub_item_reason)
{
  common::milog::MiLogStream *v2; // rbx
  const std::string *v3; // rax
  common::milog::MiLogStream *v4; // rax

  v2 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
         stream,
         (const char (*)[29])"sub_item_reason[reason_type:");
  if ( *(_BYTE *)(((unsigned __int64)sub_item_reason >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)sub_item_reason & 7) + 3) >= *(_BYTE *)(((unsigned __int64)sub_item_reason >> 3)
                                                                      + 0x7FFF8000) )
  {
    __asan_report_load4(sub_item_reason);
  }
  v3 = proto::ActionReasonType_Name[abi:cxx11](sub_item_reason->reason_type);
  v4 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v2, v3);
  common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v4, (const char (*)[2])"]");
  return stream;
};

// Line 38: range 0000000017556821-0000000017556971
common::milog::MiLogStream *__cdecl operator<<(common::milog::MiLogStream *stream, const ItemParam *item_param)
{
  common::milog::MiLogStream *v2; // rdx
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax

  v2 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(stream, (const char (*)[10])"[item_id:");
  v3 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &item_param->item_id);
  v4 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v3, (const char (*)[8])",count:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &item_param->count);
  if ( *(_BYTE *)(((unsigned __int64)&item_param->level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)item_param + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&item_param->level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&item_param->level);
  }
  if ( item_param->level )
  {
    v5 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(stream, (const char (*)[8])",level:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &item_param->level);
  }
  if ( *(_BYTE *)(((unsigned __int64)&item_param->promote_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)item_param + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&item_param->promote_level >> 3)
                                                              + 0x7FFF8000) )
  {
    __asan_report_load4(&item_param->promote_level);
  }
  if ( item_param->promote_level )
  {
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(stream, (const char (*)[16])",promote_level:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &item_param->promote_level);
  }
  common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(stream, (const char (*)[2])"]");
  return stream;
};

// Line 47: range 0000000017556972-0000000017556AC3
void __cdecl ItemParam::fromBin(ItemParam *const this, const proto::ItemParamBin *proto_bin)
{
  uint32_t v2; // ecx
  char v3; // dl
  __int64 v4; // rdx
  uint32_t v5; // ecx
  char v6; // dl
  __int64 v7; // rdx
  uint32_t v8; // ecx
  char v9; // dl
  __int64 v10; // rdx
  uint32_t v11; // ecx
  char v12; // dl
  __int64 v13; // rdx
  const proto::ItemParamBin *proto_bina; // [rsp+0h] [rbp-10h]

  proto_bina = proto_bin;
  v2 = proto::ItemParamBin::item_id(proto_bin);
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  LOBYTE(proto_bin) = v3 != 0;
  v4 = (v3 != 0) & (unsigned __int8)((char)(((unsigned __int8)this & 7) + 3) >= v3);
  if ( (_BYTE)v4 )
    __asan_report_store4(this, proto_bin, v4);
  this->item_id = v2;
  v5 = proto::ItemParamBin::count(proto_bina);
  v6 = *(_BYTE *)(((unsigned __int64)&this->count >> 3) + 0x7FFF8000);
  LOBYTE(proto_bin) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store4(&this->count, proto_bin, v7);
  this->count = v5;
  v8 = proto::ItemParamBin::level(proto_bina);
  v9 = *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000);
  LOBYTE(proto_bin) = v9 != 0;
  v10 = (v9 != 0) & (unsigned __int8)((char)((((_BYTE)this + 8) & 7) + 3) >= v9);
  if ( (_BYTE)v10 )
    __asan_report_store4(&this->level, proto_bin, v10);
  this->level = v8;
  v11 = proto::ItemParamBin::promote_level(proto_bina);
  v12 = *(_BYTE *)(((unsigned __int64)&this->promote_level >> 3) + 0x7FFF8000);
  LOBYTE(proto_bin) = v12 != 0;
  v13 = (v12 != 0) & (unsigned __int8)((char)((((_BYTE)this + 12) & 7) + 3) >= v12);
  if ( (_BYTE)v13 )
    __asan_report_store4(&this->promote_level, proto_bin, v13);
  this->promote_level = v11;
};

// Line 55: range 0000000017556AC4-0000000017556C11
void __cdecl ItemParam::toBin(const ItemParam *const this, proto::ItemParamBin *proto_bin)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  proto::ItemParamBin::set_item_id(proto_bin, this->item_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->count);
  }
  proto::ItemParamBin::set_count(proto_bin, this->count);
  if ( *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->level);
  }
  proto::ItemParamBin::set_level(proto_bin, this->level);
  if ( *(_BYTE *)(((unsigned __int64)&this->promote_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->promote_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->promote_level);
  }
  proto::ItemParamBin::set_promote_level(proto_bin, this->promote_level);
};

// Line 63: range 0000000017556C12-0000000017556D63
void __cdecl ItemParam::fromEquipParam(ItemParam *const this, const proto::EquipParam *proto)
{
  uint32_t v2; // ecx
  char v3; // dl
  __int64 v4; // rdx
  uint32_t v5; // ecx
  char v6; // dl
  __int64 v7; // rdx
  uint32_t v8; // ecx
  char v9; // dl
  __int64 v10; // rdx
  uint32_t v11; // ecx
  char v12; // dl
  __int64 v13; // rdx
  const proto::EquipParam *protoa; // [rsp+0h] [rbp-10h]

  protoa = proto;
  v2 = proto::EquipParam::item_id(proto);
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  LOBYTE(proto) = v3 != 0;
  v4 = (v3 != 0) & (unsigned __int8)((char)(((unsigned __int8)this & 7) + 3) >= v3);
  if ( (_BYTE)v4 )
    __asan_report_store4(this, proto, v4);
  this->item_id = v2;
  v5 = proto::EquipParam::item_num(protoa);
  v6 = *(_BYTE *)(((unsigned __int64)&this->count >> 3) + 0x7FFF8000);
  LOBYTE(proto) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store4(&this->count, proto, v7);
  this->count = v5;
  v8 = proto::EquipParam::item_level(protoa);
  v9 = *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000);
  LOBYTE(proto) = v9 != 0;
  v10 = (v9 != 0) & (unsigned __int8)((char)((((_BYTE)this + 8) & 7) + 3) >= v9);
  if ( (_BYTE)v10 )
    __asan_report_store4(&this->level, proto, v10);
  this->level = v8;
  v11 = proto::EquipParam::promote_level(protoa);
  v12 = *(_BYTE *)(((unsigned __int64)&this->promote_level >> 3) + 0x7FFF8000);
  LOBYTE(proto) = v12 != 0;
  v13 = (v12 != 0) & (unsigned __int8)((char)((((_BYTE)this + 12) & 7) + 3) >= v12);
  if ( (_BYTE)v13 )
    __asan_report_store4(&this->promote_level, proto, v13);
  this->promote_level = v11;
};

// Line 71: range 0000000017556D64-0000000017556EB1
void __cdecl ItemParam::toEquipParam(const ItemParam *const this, proto::EquipParam *proto)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  proto::EquipParam::set_item_id(proto, this->item_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->count);
  }
  proto::EquipParam::set_item_num(proto, this->count);
  if ( *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->level);
  }
  proto::EquipParam::set_item_level(proto, this->level);
  if ( *(_BYTE *)(((unsigned __int64)&this->promote_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->promote_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->promote_level);
  }
  proto::EquipParam::set_promote_level(proto, this->promote_level);
};

// Line 79: range 0000000017556EB2-00000000175575AD
void __cdecl ItemParam::toMailItem(const ItemParam *const this, proto::MailItem *proto)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  MaterialExcelConfigMgr *p_material_config_mgr; // rcx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  int expire_type; // eax
  proto::MaterialDeleteInfo_CountDownDelete *v8; // rax
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v9; // rax
  uint32_t *v10; // rdx
  uint32_t count; // r14d
  char *v12; // rsi
  unsigned int *v13; // rax
  uint32_t *v14; // rdx
  char v15; // cl
  proto::MaterialDeleteInfo_CountDownDelete *v16; // rax
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v17; // rax
  uint32_t *v18; // rdx
  proto::MaterialDeleteInfo_DateTimeDelete *v19; // rax
  proto::MaterialDeleteInfo_DelayWeekCountDownDelete *v20; // rax
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v21; // rax
  unsigned int *v22; // rdx
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v23; // rax
  unsigned int *v24; // rdx
  unsigned int v25; // r14d
  __int64 WeekTime; // rax
  unsigned int *v27; // rax
  unsigned int v28; // esi
  proto::MaterialDeleteInfo_DelayWeekCountDownDelete *v29; // rax
  proto::MaterialDeleteInfo_DelayWeekCountDownDelete *v30; // rax
  proto::EquipParam *v31; // rdx
  uint32_t time; // [rsp+14h] [rbp-BCh]
  uint32_t time_0; // [rsp+18h] [rbp-B8h]
  unsigned int delay_week; // [rsp+1Ch] [rbp-B4h]
  unsigned int config_time; // [rsp+20h] [rbp-B0h]
  uint32_t now; // [rsp+24h] [rbp-ACh]
  uint32_t time_offset; // [rsp+28h] [rbp-A8h]
  unsigned int count_down_start_time; // [rsp+2Ch] [rbp-A4h]
  const data::MaterialDeleteExcelConfig *delete_config_ptr; // [rsp+30h] [rbp-A0h]
  proto::MaterialDeleteInfo *delete_info; // [rsp+38h] [rbp-98h]
  google::protobuf::Map<unsigned int,unsigned int> *proto_map_0; // [rsp+40h] [rbp-90h]
  google::protobuf::Map<unsigned int,unsigned int> *proto_map; // [rsp+48h] [rbp-88h]
  std::shared_ptr<Config> v44; // [rsp+50h] [rbp-80h] BYREF
  char v45[112]; // [rsp+60h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v45;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 15 expire_time:114";
  *(_QWORD *)(v2 + 16) = ItemParam::toMailItem;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v44);
  p_material_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v44)->design_config.txt_config_mgr.material_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  delete_config_ptr = data::MaterialExcelConfigMgrBase::findMaterialDeleteExcelConfig(
                        p_material_config_mgr,
                        this->item_id);
  std::shared_ptr<Config>::~shared_ptr(&v44);
  now = common::tools::TimeUtils::getNow();
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v44);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v44);
  time_offset = ConstValueExcelConfigMgr::getTimeOffsetSec(&v6->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v44);
  if ( delete_config_ptr )
  {
    delete_info = proto::MailItem::mutable_delete_info(proto);
    proto::MaterialDeleteInfo::set_has_delete_config(delete_info, 1);
    if ( *(_BYTE *)(((unsigned __int64)&delete_config_ptr->expire_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)delete_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&delete_config_ptr->expire_type >> 3)
                                                                       + 0x7FFF8000) )
    {
      __asan_report_load4(&delete_config_ptr->expire_type);
    }
    expire_type = delete_config_ptr->expire_type;
    if ( expire_type == 3 )
    {
      v20 = proto::MaterialDeleteInfo::mutable_delay_week_count_down_delete(delete_info);
      proto_map_0 = proto::MaterialDeleteInfo_DelayWeekCountDownDelete::mutable_delete_time_num_map(v20);
      *(_DWORD *)(v2 + 32) = 0;
      delay_week = 0;
      config_time = 0;
      if ( std::vector<unsigned int>::size(&delete_config_ptr->expire_time_param_vec) > 1 )
      {
        v21 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                    &delete_config_ptr->expire_time_param_vec,
                                                                                                    0LL);
        v22 = v21;
        if ( *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v21 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v21);
        }
        delay_week = *v22;
        v23 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                    &delete_config_ptr->expire_time_param_vec,
                                                                                                    1uLL);
        v24 = v23;
        if ( *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v23 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v23);
        }
        config_time = *v24;
        v25 = SAFE_MULTIPLY<int,unsigned int>(604800, delay_week);
        WeekTime = common::tools::TimeUtils::getWeekTime(now, time_offset);
        count_down_start_time = SAFE_ADD<long,unsigned int>(WeekTime, v25);
        *(_DWORD *)(v2 + 32) = SAFE_ADD<unsigned int,unsigned int>(config_time, count_down_start_time);
      }
      v27 = google::protobuf::Map<unsigned int,unsigned int>::operator[](
              proto_map_0,
              (const google::protobuf::Map<unsigned int,unsigned int>::key_type *)(v2 + 32));
      if ( *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v27 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v27);
      }
      v28 = *v27;
      if ( *(_BYTE *)(((unsigned __int64)&this->count >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->count >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->count);
      }
      *v27 = v28 + this->count;
      v29 = proto::MaterialDeleteInfo::mutable_delay_week_count_down_delete(delete_info);
      proto::MaterialDeleteInfo_DelayWeekCountDownDelete::set_config_delay_week(v29, delay_week);
      v30 = proto::MaterialDeleteInfo::mutable_delay_week_count_down_delete(delete_info);
      proto::MaterialDeleteInfo_DelayWeekCountDownDelete::set_config_count_down_time(v30, config_time);
    }
    else if ( expire_type <= 3 )
    {
      if ( expire_type == 1 )
      {
        v8 = proto::MaterialDeleteInfo::mutable_count_down_delete(delete_info);
        proto_map = proto::MaterialDeleteInfo_CountDownDelete::mutable_delete_time_num_map(v8);
        time = 0;
        if ( std::vector<unsigned int>::size(&delete_config_ptr->expire_time_param_vec) )
        {
          v9 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                     &delete_config_ptr->expire_time_param_vec,
                                                                                                     0LL);
          v10 = v9;
          if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v9);
          }
          time = *v10;
        }
        if ( *(_BYTE *)(((unsigned __int64)&this->count >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->count >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&this->count);
        }
        count = this->count;
        *(_DWORD *)(v2 + 32) = time + now;
        v12 = (char *)(v2 + 32);
        v13 = google::protobuf::Map<unsigned int,unsigned int>::operator[](
                proto_map,
                (const google::protobuf::Map<unsigned int,unsigned int>::key_type *)(v2 + 32));
        v14 = v13;
        v15 = *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000);
        if ( v15 != 0 && (char)(((unsigned __int8)v13 & 7) + 3) >= v15 )
        {
          LOBYTE(v12) = v15 != 0;
          __asan_report_store4(v13, v12, v13);
        }
        *v14 = count;
        v16 = proto::MaterialDeleteInfo::mutable_count_down_delete(delete_info);
        proto::MaterialDeleteInfo_CountDownDelete::set_config_count_down_time(v16, time);
      }
      else if ( expire_type == 2 )
      {
        time_0 = 0;
        if ( std::vector<unsigned int>::size(&delete_config_ptr->expire_time_param_vec) )
        {
          v17 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](&delete_config_ptr->expire_time_param_vec, 0LL);
          v18 = v17;
          if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v17 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v17);
          }
          time_0 = *v18;
        }
        v19 = proto::MaterialDeleteInfo::mutable_date_delete(delete_info);
        proto::MaterialDeleteInfo_DateTimeDelete::set_delete_time(v19, time_0);
      }
    }
  }
  v31 = proto::MailItem::mutable_equip_param(proto);
  ItemParam::toEquipParam(this, v31);
  if ( v45 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 138: range 00000000175575AE-000000001755765F
int32_t __cdecl ItemParam::toClient(const ItemParam *const this, proto::ItemParam *proto)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  proto::ItemParam::set_item_id(proto, this->item_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->count);
  }
  proto::ItemParam::set_count(proto, this->count);
  return 0;
};

// Line 145: range 0000000017557660-000000001755770D
void __cdecl ItemParam::toItemLog(const ItemParam *const this, proto_log::ItemLog *item_log)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  proto_log::ItemLog::set_item_id(item_log, this->item_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->count);
  }
  proto_log::ItemLog::set_count(item_log, this->count);
};

// Line 151: range 000000001755770E-000000001755781D
void __cdecl ItemParam::fromIdCountConfig(ItemParam *const this, const data::IdCountConfig *id_count_config)
{
  uint32_t id; // ecx
  char v3; // dl
  __int64 v4; // rdx
  __int64 v5; // rsi
  uint32_t count; // ecx
  char v7; // dl
  __int64 v8; // rdx
  const data::IdCountConfig *id_count_configa; // [rsp+0h] [rbp-10h]

  id_count_configa = id_count_config;
  if ( *(_BYTE *)(((unsigned __int64)&id_count_config->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&id_count_config->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&id_count_config->id);
  }
  id = id_count_config->id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  LOBYTE(id_count_config) = v3 != 0;
  v4 = (v3 != 0) & (unsigned __int8)((char)(((unsigned __int8)this & 7) + 3) >= v3);
  if ( (_BYTE)v4 )
    __asan_report_store4(this, id_count_config, v4);
  this->item_id = id;
  v5 = (((_BYTE)id_count_configa + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&id_count_configa->count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)id_count_configa + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&id_count_configa->count >> 3)
                                                                    + 0x7FFF8000) )
  {
    __asan_report_load4(&id_count_configa->count);
  }
  count = id_count_configa->count;
  v7 = *(_BYTE *)(((unsigned __int64)&this->count >> 3) + 0x7FFF8000);
  LOBYTE(v5) = v7 != 0;
  v8 = (v7 != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= v7);
  if ( (_BYTE)v8 )
    __asan_report_store4(&this->count, v5, v8);
  this->count = count;
};

// Line 157: range 000000001755781E-0000000017557B0B
std::vector<ItemParam> *__cdecl ItemParam::vecFromItemCountMap(
        std::vector<ItemParam> *retstr,
        const std::map<unsigned int,unsigned int> *item_count_map)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  std::map<unsigned int,unsigned int>::size_type v5; // rdx
  std::pair<unsigned int const,unsigned int> *v6; // rax
  std::pair<unsigned int const,unsigned int> *v7; // rdx
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *v8; // rax
  std::map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+10h] [rbp-90h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+18h] [rbp-88h] BYREF
  const std::map<unsigned int,unsigned int> *__for_range; // [rsp+20h] [rbp-80h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *item_id; // [rsp+28h] [rbp-78h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *item_count; // [rsp+30h] [rbp-70h]
  std::pair<unsigned int const,unsigned int> __in; // [rsp+38h] [rbp-68h] BYREF
  char v16[96]; // [rsp+40h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 item_param:164";
  *(_QWORD *)(v2 + 16) = ItemParam::vecFromItemCountMap;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::vector<ItemParam>::vector(retstr);
  v5 = std::map<unsigned int,unsigned int>::size(item_count_map);
  std::vector<ItemParam>::reserve(retstr, v5);
  __for_range = item_count_map;
  __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(item_count_map)._M_node;
  __for_end._M_node = std::map<unsigned int,unsigned int>::end(item_count_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v6 = (std::pair<unsigned int const,unsigned int> *)std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
    v7 = v6;
    if ( ((unsigned __int8)v6 & 7) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&v6->second + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v6 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v6->second + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load_n(v6, 8LL);
    }
    __in = *v7;
    item_id = std::get<0ul,unsigned int const,unsigned int>(&__in);
    v8 = std::get<1ul,unsigned int const,unsigned int>(&__in);
    item_count = v8;
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v8);
    }
    if ( *item_count )
    {
      *(_DWORD *)(v2 + 32) = 0;
      *(_DWORD *)(v2 + 36) = 0;
      *(_DWORD *)(v2 + 40) = 0;
      *(_DWORD *)(v2 + 44) = 0;
      if ( *(_BYTE *)(((unsigned __int64)item_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)item_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)item_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(item_id);
      }
      *(_DWORD *)(v2 + 32) = *item_id;
      *(_DWORD *)(v2 + 36) = *item_count;
      std::vector<ItemParam>::push_back(retstr, (const std::vector<ItemParam>::value_type *)(v2 + 32));
    }
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
  }
  if ( v16 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};

// Line 174: range 0000000017557B0C-0000000017557C9F
std::map<unsigned int,unsigned int> *__cdecl ItemParam::vecToItemCountMap(
        std::map<unsigned int,unsigned int> *retstr,
        const std::vector<ItemParam> *item_param_vec)
{
  uint32_t *p_count; // rax
  unsigned int count; // ebx
  std::map<unsigned int,unsigned int>::mapped_type *v4; // rax
  unsigned int *v5; // rdx
  SelectType v6; // ebx
  const ItemParam *v7; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v8; // rax
  SelectType *v9; // rdx
  char v10; // cl
  std::vector<ItemParam>::const_iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::vector<ItemParam>::const_iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  const std::vector<ItemParam> *__for_range; // [rsp+20h] [rbp-20h]
  const ItemParam *item_param; // [rsp+28h] [rbp-18h]

  std::map<unsigned int,unsigned int>::map(retstr);
  __for_range = item_param_vec;
  __for_begin._M_current = std::vector<ItemParam>::begin(item_param_vec)._M_current;
  __for_end._M_current = std::vector<ItemParam>::end(item_param_vec)._M_current;
  while ( __gnu_cxx::operator!=<ItemParam const*,std::vector<ItemParam>>(&__for_begin, &__for_end) )
  {
    item_param = __gnu_cxx::__normal_iterator<ItemParam const*,std::vector<ItemParam>>::operator*(&__for_begin);
    p_count = &item_param->count;
    if ( *(_BYTE *)(((unsigned __int64)p_count >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_count >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_count);
    }
    count = item_param->count;
    v4 = std::map<unsigned int,unsigned int>::operator[](retstr, &item_param->item_id);
    v5 = v4;
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v4);
    }
    v6 = SAFE_ADD<unsigned int,unsigned int>(*v5, count);
    v7 = item_param;
    v8 = std::map<unsigned int,unsigned int>::operator[](retstr, &item_param->item_id);
    v9 = v8;
    v10 = *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000);
    if ( v10 != 0 && (char)(((unsigned __int8)v8 & 7) + 3) >= v10 )
    {
      LOBYTE(v7) = v10 != 0;
      __asan_report_store4(v8, v7, v8);
    }
    *v9 = v6;
    __gnu_cxx::__normal_iterator<ItemParam const*,std::vector<ItemParam>>::operator++(&__for_begin);
  }
  return retstr;
};

// Line 184: range 0000000017557CA0-0000000017557E07
void __cdecl ItemParam::addVecToItemCountMap(
        const std::vector<ItemParam> *item_param_vec,
        std::map<unsigned int,unsigned int> *item_count_map)
{
  uint32_t *p_count; // rax
  unsigned int count; // ebx
  std::map<unsigned int,unsigned int>::mapped_type *v4; // rax
  unsigned int *v5; // rdx
  SelectType v6; // ebx
  const ItemParam *v7; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v8; // rax
  SelectType *v9; // rdx
  char v10; // cl
  std::vector<ItemParam>::const_iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::vector<ItemParam>::const_iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  const std::vector<ItemParam> *__for_range; // [rsp+20h] [rbp-20h]
  const ItemParam *item_param; // [rsp+28h] [rbp-18h]

  __for_range = item_param_vec;
  __for_begin._M_current = std::vector<ItemParam>::begin(item_param_vec)._M_current;
  __for_end._M_current = std::vector<ItemParam>::end(item_param_vec)._M_current;
  while ( __gnu_cxx::operator!=<ItemParam const*,std::vector<ItemParam>>(&__for_begin, &__for_end) )
  {
    item_param = __gnu_cxx::__normal_iterator<ItemParam const*,std::vector<ItemParam>>::operator*(&__for_begin);
    p_count = &item_param->count;
    if ( *(_BYTE *)(((unsigned __int64)p_count >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_count >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_count);
    }
    count = item_param->count;
    v4 = std::map<unsigned int,unsigned int>::operator[](item_count_map, &item_param->item_id);
    v5 = v4;
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v4);
    }
    v6 = SAFE_ADD<unsigned int,unsigned int>(*v5, count);
    v7 = item_param;
    v8 = std::map<unsigned int,unsigned int>::operator[](item_count_map, &item_param->item_id);
    v9 = v8;
    v10 = *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000);
    if ( v10 != 0 && (char)(((unsigned __int8)v8 & 7) + 3) >= v10 )
    {
      LOBYTE(v7) = v10 != 0;
      __asan_report_store4(v8, v7, v8);
    }
    *v9 = v6;
    __gnu_cxx::__normal_iterator<ItemParam const*,std::vector<ItemParam>>::operator++(&__for_begin);
  }
};

// Line 193: range 0000000017557E08-0000000017558094
void __cdecl ItemParam::addVecToItemCountMapAndMcoin(
        const std::vector<ItemParam> *item_param_vec,
        std::map<unsigned int,unsigned int> *item_count_map,
        uint32_t *mcoin_count_ptr)
{
  const ItemParam *v3; // rax
  unsigned int count; // ecx
  uint32_t v5; // ecx
  char v6; // dl
  __int64 v7; // rsi
  __int64 v8; // rdx
  unsigned int v9; // ebx
  std::map<unsigned int,unsigned int>::mapped_type *v10; // rax
  unsigned int *v11; // rdx
  SelectType v12; // ebx
  const ItemParam *v13; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v14; // rax
  SelectType *v15; // rdx
  char v16; // cl
  std::vector<ItemParam>::const_iterator __for_begin; // [rsp+20h] [rbp-30h] BYREF
  std::vector<ItemParam>::const_iterator __for_end; // [rsp+28h] [rbp-28h] BYREF
  const std::vector<ItemParam> *__for_range; // [rsp+30h] [rbp-20h]
  const ItemParam *item_param; // [rsp+38h] [rbp-18h]

  __for_range = item_param_vec;
  __for_begin._M_current = std::vector<ItemParam>::begin(item_param_vec)._M_current;
  __for_end._M_current = std::vector<ItemParam>::end(item_param_vec)._M_current;
  while ( __gnu_cxx::operator!=<ItemParam const*,std::vector<ItemParam>>(&__for_begin, &__for_end) )
  {
    v3 = __gnu_cxx::__normal_iterator<ItemParam const*,std::vector<ItemParam>>::operator*(&__for_begin);
    item_param = v3;
    if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v3);
    }
    if ( item_param->item_id == 203 )
    {
      if ( mcoin_count_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&item_param->count >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)item_param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&item_param->count >> 3)
                                                                   + 0x7FFF8000) )
        {
          __asan_report_load4(&item_param->count);
        }
        count = item_param->count;
        if ( *(_BYTE *)(((unsigned __int64)mcoin_count_ptr >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)mcoin_count_ptr & 7) + 3) >= *(_BYTE *)(((unsigned __int64)mcoin_count_ptr >> 3)
                                                                            + 0x7FFF8000) )
        {
          __asan_report_load4(mcoin_count_ptr);
        }
        v7 = count;
        v5 = SAFE_ADD<unsigned int,unsigned int>(*mcoin_count_ptr, count);
        v6 = *(_BYTE *)(((unsigned __int64)mcoin_count_ptr >> 3) + 0x7FFF8000);
        LOBYTE(v7) = v6 != 0;
        v8 = (v6 != 0) & (unsigned __int8)((char)(((unsigned __int8)mcoin_count_ptr & 7) + 3) >= v6);
        if ( (_BYTE)v8 )
          __asan_report_store4(mcoin_count_ptr, v7, v8);
        *mcoin_count_ptr = v5;
      }
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&item_param->count >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)item_param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&item_param->count >> 3)
                                                                 + 0x7FFF8000) )
      {
        __asan_report_load4(&item_param->count);
      }
      v9 = item_param->count;
      v10 = std::map<unsigned int,unsigned int>::operator[](item_count_map, &item_param->item_id);
      v11 = v10;
      if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v10);
      }
      v12 = SAFE_ADD<unsigned int,unsigned int>(*v11, v9);
      v13 = item_param;
      v14 = std::map<unsigned int,unsigned int>::operator[](item_count_map, &item_param->item_id);
      v15 = v14;
      v16 = *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000);
      if ( v16 != 0 && (char)(((unsigned __int8)v14 & 7) + 3) >= v16 )
      {
        LOBYTE(v13) = v16 != 0;
        __asan_report_store4(v14, v13, v14);
      }
      *v15 = v12;
    }
    __gnu_cxx::__normal_iterator<ItemParam const*,std::vector<ItemParam>>::operator++(&__for_begin);
  }
};

// Line 212: range 0000000017558096-00000000175589B9
std::vector<ItemParam> *__cdecl ItemParam::mapToItemParamVec(
        std::vector<ItemParam> *retstr,
        const std::map<unsigned int,unsigned int> *item_map,
        bool is_player_exp_full)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::pair<unsigned int const,unsigned int> *v7; // rax
  std::pair<unsigned int const,unsigned int> *v8; // rdx
  uint32_t *p_count; // rax
  unsigned int v10; // r14d
  std::map<unsigned int,unsigned int>::mapped_type *v11; // rax
  unsigned int *v12; // rdx
  SelectType v13; // r14d
  const ItemParam *v14; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v15; // rax
  SelectType *v16; // rdx
  char v17; // cl
  int v18; // r14d
  unsigned int v19; // r14d
  std::map<unsigned int,unsigned int>::mapped_type *v20; // rax
  unsigned int *v21; // rdx
  SelectType v22; // r14d
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *v23; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v24; // rax
  SelectType *v25; // rdx
  char v26; // cl
  std::pair<unsigned int const,unsigned int> *v27; // rax
  std::pair<unsigned int const,unsigned int> *v28; // rdx
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *v29; // rax
  proto::VirtualItem value; // [rsp+24h] [rbp-16Ch] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-168h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-160h] BYREF
  std::vector<ItemParam>::iterator __for_begin_0; // [rsp+38h] [rbp-158h] BYREF
  std::vector<ItemParam>::iterator __for_end_0; // [rsp+40h] [rbp-150h] BYREF
  const std::map<unsigned int,unsigned int> *__for_range_1; // [rsp+48h] [rbp-148h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *item_id_0; // [rsp+50h] [rbp-140h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *count_0; // [rsp+58h] [rbp-138h]
  const std::map<unsigned int,unsigned int> *__for_range; // [rsp+60h] [rbp-130h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *item_id; // [rsp+68h] [rbp-128h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *count; // [rsp+70h] [rbp-120h]
  std::vector<ItemParam> *__for_range_0; // [rsp+78h] [rbp-118h]
  const ItemParam *item_param; // [rsp+80h] [rbp-110h]
  std::pair<unsigned int const,unsigned int> __in; // [rsp+88h] [rbp-108h] BYREF
  std::vector<ItemParam>::value_type __x; // [rsp+90h] [rbp-100h] BYREF
  char v47[240]; // [rsp+A0h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v47;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 24 18 item_param_vec:234 112 48 24 transformed_item_map:215";
  *(_QWORD *)(v3 + 16) = ItemParam::mapToItemParamVec;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862722] = -218959360;
  v5[536862723] = 62194;
  v5[536862725] = -202116109;
  if ( is_player_exp_full
    && (value = ITEM_VIRTUAL_PLAYER_EXP,
        common::tools::MiscUtils::isContains<std::map<unsigned int,unsigned int> const,proto::VirtualItem>(
          item_map,
          &value)) )
  {
    std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v3 + 112));
    __for_range = item_map;
    __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(item_map)._M_node;
    __for_end._M_node = std::map<unsigned int,unsigned int>::end(__for_range)._M_node;
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
      item_id = std::get<0ul,unsigned int const,unsigned int>(&__in);
      count = std::get<1ul,unsigned int const,unsigned int>(&__in);
      if ( *(_BYTE *)(((unsigned __int64)item_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)item_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)item_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(item_id);
      }
      if ( *item_id != 102 )
        goto LABEL_31;
      std::vector<ItemParam>::vector((std::vector<ItemParam> *const)(v3 + 48));
      if ( *(_BYTE *)(((unsigned __int64)count >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)count >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(count);
      }
      if ( (unsigned int)PlayerBasicComp::calcExpOverflowTransformItem(*count, (std::vector<ItemParam> *)(v3 + 48)) )
      {
        v18 = 1;
      }
      else
      {
        __for_range_0 = (std::vector<ItemParam> *)(v3 + 48);
        __for_begin_0._M_current = std::vector<ItemParam>::begin((std::vector<ItemParam> *const)(v3 + 48))._M_current;
        __for_end_0._M_current = std::vector<ItemParam>::end(__for_range_0)._M_current;
        while ( __gnu_cxx::operator!=<ItemParam *,std::vector<ItemParam>>(&__for_begin_0, &__for_end_0) )
        {
          item_param = __gnu_cxx::__normal_iterator<ItemParam *,std::vector<ItemParam>>::operator*(&__for_begin_0);
          p_count = &item_param->count;
          if ( *(_BYTE *)(((unsigned __int64)p_count >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)p_count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_count >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(p_count);
          }
          v10 = item_param->count;
          v11 = std::map<unsigned int,unsigned int>::operator[](
                  (std::map<unsigned int,unsigned int> *const)(v3 + 112),
                  &item_param->item_id);
          v12 = v11;
          if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v11);
          }
          v13 = SAFE_ADD<unsigned int,unsigned int>(*v12, v10);
          v14 = item_param;
          v15 = std::map<unsigned int,unsigned int>::operator[](
                  (std::map<unsigned int,unsigned int> *const)(v3 + 112),
                  &item_param->item_id);
          v16 = v15;
          v17 = *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000);
          if ( v17 != 0 && (char)(((unsigned __int8)v15 & 7) + 3) >= v17 )
          {
            LOBYTE(v14) = v17 != 0;
            __asan_report_store4(v15, v14, v15);
          }
          *v16 = v13;
          __gnu_cxx::__normal_iterator<ItemParam *,std::vector<ItemParam>>::operator++(&__for_begin_0);
        }
        v18 = 0;
      }
      std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v3 + 48));
      if ( v18 == 1 )
      {
LABEL_31:
        if ( *(_BYTE *)(((unsigned __int64)count >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)count >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(count);
        }
        v19 = *count;
        v20 = std::map<unsigned int,unsigned int>::operator[](
                (std::map<unsigned int,unsigned int> *const)(v3 + 112),
                item_id);
        v21 = v20;
        if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v20 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v20);
        }
        v22 = SAFE_ADD<unsigned int,unsigned int>(*v21, v19);
        v23 = item_id;
        v24 = std::map<unsigned int,unsigned int>::operator[](
                (std::map<unsigned int,unsigned int> *const)(v3 + 112),
                item_id);
        v25 = v24;
        v26 = *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000);
        if ( v26 != 0 && (char)(((unsigned __int8)v24 & 7) + 3) >= v26 )
        {
          LOBYTE(v23) = v26 != 0;
          __asan_report_store4(v24, v23, v24);
        }
        *v25 = v22;
      }
      std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
    }
    if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&retstr->_M_impl._M_end_of_storage + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)retstr + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_M_impl._M_end_of_storage + 7) >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_store_n(retstr, 24LL);
    }
    ItemParam::mapToItemParamVec(retstr, (const std::map<unsigned int,unsigned int> *)(v3 + 112), 0);
    std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v3 + 112));
  }
  else
  {
    std::vector<ItemParam>::vector((std::vector<ItemParam> *const)(v3 + 48));
    __for_range_1 = item_map;
    __for_begin_0._M_current = (ItemParam *)std::map<unsigned int,unsigned int>::begin(item_map)._M_node;
    __for_end_0._M_current = (ItemParam *)std::map<unsigned int,unsigned int>::end(__for_range_1)._M_node;
    while ( std::operator!=(
              (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_begin_0,
              (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_end_0) )
    {
      v27 = (std::pair<unsigned int const,unsigned int> *)std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)&__for_begin_0);
      v28 = v27;
      if ( ((unsigned __int8)v27 & 7) >= *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&v27->second + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)v27 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v27->second + 3) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load_n(v27, 8LL);
      }
      __in = *v28;
      item_id_0 = std::get<0ul,unsigned int const,unsigned int>(&__in);
      v29 = std::get<1ul,unsigned int const,unsigned int>(&__in);
      count_0 = v29;
      if ( *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v29 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v29);
      }
      if ( *count_0 )
      {
        if ( *(_BYTE *)(((unsigned __int64)item_id_0 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)item_id_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)item_id_0 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(item_id_0);
        }
        __x.item_id = *item_id_0;
        __x.count = *count_0;
        __x.level = 0;
        __x.promote_level = 0;
        std::vector<ItemParam>::push_back((std::vector<ItemParam> *const)(v3 + 48), &__x);
      }
      std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)&__for_begin_0);
    }
    std::vector<ItemParam>::vector(retstr, (std::vector<ItemParam> *)(v3 + 48));
    std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v3 + 48));
  }
  if ( v47 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};

// Line 246: range 00000000175589BA-0000000017558A64
void __cdecl AddItemResult::toClient(const AddItemResult *const this, proto::ItemParam *proto)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->item_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->item_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->item_id);
  }
  proto::ItemParam::set_item_id(proto, this->item_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->add_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->add_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->add_count);
  }
  proto::ItemParam::set_count(proto, this->add_count);
};

// Line 252: range 0000000017558A66-0000000017558B10
void __cdecl AddItemResult::toItemLog(const AddItemResult *const this, proto_log::ItemLog *item_log)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->item_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->item_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->item_id);
  }
  proto_log::ItemLog::set_item_id(item_log, this->item_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->add_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->add_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->add_count);
  }
  proto_log::ItemLog::set_count(item_log, this->add_count);
};

// Line 258: range 0000000017558B12-0000000017558C0A
void __cdecl AddItemResult::toProtoItemHint(const AddItemResult *const this, proto::ItemHint *proto, bool is_new)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->item_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->item_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->item_id);
  }
  proto::ItemHint::set_item_id(proto, this->item_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->add_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->add_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->add_count);
  }
  proto::ItemHint::set_count(proto, this->add_count);
  proto::ItemHint::set_is_new(proto, is_new);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  proto::ItemHint::set_guid(proto, this->guid);
};

// Line 267: range 0000000017558CBA-000000001755913A
std::vector<AddItemResult> *__cdecl ItemUtils::mergeTransformAddItemResults(
        std::vector<AddItemResult> *retstr,
        const std::vector<AddItemResult> *add_item_result_vec)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::vector<AddItemResult>::size_type v5; // rdx
  bool *p_is_by_overflow_transform; // rax
  const AddItemResult *v7; // r14
  AddItemResult *M_current; // r15
  std::vector<AddItemResult>::iterator v9; // rax
  unsigned int add_count; // r14d
  __gnu_cxx::__normal_iterator<AddItemResult*,std::vector<AddItemResult> >::pointer v11; // rdx
  uint32_t *p_add_count; // rax
  __int64 v13; // rsi
  SelectType v14; // r14d
  __gnu_cxx::__normal_iterator<AddItemResult*,std::vector<AddItemResult> >::pointer v15; // rdx
  char v16; // cl
  std::vector<AddItemResult>::iterator __for_begin; // [rsp+28h] [rbp-E8h] BYREF
  std::vector<AddItemResult>::iterator __for_end_0; // [rsp+30h] [rbp-E0h] BYREF
  std::vector<AddItemResult>::const_iterator __for_end; // [rsp+38h] [rbp-D8h] BYREF
  const std::vector<AddItemResult> *__for_range; // [rsp+40h] [rbp-D0h]
  std::vector<AddItemResult> *__for_range_0; // [rsp+48h] [rbp-C8h]
  const AddItemResult *overflow_transform_result; // [rsp+50h] [rbp-C0h]
  const AddItemResult *add_item_result; // [rsp+58h] [rbp-B8h]
  char v25[176]; // [rsp+60h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 8 iter:282 64 24 33 overflow_transform_result_vec:270";
  *(_QWORD *)(v2 + 16) = ItemUtils::mergeTransformAddItemResults;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  std::vector<AddItemResult>::vector(retstr);
  v5 = std::vector<AddItemResult>::size(add_item_result_vec);
  std::vector<AddItemResult>::reserve(retstr, v5);
  std::vector<AddItemResult>::vector((std::vector<AddItemResult> *const)(v2 + 64));
  __for_range = add_item_result_vec;
  *(std::vector<AddItemResult>::const_iterator *)(v2 + 32) = std::vector<AddItemResult>::begin(add_item_result_vec);
  __for_end._M_current = std::vector<AddItemResult>::end(__for_range)._M_current;
  while ( __gnu_cxx::operator!=<AddItemResult const*,std::vector<AddItemResult>>(
            (const __gnu_cxx::__normal_iterator<const AddItemResult*,std::vector<AddItemResult> > *)(v2 + 32),
            &__for_end) )
  {
    add_item_result = __gnu_cxx::__normal_iterator<AddItemResult const*,std::vector<AddItemResult>>::operator*((const __gnu_cxx::__normal_iterator<const AddItemResult*,std::vector<AddItemResult> > *const)(v2 + 32));
    p_is_by_overflow_transform = &add_item_result->is_by_overflow_transform;
    if ( *(_BYTE *)(((unsigned __int64)p_is_by_overflow_transform >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)p_is_by_overflow_transform & 7) >= *(_BYTE *)(((unsigned __int64)p_is_by_overflow_transform >> 3)
                                                                       + 0x7FFF8000) )
    {
      __asan_report_load1(p_is_by_overflow_transform);
    }
    if ( add_item_result->is_by_overflow_transform )
      std::vector<AddItemResult>::push_back((std::vector<AddItemResult> *const)(v2 + 64), add_item_result);
    else
      std::vector<AddItemResult>::push_back(retstr, add_item_result);
    __gnu_cxx::__normal_iterator<AddItemResult const*,std::vector<AddItemResult>>::operator++((__gnu_cxx::__normal_iterator<const AddItemResult*,std::vector<AddItemResult> > *const)(v2 + 32));
  }
  __for_range_0 = (std::vector<AddItemResult> *)(v2 + 64);
  __for_begin._M_current = std::vector<AddItemResult>::begin((std::vector<AddItemResult> *const)(v2 + 64))._M_current;
  __for_end_0._M_current = std::vector<AddItemResult>::end(__for_range_0)._M_current;
  while ( __gnu_cxx::operator!=<AddItemResult *,std::vector<AddItemResult>>(&__for_begin, &__for_end_0) )
  {
    overflow_transform_result = __gnu_cxx::__normal_iterator<AddItemResult *,std::vector<AddItemResult>>::operator*(&__for_begin);
    v7 = overflow_transform_result;
    M_current = std::vector<AddItemResult>::end(retstr)._M_current;
    v9._M_current = std::vector<AddItemResult>::begin(retstr)._M_current;
    *(__gnu_cxx::__normal_iterator<AddItemResult*,std::vector<AddItemResult> > *)(v2 + 32) = std::find_if<__gnu_cxx::__normal_iterator<AddItemResult *,std::vector<AddItemResult>>,ItemUtils::mergeTransformAddItemResults(std::vector<AddItemResult> const&)::{lambda(AddItemResult const&)#1}>(
                                                                                               v9,
                                                                                               (__gnu_cxx::__normal_iterator<AddItemResult*,std::vector<AddItemResult> >)M_current,
                                                                                               (ItemUtils::mergeTransformAddItemResults::<lambda(const AddItemResult&)>)v7);
    __for_end._M_current = std::vector<AddItemResult>::end(retstr)._M_current;
    if ( __gnu_cxx::operator!=<AddItemResult *,std::vector<AddItemResult>>(
           (const __gnu_cxx::__normal_iterator<AddItemResult*,std::vector<AddItemResult> > *)(v2 + 32),
           (const __gnu_cxx::__normal_iterator<AddItemResult*,std::vector<AddItemResult> > *)&__for_end) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&overflow_transform_result->add_count >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)overflow_transform_result + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&overflow_transform_result->add_count >> 3)
                                                                                 + 0x7FFF8000) )
      {
        __asan_report_load4(&overflow_transform_result->add_count);
      }
      add_count = overflow_transform_result->add_count;
      v11 = __gnu_cxx::__normal_iterator<AddItemResult *,std::vector<AddItemResult>>::operator->((const __gnu_cxx::__normal_iterator<AddItemResult*,std::vector<AddItemResult> > *const)(v2 + 32));
      p_add_count = &v11->add_count;
      if ( *(_BYTE *)(((unsigned __int64)p_add_count >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_add_count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_add_count >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(p_add_count);
      }
      v13 = add_count;
      v14 = SAFE_ADD<unsigned int,unsigned int>(v11->add_count, add_count);
      v15 = __gnu_cxx::__normal_iterator<AddItemResult *,std::vector<AddItemResult>>::operator->((const __gnu_cxx::__normal_iterator<AddItemResult*,std::vector<AddItemResult> > *const)(v2 + 32));
      v16 = *(_BYTE *)(((unsigned __int64)&v15->add_count >> 3) + 0x7FFF8000);
      if ( v16 != 0 && (char)((((_BYTE)v15 + 12) & 7) + 3) >= v16 )
      {
        LOBYTE(v13) = v16 != 0;
        __asan_report_store4(&v15->add_count, v13, v15);
      }
      v15->add_count = v14;
    }
    else
    {
      std::vector<AddItemResult>::push_back(retstr, overflow_transform_result);
    }
    __gnu_cxx::__normal_iterator<AddItemResult *,std::vector<AddItemResult>>::operator++(&__for_begin);
  }
  std::vector<AddItemResult>::~vector((std::vector<AddItemResult> *const)(v2 + 64));
  if ( v25 == (char *)v2 )
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
  return retstr;
};

// Line 282: range 0000000017558C0C-0000000017558CB9
bool __cdecl ItemUtils::mergeTransformAddItemResults(std::vector<AddItemResult> const&)::{lambda(AddItemResult const&)#1}::operator()(
        const ItemUtils::mergeTransformAddItemResults::<lambda(const AddItemResult&)> *const __closure,
        const AddItemResult *merged_result)
{
  uint32_t item_id; // esi
  const AddItemResult *overflow_transform_result; // rax
  char v4; // dl

  if ( *(_BYTE *)(((unsigned __int64)&merged_result->item_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&merged_result->item_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&merged_result->item_id);
  }
  item_id = merged_result->item_id;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  overflow_transform_result = __closure->__overflow_transform_result;
  v4 = *(_BYTE *)(((unsigned __int64)&__closure->__overflow_transform_result->item_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
    __asan_report_load4(&__closure->__overflow_transform_result->item_id);
  return item_id == overflow_transform_result->item_id;
};

// Line 298: range 000000001755913C-00000000175591BE
void __cdecl ItemUtils::vecToProtoItemParam(
        const std::vector<AddItemResult> *add_item_result_vec,
        google::protobuf::RepeatedPtrField<proto::ItemParam> *proto_item_param_list)
{
  std::vector<AddItemResult> vec; // [rsp+10h] [rbp-40h] BYREF

  ItemUtils::mergeTransformAddItemResults(&vec, add_item_result_vec);
  common::tools::MiscUtils::vectorToRepeated<AddItemResult,proto::ItemParam,void (AddItemResult::*)(proto::ItemParam&)const>(
    &vec,
    proto_item_param_list,
    (void (*)(const AddItemResult *, proto::ItemParam *))AddItemResult::toClient);
  std::vector<AddItemResult>::~vector(&vec);
};

// Line 304: range 00000000175591C0-0000000017559704
std::vector<ItemParam> *__cdecl ItemUtils::calcDiscardItem(
        std::vector<ItemParam> *retstr,
        const std::vector<ItemParam> *item_param_vec,
        const std::vector<AddItemResult> *add_item_result_vec)
{
  std::map<unsigned int,unsigned int> *v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  uint32_t *p_add_count; // rax
  unsigned int add_count; // r14d
  std::map<unsigned int,unsigned int>::mapped_type *v8; // rax
  unsigned int *v9; // rdx
  SelectType v10; // r14d
  uint32_t *p_item_id; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v12; // rax
  SelectType *v13; // rdx
  char v14; // cl
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::reference v15; // rax
  std::pair<unsigned int const,unsigned int> *v16; // rdx
  uint32_t added_count; // [rsp+2Ch] [rbp-134h]
  std::map<unsigned int,unsigned int>::iterator __for_begin_0; // [rsp+30h] [rbp-130h] BYREF
  std::map<unsigned int,unsigned int>::iterator __for_end_0; // [rsp+38h] [rbp-128h] BYREF
  const std::vector<AddItemResult> *__for_range; // [rsp+40h] [rbp-120h]
  std::map<unsigned int,unsigned int> *__for_range_0; // [rsp+48h] [rbp-118h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *item_id; // [rsp+50h] [rbp-110h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *item_count; // [rsp+58h] [rbp-108h]
  const AddItemResult *add_item_result; // [rsp+60h] [rbp-100h]
  std::pair<unsigned int const,unsigned int> __for_end; // [rsp+68h] [rbp-F8h] BYREF
  std::vector<ItemParam>::value_type __x; // [rsp+70h] [rbp-F0h] BYREF
  std::map<unsigned int,unsigned int> v30; // [rsp+80h] [rbp-E0h] BYREF
  char v31[176]; // [rsp+B0h] [rbp-B0h] BYREF

  v3 = (std::map<unsigned int,unsigned int> *)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = (std::map<unsigned int,unsigned int> *)v4;
  }
  *(_QWORD *)v3->_M_t._M_impl.gap0 = 1102416563LL;
  *(_QWORD *)&v3->_M_t._M_impl._M_header._M_color = "1 48 48 24 added_item_count_map:305";
  v3->_M_t._M_impl._M_header._M_parent = (std::_Rb_tree_node_base::_Base_ptr)ItemUtils::calcDiscardItem;
  v5 = (_DWORD *)((unsigned __int64)v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862723] = -202116109;
  std::map<unsigned int,unsigned int>::map(v3 + 1);
  __for_range = add_item_result_vec;
  __for_end_0._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr)std::vector<AddItemResult>::begin(add_item_result_vec)._M_current;
  __for_end = (std::pair<unsigned int const,unsigned int>)std::vector<AddItemResult>::end(add_item_result_vec)._M_current;
  while ( __gnu_cxx::operator!=<AddItemResult const*,std::vector<AddItemResult>>(
            (const __gnu_cxx::__normal_iterator<const AddItemResult*,std::vector<AddItemResult> > *)&__for_end_0,
            (const __gnu_cxx::__normal_iterator<const AddItemResult*,std::vector<AddItemResult> > *)&__for_end) )
  {
    add_item_result = __gnu_cxx::__normal_iterator<AddItemResult const*,std::vector<AddItemResult>>::operator*((const __gnu_cxx::__normal_iterator<const AddItemResult*,std::vector<AddItemResult> > *const)&__for_end_0);
    p_add_count = &add_item_result->add_count;
    if ( *(_BYTE *)(((unsigned __int64)p_add_count >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_add_count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_add_count >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_add_count);
    }
    add_count = add_item_result->add_count;
    v8 = std::map<unsigned int,unsigned int>::operator[](v3 + 1, &add_item_result->item_id);
    v9 = v8;
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v8);
    }
    v10 = SAFE_ADD<unsigned int,unsigned int>(*v9, add_count);
    p_item_id = &add_item_result->item_id;
    v12 = std::map<unsigned int,unsigned int>::operator[](v3 + 1, &add_item_result->item_id);
    v13 = v12;
    v14 = *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000);
    if ( v14 != 0 && (char)(((unsigned __int8)v12 & 7) + 3) >= v14 )
    {
      LOBYTE(p_item_id) = v14 != 0;
      __asan_report_store4(v12, p_item_id, v12);
    }
    *v13 = v10;
    __gnu_cxx::__normal_iterator<AddItemResult const*,std::vector<AddItemResult>>::operator++((__gnu_cxx::__normal_iterator<const AddItemResult*,std::vector<AddItemResult> > *const)&__for_end_0);
  }
  std::vector<ItemParam>::vector(retstr);
  ItemParam::vecToItemCountMap(&v30, item_param_vec);
  __for_range_0 = &v30;
  __for_begin_0._M_node = std::map<unsigned int,unsigned int>::begin(&v30)._M_node;
  __for_end_0._M_node = std::map<unsigned int,unsigned int>::end(__for_range_0)._M_node;
  while ( std::operator!=(&__for_begin_0, &__for_end_0) )
  {
    v15 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin_0);
    v16 = v15;
    if ( ((unsigned __int8)v15 & 7) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&v15->second + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v15 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v15->second + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load_n(v15, 8LL);
    }
    __for_end = *v16;
    item_id = std::get<0ul,unsigned int const,unsigned int>(&__for_end);
    item_count = std::get<1ul,unsigned int const,unsigned int>(&__for_end);
    added_count = common::tools::MiscUtils::findMapWithDefaultValue<std::map<unsigned int,unsigned int>>(
                    v3 + 1,
                    item_id,
                    0);
    if ( *(_BYTE *)(((unsigned __int64)item_count >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)item_count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)item_count >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(item_count);
    }
    if ( added_count < *item_count )
    {
      if ( *(_BYTE *)(((unsigned __int64)item_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)item_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)item_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(item_id);
      }
      __x.item_id = *item_id;
      __x.count = *item_count - added_count;
      __x.level = 0;
      __x.promote_level = 0;
      std::vector<ItemParam>::push_back(retstr, &__x);
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin_0);
  }
  std::map<unsigned int,unsigned int>::~map(&v30);
  std::map<unsigned int,unsigned int>::~map(v3 + 1);
  if ( v31 == (char *)v3 )
  {
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3->_M_t._M_impl.gap0 = 1172321806LL;
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};

// Line 323: range 0000000017559706-00000000175597F2
common::milog::LogLevel __cdecl OutputResult::getLogLevel(const OutputResult *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_error >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 5) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_error >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_error);
  }
  if ( this->is_error )
    return 4;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  if ( !this->retcode )
    return 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_by_whitelist >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_by_whitelist >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_by_whitelist);
  }
  if ( !this->is_by_whitelist )
    return 3;
  else
    return 1;
};

// Line 329: range 00000000175597F4-00000000175598DD
int32_t __cdecl Item::fromBin(Item *const this, const proto::ItemBin *proto_item_bin)
{
  uint32_t v2; // ecx
  char v3; // dl
  __int64 v4; // rdx
  uint64_t v5; // rax
  __int64 v6; // rdx
  char v7; // al
  const proto::ItemBin *proto_item_bina; // [rsp+0h] [rbp-10h]

  proto_item_bina = proto_item_bin;
  v2 = proto::ItemBin::item_id(proto_item_bin);
  v3 = *(_BYTE *)(((unsigned __int64)&this->item_id_ >> 3) + 0x7FFF8000);
  LOBYTE(proto_item_bin) = v3 != 0;
  v4 = (v3 != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= v3);
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->item_id_, proto_item_bin, v4);
  this->item_id_ = v2;
  v5 = proto::ItemBin::guid(proto_item_bina);
  if ( *(_BYTE *)(((unsigned __int64)&this->guid_ >> 3) + 0x7FFF8000) )
    v5 = __asan_report_store8(&this->guid_, proto_item_bin);
  this->guid_ = v5;
  v6 = proto::ItemBin::item_type(proto_item_bina);
  v7 = *(_BYTE *)(((unsigned __int64)&this->item_type_ >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(proto_item_bin) = v7 != 0;
    __asan_report_store4(&this->item_type_, proto_item_bin, v6);
  }
  this->item_type_ = v6;
  return 0;
};

// Line 337: range 00000000175598DE-00000000175599C8
int32_t __cdecl Item::toBin(const Item *const this, proto::ItemBin *proto_item_bin)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->item_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->item_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->item_id_);
  }
  proto::ItemBin::set_item_id(proto_item_bin, this->item_id_);
  if ( *(_BYTE *)(((unsigned __int64)&this->guid_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  proto::ItemBin::set_guid(proto_item_bin, this->guid_);
  if ( *(_BYTE *)(((unsigned __int64)&this->item_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->item_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->item_type_);
  }
  proto::ItemBin::set_item_type(proto_item_bin, this->item_type_);
  return 0;
};

// Line 346: range 00000000175599CA-0000000017559A6C
int32_t __cdecl Item::toClient(const Item *const this, proto::Item *proto_item)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->item_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->item_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->item_id_);
  }
  proto::Item::set_item_id(proto_item, this->item_id_);
  if ( *(_BYTE *)(((unsigned __int64)&this->guid_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  proto::Item::set_guid(proto_item, this->guid_);
  return 0;
};

// Line 354: range 0000000017559A6E-0000000017559B1C
int32_t __cdecl Item::toSnapshot(const Item *const this, proto::ItemBin *proto_item_bin)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->item_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->item_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->item_id_);
  }
  proto::ItemBin::set_item_id(proto_item_bin, this->item_id_);
  if ( *(_BYTE *)(((unsigned __int64)&this->item_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->item_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->item_type_);
  }
  proto::ItemBin::set_item_type(proto_item_bin, this->item_type_);
  return 0;
};

// Line 361: range 0000000017559B1E-0000000017559C69
ItemParam __cdecl Item::toItemParam(const Item *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  __int64 (__fastcall **v4)(const Item *const); // rax
  ItemParam v5; // rax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 14 item_param:362";
  *(_QWORD *)(v1 + 16) = Item::toItemParam;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  *(_DWORD *)(v1 + 32) = 0;
  *(_DWORD *)(v1 + 36) = 0;
  *(_DWORD *)(v1 + 40) = 0;
  *(_DWORD *)(v1 + 44) = 0;
  *(_DWORD *)(v1 + 32) = Item::getItemId(this);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v4 = (__int64 (__fastcall **)(const Item *const))(this->_vptr_Item + 8);
  if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  *(_DWORD *)(v1 + 36) = (*v4)(this);
  v5 = *(ItemParam *)(v1 + 32);
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v5;
};

// Line 369: range 0000000017559C6A-000000001755A0FE
int32_t __cdecl Item::init(Item *const this, Player *player, bool is_first_create)
{
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v5; // rax
  uint32_t item_type; // ecx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  uint32_t v12; // ebx
  unsigned int (__fastcall **v13)(Item *const); // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rbx
  unsigned int (__fastcall **v19)(Item *const); // rax
  data::ItemType val; // [rsp+24h] [rbp-3Ch] BYREF
  const data::ItemConfig *item_config_ptr; // [rsp+28h] [rbp-38h]
  common::milog::MiLogStream v22; // [rsp+30h] [rbp-30h] BYREF

  item_config_ptr = Item::getItemConfig(this);
  if ( item_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->guid_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( this->guid_ )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->item_type_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->item_type_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->item_type_);
      }
      item_type = this->item_type_;
      if ( *(_BYTE *)(((unsigned __int64)&item_config_ptr->item_type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)item_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&item_config_ptr->item_type >> 3)
                                                                       + 0x7FFF8000) )
      {
        __asan_report_load4(&item_config_ptr->item_type);
      }
      if ( item_type == item_config_ptr->item_type )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->item_type_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->item_type_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->item_type_);
        }
        v12 = this->item_type_;
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v13 = (unsigned int (__fastcall **)(Item *const))(this->_vptr_Item + 9);
        if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        if ( v12 == (*v13)(this) )
        {
          return 0;
        }
        else
        {
          common::milog::MiLogStream::create(
            &v22,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/item/item.cpp",
            "init",
            392);
          v14 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                  &v22,
                  (const char (*)[29])"item_type mismatch, item_id:");
          v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &this->item_id_);
          v16 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v15, (const char (*)[11])" bin_type:");
          v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &this->item_type_);
          v18 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v17, (const char (*)[11])" mem_type:");
          if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v19 = (unsigned int (__fastcall **)(Item *const))(this->_vptr_Item + 9);
          if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          val = (*v19)(this);
          common::milog::MiLogStream::operator<<<data::ItemType,(data::ItemType*)0>(v18, &val);
          common::milog::MiLogStream::~MiLogStream(&v22);
          return -1;
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v22,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/item/item.cpp",
          "init",
          385);
        v7 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
               &v22,
               (const char (*)[29])"item_type mismatch, item_id:");
        v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->item_id_);
        v9 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v8, (const char (*)[11])" bin_type:");
        v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &this->item_type_);
        v11 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v10, (const char (*)[14])" config_type:");
        common::milog::MiLogStream::operator<<<data::ItemType,(data::ItemType*)0>(v11, &item_config_ptr->item_type);
        common::milog::MiLogStream::~MiLogStream(&v22);
        return -1;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/item/item.cpp",
        "init",
        379);
      v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
             &v22,
             (const char (*)[25])"item guid is 0, item_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->item_id_);
      common::milog::MiLogStream::~MiLogStream(&v22);
      return -1;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/item/item.cpp",
      "init",
      373);
    v3 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
           &v22,
           (const char (*)[31])"getItemConfig failed, item_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &this->item_id_);
    common::milog::MiLogStream::~MiLogStream(&v22);
    return -1;
  }
};

// Line 401: range 000000001755A100-000000001755A24D
const data::ItemConfig *__cdecl Item::getItemConfig(const Item *const this)
{
  ItemExcelConfigMgr *p_item_config_mgr; // rcx
  common::milog::MiLogStream *v2; // rax
  data::ItemConfig *item_config_ptr; // [rsp+18h] [rbp-48h]
  std::shared_ptr<Config> v5; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v6; // [rsp+30h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v5);
  p_item_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v5)->design_config.txt_config_mgr.item_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->item_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->item_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->item_id_);
  }
  item_config_ptr = ItemExcelConfigMgr::findItemConfig(p_item_config_mgr, this->item_id_);
  std::shared_ptr<Config>::~shared_ptr(&v5);
  if ( item_config_ptr )
    return item_config_ptr;
  common::milog::MiLogStream::create(
    &v6,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/player/item/item.cpp",
    "getItemConfig",
    405);
  v2 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
         &v6,
         (const char (*)[32])"findItemConfig failed, item_id:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &this->item_id_);
  common::milog::MiLogStream::~MiLogStream(&v6);
  return 0LL;
};

// Line 413: range 000000001755A24E-000000001755A502
int32_t __cdecl Item::notifyItemChange(Item *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::__shared_ptr_access<proto::StoreItemChangeNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // r14
  Player *v5; // rax
  PlayerItemComp *ItemComp; // r15
  uint64_t Guid; // rax
  proto::StoreType ItemStoreType; // eax
  std::__shared_ptr_access<proto::StoreItemChangeNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  void (__fastcall **v10)(Item *const, proto::Item *); // rax
  Player *v11; // r14
  int32_t result; // eax
  proto::Item *proto_item_ptr; // [rsp+18h] [rbp-A8h]
  std::shared_ptr<proto::StoreItemChangeNotify> __r; // [rsp+20h] [rbp-A0h] BYREF
  char v15[144]; // [rsp+30h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 14 player_ptr:414 64 16 14 notify_ptr:418";
  *(_QWORD *)(v1 + 16) = Item::notifyItemChange;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  Item::getItemOwner((Item *const)(v1 + 32));
  if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v1 + 32), 0LL) )
  {
    common::tools::perf::make_shared<proto::StoreItemChangeNotify>();
    v4 = std::__shared_ptr_access<proto::StoreItemChangeNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::StoreItemChangeNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
    v5 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    ItemComp = Player::getItemComp(v5);
    Guid = Item::getGuid(this);
    ItemStoreType = PlayerItemComp::getItemStoreType(ItemComp, Guid);
    proto::StoreItemChangeNotify::set_store_type(v4, ItemStoreType);
    v9 = std::__shared_ptr_access<proto::StoreItemChangeNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::StoreItemChangeNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
    proto_item_ptr = proto::StoreItemChangeNotify::add_item_list(v9);
    if ( proto_item_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v10 = (void (__fastcall **)(Item *const, proto::Item *))(this->_vptr_Item + 4);
      if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      (*v10)(this, proto_item_ptr);
    }
    v11 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    std::dynamic_pointer_cast<google::protobuf::Message const,proto::StoreItemChangeNotify>(&__r);
    Player::sendMessage(v11, (common::minet::ConstMessagePtr *)&__r, 0LL);
    std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&__r);
    std::shared_ptr<proto::StoreItemChangeNotify>::~shared_ptr((std::shared_ptr<proto::StoreItemChangeNotify> *const)(v1 + 64));
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 32));
  result = 0;
  if ( v15 == (char *)v1 )
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
  return result;
};

// Line 432: range 000000001755A503-000000001755A68A
common::milog::MiLogStream *__cdecl operator<<(common::milog::MiLogStream *stream, const Item *item)
{
  common::milog::MiLogStream *v2; // rbx
  unsigned int (__fastcall **v3)(const Item *); // rax
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rbx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rbx
  __int64 (__fastcall **v8)(const Item *); // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rbx
  common::milog::MiLogStream *v11; // rax
  data::ItemType val; // [rsp+1Ch] [rbp-24h] BYREF
  unsigned int ItemId; // [rsp+20h] [rbp-20h] BYREF
  unsigned int v15; // [rsp+24h] [rbp-1Ch] BYREF
  unsigned __int64 v16[3]; // [rsp+28h] [rbp-18h] BYREF

  v2 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(stream, (const char (*)[12])"[item_type:");
  if ( *(_BYTE *)(((unsigned __int64)item >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v3 = (unsigned int (__fastcall **)(const Item *))(item->_vptr_Item + 9);
  if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  val = (*v3)(item);
  v4 = common::milog::MiLogStream::operator<<<data::ItemType,(data::ItemType*)0>(v2, &val);
  v5 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v4, (const char (*)[10])",item_id:");
  ItemId = Item::getItemId(item);
  v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &ItemId);
  v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])",count:");
  if ( *(_BYTE *)(((unsigned __int64)item >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v8 = (__int64 (__fastcall **)(const Item *))(item->_vptr_Item + 8);
  if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v15 = (*v8)(item);
  v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &v15);
  v10 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v9, (const char (*)[7])",guid:");
  v16[0] = Item::getGuid(item);
  v11 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v10, v16);
  common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v11, (const char (*)[2])"]");
  return stream;
};
