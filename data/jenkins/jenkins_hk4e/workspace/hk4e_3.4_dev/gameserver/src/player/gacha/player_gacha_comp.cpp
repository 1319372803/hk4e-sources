// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/gacha/player_gacha_comp.cpp

// Line 33: range 00000000141B9E42-00000000141B9EA4
int32_t __cdecl GachaItemTypeData::fromBin(GachaItemTypeData *const this, const proto::GachaItemTypeDataBin *proto)
{
  uint32_t gacha_times; // ecx
  char v3; // dl
  __int64 v4; // rdx

  gacha_times = proto::GachaItemTypeDataBin::last_gacha_times(proto);
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  LOBYTE(proto) = v3 != 0;
  v4 = (v3 != 0) & (unsigned __int8)((char)(((unsigned __int8)this & 7) + 3) >= v3);
  if ( (_BYTE)v4 )
    __asan_report_store4(this, proto, v4);
  this->last_gacha_times = gacha_times;
  return 0;
};

// Line 39: range 00000000141B9EA6-00000000141B9F07
int32_t __cdecl GachaItemTypeData::toBin(const GachaItemTypeData *const this, proto::GachaItemTypeDataBin *proto)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  proto::GachaItemTypeDataBin::set_last_gacha_times(proto, this->last_gacha_times);
  return 0;
};

// Line 45: range 00000000141B9F08-00000000141B9F6A
int32_t __cdecl GachaItemParentTypeData::fromBin(
        GachaItemParentTypeData *const this,
        const proto::GachaItemParentTypeDataBin *proto)
{
  uint32_t gacha_times; // ecx
  char v3; // dl
  __int64 v4; // rdx

  gacha_times = proto::GachaItemParentTypeDataBin::last_gacha_times(proto);
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  LOBYTE(proto) = v3 != 0;
  v4 = (v3 != 0) & (unsigned __int8)((char)(((unsigned __int8)this & 7) + 3) >= v3);
  if ( (_BYTE)v4 )
    __asan_report_store4(this, proto, v4);
  this->last_gacha_times = gacha_times;
  return 0;
};

// Line 51: range 00000000141B9F6C-00000000141B9FCD
int32_t __cdecl GachaItemParentTypeData::toBin(
        const GachaItemParentTypeData *const this,
        proto::GachaItemParentTypeDataBin *proto)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  proto::GachaItemParentTypeDataBin::set_last_gacha_times(proto, this->last_gacha_times);
  return 0;
};

// Line 57: range 00000000141B9FCE-00000000141BA0CF
int32_t __cdecl GachaGuaranteeData::fromBin(GachaGuaranteeData *const this, const proto::GachaGuaranteeDataBin *proto)
{
  uint32_t v2; // ecx
  char v3; // dl
  __int64 v4; // rdx
  uint32_t gacha_guarantee_times; // ecx
  char v6; // dl
  __int64 v7; // rdx
  bool is_cur_schedule_triggered; // cl
  char v9; // dl
  __int64 v10; // rdx
  const proto::GachaGuaranteeDataBin *protoa; // [rsp+0h] [rbp-10h]

  protoa = proto;
  v2 = proto::GachaGuaranteeDataBin::gacha_rule_id(proto);
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  LOBYTE(proto) = v3 != 0;
  v4 = (v3 != 0) & (unsigned __int8)((char)(((unsigned __int8)this & 7) + 3) >= v3);
  if ( (_BYTE)v4 )
    __asan_report_store4(this, proto, v4);
  this->gacha_rule_id = v2;
  gacha_guarantee_times = proto::GachaGuaranteeDataBin::last_gacha_guarantee_times(protoa);
  v6 = *(_BYTE *)(((unsigned __int64)&this->last_gacha_guarantee_times >> 3) + 0x7FFF8000);
  LOBYTE(proto) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store4(&this->last_gacha_guarantee_times, proto, v7);
  this->last_gacha_guarantee_times = gacha_guarantee_times;
  is_cur_schedule_triggered = proto::GachaGuaranteeDataBin::is_cur_schedule_triggered(protoa);
  v9 = *(_BYTE *)(((unsigned __int64)&this->is_cur_schedule_triggered >> 3) + 0x7FFF8000);
  LOBYTE(proto) = v9 != 0;
  v10 = (v9 != 0) & (unsigned __int8)((((unsigned __int8)this + 8) & 7) >= v9);
  if ( (_BYTE)v10 )
    __asan_report_store1(&this->is_cur_schedule_triggered, proto, v10);
  this->is_cur_schedule_triggered = is_cur_schedule_triggered;
  return 0;
};

// Line 66: range 00000000141BA0D0-00000000141BA1D2
int32_t __cdecl GachaGuaranteeData::toBin(const GachaGuaranteeData *const this, proto::GachaGuaranteeDataBin *proto)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  proto::GachaGuaranteeDataBin::set_gacha_rule_id(proto, this->gacha_rule_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_gacha_guarantee_times >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_gacha_guarantee_times >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&this->last_gacha_guarantee_times);
  }
  proto::GachaGuaranteeDataBin::set_last_gacha_guarantee_times(proto, this->last_gacha_guarantee_times);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_cur_schedule_triggered >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 8) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_cur_schedule_triggered >> 3)
                                                     + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_cur_schedule_triggered);
  }
  proto::GachaGuaranteeDataBin::set_is_cur_schedule_triggered(proto, this->is_cur_schedule_triggered);
  return 0;
};

// Line 75: range 00000000141BA1D4-00000000141BA236
int32_t __cdecl GachaUpData::fromBin(GachaUpData *const this, const proto::GachaUpDataBin *proto)
{
  uint32_t v2; // ecx
  char v3; // dl
  __int64 v4; // rdx

  v2 = proto::GachaUpDataBin::gacha_no_up_times(proto);
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  LOBYTE(proto) = v3 != 0;
  v4 = (v3 != 0) & (unsigned __int8)((char)(((unsigned __int8)this & 7) + 3) >= v3);
  if ( (_BYTE)v4 )
    __asan_report_store4(this, proto, v4);
  this->gacha_no_up_times = v2;
  return 0;
};

// Line 82: range 00000000141BA238-00000000141BA299
int32_t __cdecl GachaUpData::toBin(const GachaUpData *const this, proto::GachaUpDataBin *proto)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  proto::GachaUpDataBin::set_gacha_no_up_times(proto, this->gacha_no_up_times);
  return 0;
};

// Line 89: range 00000000141BA29A-00000000141BA57A
std::string *__cdecl GachaRecord::getDesc[abi:cxx11](std::string *retstr, GachaRecord *const this)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v5; // r14
  const char *v6; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v7; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v8; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v9; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v10; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v11; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v12; // rcx
  char v14[112]; // [rsp+10h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 5 os:90";
  *(_QWORD *)(v2 + 16) = GachaRecord::getDesc[abi:cxx11];
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32));
  v5 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
         (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
         "gacha_type: ");
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  v6 = data::enumValToStr(this->gacha_type);
  v7 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v5, v6);
  v8 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v7, " CurScheduleId:");
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_schedule_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_schedule_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->cur_schedule_id);
  }
  v9 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v8, this->cur_schedule_id);
  v10 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v9, " total_gacha_time:");
  if ( *(_BYTE *)(((unsigned __int64)&this->total_gacha_times >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->total_gacha_times >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->total_gacha_times);
  }
  v11 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v10, this->total_gacha_times);
  v12 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
          v11,
          " cur_schedule_total_gacha_times:");
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_schedule_total_gacha_times >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_schedule_total_gacha_times >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->cur_schedule_total_gacha_times);
  }
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v12, this->cur_schedule_total_gacha_times);
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 32LL);
  }
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::str[abi:cxx11](
    retstr,
    (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32));
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::~StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32));
  if ( v14 == (char *)v2 )
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

// Line 97: range 00000000141BA57C-00000000141BA709
__int64 __fastcall GachaRecord::getLastItemTypeGachaTimes(GachaRecord *const this, uint32_t gacha_item_type)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,GachaItemTypeData> >::pointer v6; // rdx
  GachaItemTypeData *p_second; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,GachaItemTypeData> >::_Self __y; // [rsp+18h] [rbp-88h] BYREF
  char v9[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 18 gacha_item_type:96 64 8 7 iter:98";
  *(_QWORD *)(v2 + 16) = GachaRecord::getLastItemTypeGachaTimes;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = gacha_item_type;
  *(std::map<unsigned int,GachaItemTypeData>::iterator *)(v2 + 64) = std::map<unsigned int,GachaItemTypeData>::find(
                                                                       &this->gacha_item_type_data_map,
                                                                       (const std::map<unsigned int,GachaItemTypeData>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,GachaItemTypeData>::end(&this->gacha_item_type_data_map)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,GachaItemTypeData> >::_Self *)(v2 + 64),
         &__y) )
  {
    result = 0LL;
  }
  else
  {
    v6 = std::_Rb_tree_iterator<std::pair<unsigned int const,GachaItemTypeData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,GachaItemTypeData> > *const)(v2 + 64));
    p_second = &v6->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
    }
    result = v6->second.last_gacha_times;
  }
  if ( v9 == (char *)v2 )
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

// Line 110: range 00000000141BA70A-00000000141BA82D
void __cdecl GachaRecord::updateLastItemTypeGachaTimes(GachaRecord *const this, data::GachaItemType item_type)
{
  std::map<unsigned int,GachaItemTypeData>::key_type *p_k; // rsi
  uint32_t total_gacha_times; // ecx
  char v4; // dl
  __int64 v5; // rdx
  std::map<unsigned int,GachaItemTypeData>::key_type __k; // [rsp+14h] [rbp-3Ch] BYREF
  GachaItemTypeData *gacha_item_type_data; // [rsp+18h] [rbp-38h]
  common::milog::MiLogStream v8; // [rsp+20h] [rbp-30h] BYREF

  if ( item_type )
  {
    __k = item_type;
    p_k = &__k;
    gacha_item_type_data = std::map<unsigned int,GachaItemTypeData>::operator[](&this->gacha_item_type_data_map, &__k);
    if ( *(_BYTE *)(((unsigned __int64)&this->total_gacha_times >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->total_gacha_times >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->total_gacha_times);
    }
    total_gacha_times = this->total_gacha_times;
    v4 = *(_BYTE *)(((unsigned __int64)gacha_item_type_data >> 3) + 0x7FFF8000);
    LOBYTE(p_k) = v4 != 0;
    v5 = (v4 != 0) & (unsigned __int8)((char)(((unsigned __int8)gacha_item_type_data & 7) + 3) >= v4);
    if ( (_BYTE)v5 )
      __asan_report_store4(gacha_item_type_data, p_k, v5);
    gacha_item_type_data->last_gacha_times = total_gacha_times;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/gacha/player_gacha_comp.cpp",
      "updateLastItemTypeGachaTimes",
      113);
    common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
      &v8,
      (const char (*)[36])"updateLastItemTypeGachaTimes failed");
    common::milog::MiLogStream::~MiLogStream(&v8);
  }
};

// Line 124: range 00000000141BA912-00000000141BB7EA
std::vector<data::GachaGuaranteeTypeWeight> *__fastcall GachaRecord::getGachaTypeWeight(
        std::vector<data::GachaGuaranteeTypeWeight> *retstr,
        GachaRecord *const this,
        uint32_t gacha_prob_rule_id,
        data::GachaItemParentType gacha_item_parent_type,
        const std::vector<unsigned int> *gacha_item_type_vec)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r14
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r14
  uint32_t v16; // ecx
  data::GachaGuaranteeTypeWeight *v17; // rax
  common::milog::MiLogStream *v18; // r14
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // r14
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  data::GachaGuaranteeTypeWeight *M_current; // r14
  std::vector<data::GachaGuaranteeTypeWeight>::iterator v30; // rax
  GachaRecord::getGachaTypeWeight::<lambda(const auto:25&, const auto:26&)> v31; // dl
  __gnu_cxx::__normal_iterator<data::GachaGuaranteeTypeWeight*,std::vector<data::GachaGuaranteeTypeWeight> >::reference v32; // rax
  uint32_t *p_weight; // rsi
  uint32_t *v34; // rax
  uint32_t *v35; // rdx
  uint32_t v36; // ecx
  char v37; // dl
  __int64 v38; // rdx
  common::milog::MiLogStream *v39; // r14
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // r14
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  unsigned int gacha_item_type; // [rsp+24h] [rbp-22Ch] BYREF
  std::vector<data::GachaProbRuleConfig>::iterator __for_begin; // [rsp+28h] [rbp-228h] BYREF
  std::vector<data::GachaProbRuleConfig>::iterator __for_end; // [rsp+30h] [rbp-220h] BYREF
  char *val; // [rsp+38h] [rbp-218h] BYREF
  std::vector<data::GachaProbRuleConfig> *__for_range; // [rsp+40h] [rbp-210h]
  std::vector<data::GachaGuaranteeTypeWeight> *__for_range_0; // [rsp+48h] [rbp-208h]
  data::GachaGuaranteeTypeWeight *item_type_weight; // [rsp+50h] [rbp-200h]
  const data::GachaProbRuleConfig *gacha_prob_config; // [rsp+58h] [rbp-1F8h]
  common::milog::MiLogStream v59; // [rsp+60h] [rbp-1F0h] BYREF
  common::milog::MiLogStream v60; // [rsp+80h] [rbp-1D0h] BYREF
  char v61[432]; // [rsp+A0h] [rbp-1B0h] BYREF

  v5 = (unsigned __int64)v61;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_3(384LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "10 48 4 22 cur_item_type_prob:148 64 4 26 cur_item_type_add_prob:149 80 4 14 total_prob:183 96 4"
                        " 30 last_item_type_gacha_times:151 112 4 22 gacha_prob_rule_id:123 128 8 16 is_need_skip:126 160"
                        " 16 15 type_weight:147 192 24 10 result:131 256 24 23 gacha_prob_rule_vec:132 320 24 7 ret:184";
  *(_QWORD *)(v5 + 16) = GachaRecord::getGachaTypeWeight;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -234556924;
  v7[536862723] = -234556924;
  v7[536862724] = -218959360;
  v7[536862725] = -219021312;
  v7[536862726] = -234881024;
  v7[536862727] = -218959118;
  v7[536862728] = -234881024;
  v7[536862729] = -218959118;
  v7[536862730] = -218103808;
  v7[536862731] = -202116109;
  *(_DWORD *)(v5 + 112) = gacha_prob_rule_id;
  *(_QWORD *)(v5 + 128) = gacha_item_type_vec;
  std::vector<data::GachaGuaranteeTypeWeight>::vector((std::vector<data::GachaGuaranteeTypeWeight> *const)(v5 + 192));
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v5 + 160));
  v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 160));
  GachaExcelConfigMgr::findGachaProbRuleVec(
    (std::vector<data::GachaProbRuleConfig> *)(v5 + 256),
    &v8->design_config.txt_config_mgr.gacha_config_mgr,
    *(_DWORD *)(v5 + 112),
    gacha_item_parent_type);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v5 + 160));
  if ( std::vector<data::GachaProbRuleConfig>::empty((const std::vector<data::GachaProbRuleConfig> *const)(v5 + 256)) )
  {
    common::milog::MiLogStream::create(
      &v60,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/gacha/player_gacha_comp.cpp",
      "getGachaTypeWeight",
      135);
    v9 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           &v60,
           (const char (*)[36])"GachaProbRuleVec is empty, rule_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v5 + 112));
    common::milog::MiLogStream::~MiLogStream(&v60);
    std::vector<data::GachaGuaranteeTypeWeight>::vector(
      retstr,
      (std::vector<data::GachaGuaranteeTypeWeight> *)(v5 + 192));
  }
  else
  {
    __for_range = (std::vector<data::GachaProbRuleConfig> *)(v5 + 256);
    __for_begin._M_current = std::vector<data::GachaProbRuleConfig>::begin((std::vector<data::GachaProbRuleConfig> *const)(v5 + 256))._M_current;
    __for_end._M_current = std::vector<data::GachaProbRuleConfig>::end((std::vector<data::GachaProbRuleConfig> *const)(v5 + 256))._M_current;
    while ( __gnu_cxx::operator!=<data::GachaProbRuleConfig *,std::vector<data::GachaProbRuleConfig>>(
              &__for_begin,
              &__for_end) )
    {
      gacha_prob_config = __gnu_cxx::__normal_iterator<data::GachaProbRuleConfig *,std::vector<data::GachaProbRuleConfig>>::operator*(&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)&gacha_prob_config->gacha_item_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&gacha_prob_config->gacha_item_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&gacha_prob_config->gacha_item_type);
      }
      gacha_item_type = gacha_prob_config->gacha_item_type;
      if ( GachaRecord::getGachaTypeWeight::_lambda_const_auto_24___::operator()_unsigned_int_(
             (const GachaRecord::getGachaTypeWeight::<lambda(const auto:24&)> *const)(v5 + 128),
             &gacha_item_type) )
      {
        common::milog::MiLogStream::create(
          &v60,
          &common::milog::MiLogDefault::default_log_obj_,
          2u,
          "./src/player/gacha/player_gacha_comp.cpp",
          "getGachaTypeWeight",
          143);
        v10 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                &v60,
                (const char (*)[22])"Skip gacha_item_type:");
        if ( *(_BYTE *)(((unsigned __int64)&gacha_prob_config->gacha_item_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&gacha_prob_config->gacha_item_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&gacha_prob_config->gacha_item_type);
        }
        val = (char *)data::enumValToStr(gacha_prob_config->gacha_item_type);
        common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v10, (const char *const *)&val);
        common::milog::MiLogStream::~MiLogStream(&v60);
      }
      else
      {
        *(_QWORD *)(v5 + 160) = &`vtable for'data::GachaGuaranteeTypeWeight + 2;
        *(_DWORD *)(v5 + 168) = 0;
        *(_DWORD *)(v5 + 172) = 0;
        if ( *(_BYTE *)(((unsigned __int64)&gacha_prob_config->base_prob >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&gacha_prob_config->base_prob >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&gacha_prob_config->base_prob);
        }
        *(_DWORD *)(v5 + 48) = gacha_prob_config->base_prob;
        *(_DWORD *)(v5 + 64) = 0;
        *(_DWORD *)(v5 + 80) = 1;
        if ( *(_BYTE *)(((unsigned __int64)&gacha_prob_config->gacha_item_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&gacha_prob_config->gacha_item_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&gacha_prob_config->gacha_item_type);
        }
        *(_DWORD *)(v5 + 96) = GachaRecord::getLastItemTypeGachaTimes(this, gacha_prob_config->gacha_item_type);
        if ( *(_BYTE *)(((unsigned __int64)&this->total_gacha_times >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->total_gacha_times >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->total_gacha_times);
        }
        if ( this->total_gacha_times >= *(_DWORD *)(v5 + 96) )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->total_gacha_times >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->total_gacha_times >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&this->total_gacha_times);
          }
          *(_DWORD *)(v5 + 80) = this->total_gacha_times - *(_DWORD *)(v5 + 96) + 2;
        }
        else
        {
          common::milog::MiLogStream::create(
            &v60,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/gacha/player_gacha_comp.cpp",
            "getGachaTypeWeight",
            154);
          v11 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                  &v60,
                  (const char (*)[19])"total_gacha_times:");
          v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &this->total_gacha_times);
          v13 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(v12, (const char (*)[42])off_2526A520);
          v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v13,
                  (const unsigned int *)(v5 + 96));
          v15 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                  v14,
                  (const char (*)[18])" gacha_item_type:");
          if ( *(_BYTE *)(((unsigned __int64)&gacha_prob_config->gacha_item_type >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&gacha_prob_config->gacha_item_type >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&gacha_prob_config->gacha_item_type);
          }
          val = (char *)data::enumValToStr(gacha_prob_config->gacha_item_type);
          common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v15, (const char *const *)&val);
          common::milog::MiLogStream::~MiLogStream(&v60);
        }
        if ( *(_BYTE *)(((unsigned __int64)&gacha_prob_config->is_guaranteed >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)gacha_prob_config + 28) & 7) >= *(_BYTE *)(((unsigned __int64)&gacha_prob_config->is_guaranteed >> 3)
                                                                         + 0x7FFF8000) )
        {
          __asan_report_load1(&gacha_prob_config->is_guaranteed);
        }
        if ( gacha_prob_config->is_guaranteed )
        {
          if ( *(_BYTE *)(((unsigned __int64)&gacha_prob_config->start_guarantee_count >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&gacha_prob_config->start_guarantee_count >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&gacha_prob_config->start_guarantee_count);
          }
          if ( gacha_prob_config->start_guarantee_count < *(_DWORD *)(v5 + 80) )
          {
            v16 = *(_DWORD *)(v5 + 80) - gacha_prob_config->start_guarantee_count;
            if ( *(_BYTE *)(((unsigned __int64)&gacha_prob_config->inc_guarantee_prob >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)gacha_prob_config + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gacha_prob_config->inc_guarantee_prob >> 3)
                                                                               + 0x7FFF8000) )
            {
              __asan_report_load4(&gacha_prob_config->inc_guarantee_prob);
            }
            *(_DWORD *)(v5 + 64) += gacha_prob_config->inc_guarantee_prob * v16;
          }
        }
        if ( *(_BYTE *)(((unsigned __int64)&gacha_prob_config->base_prob >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&gacha_prob_config->base_prob >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&gacha_prob_config->base_prob);
        }
        *(_DWORD *)(v5 + 48) = gacha_prob_config->base_prob + *(_DWORD *)(v5 + 64);
        if ( *(_BYTE *)(((unsigned __int64)&gacha_prob_config->gacha_item_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&gacha_prob_config->gacha_item_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&gacha_prob_config->gacha_item_type);
        }
        *(_DWORD *)(v5 + 168) = gacha_prob_config->gacha_item_type;
        *(_DWORD *)(v5 + 172) = *(_DWORD *)(v5 + 48);
        v17 = std::move<data::GachaGuaranteeTypeWeight &>((data::GachaGuaranteeTypeWeight *)(v5 + 160));
        std::vector<data::GachaGuaranteeTypeWeight>::emplace_back<data::GachaGuaranteeTypeWeight>(
          (std::vector<data::GachaGuaranteeTypeWeight> *const)(v5 + 192),
          v17,
          v17);
        common::milog::MiLogStream::create(
          &v59,
          &common::milog::MiLogDefault::default_log_obj_,
          2u,
          "./src/player/gacha/player_gacha_comp.cpp",
          "getGachaTypeWeight",
          173);
        v18 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v59, (const char (*)[14])"GachaRecord: ");
        GachaRecord::getDesc[abi:cxx11]((std::string *)&v60, this);
        v19 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v18, (const std::string *)&v60);
        v20 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                v19,
                (const char (*)[18])" gacha_item_type:");
        if ( *(_BYTE *)(((unsigned __int64)&gacha_prob_config->gacha_item_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&gacha_prob_config->gacha_item_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&gacha_prob_config->gacha_item_type);
        }
        val = (char *)data::enumValToStr(gacha_prob_config->gacha_item_type);
        v21 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v20, (const char *const *)&val);
        v22 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                v21,
                (const char (*)[29])" last_item_type_gacha_times:");
        v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v22,
                (const unsigned int *)(v5 + 96));
        v24 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                v23,
                (const char (*)[28])" cur_item_type_gacha_times:");
        v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v24,
                (const unsigned int *)(v5 + 80));
        v26 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v25, (const char (*)[13])" add_weight:");
        v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v26,
                (const unsigned int *)(v5 + 64));
        v28 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v27, (const char (*)[9])" weight:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, (const unsigned int *)(v5 + 48));
        std::string::~string(&v60);
        common::milog::MiLogStream::~MiLogStream(&v59);
        data::GachaGuaranteeTypeWeight::~GachaGuaranteeTypeWeight((data::GachaGuaranteeTypeWeight *const)(v5 + 160));
      }
      __gnu_cxx::__normal_iterator<data::GachaProbRuleConfig *,std::vector<data::GachaProbRuleConfig>>::operator++(&__for_begin);
    }
    M_current = std::vector<data::GachaGuaranteeTypeWeight>::end((std::vector<data::GachaGuaranteeTypeWeight> *const)(v5 + 192))._M_current;
    v30._M_current = std::vector<data::GachaGuaranteeTypeWeight>::begin((std::vector<data::GachaGuaranteeTypeWeight> *const)(v5 + 192))._M_current;
    std::sort___gnu_cxx::__normal_iterator_data::GachaGuaranteeTypeWeight__std::vector_data::GachaGuaranteeTypeWeight____GachaRecord::getGachaTypeWeight_uint32_t_data::GachaItemParentType_const_std::vector_unsigned_int___::_lambda_const_auto_25__const_auto_26_____(
      v30,
      (__gnu_cxx::__normal_iterator<data::GachaGuaranteeTypeWeight*,std::vector<data::GachaGuaranteeTypeWeight> >)M_current,
      v31);
    *(_DWORD *)(v5 + 80) = 0;
    std::vector<data::GachaGuaranteeTypeWeight>::vector((std::vector<data::GachaGuaranteeTypeWeight> *const)(v5 + 320));
    __for_range_0 = (std::vector<data::GachaGuaranteeTypeWeight> *)(v5 + 192);
    __for_begin._M_current = (data::GachaProbRuleConfig *)std::vector<data::GachaGuaranteeTypeWeight>::begin((std::vector<data::GachaGuaranteeTypeWeight> *const)(v5 + 192))._M_current;
    __for_end._M_current = (data::GachaProbRuleConfig *)std::vector<data::GachaGuaranteeTypeWeight>::end(__for_range_0)._M_current;
    while ( __gnu_cxx::operator!=<data::GachaGuaranteeTypeWeight *,std::vector<data::GachaGuaranteeTypeWeight>>(
              (const __gnu_cxx::__normal_iterator<data::GachaGuaranteeTypeWeight*,std::vector<data::GachaGuaranteeTypeWeight> > *)&__for_begin,
              (const __gnu_cxx::__normal_iterator<data::GachaGuaranteeTypeWeight*,std::vector<data::GachaGuaranteeTypeWeight> > *)&__for_end) )
    {
      v32 = __gnu_cxx::__normal_iterator<data::GachaGuaranteeTypeWeight *,std::vector<data::GachaGuaranteeTypeWeight>>::operator*((const __gnu_cxx::__normal_iterator<data::GachaGuaranteeTypeWeight*,std::vector<data::GachaGuaranteeTypeWeight> > *const)&__for_begin);
      item_type_weight = v32;
      *(_DWORD *)(v5 + 96) = 10000 - *(_DWORD *)(v5 + 80);
      p_weight = &v32->weight;
      v34 = (uint32_t *)std::min<unsigned int>((const unsigned int *)(v5 + 96), &v32->weight);
      v35 = v34;
      if ( *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v34 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v34);
      }
      v36 = *v35;
      v37 = *(_BYTE *)(((unsigned __int64)&item_type_weight->weight >> 3) + 0x7FFF8000);
      LOBYTE(p_weight) = v37 != 0;
      v38 = (v37 != 0) & (unsigned __int8)((char)((((_BYTE)item_type_weight + 12) & 7) + 3) >= v37);
      if ( (_BYTE)v38 )
        __asan_report_store4(&item_type_weight->weight, p_weight, v38);
      item_type_weight->weight = v36;
      *(_DWORD *)(v5 + 80) += item_type_weight->weight;
      std::vector<data::GachaGuaranteeTypeWeight>::emplace_back<data::GachaGuaranteeTypeWeight&>(
        (std::vector<data::GachaGuaranteeTypeWeight> *const)(v5 + 320),
        item_type_weight,
        item_type_weight);
      common::milog::MiLogStream::create(
        &v59,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "./src/player/gacha/player_gacha_comp.cpp",
        "getGachaTypeWeight",
        192);
      v39 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v59, (const char (*)[14])"GachaRecord: ");
      GachaRecord::getDesc[abi:cxx11]((std::string *)&v60, this);
      v40 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v39, (const std::string *)&v60);
      v41 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
              v40,
              (const char (*)[18])" gacha_item_type:");
      if ( *(_BYTE *)(((unsigned __int64)&item_type_weight->gacha_item_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&item_type_weight->gacha_item_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&item_type_weight->gacha_item_type);
      }
      val = (char *)data::enumValToStr(item_type_weight->gacha_item_type);
      v42 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v41, (const char *const *)&val);
      v43 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v42, (const char (*)[9])" weight:");
      v44 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v43, &item_type_weight->weight);
      v45 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v44, (const char (*)[13])" total_prob:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v45, (const unsigned int *)(v5 + 80));
      std::string::~string(&v60);
      common::milog::MiLogStream::~MiLogStream(&v59);
      if ( *(_DWORD *)(v5 + 80) > 0x270Fu )
        break;
      __gnu_cxx::__normal_iterator<data::GachaGuaranteeTypeWeight *,std::vector<data::GachaGuaranteeTypeWeight>>::operator++((__gnu_cxx::__normal_iterator<data::GachaGuaranteeTypeWeight*,std::vector<data::GachaGuaranteeTypeWeight> > *const)&__for_begin);
    }
    std::vector<data::GachaGuaranteeTypeWeight>::vector(
      retstr,
      (std::vector<data::GachaGuaranteeTypeWeight> *)(v5 + 320));
    std::vector<data::GachaGuaranteeTypeWeight>::~vector((std::vector<data::GachaGuaranteeTypeWeight> *const)(v5 + 320));
  }
  std::vector<data::GachaProbRuleConfig>::~vector((std::vector<data::GachaProbRuleConfig> *const)(v5 + 256));
  std::vector<data::GachaGuaranteeTypeWeight>::~vector((std::vector<data::GachaGuaranteeTypeWeight> *const)(v5 + 192));
  if ( v61 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8028) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};

// Line 126: range 00000000141BA82E-00000000141BA911
bool __cdecl GachaRecord::getGachaTypeWeight::_lambda_const_auto_24___::operator()_unsigned_int_(
        const GachaRecord::getGachaTypeWeight::<lambda(const auto:24&)> *const __closure,
        const unsigned int *gacha_item_type)
{
  const unsigned int *M_current; // rbx
  const unsigned int *v3; // rcx
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > __lhs; // [rsp+10h] [rbp-20h] BYREF
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > __rhs; // [rsp+18h] [rbp-18h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  if ( std::vector<unsigned int>::empty(__closure->__gacha_item_type_vec) )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  __rhs._M_current = std::vector<unsigned int>::end(__closure->__gacha_item_type_vec)._M_current;
  M_current = std::vector<unsigned int>::end(__closure->__gacha_item_type_vec)._M_current;
  v3 = std::vector<unsigned int>::begin(__closure->__gacha_item_type_vec)._M_current;
  __lhs._M_current = std::find<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>,unsigned int>(
                       (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)v3,
                       (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current,
                       gacha_item_type)._M_current;
  return __gnu_cxx::operator==<unsigned int const*,std::vector<unsigned int>>(&__lhs, &__rhs);
};

// Line 178: range 00000000141DED1C-00000000141DEDBB
bool __cdecl GachaRecord::getGachaTypeWeight::_lambda_const_auto_25___const_auto_26___::operator()_data::GachaGuaranteeTypeWeight_data::GachaGuaranteeTypeWeight_(
        const GachaRecord::getGachaTypeWeight::<lambda(const auto:25&, const auto:26&)> *const __closure,
        const data::GachaGuaranteeTypeWeight *lhs,
        const data::GachaGuaranteeTypeWeight *rhs)
{
  uint32_t weight; // ecx

  if ( *(_BYTE *)(((unsigned __int64)&lhs->weight >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)lhs + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&lhs->weight >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&lhs->weight);
  }
  weight = lhs->weight;
  if ( *(_BYTE *)(((unsigned __int64)&rhs->weight >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)rhs + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rhs->weight >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&rhs->weight);
  }
  return weight > rhs->weight;
};

// Line 205: range 00000000141BB7EC-00000000141BB979
__int64 __fastcall GachaRecord::getLastItemParentTypeGachaTimes(
        GachaRecord *const this,
        uint32_t gacha_item_parent_type)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,GachaItemParentTypeData> >::pointer v6; // rdx
  GachaItemParentTypeData *p_second; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,GachaItemParentTypeData> >::_Self __y; // [rsp+18h] [rbp-88h] BYREF
  char v9[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 26 gacha_item_parent_type:204 64 8 8 iter:206";
  *(_QWORD *)(v2 + 16) = GachaRecord::getLastItemParentTypeGachaTimes;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = gacha_item_parent_type;
  *(std::map<unsigned int,GachaItemParentTypeData>::iterator *)(v2 + 64) = std::map<unsigned int,GachaItemParentTypeData>::find(
                                                                             &this->gacha_item_parent_type_data_map,
                                                                             (const std::map<unsigned int,GachaItemParentTypeData>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,GachaItemParentTypeData>::end(&this->gacha_item_parent_type_data_map)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,GachaItemParentTypeData> >::_Self *)(v2 + 64),
         &__y) )
  {
    result = 0LL;
  }
  else
  {
    v6 = std::_Rb_tree_iterator<std::pair<unsigned int const,GachaItemParentTypeData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,GachaItemParentTypeData> > *const)(v2 + 64));
    p_second = &v6->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
    }
    result = v6->second.last_gacha_times;
  }
  if ( v9 == (char *)v2 )
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

// Line 218: range 00000000141BB97A-00000000141BBA9D
void __cdecl GachaRecord::updateLastItemParentTypeGachaTimes(
        GachaRecord *const this,
        data::GachaItemParentType item_parent_type)
{
  std::map<unsigned int,GachaItemParentTypeData>::key_type *p_k; // rsi
  uint32_t total_gacha_times; // ecx
  char v4; // dl
  __int64 v5; // rdx
  std::map<unsigned int,GachaItemParentTypeData>::key_type __k; // [rsp+14h] [rbp-3Ch] BYREF
  GachaItemParentTypeData *gacha_item_parent_type_data; // [rsp+18h] [rbp-38h]
  common::milog::MiLogStream v8; // [rsp+20h] [rbp-30h] BYREF

  if ( item_parent_type )
  {
    __k = item_parent_type;
    p_k = &__k;
    gacha_item_parent_type_data = std::map<unsigned int,GachaItemParentTypeData>::operator[](
                                    &this->gacha_item_parent_type_data_map,
                                    &__k);
    if ( *(_BYTE *)(((unsigned __int64)&this->total_gacha_times >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->total_gacha_times >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->total_gacha_times);
    }
    total_gacha_times = this->total_gacha_times;
    v4 = *(_BYTE *)(((unsigned __int64)gacha_item_parent_type_data >> 3) + 0x7FFF8000);
    LOBYTE(p_k) = v4 != 0;
    v5 = (v4 != 0) & (unsigned __int8)((char)(((unsigned __int8)gacha_item_parent_type_data & 7) + 3) >= v4);
    if ( (_BYTE)v5 )
      __asan_report_store4(gacha_item_parent_type_data, p_k, v5);
    gacha_item_parent_type_data->last_gacha_times = total_gacha_times;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/gacha/player_gacha_comp.cpp",
      "updateLastItemParentTypeGachaTimes",
      221);
    common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
      &v8,
      (const char (*)[42])"updateLastItemParentTypeGachaTimes failed");
    common::milog::MiLogStream::~MiLogStream(&v8);
  }
};

// Line 232: range 00000000141BBA9E-00000000141BC58E
std::vector<data::GachaGuaranteeParentTypeWeight> *__fastcall GachaRecord::getGachaParentTypeWeight(
        std::vector<data::GachaGuaranteeParentTypeWeight> *retstr,
        GachaRecord *const this,
        uint32_t gacha_prob_rule_id)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  data::GachaParentProbRuleConfig *M_current; // r14
  std::vector<data::GachaParentProbRuleConfig>::iterator v9; // rax
  GachaRecord::getGachaParentTypeWeight::<lambda(const auto:27&, const auto:28&)> v10; // dl
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r14
  uint32_t v16; // ecx
  const unsigned int *v17; // rax
  _DWORD *v18; // rdx
  data::GachaGuaranteeParentTypeWeight *v19; // rax
  common::milog::MiLogStream *v20; // r14
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // r14
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  _BOOL4 v33; // r14d
  unsigned int __a; // [rsp+20h] [rbp-180h] BYREF
  unsigned int __b; // [rsp+24h] [rbp-17Ch] BYREF
  std::vector<data::GachaParentProbRuleConfig>::iterator __for_begin; // [rsp+28h] [rbp-178h] BYREF
  std::vector<data::GachaParentProbRuleConfig>::iterator __for_end; // [rsp+30h] [rbp-170h] BYREF
  char *val; // [rsp+38h] [rbp-168h] BYREF
  std::vector<data::GachaParentProbRuleConfig> *__for_range; // [rsp+40h] [rbp-160h]
  const data::GachaParentProbRuleConfig *gacha_parent_prob_config; // [rsp+48h] [rbp-158h]
  common::milog::MiLogStream v43; // [rsp+50h] [rbp-150h] BYREF
  common::milog::MiLogStream v44; // [rsp+70h] [rbp-130h] BYREF
  char v45[272]; // [rsp+90h] [rbp-110h] BYREF

  v3 = (unsigned __int64)v45;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "8 32 4 14 total_prob:246 48 4 29 cur_item_parent_type_prob:250 64 4 33 cur_item_parent_type_add_"
                        "prob:251 80 4 36 cur_item_parent_type_gacha_times:252 96 4 37 last_item_parent_type_gacha_times:"
                        "253 112 4 22 gacha_prob_rule_id:231 128 16 22 parent_type_weight:249 160 24 30 gacha_parent_prob_rule_vec:234";
  *(_QWORD *)(v3 + 16) = GachaRecord::getGachaParentTypeWeight;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -234556924;
  v5[536862723] = -234556924;
  v5[536862724] = -219021312;
  v5[536862725] = -218103808;
  v5[536862726] = -202116109;
  *(_DWORD *)(v3 + 112) = gacha_prob_rule_id;
  std::vector<data::GachaGuaranteeParentTypeWeight>::vector(retstr);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v3 + 128));
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
  GachaExcelConfigMgr::findGachaParentProbRuleVec(
    (std::vector<data::GachaParentProbRuleConfig> *)(v3 + 160),
    &v6->design_config.txt_config_mgr.gacha_config_mgr,
    *(_DWORD *)(v3 + 112));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 128));
  if ( std::vector<data::GachaParentProbRuleConfig>::empty((const std::vector<data::GachaParentProbRuleConfig> *const)(v3 + 160)) )
  {
    common::milog::MiLogStream::create(
      &v44,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/gacha/player_gacha_comp.cpp",
      "getGachaParentTypeWeight",
      237);
    v7 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           &v44,
           (const char (*)[36])"GachaProbRuleVec is empty, rule_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 112));
    common::milog::MiLogStream::~MiLogStream(&v44);
  }
  else
  {
    M_current = std::vector<data::GachaParentProbRuleConfig>::end((std::vector<data::GachaParentProbRuleConfig> *const)(v3 + 160))._M_current;
    v9._M_current = std::vector<data::GachaParentProbRuleConfig>::begin((std::vector<data::GachaParentProbRuleConfig> *const)(v3 + 160))._M_current;
    std::sort___gnu_cxx::__normal_iterator_data::GachaParentProbRuleConfig__std::vector_data::GachaParentProbRuleConfig____GachaRecord::getGachaParentTypeWeight_uint32_t_::_lambda_const_auto_27__const_auto_28_____(
      v9,
      (__gnu_cxx::__normal_iterator<data::GachaParentProbRuleConfig*,std::vector<data::GachaParentProbRuleConfig> >)M_current,
      v10);
    *(_DWORD *)(v3 + 32) = 0;
    __for_range = (std::vector<data::GachaParentProbRuleConfig> *)(v3 + 160);
    __for_begin._M_current = std::vector<data::GachaParentProbRuleConfig>::begin((std::vector<data::GachaParentProbRuleConfig> *const)(v3 + 160))._M_current;
    __for_end._M_current = std::vector<data::GachaParentProbRuleConfig>::end((std::vector<data::GachaParentProbRuleConfig> *const)(v3 + 160))._M_current;
    while ( __gnu_cxx::operator!=<data::GachaParentProbRuleConfig *,std::vector<data::GachaParentProbRuleConfig>>(
              &__for_begin,
              &__for_end) )
    {
      gacha_parent_prob_config = __gnu_cxx::__normal_iterator<data::GachaParentProbRuleConfig *,std::vector<data::GachaParentProbRuleConfig>>::operator*(&__for_begin);
      *(_QWORD *)(v3 + 128) = &`vtable for'data::GachaGuaranteeParentTypeWeight + 2;
      *(_DWORD *)(v3 + 136) = 0;
      *(_DWORD *)(v3 + 140) = 0;
      if ( *(_BYTE *)(((unsigned __int64)&gacha_parent_prob_config->base_prob >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)gacha_parent_prob_config + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gacha_parent_prob_config->base_prob >> 3)
                                                                                + 0x7FFF8000) )
      {
        __asan_report_load4(&gacha_parent_prob_config->base_prob);
      }
      *(_DWORD *)(v3 + 48) = gacha_parent_prob_config->base_prob;
      *(_DWORD *)(v3 + 64) = 0;
      *(_DWORD *)(v3 + 80) = 1;
      if ( *(_BYTE *)(((unsigned __int64)&gacha_parent_prob_config->gacha_item_parent_type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)gacha_parent_prob_config + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gacha_parent_prob_config->gacha_item_parent_type >> 3)
                                                                               + 0x7FFF8000) )
      {
        __asan_report_load4(&gacha_parent_prob_config->gacha_item_parent_type);
      }
      *(_DWORD *)(v3 + 96) = GachaRecord::getLastItemParentTypeGachaTimes(
                               this,
                               gacha_parent_prob_config->gacha_item_parent_type);
      if ( *(_BYTE *)(((unsigned __int64)&this->total_gacha_times >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->total_gacha_times >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->total_gacha_times);
      }
      if ( this->total_gacha_times >= *(_DWORD *)(v3 + 96) )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->total_gacha_times >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->total_gacha_times >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->total_gacha_times);
        }
        *(_DWORD *)(v3 + 80) = this->total_gacha_times - *(_DWORD *)(v3 + 96) + 2;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v44,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/gacha/player_gacha_comp.cpp",
          "getGachaParentTypeWeight",
          256);
        v11 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                &v44,
                (const char (*)[19])"total_gacha_times:");
        v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &this->total_gacha_times);
        v13 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(v12, (const char (*)[49])off_2526A9C0);
        v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v13,
                (const unsigned int *)(v3 + 96));
        v15 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                v14,
                (const char (*)[18])" gacha_item_type:");
        if ( *(_BYTE *)(((unsigned __int64)&gacha_parent_prob_config->gacha_item_parent_type >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)gacha_parent_prob_config + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gacha_parent_prob_config->gacha_item_parent_type >> 3)
                                                                                 + 0x7FFF8000) )
        {
          __asan_report_load4(&gacha_parent_prob_config->gacha_item_parent_type);
        }
        val = (char *)data::enumValToStr(gacha_parent_prob_config->gacha_item_parent_type);
        common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v15, (const char *const *)&val);
        common::milog::MiLogStream::~MiLogStream(&v44);
      }
      if ( *(char *)(((unsigned __int64)&gacha_parent_prob_config->is_guaranteed >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&gacha_parent_prob_config->is_guaranteed);
      if ( gacha_parent_prob_config->is_guaranteed )
      {
        if ( *(_BYTE *)(((unsigned __int64)&gacha_parent_prob_config->start_guarantee_count >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)gacha_parent_prob_config + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gacha_parent_prob_config->start_guarantee_count >> 3)
                                                                                  + 0x7FFF8000) )
        {
          __asan_report_load4(&gacha_parent_prob_config->start_guarantee_count);
        }
        if ( gacha_parent_prob_config->start_guarantee_count < *(_DWORD *)(v3 + 80) )
        {
          v16 = *(_DWORD *)(v3 + 80) - gacha_parent_prob_config->start_guarantee_count;
          if ( *(_BYTE *)(((unsigned __int64)&gacha_parent_prob_config->inc_guarantee_prob >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&gacha_parent_prob_config->inc_guarantee_prob >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&gacha_parent_prob_config->inc_guarantee_prob);
          }
          *(_DWORD *)(v3 + 64) += gacha_parent_prob_config->inc_guarantee_prob * v16;
        }
      }
      if ( *(_BYTE *)(((unsigned __int64)&gacha_parent_prob_config->base_prob >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)gacha_parent_prob_config + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gacha_parent_prob_config->base_prob >> 3)
                                                                                + 0x7FFF8000) )
      {
        __asan_report_load4(&gacha_parent_prob_config->base_prob);
      }
      __b = gacha_parent_prob_config->base_prob + *(_DWORD *)(v3 + 64);
      __a = 10000 - *(_DWORD *)(v3 + 32);
      v17 = std::min<unsigned int>(&__a, &__b);
      v18 = v17;
      if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v17 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v17);
      }
      *(_DWORD *)(v3 + 48) = *v18;
      if ( *(_BYTE *)(((unsigned __int64)&gacha_parent_prob_config->gacha_item_parent_type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)gacha_parent_prob_config + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gacha_parent_prob_config->gacha_item_parent_type >> 3)
                                                                               + 0x7FFF8000) )
      {
        __asan_report_load4(&gacha_parent_prob_config->gacha_item_parent_type);
      }
      *(_DWORD *)(v3 + 136) = gacha_parent_prob_config->gacha_item_parent_type;
      *(_DWORD *)(v3 + 140) = *(_DWORD *)(v3 + 48);
      v19 = std::move<data::GachaGuaranteeParentTypeWeight &>((data::GachaGuaranteeParentTypeWeight *)(v3 + 128));
      std::vector<data::GachaGuaranteeParentTypeWeight>::emplace_back<data::GachaGuaranteeParentTypeWeight>(
        retstr,
        v19,
        v19);
      common::milog::MiLogStream::create(
        &v43,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "./src/player/gacha/player_gacha_comp.cpp",
        "getGachaParentTypeWeight",
        275);
      v20 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v43, (const char (*)[14])"GachaRecord: ");
      GachaRecord::getDesc[abi:cxx11]((std::string *)&v44, this);
      v21 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v20, (const std::string *)&v44);
      v22 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
              v21,
              (const char (*)[25])" gacha_item_parent_type:");
      if ( *(_BYTE *)(((unsigned __int64)&gacha_parent_prob_config->gacha_item_parent_type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)gacha_parent_prob_config + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gacha_parent_prob_config->gacha_item_parent_type >> 3)
                                                                               + 0x7FFF8000) )
      {
        __asan_report_load4(&gacha_parent_prob_config->gacha_item_parent_type);
      }
      val = (char *)data::enumValToStr(gacha_parent_prob_config->gacha_item_parent_type);
      v23 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v22, (const char *const *)&val);
      v24 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
              v23,
              (const char (*)[36])" last_item_parent_type_gacha_times:");
      v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, (const unsigned int *)(v3 + 96));
      v26 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
              v25,
              (const char (*)[35])" cur_item_parent_type_gacha_times:");
      v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, (const unsigned int *)(v3 + 80));
      v28 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v27, (const char (*)[13])" add_weight:");
      v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, (const unsigned int *)(v3 + 64));
      v30 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v29, (const char (*)[9])" weight:");
      v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, (const unsigned int *)(v3 + 48));
      v32 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v31, (const char (*)[13])" total_prob:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, (const unsigned int *)(v3 + 32));
      std::string::~string(&v44);
      common::milog::MiLogStream::~MiLogStream(&v43);
      *(_DWORD *)(v3 + 32) += *(_DWORD *)(v3 + 48);
      v33 = *(_DWORD *)(v3 + 32) <= 0x270Fu;
      data::GachaGuaranteeParentTypeWeight::~GachaGuaranteeParentTypeWeight((data::GachaGuaranteeParentTypeWeight *const)(v3 + 128));
      if ( !v33 )
        break;
      __gnu_cxx::__normal_iterator<data::GachaParentProbRuleConfig *,std::vector<data::GachaParentProbRuleConfig>>::operator++(&__for_begin);
    }
    if ( *(_DWORD *)(v3 + 32) != 10000 )
    {
      common::milog::MiLogStream::create(
        &v44,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/gacha/player_gacha_comp.cpp",
        "getGachaParentTypeWeight",
        289);
      common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
        &v44,
        (const char (*)[24])"total_prob is not 10000");
      common::milog::MiLogStream::~MiLogStream(&v44);
    }
  }
  std::vector<data::GachaParentProbRuleConfig>::~vector((std::vector<data::GachaParentProbRuleConfig> *const)(v3 + 160));
  if ( v45 == (char *)v3 )
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
  return retstr;
};

// Line 241: range 00000000141DF99A-00000000141DFA29
bool __cdecl GachaRecord::getGachaParentTypeWeight::_lambda_const_auto_27___const_auto_28___::operator()_data::GachaParentProbRuleConfig_data::GachaParentProbRuleConfig_(
        const GachaRecord::getGachaParentTypeWeight::<lambda(const auto:27&, const auto:28&)> *const __closure,
        const data::GachaParentProbRuleConfig *lhs,
        const data::GachaParentProbRuleConfig *rhs)
{
  uint32_t round_table_priority; // ecx

  if ( *(_BYTE *)(((unsigned __int64)&lhs->round_table_priority >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&lhs->round_table_priority >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&lhs->round_table_priority);
  }
  round_table_priority = lhs->round_table_priority;
  if ( *(_BYTE *)(((unsigned __int64)&rhs->round_table_priority >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&rhs->round_table_priority >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&rhs->round_table_priority);
  }
  return round_table_priority < rhs->round_table_priority;
};

// Line 296: range 00000000141BC590-00000000141BCC91
__int64 __fastcall GachaRecord::getGachaCostItem(
        GachaRecord *const this,
        uint32_t gacha_times,
        unsigned __int64 gacha_schedule_config)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  uint32_t v6; // ecx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  __int64 result; // rax
  common::milog::MiLogStream *v12; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  const data::GachaNewbieDataConfig *gacha_newbie_data_config_ptr; // [rsp+28h] [rbp-B8h]
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
  *(_QWORD *)(v3 + 8) = "2 48 4 15 gacha_times:295 64 16 14 item_param:297";
  *(_QWORD *)(v3 + 16) = GachaRecord::getGachaCostItem;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202178560;
  *(_DWORD *)(v3 + 48) = gacha_times;
  *(_DWORD *)(v3 + 64) = 0;
  *(_DWORD *)(v3 + 68) = 0;
  *(_DWORD *)(v3 + 72) = 0;
  *(_DWORD *)(v3 + 76) = 0;
  *(_DWORD *)(v3 + 68) = std::numeric_limits<unsigned int>::max();
  if ( *(_BYTE *)((gacha_schedule_config >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)((gacha_schedule_config >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(gacha_schedule_config);
  }
  v6 = *(_DWORD *)gacha_schedule_config;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_schedule_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_schedule_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->cur_schedule_id);
  }
  if ( v6 != this->cur_schedule_id )
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/gacha/player_gacha_comp.cpp",
      "getGachaCostItem",
      301);
    v7 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
           &v17,
           (const char (*)[29])"schedule_config schedule_id:");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
           v7,
           (const unsigned int *)gacha_schedule_config);
    v9 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v8, (const char (*)[18])" cur_schedule_id:");
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &this->cur_schedule_id);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v10, (const char (*)[12])" not match!");
    common::milog::MiLogStream::~MiLogStream(&v17);
    result = *(_QWORD *)(v3 + 64);
    goto LABEL_43;
  }
  if ( *(_DWORD *)(v3 + 48) != 1 && *(_DWORD *)(v3 + 48) != 10 )
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/gacha/player_gacha_comp.cpp",
      "getGachaCostItem",
      307);
    v12 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
            &v17,
            (const char (*)[34])"gacha_times invalid, gacha_times:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v17);
    result = *(_QWORD *)(v3 + 64);
    goto LABEL_43;
  }
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  if ( this->gacha_type == GACHA_TYPE_NEWBIE )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v16);
    v13 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v16);
    gacha_newbie_data_config_ptr = GachaExcelConfigMgr::findGachaNewbieDataConfig(&v13->design_config.txt_config_mgr.gacha_config_mgr);
    std::shared_ptr<Config>::~shared_ptr(&v16);
    if ( !gacha_newbie_data_config_ptr )
    {
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/gacha/player_gacha_comp.cpp",
        "getGachaCostItem",
        316);
      common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
        &v17,
        (const char (*)[33])"findGachaNewbieDataConfig failed");
      common::milog::MiLogStream::~MiLogStream(&v17);
      result = *(_QWORD *)(v3 + 64);
      goto LABEL_43;
    }
    if ( *(_DWORD *)(v3 + 48) == 10 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->total_ten_gacha_times >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->total_ten_gacha_times >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->total_ten_gacha_times);
      }
      if ( this->total_ten_gacha_times )
      {
        if ( *(_BYTE *)(((unsigned __int64)&gacha_newbie_data_config_ptr->ten_cost_item_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&gacha_newbie_data_config_ptr->ten_cost_item_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&gacha_newbie_data_config_ptr->ten_cost_item_id);
        }
        *(_DWORD *)(v3 + 64) = gacha_newbie_data_config_ptr->ten_cost_item_id;
        if ( *(_BYTE *)(((unsigned __int64)&gacha_newbie_data_config_ptr->ten_cost_item_num >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)gacha_newbie_data_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gacha_newbie_data_config_ptr->ten_cost_item_num >> 3)
                                                                                      + 0x7FFF8000) )
        {
          __asan_report_load4(&gacha_newbie_data_config_ptr->ten_cost_item_num);
        }
        *(_DWORD *)(v3 + 68) = gacha_newbie_data_config_ptr->ten_cost_item_num;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&gacha_newbie_data_config_ptr->first_ten_cost_item_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&gacha_newbie_data_config_ptr->first_ten_cost_item_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&gacha_newbie_data_config_ptr->first_ten_cost_item_id);
        }
        *(_DWORD *)(v3 + 64) = gacha_newbie_data_config_ptr->first_ten_cost_item_id;
        if ( *(_BYTE *)(((unsigned __int64)&gacha_newbie_data_config_ptr->first_ten_cost_item_num >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)gacha_newbie_data_config_ptr + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gacha_newbie_data_config_ptr->first_ten_cost_item_num >> 3)
                                                                                      + 0x7FFF8000) )
        {
          __asan_report_load4(&gacha_newbie_data_config_ptr->first_ten_cost_item_num);
        }
        *(_DWORD *)(v3 + 68) = gacha_newbie_data_config_ptr->first_ten_cost_item_num;
      }
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&gacha_newbie_data_config_ptr->single_cost_item_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&gacha_newbie_data_config_ptr->single_cost_item_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&gacha_newbie_data_config_ptr->single_cost_item_id);
      }
      *(_DWORD *)(v3 + 64) = gacha_newbie_data_config_ptr->single_cost_item_id;
      if ( *(_BYTE *)(((unsigned __int64)&gacha_newbie_data_config_ptr->single_cost_item_num >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)gacha_newbie_data_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gacha_newbie_data_config_ptr->single_cost_item_num >> 3)
                                                                                    + 0x7FFF8000) )
      {
        __asan_report_load4(&gacha_newbie_data_config_ptr->single_cost_item_num);
      }
      *(_DWORD *)(v3 + 68) = gacha_newbie_data_config_ptr->single_cost_item_num;
    }
  }
  else
  {
    if ( *(_BYTE *)(((gacha_schedule_config + 16) >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((gacha_schedule_config + 16) >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(gacha_schedule_config + 16);
    }
    *(_DWORD *)(v3 + 64) = *(_DWORD *)(gacha_schedule_config + 16);
    if ( *(_BYTE *)(((gacha_schedule_config + 20) >> 3) + 0x7FFF8000) != 0
      && (char)(((gacha_schedule_config + 20) & 7) + 3) >= *(_BYTE *)(((gacha_schedule_config + 20) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(gacha_schedule_config + 20);
    }
    *(_DWORD *)(v3 + 68) = *(_DWORD *)(gacha_schedule_config + 20) * *(_DWORD *)(v3 + 48);
  }
  result = *(_QWORD *)(v3 + 64);
LABEL_43:
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
  return result;
};

// Line 351: range 00000000141BCC92-00000000141BCE59
uint32_t __cdecl GachaRecord::getLeftGachaTimes(GachaRecord *const this)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v1; // rax
  uint32_t gacha_times_limit; // ecx
  const data::GachaNewbieDataConfig *gacha_newbie_data_config_ptr; // [rsp+18h] [rbp-48h]
  std::shared_ptr<Config> v5; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v6; // [rsp+30h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  if ( this->gacha_type != GACHA_TYPE_NEWBIE )
    return std::numeric_limits<unsigned int>::max();
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v5);
  v1 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v5);
  gacha_newbie_data_config_ptr = GachaExcelConfigMgr::findGachaNewbieDataConfig(&v1->design_config.txt_config_mgr.gacha_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v5);
  if ( gacha_newbie_data_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&gacha_newbie_data_config_ptr->gacha_times_limit >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&gacha_newbie_data_config_ptr->gacha_times_limit >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&gacha_newbie_data_config_ptr->gacha_times_limit);
    }
    gacha_times_limit = gacha_newbie_data_config_ptr->gacha_times_limit;
    if ( *(_BYTE *)(((unsigned __int64)&this->total_gacha_times >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->total_gacha_times >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->total_gacha_times);
    }
    if ( gacha_times_limit <= this->total_gacha_times )
      return 0;
    else
      return gacha_newbie_data_config_ptr->gacha_times_limit - this->total_gacha_times;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/gacha/player_gacha_comp.cpp",
      "getLeftGachaTimes",
      357);
    common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
      &v6,
      (const char (*)[33])"findGachaNewbieDataConfig failed");
    common::milog::MiLogStream::~MiLogStream(&v6);
    return 0;
  }
};

// Line 379: range 00000000141BCE5A-00000000141BCFC6
uint32_t __cdecl GachaRecord::getGachaTimesLimit(GachaRecord *const this)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v1; // rax
  const data::GachaNewbieDataConfig *gacha_newbie_data_config_ptr; // [rsp+18h] [rbp-48h]
  std::shared_ptr<Config> v4; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v5; // [rsp+30h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  if ( this->gacha_type != GACHA_TYPE_NEWBIE )
    return std::numeric_limits<unsigned int>::max();
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v4);
  v1 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v4);
  gacha_newbie_data_config_ptr = GachaExcelConfigMgr::findGachaNewbieDataConfig(&v1->design_config.txt_config_mgr.gacha_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v4);
  if ( gacha_newbie_data_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&gacha_newbie_data_config_ptr->gacha_times_limit >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&gacha_newbie_data_config_ptr->gacha_times_limit >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&gacha_newbie_data_config_ptr->gacha_times_limit);
    }
    return gacha_newbie_data_config_ptr->gacha_times_limit;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/gacha/player_gacha_comp.cpp",
      "getGachaTimesLimit",
      385);
    common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
      &v5,
      (const char (*)[33])"findGachaNewbieDataConfig failed");
    common::milog::MiLogStream::~MiLogStream(&v5);
    return 0;
  }
};

// Line 400: range 00000000141BCFC8-00000000141BD15A
__int64 __fastcall GachaRecord::getGachaNoUpTimes(GachaRecord *const this, uint32_t gacha_item_parent_type)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,GachaUpData> >::pointer v6; // rdx
  GachaUpData *p_second; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,GachaUpData> >::_Self __y; // [rsp+18h] [rbp-88h] BYREF
  char v9[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 26 gacha_item_parent_type:399 64 8 8 iter:401";
  *(_QWORD *)(v2 + 16) = GachaRecord::getGachaNoUpTimes;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = gacha_item_parent_type;
  *(std::map<unsigned int,GachaUpData>::iterator *)(v2 + 64) = std::map<unsigned int,GachaUpData>::find(
                                                                 &this->gacha_up_data_map,
                                                                 (const std::map<unsigned int,GachaUpData>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,GachaUpData>::end(&this->gacha_up_data_map)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,GachaUpData> >::_Self *)(v2 + 64),
         &__y) )
  {
    result = 0LL;
  }
  else
  {
    v6 = std::_Rb_tree_iterator<std::pair<unsigned int const,GachaUpData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,GachaUpData> > *const)(v2 + 64));
    p_second = &v6->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
    }
    result = v6->second.gacha_no_up_times;
  }
  if ( v9 == (char *)v2 )
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

// Line 413: range 00000000141BD15C-00000000141BD24B
void __cdecl GachaRecord::resetGachaNoUpTimes(GachaRecord *const this, data::GachaItemParentType item_parent_type)
{
  GachaUpData *v2; // rax
  __int64 v3; // rdx
  std::map<unsigned int,GachaUpData>::key_type __k; // [rsp+14h] [rbp-3Ch] BYREF
  GachaUpData *gacha_up_data; // [rsp+18h] [rbp-38h]
  common::milog::MiLogStream v6; // [rsp+20h] [rbp-30h] BYREF

  if ( item_parent_type )
  {
    __k = item_parent_type;
    v2 = std::map<unsigned int,GachaUpData>::operator[](&this->gacha_up_data_map, &__k);
    gacha_up_data = v2;
    v3 = (*(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)(((unsigned __int8)v2 & 7)
                                                                                              + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000));
    if ( (_BYTE)v3 )
      __asan_report_store4(v2, ((unsigned __int8)v2 & 7u) + 3, v3);
    gacha_up_data->gacha_no_up_times = 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/gacha/player_gacha_comp.cpp",
      "resetGachaNoUpTimes",
      416);
    common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
      &v6,
      (const char (*)[27])"resetGachaNoUpTimes failed");
    common::milog::MiLogStream::~MiLogStream(&v6);
  }
};

// Line 427: range 00000000141BD24C-00000000141BD340
void __cdecl GachaRecord::incGachaNoUpTimes(GachaRecord *const this, data::GachaItemParentType item_parent_type)
{
  GachaUpData *v2; // rax
  std::map<unsigned int,GachaUpData>::key_type __k; // [rsp+14h] [rbp-3Ch] BYREF
  GachaUpData *gacha_up_data; // [rsp+18h] [rbp-38h]
  common::milog::MiLogStream v5; // [rsp+20h] [rbp-30h] BYREF

  if ( item_parent_type )
  {
    __k = item_parent_type;
    v2 = std::map<unsigned int,GachaUpData>::operator[](&this->gacha_up_data_map, &__k);
    gacha_up_data = v2;
    if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v2);
    }
    ++gacha_up_data->gacha_no_up_times;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/gacha/player_gacha_comp.cpp",
      "incGachaNoUpTimes",
      430);
    common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
      &v5,
      (const char (*)[27])"resetGachaNoUpTimes failed");
    common::milog::MiLogStream::~MiLogStream(&v5);
  }
};

// Line 441: range 00000000141BD342-00000000141BDBB8
int32_t __cdecl GachaRecord::fromBin(GachaRecord *const this, const proto::GachaRecordBin *proto)
{
  __int64 v2; // rdx
  char v3; // al
  uint32_t v4; // ecx
  char v5; // dl
  __int64 v6; // rdx
  __int64 v7; // rdx
  char v8; // al
  __int64 v9; // rdx
  char v10; // al
  uint32_t v11; // ecx
  char v12; // dl
  __int64 v13; // rdx
  google::protobuf::Map<unsigned int,proto::GachaGuaranteeDataBin>::const_iterator *p_for_end; // rsi
  __int64 v16; // rdx
  char v17; // al
  uint32_t v18; // ecx
  char v19; // dl
  __int64 v20; // rdx
  unsigned int v21; // eax
  __int64 v22; // rdx
  char v23; // al
  uint32_t gacha_time; // ecx
  char v25; // dl
  __int64 v26; // rdx
  __int64 v27; // rdx
  char v28; // al
  const proto::GachaRecordBin *protoa; // [rsp+0h] [rbp-E0h]
  const google::protobuf::Map<unsigned int,proto::GachaGuaranteeDataBin> *__for_range; // [rsp+10h] [rbp-D0h]
  const google::protobuf::Map<unsigned int,proto::GachaItemTypeDataBin> *__for_range_0; // [rsp+18h] [rbp-C8h]
  const google::protobuf::Map<unsigned int,proto::GachaItemParentTypeDataBin> *__for_range_1; // [rsp+20h] [rbp-C0h]
  const google::protobuf::Map<unsigned int,proto::GachaUpDataBin> *__for_range_2; // [rsp+28h] [rbp-B8h]
  google::protobuf::Map<unsigned int,proto::GachaUpDataBin>::const_reference p_gacha_item_parent_type_0; // [rsp+30h] [rbp-B0h]
  std::map<unsigned int,GachaUpData>::mapped_type *gacha_up_data; // [rsp+38h] [rbp-A8h]
  google::protobuf::Map<unsigned int,proto::GachaItemParentTypeDataBin>::const_reference p_gacha_item_parent_type; // [rsp+40h] [rbp-A0h]
  std::map<unsigned int,GachaItemParentTypeData>::mapped_type *gacha_parent_item_type_data; // [rsp+48h] [rbp-98h]
  google::protobuf::Map<unsigned int,proto::GachaItemTypeDataBin>::const_reference p_gacha_item_type; // [rsp+50h] [rbp-90h]
  std::map<unsigned int,GachaItemTypeData>::mapped_type *gacha_item_type_data; // [rsp+58h] [rbp-88h]
  google::protobuf::Map<unsigned int,proto::GachaGuaranteeDataBin>::const_reference p_gacha_rule_id; // [rsp+60h] [rbp-80h]
  std::map<unsigned int,GachaGuaranteeData>::mapped_type *gacha_guarantee_data; // [rsp+68h] [rbp-78h]
  google::protobuf::Map<unsigned int,proto::GachaGuaranteeDataBin>::const_iterator __for_begin; // [rsp+70h] [rbp-70h] BYREF
  google::protobuf::Map<unsigned int,proto::GachaGuaranteeDataBin>::const_iterator __for_end; // [rsp+90h] [rbp-50h] BYREF
  common::milog::MiLogStream v44; // [rsp+B0h] [rbp-30h] BYREF

  protoa = proto;
  v2 = proto::GachaRecordBin::gacha_type(proto);
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(proto) = v3 != 0;
    __asan_report_store4(this, proto, v2);
  }
  this->gacha_type = v2;
  v4 = proto::GachaRecordBin::cur_schedule_id(protoa);
  v5 = *(_BYTE *)(((unsigned __int64)&this->cur_schedule_id >> 3) + 0x7FFF8000);
  LOBYTE(proto) = v5 != 0;
  v6 = (v5 != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= v5);
  if ( (_BYTE)v6 )
    __asan_report_store4(&this->cur_schedule_id, proto, v6);
  this->cur_schedule_id = v4;
  v7 = proto::GachaRecordBin::total_gacha_times(protoa);
  v8 = *(_BYTE *)(((unsigned __int64)&this->total_gacha_times >> 3) + 0x7FFF8000);
  if ( v8 != 0 && v8 <= 3 )
  {
    LOBYTE(proto) = v8 != 0;
    __asan_report_store4(&this->total_gacha_times, proto, v7);
  }
  this->total_gacha_times = v7;
  v9 = proto::GachaRecordBin::total_ten_gacha_times(protoa);
  v10 = *(_BYTE *)(((unsigned __int64)&this->total_ten_gacha_times >> 3) + 0x7FFF8000);
  if ( v10 != 0 && v10 <= 3 )
  {
    LOBYTE(proto) = v10 != 0;
    __asan_report_store4(&this->total_ten_gacha_times, proto, v9);
  }
  this->total_ten_gacha_times = v9;
  v11 = proto::GachaRecordBin::cur_schedule_total_gacha_times(protoa);
  v12 = *(_BYTE *)(((unsigned __int64)&this->cur_schedule_total_gacha_times >> 3) + 0x7FFF8000);
  LOBYTE(proto) = v12 != 0;
  v13 = (v12 != 0) & (unsigned __int8)((char)((((_BYTE)this + 12) & 7) + 3) >= v12);
  if ( (_BYTE)v13 )
    __asan_report_store4(&this->cur_schedule_total_gacha_times, proto, v13);
  this->cur_schedule_total_gacha_times = v11;
  __for_range = proto::GachaRecordBin::gacha_guarantee_map(protoa);
  google::protobuf::Map<unsigned int,proto::GachaGuaranteeDataBin>::begin(&__for_begin, __for_range);
  google::protobuf::Map<unsigned int,proto::GachaGuaranteeDataBin>::end(&__for_end, __for_range);
  while ( google::protobuf::operator!=(&__for_begin, &__for_end) )
  {
    p_gacha_rule_id = google::protobuf::Map<unsigned int,proto::GachaGuaranteeDataBin>::const_iterator::operator*(&__for_begin);
    gacha_guarantee_data = std::map<unsigned int,GachaGuaranteeData>::operator[](
                             &this->gacha_guarantee_map,
                             &p_gacha_rule_id->first);
    if ( GachaGuaranteeData::fromBin(gacha_guarantee_data, &p_gacha_rule_id->second) )
    {
      common::milog::MiLogStream::create(
        &v44,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/gacha/player_gacha_comp.cpp",
        "fromBin",
        452);
      common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
        &v44,
        (const char (*)[34])"GachaGuaranteeData fromBin failed");
      common::milog::MiLogStream::~MiLogStream(&v44);
      return -1;
    }
    google::protobuf::Map<unsigned int,proto::GachaGuaranteeDataBin>::const_iterator::operator++(&__for_begin);
  }
  __for_range_0 = proto::GachaRecordBin::gacha_item_type_data_map(protoa);
  google::protobuf::Map<unsigned int,proto::GachaItemTypeDataBin>::begin(
    (google::protobuf::Map<unsigned int,proto::GachaItemTypeDataBin>::const_iterator *)&__for_begin,
    __for_range_0);
  google::protobuf::Map<unsigned int,proto::GachaItemTypeDataBin>::end(
    (google::protobuf::Map<unsigned int,proto::GachaItemTypeDataBin>::const_iterator *)&__for_end,
    __for_range_0);
  while ( google::protobuf::operator!=(
            (const google::protobuf::Map<unsigned int,proto::GachaItemTypeDataBin>::const_iterator *)&__for_begin,
            (const google::protobuf::Map<unsigned int,proto::GachaItemTypeDataBin>::const_iterator *)&__for_end) )
  {
    p_gacha_item_type = google::protobuf::Map<unsigned int,proto::GachaItemTypeDataBin>::const_iterator::operator*((const google::protobuf::Map<unsigned int,proto::GachaItemTypeDataBin>::const_iterator *const)&__for_begin);
    gacha_item_type_data = std::map<unsigned int,GachaItemTypeData>::operator[](
                             &this->gacha_item_type_data_map,
                             &p_gacha_item_type->first);
    if ( GachaItemTypeData::fromBin(gacha_item_type_data, &p_gacha_item_type->second) )
    {
      common::milog::MiLogStream::create(
        &v44,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/gacha/player_gacha_comp.cpp",
        "fromBin",
        461);
      common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
        &v44,
        (const char (*)[33])"GachaItemTypeData fromBin failed");
      common::milog::MiLogStream::~MiLogStream(&v44);
      return -1;
    }
    google::protobuf::Map<unsigned int,proto::GachaItemTypeDataBin>::const_iterator::operator++((google::protobuf::Map<unsigned int,proto::GachaItemTypeDataBin>::const_iterator *const)&__for_begin);
  }
  __for_range_1 = proto::GachaRecordBin::gacha_item_parent_type_data_map(protoa);
  google::protobuf::Map<unsigned int,proto::GachaItemParentTypeDataBin>::begin(
    (google::protobuf::Map<unsigned int,proto::GachaItemParentTypeDataBin>::const_iterator *)&__for_begin,
    __for_range_1);
  google::protobuf::Map<unsigned int,proto::GachaItemParentTypeDataBin>::end(
    (google::protobuf::Map<unsigned int,proto::GachaItemParentTypeDataBin>::const_iterator *)&__for_end,
    __for_range_1);
  while ( google::protobuf::operator!=(
            (const google::protobuf::Map<unsigned int,proto::GachaItemParentTypeDataBin>::const_iterator *)&__for_begin,
            (const google::protobuf::Map<unsigned int,proto::GachaItemParentTypeDataBin>::const_iterator *)&__for_end) )
  {
    p_gacha_item_parent_type = google::protobuf::Map<unsigned int,proto::GachaItemParentTypeDataBin>::const_iterator::operator*((const google::protobuf::Map<unsigned int,proto::GachaItemParentTypeDataBin>::const_iterator *const)&__for_begin);
    gacha_parent_item_type_data = std::map<unsigned int,GachaItemParentTypeData>::operator[](
                                    &this->gacha_item_parent_type_data_map,
                                    &p_gacha_item_parent_type->first);
    if ( GachaItemParentTypeData::fromBin(gacha_parent_item_type_data, &p_gacha_item_parent_type->second) )
    {
      common::milog::MiLogStream::create(
        &v44,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/gacha/player_gacha_comp.cpp",
        "fromBin",
        470);
      common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
        &v44,
        (const char (*)[39])"GachaItemParentTypeData fromBin failed");
      common::milog::MiLogStream::~MiLogStream(&v44);
      return -1;
    }
    google::protobuf::Map<unsigned int,proto::GachaItemParentTypeDataBin>::const_iterator::operator++((google::protobuf::Map<unsigned int,proto::GachaItemParentTypeDataBin>::const_iterator *const)&__for_begin);
  }
  __for_range_2 = proto::GachaRecordBin::gacha_up_data_map(protoa);
  google::protobuf::Map<unsigned int,proto::GachaUpDataBin>::begin(
    (google::protobuf::Map<unsigned int,proto::GachaUpDataBin>::const_iterator *)&__for_begin,
    __for_range_2);
  google::protobuf::Map<unsigned int,proto::GachaUpDataBin>::end(
    (google::protobuf::Map<unsigned int,proto::GachaUpDataBin>::const_iterator *)&__for_end,
    __for_range_2);
  while ( 1 )
  {
    p_for_end = &__for_end;
    if ( !google::protobuf::operator!=(
            (const google::protobuf::Map<unsigned int,proto::GachaUpDataBin>::const_iterator *)&__for_begin,
            (const google::protobuf::Map<unsigned int,proto::GachaUpDataBin>::const_iterator *)&__for_end) )
      break;
    p_gacha_item_parent_type_0 = google::protobuf::Map<unsigned int,proto::GachaUpDataBin>::const_iterator::operator*((const google::protobuf::Map<unsigned int,proto::GachaUpDataBin>::const_iterator *const)&__for_begin);
    gacha_up_data = std::map<unsigned int,GachaUpData>::operator[](
                      &this->gacha_up_data_map,
                      &p_gacha_item_parent_type_0->first);
    if ( GachaUpData::fromBin(gacha_up_data, &p_gacha_item_parent_type_0->second) )
    {
      common::milog::MiLogStream::create(
        &v44,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/gacha/player_gacha_comp.cpp",
        "fromBin",
        479);
      common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
        &v44,
        (const char (*)[27])"GachaUpData fromBin failed");
      common::milog::MiLogStream::~MiLogStream(&v44);
      return -1;
    }
    google::protobuf::Map<unsigned int,proto::GachaUpDataBin>::const_iterator::operator++((google::protobuf::Map<unsigned int,proto::GachaUpDataBin>::const_iterator *const)&__for_begin);
  }
  v16 = proto::GachaRecordBin::wish_item_id(protoa);
  v17 = *(_BYTE *)(((unsigned __int64)&this->wish_item_id >> 3) + 0x7FFF8000);
  if ( v17 != 0 && v17 <= 3 )
  {
    LOBYTE(p_for_end) = v17 != 0;
    __asan_report_store4(&this->wish_item_id, p_for_end, v16);
  }
  this->wish_item_id = v16;
  v18 = proto::GachaRecordBin::wish_progress(protoa);
  v19 = *(_BYTE *)(((unsigned __int64)&this->wish_progress >> 3) + 0x7FFF8000);
  LOBYTE(p_for_end) = v19 != 0;
  v20 = (v19 != 0) & (unsigned __int8)((char)((((_BYTE)this - 36) & 7) + 3) >= v19);
  if ( (_BYTE)v20 )
    __asan_report_store4(&this->wish_progress, p_for_end, v20);
  this->wish_progress = v18;
  LOBYTE(v21) = proto::GachaRecordBin::is_new_wish(protoa);
  v22 = v21;
  v23 = *(_BYTE *)(((unsigned __int64)&this->is_new_wish >> 3) + 0x7FFF8000);
  if ( v23 < 0 )
  {
    LOBYTE(p_for_end) = v23 != 0;
    __asan_report_store1(&this->is_new_wish, p_for_end, v22);
  }
  this->is_new_wish = v22;
  gacha_time = proto::GachaRecordBin::cur_schedule_daily_last_gacha_time(protoa);
  v25 = *(_BYTE *)(((unsigned __int64)&this->cur_schedule_daily_last_gacha_time >> 3) + 0x7FFF8000);
  LOBYTE(p_for_end) = v25 != 0;
  v26 = (v25 != 0) & (unsigned __int8)((char)((((_BYTE)this - 28) & 7) + 3) >= v25);
  if ( (_BYTE)v26 )
    __asan_report_store4(&this->cur_schedule_daily_last_gacha_time, p_for_end, v26);
  this->cur_schedule_daily_last_gacha_time = gacha_time;
  v27 = proto::GachaRecordBin::cur_schedule_daily_gacha_times(protoa);
  v28 = *(_BYTE *)(((unsigned __int64)&this->cur_schedule_daily_gacha_times >> 3) + 0x7FFF8000);
  if ( v28 != 0 && v28 <= 3 )
  {
    LOBYTE(p_for_end) = v28 != 0;
    __asan_report_store4(&this->cur_schedule_daily_gacha_times, p_for_end, v27);
  }
  this->cur_schedule_daily_gacha_times = v27;
  return 0;
};

// Line 494: range 00000000141BDBBA-00000000141BE4FE
int32_t __cdecl GachaRecord::toBin(const GachaRecord *const this, proto::GachaRecordBin *proto)
{
  std::map<unsigned int,GachaGuaranteeData>::const_iterator __for_begin; // [rsp+10h] [rbp-100h] BYREF
  std::map<unsigned int,GachaGuaranteeData>::const_iterator __for_end; // [rsp+18h] [rbp-F8h] BYREF
  google::protobuf::Map<unsigned int,proto::GachaGuaranteeDataBin> *proto_guarantee_map; // [rsp+20h] [rbp-F0h]
  const std::map<unsigned int,GachaGuaranteeData> *__for_range; // [rsp+28h] [rbp-E8h]
  google::protobuf::Map<unsigned int,proto::GachaItemTypeDataBin> *proto_item_type_map; // [rsp+30h] [rbp-E0h]
  const std::map<unsigned int,GachaItemTypeData> *__for_range_0; // [rsp+38h] [rbp-D8h]
  google::protobuf::Map<unsigned int,proto::GachaItemParentTypeDataBin> *proto_item_parent_type_map; // [rsp+40h] [rbp-D0h]
  const std::map<unsigned int,GachaItemParentTypeData> *__for_range_1; // [rsp+48h] [rbp-C8h]
  google::protobuf::Map<unsigned int,proto::GachaUpDataBin> *proto_gacha_up_data_map; // [rsp+50h] [rbp-C0h]
  const std::map<unsigned int,GachaUpData> *__for_range_2; // [rsp+58h] [rbp-B8h]
  const std::pair<unsigned int const,GachaUpData> *v13; // [rsp+60h] [rbp-B0h]
  std::tuple_element<0,const std::pair<unsigned int const,GachaUpData> >::type *gacha_item_parent_type_0; // [rsp+68h] [rbp-A8h]
  std::tuple_element<1,const std::pair<unsigned int const,GachaUpData> >::type *gacha_up_data; // [rsp+70h] [rbp-A0h]
  proto::GachaUpDataBin *proto_gacha_up_data_bin; // [rsp+78h] [rbp-98h]
  const std::pair<unsigned int const,GachaItemParentTypeData> *v17; // [rsp+80h] [rbp-90h]
  std::tuple_element<0,const std::pair<unsigned int const,GachaItemParentTypeData> >::type *gacha_item_parent_type; // [rsp+88h] [rbp-88h]
  std::tuple_element<1,const std::pair<unsigned int const,GachaItemParentTypeData> >::type *gacha_item_parent_type_data; // [rsp+90h] [rbp-80h]
  proto::GachaItemParentTypeDataBin *proto_gacha_item_parent_type_data; // [rsp+98h] [rbp-78h]
  const std::pair<unsigned int const,GachaItemTypeData> *v21; // [rsp+A0h] [rbp-70h]
  std::tuple_element<0,const std::pair<unsigned int const,GachaItemTypeData> >::type *gacha_item_type; // [rsp+A8h] [rbp-68h]
  std::tuple_element<1,const std::pair<unsigned int const,GachaItemTypeData> >::type *gacha_item_type_data; // [rsp+B0h] [rbp-60h]
  proto::GachaItemTypeDataBin *proto_gacha_item_type_data; // [rsp+B8h] [rbp-58h]
  const std::pair<unsigned int const,GachaGuaranteeData> *v25; // [rsp+C0h] [rbp-50h]
  std::tuple_element<0,const std::pair<unsigned int const,GachaGuaranteeData> >::type *gacha_rule_id; // [rsp+C8h] [rbp-48h]
  std::tuple_element<1,const std::pair<unsigned int const,GachaGuaranteeData> >::type *gacha_guarantee_data; // [rsp+D0h] [rbp-40h]
  proto::GachaGuaranteeDataBin *proto_guarantee_data; // [rsp+D8h] [rbp-38h]
  common::milog::MiLogStream v29; // [rsp+E0h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  proto::GachaRecordBin::set_gacha_type(proto, this->gacha_type);
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_schedule_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_schedule_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->cur_schedule_id);
  }
  proto::GachaRecordBin::set_cur_schedule_id(proto, this->cur_schedule_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->total_gacha_times >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->total_gacha_times >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->total_gacha_times);
  }
  proto::GachaRecordBin::set_total_gacha_times(proto, this->total_gacha_times);
  if ( *(_BYTE *)(((unsigned __int64)&this->total_ten_gacha_times >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->total_ten_gacha_times >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->total_ten_gacha_times);
  }
  proto::GachaRecordBin::set_total_ten_gacha_times(proto, this->total_ten_gacha_times);
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_schedule_total_gacha_times >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_schedule_total_gacha_times >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->cur_schedule_total_gacha_times);
  }
  proto::GachaRecordBin::set_cur_schedule_total_gacha_times(proto, this->cur_schedule_total_gacha_times);
  proto_guarantee_map = proto::GachaRecordBin::mutable_gacha_guarantee_map(proto);
  __for_range = &this->gacha_guarantee_map;
  __for_begin._M_node = std::map<unsigned int,GachaGuaranteeData>::begin(&this->gacha_guarantee_map)._M_node;
  __for_end._M_node = std::map<unsigned int,GachaGuaranteeData>::end(&this->gacha_guarantee_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v25 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,GachaGuaranteeData>>::operator*(&__for_begin);
    gacha_rule_id = std::get<0ul,unsigned int const,GachaGuaranteeData>(v25);
    gacha_guarantee_data = (std::tuple_element<1,const std::pair<unsigned int const,GachaGuaranteeData> >::type *)std::get<1ul,unsigned int const,GachaGuaranteeData>(v25);
    proto_guarantee_data = google::protobuf::Map<unsigned int,proto::GachaGuaranteeDataBin>::operator[](
                             proto_guarantee_map,
                             gacha_rule_id);
    if ( GachaGuaranteeData::toBin(gacha_guarantee_data, proto_guarantee_data) )
    {
      common::milog::MiLogStream::create(
        &v29,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/gacha/player_gacha_comp.cpp",
        "toBin",
        506);
      common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
        &v29,
        (const char (*)[34])"gacha_guarantee_data.toBin failed");
      common::milog::MiLogStream::~MiLogStream(&v29);
      return -1;
    }
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,GachaGuaranteeData>>::operator++(&__for_begin);
  }
  proto_item_type_map = proto::GachaRecordBin::mutable_gacha_item_type_data_map(proto);
  __for_range_0 = &this->gacha_item_type_data_map;
  __for_begin._M_node = std::map<unsigned int,GachaItemTypeData>::begin(&this->gacha_item_type_data_map)._M_node;
  __for_end._M_node = std::map<unsigned int,GachaItemTypeData>::end(__for_range_0)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,GachaItemTypeData> >::_Self *)&__for_begin,
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,GachaItemTypeData> >::_Self *)&__for_end) )
  {
    v21 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,GachaItemTypeData>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,GachaItemTypeData> > *const)&__for_begin);
    gacha_item_type = std::get<0ul,unsigned int const,GachaItemTypeData>(v21);
    gacha_item_type_data = (std::tuple_element<1,const std::pair<unsigned int const,GachaItemTypeData> >::type *)std::get<1ul,unsigned int const,GachaItemTypeData>(v21);
    proto_gacha_item_type_data = google::protobuf::Map<unsigned int,proto::GachaItemTypeDataBin>::operator[](
                                   proto_item_type_map,
                                   gacha_item_type);
    if ( GachaItemTypeData::toBin(gacha_item_type_data, proto_gacha_item_type_data) )
    {
      common::milog::MiLogStream::create(
        &v29,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/gacha/player_gacha_comp.cpp",
        "toBin",
        517);
      common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
        &v29,
        (const char (*)[31])"GachaItemTypeData toBin failed");
      common::milog::MiLogStream::~MiLogStream(&v29);
      return -1;
    }
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,GachaItemTypeData>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,GachaItemTypeData> > *const)&__for_begin);
  }
  proto_item_parent_type_map = proto::GachaRecordBin::mutable_gacha_item_parent_type_data_map(proto);
  __for_range_1 = &this->gacha_item_parent_type_data_map;
  __for_begin._M_node = std::map<unsigned int,GachaItemParentTypeData>::begin(&this->gacha_item_parent_type_data_map)._M_node;
  __for_end._M_node = std::map<unsigned int,GachaItemParentTypeData>::end(__for_range_1)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,GachaItemParentTypeData> >::_Self *)&__for_begin,
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,GachaItemParentTypeData> >::_Self *)&__for_end) )
  {
    v17 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,GachaItemParentTypeData>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,GachaItemParentTypeData> > *const)&__for_begin);
    gacha_item_parent_type = std::get<0ul,unsigned int const,GachaItemParentTypeData>(v17);
    gacha_item_parent_type_data = (std::tuple_element<1,const std::pair<unsigned int const,GachaItemParentTypeData> >::type *)std::get<1ul,unsigned int const,GachaItemParentTypeData>(v17);
    proto_gacha_item_parent_type_data = google::protobuf::Map<unsigned int,proto::GachaItemParentTypeDataBin>::operator[](
                                          proto_item_parent_type_map,
                                          gacha_item_parent_type);
    if ( GachaItemParentTypeData::toBin(gacha_item_parent_type_data, proto_gacha_item_parent_type_data) )
    {
      common::milog::MiLogStream::create(
        &v29,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/gacha/player_gacha_comp.cpp",
        "toBin",
        528);
      common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
        &v29,
        (const char (*)[37])"GachaItemParentTypeData toBin failed");
      common::milog::MiLogStream::~MiLogStream(&v29);
      return -1;
    }
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,GachaItemParentTypeData>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,GachaItemParentTypeData> > *const)&__for_begin);
  }
  proto_gacha_up_data_map = proto::GachaRecordBin::mutable_gacha_up_data_map(proto);
  __for_range_2 = &this->gacha_up_data_map;
  __for_begin._M_node = std::map<unsigned int,GachaUpData>::begin(&this->gacha_up_data_map)._M_node;
  __for_end._M_node = std::map<unsigned int,GachaUpData>::end(__for_range_2)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,GachaUpData> >::_Self *)&__for_begin,
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,GachaUpData> >::_Self *)&__for_end) )
  {
    v13 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,GachaUpData>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,GachaUpData> > *const)&__for_begin);
    gacha_item_parent_type_0 = std::get<0ul,unsigned int const,GachaUpData>(v13);
    gacha_up_data = (std::tuple_element<1,const std::pair<unsigned int const,GachaUpData> >::type *)std::get<1ul,unsigned int const,GachaUpData>(v13);
    proto_gacha_up_data_bin = google::protobuf::Map<unsigned int,proto::GachaUpDataBin>::operator[](
                                proto_gacha_up_data_map,
                                gacha_item_parent_type_0);
    if ( GachaUpData::toBin(gacha_up_data, proto_gacha_up_data_bin) )
    {
      common::milog::MiLogStream::create(
        &v29,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/gacha/player_gacha_comp.cpp",
        "toBin",
        539);
      common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
        &v29,
        (const char (*)[25])"GachaUpData toBin failed");
      common::milog::MiLogStream::~MiLogStream(&v29);
      return -1;
    }
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,GachaUpData>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,GachaUpData> > *const)&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->wish_item_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->wish_item_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->wish_item_id);
  }
  proto::GachaRecordBin::set_wish_item_id(proto, this->wish_item_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->wish_progress >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->wish_progress >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->wish_progress);
  }
  proto::GachaRecordBin::set_wish_progress(proto, this->wish_progress);
  if ( *(char *)(((unsigned __int64)&this->is_new_wish >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_new_wish);
  proto::GachaRecordBin::set_is_new_wish(proto, this->is_new_wish);
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_schedule_daily_last_gacha_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_schedule_daily_last_gacha_time >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->cur_schedule_daily_last_gacha_time);
  }
  proto::GachaRecordBin::set_cur_schedule_daily_last_gacha_time(proto, this->cur_schedule_daily_last_gacha_time);
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_schedule_daily_gacha_times >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_schedule_daily_gacha_times >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cur_schedule_daily_gacha_times);
  }
  proto::GachaRecordBin::set_cur_schedule_daily_gacha_times(proto, this->cur_schedule_daily_gacha_times);
  return 0;
};

// Line 553: range 00000000141BE500-00000000141BE804
int32_t __cdecl PlayerGachaComp::fromBin(PlayerGachaComp *const this, const proto::PlayerDataBin *player_data_bin)
{
  google::protobuf::Map<unsigned int,proto::GachaRecordBin>::const_iterator *p_for_end; // rsi
  std::map<data::GachaType,GachaRecord> *p_gacha_record_map; // rcx
  common::milog::MiLogStream *v4; // rbx
  __int64 v6; // rdx
  char v7; // al
  uint32_t v8; // ecx
  char v9; // dl
  __int64 v10; // rdx
  __int64 gacha_time; // rdx
  char v12; // al
  std::map<data::GachaType,GachaRecord>::key_type __k; // [rsp+1Ch] [rbp-94h] BYREF
  const proto::PlayerGachaCompBin *proto_comp; // [rsp+20h] [rbp-90h]
  const google::protobuf::Map<unsigned int,proto::GachaRecordBin> *__for_range; // [rsp+28h] [rbp-88h]
  const unsigned int *p_gacha_type; // [rsp+30h] [rbp-80h]
  GachaRecord *gacha_record; // [rsp+38h] [rbp-78h]
  google::protobuf::Map<unsigned int,proto::GachaRecordBin>::const_iterator __for_begin; // [rsp+40h] [rbp-70h] BYREF
  google::protobuf::Map<unsigned int,proto::GachaRecordBin>::const_iterator __for_end; // [rsp+60h] [rbp-50h] BYREF
  common::milog::MiLogStream v20; // [rsp+80h] [rbp-30h] BYREF

  proto_comp = proto::PlayerDataBin::gacha_bin(player_data_bin);
  __for_range = proto::PlayerGachaCompBin::gacha_record_map(proto_comp);
  google::protobuf::Map<unsigned int,proto::GachaRecordBin>::begin(&__for_begin, __for_range);
  google::protobuf::Map<unsigned int,proto::GachaRecordBin>::end(&__for_end, __for_range);
  while ( 1 )
  {
    p_for_end = &__for_end;
    if ( !google::protobuf::operator!=(&__for_begin, &__for_end) )
      break;
    p_gacha_type = (const unsigned int *)google::protobuf::Map<unsigned int,proto::GachaRecordBin>::const_iterator::operator*(&__for_begin);
    p_gacha_record_map = &this->gacha_record_map_;
    if ( *(_BYTE *)(((unsigned __int64)p_gacha_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)p_gacha_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(p_gacha_type);
    }
    __k = *p_gacha_type;
    gacha_record = std::map<data::GachaType,GachaRecord>::operator[](p_gacha_record_map, &__k);
    if ( GachaRecord::fromBin(gacha_record, (const proto::GachaRecordBin *)(p_gacha_type + 2)) )
    {
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/gacha/player_gacha_comp.cpp",
        "fromBin",
        562);
      v4 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
             &v20,
             (const char (*)[34])"gacha_record fromBin failed, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      __k = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, (const unsigned int *)&__k);
      common::milog::MiLogStream::~MiLogStream(&v20);
      return -1;
    }
    google::protobuf::Map<unsigned int,proto::GachaRecordBin>::const_iterator::operator++(&__for_begin);
  }
  v6 = proto::PlayerGachaCompBin::gacha_random(proto_comp);
  v7 = *(_BYTE *)(((unsigned __int64)&this->gacha_random_ >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(p_for_end) = v7 != 0;
    __asan_report_store4(&this->gacha_random_, p_for_end, v6);
  }
  this->gacha_random_ = v6;
  v8 = proto::PlayerGachaCompBin::daily_gacha_times(proto_comp);
  v9 = *(_BYTE *)(((unsigned __int64)&this->daily_gacha_times_ >> 3) + 0x7FFF8000);
  LOBYTE(p_for_end) = v9 != 0;
  v10 = (v9 != 0) & (unsigned __int8)((char)((((_BYTE)this + 84) & 7) + 3) >= v9);
  if ( (_BYTE)v10 )
    __asan_report_store4(&this->daily_gacha_times_, p_for_end, v10);
  this->daily_gacha_times_ = v8;
  gacha_time = proto::PlayerGachaCompBin::last_gacha_time(proto_comp);
  v12 = *(_BYTE *)(((unsigned __int64)&this->last_gacha_time_ >> 3) + 0x7FFF8000);
  if ( v12 != 0 && v12 <= 3 )
  {
    LOBYTE(p_for_end) = v12 != 0;
    __asan_report_store4(&this->last_gacha_time_, p_for_end, gacha_time);
  }
  this->last_gacha_time_ = gacha_time;
  return 0;
};

// Line 574: range 00000000141BE806-00000000141BEB08
int32_t __cdecl PlayerGachaComp::toBin(PlayerGachaComp *const this, proto::PlayerDataBin *player_data_bin)
{
  common::milog::MiLogStream *v2; // rbx
  google::protobuf::Map<unsigned int,proto::GachaRecordBin>::key_type key; // [rsp+14h] [rbp-7Ch] BYREF
  std::map<data::GachaType,GachaRecord>::iterator __for_begin; // [rsp+18h] [rbp-78h] BYREF
  std::map<data::GachaType,GachaRecord>::iterator __for_end; // [rsp+20h] [rbp-70h] BYREF
  proto::PlayerGachaCompBin *proto_comp; // [rsp+28h] [rbp-68h]
  google::protobuf::Map<unsigned int,proto::GachaRecordBin> *proto_gacha_record_map; // [rsp+30h] [rbp-60h]
  std::map<data::GachaType,GachaRecord> *__for_range; // [rsp+38h] [rbp-58h]
  const std::pair<const data::GachaType,GachaRecord> *v10; // [rsp+40h] [rbp-50h]
  std::tuple_element<0,const std::pair<const data::GachaType,GachaRecord> >::type *gacha_type; // [rsp+48h] [rbp-48h]
  std::tuple_element<1,const std::pair<const data::GachaType,GachaRecord> >::type *gacha_record; // [rsp+50h] [rbp-40h]
  proto::GachaRecordBin *proto_gacha_record; // [rsp+58h] [rbp-38h]
  common::milog::MiLogStream v14; // [rsp+60h] [rbp-30h] BYREF

  proto_comp = proto::PlayerDataBin::mutable_gacha_bin(player_data_bin);
  proto_gacha_record_map = proto::PlayerGachaCompBin::mutable_gacha_record_map(proto_comp);
  __for_range = &this->gacha_record_map_;
  __for_begin._M_node = std::map<data::GachaType,GachaRecord>::begin(&this->gacha_record_map_)._M_node;
  __for_end._M_node = std::map<data::GachaType,GachaRecord>::end(&this->gacha_record_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v10 = std::_Rb_tree_iterator<std::pair<data::GachaType const,GachaRecord>>::operator*(&__for_begin);
    gacha_type = std::get<0ul,data::GachaType const,GachaRecord>(v10);
    gacha_record = (std::tuple_element<1,const std::pair<const data::GachaType,GachaRecord> >::type *)std::get<1ul,data::GachaType const,GachaRecord>(v10);
    if ( *(_BYTE *)(((unsigned __int64)gacha_type >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)gacha_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)gacha_type >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(gacha_type);
    }
    key = *gacha_type;
    proto_gacha_record = google::protobuf::Map<unsigned int,proto::GachaRecordBin>::operator[](
                           proto_gacha_record_map,
                           &key);
    if ( GachaRecord::toBin(gacha_record, proto_gacha_record) )
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/gacha/player_gacha_comp.cpp",
        "toBin",
        582);
      v2 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
             &v14,
             (const char (*)[32])"gacha_record toBin failed, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      key = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &key);
      common::milog::MiLogStream::~MiLogStream(&v14);
      return -1;
    }
    std::_Rb_tree_iterator<std::pair<data::GachaType const,GachaRecord>>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->gacha_random_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gacha_random_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->gacha_random_);
  }
  proto::PlayerGachaCompBin::set_gacha_random(proto_comp, this->gacha_random_);
  if ( *(_BYTE *)(((unsigned __int64)&this->daily_gacha_times_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->daily_gacha_times_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->daily_gacha_times_);
  }
  proto::PlayerGachaCompBin::set_daily_gacha_times(proto_comp, this->daily_gacha_times_);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_gacha_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_gacha_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->last_gacha_time_);
  }
  proto::PlayerGachaCompBin::set_last_gacha_time(proto_comp, this->last_gacha_time_);
  return 0;
};

// Line 595: range 00000000141BEB0A-00000000141BEEC9
int32_t __cdecl PlayerGachaComp::notifyAllData(PlayerGachaComp *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // rbx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  int32_t v5; // r14d
  int32_t result; // eax
  uint32_t cur_time; // [rsp+14h] [rbp-12Ch]
  std::vector<data::GachaScheduleConfig>::iterator __for_begin; // [rsp+18h] [rbp-128h] BYREF
  std::vector<data::GachaScheduleConfig>::iterator __for_end; // [rsp+20h] [rbp-120h] BYREF
  std::vector<data::GachaScheduleConfig> *__for_range; // [rsp+28h] [rbp-118h]
  const data::GachaScheduleConfig *gacha_schedule_config; // [rsp+30h] [rbp-110h]
  GachaRecord *gacha_record; // [rsp+38h] [rbp-108h]
  std::shared_ptr<Config> v13; // [rsp+40h] [rbp-100h] BYREF
  common::milog::MiLogStream v14; // [rsp+50h] [rbp-F0h] BYREF
  char v15[208]; // [rsp+70h] [rbp-D0h] BYREF

  v1 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 24 29 active_gacha_schedule_vec:597 96 24 10 notify:604";
  *(_QWORD *)(v1 + 16) = PlayerGachaComp::notifyAllData;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234881024;
  v3[536862722] = -218959118;
  v3[536862723] = -218103808;
  v3[536862724] = -202116109;
  cur_time = common::tools::TimeUtils::getNow();
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v13);
  v4 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v13);
  data::DbGachaConfigMgr::findActivieGachaSchedules(
    (std::vector<data::GachaScheduleConfig> *)(v1 + 32),
    &v4->design_config.db_config_mgr.db_local_config_mgr.gacha_config_mgr,
    cur_time);
  std::shared_ptr<Config>::~shared_ptr(&v13);
  if ( std::vector<data::GachaScheduleConfig>::empty((const std::vector<data::GachaScheduleConfig> *const)(v1 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/gacha/player_gacha_comp.cpp",
      "notifyAllData",
      600);
    common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
      &v14,
      (const char (*)[33])"active_gacha_schedule_vec.empty!");
    common::milog::MiLogStream::~MiLogStream(&v14);
    v5 = 0;
  }
  else
  {
    proto::GachaSimpleInfoNotify::GachaSimpleInfoNotify((proto::GachaSimpleInfoNotify *const)(v1 + 96));
    __for_range = (std::vector<data::GachaScheduleConfig> *)(v1 + 32);
    __for_begin._M_current = std::vector<data::GachaScheduleConfig>::begin((std::vector<data::GachaScheduleConfig> *const)(v1 + 32))._M_current;
    __for_end._M_current = std::vector<data::GachaScheduleConfig>::end((std::vector<data::GachaScheduleConfig> *const)(v1 + 32))._M_current;
    while ( __gnu_cxx::operator!=<data::GachaScheduleConfig *,std::vector<data::GachaScheduleConfig>>(
              &__for_begin,
              &__for_end) )
    {
      gacha_schedule_config = __gnu_cxx::__normal_iterator<data::GachaScheduleConfig *,std::vector<data::GachaScheduleConfig>>::operator*(&__for_begin);
      gacha_record = PlayerGachaComp::getGachaRecord(this, gacha_schedule_config);
      if ( *(char *)(((unsigned __int64)&gacha_record->is_new_wish >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&gacha_record->is_new_wish);
      if ( gacha_record->is_new_wish )
      {
        proto::GachaSimpleInfoNotify::set_is_new((proto::GachaSimpleInfoNotify *const)(v1 + 96), 1);
        break;
      }
      __gnu_cxx::__normal_iterator<data::GachaScheduleConfig *,std::vector<data::GachaScheduleConfig>>::operator++(&__for_begin);
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    v5 = Player::sendProto(this->player_, (const google::protobuf::Message *)(v1 + 96));
    proto::GachaSimpleInfoNotify::~GachaSimpleInfoNotify((proto::GachaSimpleInfoNotify *const)(v1 + 96));
  }
  std::vector<data::GachaScheduleConfig>::~vector((std::vector<data::GachaScheduleConfig> *const)(v1 + 32));
  result = v5;
  if ( v15 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 618: range 00000000141BEECA-00000000141BEEED
int32_t __cdecl PlayerGachaComp::onLogin(PlayerGachaComp *const this, bool is_new_player)
{
  PlayerGachaComp::tryRefresh(this);
  return 0;
};

// Line 624: range 00000000141BEEEE-00000000141BEF08
void __cdecl PlayerGachaComp::onDailyRefresh(PlayerGachaComp *const this)
{
  PlayerGachaComp::tryRefresh(this);
};

// Line 629: range 00000000141BEF0A-00000000141BFD28
int32_t __cdecl PlayerGachaComp::onGetGachaInfoReq(
        PlayerGachaComp *const this,
        const proto::GetGachaInfoReq *req,
        proto::GetGachaInfoRsp *rsp_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  PlayerBasicComp *BasicComp; // rax
  common::milog::MiLogStream *v7; // rbx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // r14
  __int64 v10; // rdx
  __int64 v11; // rdx
  uint32_t LeftGachaTimes; // eax
  uint32_t GachaTimesLimit; // eax
  unsigned int *v14; // rax
  uint32_t *v15; // rdx
  google::protobuf::RepeatedField<unsigned int> *v16; // rax
  google::protobuf::RepeatedField<unsigned int> *v17; // rax
  GachaExcelConfigMgr *p_gacha_config_mgr; // rcx
  bool isUnderMinorsRestrict; // dl
  bool isUnderGeneralRestrict; // dl
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-184h] BYREF
  uint32_t cur_time; // [rsp+30h] [rbp-180h]
  uint32_t item_id; // [rsp+34h] [rbp-17Ch]
  std::vector<data::GachaScheduleConfig>::iterator __for_begin; // [rsp+38h] [rbp-178h] BYREF
  std::vector<data::GachaScheduleConfig>::iterator __for_end; // [rsp+40h] [rbp-170h] BYREF
  std::vector<data::GachaUpConfig>::iterator __for_begin_0; // [rsp+48h] [rbp-168h] BYREF
  std::vector<data::GachaUpConfig>::iterator __for_end_0; // [rsp+50h] [rbp-160h] BYREF
  std::set<unsigned int>::iterator __for_begin_1; // [rsp+58h] [rbp-158h] BYREF
  std::set<unsigned int>::iterator __for_end_1; // [rsp+60h] [rbp-150h] BYREF
  std::vector<data::GachaScheduleConfig> *__for_range; // [rsp+68h] [rbp-148h]
  data::GachaScheduleConfig *gacha_schedule_config; // [rsp+70h] [rbp-140h]
  GachaRecord *gacha_record; // [rsp+78h] [rbp-138h]
  proto::GachaInfo *proto_gacha_info; // [rsp+80h] [rbp-130h]
  std::vector<data::GachaUpConfig> *__for_range_0; // [rsp+88h] [rbp-128h]
  const data::GachaWishConfig *wish_config_ptr; // [rsp+90h] [rbp-120h]
  const data::GachaUpConfig *up_config; // [rsp+98h] [rbp-118h]
  proto::GachaUpInfo *proto_up_info; // [rsp+A0h] [rbp-110h]
  const std::set<unsigned int> *__for_range_1; // [rsp+A8h] [rbp-108h]
  std::shared_ptr<Config> v41; // [rsp+B0h] [rbp-100h] BYREF
  common::milog::MiLogStream v42; // [rsp+C0h] [rbp-F0h] BYREF
  char v43[208]; // [rsp+E0h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v43;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 16 26 single_cost_item_param:655 64 16 23 ten_cost_item_param:664 96 24 29 active_gacha_schedule_vec:639";
  *(_QWORD *)(v3 + 16) = PlayerGachaComp::onGetGachaInfoReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -219021312;
  v5[536862723] = -218103808;
  v5[536862724] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  BasicComp = Player::getBasicComp(this->player_);
  if ( !PlayerBasicComp::isStateOpen(BasicComp, 0x1Fu) )
  {
    common::milog::MiLogStream::create(
      &v42,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/gacha/player_gacha_comp.cpp",
      "onGetGachaInfoReq",
      633);
    v7 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
           &v42,
           (const char (*)[33])"OPEN_STATE_GACHA is locked, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v42);
    proto::GetGachaInfoRsp::set_retcode(rsp_0, 141);
  }
  else
  {
    cur_time = common::tools::TimeUtils::getNow();
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v41);
    v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v41);
    data::DbGachaConfigMgr::findActivieGachaSchedules(
      (std::vector<data::GachaScheduleConfig> *)(v3 + 96),
      &v8->design_config.db_config_mgr.db_local_config_mgr.gacha_config_mgr,
      cur_time);
    std::shared_ptr<Config>::~shared_ptr(&v41);
    if ( std::vector<data::GachaScheduleConfig>::empty((const std::vector<data::GachaScheduleConfig> *const)(v3 + 96)) )
    {
      common::milog::MiLogStream::create(
        &v42,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/gacha/player_gacha_comp.cpp",
        "onGetGachaInfoReq",
        642);
      v9 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
             &v42,
             (const char (*)[31])"No active gacha schedule, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
      common::milog::MiLogStream::~MiLogStream(&v42);
      proto::GetGachaInfoRsp::set_retcode(rsp_0, 1401);
    }
    else
    {
      __for_range = (std::vector<data::GachaScheduleConfig> *)(v3 + 96);
      __for_begin._M_current = std::vector<data::GachaScheduleConfig>::begin((std::vector<data::GachaScheduleConfig> *const)(v3 + 96))._M_current;
      __for_end._M_current = std::vector<data::GachaScheduleConfig>::end((std::vector<data::GachaScheduleConfig> *const)(v3 + 96))._M_current;
      while ( __gnu_cxx::operator!=<data::GachaScheduleConfig *,std::vector<data::GachaScheduleConfig>>(
                &__for_begin,
                &__for_end) )
      {
        gacha_schedule_config = __gnu_cxx::__normal_iterator<data::GachaScheduleConfig *,std::vector<data::GachaScheduleConfig>>::operator*(&__for_begin);
        gacha_record = PlayerGachaComp::getGachaRecord(this, gacha_schedule_config);
        proto_gacha_info = proto::GetGachaInfoRsp::add_gacha_info_list(rsp_0);
        if ( *(_BYTE *)(((unsigned __int64)&gacha_schedule_config->gacha_type >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)gacha_schedule_config + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gacha_schedule_config->gacha_type >> 3)
                                                                              + 0x7FFF8000) )
        {
          __asan_report_load4(&gacha_schedule_config->gacha_type);
        }
        proto::GachaInfo::set_gacha_type(proto_gacha_info, gacha_schedule_config->gacha_type);
        if ( *(_BYTE *)(((unsigned __int64)gacha_schedule_config >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)gacha_schedule_config >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(gacha_schedule_config);
        }
        proto::GachaInfo::set_schedule_id(proto_gacha_info, gacha_schedule_config->schedule_id);
        if ( *(_BYTE *)(((unsigned __int64)&gacha_schedule_config->begin_time >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&gacha_schedule_config->begin_time >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&gacha_schedule_config->begin_time);
        }
        proto::GachaInfo::set_begin_time(proto_gacha_info, gacha_schedule_config->begin_time);
        if ( *(_BYTE *)(((unsigned __int64)&gacha_schedule_config->end_time >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)gacha_schedule_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gacha_schedule_config->end_time >> 3)
                                                                               + 0x7FFF8000) )
        {
          __asan_report_load4(&gacha_schedule_config->end_time);
        }
        proto::GachaInfo::set_end_time(proto_gacha_info, gacha_schedule_config->end_time);
        *(_QWORD *)(v3 + 32) = GachaRecord::getGachaCostItem(gacha_record, 1u, (unsigned __int64)gacha_schedule_config);
        *(_QWORD *)(v3 + 40) = v10;
        proto::GachaInfo::set_cost_item_id(proto_gacha_info, *(_DWORD *)(v3 + 32));
        proto::GachaInfo::set_cost_item_num(proto_gacha_info, *(_DWORD *)(v3 + 36));
        proto::GachaInfo::set_gacha_prefab_path(proto_gacha_info, &gacha_schedule_config->gacha_prefab_path);
        proto::GachaInfo::set_gacha_prob_url(proto_gacha_info, &gacha_schedule_config->gacha_prob_url);
        proto::GachaInfo::set_gacha_record_url(proto_gacha_info, &gacha_schedule_config->gacha_record_url);
        proto::GachaInfo::set_gacha_prob_url_oversea(proto_gacha_info, &gacha_schedule_config->gacha_prob_url_oversea);
        proto::GachaInfo::set_gacha_record_url_oversea(
          proto_gacha_info,
          &gacha_schedule_config->gacha_record_url_oversea);
        proto::GachaInfo::set_gacha_preview_prefab_path(
          proto_gacha_info,
          &gacha_schedule_config->gacha_preview_prefab_path);
        *(_QWORD *)(v3 + 64) = GachaRecord::getGachaCostItem(
                                 gacha_record,
                                 0xAu,
                                 (unsigned __int64)gacha_schedule_config);
        *(_QWORD *)(v3 + 72) = v11;
        proto::GachaInfo::set_ten_cost_item_id(proto_gacha_info, *(_DWORD *)(v3 + 64));
        proto::GachaInfo::set_ten_cost_item_num(proto_gacha_info, *(_DWORD *)(v3 + 68));
        LeftGachaTimes = GachaRecord::getLeftGachaTimes(gacha_record);
        proto::GachaInfo::set_left_gacha_times(proto_gacha_info, LeftGachaTimes);
        GachaTimesLimit = GachaRecord::getGachaTimesLimit(gacha_record);
        proto::GachaInfo::set_gacha_times_limit(proto_gacha_info, GachaTimesLimit);
        if ( *(_BYTE *)(((unsigned __int64)&gacha_schedule_config->gacha_sort_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&gacha_schedule_config->gacha_sort_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&gacha_schedule_config->gacha_sort_id);
        }
        proto::GachaInfo::set_gacha_sort_id(proto_gacha_info, gacha_schedule_config->gacha_sort_id);
        __for_range_0 = &gacha_schedule_config->up_config_vec;
        __for_begin_0._M_current = std::vector<data::GachaUpConfig>::begin(&gacha_schedule_config->up_config_vec)._M_current;
        __for_end_0._M_current = std::vector<data::GachaUpConfig>::end(__for_range_0)._M_current;
        while ( __gnu_cxx::operator!=<data::GachaUpConfig *,std::vector<data::GachaUpConfig>>(
                  &__for_begin_0,
                  &__for_end_0) )
        {
          up_config = __gnu_cxx::__normal_iterator<data::GachaUpConfig *,std::vector<data::GachaUpConfig>>::operator*(&__for_begin_0);
          proto_up_info = proto::GachaInfo::add_gacha_up_info_list(proto_gacha_info);
          if ( *(_BYTE *)(((unsigned __int64)up_config >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)up_config >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(up_config);
          }
          proto::GachaUpInfo::set_item_parent_type(proto_up_info, up_config->item_parent_type);
          __for_range_1 = &up_config->item_set;
          __for_begin_1._M_node = std::set<unsigned int>::begin(&up_config->item_set)._M_node;
          __for_end_1._M_node = std::set<unsigned int>::end(__for_range_1)._M_node;
          while ( std::operator!=(&__for_begin_1, &__for_end_1) )
          {
            v14 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin_1);
            v15 = v14;
            if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v14);
            }
            item_id = *v15;
            proto::GachaUpInfo::add_item_id_list(proto_up_info, item_id);
            std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin_1);
          }
          if ( *(_BYTE *)(((unsigned __int64)up_config >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)up_config >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(up_config);
          }
          if ( up_config->item_parent_type == GACHA_ITEM_PARENT_S5 )
          {
            v16 = proto::GachaInfo::mutable_display_up5_item_list(proto_gacha_info);
            common::tools::MiscUtils::setToRepeated<std::vector<unsigned int>,unsigned int>(
              &up_config->original_item_vec,
              v16);
          }
          __gnu_cxx::__normal_iterator<data::GachaUpConfig *,std::vector<data::GachaUpConfig>>::operator++(&__for_begin_0);
        }
        proto::GachaInfo::set_title_textmap(proto_gacha_info, &gacha_schedule_config->title_textmap);
        v17 = proto::GachaInfo::mutable_display_up4_item_list(proto_gacha_info);
        common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(
          &gacha_schedule_config->display_up4_item_vec,
          v17);
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v41);
        p_gacha_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v41)->design_config.txt_config_mgr.gacha_config_mgr;
        if ( *(_BYTE *)(((unsigned __int64)&gacha_schedule_config->gacha_type >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)gacha_schedule_config + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gacha_schedule_config->gacha_type >> 3)
                                                                              + 0x7FFF8000) )
        {
          __asan_report_load4(&gacha_schedule_config->gacha_type);
        }
        wish_config_ptr = data::GachaExcelConfigMgrBase::findGachaWishConfig(
                            p_gacha_config_mgr,
                            gacha_schedule_config->gacha_type);
        std::shared_ptr<Config>::~shared_ptr(&v41);
        if ( wish_config_ptr )
        {
          if ( *(_BYTE *)(((unsigned __int64)&gacha_record->wish_item_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&gacha_record->wish_item_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&gacha_record->wish_item_id);
          }
          proto::GachaInfo::set_wish_item_id(proto_gacha_info, gacha_record->wish_item_id);
          if ( *(_BYTE *)(((unsigned __int64)&gacha_record->wish_progress >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)gacha_record - 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gacha_record->wish_progress >> 3)
                                                                        + 0x7FFF8000) )
          {
            __asan_report_load4(&gacha_record->wish_progress);
          }
          proto::GachaInfo::set_wish_progress(proto_gacha_info, gacha_record->wish_progress);
          if ( *(_BYTE *)(((unsigned __int64)&wish_config_ptr->wish_max_progress >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&wish_config_ptr->wish_max_progress >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&wish_config_ptr->wish_max_progress);
          }
          proto::GachaInfo::set_wish_max_progress(proto_gacha_info, wish_config_ptr->wish_max_progress);
          if ( *(char *)(((unsigned __int64)&gacha_record->is_new_wish >> 3) + 0x7FFF8000) < 0 )
            __asan_report_load1(&gacha_record->is_new_wish);
          proto::GachaInfo::set_is_new_wish(proto_gacha_info, gacha_record->is_new_wish);
        }
        if ( *(_BYTE *)(((unsigned __int64)&gacha_record->cur_schedule_daily_gacha_times >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&gacha_record->cur_schedule_daily_gacha_times >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&gacha_record->cur_schedule_daily_gacha_times);
        }
        proto::GachaInfo::set_cur_schedule_daily_gacha_times(
          proto_gacha_info,
          gacha_record->cur_schedule_daily_gacha_times);
        __gnu_cxx::__normal_iterator<data::GachaScheduleConfig *,std::vector<data::GachaScheduleConfig>>::operator++(&__for_begin);
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->gacha_random_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->gacha_random_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->gacha_random_);
      }
      proto::GetGachaInfoRsp::set_gacha_random(rsp_0, ++this->gacha_random_);
      if ( *(_BYTE *)(((unsigned __int64)&this->daily_gacha_times_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->daily_gacha_times_ >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_load4(&this->daily_gacha_times_);
      }
      proto::GetGachaInfoRsp::set_daily_gacha_times(rsp_0, this->daily_gacha_times_);
      isUnderMinorsRestrict = PlayerGachaComp::isUnderMinorsRestrict(this);
      proto::GetGachaInfoRsp::set_is_under_minors_restrict(rsp_0, isUnderMinorsRestrict);
      isUnderGeneralRestrict = PlayerGachaComp::isUnderGeneralRestrict(this);
      proto::GetGachaInfoRsp::set_is_under_general_restrict(rsp_0, isUnderGeneralRestrict);
      proto::GetGachaInfoRsp::set_retcode(rsp_0, 0);
    }
    std::vector<data::GachaScheduleConfig>::~vector((std::vector<data::GachaScheduleConfig> *const)(v3 + 96));
  }
  result = 0;
  if ( v43 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 716: range 00000000141BFD2A-00000000141C1A61
int32_t __cdecl PlayerGachaComp::onDoGachaReq(
        PlayerGachaComp *const this,
        const proto::DoGachaReq *req,
        proto::DoGachaRsp *rsp_0,
        bool *is_item_type_need_save)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  PlayerBasicComp *BasicComp; // rax
  common::milog::MiLogStream *v8; // rbx
  PlayerBasicComp *v9; // rax
  google::protobuf::uint32 v10; // eax
  google::protobuf::uint32 v11; // eax
  google::protobuf::uint32 v12; // eax
  bool isUnderMinorsRestrict; // al
  bool isUnderGeneralRestrict; // al
  common::milog::MiLogStream *v15; // r14
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v19; // r14
  char v20; // r15
  PlayerItemComp *ItemComp; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  PlayerItemComp *v23; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rax
  common::milog::MiLogStream *v25; // r14
  PlayerItemComp *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // r14
  PlayerItemComp *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // r14
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rcx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v40; // rax
  common::milog::MiLogStream *v41; // r14
  data::GachaScheduleConfig *M_current; // r15
  std::vector<data::GachaScheduleConfig>::iterator v43; // rax
  common::milog::MiLogStream *v44; // r14
  signed int v45; // eax
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // r14
  uint32_t v49; // eax
  __int64 v50; // rdx
  common::milog::MiLogStream *v51; // r14
  signed int v52; // eax
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // r14
  PlayerItemComp *v55; // rax
  common::milog::MiLogStream *v56; // rax
  common::milog::MiLogStream *v57; // rax
  common::milog::MiLogStream *v58; // rax
  common::milog::MiLogStream *v59; // rax
  common::milog::MiLogStream *v60; // r14
  signed int v61; // eax
  common::milog::MiLogStream *v62; // rax
  common::milog::MiLogStream *v63; // r14
  common::milog::MiLogStream *v64; // r14
  signed int v65; // eax
  common::milog::MiLogStream *v66; // rax
  common::milog::MiLogStream *v67; // r14
  common::milog::MiLogStream *v68; // rax
  common::milog::MiLogStream *v69; // rax
  common::milog::MiLogStream *v70; // rax
  common::milog::MiLogStream *v71; // r14
  GachaExcelConfigMgr *p_gacha_config_mgr; // rcx
  uint32_t cur_schedule_daily_gacha_times; // r14d
  uint32_t v74; // ecx
  char v75; // al
  common::milog::MiLogStream *v76; // rax
  common::milog::MiLogStream *v77; // rax
  common::milog::MiLogStream *v78; // r14
  uint32_t v79; // r14d
  uint32_t v80; // ecx
  char v81; // al
  common::milog::MiLogStream *v82; // rax
  common::milog::MiLogStream *v83; // rax
  common::milog::MiLogStream *v84; // r14
  common::milog::MiLogStream *v85; // r14
  PlayerItemComp *v86; // rax
  common::milog::MiLogStream *v87; // rax
  common::milog::MiLogStream *v88; // rax
  common::milog::MiLogStream *v89; // rax
  common::milog::MiLogStream *v90; // rax
  common::milog::MiLogStream *v91; // r14
  signed int v92; // eax
  common::milog::MiLogStream *v93; // rax
  common::milog::MiLogStream *v94; // r14
  const std::string *v95; // r14
  uint32_t v96; // eax
  common::milog::MiLogStream *v97; // r14
  signed int v98; // eax
  common::milog::MiLogStream *v99; // rax
  common::milog::MiLogStream *v100; // r14
  PlayerEventComp *EventComp; // r14
  unsigned int *v102; // r8
  unsigned int *v103; // r9
  int32_t result; // eax
  std::string v105; // [rsp+0h] [rbp-1E0h]
  uint32_t TotalMaterialNum; // [rsp+Ch] [rbp-1D4h]
  uint32_t v107; // [rsp+Ch] [rbp-1D4h]
  uint32_t TotalWeaponNum; // [rsp+Ch] [rbp-1D4h]
  uint32_t v109; // [rsp+Ch] [rbp-1D4h]
  char v110; // [rsp+Ch] [rbp-1D4h]
  unsigned int v111; // [rsp+38h] [rbp-1A8h] BYREF
  unsigned int MaterialItemLimit; // [rsp+3Ch] [rbp-1A4h] BYREF
  unsigned int WeaponItemLimit; // [rsp+40h] [rbp-1A0h] BYREF
  unsigned int val; // [rsp+44h] [rbp-19Ch] BYREF
  uint32_t cur_time; // [rsp+48h] [rbp-198h]
  int32_t ret; // [rsp+4Ch] [rbp-194h]
  char *v117; // [rsp+50h] [rbp-190h] BYREF
  data::GachaScheduleConfig *gacha_schedule_config; // [rsp+58h] [rbp-188h]
  GachaRecord *gacha_record; // [rsp+60h] [rbp-180h]
  const data::GachaRestrictConfig *gacha_restrict_config_ptr; // [rsp+68h] [rbp-178h]
  std::shared_ptr<Config> v121; // [rsp+70h] [rbp-170h] BYREF
  std::shared_ptr<Config> v122; // [rsp+80h] [rbp-160h] BYREF
  common::milog::MiLogStream v123; // [rsp+90h] [rbp-150h] BYREF
  char v124[304]; // [rsp+B0h] [rbp-130h] BYREF

  *(&v105._anon_0._M_allocated_capacity + 1) = (std::string::size_type)rsp_0;
  v105._anon_0._M_allocated_capacity = (std::string::size_type)is_item_type_need_save;
  v4 = (unsigned __int64)v124;
  v105._M_dataplus._M_p = v124;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(256LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "7 48 1 10 holder:725 64 4 20 old_gacha_random:726 80 4 20 left_gacha_times:816 96 8 17 schedule_"
                        "iter:776 128 8 10 reason:855 160 16 14 item_param:799 192 24 29 active_gacha_schedule_vec:769";
  *(_QWORD *)(v4 + 16) = PlayerGachaComp::onDoGachaReq;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753551;
  v6[536862722] = -234556924;
  v6[536862723] = -218959360;
  v6[536862724] = -218959360;
  v6[536862725] = -219021312;
  v6[536862726] = -218103808;
  v6[536862727] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  BasicComp = Player::getBasicComp(this->player_);
  if ( PlayerBasicComp::isStateOpen(BasicComp, 0x1Fu) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    v9 = Player::getBasicComp(this->player_);
    PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v123, v9);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 48), 0x898u, v105);
    std::string::~string(&v123);
    if ( *(_BYTE *)(((unsigned __int64)&this->gacha_random_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->gacha_random_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->gacha_random_);
    }
    *(_DWORD *)(v4 + 64) = this->gacha_random_++;
    proto::DoGachaRsp::set_new_gacha_random(
      *((proto::DoGachaRsp *const *)&v105._anon_0._M_allocated_capacity + 1),
      this->gacha_random_);
    v10 = proto::DoGachaReq::gacha_type(req);
    proto::DoGachaRsp::set_gacha_type(*((proto::DoGachaRsp *const *)&v105._anon_0._M_allocated_capacity + 1), v10);
    v11 = proto::DoGachaReq::gacha_times(req);
    proto::DoGachaRsp::set_gacha_times(*((proto::DoGachaRsp *const *)&v105._anon_0._M_allocated_capacity + 1), v11);
    v12 = proto::DoGachaReq::gacha_schedule_id(req);
    proto::DoGachaRsp::set_gacha_schedule_id(
      *((proto::DoGachaRsp *const *)&v105._anon_0._M_allocated_capacity + 1),
      v12);
    if ( *(_BYTE *)(((unsigned __int64)&this->daily_gacha_times_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->daily_gacha_times_ >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_load4(&this->daily_gacha_times_);
    }
    proto::DoGachaRsp::set_daily_gacha_times(
      *((proto::DoGachaRsp *const *)&v105._anon_0._M_allocated_capacity + 1),
      this->daily_gacha_times_);
    isUnderMinorsRestrict = PlayerGachaComp::isUnderMinorsRestrict(this);
    proto::DoGachaRsp::set_is_under_minors_restrict(
      *((proto::DoGachaRsp *const *)&v105._anon_0._M_allocated_capacity + 1),
      isUnderMinorsRestrict);
    isUnderGeneralRestrict = PlayerGachaComp::isUnderGeneralRestrict(this);
    proto::DoGachaRsp::set_is_under_general_restrict(
      *((proto::DoGachaRsp *const *)&v105._anon_0._M_allocated_capacity + 1),
      isUnderGeneralRestrict);
    if ( proto::DoGachaReq::gacha_random(req) != *(_DWORD *)(v4 + 64) )
    {
      common::milog::MiLogStream::create(
        &v123,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/gacha/player_gacha_comp.cpp",
        "onDoGachaReq",
        743);
      v15 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
              &v123,
              (const char (*)[32])"gacha_random not match, client:");
      val = proto::DoGachaReq::gacha_random(req);
      v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
      v17 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v16, (const char (*)[9])" server:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v4 + 64));
      common::milog::MiLogStream::~MiLogStream(&v123);
      proto::DoGachaRsp::set_retcode(*((proto::DoGachaRsp *const *)&v105._anon_0._M_allocated_capacity + 1), 1402);
LABEL_104:
      StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 48));
      goto LABEL_105;
    }
    if ( proto::DoGachaReq::gacha_times(req) != 1 && proto::DoGachaReq::gacha_times(req) != 10 )
    {
      common::milog::MiLogStream::create(
        &v123,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/gacha/player_gacha_comp.cpp",
        "onDoGachaReq",
        751);
      v19 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
              &v123,
              (const char (*)[34])"gacha_times invalid, gacha_times:");
      val = proto::DoGachaReq::gacha_times(req);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &val);
      common::milog::MiLogStream::~MiLogStream(&v123);
      proto::DoGachaRsp::set_retcode(*((proto::DoGachaRsp *const *)&v105._anon_0._M_allocated_capacity + 1), 1404);
      goto LABEL_104;
    }
    v20 = 0;
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    ItemComp = Player::getItemComp(this->player_);
    TotalMaterialNum = PlayerItemComp::getTotalMaterialNum(ItemComp);
    v107 = TotalMaterialNum + proto::DoGachaReq::gacha_times(req);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v121);
    v22 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v121);
    if ( v107 > ConstValueExcelConfigMgr::getMaterialItemLimit(&v22->design_config.txt_config_mgr.const_value_config_mgr) )
      goto LABEL_30;
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    v23 = Player::getItemComp(this->player_);
    TotalWeaponNum = PlayerItemComp::getTotalWeaponNum(v23);
    v109 = TotalWeaponNum + proto::DoGachaReq::gacha_times(req);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v122);
    v20 = 1;
    v24 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v122);
    if ( v109 <= ConstValueExcelConfigMgr::getWeaponItemLimit(&v24->design_config.txt_config_mgr.const_value_config_mgr) )
      v110 = 0;
    else
LABEL_30:
      v110 = 1;
    if ( v20 )
      std::shared_ptr<Config>::~shared_ptr(&v122);
    std::shared_ptr<Config>::~shared_ptr(&v121);
    if ( v110 )
    {
      common::milog::MiLogStream::create(
        &v123,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/gacha/player_gacha_comp.cpp",
        "onDoGachaReq",
        760);
      v25 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
              &v123,
              (const char (*)[53])"material or item or weapon full! total_material_num:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      v26 = Player::getItemComp(this->player_);
      v111 = PlayerItemComp::getTotalMaterialNum(v26);
      v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, &v111);
      v28 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v27, (const char (*)[8])" limit:");
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v121);
      v29 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v121);
      MaterialItemLimit = ConstValueExcelConfigMgr::getMaterialItemLimit(&v29->design_config.txt_config_mgr.const_value_config_mgr);
      v30 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, &MaterialItemLimit);
      v31 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
              v30,
              (const char (*)[19])" total_weapon_num:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      v32 = Player::getItemComp(this->player_);
      *(_DWORD *)(v4 + 80) = PlayerItemComp::getTotalWeaponNum(v32);
      v33 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, (const unsigned int *)(v4 + 80));
      v34 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v33, (const char (*)[8])" limit:");
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v122);
      v35 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v122);
      WeaponItemLimit = ConstValueExcelConfigMgr::getWeaponItemLimit(&v35->design_config.txt_config_mgr.const_value_config_mgr);
      v36 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v34, &WeaponItemLimit);
      v37 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v36, (const char (*)[14])" gacha_times:");
      val = proto::DoGachaReq::gacha_times(req);
      v38 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v37, &val);
      v39 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v38, (const char (*)[9])" player:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      operator<<(v39, this->player_);
      std::shared_ptr<Config>::~shared_ptr(&v122);
      std::shared_ptr<Config>::~shared_ptr(&v121);
      common::milog::MiLogStream::~MiLogStream(&v123);
      proto::DoGachaRsp::set_retcode(*((proto::DoGachaRsp *const *)&v105._anon_0._M_allocated_capacity + 1), 617);
      goto LABEL_104;
    }
    cur_time = common::tools::TimeUtils::getNow();
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v122);
    v40 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v122);
    data::DbGachaConfigMgr::findActivieGachaSchedules(
      (std::vector<data::GachaScheduleConfig> *)(v4 + 192),
      &v40->design_config.db_config_mgr.db_local_config_mgr.gacha_config_mgr,
      cur_time);
    std::shared_ptr<Config>::~shared_ptr(&v122);
    if ( std::vector<data::GachaScheduleConfig>::empty((const std::vector<data::GachaScheduleConfig> *const)(v4 + 192)) )
    {
      common::milog::MiLogStream::create(
        &v123,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/gacha/player_gacha_comp.cpp",
        "onDoGachaReq",
        772);
      v41 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
              &v123,
              (const char (*)[31])"No active gacha schedule, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v41, &val);
      common::milog::MiLogStream::~MiLogStream(&v123);
      proto::DoGachaRsp::set_retcode(*((proto::DoGachaRsp *const *)&v105._anon_0._M_allocated_capacity + 1), 1401);
      goto LABEL_103;
    }
    M_current = std::vector<data::GachaScheduleConfig>::end((std::vector<data::GachaScheduleConfig> *const)(v4 + 192))._M_current;
    v43._M_current = std::vector<data::GachaScheduleConfig>::begin((std::vector<data::GachaScheduleConfig> *const)(v4 + 192))._M_current;
    *(__gnu_cxx::__normal_iterator<data::GachaScheduleConfig*,std::vector<data::GachaScheduleConfig> > *)(v4 + 96) = std::find_if<__gnu_cxx::__normal_iterator<data::GachaScheduleConfig *,std::vector<data::GachaScheduleConfig>>,PlayerGachaComp::onDoGachaReq(proto::DoGachaReq const&,proto::DoGachaRsp &,bool &)::{lambda(__gnu_cxx::__normal_iterator<data::GachaScheduleConfig *,std::vector<data::GachaScheduleConfig>> const&)#1}>(v43, (__gnu_cxx::__normal_iterator<data::GachaScheduleConfig*,std::vector<data::GachaScheduleConfig> >)M_current, (PlayerGachaComp::onDoGachaReq::<lambda(const auto:29&)>)req);
    *(std::vector<data::GachaScheduleConfig>::iterator *)(v4 + 128) = std::vector<data::GachaScheduleConfig>::end((std::vector<data::GachaScheduleConfig> *const)(v4 + 192));
    if ( __gnu_cxx::operator==<data::GachaScheduleConfig *,std::vector<data::GachaScheduleConfig>>(
           (const __gnu_cxx::__normal_iterator<data::GachaScheduleConfig*,std::vector<data::GachaScheduleConfig> > *)(v4 + 96),
           (const __gnu_cxx::__normal_iterator<data::GachaScheduleConfig*,std::vector<data::GachaScheduleConfig> > *)(v4 + 128)) )
    {
      common::milog::MiLogStream::create(
        &v123,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/gacha/player_gacha_comp.cpp",
        "onDoGachaReq",
        782);
      v44 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
              &v123,
              (const char (*)[39])"no matched gacha schedule, gacha_type:");
      v45 = proto::DoGachaReq::gacha_type(req);
      *(_QWORD *)(v4 + 128) = data::enumValToStr((data::GachaType)v45);
      v46 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v44, (const char *const *)(v4 + 128));
      v47 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v46, (const char (*)[14])" schedule_id:");
      val = proto::DoGachaReq::gacha_schedule_id(req);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v47, &val);
      common::milog::MiLogStream::~MiLogStream(&v123);
      proto::DoGachaRsp::set_retcode(*((proto::DoGachaRsp *const *)&v105._anon_0._M_allocated_capacity + 1), 1403);
    }
    else
    {
      gacha_schedule_config = __gnu_cxx::__normal_iterator<data::GachaScheduleConfig *,std::vector<data::GachaScheduleConfig>>::operator*((const __gnu_cxx::__normal_iterator<data::GachaScheduleConfig*,std::vector<data::GachaScheduleConfig> > *const)(v4 + 96));
      gacha_record = PlayerGachaComp::getGachaRecord(this, gacha_schedule_config);
      if ( *(_BYTE *)(((unsigned __int64)gacha_record >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)gacha_record >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(gacha_record);
      }
      if ( gacha_record->gacha_type == GACHA_TYPE_NEWBIE && proto::DoGachaReq::gacha_times(req) == 1 )
      {
        common::milog::MiLogStream::create(
          &v123,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/gacha/player_gacha_comp.cpp",
          "onDoGachaReq",
          794);
        common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
          &v123,
          (const char (*)[42])"gacha_times invalid, NEWBIE not support 1");
        common::milog::MiLogStream::~MiLogStream(&v123);
        proto::DoGachaRsp::set_retcode(*((proto::DoGachaRsp *const *)&v105._anon_0._M_allocated_capacity + 1), 1404);
      }
      else
      {
        v49 = proto::DoGachaReq::gacha_times(req);
        *(_QWORD *)(v4 + 160) = GachaRecord::getGachaCostItem(
                                  gacha_record,
                                  v49,
                                  (unsigned __int64)gacha_schedule_config);
        *(_QWORD *)(v4 + 168) = v50;
        if ( *(_DWORD *)(v4 + 164) && *(_DWORD *)(v4 + 160) )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          v55 = Player::getItemComp(this->player_);
          ret = PlayerItemComp::checkSubItem(v55, (const ItemParam *)(v4 + 160));
          if ( ret )
          {
            common::milog::MiLogStream::create(
              &v123,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/gacha/player_gacha_comp.cpp",
              "onDoGachaReq",
              809);
            v56 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                    &v123,
                    (const char (*)[30])"checkSubItem failed, item_id:");
            v57 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v56,
                    (const unsigned int *)(v4 + 160));
            v58 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    v57,
                    (const char (*)[16])" cost_item_num:");
            v59 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v58,
                    (const unsigned int *)(v4 + 164));
            v60 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    v59,
                    (const char (*)[13])" gacha_type:");
            v61 = proto::DoGachaReq::gacha_type(req);
            *(_QWORD *)(v4 + 128) = data::enumValToStr((data::GachaType)v61);
            v62 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(
                    v60,
                    (const char *const *)(v4 + 128));
            v63 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                    v62,
                    (const char (*)[14])" schedule_id:");
            val = proto::DoGachaReq::gacha_schedule_id(req);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v63, &val);
            common::milog::MiLogStream::~MiLogStream(&v123);
            proto::DoGachaRsp::set_retcode(*((proto::DoGachaRsp *const *)&v105._anon_0._M_allocated_capacity + 1), 1405);
          }
          else
          {
            *(_DWORD *)(v4 + 80) = GachaRecord::getLeftGachaTimes(gacha_record);
            if ( proto::DoGachaReq::gacha_times(req) <= *(_DWORD *)(v4 + 80) )
            {
              if ( *(_BYTE *)(((unsigned __int64)gacha_record >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)gacha_record >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(gacha_record);
              }
              if ( gacha_record->gacha_type != GACHA_TYPE_NEWBIE )
              {
                ServiceBox::findService<GameserverService>();
                GameserverService::getConfig((GameserverService *const)&v122);
                p_gacha_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v122)->design_config.txt_config_mgr.gacha_config_mgr;
                if ( *(_BYTE *)(((unsigned __int64)gacha_record >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)gacha_record >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4(gacha_record);
                }
                gacha_restrict_config_ptr = data::GachaExcelConfigMgrBase::findGachaRestrictConfig(
                                              p_gacha_config_mgr,
                                              gacha_record->gacha_type);
                std::shared_ptr<Config>::~shared_ptr(&v122);
                if ( gacha_restrict_config_ptr )
                {
                  if ( !PlayerGachaComp::isUnderMinorsRestrict(this) )
                    goto LABEL_78;
                  if ( *(_BYTE *)(((unsigned __int64)&gacha_record->cur_schedule_daily_gacha_times >> 3) + 0x7FFF8000) != 0
                    && *(_BYTE *)(((unsigned __int64)&gacha_record->cur_schedule_daily_gacha_times >> 3) + 0x7FFF8000) <= 3 )
                  {
                    __asan_report_load4(&gacha_record->cur_schedule_daily_gacha_times);
                  }
                  cur_schedule_daily_gacha_times = gacha_record->cur_schedule_daily_gacha_times;
                  v74 = cur_schedule_daily_gacha_times + proto::DoGachaReq::gacha_times(req);
                  if ( *(_BYTE *)(((unsigned __int64)&gacha_restrict_config_ptr->minors_limit_count >> 3) + 0x7FFF8000) != 0
                    && (char)((((_BYTE)gacha_restrict_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gacha_restrict_config_ptr->minors_limit_count >> 3)
                                                                                             + 0x7FFF8000) )
                  {
                    __asan_report_load4(&gacha_restrict_config_ptr->minors_limit_count);
                  }
                  if ( v74 > gacha_restrict_config_ptr->minors_limit_count )
                    v75 = 1;
                  else
LABEL_78:
                    v75 = 0;
                  if ( v75 )
                  {
                    common::milog::MiLogStream::create(
                      &v123,
                      &common::milog::MiLogDefault::default_log_obj_,
                      3u,
                      "./src/player/gacha/player_gacha_comp.cpp",
                      "onDoGachaReq",
                      835);
                    v76 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
                            &v123,
                            (const char (*)[59])"minors gacha times limit, cur_schedule_daily_gacha_times: ");
                    v77 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                            v76,
                            &gacha_record->cur_schedule_daily_gacha_times);
                    v78 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                            v77,
                            (const char (*)[20])" ,req gacha times: ");
                    val = proto::DoGachaReq::gacha_times(req);
                    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v78, &val);
                    common::milog::MiLogStream::~MiLogStream(&v123);
                    proto::DoGachaRsp::set_retcode(
                      *((proto::DoGachaRsp *const *)&v105._anon_0._M_allocated_capacity + 1),
                      1409);
                    goto LABEL_103;
                  }
                  if ( !PlayerGachaComp::isUnderGeneralRestrict(this) )
                    goto LABEL_88;
                  if ( *(_BYTE *)(((unsigned __int64)&gacha_record->cur_schedule_daily_gacha_times >> 3) + 0x7FFF8000) != 0
                    && *(_BYTE *)(((unsigned __int64)&gacha_record->cur_schedule_daily_gacha_times >> 3) + 0x7FFF8000) <= 3 )
                  {
                    __asan_report_load4(&gacha_record->cur_schedule_daily_gacha_times);
                  }
                  v79 = gacha_record->cur_schedule_daily_gacha_times;
                  v80 = v79 + proto::DoGachaReq::gacha_times(req);
                  if ( *(_BYTE *)(((unsigned __int64)&gacha_restrict_config_ptr->general_limit_count >> 3) + 0x7FFF8000) != 0
                    && (char)((((_BYTE)gacha_restrict_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gacha_restrict_config_ptr->general_limit_count >> 3)
                                                                                             + 0x7FFF8000) )
                  {
                    __asan_report_load4(&gacha_restrict_config_ptr->general_limit_count);
                  }
                  if ( v80 > gacha_restrict_config_ptr->general_limit_count )
                    v81 = 1;
                  else
LABEL_88:
                    v81 = 0;
                  if ( v81 )
                  {
                    common::milog::MiLogStream::create(
                      &v123,
                      &common::milog::MiLogDefault::default_log_obj_,
                      3u,
                      "./src/player/gacha/player_gacha_comp.cpp",
                      "onDoGachaReq",
                      842);
                    v82 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
                            &v123,
                            (const char (*)[60])"general gacha times limit, cur_schedule_daily_gacha_times: ");
                    v83 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                            v82,
                            &gacha_record->cur_schedule_daily_gacha_times);
                    v84 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                            v83,
                            (const char (*)[20])" ,req gacha times: ");
                    val = proto::DoGachaReq::gacha_times(req);
                    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v84, &val);
                    common::milog::MiLogStream::~MiLogStream(&v123);
                    proto::DoGachaRsp::set_retcode(
                      *((proto::DoGachaRsp *const *)&v105._anon_0._M_allocated_capacity + 1),
                      1410);
                    goto LABEL_103;
                  }
                }
                else
                {
                  common::milog::MiLogStream::create(
                    &v123,
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/player/gacha/player_gacha_comp.cpp",
                    "onDoGachaReq",
                    850);
                  v85 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                          &v123,
                          (const char (*)[45])"findGachaRestrictConfig failed, gacha_type: ");
                  if ( *(_BYTE *)(((unsigned __int64)gacha_record >> 3) + 0x7FFF8000) != 0
                    && *(_BYTE *)(((unsigned __int64)gacha_record >> 3) + 0x7FFF8000) <= 3 )
                  {
                    __asan_report_load4(gacha_record);
                  }
                  *(_QWORD *)(v4 + 128) = data::enumValToStr(gacha_record->gacha_type);
                  common::milog::MiLogStream::operator<<<char const*,(char const**)0>(
                    v85,
                    (const char *const *)(v4 + 128));
                  common::milog::MiLogStream::~MiLogStream(&v123);
                }
              }
              SubItemReason::SubItemReason((SubItemReason *const)(v4 + 128), ACTION_REASON_GACHA);
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8(&this->player_);
              v86 = Player::getItemComp(this->player_);
              ret = PlayerItemComp::subItem(v86, (const ItemParam *)(v4 + 160), (const SubItemReason *)(v4 + 128));
              if ( ret )
              {
                common::milog::MiLogStream::create(
                  &v123,
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/player/gacha/player_gacha_comp.cpp",
                  "onDoGachaReq",
                  859);
                v87 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                        &v123,
                        (const char (*)[30])"checkSubItem failed, item_id:");
                v88 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v87,
                        (const unsigned int *)(v4 + 160));
                v89 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        v88,
                        (const char (*)[16])" cost_item_num:");
                v90 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v89,
                        (const unsigned int *)(v4 + 164));
                v91 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                        v90,
                        (const char (*)[13])" gacha_type:");
                v92 = proto::DoGachaReq::gacha_type(req);
                v117 = (char *)data::enumValToStr((data::GachaType)v92);
                v93 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(
                        v91,
                        (const char *const *)&v117);
                v94 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                        v93,
                        (const char (*)[14])" schedule_id:");
                val = proto::DoGachaReq::gacha_schedule_id(req);
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v94, &val);
                common::milog::MiLogStream::~MiLogStream(&v123);
                proto::DoGachaRsp::set_retcode(
                  *((proto::DoGachaRsp *const *)&v105._anon_0._M_allocated_capacity + 1),
                  1405);
              }
              else
              {
                v95 = proto::DoGachaReq::gacha_tag[abi:cxx11](req);
                v96 = proto::DoGachaReq::gacha_times(req);
                ret = PlayerGachaComp::doGacha(
                        this,
                        v96,
                        v95,
                        gacha_record,
                        gacha_schedule_config,
                        *((proto::DoGachaRsp **)&v105._anon_0._M_allocated_capacity + 1),
                        (bool *)v105._anon_0._M_allocated_capacity);
                if ( ret )
                {
                  common::milog::MiLogStream::create(
                    &v123,
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/player/gacha/player_gacha_comp.cpp",
                    "onDoGachaReq",
                    869);
                  v97 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                          &v123,
                          (const char (*)[28])"doGacha failed, gacha_type:");
                  v98 = proto::DoGachaReq::gacha_type(req);
                  v117 = (char *)data::enumValToStr((data::GachaType)v98);
                  v99 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(
                          v97,
                          (const char *const *)&v117);
                  v100 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                           v99,
                           (const char (*)[14])" schedule_id:");
                  val = proto::DoGachaReq::gacha_schedule_id(req);
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v100, &val);
                  common::milog::MiLogStream::~MiLogStream(&v123);
                  proto::DoGachaRsp::set_retcode(
                    *((proto::DoGachaRsp *const *)&v105._anon_0._M_allocated_capacity + 1),
                    -1);
                }
                else
                {
                  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                    __asan_report_load8(&this->player_);
                  EventComp = Player::getEventComp(this->player_);
                  val = proto::DoGachaReq::gacha_times(req);
                  common::tools::perf::make_shared<DoGachaEvent,data::GachaType &,unsigned int &,unsigned int>(
                    (data::GachaType *)&v121,
                    (unsigned int *)&gacha_schedule_config->gacha_type,
                    &gacha_schedule_config->schedule_id,
                    (data::GachaType *)&val,
                    v102,
                    v103);
                  std::shared_ptr<BaseEvent>::shared_ptr<DoGachaEvent,void>(
                    (std::shared_ptr<BaseEvent> *const)&v122,
                    (std::shared_ptr<DoGachaEvent> *)&v121);
                  PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&v122);
                  std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&v122);
                  std::shared_ptr<DoGachaEvent>::~shared_ptr((std::shared_ptr<DoGachaEvent> *const)&v121);
                  proto::DoGachaRsp::set_retcode(
                    *((proto::DoGachaRsp *const *)&v105._anon_0._M_allocated_capacity + 1),
                    0);
                }
              }
              goto LABEL_103;
            }
            common::milog::MiLogStream::create(
              &v123,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/gacha/player_gacha_comp.cpp",
              "onDoGachaReq",
              819);
            v64 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                    &v123,
                    (const char (*)[41])"gacha left times not enough, gacha_type:");
            v65 = proto::DoGachaReq::gacha_type(req);
            *(_QWORD *)(v4 + 128) = data::enumValToStr((data::GachaType)v65);
            v66 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(
                    v64,
                    (const char *const *)(v4 + 128));
            v67 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                    v66,
                    (const char (*)[14])" schedule_id:");
            WeaponItemLimit = proto::DoGachaReq::gacha_schedule_id(req);
            v68 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v67, &WeaponItemLimit);
            v69 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    v68,
                    (const char (*)[13])" left_times:");
            v70 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v69,
                    (const unsigned int *)(v4 + 80));
            v71 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                    v70,
                    (const char (*)[14])" gacha_times:");
            val = proto::DoGachaReq::gacha_times(req);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v71, &val);
            common::milog::MiLogStream::~MiLogStream(&v123);
            proto::DoGachaRsp::set_retcode(*((proto::DoGachaRsp *const *)&v105._anon_0._M_allocated_capacity + 1), 1406);
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v123,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/gacha/player_gacha_comp.cpp",
            "onDoGachaReq",
            802);
          v51 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                  &v123,
                  (const char (*)[40])"gacha cost_item_count is 0, gacha_type:");
          v52 = proto::DoGachaReq::gacha_type(req);
          *(_QWORD *)(v4 + 128) = data::enumValToStr((data::GachaType)v52);
          v53 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(
                  v51,
                  (const char *const *)(v4 + 128));
          v54 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                  v53,
                  (const char (*)[14])" schedule_id:");
          val = proto::DoGachaReq::gacha_schedule_id(req);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v54, &val);
          common::milog::MiLogStream::~MiLogStream(&v123);
          proto::DoGachaRsp::set_retcode(*((proto::DoGachaRsp *const *)&v105._anon_0._M_allocated_capacity + 1), -1);
        }
      }
    }
LABEL_103:
    std::vector<data::GachaScheduleConfig>::~vector((std::vector<data::GachaScheduleConfig> *const)(v4 + 192));
    goto LABEL_104;
  }
  common::milog::MiLogStream::create(
    &v123,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/player/gacha/player_gacha_comp.cpp",
    "onDoGachaReq",
    720);
  v8 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
         &v123,
         (const char (*)[33])"OPEN_STATE_GACHA is locked, uid:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  val = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
  common::milog::MiLogStream::~MiLogStream(&v123);
  proto::DoGachaRsp::set_retcode(*((proto::DoGachaRsp *const *)&v105._anon_0._M_allocated_capacity + 1), 141);
LABEL_105:
  result = 0;
  if ( v105._M_dataplus._M_p == (std::string::pointer)v4 )
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

// Line 776: range 00000000141DD258-00000000141DD35A
bool __cdecl PlayerGachaComp::onDoGachaReq::_lambda_const_auto_29___::operator()_data::GachaScheduleConfig_(
        const PlayerGachaComp::onDoGachaReq::<lambda(const auto:29&)> *const __closure,
        const data::GachaScheduleConfig *o)
{
  data::GachaType gacha_type; // ebx
  uint32_t schedule_id; // ebx

  if ( *(_BYTE *)(((unsigned __int64)&o->gacha_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)o + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&o->gacha_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&o->gacha_type);
  }
  gacha_type = o->gacha_type;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  if ( gacha_type != proto::DoGachaReq::gacha_type(__closure->__req) )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)o >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)o >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(o);
  }
  schedule_id = o->schedule_id;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  return schedule_id == proto::DoGachaReq::gacha_schedule_id(__closure->__req);
};

// Line 880: range 00000000141C1A62-00000000141C6D38
int32_t __cdecl PlayerGachaComp::doGacha(
        PlayerGachaComp *const this,
        uint32_t gacha_times,
        const std::string *gacha_tag,
        GachaRecord *gacha_record,
        const data::GachaScheduleConfig *schedule_config,
        proto::DoGachaRsp *rsp_0,
        bool *is_item_type_need_save)
{
  unsigned __int64 v7; // r15
  __int64 v8; // rax
  _DWORD *v9; // r12
  common::milog::MiLogStream *v10; // rax
  int32_t v11; // r13d
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  GachaExcelConfigMgr *p_gacha_config_mgr; // rcx
  common::milog::MiLogStream *v18; // r13
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // r13
  data::GachaRuleExcelConfig *M_current; // r13
  std::vector<data::GachaRuleExcelConfig>::iterator v26; // rax
  PlayerGachaComp::doGacha::<lambda(const auto:30&, const auto:31&)> v27; // dl
  uint32_t gacha_guarantee_times; // ecx
  uint32_t last_gacha_guarantee_times; // ecx
  uint32_t v30; // ecx
  uint32_t v31; // ecx
  uint32_t v32; // ecx
  common::milog::MiLogStream *v33; // r13
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // r13
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  PlayerItemComp *ItemComp; // rax
  PlayerItemComp *v45; // rax
  common::milog::MiLogStream *v46; // r13
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // rax
  common::milog::MiLogStream *v50; // rax
  unsigned __int64 n; // rax
  __int64 v52; // rdi
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v53; // rax
  GachaExcelConfigMgr *v54; // rcx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v55; // rax
  common::milog::MiLogStream *v56; // r13
  uint32_t token_drop_id; // esi
  common::milog::MiLogStream *v58; // rax
  PlayerItemComp *v59; // rax
  char v60; // al
  common::milog::MiLogStream *v61; // r13
  bool IsNeedSave; // cl
  char v63; // dl
  __int64 v64; // rsi
  __int64 v65; // rdx
  common::milog::MiLogStream *v66; // rcx
  common::milog::MiLogStream *v67; // rax
  common::milog::MiLogStream *v68; // rax
  common::milog::MiLogStream *v69; // rax
  common::milog::MiLogStream *v70; // r13
  common::milog::MiLogStream *v71; // rax
  common::milog::MiLogStream *v72; // rax
  common::milog::MiLogStream *v73; // r13
  common::milog::MiLogStream *v74; // rax
  common::milog::MiLogStream *v75; // rax
  common::milog::MiLogStream *v76; // rax
  common::milog::MiLogStream *v77; // rax
  common::milog::MiLogStream *v78; // rax
  common::milog::MiLogStream *v79; // rax
  common::milog::MiLogStream *v81; // r13
  common::milog::MiLogStream *v82; // rax
  common::milog::MiLogStream *v83; // rax
  common::milog::MiLogStream *v84; // rax
  common::milog::MiLogStream *v85; // rax
  common::milog::MiLogStream *v86; // rax
  GachaExcelConfigMgr *v87; // rcx
  common::milog::MiLogStream *v88; // r13
  common::milog::MiLogStream *v89; // rax
  common::milog::MiLogStream *v90; // rax
  common::milog::MiLogStream *v91; // r13
  common::milog::MiLogStream *v92; // rax
  common::milog::MiLogStream *v93; // rax
  common::milog::MiLogStream *v94; // rax
  common::milog::MiLogStream *v95; // r13
  common::milog::MiLogStream *v96; // rax
  common::milog::MiLogStream *v97; // rax
  common::milog::MiLogStream *v98; // rax
  common::milog::MiLogStream *v99; // rax
  common::milog::MiLogStream *v100; // rax
  common::milog::MiLogStream *v101; // rax
  uint32_t *p_total_gacha_times; // rsi
  uint32_t total_gacha_times; // ecx
  char v104; // dl
  __int64 v105; // rdx
  __int64 v106; // rsi
  __int64 v107; // rdx
  data::GachaItemParentType v108; // r13d
  const data::GachaGuaranteeParentTypeWeight *v109; // r14
  std::vector<data::GachaGuaranteeParentTypeWeight>::const_iterator v110; // rax
  common::milog::MiLogStream *v111; // r13
  common::milog::MiLogStream *v112; // rax
  common::milog::MiLogStream *v113; // rax
  common::milog::MiLogStream *v114; // rax
  common::milog::MiLogStream *v115; // r13
  common::milog::MiLogStream *v116; // rax
  common::milog::MiLogStream *v117; // rax
  common::milog::MiLogStream *v118; // rax
  common::milog::MiLogStream *v119; // rax
  common::milog::MiLogStream *v120; // rax
  common::milog::MiLogStream *v121; // rax
  uint32_t *v122; // rsi
  uint32_t v123; // ecx
  char v124; // dl
  __int64 v125; // rdx
  data::GachaItemParentType v126; // r13d
  const data::GachaGuaranteeParentTypeWeightWithChilds *v127; // r14
  std::vector<data::GachaGuaranteeParentTypeWeightWithChilds>::const_iterator v128; // rax
  data::GachaItemType v129; // r13d
  const unsigned int *v130; // r14
  std::vector<unsigned int>::const_iterator v131; // rax
  common::milog::MiLogStream *v132; // r13
  common::milog::MiLogStream *v133; // rax
  common::milog::MiLogStream *v134; // rax
  common::milog::MiLogStream *v135; // rax
  common::milog::MiLogStream *v136; // r13
  common::milog::MiLogStream *v137; // rax
  common::milog::MiLogStream *v138; // rax
  common::milog::MiLogStream *v139; // rax
  common::milog::MiLogStream *v140; // rax
  common::milog::MiLogStream *v141; // rax
  common::milog::MiLogStream *v142; // rax
  uint32_t *v143; // rsi
  uint32_t v144; // ecx
  char v145; // dl
  __int64 v146; // rdx
  common::milog::MiLogStream *v147; // r13
  common::milog::MiLogStream *v148; // rax
  common::milog::MiLogStream *v149; // rax
  common::milog::MiLogStream *v150; // rax
  common::milog::MiLogStream *v151; // r13
  common::milog::MiLogStream *v152; // rax
  common::milog::MiLogStream *v153; // rax
  common::milog::MiLogStream *v154; // rax
  common::milog::MiLogStream *v155; // rax
  common::milog::MiLogStream *v156; // rax
  common::milog::MiLogStream *v157; // rax
  uint32_t *v158; // rsi
  uint32_t v159; // ecx
  char v160; // dl
  __int64 v161; // rdx
  __int64 v162; // rsi
  __int64 v163; // rdx
  data::GachaItemType v164; // r13d
  const unsigned int *v165; // r14
  std::vector<unsigned int>::const_iterator v166; // rax
  common::milog::MiLogStream *v167; // r13
  common::milog::MiLogStream *v168; // rax
  common::milog::MiLogStream *v169; // rax
  common::milog::MiLogStream *v170; // rax
  common::milog::MiLogStream *v171; // r13
  common::milog::MiLogStream *v172; // rax
  common::milog::MiLogStream *v173; // rax
  common::milog::MiLogStream *v174; // rax
  common::milog::MiLogStream *v175; // rax
  common::milog::MiLogStream *v176; // rax
  common::milog::MiLogStream *v177; // rax
  uint32_t *v178; // rsi
  uint32_t v179; // ecx
  char v180; // dl
  __int64 v181; // rdx
  __int64 v182; // rsi
  __int64 v183; // rdx
  std::__shared_ptr_access<proto_log::PlayerLogBodyDoGacha,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v184; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyDoGacha,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v185; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyDoGacha,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v186; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyDoGacha,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v187; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyDoGacha,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v188; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyDoGacha,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v189; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyDoGacha,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v190; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyDoGacha,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v191; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyDoGacha,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v192; // rax
  unsigned __int64 v193; // rax
  __int64 v194; // rdi
  __gnu_cxx::__normal_iterator<ItemParam*,std::vector<ItemParam> >::reference v195; // rax
  _QWORD *p_item_id; // rdx
  __int64 v197; // rax
  __int64 v198; // rdx
  std::__shared_ptr_access<proto_log::PlayerLogBodyDoGacha,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v199; // r13
  bool isGachaItemUp; // al
  std::__shared_ptr_access<proto_log::PlayerLogBodyDoGacha,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v201; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyDoGacha,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v202; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyDoGacha,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v203; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyDoGacha,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v204; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyDoGacha,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v205; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyDoGacha,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v206; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyDoGacha,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v207; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyDoGacha,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v208; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyDoGacha,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v209; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyDoGacha,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v210; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyDoGacha,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v211; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyDoGacha,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v212; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyDoGacha,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v213; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyDoGacha,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v214; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyDoGacha,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v215; // rcx
  Player *player; // r13
  uint32_t *p_last_gacha_guarantee_times; // rax
  uint32_t v218; // ecx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v219; // rcx
  std::vector<ItemParam>::reference v220; // rax
  _QWORD *v221; // rdx
  __int64 v222; // rax
  __int64 v223; // rdx
  data::GachaType gacha_type; // r14d
  uint32_t Uid; // r13d
  const char *v226; // rax
  __int64 v227; // rdx
  __int64 v228; // rdx
  __int64 v229; // rdx
  uint32_t LeftGachaTimes; // eax
  uint32_t GachaTimesLimit; // eax
  GachaExcelConfigMgr *v232; // rcx
  uint32_t schedule_id; // [rsp+10h] [rbp-640h]
  unsigned int v235; // [rsp+14h] [rbp-63Ch]
  const char *v236; // [rsp+18h] [rbp-638h]
  unsigned int v237; // [rsp+20h] [rbp-630h]
  unsigned int v238; // [rsp+24h] [rbp-62Ch]
  _BOOL4 v239; // [rsp+28h] [rbp-628h]
  unsigned int v240; // [rsp+2Ch] [rbp-624h]
  unsigned int v245; // [rsp+50h] [rbp-600h]
  bool is_flash_card; // [rsp+6Dh] [rbp-5E3h]
  bool is_first; // [rsp+6Eh] [rbp-5E2h]
  bool is_gacha_item_new; // [rsp+6Fh] [rbp-5E1h]
  unsigned int val; // [rsp+70h] [rbp-5E0h] BYREF
  uint32_t gacha_time; // [rsp+74h] [rbp-5DCh]
  data::GachaItemType item_type; // [rsp+78h] [rbp-5D8h]
  data::GachaItemParentType item_parent_type; // [rsp+7Ch] [rbp-5D4h]
  uint32_t last_gacha_item_type_times; // [rsp+80h] [rbp-5D0h]
  uint32_t last_gacha_item_parent_type_times; // [rsp+84h] [rbp-5CCh]
  uint32_t before_progress; // [rsp+88h] [rbp-5C8h]
  uint32_t cur_time; // [rsp+8Ch] [rbp-5C4h]
  std::vector<data::GachaRuleExcelConfig>::iterator __for_begin_0; // [rsp+90h] [rbp-5C0h] BYREF
  std::vector<data::GachaRuleExcelConfig>::iterator __for_end; // [rsp+98h] [rbp-5B8h] BYREF
  std::map<unsigned int,GachaGuaranteeData>::iterator __for_begin; // [rsp+A0h] [rbp-5B0h] BYREF
  GachaRecord *real_gacha_record_ptr; // [rsp+A8h] [rbp-5A8h]
  GachaRecord *real_gacha_record; // [rsp+B0h] [rbp-5A0h]
  std::map<unsigned int,GachaGuaranteeData> *__for_range; // [rsp+B8h] [rbp-598h]
  std::vector<data::GachaRuleExcelConfig> *__for_range_0; // [rsp+C0h] [rbp-590h]
  const data::GachaRuleExcelConfig *gacha_rule_config; // [rsp+C8h] [rbp-588h]
  GachaGuaranteeData *gacha_guarantee_data; // [rsp+D0h] [rbp-580h]
  proto::GachaItem *proto_gacha_item; // [rsp+D8h] [rbp-578h]
  proto::ItemParam *proto_item_param; // [rsp+E0h] [rbp-570h]
  std::vector<TransferItemParam> *__for_range_1; // [rsp+E8h] [rbp-568h]
  const data::GachaTokenDropConfig *gacha_token_drop_config_ptr; // [rsp+F0h] [rbp-560h]
  std::vector<ItemParam> *__for_range_2; // [rsp+F8h] [rbp-558h]
  const ItemParam *token_item; // [rsp+100h] [rbp-550h]
  proto::ItemParam *proto_token_item_param; // [rsp+108h] [rbp-548h]
  const data::GachaWishConfig *wish_config_ptr_0; // [rsp+118h] [rbp-538h]
  std::vector<data::GachaRuleExcelConfig> *__for_range_3; // [rsp+120h] [rbp-530h]
  proto_log::ItemLog *item_log; // [rsp+128h] [rbp-528h]
  std::map<unsigned int,GachaGuaranteeData> *__for_range_4; // [rsp+130h] [rbp-520h]
  proto_log::GachaItemLog *gacha_award_log; // [rsp+138h] [rbp-518h]
  proto_log::ItemLog *gacha_award_item_log; // [rsp+140h] [rbp-510h]
  std::vector<TransferItemParam> *__for_range_5; // [rsp+148h] [rbp-508h]
  std::vector<ItemParam> *__for_range_6; // [rsp+150h] [rbp-500h]
  std::vector<data::GachaGuaranteeParentTypeWeight> *__for_range_7; // [rsp+158h] [rbp-4F8h]
  std::vector<std::pair<data::GachaItemParentType,unsigned int>> *__for_range_8; // [rsp+160h] [rbp-4F0h]
  std::vector<data::GachaGuaranteeTypeWeight> *__for_range_9; // [rsp+168h] [rbp-4E8h]
  std::vector<std::pair<data::GachaItemType,unsigned int>> *__for_range_10; // [rsp+170h] [rbp-4E0h]
  const std::pair<data::GachaItemType,unsigned int> *gacha_item_type_times; // [rsp+178h] [rbp-4D8h]
  proto_log::GachaItemTypeTimes *proto_gacha_type_times; // [rsp+180h] [rbp-4D0h]
  const data::GachaGuaranteeTypeWeight *gacha_item_type_weight; // [rsp+188h] [rbp-4C8h]
  proto_log::GachaItemTypeWeight *proto_gacha_item_type_weight; // [rsp+190h] [rbp-4C0h]
  const std::pair<data::GachaItemParentType,unsigned int> *gacha_item_parent_type_times; // [rsp+198h] [rbp-4B8h]
  proto_log::GachaItemParentTypeTimes *proto_gacha_parent_type_times; // [rsp+1A0h] [rbp-4B0h]
  const data::GachaGuaranteeParentTypeWeight *gacha_item_parent_type_weight; // [rsp+1A8h] [rbp-4A8h]
  proto_log::GachaItemParentTypeWeight *proto_gacha_parent_type_weight; // [rsp+1B0h] [rbp-4A0h]
  proto_log::ItemLog *gacha_token_item_log; // [rsp+1B8h] [rbp-498h]
  proto_log::ItemLog *gacha_transfer_item_log; // [rsp+1C0h] [rbp-490h]
  const std::pair<unsigned int const,GachaGuaranteeData> *v298; // [rsp+1C8h] [rbp-488h]
  std::tuple_element<0,const std::pair<unsigned int const,GachaGuaranteeData> >::type *rule_id; // [rsp+1D0h] [rbp-480h]
  std::tuple_element<1,const std::pair<unsigned int const,GachaGuaranteeData> >::type *gacha_guarantee_data_1; // [rsp+1D8h] [rbp-478h]
  proto_log::GachaGuaranteeData *guarantee_log; // [rsp+1E0h] [rbp-470h]
  std::map<unsigned int,GachaGuaranteeData> *__for_range_11; // [rsp+1E8h] [rbp-468h]
  const std::pair<unsigned int const,GachaGuaranteeData> *v303; // [rsp+1F0h] [rbp-460h]
  std::tuple_element<0,const std::pair<unsigned int const,GachaGuaranteeData> >::type *rule_id_0; // [rsp+1F8h] [rbp-458h]
  std::tuple_element<1,const std::pair<unsigned int const,GachaGuaranteeData> >::type *gacha_guarantee_data_2; // [rsp+200h] [rbp-450h]
  const data::GachaRuleExcelConfig *gacha_rule_config_0; // [rsp+208h] [rbp-448h]
  GachaGuaranteeData *gacha_guarantee_data_0; // [rsp+210h] [rbp-440h]
  const std::vector<unsigned int> *gacha_item_type_vec_0; // [rsp+218h] [rbp-438h]
  const std::vector<unsigned int> *gacha_item_type_vec; // [rsp+220h] [rbp-430h]
  proto::GachaTransferItem *proto_transfer_item; // [rsp+228h] [rbp-428h]
  proto::ItemParam *proto_transfer_item_param; // [rsp+230h] [rbp-420h]
  const data::GachaWishConfig *wish_config_ptr; // [rsp+238h] [rbp-418h]
  const std::pair<unsigned int const,GachaGuaranteeData> *v313; // [rsp+240h] [rbp-410h]
  std::tuple_element<0,const std::pair<unsigned int const,GachaGuaranteeData> >::type *gacha_rule_id; // [rsp+248h] [rbp-408h]
  std::tuple_element<1,const std::pair<unsigned int const,GachaGuaranteeData> >::type *_; // [rsp+250h] [rbp-400h]
  const data::GachaRuleExcelConfig *gacha_rule_config_ptr; // [rsp+258h] [rbp-3F8h]
  common::milog::MiLogStream v317; // [rsp+260h] [rbp-3F0h] BYREF
  common::milog::MiLogStream v318; // [rsp+280h] [rbp-3D0h] BYREF
  char v319[944]; // [rsp+2A0h] [rbp-3B0h] BYREF

  v7 = (unsigned __int64)v319;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_4(896LL);
    if ( v8 )
      v7 = v8;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "18 32 1 25 is_gacha_up_triggered:974 48 1 21 is_wish_triggered:975 64 4 21 guarantee_rule_id:920"
                        " 80 8 9 iter:1129 112 8 18 output_result:1024 144 16 10 holder:971 176 16 14 item_param:983 208 "
                        "16 27 single_cost_item_param:1341 240 16 24 ten_cost_item_param:1344 272 16 15 token_item:1234 3"
                        "04 20 18 transfer_item:1228 368 24 25 gacha_rule_config_vec:900 432 24 17 action_reason:987 496 "
                        "24 18 transfer_items:999 560 24 20 token_item_list:1013 624 24 22 token_drop_reason:1014 688 32 "
                        "14 gacha_item:976 752 104 21 gacha_log_context:973";
  *(_QWORD *)(v7 + 16) = PlayerGachaComp::doGacha;
  v9 = (_DWORD *)(v7 >> 3);
  v9[536862720] = -235802127;
  v9[536862721] = -234753535;
  v9[536862722] = 61956;
  v9[536862722] = -234881024;
  v9[536862723] = 62194;
  v9[536862723] = -234881024;
  v9[536862724] = 62194;
  v9[536862725] = 62194;
  v9[536862726] = 62194;
  v9[536862727] = 62194;
  v9[536862728] = 62194;
  v9[536862729] = 62194;
  v9[536862730] = -218959356;
  v9[536862731] = 62194;
  v9[536862732] = -218959360;
  v9[536862733] = 62194;
  v9[536862734] = -218959360;
  v9[536862735] = 62194;
  v9[536862736] = -218959360;
  v9[536862737] = 62194;
  v9[536862738] = -218959360;
  v9[536862739] = 62194;
  v9[536862740] = -218959360;
  v9[536862741] = 62194;
  v9[536862742] = -219021312;
  v9[536862743] = 62194;
  v9[536862746] = -218103808;
  v9[536862747] = -202116109;
  real_gacha_record_ptr = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&schedule_config->gacha_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)schedule_config + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&schedule_config->gacha_type >> 3)
                                                                  + 0x7FFF8000) )
  {
    __asan_report_load4(&schedule_config->gacha_type);
  }
  if ( schedule_config->gacha_type == GACHA_TYPE_SPECIAL_ACTIVITY_AVATAR )
    real_gacha_record_ptr = PlayerGachaComp::findAvatarGachaRecordBySpecial(this);
  else
    real_gacha_record_ptr = gacha_record;
  if ( real_gacha_record_ptr )
  {
    real_gacha_record = real_gacha_record_ptr;
    common::milog::MiLogStream::create(
      &v318,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/gacha/player_gacha_comp.cpp",
      "doGacha",
      898);
    v12 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
            &v318,
            (const char (*)[21])"schedule gacha_type:");
    v13 = common::milog::MiLogStream::operator<<<data::GachaType,(data::GachaType*)0>(v12, &schedule_config->gacha_type);
    v14 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
            v13,
            (const char (*)[20])" gacha_record type:");
    v15 = common::milog::MiLogStream::operator<<<data::GachaType,(data::GachaType*)0>(v14, &gacha_record->gacha_type);
    v16 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
            v15,
            (const char (*)[25])" real_gacha_record type:");
    common::milog::MiLogStream::operator<<<data::GachaType,(data::GachaType*)0>(v16, &real_gacha_record_ptr->gacha_type);
    common::milog::MiLogStream::~MiLogStream(&v318);
    std::vector<data::GachaRuleExcelConfig>::vector((std::vector<data::GachaRuleExcelConfig> *const)(v7 + 368));
    __for_range = &real_gacha_record_ptr->gacha_guarantee_map;
    __for_begin._M_node = std::map<unsigned int,GachaGuaranteeData>::begin(&real_gacha_record_ptr->gacha_guarantee_map)._M_node;
    *(std::map<unsigned int,GachaGuaranteeData>::iterator *)(v7 + 80) = std::map<unsigned int,GachaGuaranteeData>::end(&real_gacha_record_ptr->gacha_guarantee_map);
    while ( std::operator!=(
              &__for_begin,
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,GachaGuaranteeData> >::_Self *)(v7 + 80)) )
    {
      v313 = std::_Rb_tree_iterator<std::pair<unsigned int const,GachaGuaranteeData>>::operator*(&__for_begin);
      gacha_rule_id = std::get<0ul,unsigned int const,GachaGuaranteeData>(v313);
      _ = (std::tuple_element<1,const std::pair<unsigned int const,GachaGuaranteeData> >::type *)std::get<1ul,unsigned int const,GachaGuaranteeData>(v313);
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)(v7 + 272));
      p_gacha_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 272))->design_config.txt_config_mgr.gacha_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)gacha_rule_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)gacha_rule_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)gacha_rule_id >> 3)
                                                                        + 0x7FFF8000) )
      {
        __asan_report_load4(gacha_rule_id);
      }
      gacha_rule_config_ptr = data::GachaExcelConfigMgrBase::findGachaRuleExcelConfig(
                                p_gacha_config_mgr,
                                *gacha_rule_id);
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v7 + 272));
      if ( gacha_rule_config_ptr )
      {
        std::vector<data::GachaRuleExcelConfig>::emplace_back<data::GachaRuleExcelConfig const&>(
          (std::vector<data::GachaRuleExcelConfig> *const)(v7 + 368),
          gacha_rule_config_ptr,
          gacha_rule_config_ptr);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v318,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/gacha/player_gacha_comp.cpp",
          "doGacha",
          906);
        v18 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                &v318,
                (const char (*)[45])"findGachaRuleExcelConfig failed, gacha_type:");
        if ( *(_BYTE *)(((unsigned __int64)&schedule_config->gacha_type >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)schedule_config + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&schedule_config->gacha_type >> 3)
                                                                        + 0x7FFF8000) )
        {
          __asan_report_load4(&schedule_config->gacha_type);
        }
        *(_QWORD *)(v7 + 112) = data::enumValToStr(schedule_config->gacha_type);
        v19 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v18, (const char *const *)(v7 + 112));
        v20 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v19, (const char (*)[14])" schedule_id:");
        v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &schedule_config->schedule_id);
        v22 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v21, (const char (*)[10])" rule_id:");
        v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, gacha_rule_id);
        v24 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v23, (const char (*)[6])" uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, &val);
        common::milog::MiLogStream::~MiLogStream(&v318);
      }
      std::_Rb_tree_iterator<std::pair<unsigned int const,GachaGuaranteeData>>::operator++(&__for_begin);
    }
    M_current = std::vector<data::GachaRuleExcelConfig>::end((std::vector<data::GachaRuleExcelConfig> *const)(v7 + 368))._M_current;
    v26._M_current = std::vector<data::GachaRuleExcelConfig>::begin((std::vector<data::GachaRuleExcelConfig> *const)(v7 + 368))._M_current;
    std::sort___gnu_cxx::__normal_iterator_data::GachaRuleExcelConfig__std::vector_data::GachaRuleExcelConfig____PlayerGachaComp::doGacha_uint32_t_const_string__GachaRecord__const_data::GachaScheduleConfig__proto::DoGachaRsp__bool__::_lambda_const_auto_30__const_auto_31_____(
      v26,
      (__gnu_cxx::__normal_iterator<data::GachaRuleExcelConfig*,std::vector<data::GachaRuleExcelConfig> >)M_current,
      v27);
    for ( gacha_time = 0; gacha_time < gacha_times; ++gacha_time )
    {
      *(_DWORD *)(v7 + 64) = 0;
      __for_range_0 = (std::vector<data::GachaRuleExcelConfig> *)(v7 + 368);
      __for_begin._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,GachaGuaranteeData> >::_Base_ptr)std::vector<data::GachaRuleExcelConfig>::begin((std::vector<data::GachaRuleExcelConfig> *const)(v7 + 368))._M_current;
      *(std::vector<data::GachaRuleExcelConfig>::iterator *)(v7 + 80) = std::vector<data::GachaRuleExcelConfig>::end(__for_range_0);
      while ( __gnu_cxx::operator!=<data::GachaRuleExcelConfig *,std::vector<data::GachaRuleExcelConfig>>(
                (const __gnu_cxx::__normal_iterator<data::GachaRuleExcelConfig*,std::vector<data::GachaRuleExcelConfig> > *)&__for_begin,
                (const __gnu_cxx::__normal_iterator<data::GachaRuleExcelConfig*,std::vector<data::GachaRuleExcelConfig> > *)(v7 + 80)) )
      {
        gacha_rule_config = __gnu_cxx::__normal_iterator<data::GachaRuleExcelConfig *,std::vector<data::GachaRuleExcelConfig>>::operator*((const __gnu_cxx::__normal_iterator<data::GachaRuleExcelConfig*,std::vector<data::GachaRuleExcelConfig> > *const)&__for_begin);
        gacha_guarantee_data = std::map<unsigned int,GachaGuaranteeData>::operator[](
                                 &real_gacha_record->gacha_guarantee_map,
                                 &gacha_rule_config->gacha_rule_id);
        if ( *(_BYTE *)(((unsigned __int64)&gacha_rule_config->gacha_guarantee_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&gacha_rule_config->gacha_guarantee_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&gacha_rule_config->gacha_guarantee_type);
        }
        switch ( gacha_rule_config->gacha_guarantee_type )
        {
          case GACHA_GUARANTEE_SPECIFIED_COUNT:
            if ( *(_BYTE *)(((unsigned __int64)&gacha_rule_config->gacha_guarantee_times >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)gacha_rule_config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gacha_rule_config->gacha_guarantee_times >> 3)
                                                                               + 0x7FFF8000) )
            {
              __asan_report_load4(&gacha_rule_config->gacha_guarantee_times);
            }
            gacha_guarantee_times = gacha_rule_config->gacha_guarantee_times;
            if ( *(_BYTE *)(((unsigned __int64)&real_gacha_record->total_gacha_times >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&real_gacha_record->total_gacha_times >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&real_gacha_record->total_gacha_times);
            }
            if ( gacha_guarantee_times == real_gacha_record->total_gacha_times + 1 )
            {
              if ( *(_BYTE *)(((unsigned __int64)&gacha_guarantee_data->is_cur_schedule_triggered >> 3) + 0x7FFF8000) != 0
                && (((unsigned __int8)gacha_guarantee_data + 8) & 7) >= *(_BYTE *)(((unsigned __int64)&gacha_guarantee_data->is_cur_schedule_triggered >> 3)
                                                                                 + 0x7FFF8000) )
              {
                __asan_report_load1(&gacha_guarantee_data->is_cur_schedule_triggered);
              }
              if ( !gacha_guarantee_data->is_cur_schedule_triggered )
              {
                if ( *(_BYTE *)(((unsigned __int64)&gacha_rule_config->gacha_rule_id >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&gacha_rule_config->gacha_rule_id >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4(&gacha_rule_config->gacha_rule_id);
                }
                *(_DWORD *)(v7 + 64) = gacha_rule_config->gacha_rule_id;
              }
            }
            break;
          case GACHA_GUARANTEE_LOOP_COUNT:
          case GACHA_GUARANTEE_LOOP_COUNT_WITH_CHILDS:
            if ( *(_BYTE *)(((unsigned __int64)&gacha_guarantee_data->last_gacha_guarantee_times >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)gacha_guarantee_data + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gacha_guarantee_data->last_gacha_guarantee_times >> 3)
                                                                                 + 0x7FFF8000) )
            {
              __asan_report_load4(&gacha_guarantee_data->last_gacha_guarantee_times);
            }
            last_gacha_guarantee_times = gacha_guarantee_data->last_gacha_guarantee_times;
            if ( *(_BYTE *)(((unsigned __int64)&gacha_rule_config->gacha_guarantee_times >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)gacha_rule_config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gacha_rule_config->gacha_guarantee_times >> 3)
                                                                               + 0x7FFF8000) )
            {
              __asan_report_load4(&gacha_rule_config->gacha_guarantee_times);
            }
            v30 = gacha_rule_config->gacha_guarantee_times + last_gacha_guarantee_times;
            if ( *(_BYTE *)(((unsigned __int64)&real_gacha_record->total_gacha_times >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&real_gacha_record->total_gacha_times >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&real_gacha_record->total_gacha_times);
            }
            if ( v30 <= real_gacha_record->total_gacha_times + 1 )
            {
              if ( *(_BYTE *)(((unsigned __int64)&gacha_rule_config->gacha_rule_id >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&gacha_rule_config->gacha_rule_id >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&gacha_rule_config->gacha_rule_id);
              }
              *(_DWORD *)(v7 + 64) = gacha_rule_config->gacha_rule_id;
            }
            break;
          case GACHA_GUARANTEE_N_COUNT:
          case GACHA_GUARANTEE_N_COUNT_WITH_CHILDS:
            if ( *(_BYTE *)(((unsigned __int64)&gacha_guarantee_data->last_gacha_guarantee_times >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)gacha_guarantee_data + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gacha_guarantee_data->last_gacha_guarantee_times >> 3)
                                                                                 + 0x7FFF8000) )
            {
              __asan_report_load4(&gacha_guarantee_data->last_gacha_guarantee_times);
            }
            v31 = gacha_guarantee_data->last_gacha_guarantee_times;
            if ( *(_BYTE *)(((unsigned __int64)&gacha_rule_config->gacha_guarantee_times >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)gacha_rule_config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gacha_rule_config->gacha_guarantee_times >> 3)
                                                                               + 0x7FFF8000) )
            {
              __asan_report_load4(&gacha_rule_config->gacha_guarantee_times);
            }
            v32 = gacha_rule_config->gacha_guarantee_times + v31;
            if ( *(_BYTE *)(((unsigned __int64)&real_gacha_record->total_gacha_times >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&real_gacha_record->total_gacha_times >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&real_gacha_record->total_gacha_times);
            }
            if ( v32 <= real_gacha_record->total_gacha_times + 1 )
            {
              if ( *(_BYTE *)(((unsigned __int64)&gacha_guarantee_data->is_cur_schedule_triggered >> 3) + 0x7FFF8000) != 0
                && (((unsigned __int8)gacha_guarantee_data + 8) & 7) >= *(_BYTE *)(((unsigned __int64)&gacha_guarantee_data->is_cur_schedule_triggered >> 3)
                                                                                 + 0x7FFF8000) )
              {
                __asan_report_load1(&gacha_guarantee_data->is_cur_schedule_triggered);
              }
              if ( !gacha_guarantee_data->is_cur_schedule_triggered )
              {
                if ( *(_BYTE *)(((unsigned __int64)&gacha_rule_config->gacha_rule_id >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&gacha_rule_config->gacha_rule_id >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4(&gacha_rule_config->gacha_rule_id);
                }
                *(_DWORD *)(v7 + 64) = gacha_rule_config->gacha_rule_id;
              }
            }
            break;
          default:
            break;
        }
        if ( *(_DWORD *)(v7 + 64) )
        {
          common::milog::MiLogStream::create(
            &v318,
            &common::milog::MiLogDefault::default_log_obj_,
            2u,
            "./src/player/gacha/player_gacha_comp.cpp",
            "doGacha",
            964);
          v33 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                  &v318,
                  (const char (*)[28])"trigger gacha_gurantee uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          val = Player::getUid(this->player_);
          v34 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v33, &val);
          v35 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v34, (const char (*)[10])" rule_id:");
          v36 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v35,
                  (const unsigned int *)(v7 + 64));
          v37 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v36, (const char (*)[13])" gacha_type:");
          if ( *(_BYTE *)(((unsigned __int64)&schedule_config->gacha_type >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)schedule_config + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&schedule_config->gacha_type >> 3)
                                                                          + 0x7FFF8000) )
          {
            __asan_report_load4(&schedule_config->gacha_type);
          }
          *(_QWORD *)(v7 + 112) = data::enumValToStr(schedule_config->gacha_type);
          v38 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(
                  v37,
                  (const char *const *)(v7 + 112));
          v39 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                  v38,
                  (const char (*)[14])" schedule_id:");
          v40 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v39,
                  &schedule_config->schedule_id);
          v41 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                  v40,
                  (const char (*)[28])" last_gacha_gurantee_times:");
          v42 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v41,
                  &gacha_guarantee_data->last_gacha_guarantee_times);
          v43 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                  v42,
                  (const char (*)[20])" total_gacha_times:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
            v43,
            &real_gacha_record->total_gacha_times);
          common::milog::MiLogStream::~MiLogStream(&v318);
          break;
        }
        __gnu_cxx::__normal_iterator<data::GachaRuleExcelConfig *,std::vector<data::GachaRuleExcelConfig>>::operator++((__gnu_cxx::__normal_iterator<data::GachaRuleExcelConfig*,std::vector<data::GachaRuleExcelConfig> > *const)&__for_begin);
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      std::enable_shared_from_this<Player>::shared_from_this((std::enable_shared_from_this<Player> *const)(v7 + 272));
      AddItemContextHolder::AddItemContextHolder((AddItemContextHolder *const)(v7 + 144), (PlayerPtr *)(v7 + 272));
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v7 + 272));
      GachaStatLogContext::GachaStatLogContext((GachaStatLogContext *const)(v7 + 752));
      *(_BYTE *)(v7 + 32) = 0;
      *(_BYTE *)(v7 + 48) = 0;
      PlayerGachaComp::calcGachaDrop(
        (data::GachaPoolExcelConfig *)(v7 + 688),
        this,
        schedule_config,
        real_gacha_record,
        *(_DWORD *)(v7 + 64),
        (bool *)(v7 + 32),
        (bool *)(v7 + 48),
        (GachaStatLogContext *)(v7 + 752));
      is_flash_card = (unsigned int)common::tools::RandomUtils::rand<int>(0, 99) < *(_DWORD *)(v7 + 712);
      *(_DWORD *)(v7 + 176) = 0;
      *(_DWORD *)(v7 + 180) = 0;
      *(_DWORD *)(v7 + 184) = 0;
      *(_DWORD *)(v7 + 188) = 0;
      *(_DWORD *)(v7 + 176) = *(_DWORD *)(v7 + 700);
      *(_DWORD *)(v7 + 180) = 1;
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      ItemComp = Player::getItemComp(this->player_);
      is_gacha_item_new = PlayerItemComp::isNewItem(ItemComp, *(_DWORD *)(v7 + 700));
      ActionReason::ActionReason((ActionReason *const)(v7 + 432), ACTION_REASON_GACHA, ITEM_LIMIT_UNLIMITED);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      v45 = Player::getItemComp(this->player_);
      if ( PlayerItemComp::addItem(v45, (const ItemParam *)(v7 + 176), (const ActionReason *)(v7 + 432), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v318,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/gacha/player_gacha_comp.cpp",
          "doGacha",
          991);
        v46 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                &v318,
                (const char (*)[21])"addItem failed, uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        val = Player::getUid(this->player_);
        v47 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v46, &val);
        v48 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v47, (const char (*)[10])" item_id:");
        v49 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v48,
                (const unsigned int *)(v7 + 176));
        v50 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v49, (const char (*)[8])" count:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v50, (const unsigned int *)(v7 + 180));
        common::milog::MiLogStream::~MiLogStream(&v318);
      }
      proto_gacha_item = proto::DoGachaRsp::add_gacha_item_list(rsp_0);
      proto_item_param = proto::GachaItem::mutable_gacha_item(proto_gacha_item);
      proto::ItemParam::set_item_id(proto_item_param, *(_DWORD *)(v7 + 176));
      proto::ItemParam::set_count(proto_item_param, *(_DWORD *)(v7 + 180));
      proto::GachaItem::set_is_flash_card(proto_gacha_item, is_flash_card);
      proto::GachaItem::set_is_gacha_item_new(proto_gacha_item, is_gacha_item_new);
      AddItemContextHolder::getTransferItems(
        (std::vector<TransferItemParam> *)(v7 + 496),
        (AddItemContextHolder *const)(v7 + 144));
      __for_range_1 = (std::vector<TransferItemParam> *)(v7 + 496);
      *(std::vector<TransferItemParam>::iterator *)(v7 + 80) = std::vector<TransferItemParam>::begin((std::vector<TransferItemParam> *const)(v7 + 496));
      *(std::vector<TransferItemParam>::iterator *)(v7 + 112) = std::vector<TransferItemParam>::end(__for_range_1);
      while ( __gnu_cxx::operator!=<TransferItemParam *,std::vector<TransferItemParam>>(
                (const __gnu_cxx::__normal_iterator<TransferItemParam*,std::vector<TransferItemParam> > *)(v7 + 80),
                (const __gnu_cxx::__normal_iterator<TransferItemParam*,std::vector<TransferItemParam> > *)(v7 + 112)) )
      {
        n = (unsigned __int64)__gnu_cxx::__normal_iterator<TransferItemParam *,std::vector<TransferItemParam>>::operator*((const __gnu_cxx::__normal_iterator<TransferItemParam*,std::vector<TransferItemParam> > *const)(v7 + 80));
        if ( (char)(n & 7) >= *(_BYTE *)((n >> 3) + 0x7FFF8000) && *(_BYTE *)((n >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)(((n + 19) >> 3) + 0x7FFF8000) != 0
          && (char)((n + 19) & 7) >= *(_BYTE *)(((n + 19) >> 3) + 0x7FFF8000) )
        {
          n = __asan_report_load_n(n, 20LL);
        }
        v52 = *(_QWORD *)(n + 8);
        *(_QWORD *)(v7 + 304) = *(_QWORD *)n;
        *(_QWORD *)(v7 + 312) = v52;
        *(_DWORD *)(v7 + 320) = *(_DWORD *)(n + 16);
        proto_transfer_item = proto::GachaItem::add_transfer_items(proto_gacha_item);
        proto_transfer_item_param = proto::GachaTransferItem::mutable_item(proto_transfer_item);
        proto::ItemParam::set_item_id(proto_transfer_item_param, *(_DWORD *)(v7 + 304));
        proto::ItemParam::set_count(proto_transfer_item_param, *(_DWORD *)(v7 + 308));
        proto::GachaTransferItem::set_is_transfer_item_new(proto_transfer_item, *(_BYTE *)(v7 + 320));
        __gnu_cxx::__normal_iterator<TransferItemParam *,std::vector<TransferItemParam>>::operator++((__gnu_cxx::__normal_iterator<TransferItemParam*,std::vector<TransferItemParam> > *const)(v7 + 80));
      }
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)(v7 + 272));
      v53 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 272));
      item_type = GachaExcelConfigMgr::getGachaItemType(
                    &v53->design_config.txt_config_mgr.gacha_config_mgr,
                    *(_DWORD *)(v7 + 176));
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v7 + 272));
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)(v7 + 272));
      v54 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 272))->design_config.txt_config_mgr.gacha_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&schedule_config->gacha_prob_rule_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)schedule_config + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&schedule_config->gacha_prob_rule_id >> 3)
                                                                       + 0x7FFF8000) )
      {
        __asan_report_load4(&schedule_config->gacha_prob_rule_id);
      }
      item_parent_type = GachaExcelConfigMgr::getGachaItemParentType(
                           v54,
                           schedule_config->gacha_prob_rule_id,
                           item_type);
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v7 + 272));
      std::vector<ItemParam>::vector((std::vector<ItemParam> *const)(v7 + 560));
      ActionReason::ActionReason(
        (ActionReason *const)(v7 + 624),
        *(proto::ActionReasonType *)(v7 + 432),
        ITEM_LIMIT_GACHA_TOKEN_DROP);
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)(v7 + 272));
      v55 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 272));
      gacha_token_drop_config_ptr = data::GachaExcelConfigMgrBase::findGachaTokenDropConfig(
                                      &v55->design_config.txt_config_mgr.gacha_config_mgr,
                                      item_type);
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v7 + 272));
      if ( gacha_token_drop_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&gacha_token_drop_config_ptr->token_drop_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)gacha_token_drop_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gacha_token_drop_config_ptr->token_drop_id >> 3)
                                                                                     + 0x7FFF8000) )
        {
          __asan_report_load4(&gacha_token_drop_config_ptr->token_drop_id);
        }
        if ( gacha_token_drop_config_ptr->token_drop_id )
        {
          token_drop_id = gacha_token_drop_config_ptr->token_drop_id;
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          *(OutputResult *)(v7 + 112) = DropUtils::dropItems(
                                          this->player_,
                                          token_drop_id,
                                          1u,
                                          (const ActionReason *)(v7 + 624),
                                          (std::vector<ItemParam> *)(v7 + 560));
          if ( *(_DWORD *)(v7 + 112) )
          {
            common::milog::MiLogStream::create(
              &v318,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/player/gacha/player_gacha_comp.cpp",
              "doGacha",
              1027);
            v58 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                    &v318,
                    (const char (*)[33])"dropItems failed, token_drop_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v58,
              &gacha_token_drop_config_ptr->token_drop_id);
            common::milog::MiLogStream::~MiLogStream(&v318);
          }
        }
        if ( std::vector<ItemParam>::empty((const std::vector<ItemParam> *const)(v7 + 560)) )
          goto LABEL_102;
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        v59 = Player::getItemComp(this->player_);
        if ( PlayerItemComp::addItemBatch(
               v59,
               (const std::vector<ItemParam> *)(v7 + 560),
               (const ActionReason *)(v7 + 432),
               0LL) )
        {
          v60 = 1;
        }
        else
        {
LABEL_102:
          v60 = 0;
        }
        if ( v60 )
        {
          common::milog::MiLogStream::create(
            &v318,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/gacha/player_gacha_comp.cpp",
            "doGacha",
            1032);
          v61 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                  &v318,
                  (const char (*)[26])"addItemBatch failed, uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          val = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v61, &val);
          common::milog::MiLogStream::~MiLogStream(&v318);
        }
        __for_range_2 = (std::vector<ItemParam> *)(v7 + 560);
        *(std::vector<ItemParam>::iterator *)(v7 + 80) = std::vector<ItemParam>::begin((std::vector<ItemParam> *const)(v7 + 560));
        *(std::vector<ItemParam>::iterator *)(v7 + 112) = std::vector<ItemParam>::end(__for_range_2);
        while ( __gnu_cxx::operator!=<ItemParam *,std::vector<ItemParam>>(
                  (const __gnu_cxx::__normal_iterator<ItemParam*,std::vector<ItemParam> > *)(v7 + 80),
                  (const __gnu_cxx::__normal_iterator<ItemParam*,std::vector<ItemParam> > *)(v7 + 112)) )
        {
          token_item = __gnu_cxx::__normal_iterator<ItemParam *,std::vector<ItemParam>>::operator*((const __gnu_cxx::__normal_iterator<ItemParam*,std::vector<ItemParam> > *const)(v7 + 80));
          proto_token_item_param = proto::GachaItem::add_token_item_list(proto_gacha_item);
          if ( *(_BYTE *)(((unsigned __int64)token_item >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)token_item & 7) + 3) >= *(_BYTE *)(((unsigned __int64)token_item >> 3)
                                                                         + 0x7FFF8000) )
          {
            __asan_report_load4(token_item);
          }
          proto::ItemParam::set_item_id(proto_token_item_param, token_item->item_id);
          if ( *(_BYTE *)(((unsigned __int64)&token_item->count >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)token_item + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&token_item->count >> 3)
                                                                     + 0x7FFF8000) )
          {
            __asan_report_load4(&token_item->count);
          }
          proto::ItemParam::set_count(proto_token_item_param, token_item->count);
          __gnu_cxx::__normal_iterator<ItemParam *,std::vector<ItemParam>>::operator++((__gnu_cxx::__normal_iterator<ItemParam*,std::vector<ItemParam> > *const)(v7 + 80));
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v318,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/gacha/player_gacha_comp.cpp",
          "doGacha",
          1018);
        v56 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                &v318,
                (const char (*)[49])"findGachaTokenDropConfig failed, gacha_item_type");
        *(_QWORD *)(v7 + 112) = data::enumValToStr(item_type);
        common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v56, (const char *const *)(v7 + 112));
        common::milog::MiLogStream::~MiLogStream(&v318);
      }
      if ( *(_BYTE *)(((unsigned __int64)is_item_type_need_save >> 3) + 0x7FFF8000) != 0
        && ((unsigned __int8)is_item_type_need_save & 7) >= *(_BYTE *)(((unsigned __int64)is_item_type_need_save >> 3)
                                                                     + 0x7FFF8000) )
      {
        __asan_report_load1(is_item_type_need_save);
      }
      if ( !*is_item_type_need_save )
      {
        v64 = (unsigned int)item_type;
        IsNeedSave = PlayerGachaComp::isGachaItemTypeIsNeedSave(this, item_type);
        v63 = *(_BYTE *)(((unsigned __int64)is_item_type_need_save >> 3) + 0x7FFF8000);
        LOBYTE(v64) = v63 != 0;
        v65 = (v63 != 0) & (unsigned __int8)(((unsigned __int8)is_item_type_need_save & 7) >= v63);
        if ( (_BYTE)v65 )
          __asan_report_store1(is_item_type_need_save, v64, v65);
        *is_item_type_need_save = IsNeedSave;
        common::milog::MiLogStream::create(
          &v318,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/gacha/player_gacha_comp.cpp",
          "doGacha",
          1046);
        v66 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                &v318,
                (const char (*)[45])"check item need save is_item_type_need_save:");
        if ( *(_BYTE *)(((unsigned __int64)is_item_type_need_save >> 3) + 0x7FFF8000) != 0
          && ((unsigned __int8)is_item_type_need_save & 7) >= *(_BYTE *)(((unsigned __int64)is_item_type_need_save >> 3)
                                                                       + 0x7FFF8000) )
        {
          __asan_report_load1(is_item_type_need_save);
        }
        v67 = common::milog::MiLogStream::operator<<(v66, *is_item_type_need_save);
        v68 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v67, (const char (*)[10])" item_id:");
        v69 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v68,
                (const unsigned int *)(v7 + 700));
        v70 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v69, (const char (*)[12])" item_type:");
        *(_QWORD *)(v7 + 112) = data::enumValToStr(item_type);
        common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v70, (const char *const *)(v7 + 112));
        common::milog::MiLogStream::~MiLogStream(&v318);
      }
      if ( *(_BYTE *)(((unsigned __int64)&real_gacha_record->total_gacha_times >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&real_gacha_record->total_gacha_times >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&real_gacha_record->total_gacha_times);
      }
      ++real_gacha_record->total_gacha_times;
      if ( *(_BYTE *)(((unsigned __int64)&real_gacha_record->cur_schedule_total_gacha_times >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)real_gacha_record + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&real_gacha_record->cur_schedule_total_gacha_times >> 3)
                                                                         + 0x7FFF8000) )
      {
        __asan_report_load4(&real_gacha_record->cur_schedule_total_gacha_times);
      }
      ++real_gacha_record->cur_schedule_total_gacha_times;
      last_gacha_item_type_times = GachaRecord::getLastItemTypeGachaTimes(real_gacha_record, item_type);
      last_gacha_item_parent_type_times = GachaRecord::getLastItemParentTypeGachaTimes(
                                            real_gacha_record,
                                            item_parent_type);
      GachaRecord::updateLastItemTypeGachaTimes(real_gacha_record, item_type);
      GachaRecord::updateLastItemParentTypeGachaTimes(real_gacha_record, item_parent_type);
      if ( data::GachaScheduleConfig::findGachaUpConfig(schedule_config, item_parent_type) )
      {
        if ( *(_BYTE *)(v7 + 32) || *(_BYTE *)(v7 + 48) )
          GachaRecord::resetGachaNoUpTimes(real_gacha_record, item_parent_type);
        else
          GachaRecord::incGachaNoUpTimes(real_gacha_record, item_parent_type);
      }
      if ( *(_BYTE *)(((unsigned __int64)&schedule_config->gacha_type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)schedule_config + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&schedule_config->gacha_type >> 3)
                                                                      + 0x7FFF8000) )
      {
        __asan_report_load4(&schedule_config->gacha_type);
      }
      if ( schedule_config->gacha_type == GACHA_TYPE_SPECIAL_ACTIVITY_AVATAR )
      {
        if ( *(_BYTE *)(((unsigned __int64)&gacha_record->total_gacha_times >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&gacha_record->total_gacha_times >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&gacha_record->total_gacha_times);
        }
        ++gacha_record->total_gacha_times;
        if ( *(_BYTE *)(((unsigned __int64)&gacha_record->cur_schedule_total_gacha_times >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)gacha_record + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gacha_record->cur_schedule_total_gacha_times >> 3)
                                                                      + 0x7FFF8000) )
        {
          __asan_report_load4(&gacha_record->cur_schedule_total_gacha_times);
        }
        ++gacha_record->cur_schedule_total_gacha_times;
      }
      common::milog::MiLogStream::create(
        &v318,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/gacha/player_gacha_comp.cpp",
        "doGacha",
        1078);
      v71 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
              &v318,
              (const char (*)[20])"at last gacha_item:");
      v72 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v71,
              (const unsigned int *)(v7 + 700));
      v73 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v72, (const char (*)[12])" item_type:");
      *(_QWORD *)(v7 + 112) = data::enumValToStr(item_type);
      v74 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v73, (const char *const *)(v7 + 112));
      v75 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v74, (const char (*)[15])" wish_item_id:");
      v76 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v75,
              &real_gacha_record->wish_item_id);
      v77 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
              v76,
              (const char (*)[24])" is_gacha_up_triggered:");
      v78 = common::milog::MiLogStream::operator<<(v77, *(_BYTE *)(v7 + 32));
      v79 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
              v78,
              (const char (*)[20])" is_wish_triggered:");
      common::milog::MiLogStream::operator<<(v79, *(_BYTE *)(v7 + 48));
      common::milog::MiLogStream::~MiLogStream(&v318);
      if ( data::GachaScheduleConfig::isGachaItemUp(schedule_config, *(_DWORD *)(v7 + 700))
        && *(_BYTE *)(v7 + 32) != 1
        && *(_BYTE *)(v7 + 48) != 1 )
      {
        common::milog::MiLogStream::create(
          &v318,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/gacha/player_gacha_comp.cpp",
          "doGacha",
          1084);
        v81 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v318, (const char (*)[5])"uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        val = Player::getUid(this->player_);
        v82 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v81, &val);
        v83 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                v82,
                (const char (*)[17])" select up item:");
        v84 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v83,
                (const unsigned int *)(v7 + 700));
        common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
          v84,
          (const char (*)[39])" but is_gacha_up/wish_triggered false!");
        common::milog::MiLogStream::~MiLogStream(&v318);
      }
      if ( *(_BYTE *)(((unsigned __int64)&real_gacha_record->wish_item_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&real_gacha_record->wish_item_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&real_gacha_record->wish_item_id);
      }
      if ( real_gacha_record->wish_item_id )
      {
        if ( *(_BYTE *)(((unsigned __int64)&real_gacha_record->wish_progress >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)real_gacha_record - 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&real_gacha_record->wish_progress >> 3)
                                                                           + 0x7FFF8000) )
        {
          __asan_report_load4(&real_gacha_record->wish_progress);
        }
        before_progress = real_gacha_record->wish_progress;
        if ( *(_DWORD *)(v7 + 700) == real_gacha_record->wish_item_id )
        {
          real_gacha_record->wish_progress = 0;
          PlayerGachaComp::printWishProgressStatLog(this, real_gacha_record, before_progress, 4u);
          common::milog::MiLogStream::create(
            &v318,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/gacha/player_gacha_comp.cpp",
            "doGacha",
            1095);
          v85 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                  &v318,
                  (const char (*)[20])"gacha wish_item_id:");
          v86 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v85,
                  (const unsigned int *)(v7 + 700));
          common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
            v86,
            (const char (*)[21])", and clear progress");
          common::milog::MiLogStream::~MiLogStream(&v318);
        }
        else
        {
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)(v7 + 272));
          v87 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 272))->design_config.txt_config_mgr.gacha_config_mgr;
          if ( *(_BYTE *)(((unsigned __int64)&schedule_config->gacha_type >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)schedule_config + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&schedule_config->gacha_type >> 3)
                                                                          + 0x7FFF8000) )
          {
            __asan_report_load4(&schedule_config->gacha_type);
          }
          wish_config_ptr_0 = data::GachaExcelConfigMgrBase::findGachaWishConfig(v87, schedule_config->gacha_type);
          std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v7 + 272));
          if ( wish_config_ptr_0 )
          {
            if ( *(_BYTE *)(((unsigned __int64)&wish_config_ptr_0->wish_parent_type >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)wish_config_ptr_0 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&wish_config_ptr_0->wish_parent_type >> 3)
                                                                               + 0x7FFF8000) )
            {
              __asan_report_load4(&wish_config_ptr_0->wish_parent_type);
            }
            if ( item_parent_type == wish_config_ptr_0->wish_parent_type )
            {
              if ( *(_BYTE *)(((unsigned __int64)&real_gacha_record->wish_progress >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)real_gacha_record - 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&real_gacha_record->wish_progress >> 3)
                                                                                 + 0x7FFF8000) )
              {
                __asan_report_load4(&real_gacha_record->wish_progress);
              }
              ++real_gacha_record->wish_progress;
              PlayerGachaComp::printWishProgressStatLog(this, real_gacha_record, before_progress, 4u);
              common::milog::MiLogStream::create(
                &v318,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/player/gacha/player_gacha_comp.cpp",
                "doGacha",
                1105);
              v88 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                      &v318,
                      (const char (*)[25])"gacha wish parent_type: ");
              *(_QWORD *)(v7 + 112) = data::enumValToStr(item_parent_type);
              v89 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(
                      v88,
                      (const char *const *)(v7 + 112));
              v90 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                      v89,
                      (const char (*)[23])", and add progress to:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v90,
                &real_gacha_record->wish_progress);
              common::milog::MiLogStream::~MiLogStream(&v318);
            }
          }
        }
      }
      __for_range_3 = (std::vector<data::GachaRuleExcelConfig> *)(v7 + 368);
      __for_begin_0._M_current = std::vector<data::GachaRuleExcelConfig>::begin((std::vector<data::GachaRuleExcelConfig> *const)(v7 + 368))._M_current;
      __for_end._M_current = std::vector<data::GachaRuleExcelConfig>::end(__for_range_3)._M_current;
      while ( __gnu_cxx::operator!=<data::GachaRuleExcelConfig *,std::vector<data::GachaRuleExcelConfig>>(
                &__for_begin_0,
                &__for_end) )
      {
        gacha_rule_config_0 = __gnu_cxx::__normal_iterator<data::GachaRuleExcelConfig *,std::vector<data::GachaRuleExcelConfig>>::operator*(&__for_begin_0);
        gacha_guarantee_data_0 = std::map<unsigned int,GachaGuaranteeData>::operator[](
                                   &real_gacha_record->gacha_guarantee_map,
                                   &gacha_rule_config_0->gacha_rule_id);
        if ( *(_BYTE *)(((unsigned __int64)&gacha_rule_config_0->gacha_guarantee_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&gacha_rule_config_0->gacha_guarantee_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&gacha_rule_config_0->gacha_guarantee_type);
        }
        switch ( gacha_rule_config_0->gacha_guarantee_type )
        {
          case GACHA_GUARANTEE_SPECIFIED_COUNT:
            if ( *(_BYTE *)(((unsigned __int64)&gacha_rule_config_0->gacha_guarantee_item >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&gacha_rule_config_0->gacha_guarantee_item >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&gacha_rule_config_0->gacha_guarantee_item);
            }
            if ( gacha_rule_config_0->gacha_guarantee_item == *(_DWORD *)(v7 + 176) )
            {
              common::milog::MiLogStream::create(
                &v318,
                &common::milog::MiLogDefault::default_log_obj_,
                2u,
                "./src/player/gacha/player_gacha_comp.cpp",
                "doGacha",
                1119);
              v91 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                      &v318,
                      (const char (*)[26])"update gurantee_data uid:");
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8(&this->player_);
              val = Player::getUid(this->player_);
              v92 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v91, &val);
              v93 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                      v92,
                      (const char (*)[10])" rule_id:");
              v94 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v93,
                      &gacha_rule_config_0->gacha_rule_id);
              v95 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                      v94,
                      (const char (*)[13])" gacha_type:");
              if ( *(_BYTE *)(((unsigned __int64)&schedule_config->gacha_type >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)schedule_config + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&schedule_config->gacha_type >> 3)
                                                                              + 0x7FFF8000) )
              {
                __asan_report_load4(&schedule_config->gacha_type);
              }
              *(_QWORD *)(v7 + 112) = data::enumValToStr(schedule_config->gacha_type);
              v96 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(
                      v95,
                      (const char *const *)(v7 + 112));
              v97 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                      v96,
                      (const char (*)[14])" schedule_id:");
              v98 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v97,
                      &schedule_config->schedule_id);
              v99 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                      v98,
                      (const char (*)[28])" last_gacha_gurantee_times:");
              v100 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                       v99,
                       &gacha_guarantee_data_0->last_gacha_guarantee_times);
              v101 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                       v100,
                       (const char (*)[20])" total_gacha_times:");
              p_total_gacha_times = &real_gacha_record->total_gacha_times;
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v101,
                &real_gacha_record->total_gacha_times);
              common::milog::MiLogStream::~MiLogStream(&v318);
              if ( *(_BYTE *)(((unsigned __int64)&real_gacha_record->total_gacha_times >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&real_gacha_record->total_gacha_times >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&real_gacha_record->total_gacha_times);
              }
              total_gacha_times = real_gacha_record->total_gacha_times;
              v104 = *(_BYTE *)(((unsigned __int64)&gacha_guarantee_data_0->last_gacha_guarantee_times >> 3) + 0x7FFF8000);
              LOBYTE(p_total_gacha_times) = v104 != 0;
              v105 = (v104 != 0) & (unsigned __int8)((char)((((_BYTE)gacha_guarantee_data_0 + 4) & 7) + 3) >= v104);
              if ( (_BYTE)v105 )
                __asan_report_store4(&gacha_guarantee_data_0->last_gacha_guarantee_times, p_total_gacha_times, v105);
              gacha_guarantee_data_0->last_gacha_guarantee_times = total_gacha_times;
              v106 = ((_BYTE)gacha_guarantee_data_0 + 8) & 7;
              v107 = (*(_BYTE *)(((unsigned __int64)&gacha_guarantee_data_0->is_cur_schedule_triggered >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v106 >= *(_BYTE *)(((unsigned __int64)&gacha_guarantee_data_0->is_cur_schedule_triggered >> 3) + 0x7FFF8000));
              if ( (_BYTE)v107 )
                __asan_report_store1(&gacha_guarantee_data_0->is_cur_schedule_triggered, v106, v107);
              gacha_guarantee_data_0->is_cur_schedule_triggered = 1;
            }
            break;
          case GACHA_GUARANTEE_LOOP_COUNT:
            v108 = item_parent_type;
            v109 = std::vector<data::GachaGuaranteeParentTypeWeight>::end(&gacha_rule_config_0->gacha_guarantee_parent_type_weight_vec)._M_current;
            v110._M_current = std::vector<data::GachaGuaranteeParentTypeWeight>::begin(&gacha_rule_config_0->gacha_guarantee_parent_type_weight_vec)._M_current;
            *(__gnu_cxx::__normal_iterator<const data::GachaGuaranteeParentTypeWeight*,std::vector<data::GachaGuaranteeParentTypeWeight> > *)(v7 + 80) = std::find_if<__gnu_cxx::__normal_iterator<data::GachaGuaranteeParentTypeWeight const*,std::vector<data::GachaGuaranteeParentTypeWeight>>,PlayerGachaComp::doGacha(unsigned int,std::string const&,GachaRecord &,data::GachaScheduleConfig const&,proto::DoGachaRsp &,bool &)::{lambda(__gnu_cxx::__normal_iterator<data::GachaGuaranteeParentTypeWeight const*,std::vector<data::GachaGuaranteeParentTypeWeight>> const&)#2}>(v110, (__gnu_cxx::__normal_iterator<const data::GachaGuaranteeParentTypeWeight*,std::vector<data::GachaGuaranteeParentTypeWeight> >)v109, (PlayerGachaComp::doGacha::<lambda(const auto:32&)>)v108);
            *(std::vector<data::GachaGuaranteeParentTypeWeight>::const_iterator *)(v7 + 112) = std::vector<data::GachaGuaranteeParentTypeWeight>::end(&gacha_rule_config_0->gacha_guarantee_parent_type_weight_vec);
            if ( __gnu_cxx::operator!=<data::GachaGuaranteeParentTypeWeight const*,std::vector<data::GachaGuaranteeParentTypeWeight>>(
                   (const __gnu_cxx::__normal_iterator<const data::GachaGuaranteeParentTypeWeight*,std::vector<data::GachaGuaranteeParentTypeWeight> > *)(v7 + 80),
                   (const __gnu_cxx::__normal_iterator<const data::GachaGuaranteeParentTypeWeight*,std::vector<data::GachaGuaranteeParentTypeWeight> > *)(v7 + 112)) )
            {
              common::milog::MiLogStream::create(
                &v318,
                &common::milog::MiLogDefault::default_log_obj_,
                2u,
                "./src/player/gacha/player_gacha_comp.cpp",
                "doGacha",
                1136);
              v111 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                       &v318,
                       (const char (*)[26])"update gurantee_data uid:");
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8(&this->player_);
              val = Player::getUid(this->player_);
              v112 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v111, &val);
              v113 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                       v112,
                       (const char (*)[10])" rule_id:");
              v114 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                       v113,
                       &gacha_rule_config_0->gacha_rule_id);
              v115 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                       v114,
                       (const char (*)[13])" gacha_type:");
              if ( *(_BYTE *)(((unsigned __int64)&schedule_config->gacha_type >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)schedule_config + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&schedule_config->gacha_type >> 3)
                                                                              + 0x7FFF8000) )
              {
                __asan_report_load4(&schedule_config->gacha_type);
              }
              *(_QWORD *)(v7 + 112) = data::enumValToStr(schedule_config->gacha_type);
              v116 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(
                       v115,
                       (const char *const *)(v7 + 112));
              v117 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                       v116,
                       (const char (*)[14])" schedule_id:");
              v118 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                       v117,
                       &schedule_config->schedule_id);
              v119 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                       v118,
                       (const char (*)[28])" last_gacha_gurantee_times:");
              v120 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                       v119,
                       &gacha_guarantee_data_0->last_gacha_guarantee_times);
              v121 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                       v120,
                       (const char (*)[20])" total_gacha_times:");
              v122 = &real_gacha_record->total_gacha_times;
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v121,
                &real_gacha_record->total_gacha_times);
              common::milog::MiLogStream::~MiLogStream(&v318);
              if ( *(_BYTE *)(((unsigned __int64)&real_gacha_record->total_gacha_times >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&real_gacha_record->total_gacha_times >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&real_gacha_record->total_gacha_times);
              }
              v123 = real_gacha_record->total_gacha_times;
              v124 = *(_BYTE *)(((unsigned __int64)&gacha_guarantee_data_0->last_gacha_guarantee_times >> 3) + 0x7FFF8000);
              LOBYTE(v122) = v124 != 0;
              v125 = (v124 != 0) & (unsigned __int8)((char)((((_BYTE)gacha_guarantee_data_0 + 4) & 7) + 3) >= v124);
              if ( (_BYTE)v125 )
                __asan_report_store4(&gacha_guarantee_data_0->last_gacha_guarantee_times, v122, v125);
              gacha_guarantee_data_0->last_gacha_guarantee_times = v123;
            }
            break;
          case GACHA_GUARANTEE_N_COUNT:
            if ( *(_BYTE *)(((unsigned __int64)&gacha_rule_config_0->gacha_guarantee_item_parent_type >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)gacha_rule_config_0 + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gacha_rule_config_0->gacha_guarantee_item_parent_type >> 3)
                                                                                  + 0x7FFF8000) )
            {
              __asan_report_load4(&gacha_rule_config_0->gacha_guarantee_item_parent_type);
            }
            if ( item_parent_type == gacha_rule_config_0->gacha_guarantee_item_parent_type )
            {
              common::milog::MiLogStream::create(
                &v318,
                &common::milog::MiLogDefault::default_log_obj_,
                2u,
                "./src/player/gacha/player_gacha_comp.cpp",
                "doGacha",
                1170);
              v147 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                       &v318,
                       (const char (*)[26])"update gurantee_data uid:");
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8(&this->player_);
              val = Player::getUid(this->player_);
              v148 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v147, &val);
              v149 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                       v148,
                       (const char (*)[10])" rule_id:");
              v150 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                       v149,
                       &gacha_rule_config_0->gacha_rule_id);
              v151 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                       v150,
                       (const char (*)[13])" gacha_type:");
              if ( *(_BYTE *)(((unsigned __int64)&schedule_config->gacha_type >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)schedule_config + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&schedule_config->gacha_type >> 3)
                                                                              + 0x7FFF8000) )
              {
                __asan_report_load4(&schedule_config->gacha_type);
              }
              *(_QWORD *)(v7 + 112) = data::enumValToStr(schedule_config->gacha_type);
              v152 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(
                       v151,
                       (const char *const *)(v7 + 112));
              v153 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                       v152,
                       (const char (*)[14])" schedule_id:");
              v154 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                       v153,
                       &schedule_config->schedule_id);
              v155 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                       v154,
                       (const char (*)[28])" last_gacha_gurantee_times:");
              v156 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                       v155,
                       &gacha_guarantee_data_0->last_gacha_guarantee_times);
              v157 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                       v156,
                       (const char (*)[20])" total_gacha_times:");
              v158 = &real_gacha_record->total_gacha_times;
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v157,
                &real_gacha_record->total_gacha_times);
              common::milog::MiLogStream::~MiLogStream(&v318);
              if ( *(_BYTE *)(((unsigned __int64)&real_gacha_record->total_gacha_times >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&real_gacha_record->total_gacha_times >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&real_gacha_record->total_gacha_times);
              }
              v159 = real_gacha_record->total_gacha_times;
              v160 = *(_BYTE *)(((unsigned __int64)&gacha_guarantee_data_0->last_gacha_guarantee_times >> 3) + 0x7FFF8000);
              LOBYTE(v158) = v160 != 0;
              v161 = (v160 != 0) & (unsigned __int8)((char)((((_BYTE)gacha_guarantee_data_0 + 4) & 7) + 3) >= v160);
              if ( (_BYTE)v161 )
                __asan_report_store4(&gacha_guarantee_data_0->last_gacha_guarantee_times, v158, v161);
              gacha_guarantee_data_0->last_gacha_guarantee_times = v159;
              v162 = ((_BYTE)gacha_guarantee_data_0 + 8) & 7;
              v163 = (*(_BYTE *)(((unsigned __int64)&gacha_guarantee_data_0->is_cur_schedule_triggered >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v162 >= *(_BYTE *)(((unsigned __int64)&gacha_guarantee_data_0->is_cur_schedule_triggered >> 3) + 0x7FFF8000));
              if ( (_BYTE)v163 )
                __asan_report_store1(&gacha_guarantee_data_0->is_cur_schedule_triggered, v162, v163);
              gacha_guarantee_data_0->is_cur_schedule_triggered = 1;
            }
            break;
          case GACHA_GUARANTEE_LOOP_COUNT_WITH_CHILDS:
            v126 = item_parent_type;
            v127 = std::vector<data::GachaGuaranteeParentTypeWeightWithChilds>::end(&gacha_rule_config_0->gacha_guarantee_parent_type_weight_childs_vec)._M_current;
            v128._M_current = std::vector<data::GachaGuaranteeParentTypeWeightWithChilds>::begin(&gacha_rule_config_0->gacha_guarantee_parent_type_weight_childs_vec)._M_current;
            *(__gnu_cxx::__normal_iterator<const data::GachaGuaranteeParentTypeWeightWithChilds*,std::vector<data::GachaGuaranteeParentTypeWeightWithChilds> > *)(v7 + 80) = std::find_if<__gnu_cxx::__normal_iterator<data::GachaGuaranteeParentTypeWeightWithChilds const*,std::vector<data::GachaGuaranteeParentTypeWeightWithChilds>>,PlayerGachaComp::doGacha(unsigned int,std::string const&,GachaRecord &,data::GachaScheduleConfig const&,proto::DoGachaRsp &,bool &)::{lambda(__gnu_cxx::__normal_iterator<data::GachaGuaranteeParentTypeWeightWithChilds const*,std::vector<data::GachaGuaranteeParentTypeWeightWithChilds>> const&)#3}>(v128, (__gnu_cxx::__normal_iterator<const data::GachaGuaranteeParentTypeWeightWithChilds*,std::vector<data::GachaGuaranteeParentTypeWeightWithChilds> >)v127, (PlayerGachaComp::doGacha::<lambda(const auto:33&)>)v126);
            *(std::vector<data::GachaGuaranteeParentTypeWeightWithChilds>::const_iterator *)(v7 + 112) = std::vector<data::GachaGuaranteeParentTypeWeightWithChilds>::end(&gacha_rule_config_0->gacha_guarantee_parent_type_weight_childs_vec);
            if ( __gnu_cxx::operator!=<data::GachaGuaranteeParentTypeWeightWithChilds const*,std::vector<data::GachaGuaranteeParentTypeWeightWithChilds>>(
                   (const __gnu_cxx::__normal_iterator<const data::GachaGuaranteeParentTypeWeightWithChilds*,std::vector<data::GachaGuaranteeParentTypeWeightWithChilds> > *)(v7 + 80),
                   (const __gnu_cxx::__normal_iterator<const data::GachaGuaranteeParentTypeWeightWithChilds*,std::vector<data::GachaGuaranteeParentTypeWeightWithChilds> > *)(v7 + 112)) )
            {
              gacha_item_type_vec = &__gnu_cxx::__normal_iterator<data::GachaGuaranteeParentTypeWeightWithChilds const*,std::vector<data::GachaGuaranteeParentTypeWeightWithChilds>>::operator->((const __gnu_cxx::__normal_iterator<const data::GachaGuaranteeParentTypeWeightWithChilds*,std::vector<data::GachaGuaranteeParentTypeWeightWithChilds> > *const)(v7 + 80))->item_type_vec;
              *(std::vector<unsigned int>::const_iterator *)(v7 + 112) = std::vector<unsigned int>::end(gacha_item_type_vec);
              v129 = item_type;
              v130 = std::vector<unsigned int>::end(gacha_item_type_vec)._M_current;
              v131._M_current = std::vector<unsigned int>::begin(gacha_item_type_vec)._M_current;
              __for_begin._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,GachaGuaranteeData> >::_Base_ptr)std::find_if<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>,PlayerGachaComp::doGacha(unsigned int,std::string const&,GachaRecord &,data::GachaScheduleConfig const&,proto::DoGachaRsp &,bool &)::{lambda(__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>> const&)#4}>(v131, (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)v130, (PlayerGachaComp::doGacha::<lambda(const auto:34&)>)v129)._M_current;
              if ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                     (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)&__for_begin,
                     (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v7 + 112)) )
              {
                common::milog::MiLogStream::create(
                  &v318,
                  &common::milog::MiLogDefault::default_log_obj_,
                  2u,
                  "./src/player/gacha/player_gacha_comp.cpp",
                  "doGacha",
                  1158);
                v132 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                         &v318,
                         (const char (*)[26])"update gurantee_data uid:");
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8(&this->player_);
                val = Player::getUid(this->player_);
                v133 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v132, &val);
                v134 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                         v133,
                         (const char (*)[10])" rule_id:");
                v135 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                         v134,
                         &gacha_rule_config_0->gacha_rule_id);
                v136 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                         v135,
                         (const char (*)[13])" gacha_type:");
                if ( *(_BYTE *)(((unsigned __int64)&schedule_config->gacha_type >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)schedule_config + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&schedule_config->gacha_type >> 3)
                                                                                + 0x7FFF8000) )
                {
                  __asan_report_load4(&schedule_config->gacha_type);
                }
                *(_QWORD *)(v7 + 112) = data::enumValToStr(schedule_config->gacha_type);
                v137 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(
                         v136,
                         (const char *const *)(v7 + 112));
                v138 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                         v137,
                         (const char (*)[14])" schedule_id:");
                v139 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                         v138,
                         &schedule_config->schedule_id);
                v140 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                         v139,
                         (const char (*)[28])" last_gacha_gurantee_times:");
                v141 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                         v140,
                         &gacha_guarantee_data_0->last_gacha_guarantee_times);
                v142 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                         v141,
                         (const char (*)[20])" total_gacha_times:");
                v143 = &real_gacha_record->total_gacha_times;
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v142,
                  &real_gacha_record->total_gacha_times);
                common::milog::MiLogStream::~MiLogStream(&v318);
                if ( *(_BYTE *)(((unsigned __int64)&real_gacha_record->total_gacha_times >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&real_gacha_record->total_gacha_times >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4(&real_gacha_record->total_gacha_times);
                }
                v144 = real_gacha_record->total_gacha_times;
                v145 = *(_BYTE *)(((unsigned __int64)&gacha_guarantee_data_0->last_gacha_guarantee_times >> 3)
                                + 0x7FFF8000);
                LOBYTE(v143) = v145 != 0;
                v146 = (v145 != 0) & (unsigned __int8)((char)((((_BYTE)gacha_guarantee_data_0 + 4) & 7) + 3) >= v145);
                if ( (_BYTE)v146 )
                  __asan_report_store4(&gacha_guarantee_data_0->last_gacha_guarantee_times, v143, v146);
                gacha_guarantee_data_0->last_gacha_guarantee_times = v144;
              }
            }
            break;
          case GACHA_GUARANTEE_N_COUNT_WITH_CHILDS:
            if ( *(_BYTE *)(((unsigned __int64)&gacha_rule_config_0->gacha_guarantee_item_parent_type_childs.gacha_item_parent_type >> 3)
                          + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&gacha_rule_config_0->gacha_guarantee_item_parent_type_childs.gacha_item_parent_type >> 3)
                          + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&gacha_rule_config_0->gacha_guarantee_item_parent_type_childs.gacha_item_parent_type);
            }
            if ( item_parent_type == gacha_rule_config_0->gacha_guarantee_item_parent_type_childs.gacha_item_parent_type )
            {
              gacha_item_type_vec_0 = &gacha_rule_config_0->gacha_guarantee_item_parent_type_childs.item_type_vec;
              *(std::vector<unsigned int>::const_iterator *)(v7 + 112) = std::vector<unsigned int>::end(&gacha_rule_config_0->gacha_guarantee_item_parent_type_childs.item_type_vec);
              v164 = item_type;
              v165 = std::vector<unsigned int>::end(gacha_item_type_vec_0)._M_current;
              v166._M_current = std::vector<unsigned int>::begin(gacha_item_type_vec_0)._M_current;
              *(__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v7 + 80) = std::find_if<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>,PlayerGachaComp::doGacha(unsigned int,std::string const&,GachaRecord &,data::GachaScheduleConfig const&,proto::DoGachaRsp &,bool &)::{lambda(__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>> const&)#5}>(v166, (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)v165, (PlayerGachaComp::doGacha::<lambda(const auto:35&)>)v164);
              if ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                     (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v7 + 80),
                     (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v7 + 112)) )
              {
                common::milog::MiLogStream::create(
                  &v318,
                  &common::milog::MiLogDefault::default_log_obj_,
                  2u,
                  "./src/player/gacha/player_gacha_comp.cpp",
                  "doGacha",
                  1188);
                v167 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                         &v318,
                         (const char (*)[26])"update gurantee_data uid:");
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8(&this->player_);
                val = Player::getUid(this->player_);
                v168 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v167, &val);
                v169 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                         v168,
                         (const char (*)[10])" rule_id:");
                v170 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                         v169,
                         &gacha_rule_config_0->gacha_rule_id);
                v171 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                         v170,
                         (const char (*)[13])" gacha_type:");
                if ( *(_BYTE *)(((unsigned __int64)&schedule_config->gacha_type >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)schedule_config + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&schedule_config->gacha_type >> 3)
                                                                                + 0x7FFF8000) )
                {
                  __asan_report_load4(&schedule_config->gacha_type);
                }
                *(_QWORD *)(v7 + 112) = data::enumValToStr(schedule_config->gacha_type);
                v172 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(
                         v171,
                         (const char *const *)(v7 + 112));
                v173 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                         v172,
                         (const char (*)[14])" schedule_id:");
                v174 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                         v173,
                         &schedule_config->schedule_id);
                v175 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                         v174,
                         (const char (*)[28])" last_gacha_gurantee_times:");
                v176 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                         v175,
                         &gacha_guarantee_data_0->last_gacha_guarantee_times);
                v177 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                         v176,
                         (const char (*)[20])" total_gacha_times:");
                v178 = &real_gacha_record->total_gacha_times;
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v177,
                  &real_gacha_record->total_gacha_times);
                common::milog::MiLogStream::~MiLogStream(&v318);
                if ( *(_BYTE *)(((unsigned __int64)&real_gacha_record->total_gacha_times >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&real_gacha_record->total_gacha_times >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4(&real_gacha_record->total_gacha_times);
                }
                v179 = real_gacha_record->total_gacha_times;
                v180 = *(_BYTE *)(((unsigned __int64)&gacha_guarantee_data_0->last_gacha_guarantee_times >> 3)
                                + 0x7FFF8000);
                LOBYTE(v178) = v180 != 0;
                v181 = (v180 != 0) & (unsigned __int8)((char)((((_BYTE)gacha_guarantee_data_0 + 4) & 7) + 3) >= v180);
                if ( (_BYTE)v181 )
                  __asan_report_store4(&gacha_guarantee_data_0->last_gacha_guarantee_times, v178, v181);
                gacha_guarantee_data_0->last_gacha_guarantee_times = v179;
                v182 = ((_BYTE)gacha_guarantee_data_0 + 8) & 7;
                v183 = (*(_BYTE *)(((unsigned __int64)&gacha_guarantee_data_0->is_cur_schedule_triggered >> 3)
                                 + 0x7FFF8000) != 0) & (unsigned __int8)((char)v182 >= *(_BYTE *)(((unsigned __int64)&gacha_guarantee_data_0->is_cur_schedule_triggered >> 3)
                                                                                                + 0x7FFF8000));
                if ( (_BYTE)v183 )
                  __asan_report_store1(&gacha_guarantee_data_0->is_cur_schedule_triggered, v182, v183);
                gacha_guarantee_data_0->is_cur_schedule_triggered = 1;
              }
            }
            break;
          default:
            break;
        }
        __gnu_cxx::__normal_iterator<data::GachaRuleExcelConfig *,std::vector<data::GachaRuleExcelConfig>>::operator++(&__for_begin_0);
      }
      common::tools::perf::make_shared<proto_log::PlayerLogBodyDoGacha>();
      if ( std::operator!=<proto_log::PlayerLogBodyDoGacha>(
             (const std::shared_ptr<proto_log::PlayerLogBodyDoGacha> *)(v7 + 208),
             0LL) )
      {
        v184 = std::__shared_ptr_access<proto_log::PlayerLogBodyDoGacha,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyDoGacha,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 208));
        if ( *(_BYTE *)(((unsigned __int64)&schedule_config->gacha_type >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)schedule_config + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&schedule_config->gacha_type >> 3)
                                                                        + 0x7FFF8000) )
        {
          __asan_report_load4(&schedule_config->gacha_type);
        }
        proto_log::PlayerLogBodyDoGacha::set_gacha_type(v184, schedule_config->gacha_type);
        v185 = std::__shared_ptr_access<proto_log::PlayerLogBodyDoGacha,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyDoGacha,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 208));
        if ( *(_BYTE *)(((unsigned __int64)schedule_config >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)schedule_config >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(schedule_config);
        }
        proto_log::PlayerLogBodyDoGacha::set_schedule_id(v185, schedule_config->schedule_id);
        v186 = std::__shared_ptr_access<proto_log::PlayerLogBodyDoGacha,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyDoGacha,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 208));
        proto_log::PlayerLogBodyDoGacha::set_gacha_times(v186, gacha_times);
        v187 = std::__shared_ptr_access<proto_log::PlayerLogBodyDoGacha,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyDoGacha,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 208));
        item_log = proto_log::PlayerLogBodyDoGacha::mutable_cost_item(v187);
        if ( *(_BYTE *)(((unsigned __int64)&schedule_config->cost_item_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&schedule_config->cost_item_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&schedule_config->cost_item_id);
        }
        proto_log::ItemLog::set_item_id(item_log, schedule_config->cost_item_id);
        if ( *(_BYTE *)(((unsigned __int64)&schedule_config->cost_item_num >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)schedule_config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&schedule_config->cost_item_num >> 3)
                                                                         + 0x7FFF8000) )
        {
          __asan_report_load4(&schedule_config->cost_item_num);
        }
        proto_log::ItemLog::set_count(item_log, gacha_times * schedule_config->cost_item_num);
        v188 = std::__shared_ptr_access<proto_log::PlayerLogBodyDoGacha,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyDoGacha,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 208));
        if ( *(_BYTE *)(((unsigned __int64)&real_gacha_record->total_gacha_times >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&real_gacha_record->total_gacha_times >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&real_gacha_record->total_gacha_times);
        }
        proto_log::PlayerLogBodyDoGacha::set_total_gacha_times(v188, real_gacha_record->total_gacha_times);
        v189 = std::__shared_ptr_access<proto_log::PlayerLogBodyDoGacha,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyDoGacha,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 208));
        if ( *(_BYTE *)(((unsigned __int64)&real_gacha_record->cur_schedule_total_gacha_times >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)real_gacha_record + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&real_gacha_record->cur_schedule_total_gacha_times >> 3)
                                                                           + 0x7FFF8000) )
        {
          __asan_report_load4(&real_gacha_record->cur_schedule_total_gacha_times);
        }
        proto_log::PlayerLogBodyDoGacha::set_cur_schedule_total_gacha_times(
          v189,
          real_gacha_record->cur_schedule_total_gacha_times);
        v190 = std::__shared_ptr_access<proto_log::PlayerLogBodyDoGacha,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyDoGacha,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 208));
        proto_log::PlayerLogBodyDoGacha::set_guarantee_rule_id(v190, *(_DWORD *)(v7 + 64));
        __for_range_4 = &real_gacha_record->gacha_guarantee_map;
        *(std::map<unsigned int,GachaGuaranteeData>::iterator *)(v7 + 80) = std::map<unsigned int,GachaGuaranteeData>::begin(&real_gacha_record->gacha_guarantee_map);
        *(std::map<unsigned int,GachaGuaranteeData>::iterator *)(v7 + 112) = std::map<unsigned int,GachaGuaranteeData>::end(__for_range_4);
        while ( std::operator!=(
                  (const std::_Rb_tree_iterator<std::pair<unsigned int const,GachaGuaranteeData> >::_Self *)(v7 + 80),
                  (const std::_Rb_tree_iterator<std::pair<unsigned int const,GachaGuaranteeData> >::_Self *)(v7 + 112)) )
        {
          v298 = std::_Rb_tree_iterator<std::pair<unsigned int const,GachaGuaranteeData>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,GachaGuaranteeData> > *const)(v7 + 80));
          rule_id = std::get<0ul,unsigned int const,GachaGuaranteeData>(v298);
          gacha_guarantee_data_1 = (std::tuple_element<1,const std::pair<unsigned int const,GachaGuaranteeData> >::type *)std::get<1ul,unsigned int const,GachaGuaranteeData>(v298);
          v191 = std::__shared_ptr_access<proto_log::PlayerLogBodyDoGacha,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyDoGacha,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 208));
          guarantee_log = proto_log::PlayerLogBodyDoGacha::add_guarantee_data_list(v191);
          if ( *(_BYTE *)(((unsigned __int64)rule_id >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)rule_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)rule_id >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(rule_id);
          }
          proto_log::GachaGuaranteeData::set_guarantee_rule_id(guarantee_log, *rule_id);
          if ( *(_BYTE *)(((unsigned __int64)&gacha_guarantee_data_1->last_gacha_guarantee_times >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)gacha_guarantee_data_1 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gacha_guarantee_data_1->last_gacha_guarantee_times >> 3)
                                                                                 + 0x7FFF8000) )
          {
            __asan_report_load4(&gacha_guarantee_data_1->last_gacha_guarantee_times);
          }
          proto_log::GachaGuaranteeData::set_last_gacha_guarantee_times(
            guarantee_log,
            gacha_guarantee_data_1->last_gacha_guarantee_times);
          std::_Rb_tree_iterator<std::pair<unsigned int const,GachaGuaranteeData>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,GachaGuaranteeData> > *const)(v7 + 80));
        }
        v192 = std::__shared_ptr_access<proto_log::PlayerLogBodyDoGacha,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyDoGacha,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 208));
        gacha_award_log = proto_log::PlayerLogBodyDoGacha::mutable_gacha_award(v192);
        gacha_award_item_log = proto_log::GachaItemLog::mutable_award_item(gacha_award_log);
        proto_log::ItemLog::set_item_id(gacha_award_item_log, *(_DWORD *)(v7 + 176));
        proto_log::ItemLog::set_count(gacha_award_item_log, *(_DWORD *)(v7 + 180));
        __for_range_5 = (std::vector<TransferItemParam> *)(v7 + 496);
        *(std::vector<TransferItemParam>::iterator *)(v7 + 80) = std::vector<TransferItemParam>::begin((std::vector<TransferItemParam> *const)(v7 + 496));
        *(std::vector<TransferItemParam>::iterator *)(v7 + 112) = std::vector<TransferItemParam>::end(__for_range_5);
        while ( __gnu_cxx::operator!=<TransferItemParam *,std::vector<TransferItemParam>>(
                  (const __gnu_cxx::__normal_iterator<TransferItemParam*,std::vector<TransferItemParam> > *)(v7 + 80),
                  (const __gnu_cxx::__normal_iterator<TransferItemParam*,std::vector<TransferItemParam> > *)(v7 + 112)) )
        {
          v193 = (unsigned __int64)__gnu_cxx::__normal_iterator<TransferItemParam *,std::vector<TransferItemParam>>::operator*((const __gnu_cxx::__normal_iterator<TransferItemParam*,std::vector<TransferItemParam> > *const)(v7 + 80));
          if ( (char)(v193 & 7) >= *(_BYTE *)((v193 >> 3) + 0x7FFF8000) && *(_BYTE *)((v193 >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)(((v193 + 19) >> 3) + 0x7FFF8000) != 0
            && (char)((v193 + 19) & 7) >= *(_BYTE *)(((v193 + 19) >> 3) + 0x7FFF8000) )
          {
            v193 = __asan_report_load_n(v193, 20LL);
          }
          v194 = *(_QWORD *)(v193 + 8);
          *(_QWORD *)(v7 + 304) = *(_QWORD *)v193;
          *(_QWORD *)(v7 + 312) = v194;
          *(_DWORD *)(v7 + 320) = *(_DWORD *)(v193 + 16);
          gacha_transfer_item_log = proto_log::GachaItemLog::add_transfer_item(gacha_award_log);
          proto_log::ItemLog::set_item_id(gacha_transfer_item_log, *(_DWORD *)(v7 + 304));
          proto_log::ItemLog::set_count(gacha_transfer_item_log, *(_DWORD *)(v7 + 308));
          __gnu_cxx::__normal_iterator<TransferItemParam *,std::vector<TransferItemParam>>::operator++((__gnu_cxx::__normal_iterator<TransferItemParam*,std::vector<TransferItemParam> > *const)(v7 + 80));
        }
        __for_range_6 = (std::vector<ItemParam> *)(v7 + 560);
        *(std::vector<ItemParam>::iterator *)(v7 + 80) = std::vector<ItemParam>::begin((std::vector<ItemParam> *const)(v7 + 560));
        *(std::vector<ItemParam>::iterator *)(v7 + 112) = std::vector<ItemParam>::end(__for_range_6);
        while ( __gnu_cxx::operator!=<ItemParam *,std::vector<ItemParam>>(
                  (const __gnu_cxx::__normal_iterator<ItemParam*,std::vector<ItemParam> > *)(v7 + 80),
                  (const __gnu_cxx::__normal_iterator<ItemParam*,std::vector<ItemParam> > *)(v7 + 112)) )
        {
          v195 = __gnu_cxx::__normal_iterator<ItemParam *,std::vector<ItemParam>>::operator*((const __gnu_cxx::__normal_iterator<ItemParam*,std::vector<ItemParam> > *const)(v7 + 80));
          p_item_id = &v195->item_id;
          if ( ((unsigned __int8)v195 & 7) >= *(_BYTE *)(((unsigned __int64)v195 >> 3) + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)v195 >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)((((unsigned __int64)&v195->promote_level + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)v195 + 15) & 7) >= *(_BYTE *)((((unsigned __int64)&v195->promote_level + 3) >> 3)
                                                              + 0x7FFF8000) )
          {
            __asan_report_load_n(v195, 16LL);
          }
          v197 = *p_item_id;
          v198 = p_item_id[1];
          *(_QWORD *)(v7 + 272) = v197;
          *(_QWORD *)(v7 + 280) = v198;
          gacha_token_item_log = proto_log::GachaItemLog::add_token_item_list(gacha_award_log);
          proto_log::ItemLog::set_item_id(gacha_token_item_log, *(_DWORD *)(v7 + 272));
          proto_log::ItemLog::set_count(gacha_token_item_log, *(_DWORD *)(v7 + 276));
          __gnu_cxx::__normal_iterator<ItemParam *,std::vector<ItemParam>>::operator++((__gnu_cxx::__normal_iterator<ItemParam*,std::vector<ItemParam> > *const)(v7 + 80));
        }
        v199 = std::__shared_ptr_access<proto_log::PlayerLogBodyDoGacha,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyDoGacha,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 208));
        isGachaItemUp = data::GachaScheduleConfig::isGachaItemUp(schedule_config, *(_DWORD *)(v7 + 176));
        proto_log::PlayerLogBodyDoGacha::set_is_item_up(v199, isGachaItemUp);
        v201 = std::__shared_ptr_access<proto_log::PlayerLogBodyDoGacha,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyDoGacha,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 208));
        proto_log::PlayerLogBodyDoGacha::set_is_flash_card(v201, is_flash_card);
        v202 = std::__shared_ptr_access<proto_log::PlayerLogBodyDoGacha,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyDoGacha,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 208));
        proto_log::PlayerLogBodyDoGacha::set_gacha_item_type(v202, item_type);
        v203 = std::__shared_ptr_access<proto_log::PlayerLogBodyDoGacha,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyDoGacha,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 208));
        proto_log::PlayerLogBodyDoGacha::set_gacha_item_parent_type(v203, item_parent_type);
        __for_range_7 = (std::vector<data::GachaGuaranteeParentTypeWeight> *)(v7 + 752);
        *(std::vector<data::GachaGuaranteeParentTypeWeight>::iterator *)(v7 + 80) = std::vector<data::GachaGuaranteeParentTypeWeight>::begin((std::vector<data::GachaGuaranteeParentTypeWeight> *const)(v7 + 752));
        *(std::vector<data::GachaGuaranteeParentTypeWeight>::iterator *)(v7 + 112) = std::vector<data::GachaGuaranteeParentTypeWeight>::end(__for_range_7);
        while ( __gnu_cxx::operator!=<data::GachaGuaranteeParentTypeWeight *,std::vector<data::GachaGuaranteeParentTypeWeight>>(
                  (const __gnu_cxx::__normal_iterator<data::GachaGuaranteeParentTypeWeight*,std::vector<data::GachaGuaranteeParentTypeWeight> > *)(v7 + 80),
                  (const __gnu_cxx::__normal_iterator<data::GachaGuaranteeParentTypeWeight*,std::vector<data::GachaGuaranteeParentTypeWeight> > *)(v7 + 112)) )
        {
          gacha_item_parent_type_weight = __gnu_cxx::__normal_iterator<data::GachaGuaranteeParentTypeWeight *,std::vector<data::GachaGuaranteeParentTypeWeight>>::operator*((const __gnu_cxx::__normal_iterator<data::GachaGuaranteeParentTypeWeight*,std::vector<data::GachaGuaranteeParentTypeWeight> > *const)(v7 + 80));
          v204 = std::__shared_ptr_access<proto_log::PlayerLogBodyDoGacha,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyDoGacha,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 208));
          proto_gacha_parent_type_weight = proto_log::PlayerLogBodyDoGacha::add_gacha_item_parent_type_weight_list(v204);
          if ( *(_BYTE *)(((unsigned __int64)&gacha_item_parent_type_weight->gacha_item_parent_type >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&gacha_item_parent_type_weight->gacha_item_parent_type >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&gacha_item_parent_type_weight->gacha_item_parent_type);
          }
          proto_log::GachaItemParentTypeWeight::set_gacha_item_parent_type(
            proto_gacha_parent_type_weight,
            gacha_item_parent_type_weight->gacha_item_parent_type);
          if ( *(_BYTE *)(((unsigned __int64)&gacha_item_parent_type_weight->weight >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)gacha_item_parent_type_weight + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gacha_item_parent_type_weight->weight >> 3)
                                                                                         + 0x7FFF8000) )
          {
            __asan_report_load4(&gacha_item_parent_type_weight->weight);
          }
          proto_log::GachaItemParentTypeWeight::set_weight(
            proto_gacha_parent_type_weight,
            gacha_item_parent_type_weight->weight);
          __gnu_cxx::__normal_iterator<data::GachaGuaranteeParentTypeWeight *,std::vector<data::GachaGuaranteeParentTypeWeight>>::operator++((__gnu_cxx::__normal_iterator<data::GachaGuaranteeParentTypeWeight*,std::vector<data::GachaGuaranteeParentTypeWeight> > *const)(v7 + 80));
        }
        __for_range_8 = (std::vector<std::pair<data::GachaItemParentType,unsigned int>> *)(v7 + 776);
        *(std::vector<std::pair<data::GachaItemParentType,unsigned int>>::iterator *)(v7 + 80) = std::vector<std::pair<data::GachaItemParentType,unsigned int>>::begin((std::vector<std::pair<data::GachaItemParentType,unsigned int>> *const)(v7 + 776));
        *(std::vector<std::pair<data::GachaItemParentType,unsigned int>>::iterator *)(v7 + 112) = std::vector<std::pair<data::GachaItemParentType,unsigned int>>::end(__for_range_8);
        while ( __gnu_cxx::operator!=<std::pair<data::GachaItemParentType,unsigned int> *,std::vector<std::pair<data::GachaItemParentType,unsigned int>>>(
                  (const __gnu_cxx::__normal_iterator<std::pair<data::GachaItemParentType,unsigned int>*,std::vector<std::pair<data::GachaItemParentType,unsigned int>> > *)(v7 + 80),
                  (const __gnu_cxx::__normal_iterator<std::pair<data::GachaItemParentType,unsigned int>*,std::vector<std::pair<data::GachaItemParentType,unsigned int>> > *)(v7 + 112)) )
        {
          gacha_item_parent_type_times = __gnu_cxx::__normal_iterator<std::pair<data::GachaItemParentType,unsigned int> *,std::vector<std::pair<data::GachaItemParentType,unsigned int>>>::operator*((const __gnu_cxx::__normal_iterator<std::pair<data::GachaItemParentType,unsigned int>*,std::vector<std::pair<data::GachaItemParentType,unsigned int>> > *const)(v7 + 80));
          v205 = std::__shared_ptr_access<proto_log::PlayerLogBodyDoGacha,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyDoGacha,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 208));
          proto_gacha_parent_type_times = proto_log::PlayerLogBodyDoGacha::add_gacha_item_parent_type_times_list(v205);
          if ( *(_BYTE *)(((unsigned __int64)gacha_item_parent_type_times >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)gacha_item_parent_type_times & 7) + 3) >= *(_BYTE *)(((unsigned __int64)gacha_item_parent_type_times >> 3)
                                                                                           + 0x7FFF8000) )
          {
            __asan_report_load4(gacha_item_parent_type_times);
          }
          proto_log::GachaItemParentTypeTimes::set_gacha_item_parent_type(
            proto_gacha_parent_type_times,
            gacha_item_parent_type_times->first);
          if ( *(_BYTE *)(((unsigned __int64)&gacha_item_parent_type_times->second >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)gacha_item_parent_type_times + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gacha_item_parent_type_times->second >> 3)
                                                                                       + 0x7FFF8000) )
          {
            __asan_report_load4(&gacha_item_parent_type_times->second);
          }
          proto_log::GachaItemParentTypeTimes::set_last_gacha_times(
            proto_gacha_parent_type_times,
            gacha_item_parent_type_times->second);
          __gnu_cxx::__normal_iterator<std::pair<data::GachaItemParentType,unsigned int> *,std::vector<std::pair<data::GachaItemParentType,unsigned int>>>::operator++((__gnu_cxx::__normal_iterator<std::pair<data::GachaItemParentType,unsigned int>*,std::vector<std::pair<data::GachaItemParentType,unsigned int>> > *const)(v7 + 80));
        }
        v206 = std::__shared_ptr_access<proto_log::PlayerLogBodyDoGacha,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyDoGacha,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 208));
        proto_log::PlayerLogBodyDoGacha::set_is_gacha_up_triggered(v206, *(_BYTE *)(v7 + 32));
        v207 = std::__shared_ptr_access<proto_log::PlayerLogBodyDoGacha,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyDoGacha,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 208));
        proto_log::PlayerLogBodyDoGacha::set_gacha_up_prob(v207, *(_DWORD *)(v7 + 800));
        v208 = std::__shared_ptr_access<proto_log::PlayerLogBodyDoGacha,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyDoGacha,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 208));
        proto_log::PlayerLogBodyDoGacha::set_gacha_no_up_times(v208, *(_DWORD *)(v7 + 804));
        __for_range_9 = (std::vector<data::GachaGuaranteeTypeWeight> *)(v7 + 808);
        *(std::vector<data::GachaGuaranteeTypeWeight>::iterator *)(v7 + 80) = std::vector<data::GachaGuaranteeTypeWeight>::begin((std::vector<data::GachaGuaranteeTypeWeight> *const)(v7 + 808));
        *(std::vector<data::GachaGuaranteeTypeWeight>::iterator *)(v7 + 112) = std::vector<data::GachaGuaranteeTypeWeight>::end(__for_range_9);
        while ( __gnu_cxx::operator!=<data::GachaGuaranteeTypeWeight *,std::vector<data::GachaGuaranteeTypeWeight>>(
                  (const __gnu_cxx::__normal_iterator<data::GachaGuaranteeTypeWeight*,std::vector<data::GachaGuaranteeTypeWeight> > *)(v7 + 80),
                  (const __gnu_cxx::__normal_iterator<data::GachaGuaranteeTypeWeight*,std::vector<data::GachaGuaranteeTypeWeight> > *)(v7 + 112)) )
        {
          gacha_item_type_weight = __gnu_cxx::__normal_iterator<data::GachaGuaranteeTypeWeight *,std::vector<data::GachaGuaranteeTypeWeight>>::operator*((const __gnu_cxx::__normal_iterator<data::GachaGuaranteeTypeWeight*,std::vector<data::GachaGuaranteeTypeWeight> > *const)(v7 + 80));
          v209 = std::__shared_ptr_access<proto_log::PlayerLogBodyDoGacha,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyDoGacha,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 208));
          proto_gacha_item_type_weight = proto_log::PlayerLogBodyDoGacha::add_gacha_item_type_weight_list(v209);
          if ( *(_BYTE *)(((unsigned __int64)&gacha_item_type_weight->gacha_item_type >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&gacha_item_type_weight->gacha_item_type >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&gacha_item_type_weight->gacha_item_type);
          }
          proto_log::GachaItemTypeWeight::set_gacha_item_type(
            proto_gacha_item_type_weight,
            gacha_item_type_weight->gacha_item_type);
          if ( *(_BYTE *)(((unsigned __int64)&gacha_item_type_weight->weight >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)gacha_item_type_weight + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gacha_item_type_weight->weight >> 3)
                                                                                  + 0x7FFF8000) )
          {
            __asan_report_load4(&gacha_item_type_weight->weight);
          }
          proto_log::GachaItemTypeWeight::set_weight(proto_gacha_item_type_weight, gacha_item_type_weight->weight);
          __gnu_cxx::__normal_iterator<data::GachaGuaranteeTypeWeight *,std::vector<data::GachaGuaranteeTypeWeight>>::operator++((__gnu_cxx::__normal_iterator<data::GachaGuaranteeTypeWeight*,std::vector<data::GachaGuaranteeTypeWeight> > *const)(v7 + 80));
        }
        __for_range_10 = (std::vector<std::pair<data::GachaItemType,unsigned int>> *)(v7 + 832);
        *(std::vector<std::pair<data::GachaItemType,unsigned int>>::iterator *)(v7 + 80) = std::vector<std::pair<data::GachaItemType,unsigned int>>::begin((std::vector<std::pair<data::GachaItemType,unsigned int>> *const)(v7 + 832));
        *(std::vector<std::pair<data::GachaItemType,unsigned int>>::iterator *)(v7 + 112) = std::vector<std::pair<data::GachaItemType,unsigned int>>::end(__for_range_10);
        while ( __gnu_cxx::operator!=<std::pair<data::GachaItemType,unsigned int> *,std::vector<std::pair<data::GachaItemType,unsigned int>>>(
                  (const __gnu_cxx::__normal_iterator<std::pair<data::GachaItemType,unsigned int>*,std::vector<std::pair<data::GachaItemType,unsigned int>> > *)(v7 + 80),
                  (const __gnu_cxx::__normal_iterator<std::pair<data::GachaItemType,unsigned int>*,std::vector<std::pair<data::GachaItemType,unsigned int>> > *)(v7 + 112)) )
        {
          gacha_item_type_times = __gnu_cxx::__normal_iterator<std::pair<data::GachaItemType,unsigned int> *,std::vector<std::pair<data::GachaItemType,unsigned int>>>::operator*((const __gnu_cxx::__normal_iterator<std::pair<data::GachaItemType,unsigned int>*,std::vector<std::pair<data::GachaItemType,unsigned int>> > *const)(v7 + 80));
          v210 = std::__shared_ptr_access<proto_log::PlayerLogBodyDoGacha,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyDoGacha,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 208));
          proto_gacha_type_times = proto_log::PlayerLogBodyDoGacha::add_gacha_item_type_times_list(v210);
          if ( *(_BYTE *)(((unsigned __int64)gacha_item_type_times >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)gacha_item_type_times & 7) + 3) >= *(_BYTE *)(((unsigned __int64)gacha_item_type_times >> 3)
                                                                                    + 0x7FFF8000) )
          {
            __asan_report_load4(gacha_item_type_times);
          }
          proto_log::GachaItemTypeTimes::set_gacha_item_type(proto_gacha_type_times, gacha_item_type_times->first);
          if ( *(_BYTE *)(((unsigned __int64)&gacha_item_type_times->second >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)gacha_item_type_times + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gacha_item_type_times->second >> 3)
                                                                                + 0x7FFF8000) )
          {
            __asan_report_load4(&gacha_item_type_times->second);
          }
          proto_log::GachaItemTypeTimes::set_last_gacha_times(proto_gacha_type_times, gacha_item_type_times->second);
          __gnu_cxx::__normal_iterator<std::pair<data::GachaItemType,unsigned int> *,std::vector<std::pair<data::GachaItemType,unsigned int>>>::operator++((__gnu_cxx::__normal_iterator<std::pair<data::GachaItemType,unsigned int>*,std::vector<std::pair<data::GachaItemType,unsigned int>> > *const)(v7 + 80));
        }
        v211 = std::__shared_ptr_access<proto_log::PlayerLogBodyDoGacha,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyDoGacha,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 208));
        proto_log::PlayerLogBodyDoGacha::set_is_wish_triggered(v211, *(_BYTE *)(v7 + 48));
        v212 = std::__shared_ptr_access<proto_log::PlayerLogBodyDoGacha,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyDoGacha,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 208));
        if ( *(_BYTE *)(((unsigned __int64)&real_gacha_record->wish_item_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&real_gacha_record->wish_item_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&real_gacha_record->wish_item_id);
        }
        proto_log::PlayerLogBodyDoGacha::set_wish_item_id(v212, real_gacha_record->wish_item_id);
        v213 = std::__shared_ptr_access<proto_log::PlayerLogBodyDoGacha,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyDoGacha,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 208));
        if ( *(_BYTE *)(((unsigned __int64)&real_gacha_record->wish_progress >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)real_gacha_record - 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&real_gacha_record->wish_progress >> 3)
                                                                           + 0x7FFF8000) )
        {
          __asan_report_load4(&real_gacha_record->wish_progress);
        }
        proto_log::PlayerLogBodyDoGacha::set_wish_progress(v213, real_gacha_record->wish_progress);
        if ( *(_BYTE *)(((unsigned __int64)&schedule_config->gacha_type >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)schedule_config + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&schedule_config->gacha_type >> 3)
                                                                        + 0x7FFF8000) )
        {
          __asan_report_load4(&schedule_config->gacha_type);
        }
        if ( schedule_config->gacha_type == GACHA_TYPE_SPECIAL_ACTIVITY_AVATAR )
        {
          v214 = std::__shared_ptr_access<proto_log::PlayerLogBodyDoGacha,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyDoGacha,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 208));
          if ( *(_BYTE *)(((unsigned __int64)&gacha_record->total_gacha_times >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&gacha_record->total_gacha_times >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&gacha_record->total_gacha_times);
          }
          proto_log::PlayerLogBodyDoGacha::set_special_total_gacha_times(v214, gacha_record->total_gacha_times);
          v215 = std::__shared_ptr_access<proto_log::PlayerLogBodyDoGacha,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyDoGacha,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 208));
          if ( *(_BYTE *)(((unsigned __int64)&gacha_record->cur_schedule_total_gacha_times >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)gacha_record + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gacha_record->cur_schedule_total_gacha_times >> 3)
                                                                        + 0x7FFF8000) )
          {
            __asan_report_load4(&gacha_record->cur_schedule_total_gacha_times);
          }
          proto_log::PlayerLogBodyDoGacha::set_cur_schedule_special_total_gacha_times(
            v215,
            gacha_record->cur_schedule_total_gacha_times);
        }
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        player = this->player_;
        std::shared_ptr<google::protobuf::Message>::shared_ptr(
          (std::shared_ptr<google::protobuf::Message> *const)(v7 + 272),
          0LL);
        std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyDoGacha,void>(
          (std::shared_ptr<google::protobuf::Message> *const)(v7 + 240),
          (const std::shared_ptr<proto_log::PlayerLogBodyDoGacha> *)(v7 + 208));
        Player::printStatLog(player, (MessagePtr *)(v7 + 240), (MessagePtr *)(v7 + 272), 0xEu);
        std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)(v7 + 240));
        std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)(v7 + 272));
      }
      if ( (unsigned __int8)std::string::empty(gacha_tag) != 1 )
      {
        is_first = 1;
        common::tools::StringStream<common::tools::FixedBuffer<4096>>::StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v7 + 240));
        __for_range_11 = &real_gacha_record->gacha_guarantee_map;
        *(std::map<unsigned int,GachaGuaranteeData>::iterator *)(v7 + 80) = std::map<unsigned int,GachaGuaranteeData>::begin(&real_gacha_record->gacha_guarantee_map);
        *(std::map<unsigned int,GachaGuaranteeData>::iterator *)(v7 + 112) = std::map<unsigned int,GachaGuaranteeData>::end(__for_range_11);
        while ( std::operator!=(
                  (const std::_Rb_tree_iterator<std::pair<unsigned int const,GachaGuaranteeData> >::_Self *)(v7 + 80),
                  (const std::_Rb_tree_iterator<std::pair<unsigned int const,GachaGuaranteeData> >::_Self *)(v7 + 112)) )
        {
          v303 = std::_Rb_tree_iterator<std::pair<unsigned int const,GachaGuaranteeData>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,GachaGuaranteeData> > *const)(v7 + 80));
          rule_id_0 = std::get<0ul,unsigned int const,GachaGuaranteeData>(v303);
          gacha_guarantee_data_2 = (std::tuple_element<1,const std::pair<unsigned int const,GachaGuaranteeData> >::type *)std::get<1ul,unsigned int const,GachaGuaranteeData>(v303);
          p_last_gacha_guarantee_times = &gacha_guarantee_data_2->last_gacha_guarantee_times;
          if ( *(_BYTE *)(((unsigned __int64)p_last_gacha_guarantee_times >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)p_last_gacha_guarantee_times & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_last_gacha_guarantee_times >> 3)
                                                                                           + 0x7FFF8000) )
          {
            __asan_report_load4(p_last_gacha_guarantee_times);
          }
          v218 = gacha_guarantee_data_2->last_gacha_guarantee_times;
          if ( *(_BYTE *)(((unsigned __int64)&real_gacha_record->total_gacha_times >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&real_gacha_record->total_gacha_times >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&real_gacha_record->total_gacha_times);
          }
          if ( v218 == real_gacha_record->total_gacha_times )
          {
            if ( is_first )
            {
              if ( *(_BYTE *)(((unsigned __int64)rule_id_0 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)rule_id_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)rule_id_0 >> 3)
                                                                            + 0x7FFF8000) )
              {
                __asan_report_load4(rule_id_0);
              }
              common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
                (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v7 + 240),
                *rule_id_0);
              is_first = 0;
            }
            else
            {
              v219 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
                       (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v7 + 240),
                       ",");
              if ( *(_BYTE *)(((unsigned __int64)rule_id_0 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)rule_id_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)rule_id_0 >> 3)
                                                                            + 0x7FFF8000) )
              {
                __asan_report_load4(rule_id_0);
              }
              common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v219, *rule_id_0);
            }
          }
          std::_Rb_tree_iterator<std::pair<unsigned int const,GachaGuaranteeData>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,GachaGuaranteeData> > *const)(v7 + 80));
        }
        *(_DWORD *)(v7 + 272) = 0;
        *(_DWORD *)(v7 + 276) = 0;
        *(_DWORD *)(v7 + 280) = 0;
        *(_DWORD *)(v7 + 284) = 0;
        if ( std::vector<ItemParam>::size((const std::vector<ItemParam> *const)(v7 + 560)) == 1 )
        {
          v220 = std::vector<ItemParam>::operator[]((std::vector<ItemParam> *const)(v7 + 560), 0LL);
          v221 = &v220->item_id;
          if ( ((unsigned __int8)v220 & 7) >= *(_BYTE *)(((unsigned __int64)v220 >> 3) + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)v220 >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)((((unsigned __int64)&v220->promote_level + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)v220 + 15) & 7) >= *(_BYTE *)((((unsigned __int64)&v220->promote_level + 3) >> 3)
                                                              + 0x7FFF8000) )
          {
            __asan_report_load_n(v220, 16LL);
          }
          v222 = *v221;
          v223 = v221[1];
          *(_QWORD *)(v7 + 272) = v222;
          *(_QWORD *)(v7 + 280) = v223;
        }
        common::milog::MiLogStream::create(
          &v317,
          &common::milog::MiLogDefault::default_log_obj_,
          2u,
          "./src/player/gacha/player_gacha_comp.cpp",
          "doGacha",
          1309);
        v245 = *(_DWORD *)(v7 + 276);
        v240 = *(_DWORD *)(v7 + 272);
        v239 = data::GachaScheduleConfig::isGachaItemUp(schedule_config, *(_DWORD *)(v7 + 176));
        v238 = *(_DWORD *)(v7 + 180);
        v237 = *(_DWORD *)(v7 + 176);
        common::tools::StringStream<common::tools::FixedBuffer<4096>>::str[abi:cxx11](
          (std::string *)&v318,
          (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v7 + 240));
        v236 = (const char *)std::string::c_str(&v318);
        v235 = *(_DWORD *)(v7 + 64);
        if ( *(_BYTE *)(((unsigned __int64)schedule_config >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)schedule_config >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(schedule_config);
        }
        schedule_id = schedule_config->schedule_id;
        if ( *(_BYTE *)(((unsigned __int64)&schedule_config->gacha_type >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)schedule_config + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&schedule_config->gacha_type >> 3)
                                                                        + 0x7FFF8000) )
        {
          __asan_report_load4(&schedule_config->gacha_type);
        }
        gacha_type = schedule_config->gacha_type;
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        Uid = Player::getUid(this->player_);
        v226 = (const char *)std::string::c_str(gacha_tag);
        common::milog::MiLogStream::operator()(
          &v317,
          "SIMULATE_GACHA|%s|%u|%u|%u|%u|%s|%u|%u|%d|%u|%u",
          v226,
          Uid,
          (unsigned int)gacha_type,
          schedule_id,
          v235,
          v236,
          v237,
          v238,
          v239,
          v240,
          v245);
        std::string::~string(&v318);
        common::milog::MiLogStream::~MiLogStream(&v317);
        common::tools::StringStream<common::tools::FixedBuffer<4096>>::~StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v7 + 240));
      }
      std::shared_ptr<proto_log::PlayerLogBodyDoGacha>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyDoGacha> *const)(v7 + 208));
      std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v7 + 560));
      std::vector<TransferItemParam>::~vector((std::vector<TransferItemParam> *const)(v7 + 496));
      data::GachaPoolExcelConfig::~GachaPoolExcelConfig((data::GachaPoolExcelConfig *const)(v7 + 688));
      GachaStatLogContext::~GachaStatLogContext((GachaStatLogContext *const)(v7 + 752));
      AddItemContextHolder::~AddItemContextHolder((AddItemContextHolder *const)(v7 + 144));
    }
    if ( gacha_times == 10 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&real_gacha_record->total_ten_gacha_times >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&real_gacha_record->total_ten_gacha_times >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&real_gacha_record->total_ten_gacha_times);
      }
      ++real_gacha_record->total_ten_gacha_times;
      if ( *(_BYTE *)(((unsigned __int64)&schedule_config->gacha_type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)schedule_config + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&schedule_config->gacha_type >> 3)
                                                                      + 0x7FFF8000) )
      {
        __asan_report_load4(&schedule_config->gacha_type);
      }
      if ( schedule_config->gacha_type == GACHA_TYPE_SPECIAL_ACTIVITY_AVATAR )
      {
        if ( *(_BYTE *)(((unsigned __int64)&gacha_record->total_ten_gacha_times >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&gacha_record->total_ten_gacha_times >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&gacha_record->total_ten_gacha_times);
        }
        ++gacha_record->total_ten_gacha_times;
      }
    }
    if ( *(_BYTE *)(((unsigned __int64)&schedule_config->gacha_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)schedule_config + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&schedule_config->gacha_type >> 3)
                                                                    + 0x7FFF8000) )
    {
      __asan_report_load4(&schedule_config->gacha_type);
    }
    if ( schedule_config->gacha_type != GACHA_TYPE_NEWBIE )
    {
      cur_time = common::tools::TimeUtils::getNow();
      if ( *(_BYTE *)(((unsigned __int64)&this->daily_gacha_times_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->daily_gacha_times_ >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_load4(&this->daily_gacha_times_);
      }
      this->daily_gacha_times_ += gacha_times;
      if ( *(_BYTE *)(((unsigned __int64)&this->last_gacha_time_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->last_gacha_time_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->last_gacha_time_, (((_BYTE)this + 84) & 7u) + 3, &this->last_gacha_time_);
      }
      this->last_gacha_time_ = cur_time;
      v227 = (*(_BYTE *)(((unsigned __int64)&gacha_record->cur_schedule_daily_last_gacha_time >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)gacha_record - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gacha_record->cur_schedule_daily_last_gacha_time >> 3) + 0x7FFF8000));
      if ( (_BYTE)v227 )
        __asan_report_store4(
          &gacha_record->cur_schedule_daily_last_gacha_time,
          (((_BYTE)gacha_record - 28) & 7u) + 3,
          v227);
      gacha_record->cur_schedule_daily_last_gacha_time = cur_time;
      if ( *(_BYTE *)(((unsigned __int64)&gacha_record->cur_schedule_daily_gacha_times >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&gacha_record->cur_schedule_daily_gacha_times >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&gacha_record->cur_schedule_daily_gacha_times);
      }
      gacha_record->cur_schedule_daily_gacha_times += gacha_times;
      proto::DoGachaRsp::set_cur_schedule_daily_gacha_times(rsp_0, gacha_record->cur_schedule_daily_gacha_times);
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->daily_gacha_times_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->daily_gacha_times_ >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_load4(&this->daily_gacha_times_);
    }
    proto::DoGachaRsp::set_daily_gacha_times(rsp_0, this->daily_gacha_times_);
    *(_QWORD *)(v7 + 208) = GachaRecord::getGachaCostItem(gacha_record, 1u, (unsigned __int64)schedule_config);
    *(_QWORD *)(v7 + 216) = v228;
    proto::DoGachaRsp::set_cost_item_id(rsp_0, *(_DWORD *)(v7 + 208));
    proto::DoGachaRsp::set_cost_item_num(rsp_0, *(_DWORD *)(v7 + 212));
    *(_QWORD *)(v7 + 240) = GachaRecord::getGachaCostItem(gacha_record, 0xAu, (unsigned __int64)schedule_config);
    *(_QWORD *)(v7 + 248) = v229;
    proto::DoGachaRsp::set_ten_cost_item_id(rsp_0, *(_DWORD *)(v7 + 240));
    proto::DoGachaRsp::set_ten_cost_item_num(rsp_0, *(_DWORD *)(v7 + 244));
    LeftGachaTimes = GachaRecord::getLeftGachaTimes(gacha_record);
    proto::DoGachaRsp::set_left_gacha_times(rsp_0, LeftGachaTimes);
    GachaTimesLimit = GachaRecord::getGachaTimesLimit(gacha_record);
    proto::DoGachaRsp::set_gacha_times_limit(rsp_0, GachaTimesLimit);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v7 + 272));
    v232 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 272))->design_config.txt_config_mgr.gacha_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&schedule_config->gacha_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)schedule_config + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&schedule_config->gacha_type >> 3)
                                                                    + 0x7FFF8000) )
    {
      __asan_report_load4(&schedule_config->gacha_type);
    }
    wish_config_ptr = data::GachaExcelConfigMgrBase::findGachaWishConfig(v232, schedule_config->gacha_type);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v7 + 272));
    if ( wish_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&real_gacha_record->wish_item_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&real_gacha_record->wish_item_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&real_gacha_record->wish_item_id);
      }
      proto::DoGachaRsp::set_wish_item_id(rsp_0, real_gacha_record->wish_item_id);
      if ( *(_BYTE *)(((unsigned __int64)&real_gacha_record->wish_progress >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)real_gacha_record - 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&real_gacha_record->wish_progress >> 3)
                                                                         + 0x7FFF8000) )
      {
        __asan_report_load4(&real_gacha_record->wish_progress);
      }
      proto::DoGachaRsp::set_wish_progress(rsp_0, real_gacha_record->wish_progress);
      if ( *(_BYTE *)(((unsigned __int64)&wish_config_ptr->wish_max_progress >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&wish_config_ptr->wish_max_progress >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&wish_config_ptr->wish_max_progress);
      }
      proto::DoGachaRsp::set_wish_max_progress(rsp_0, wish_config_ptr->wish_max_progress);
    }
    v11 = 0;
    std::vector<data::GachaRuleExcelConfig>::~vector((std::vector<data::GachaRuleExcelConfig> *const)(v7 + 368));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v318,
      &common::milog::MiLogDefault::default_log_obj_,
      6u,
      "./src/player/gacha/player_gacha_comp.cpp",
      "doGacha",
      894);
    v10 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
            &v318,
            (const char (*)[43])"real_gacha_record_ptr is null, gacha_type:");
    common::milog::MiLogStream::operator<<<data::GachaType,(data::GachaType*)0>(v10, &schedule_config->gacha_type);
    common::milog::MiLogStream::~MiLogStream(&v318);
    v11 = -1;
  }
  if ( v319 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8058) = 0LL;
    memset(
      (void *)((unsigned __int64)(v9 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v9 + 2147450880 - (((_DWORD)v9 + 2147450888) & 0xFFFFFFF8) + 96) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v7 >> 3) + 0x7FFF8068) = 0LL;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8058) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8060) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8068) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v11;
};

// Line 912: range 00000000141E0666-00000000141E0705
bool __cdecl PlayerGachaComp::doGacha::_lambda_const_auto_30___const_auto_31___::operator()_data::GachaRuleExcelConfig_data::GachaRuleExcelConfig_(
        const PlayerGachaComp::doGacha::<lambda(const auto:30&, const auto:31&)> *const __closure,
        const data::GachaRuleExcelConfig *a,
        const data::GachaRuleExcelConfig *b)
{
  uint32_t priority; // ecx

  if ( *(_BYTE *)(((unsigned __int64)&a->priority >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a->priority >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a->priority);
  }
  priority = a->priority;
  if ( *(_BYTE *)(((unsigned __int64)&b->priority >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)b + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&b->priority >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&b->priority);
  }
  return priority < b->priority;
};

// Line 1130: range 00000000141DDC20-00000000141DDCAE
bool __cdecl PlayerGachaComp::doGacha::_lambda_const_auto_32___::operator()_data::GachaGuaranteeParentTypeWeight_(
        const PlayerGachaComp::doGacha::<lambda(const auto:32&)> *const __closure,
        const data::GachaGuaranteeParentTypeWeight *o)
{
  data::GachaItemParentType gacha_item_parent_type; // ecx

  if ( *(_BYTE *)(((unsigned __int64)&o->gacha_item_parent_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&o->gacha_item_parent_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&o->gacha_item_parent_type);
  }
  gacha_item_parent_type = o->gacha_item_parent_type;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)__closure & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(__closure);
  }
  return gacha_item_parent_type == __closure->__item_parent_type;
};

// Line 1146: range 00000000141DDD88-00000000141DDE16
bool __cdecl PlayerGachaComp::doGacha::_lambda_const_auto_33___::operator()_data::GachaGuaranteeParentTypeWeightWithChilds_(
        const PlayerGachaComp::doGacha::<lambda(const auto:33&)> *const __closure,
        const data::GachaGuaranteeParentTypeWeightWithChilds *o)
{
  data::GachaItemParentType gacha_item_parent_type; // ecx

  if ( *(_BYTE *)(((unsigned __int64)&o->gacha_item_parent_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&o->gacha_item_parent_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&o->gacha_item_parent_type);
  }
  gacha_item_parent_type = o->gacha_item_parent_type;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)__closure & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(__closure);
  }
  return gacha_item_parent_type == __closure->__item_parent_type;
};

// Line 1153: range 00000000141DDEF0-00000000141DDF81
bool __cdecl PlayerGachaComp::doGacha::_lambda_const_auto_34___::operator()_unsigned_int_(
        const PlayerGachaComp::doGacha::<lambda(const auto:34&)> *const __closure,
        const unsigned int *o)
{
  unsigned int v2; // ecx

  if ( *(_BYTE *)(((unsigned __int64)o >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)o & 7) + 3) >= *(_BYTE *)(((unsigned __int64)o >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(o);
  }
  v2 = *o;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)__closure & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(__closure);
  }
  return v2 == __closure->__item_type;
};

// Line 1183: range 00000000141DE05A-00000000141DE0EB
bool __cdecl PlayerGachaComp::doGacha::_lambda_const_auto_35___::operator()_unsigned_int_(
        const PlayerGachaComp::doGacha::<lambda(const auto:35&)> *const __closure,
        const unsigned int *o)
{
  unsigned int v2; // ecx

  if ( *(_BYTE *)(((unsigned __int64)o >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)o & 7) + 3) >= *(_BYTE *)(((unsigned __int64)o >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(o);
  }
  v2 = *o;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)__closure & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(__closure);
  }
  return v2 == __closure->__item_type;
};

// Line 1362: range 00000000141C6D3A-00000000141C6D81
GachaRecord *__cdecl PlayerGachaComp::getGachaRecord(
        PlayerGachaComp *const this,
        const data::GachaScheduleConfig *schedule_config)
{
  PlayerGachaComp::refreshGachaRecord(this, schedule_config);
  return std::map<data::GachaType,GachaRecord>::operator[](&this->gacha_record_map_, &schedule_config->gacha_type);
};

// Line 1372: range 00000000141C6D82-00000000141C707B
GachaRecord *__cdecl PlayerGachaComp::findAvatarGachaRecordBySpecial(PlayerGachaComp *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // rbx
  uint32_t *p_cur_schedule_id; // rax
  GachaRecord *v5; // r14
  GachaRecord *result; // rax
  std::map<data::GachaType,GachaRecord>::key_type __k; // [rsp+1Ch] [rbp-244h] BYREF
  GachaRecord *gacha_record; // [rsp+20h] [rbp-240h]
  GachaRecord *gacha_record_0; // [rsp+28h] [rbp-238h]
  common::milog::MiLogStream v10; // [rsp+30h] [rbp-230h] BYREF
  char v11[528]; // [rsp+50h] [rbp-210h] BYREF

  v1 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_3(480LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 48 360 27 avatar_schedule_config:1373";
  *(_QWORD *)(v1 + 16) = PlayerGachaComp::findAvatarGachaRecordBySpecial;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862732] = -218103808;
  v3[536862733] = -202116109;
  v3[536862734] = -202116109;
  PlayerGachaComp::findOpenScheduleConfig((data::GachaScheduleConfig *)(v1 + 48), this, GACHA_TYPE_ACTIVITY_AVATAR);
  if ( *(_DWORD *)(v1 + 48) )
  {
    gacha_record = PlayerGachaComp::getGachaRecord(this, (const data::GachaScheduleConfig *)(v1 + 48));
    v5 = gacha_record;
  }
  else
  {
    __k = GACHA_TYPE_ACTIVITY_AVATAR;
    gacha_record_0 = std::map<data::GachaType,GachaRecord>::operator[](&this->gacha_record_map_, &__k);
    p_cur_schedule_id = &gacha_record_0->cur_schedule_id;
    if ( *(_BYTE *)(((unsigned __int64)p_cur_schedule_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_cur_schedule_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_cur_schedule_id >> 3)
                                                                          + 0x7FFF8000) )
    {
      __asan_report_load4(p_cur_schedule_id);
    }
    if ( !gacha_record_0->cur_schedule_id )
    {
      common::milog::MiLogStream::create(
        &v10,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/gacha/player_gacha_comp.cpp",
        "findAvatarGachaRecordBySpecial",
        1381);
      common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
        &v10,
        (const char (*)[51])"GACHA_TYPE_ACTIVITY_AVATAR cur_schedule_id is 0!!!");
      common::milog::MiLogStream::~MiLogStream(&v10);
      if ( *(_BYTE *)(((unsigned __int64)gacha_record_0 >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)gacha_record_0 >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(gacha_record_0, "GACHA_TYPE_ACTIVITY_AVATAR cur_schedule_id is 0!!!", gacha_record_0);
      }
      gacha_record_0->gacha_type = GACHA_TYPE_ACTIVITY_AVATAR;
    }
    v5 = gacha_record_0;
  }
  data::GachaScheduleConfig::~GachaScheduleConfig((data::GachaScheduleConfig *const)(v1 + 48));
  result = v5;
  if ( v11 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8038) = 0;
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
    *(_QWORD *)((v1 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8038) = -168430091;
  }
  return result;
};

// Line 1394: range 00000000141C707C-00000000141C7549
data::GachaScheduleConfig *__fastcall PlayerGachaComp::findOpenScheduleConfig(
        data::GachaScheduleConfig *retstr,
        PlayerGachaComp *const this,
        data::GachaType gacha_type)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // rbx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // r14
  PlayerGachaComp::findOpenScheduleConfig::<lambda(const auto:36&)> v8; // r15d
  data::GachaScheduleConfig *M_current; // r14
  std::vector<data::GachaScheduleConfig>::iterator v10; // rax
  common::milog::MiLogStream *v11; // rax
  const data::GachaScheduleConfig *v12; // rax
  unsigned int val; // [rsp+20h] [rbp-2B0h] BYREF
  uint32_t cur_time; // [rsp+24h] [rbp-2ACh]
  __gnu_cxx::__normal_iterator<data::GachaScheduleConfig*,std::vector<data::GachaScheduleConfig> > __rhs; // [rsp+28h] [rbp-2A8h] BYREF
  std::shared_ptr<Config> v18; // [rsp+30h] [rbp-2A0h] BYREF
  common::milog::MiLogStream v19; // [rsp+40h] [rbp-290h] BYREF
  char v20[624]; // [rsp+60h] [rbp-270h] BYREF

  v3 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(576LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 4 15 gacha_type:1393 48 8 18 schedule_iter:1406 80 24 30 active_gacha_schedule_vec:1400 144"
                        " 360 20 schedule_config:1395";
  *(_QWORD *)(v3 + 16) = PlayerGachaComp::findOpenScheduleConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61956;
  v5[536862721] = -234881024;
  v5[536862722] = 62194;
  v5[536862723] = -218959360;
  v5[536862724] = 62194;
  v5[536862735] = -218103808;
  v5[536862736] = -202116109;
  v5[536862737] = -202116109;
  *(_DWORD *)(v3 + 32) = gacha_type;
  data::GachaScheduleConfig::GachaScheduleConfig((data::GachaScheduleConfig *const)(v3 + 144));
  *(_DWORD *)(v3 + 144) = 0;
  cur_time = common::tools::TimeUtils::getNow();
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v18);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v18);
  data::DbGachaConfigMgr::findActivieGachaSchedules(
    (std::vector<data::GachaScheduleConfig> *)(v3 + 80),
    &v6->design_config.db_config_mgr.db_local_config_mgr.gacha_config_mgr,
    cur_time);
  std::shared_ptr<Config>::~shared_ptr(&v18);
  if ( std::vector<data::GachaScheduleConfig>::empty((const std::vector<data::GachaScheduleConfig> *const)(v3 + 80)) )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/gacha/player_gacha_comp.cpp",
      "findOpenScheduleConfig",
      1403);
    v7 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
           &v19,
           (const char (*)[31])"No active gacha schedule, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v19);
    data::GachaScheduleConfig::GachaScheduleConfig(retstr, (data::GachaScheduleConfig *)(v3 + 144));
  }
  else
  {
    v8.__gacha_type = *(_DWORD *)(v3 + 32);
    M_current = std::vector<data::GachaScheduleConfig>::end((std::vector<data::GachaScheduleConfig> *const)(v3 + 80))._M_current;
    v10._M_current = std::vector<data::GachaScheduleConfig>::begin((std::vector<data::GachaScheduleConfig> *const)(v3 + 80))._M_current;
    *(__gnu_cxx::__normal_iterator<data::GachaScheduleConfig*,std::vector<data::GachaScheduleConfig> > *)(v3 + 48) = std::find_if<__gnu_cxx::__normal_iterator<data::GachaScheduleConfig *,std::vector<data::GachaScheduleConfig>>,PlayerGachaComp::findOpenScheduleConfig(data::GachaType)::{lambda(__gnu_cxx::__normal_iterator<data::GachaScheduleConfig *,std::vector<data::GachaScheduleConfig>> const&)#1}>(v10, (__gnu_cxx::__normal_iterator<data::GachaScheduleConfig*,std::vector<data::GachaScheduleConfig> >)M_current, v8);
    __rhs._M_current = std::vector<data::GachaScheduleConfig>::end((std::vector<data::GachaScheduleConfig> *const)(v3 + 80))._M_current;
    if ( __gnu_cxx::operator==<data::GachaScheduleConfig *,std::vector<data::GachaScheduleConfig>>(
           (const __gnu_cxx::__normal_iterator<data::GachaScheduleConfig*,std::vector<data::GachaScheduleConfig> > *)(v3 + 48),
           &__rhs) )
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/gacha/player_gacha_comp.cpp",
        "findOpenScheduleConfig",
        1412);
      v11 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
              &v19,
              (const char (*)[39])"no matched gacha schedule, gacha_type:");
      common::milog::MiLogStream::operator<<<data::GachaType,(data::GachaType*)0>(
        v11,
        (const data::GachaType *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v19);
      data::GachaScheduleConfig::GachaScheduleConfig(retstr, (data::GachaScheduleConfig *)(v3 + 144));
    }
    else
    {
      v12 = __gnu_cxx::__normal_iterator<data::GachaScheduleConfig *,std::vector<data::GachaScheduleConfig>>::operator*((const __gnu_cxx::__normal_iterator<data::GachaScheduleConfig*,std::vector<data::GachaScheduleConfig> > *const)(v3 + 48));
      data::GachaScheduleConfig::GachaScheduleConfig(retstr, v12);
    }
  }
  std::vector<data::GachaScheduleConfig>::~vector((std::vector<data::GachaScheduleConfig> *const)(v3 + 80));
  data::GachaScheduleConfig::~GachaScheduleConfig((data::GachaScheduleConfig *const)(v3 + 144));
  if ( v20 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF803C) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8044) = 0;
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
  }
  return retstr;
};

// Line 1406: range 00000000141DE1C4-00000000141DE25A
bool __cdecl PlayerGachaComp::findOpenScheduleConfig::_lambda_const_auto_36___::operator()_data::GachaScheduleConfig_(
        const PlayerGachaComp::findOpenScheduleConfig::<lambda(const auto:36&)> *const __closure,
        const data::GachaScheduleConfig *elem)
{
  data::GachaType gacha_type; // ecx

  if ( *(_BYTE *)(((unsigned __int64)&elem->gacha_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)elem + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&elem->gacha_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&elem->gacha_type);
  }
  gacha_type = elem->gacha_type;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)__closure & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(__closure);
  }
  return gacha_type == __closure->__gacha_type;
};

// Line 1419: range 00000000141C754A-00000000141C99F8
void __cdecl PlayerGachaComp::refreshGachaRecord(
        PlayerGachaComp *const this,
        const data::GachaScheduleConfig *schedule_config)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::GachaType *p_gacha_type; // rax
  __int64 v6; // rsi
  data::GachaType gacha_type; // ecx
  char v8; // al
  std::_Rb_tree_iterator<std::pair<unsigned int const,GachaGuaranteeData> >::pointer v9; // rax
  _DWORD *p_first; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rdx
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // r14
  common::milog::MiLogStream *v19; // r14
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rdx
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // r14
  __int64 v26; // rsi
  uint32_t cur_schedule_id; // ecx
  uint32_t total_gacha_times; // r14d
  std::_Rb_tree_iterator<std::pair<unsigned int const,GachaGuaranteeData> >::pointer v29; // rdx
  char v30; // cl
  std::_Rb_tree_iterator<std::pair<unsigned int const,GachaGuaranteeData> >::pointer v31; // rdx
  char v32; // cl
  common::milog::MiLogStream *v33; // r14
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rdx
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // r14
  std::_Rb_tree_const_iterator<unsigned int>::reference v42; // rax
  _DWORD *v43; // rdx
  GachaGuaranteeData *v44; // rax
  uint32_t v45; // ecx
  char v46; // dl
  char *v47; // rsi
  __int64 v48; // rdx
  uint32_t v49; // ecx
  char v50; // dl
  __int64 v51; // rdx
  __int64 v52; // rsi
  __int64 v53; // rdx
  common::milog::MiLogStream *v54; // r14
  common::milog::MiLogStream *v55; // rax
  common::milog::MiLogStream *v56; // rdx
  common::milog::MiLogStream *v57; // rax
  common::milog::MiLogStream *v58; // rax
  common::milog::MiLogStream *v59; // rax
  common::milog::MiLogStream *v60; // rax
  common::milog::MiLogStream *v61; // rax
  common::milog::MiLogStream *v62; // r14
  GachaExcelConfigMgr *p_gacha_config_mgr; // rcx
  common::milog::MiLogStream *v64; // rax
  std::map<unsigned int,GachaItemParentTypeData> *p_gacha_item_parent_type_data_map; // rcx
  std::map<unsigned int,GachaItemParentTypeData> *v66; // rcx
  char *v67; // rsi
  uint32_t v68; // ecx
  char v69; // dl
  __int64 v70; // rdx
  common::milog::MiLogStream *v71; // r14
  common::milog::MiLogStream *v72; // rax
  common::milog::MiLogStream *v73; // rdx
  common::milog::MiLogStream *v74; // rax
  common::milog::MiLogStream *v75; // rax
  common::milog::MiLogStream *v76; // rax
  common::milog::MiLogStream *v77; // r14
  std::map<unsigned int,GachaUpData> *p_gacha_up_data_map; // rcx
  std::map<unsigned int,GachaUpData> *v79; // rcx
  GachaUpData *v80; // rax
  __int64 v81; // rdx
  common::milog::MiLogStream *v82; // r14
  common::milog::MiLogStream *v83; // rax
  common::milog::MiLogStream *v84; // rdx
  common::milog::MiLogStream *v85; // rax
  common::milog::MiLogStream *v86; // rax
  common::milog::MiLogStream *v87; // rax
  common::milog::MiLogStream *v88; // r14
  GachaExcelConfigMgr *v89; // rcx
  common::milog::MiLogStream *v90; // rax
  std::map<unsigned int,GachaItemTypeData> *p_gacha_item_type_data_map; // rcx
  std::map<unsigned int,GachaItemTypeData> *v92; // rcx
  char *v93; // rsi
  uint32_t v94; // ecx
  char v95; // dl
  __int64 v96; // rdx
  common::milog::MiLogStream *v97; // r14
  common::milog::MiLogStream *v98; // rax
  common::milog::MiLogStream *v99; // rdx
  common::milog::MiLogStream *v100; // rax
  common::milog::MiLogStream *v101; // rax
  common::milog::MiLogStream *v102; // rax
  common::milog::MiLogStream *v103; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v104; // rax
  __int64 v106; // rsi
  __int64 v107; // rdx
  common::milog::MiLogStream *v108; // r14
  const data::GachaScheduleConfig *v109; // rsi
  uint32_t v110; // ecx
  __int64 v111; // rdx
  __int64 v112; // rsi
  GachaExcelConfigMgr *v113; // rcx
  __int64 v114; // rsi
  __int64 v115; // rsi
  __int64 v116; // rdx
  common::milog::MiLogStream *v117; // r14
  common::milog::MiLogStream *v118; // rax
  common::milog::MiLogStream *v119; // rax
  common::milog::MiLogStream *v120; // rax
  common::milog::MiLogStream *v121; // rcx
  common::milog::MiLogStream *v122; // rax
  common::milog::MiLogStream *v123; // rdx
  uint32_t schedule_id; // ecx
  char v125; // dl
  __int64 v126; // rdx
  uint32_t time_offset; // [rsp+1Ch] [rbp-214h]
  uint32_t cur_time; // [rsp+20h] [rbp-210h]
  uint32_t before_progress; // [rsp+24h] [rbp-20Ch]
  std::set<unsigned int>::iterator __for_begin; // [rsp+28h] [rbp-208h] BYREF
  std::vector<data::GachaProbRuleConfig>::iterator __for_end; // [rsp+30h] [rbp-200h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,GachaGuaranteeData> >::_Self __y; // [rsp+38h] [rbp-1F8h] BYREF
  GachaRecord *gacha_record; // [rsp+40h] [rbp-1F0h]
  const std::set<unsigned int> *__for_range; // [rsp+48h] [rbp-1E8h]
  std::vector<data::GachaParentProbRuleConfig> *__for_range_0; // [rsp+50h] [rbp-1E0h]
  std::vector<data::GachaParentProbRuleConfig> *__for_range_1; // [rsp+58h] [rbp-1D8h]
  std::vector<data::GachaProbRuleConfig> *__for_range_2; // [rsp+60h] [rbp-1D0h]
  const data::GachaWishConfig *wish_config_ptr; // [rsp+68h] [rbp-1C8h]
  const data::GachaProbRuleConfig *prob_rule_config; // [rsp+70h] [rbp-1C0h]
  GachaItemTypeData *gacha_item_type_data; // [rsp+78h] [rbp-1B8h]
  const data::GachaParentProbRuleConfig *parent_prob_rule_config_0; // [rsp+80h] [rbp-1B0h]
  GachaUpData *gacha_up_data; // [rsp+88h] [rbp-1A8h]
  const data::GachaParentProbRuleConfig *parent_prob_rule_config; // [rsp+90h] [rbp-1A0h]
  GachaItemParentTypeData *gacha_item_parent_type_data; // [rsp+98h] [rbp-198h]
  GachaGuaranteeData *gacha_guarantee_data; // [rsp+A0h] [rbp-190h]
  const data::GachaRuleExcelConfig *gacha_rule_config_ptr; // [rsp+A8h] [rbp-188h]
  std::shared_ptr<Config> v148; // [rsp+B0h] [rbp-180h] BYREF
  common::milog::MiLogStream v149; // [rsp+C0h] [rbp-170h] BYREF
  common::milog::MiLogStream v150; // [rsp+E0h] [rbp-150h] BYREF
  common::milog::MiLogStream v151; // [rsp+100h] [rbp-130h] BYREF
  char v152[272]; // [rsp+120h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v152;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 4 18 gacha_rule_id:1456 48 4 20 old_schedule_id:1535 64 8 9 iter:1424 96 24 32 parent_prob_"
                        "rule_config_vec:1472 160 24 31 gacha_prob_rule_config_vec:1503";
  *(_QWORD *)(v2 + 16) = PlayerGachaComp::refreshGachaRecord;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -234881024;
  v4[536862724] = -218959118;
  v4[536862725] = -218103808;
  v4[536862726] = -202116109;
  gacha_record = std::map<data::GachaType,GachaRecord>::operator[](
                   &this->gacha_record_map_,
                   &schedule_config->gacha_type);
  p_gacha_type = &schedule_config->gacha_type;
  v6 = (((_BYTE)schedule_config + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&schedule_config->gacha_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)schedule_config + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&schedule_config->gacha_type >> 3)
                                                                  + 0x7FFF8000) )
  {
    __asan_report_load4(p_gacha_type);
  }
  gacha_type = schedule_config->gacha_type;
  v8 = *(_BYTE *)(((unsigned __int64)gacha_record >> 3) + 0x7FFF8000);
  if ( v8 != 0 && v8 <= 3 )
  {
    LOBYTE(v6) = v8 != 0;
    __asan_report_store4(gacha_record, v6, gacha_record);
  }
  gacha_record->gacha_type = gacha_type;
  *(std::map<unsigned int,GachaGuaranteeData>::iterator *)(v2 + 64) = std::map<unsigned int,GachaGuaranteeData>::begin(&gacha_record->gacha_guarantee_map);
  while ( 1 )
  {
    __y._M_node = std::map<unsigned int,GachaGuaranteeData>::end(&gacha_record->gacha_guarantee_map)._M_node;
    if ( !std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,GachaGuaranteeData> >::_Self *)(v2 + 64),
            &__y) )
      break;
    v9 = std::_Rb_tree_iterator<std::pair<unsigned int const,GachaGuaranteeData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,GachaGuaranteeData> > *const)(v2 + 64));
    p_first = &v9->first;
    if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v9);
    }
    *(_DWORD *)(v2 + 32) = *p_first;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v148);
    v11 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v148);
    gacha_rule_config_ptr = data::GachaExcelConfigMgrBase::findGachaRuleExcelConfig(
                              &v11->design_config.txt_config_mgr.gacha_config_mgr,
                              *(_DWORD *)(v2 + 32));
    std::shared_ptr<Config>::~shared_ptr(&v148);
    if ( gacha_rule_config_ptr )
    {
      if ( std::set<unsigned int>::count(
             &schedule_config->gacha_rule_set,
             (const std::set<unsigned int>::key_type *)(v2 + 32)) )
      {
        if ( *(_BYTE *)(((unsigned __int64)&gacha_rule_config_ptr->gacha_guarantee_reset_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&gacha_rule_config_ptr->gacha_guarantee_reset_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&gacha_rule_config_ptr->gacha_guarantee_reset_type);
        }
        if ( gacha_rule_config_ptr->gacha_guarantee_reset_type == GACHA_GUARANTEE_RESET_ACTIVITY_CHANGE )
        {
          v26 = (((_BYTE)gacha_record + 4) & 7u) + 3;
          if ( *(_BYTE *)(((unsigned __int64)&gacha_record->cur_schedule_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)gacha_record + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gacha_record->cur_schedule_id >> 3)
                                                                       + 0x7FFF8000) )
          {
            __asan_report_load4(&gacha_record->cur_schedule_id);
          }
          cur_schedule_id = gacha_record->cur_schedule_id;
          if ( *(_BYTE *)(((unsigned __int64)schedule_config >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)schedule_config >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(schedule_config);
          }
          if ( cur_schedule_id != schedule_config->schedule_id )
          {
            if ( *(_BYTE *)(((unsigned __int64)&gacha_record->total_gacha_times >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&gacha_record->total_gacha_times >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&gacha_record->total_gacha_times);
            }
            total_gacha_times = gacha_record->total_gacha_times;
            v29 = std::_Rb_tree_iterator<std::pair<unsigned int const,GachaGuaranteeData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,GachaGuaranteeData> > *const)(v2 + 64));
            v30 = *(_BYTE *)(((unsigned __int64)&v29->second.last_gacha_guarantee_times >> 3) + 0x7FFF8000);
            if ( v30 != 0 && (char)((((_BYTE)v29 + 8) & 7) + 3) >= v30 )
            {
              LOBYTE(v26) = v30 != 0;
              __asan_report_store4(&v29->second.last_gacha_guarantee_times, v26, v29);
            }
            v29->second.last_gacha_guarantee_times = total_gacha_times;
            v31 = std::_Rb_tree_iterator<std::pair<unsigned int const,GachaGuaranteeData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,GachaGuaranteeData> > *const)(v2 + 64));
            v32 = *(_BYTE *)(((unsigned __int64)&v31->second.is_cur_schedule_triggered >> 3) + 0x7FFF8000);
            if ( v32 != 0 && (((unsigned __int8)v31 + 12) & 7) >= v32 )
            {
              LOBYTE(v26) = v32 != 0;
              __asan_report_store1(&v31->second.is_cur_schedule_triggered, v26, v31);
            }
            v31->second.is_cur_schedule_triggered = 0;
            common::milog::MiLogStream::create(
              &v151,
              &common::milog::MiLogDefault::default_log_obj_,
              2u,
              "./src/player/gacha/player_gacha_comp.cpp",
              "refreshGachaRecord",
              1449);
            v33 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                    &v151,
                    (const char (*)[38])"gacha rule activie_reset, gacha_type:");
            if ( *(_BYTE *)(((unsigned __int64)&schedule_config->gacha_type >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)schedule_config + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&schedule_config->gacha_type >> 3)
                                                                            + 0x7FFF8000) )
            {
              __asan_report_load4(&schedule_config->gacha_type);
            }
            __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,GachaGuaranteeData> >::_Base_ptr)data::enumValToStr(schedule_config->gacha_type);
            v34 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v33, (const char *const *)&__y);
            v35 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                    v34,
                    (const char (*)[14])" schedule_id:");
            v36 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v35,
                    &schedule_config->schedule_id);
            v37 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v36, (const char (*)[10])" rule_id:");
            v38 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v37,
                    (const unsigned int *)(v2 + 32));
            v39 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    v38,
                    (const char (*)[13])" gacha_time:");
            v40 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v39,
                    &gacha_record->total_gacha_times);
            v41 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v40, (const char (*)[6])" uid:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            *(_DWORD *)(v2 + 48) = Player::getUid(this->player_);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v41, (const unsigned int *)(v2 + 48));
            common::milog::MiLogStream::~MiLogStream(&v151);
          }
        }
        std::_Rb_tree_iterator<std::pair<unsigned int const,GachaGuaranteeData>>::operator++(
          (std::_Rb_tree_iterator<std::pair<unsigned int const,GachaGuaranteeData> > *const)(v2 + 64),
          0);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v150,
          &common::milog::MiLogDefault::default_log_obj_,
          2u,
          "./src/player/gacha/player_gacha_comp.cpp",
          "refreshGachaRecord",
          1438);
        v19 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                &v150,
                (const char (*)[38])"gacha_rule_id delete from gacha_type:");
        if ( *(_BYTE *)(((unsigned __int64)&schedule_config->gacha_type >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)schedule_config + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&schedule_config->gacha_type >> 3)
                                                                        + 0x7FFF8000) )
        {
          __asan_report_load4(&schedule_config->gacha_type);
        }
        __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,GachaGuaranteeData> >::_Base_ptr)data::enumValToStr(schedule_config->gacha_type);
        v20 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v19, (const char *const *)&__y);
        v21 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v20, (const char (*)[14])" schedule_id:");
        v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &schedule_config->schedule_id);
        v23 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v22, (const char (*)[10])" rule_id:");
        v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v23,
                (const unsigned int *)(v2 + 32));
        v25 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v24, (const char (*)[6])" uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        *(_DWORD *)(v2 + 48) = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, (const unsigned int *)(v2 + 48));
        common::milog::MiLogStream::~MiLogStream(&v150);
        *(std::map<unsigned int,GachaGuaranteeData>::iterator *)(v2 + 64) = std::map<unsigned int,GachaGuaranteeData>::erase[abi:cxx11](
                                                                              &gacha_record->gacha_guarantee_map,
                                                                              *(std::map<unsigned int,GachaGuaranteeData>::iterator *)(v2 + 64));
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v149,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/gacha/player_gacha_comp.cpp",
        "refreshGachaRecord",
        1430);
      v12 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
              &v149,
              (const char (*)[45])"findGachaRuleExcelConfig failed, gacha_type:");
      if ( *(_BYTE *)(((unsigned __int64)&schedule_config->gacha_type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)schedule_config + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&schedule_config->gacha_type >> 3)
                                                                      + 0x7FFF8000) )
      {
        __asan_report_load4(&schedule_config->gacha_type);
      }
      __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,GachaGuaranteeData> >::_Base_ptr)data::enumValToStr(schedule_config->gacha_type);
      v13 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v12, (const char *const *)&__y);
      v14 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v13, (const char (*)[14])" schedule_id:");
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &schedule_config->schedule_id);
      v16 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v15, (const char (*)[10])" rule_id:");
      v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v2 + 32));
      v18 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v17, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      *(_DWORD *)(v2 + 48) = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v149);
      *(std::map<unsigned int,GachaGuaranteeData>::iterator *)(v2 + 64) = std::map<unsigned int,GachaGuaranteeData>::erase[abi:cxx11](
                                                                            &gacha_record->gacha_guarantee_map,
                                                                            *(std::map<unsigned int,GachaGuaranteeData>::iterator *)(v2 + 64));
    }
  }
  __for_range = &schedule_config->gacha_rule_set;
  __for_begin._M_node = std::set<unsigned int>::begin(&schedule_config->gacha_rule_set)._M_node;
  __for_end._M_current = (data::GachaProbRuleConfig *)std::set<unsigned int>::end(__for_range)._M_node;
  while ( std::operator!=(&__for_begin, (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_end) )
  {
    v42 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    v43 = v42;
    if ( *(_BYTE *)(((unsigned __int64)v42 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v42 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v42 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v42);
    }
    *(_DWORD *)(v2 + 32) = *v43;
    __y._M_node = std::map<unsigned int,GachaGuaranteeData>::end(&gacha_record->gacha_guarantee_map)._M_node;
    *(std::map<unsigned int,GachaGuaranteeData>::iterator *)(v2 + 64) = std::map<unsigned int,GachaGuaranteeData>::find(
                                                                          &gacha_record->gacha_guarantee_map,
                                                                          (const std::map<unsigned int,GachaGuaranteeData>::key_type *)(v2 + 32));
    if ( !std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,GachaGuaranteeData> >::_Self *)(v2 + 64),
            &__y) )
    {
      v47 = (char *)(v2 + 32);
      v44 = std::map<unsigned int,GachaGuaranteeData>::operator[](
              &gacha_record->gacha_guarantee_map,
              (const std::map<unsigned int,GachaGuaranteeData>::key_type *)(v2 + 32));
      gacha_guarantee_data = v44;
      v45 = *(_DWORD *)(v2 + 32);
      v46 = *(_BYTE *)(((unsigned __int64)v44 >> 3) + 0x7FFF8000);
      LOBYTE(v47) = v46 != 0;
      v48 = (v46 != 0) & (unsigned __int8)((char)(((unsigned __int8)v44 & 7) + 3) >= v46);
      if ( (_BYTE)v48 )
        __asan_report_store4(v44, v47, v48);
      gacha_guarantee_data->gacha_rule_id = v45;
      if ( *(_BYTE *)(((unsigned __int64)&gacha_record->total_gacha_times >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&gacha_record->total_gacha_times >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&gacha_record->total_gacha_times);
      }
      v49 = gacha_record->total_gacha_times;
      v50 = *(_BYTE *)(((unsigned __int64)&gacha_guarantee_data->last_gacha_guarantee_times >> 3) + 0x7FFF8000);
      LOBYTE(v47) = v50 != 0;
      v51 = (v50 != 0) & (unsigned __int8)((char)((((_BYTE)gacha_guarantee_data + 4) & 7) + 3) >= v50);
      if ( (_BYTE)v51 )
        __asan_report_store4(&gacha_guarantee_data->last_gacha_guarantee_times, v47, v51);
      gacha_guarantee_data->last_gacha_guarantee_times = v49;
      v52 = ((_BYTE)gacha_guarantee_data + 8) & 7;
      v53 = (*(_BYTE *)(((unsigned __int64)&gacha_guarantee_data->is_cur_schedule_triggered >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v52 >= *(_BYTE *)(((unsigned __int64)&gacha_guarantee_data->is_cur_schedule_triggered >> 3) + 0x7FFF8000));
      if ( (_BYTE)v53 )
        __asan_report_store1(&gacha_guarantee_data->is_cur_schedule_triggered, v52, v53);
      gacha_guarantee_data->is_cur_schedule_triggered = 0;
      common::milog::MiLogStream::create(
        &v151,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "./src/player/gacha/player_gacha_comp.cpp",
        "refreshGachaRecord",
        1467);
      v54 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
              &v151,
              (const char (*)[28])"gacha rule add, gacha_type:");
      if ( *(_BYTE *)(((unsigned __int64)&schedule_config->gacha_type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)schedule_config + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&schedule_config->gacha_type >> 3)
                                                                      + 0x7FFF8000) )
      {
        __asan_report_load4(&schedule_config->gacha_type);
      }
      __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,GachaGuaranteeData> >::_Base_ptr)data::enumValToStr(schedule_config->gacha_type);
      v55 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v54, (const char *const *)&__y);
      v56 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v55, (const char (*)[14])" schedule_id:");
      v57 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v56, &schedule_config->schedule_id);
      v58 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v57, (const char (*)[10])" rule_id:");
      v59 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v58, (const unsigned int *)(v2 + 32));
      v60 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v59, (const char (*)[13])" gacha_time:");
      v61 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v60,
              &gacha_record->total_gacha_times);
      v62 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v61, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      *(_DWORD *)(v2 + 48) = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v62, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v151);
    }
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v148);
  p_gacha_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v148)->design_config.txt_config_mgr.gacha_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&schedule_config->gacha_prob_rule_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)schedule_config + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&schedule_config->gacha_prob_rule_id >> 3)
                                                                   + 0x7FFF8000) )
  {
    __asan_report_load4(&schedule_config->gacha_prob_rule_id);
  }
  GachaExcelConfigMgr::findGachaParentProbRuleVec(
    (std::vector<data::GachaParentProbRuleConfig> *)(v2 + 96),
    p_gacha_config_mgr,
    schedule_config->gacha_prob_rule_id);
  std::shared_ptr<Config>::~shared_ptr(&v148);
  if ( std::vector<data::GachaParentProbRuleConfig>::empty((const std::vector<data::GachaParentProbRuleConfig> *const)(v2 + 96)) )
  {
    common::milog::MiLogStream::create(
      &v151,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/gacha/player_gacha_comp.cpp",
      "refreshGachaRecord",
      1475);
    v64 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
            &v151,
            (const char (*)[55])"findGachaParentProbRuleVec failed, gacha_prob_rule_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v64, &schedule_config->gacha_prob_rule_id);
    common::milog::MiLogStream::~MiLogStream(&v151);
  }
  __for_range_0 = (std::vector<data::GachaParentProbRuleConfig> *)(v2 + 96);
  __for_end._M_current = (data::GachaProbRuleConfig *)std::vector<data::GachaParentProbRuleConfig>::begin((std::vector<data::GachaParentProbRuleConfig> *const)(v2 + 96))._M_current;
  *(std::vector<data::GachaParentProbRuleConfig>::iterator *)(v2 + 64) = std::vector<data::GachaParentProbRuleConfig>::end(__for_range_0);
  while ( __gnu_cxx::operator!=<data::GachaParentProbRuleConfig *,std::vector<data::GachaParentProbRuleConfig>>(
            (const __gnu_cxx::__normal_iterator<data::GachaParentProbRuleConfig*,std::vector<data::GachaParentProbRuleConfig> > *)&__for_end,
            (const __gnu_cxx::__normal_iterator<data::GachaParentProbRuleConfig*,std::vector<data::GachaParentProbRuleConfig> > *)(v2 + 64)) )
  {
    parent_prob_rule_config = __gnu_cxx::__normal_iterator<data::GachaParentProbRuleConfig *,std::vector<data::GachaParentProbRuleConfig>>::operator*((const __gnu_cxx::__normal_iterator<data::GachaParentProbRuleConfig*,std::vector<data::GachaParentProbRuleConfig> > *const)&__for_end);
    __y._M_node = std::map<unsigned int,GachaItemParentTypeData>::end(&gacha_record->gacha_item_parent_type_data_map)._M_node;
    p_gacha_item_parent_type_data_map = &gacha_record->gacha_item_parent_type_data_map;
    if ( *(_BYTE *)(((unsigned __int64)&parent_prob_rule_config->gacha_item_parent_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)parent_prob_rule_config + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&parent_prob_rule_config->gacha_item_parent_type >> 3)
                                                                            + 0x7FFF8000) )
    {
      __asan_report_load4(&parent_prob_rule_config->gacha_item_parent_type);
    }
    *(_DWORD *)(v2 + 48) = parent_prob_rule_config->gacha_item_parent_type;
    __for_begin._M_node = std::map<unsigned int,GachaItemParentTypeData>::find(
                            p_gacha_item_parent_type_data_map,
                            (const std::map<unsigned int,GachaItemParentTypeData>::key_type *)(v2 + 48))._M_node;
    if ( !std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,GachaItemParentTypeData> >::_Self *)&__for_begin,
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,GachaItemParentTypeData> >::_Self *)&__y) )
    {
      v66 = &gacha_record->gacha_item_parent_type_data_map;
      if ( *(_BYTE *)(((unsigned __int64)&parent_prob_rule_config->gacha_item_parent_type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)parent_prob_rule_config + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&parent_prob_rule_config->gacha_item_parent_type >> 3)
                                                                              + 0x7FFF8000) )
      {
        __asan_report_load4(&parent_prob_rule_config->gacha_item_parent_type);
      }
      *(_DWORD *)(v2 + 48) = parent_prob_rule_config->gacha_item_parent_type;
      v67 = (char *)(v2 + 48);
      gacha_item_parent_type_data = std::map<unsigned int,GachaItemParentTypeData>::operator[](
                                      v66,
                                      (std::map<unsigned int,GachaItemParentTypeData>::key_type *)(v2 + 48));
      if ( *(_BYTE *)(((unsigned __int64)&gacha_record->total_gacha_times >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&gacha_record->total_gacha_times >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&gacha_record->total_gacha_times);
      }
      v68 = gacha_record->total_gacha_times;
      v69 = *(_BYTE *)(((unsigned __int64)gacha_item_parent_type_data >> 3) + 0x7FFF8000);
      LOBYTE(v67) = v69 != 0;
      v70 = (v69 != 0) & (unsigned __int8)((char)(((unsigned __int8)gacha_item_parent_type_data & 7) + 3) >= v69);
      if ( (_BYTE)v70 )
        __asan_report_store4(gacha_item_parent_type_data, v67, v70);
      gacha_item_parent_type_data->last_gacha_times = v68;
      common::milog::MiLogStream::create(
        &v151,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "./src/player/gacha/player_gacha_comp.cpp",
        "refreshGachaRecord",
        1486);
      v71 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
              &v151,
              (const char (*)[62])"gacha_item_parent_type_data add, gacha_item_parent_type_data:");
      if ( *(_BYTE *)(((unsigned __int64)&parent_prob_rule_config->gacha_item_parent_type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)parent_prob_rule_config + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&parent_prob_rule_config->gacha_item_parent_type >> 3)
                                                                              + 0x7FFF8000) )
      {
        __asan_report_load4(&parent_prob_rule_config->gacha_item_parent_type);
      }
      __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,GachaGuaranteeData> >::_Base_ptr)data::enumValToStr(parent_prob_rule_config->gacha_item_parent_type);
      v72 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v71, (const char *const *)&__y);
      v73 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v72, (const char (*)[14])" schedule_id:");
      v74 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v73, &schedule_config->schedule_id);
      v75 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v74, (const char (*)[14])" gacha_times:");
      v76 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v75,
              &gacha_record->total_gacha_times);
      v77 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v76, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      *(_DWORD *)(v2 + 48) = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v77, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v151);
    }
    __gnu_cxx::__normal_iterator<data::GachaParentProbRuleConfig *,std::vector<data::GachaParentProbRuleConfig>>::operator++((__gnu_cxx::__normal_iterator<data::GachaParentProbRuleConfig*,std::vector<data::GachaParentProbRuleConfig> > *const)&__for_end);
  }
  __for_range_1 = (std::vector<data::GachaParentProbRuleConfig> *)(v2 + 96);
  __for_begin._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)std::vector<data::GachaParentProbRuleConfig>::begin((std::vector<data::GachaParentProbRuleConfig> *const)(v2 + 96))._M_current;
  *(std::vector<data::GachaParentProbRuleConfig>::iterator *)(v2 + 64) = std::vector<data::GachaParentProbRuleConfig>::end(__for_range_1);
  while ( __gnu_cxx::operator!=<data::GachaParentProbRuleConfig *,std::vector<data::GachaParentProbRuleConfig>>(
            (const __gnu_cxx::__normal_iterator<data::GachaParentProbRuleConfig*,std::vector<data::GachaParentProbRuleConfig> > *)&__for_begin,
            (const __gnu_cxx::__normal_iterator<data::GachaParentProbRuleConfig*,std::vector<data::GachaParentProbRuleConfig> > *)(v2 + 64)) )
  {
    parent_prob_rule_config_0 = __gnu_cxx::__normal_iterator<data::GachaParentProbRuleConfig *,std::vector<data::GachaParentProbRuleConfig>>::operator*((const __gnu_cxx::__normal_iterator<data::GachaParentProbRuleConfig*,std::vector<data::GachaParentProbRuleConfig> > *const)&__for_begin);
    __y._M_node = std::map<unsigned int,GachaUpData>::end(&gacha_record->gacha_up_data_map)._M_node;
    p_gacha_up_data_map = &gacha_record->gacha_up_data_map;
    if ( *(_BYTE *)(((unsigned __int64)&parent_prob_rule_config_0->gacha_item_parent_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)parent_prob_rule_config_0 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&parent_prob_rule_config_0->gacha_item_parent_type >> 3)
                                                                              + 0x7FFF8000) )
    {
      __asan_report_load4(&parent_prob_rule_config_0->gacha_item_parent_type);
    }
    *(_DWORD *)(v2 + 48) = parent_prob_rule_config_0->gacha_item_parent_type;
    __for_end._M_current = (data::GachaProbRuleConfig *)std::map<unsigned int,GachaUpData>::find(
                                                          p_gacha_up_data_map,
                                                          (const std::map<unsigned int,GachaUpData>::key_type *)(v2 + 48))._M_node;
    if ( !std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,GachaUpData> >::_Self *)&__for_end,
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,GachaUpData> >::_Self *)&__y) )
    {
      v79 = &gacha_record->gacha_up_data_map;
      if ( *(_BYTE *)(((unsigned __int64)&parent_prob_rule_config_0->gacha_item_parent_type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)parent_prob_rule_config_0 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&parent_prob_rule_config_0->gacha_item_parent_type >> 3)
                                                                                + 0x7FFF8000) )
      {
        __asan_report_load4(&parent_prob_rule_config_0->gacha_item_parent_type);
      }
      *(_DWORD *)(v2 + 48) = parent_prob_rule_config_0->gacha_item_parent_type;
      v80 = std::map<unsigned int,GachaUpData>::operator[](
              v79,
              (std::map<unsigned int,GachaUpData>::key_type *)(v2 + 48));
      gacha_up_data = v80;
      v81 = (*(_BYTE *)(((unsigned __int64)v80 >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)(((unsigned __int8)v80 & 7)
                                                                                                  + 3) >= *(_BYTE *)(((unsigned __int64)v80 >> 3) + 0x7FFF8000));
      if ( (_BYTE)v81 )
        __asan_report_store4(v80, ((unsigned __int8)v80 & 7u) + 3, v81);
      gacha_up_data->gacha_no_up_times = 0;
      common::milog::MiLogStream::create(
        &v151,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "./src/player/gacha/player_gacha_comp.cpp",
        "refreshGachaRecord",
        1499);
      v82 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
              &v151,
              (const char (*)[48])"gacha_up_data add, gacha_item_parent_type_data:");
      if ( *(_BYTE *)(((unsigned __int64)&parent_prob_rule_config_0->gacha_item_parent_type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)parent_prob_rule_config_0 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&parent_prob_rule_config_0->gacha_item_parent_type >> 3)
                                                                                + 0x7FFF8000) )
      {
        __asan_report_load4(&parent_prob_rule_config_0->gacha_item_parent_type);
      }
      __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,GachaGuaranteeData> >::_Base_ptr)data::enumValToStr(parent_prob_rule_config_0->gacha_item_parent_type);
      v83 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v82, (const char *const *)&__y);
      v84 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v83, (const char (*)[14])" schedule_id:");
      v85 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v84, &schedule_config->schedule_id);
      v86 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v85, (const char (*)[14])" gacha_times:");
      v87 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v86,
              &gacha_record->total_gacha_times);
      v88 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v87, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      *(_DWORD *)(v2 + 48) = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v88, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v151);
    }
    __gnu_cxx::__normal_iterator<data::GachaParentProbRuleConfig *,std::vector<data::GachaParentProbRuleConfig>>::operator++((__gnu_cxx::__normal_iterator<data::GachaParentProbRuleConfig*,std::vector<data::GachaParentProbRuleConfig> > *const)&__for_begin);
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v148);
  v89 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v148)->design_config.txt_config_mgr.gacha_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&schedule_config->gacha_prob_rule_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)schedule_config + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&schedule_config->gacha_prob_rule_id >> 3)
                                                                   + 0x7FFF8000) )
  {
    __asan_report_load4(&schedule_config->gacha_prob_rule_id);
  }
  GachaExcelConfigMgr::findGachaProbRuleVec(
    (std::vector<data::GachaProbRuleConfig> *)(v2 + 160),
    v89,
    schedule_config->gacha_prob_rule_id);
  std::shared_ptr<Config>::~shared_ptr(&v148);
  if ( std::vector<data::GachaProbRuleConfig>::empty((const std::vector<data::GachaProbRuleConfig> *const)(v2 + 160)) )
  {
    common::milog::MiLogStream::create(
      &v151,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/gacha/player_gacha_comp.cpp",
      "refreshGachaRecord",
      1506);
    v90 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
            &v151,
            (const char (*)[49])"findGachaProbRuleVec failed, gacha_prob_rule_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v90, &schedule_config->gacha_prob_rule_id);
    common::milog::MiLogStream::~MiLogStream(&v151);
  }
  __for_range_2 = (std::vector<data::GachaProbRuleConfig> *)(v2 + 160);
  __for_begin._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)std::vector<data::GachaProbRuleConfig>::begin((std::vector<data::GachaProbRuleConfig> *const)(v2 + 160))._M_current;
  __for_end._M_current = std::vector<data::GachaProbRuleConfig>::end(__for_range_2)._M_current;
  while ( __gnu_cxx::operator!=<data::GachaProbRuleConfig *,std::vector<data::GachaProbRuleConfig>>(
            (const __gnu_cxx::__normal_iterator<data::GachaProbRuleConfig*,std::vector<data::GachaProbRuleConfig> > *)&__for_begin,
            &__for_end) )
  {
    prob_rule_config = __gnu_cxx::__normal_iterator<data::GachaProbRuleConfig *,std::vector<data::GachaProbRuleConfig>>::operator*((const __gnu_cxx::__normal_iterator<data::GachaProbRuleConfig*,std::vector<data::GachaProbRuleConfig> > *const)&__for_begin);
    __y._M_node = std::map<unsigned int,GachaItemTypeData>::end(&gacha_record->gacha_item_type_data_map)._M_node;
    p_gacha_item_type_data_map = &gacha_record->gacha_item_type_data_map;
    if ( *(_BYTE *)(((unsigned __int64)&prob_rule_config->gacha_item_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&prob_rule_config->gacha_item_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&prob_rule_config->gacha_item_type);
    }
    *(_DWORD *)(v2 + 48) = prob_rule_config->gacha_item_type;
    *(std::map<unsigned int,GachaItemTypeData>::iterator *)(v2 + 64) = std::map<unsigned int,GachaItemTypeData>::find(
                                                                         p_gacha_item_type_data_map,
                                                                         (const std::map<unsigned int,GachaItemTypeData>::key_type *)(v2 + 48));
    if ( !std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,GachaItemTypeData> >::_Self *)(v2 + 64),
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,GachaItemTypeData> >::_Self *)&__y) )
    {
      v92 = &gacha_record->gacha_item_type_data_map;
      if ( *(_BYTE *)(((unsigned __int64)&prob_rule_config->gacha_item_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&prob_rule_config->gacha_item_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&prob_rule_config->gacha_item_type);
      }
      *(_DWORD *)(v2 + 48) = prob_rule_config->gacha_item_type;
      v93 = (char *)(v2 + 48);
      gacha_item_type_data = std::map<unsigned int,GachaItemTypeData>::operator[](
                               v92,
                               (std::map<unsigned int,GachaItemTypeData>::key_type *)(v2 + 48));
      if ( *(_BYTE *)(((unsigned __int64)&gacha_record->total_gacha_times >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&gacha_record->total_gacha_times >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&gacha_record->total_gacha_times);
      }
      v94 = gacha_record->total_gacha_times;
      v95 = *(_BYTE *)(((unsigned __int64)gacha_item_type_data >> 3) + 0x7FFF8000);
      LOBYTE(v93) = v95 != 0;
      v96 = (v95 != 0) & (unsigned __int8)((char)(((unsigned __int8)gacha_item_type_data & 7) + 3) >= v95);
      if ( (_BYTE)v96 )
        __asan_report_store4(gacha_item_type_data, v93, v96);
      gacha_item_type_data->last_gacha_times = v94;
      common::milog::MiLogStream::create(
        &v151,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "./src/player/gacha/player_gacha_comp.cpp",
        "refreshGachaRecord",
        1517);
      v97 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
              &v151,
              (const char (*)[48])"gacha_item_type_data add, gacha_item_type_data:");
      if ( *(_BYTE *)(((unsigned __int64)&prob_rule_config->gacha_item_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&prob_rule_config->gacha_item_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&prob_rule_config->gacha_item_type);
      }
      __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,GachaGuaranteeData> >::_Base_ptr)data::enumValToStr(prob_rule_config->gacha_item_type);
      v98 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v97, (const char *const *)&__y);
      v99 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v98, (const char (*)[14])" schedule_id:");
      v100 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v99, &schedule_config->schedule_id);
      v101 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v100, (const char (*)[14])" gacha_times:");
      v102 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
               v101,
               &gacha_record->total_gacha_times);
      v103 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v102, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      *(_DWORD *)(v2 + 48) = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v103, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v151);
    }
    __gnu_cxx::__normal_iterator<data::GachaProbRuleConfig *,std::vector<data::GachaProbRuleConfig>>::operator++((__gnu_cxx::__normal_iterator<data::GachaProbRuleConfig*,std::vector<data::GachaProbRuleConfig> > *const)&__for_begin);
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v148);
  v104 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v148);
  time_offset = ConstValueExcelConfigMgr::getTimeOffsetSec(&v104->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v148);
  cur_time = common::tools::TimeUtils::getNow();
  if ( *(_BYTE *)(((unsigned __int64)&gacha_record->cur_schedule_daily_last_gacha_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)gacha_record - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gacha_record->cur_schedule_daily_last_gacha_time >> 3)
                                                                + 0x7FFF8000) )
  {
    __asan_report_load4(&gacha_record->cur_schedule_daily_last_gacha_time);
  }
  if ( gacha_record->cur_schedule_daily_last_gacha_time
    && cur_time > gacha_record->cur_schedule_daily_last_gacha_time
    && !common::tools::TimeUtils::isSameDay(cur_time, gacha_record->cur_schedule_daily_last_gacha_time, time_offset) )
  {
    v106 = (((_BYTE)gacha_record - 28) & 7u) + 3;
    v107 = (*(_BYTE *)(((unsigned __int64)&gacha_record->cur_schedule_daily_last_gacha_time >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)gacha_record - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gacha_record->cur_schedule_daily_last_gacha_time >> 3) + 0x7FFF8000));
    if ( (_BYTE)v107 )
      __asan_report_store4(&gacha_record->cur_schedule_daily_last_gacha_time, v106, v107);
    gacha_record->cur_schedule_daily_last_gacha_time = 0;
    if ( *(_BYTE *)(((unsigned __int64)&gacha_record->cur_schedule_daily_gacha_times >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&gacha_record->cur_schedule_daily_gacha_times >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(
        &gacha_record->cur_schedule_daily_gacha_times,
        v106,
        &gacha_record->cur_schedule_daily_gacha_times);
    }
    gacha_record->cur_schedule_daily_gacha_times = 0;
    common::milog::MiLogStream::create(
      &v151,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/gacha/player_gacha_comp.cpp",
      "refreshGachaRecord",
      1530);
    v108 = common::milog::MiLogStream::operator<<<char [90],(char *[90])0>(
             &v151,
             (const char (*)[90])"reset cur_schedule_daily_last_gacha_time and cur_schedule_daily_gacha_times, gacha_type: ");
    if ( *(_BYTE *)(((unsigned __int64)&schedule_config->gacha_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)schedule_config + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&schedule_config->gacha_type >> 3)
                                                                    + 0x7FFF8000) )
    {
      __asan_report_load4(&schedule_config->gacha_type);
    }
    __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,GachaGuaranteeData> >::_Base_ptr)data::enumValToStr(schedule_config->gacha_type);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v108, (const char *const *)&__y);
    common::milog::MiLogStream::~MiLogStream(&v151);
  }
  v109 = (const data::GachaScheduleConfig *)((((_BYTE)gacha_record + 4) & 7u) + 3);
  if ( *(_BYTE *)(((unsigned __int64)&gacha_record->cur_schedule_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)gacha_record + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gacha_record->cur_schedule_id >> 3)
                                                               + 0x7FFF8000) )
  {
    __asan_report_load4(&gacha_record->cur_schedule_id);
  }
  v110 = gacha_record->cur_schedule_id;
  if ( *(_BYTE *)(((unsigned __int64)schedule_config >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)schedule_config >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(schedule_config);
  }
  if ( v110 != schedule_config->schedule_id )
  {
    *(_DWORD *)(v2 + 48) = gacha_record->cur_schedule_id;
    v111 = (*(_BYTE *)(((unsigned __int64)&gacha_record->cur_schedule_total_gacha_times >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)gacha_record + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gacha_record->cur_schedule_total_gacha_times >> 3) + 0x7FFF8000));
    if ( (_BYTE)v111 )
      __asan_report_store4(&gacha_record->cur_schedule_total_gacha_times, (((_BYTE)gacha_record + 12) & 7u) + 3, v111);
    gacha_record->cur_schedule_total_gacha_times = 0;
    gacha_record->cur_schedule_id = schedule_config->schedule_id;
    v112 = (((_BYTE)gacha_record - 36) & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)&gacha_record->wish_progress >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)gacha_record - 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gacha_record->wish_progress >> 3)
                                                                  + 0x7FFF8000) )
    {
      __asan_report_load4(&gacha_record->wish_progress);
    }
    before_progress = gacha_record->wish_progress;
    if ( *(_BYTE *)(((unsigned __int64)&gacha_record->wish_item_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&gacha_record->wish_item_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&gacha_record->wish_item_id, v112, &gacha_record->wish_item_id);
    }
    gacha_record->wish_item_id = 0;
    gacha_record->wish_progress = 0;
    if ( *(char *)(((unsigned __int64)&gacha_record->is_new_wish >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&gacha_record->is_new_wish, v112, &gacha_record->is_new_wish);
    gacha_record->is_new_wish = 0;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v148);
    v113 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v148)->design_config.txt_config_mgr.gacha_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&schedule_config->gacha_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)schedule_config + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&schedule_config->gacha_type >> 3)
                                                                    + 0x7FFF8000) )
    {
      __asan_report_load4(&schedule_config->gacha_type);
    }
    v114 = (unsigned int)schedule_config->gacha_type;
    wish_config_ptr = data::GachaExcelConfigMgrBase::findGachaWishConfig(v113, v114);
    std::shared_ptr<Config>::~shared_ptr(&v148);
    if ( wish_config_ptr )
    {
      if ( *(char *)(((unsigned __int64)&gacha_record->is_new_wish >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(&gacha_record->is_new_wish, v114, &gacha_record->is_new_wish);
      gacha_record->is_new_wish = 1;
      PlayerGachaComp::printWishProgressStatLog(this, gacha_record, before_progress, 3u);
    }
    else if ( before_progress )
    {
      common::milog::MiLogStream::create(
        &v151,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/gacha/player_gacha_comp.cpp",
        "refreshGachaRecord",
        1555);
      common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
        &v151,
        (const char (*)[47])"before_progress > 0 but wish_config is nullptr");
      common::milog::MiLogStream::~MiLogStream(&v151);
      PlayerGachaComp::printWishProgressStatLog(this, gacha_record, before_progress, 3u);
    }
    v115 = (((_BYTE)gacha_record - 28) & 7u) + 3;
    v116 = (*(_BYTE *)(((unsigned __int64)&gacha_record->cur_schedule_daily_last_gacha_time >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)gacha_record - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gacha_record->cur_schedule_daily_last_gacha_time >> 3) + 0x7FFF8000));
    if ( (_BYTE)v116 )
      __asan_report_store4(&gacha_record->cur_schedule_daily_last_gacha_time, v115, v116);
    gacha_record->cur_schedule_daily_last_gacha_time = 0;
    if ( *(_BYTE *)(((unsigned __int64)&gacha_record->cur_schedule_daily_gacha_times >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&gacha_record->cur_schedule_daily_gacha_times >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(
        &gacha_record->cur_schedule_daily_gacha_times,
        v115,
        &gacha_record->cur_schedule_daily_gacha_times);
    }
    gacha_record->cur_schedule_daily_gacha_times = 0;
    common::milog::MiLogStream::create(
      &v151,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/player/gacha/player_gacha_comp.cpp",
      "refreshGachaRecord",
      1562);
    v117 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             &v151,
             (const char (*)[27])"gacha refresh, gacha_type:");
    if ( *(_BYTE *)(((unsigned __int64)&schedule_config->gacha_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)schedule_config + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&schedule_config->gacha_type >> 3)
                                                                    + 0x7FFF8000) )
    {
      __asan_report_load4(&schedule_config->gacha_type);
    }
    __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,GachaGuaranteeData> >::_Base_ptr)data::enumValToStr(schedule_config->gacha_type);
    v118 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v117, (const char *const *)&__y);
    v119 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
             v118,
             (const char (*)[18])" old_schedule_id:");
    v120 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v119, (const unsigned int *)(v2 + 48));
    v121 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v120, (const char (*)[14])" is_new_wish:");
    if ( *(char *)(((unsigned __int64)&gacha_record->is_new_wish >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&gacha_record->is_new_wish);
    v122 = common::milog::MiLogStream::operator<<(v121, gacha_record->is_new_wish);
    v123 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
             v122,
             (const char (*)[18])" new_schedule_id:");
    v109 = schedule_config;
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v123, &schedule_config->schedule_id);
    common::milog::MiLogStream::~MiLogStream(&v151);
  }
  if ( *(_BYTE *)(((unsigned __int64)schedule_config >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)schedule_config >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(schedule_config);
  }
  schedule_id = schedule_config->schedule_id;
  v125 = *(_BYTE *)(((unsigned __int64)&gacha_record->cur_schedule_id >> 3) + 0x7FFF8000);
  LOBYTE(v109) = v125 != 0;
  v126 = (v125 != 0) & (unsigned __int8)((char)((((_BYTE)gacha_record + 4) & 7) + 3) >= v125);
  if ( (_BYTE)v126 )
    __asan_report_store4(&gacha_record->cur_schedule_id, v109, v126);
  gacha_record->cur_schedule_id = schedule_id;
  std::vector<data::GachaProbRuleConfig>::~vector((std::vector<data::GachaProbRuleConfig> *const)(v2 + 160));
  std::vector<data::GachaParentProbRuleConfig>::~vector((std::vector<data::GachaParentProbRuleConfig> *const)(v2 + 96));
  if ( v152 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = -168430091;
  }
};

// Line 1571: range 00000000141C99FA-00000000141CC9C8
data::GachaPoolExcelConfig *__fastcall PlayerGachaComp::calcGachaDrop(
        data::GachaPoolExcelConfig *retstr,
        PlayerGachaComp *const this,
        const data::GachaScheduleConfig *schedule_config,
        GachaRecord *gacha_record,
        uint32_t gacha_rule_id,
        bool *is_gacha_up_triggered,
        __m128i a7,
        bool *is_wish_triggered,
        GachaStatLogContext *gacha_log_context)
{
  unsigned __int64 v9; // r13
  __int64 v10; // rax
  _DWORD *v11; // r12
  int (**v12)(...); // rdx
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // r14
  const GachaExcelConfigMgr *p_gacha_config_mgr; // rdi
  uint32_t gacha_guarantee_item; // edx
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  const data::GachaPoolExcelConfig *v28; // rax
  common::milog::MiLogStream *v29; // r14
  int v30; // r14d
  std::pair<data::GachaItemParentType,unsigned int> *v31; // rax
  std::pair<data::GachaItemParentType,unsigned int> *v32; // rdx
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // r14
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // r14
  common::milog::MiLogStream *v42; // r14
  std::vector<data::GachaGuaranteeParentTypeWeight>::size_type v43; // r14
  common::milog::MiLogStream *v44; // r14
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // r14
  std::vector<data::GachaGuaranteeParentTypeWeight>::reference v49; // rax
  common::milog::MiLogStream *v50; // rax
  common::milog::MiLogStream *v51; // rax
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // r14
  common::milog::MiLogStream *v55; // rax
  common::milog::MiLogStream *v56; // r14
  __int64 v57; // rsi
  __int64 v58; // rdx
  common::milog::MiLogStream *v59; // rax
  common::milog::MiLogStream *v60; // rax
  common::milog::MiLogStream *v61; // rax
  common::milog::MiLogStream *v62; // rax
  common::milog::MiLogStream *v63; // rax
  common::milog::MiLogStream *v64; // rax
  common::milog::MiLogStream *v65; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v67; // rax
  float v68; // xmm0_4
  uint32_t v69; // ecx
  char v70; // dl
  __int64 v71; // rsi
  __int64 v72; // rdx
  uint32_t v73; // ecx
  char v74; // al
  std::_Rb_tree_const_iterator<unsigned int>::reference v75; // rax
  _DWORD *v76; // rdx
  const GachaExcelConfigMgr *p_gacha_pool_id; // rdi
  uint32_t v78; // edx
  common::milog::MiLogStream *v79; // rax
  common::milog::MiLogStream *v80; // rax
  common::milog::MiLogStream *v81; // r14
  common::milog::MiLogStream *v82; // rax
  common::milog::MiLogStream *v83; // rax
  common::milog::MiLogStream *v84; // rax
  common::milog::MiLogStream *v85; // rax
  common::milog::MiLogStream *v86; // rax
  data::GachaPoolExcelConfig *v87; // rax
  common::milog::MiLogStream *v88; // rax
  common::milog::MiLogStream *v89; // rax
  common::milog::MiLogStream *v90; // r14
  common::milog::MiLogStream *v91; // rax
  common::milog::MiLogStream *v92; // rax
  common::milog::MiLogStream *v93; // rax
  common::milog::MiLogStream *v94; // rax
  common::milog::MiLogStream *v95; // r14
  __int64 v96; // rsi
  __int64 v97; // rdx
  common::milog::MiLogStream *v98; // rax
  common::milog::MiLogStream *v99; // rax
  common::milog::MiLogStream *v100; // r14
  common::milog::MiLogStream *v101; // rax
  common::milog::MiLogStream *v102; // rax
  common::milog::MiLogStream *v103; // rax
  common::milog::MiLogStream *v104; // rax
  common::milog::MiLogStream *v105; // rax
  common::milog::MiLogStream *v106; // rax
  common::milog::MiLogStream *v107; // rax
  common::milog::MiLogStream *v108; // rax
  common::milog::MiLogStream *v109; // rax
  common::milog::MiLogStream *v110; // rax
  common::milog::MiLogStream *v111; // rax
  common::milog::MiLogStream *v112; // rax
  common::milog::MiLogStream *v113; // rax
  common::milog::MiLogStream *v114; // rcx
  const data::GachaGuaranteeParentTypeWeightWithChilds *M_current; // r15
  std::vector<data::GachaGuaranteeParentTypeWeightWithChilds>::const_iterator v116; // rax
  common::milog::MiLogStream *v117; // rax
  common::milog::MiLogStream *v118; // rax
  common::milog::MiLogStream *v119; // rax
  common::milog::MiLogStream *v120; // rax
  __gnu_cxx::__normal_iterator<const data::GachaGuaranteeParentTypeWeightWithChilds*,std::vector<data::GachaGuaranteeParentTypeWeightWithChilds> >::pointer v121; // rax
  common::milog::MiLogStream *v122; // r14
  int v123; // r14d
  std::pair<data::GachaItemType,unsigned int> *v124; // rax
  std::pair<data::GachaItemType,unsigned int> *v125; // rdx
  std::vector<data::GachaGuaranteeTypeWeight>::size_type v126; // r14
  common::milog::MiLogStream *v127; // r14
  common::milog::MiLogStream *v128; // rax
  common::milog::MiLogStream *v129; // rax
  common::milog::MiLogStream *v130; // rax
  common::milog::MiLogStream *v131; // r14
  std::vector<data::GachaGuaranteeTypeWeight>::reference v132; // rax
  common::milog::MiLogStream *v133; // rax
  common::milog::MiLogStream *v134; // rax
  common::milog::MiLogStream *v135; // rax
  common::milog::MiLogStream *v136; // rax
  common::milog::MiLogStream *v137; // r14
  common::milog::MiLogStream *v138; // rax
  common::milog::MiLogStream *v139; // r14
  GachaExcelConfigMgr *v140; // rsi
  common::milog::MiLogStream *v141; // r14
  common::milog::MiLogStream *v142; // rax
  common::milog::MiLogStream *v143; // rax
  common::milog::MiLogStream *v144; // rax
  common::milog::MiLogStream *v145; // r14
  common::milog::MiLogStream *v146; // rax
  common::milog::MiLogStream *v147; // r14
  common::milog::MiLogStream *v148; // rax
  common::milog::MiLogStream *v149; // rax
  common::milog::MiLogStream *v150; // r14
  common::milog::MiLogStream *v151; // rax
  common::milog::MiLogStream *v152; // rax
  common::milog::MiLogStream *v153; // rax
  common::milog::MiLogStream *v154; // r14
  common::milog::MiLogStream *v155; // rax
  common::milog::MiLogStream *v156; // r14
  common::milog::MiLogStream *v157; // rax
  common::milog::MiLogStream *v158; // rax
  common::milog::MiLogStream *v159; // rax
  common::milog::MiLogStream *v160; // rax
  common::milog::MiLogStream *v161; // r14
  common::milog::MiLogStream *v162; // rax
  common::milog::MiLogStream *v163; // r14
  common::milog::MiLogStream *v164; // rax
  common::milog::MiLogStream *v165; // rax
  common::milog::MiLogStream *v166; // rax
  common::milog::MiLogStream *v167; // rax
  common::milog::MiLogStream *v168; // rax
  common::milog::MiLogStream *v169; // rax
  common::milog::MiLogStream *v170; // r14
  std::vector<data::GachaPoolExcelConfig>::size_type v171; // r14
  common::milog::MiLogStream *v172; // r14
  common::milog::MiLogStream *v173; // rax
  common::milog::MiLogStream *v174; // rax
  common::milog::MiLogStream *v175; // rax
  common::milog::MiLogStream *v176; // r14
  const data::GachaPoolExcelConfig *v177; // rax
  common::milog::MiLogStream *v178; // rax
  common::milog::MiLogStream *v179; // rax
  common::milog::MiLogStream *v180; // r14
  common::milog::MiLogStream *v181; // rax
  common::milog::MiLogStream *v182; // r14
  common::milog::MiLogStream *v183; // rax
  common::milog::MiLogStream *v184; // rax
  common::milog::MiLogStream *v185; // rax
  common::milog::MiLogStream *v186; // rax
  common::milog::MiLogStream *v187; // rax
  double prob; // [rsp+8h] [rbp-338h]
  signed int selected_parent_type; // [rsp+48h] [rbp-2F8h]
  data::GachaItemType selected_item_type; // [rsp+4Ch] [rbp-2F4h]
  std::vector<data::GachaGuaranteeParentTypeWeight>::iterator __for_begin; // [rsp+50h] [rbp-2F0h] BYREF
  std::vector<data::GachaPoolExcelConfig>::iterator __for_end; // [rsp+58h] [rbp-2E8h] BYREF
  const data::GachaRuleExcelConfig *gacha_rule_config_ptr; // [rsp+60h] [rbp-2E0h]
  const data::GachaPoolExcelConfig *gacha_up_item_config_ptr; // [rsp+68h] [rbp-2D8h]
  std::vector<data::GachaGuaranteeParentTypeWeight> *__for_range; // [rsp+70h] [rbp-2D0h]
  const data::GachaGuaranteeParentTypeWeight *gacha_parent_type_weight; // [rsp+78h] [rbp-2C8h]
  const data::GachaPoolExcelConfig *wish_result_config_ptr; // [rsp+80h] [rbp-2C0h]
  const data::GachaUpConfig *up_config_ptr; // [rsp+88h] [rbp-2B8h]
  const std::set<unsigned int> *__for_range_0; // [rsp+90h] [rbp-2B0h]
  const data::GachaPoolExcelConfig *gacha_up_item_config_ptr_0; // [rsp+98h] [rbp-2A8h]
  std::vector<data::GachaGuaranteeTypeWeight> *__for_range_1; // [rsp+A0h] [rbp-2A0h]
  const data::GachaGuaranteeTypeWeight *gacha_type_weight; // [rsp+A8h] [rbp-298h]
  std::vector<data::GachaPoolExcelConfig> *__for_range_2; // [rsp+B0h] [rbp-290h]
  const data::GachaPoolExcelConfig *gacha_item_config; // [rsp+B8h] [rbp-288h]
  std::shared_ptr<Config> v212; // [rsp+C0h] [rbp-280h] BYREF
  common::milog::MiLogStream v213; // [rsp+D0h] [rbp-270h] BYREF
  char v214[592]; // [rsp+F0h] [rbp-250h] BYREF

  v9 = (unsigned __int64)v214;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v10 = __asan_stack_malloc_4(544LL);
    if ( v10 )
      v9 = v10;
  }
  *(_QWORD *)v9 = 1102416563LL;
  *(_QWORD *)(v9 + 8) = "14 48 4 26 gacha_dynamic_up_base:1669 64 4 22 gacha_no_up_times:1670 80 4 20 dynamic_up_prob:167"
                        "1 96 4 19 up_prob_result:1677 112 4 15 select_idx:1804 128 4 12 item_id:1686 144 4 18 gacha_rule"
                        "_id:1569 160 8 9 iter:1721 192 8 26 gacha_item_type_times:1751 224 24 19 gacha_pool_vec:1664 288"
                        " 24 24 gacha_item_type_vec:1716 352 24 31 gacha_item_type_weight_vec:1741 416 24 38 gacha_item_p"
                        "arent_type_weight_vec:1606 480 32 22 gacha_item_config:1695";
  *(_QWORD *)(v9 + 16) = PlayerGachaComp::calcGachaDrop;
  v11 = (_DWORD *)(v9 >> 3);
  v11[536862720] = -235802127;
  v11[536862721] = -234556943;
  v11[536862722] = -234556924;
  v11[536862723] = -234556924;
  v11[536862724] = -234556924;
  v11[536862725] = -218959360;
  v11[536862726] = -218959360;
  v11[536862727] = -234881024;
  v11[536862728] = -218959118;
  v11[536862729] = -234881024;
  v11[536862730] = -218959118;
  v11[536862731] = -234881024;
  v11[536862732] = -218959118;
  v11[536862733] = -234881024;
  v11[536862734] = -218959118;
  v11[536862736] = -202116109;
  *(_DWORD *)(v9 + 144) = gacha_rule_id;
  gacha_rule_config_ptr = 0LL;
  v12 = (int (**)(...))(&`vtable for'data::GachaPoolExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
    __asan_report_store8(retstr, this);
  retstr->_vptr_GachaPoolExcelConfig = v12;
  if ( *(_BYTE *)(((unsigned __int64)&retstr->pool_root_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&retstr->pool_root_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&retstr->pool_root_id, this, &retstr->pool_root_id);
  }
  retstr->pool_root_id = 0;
  v13 = (((_BYTE)retstr + 12) & 7u) + 3;
  v14 = (*(_BYTE *)(((unsigned __int64)&retstr->item_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)retstr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&retstr->item_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v14 )
    __asan_report_store4(&retstr->item_id, v13, v14);
  retstr->item_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&retstr->gacha_item_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&retstr->gacha_item_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&retstr->gacha_item_type, v13, &retstr->gacha_item_type);
  }
  retstr->gacha_item_type = GACHA_ITEM_INVALID;
  v15 = (((_BYTE)retstr + 20) & 7u) + 3;
  v16 = (*(_BYTE *)(((unsigned __int64)&retstr->weight >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)retstr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&retstr->weight >> 3) + 0x7FFF8000));
  if ( (_BYTE)v16 )
    __asan_report_store4(&retstr->weight, v15, v16);
  retstr->weight = 0;
  if ( *(_BYTE *)(((unsigned __int64)&retstr->flash_card_prob >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&retstr->flash_card_prob >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&retstr->flash_card_prob, v15, &retstr->flash_card_prob);
  }
  retstr->flash_card_prob = 0;
  if ( *(_DWORD *)(v9 + 144) )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v212);
    v17 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v212);
    gacha_rule_config_ptr = data::GachaExcelConfigMgrBase::findGachaRuleExcelConfig(
                              &v17->design_config.txt_config_mgr.gacha_config_mgr,
                              *(_DWORD *)(v9 + 144));
    std::shared_ptr<Config>::~shared_ptr(&v212);
    if ( !gacha_rule_config_ptr )
    {
      common::milog::MiLogStream::create(
        &v213,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/gacha/player_gacha_comp.cpp",
        "calcGachaDrop",
        1579);
      v18 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
              &v213,
              (const char (*)[48])"findGachaRuleExcelConfig failed, gacha_rule_id:");
      v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v18,
              (const unsigned int *)(v9 + 144));
      v20 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v19, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        *(double *)a7.m128i_i64 = __asan_report_load8(&this->player_);
      *(_DWORD *)(v9 + 128) = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)(v9 + 128));
      common::milog::MiLogStream::~MiLogStream(&v213);
    }
  }
  if ( gacha_rule_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&gacha_rule_config_ptr->gacha_guarantee_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&gacha_rule_config_ptr->gacha_guarantee_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&gacha_rule_config_ptr->gacha_guarantee_type);
    }
    if ( gacha_rule_config_ptr->gacha_guarantee_type == GACHA_GUARANTEE_SPECIFIED_COUNT )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v212);
      p_gacha_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v212)->design_config.txt_config_mgr.gacha_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&gacha_rule_config_ptr->gacha_guarantee_item >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&gacha_rule_config_ptr->gacha_guarantee_item >> 3) + 0x7FFF8000) <= 3 )
      {
        p_gacha_config_mgr = (const GachaExcelConfigMgr *)&gacha_rule_config_ptr->gacha_guarantee_item;
        __asan_report_load4(&gacha_rule_config_ptr->gacha_guarantee_item);
      }
      gacha_guarantee_item = gacha_rule_config_ptr->gacha_guarantee_item;
      if ( *(_BYTE *)(((unsigned __int64)&schedule_config->gacha_pool_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&schedule_config->gacha_pool_id >> 3) + 0x7FFF8000) <= 3 )
      {
        p_gacha_config_mgr = (const GachaExcelConfigMgr *)&schedule_config->gacha_pool_id;
        __asan_report_load4(&schedule_config->gacha_pool_id);
      }
      gacha_up_item_config_ptr = GachaExcelConfigMgr::findGachaItemInPool(
                                   p_gacha_config_mgr,
                                   schedule_config->gacha_pool_id,
                                   gacha_guarantee_item);
      std::shared_ptr<Config>::~shared_ptr(&v212);
      if ( gacha_up_item_config_ptr )
      {
        data::GachaPoolExcelConfig::operator=(retstr, gacha_up_item_config_ptr);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v213,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/gacha/player_gacha_comp.cpp",
          "calcGachaDrop",
          1588);
        v23 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                &v213,
                (const char (*)[41])"findGachaItemInPool failed, schedule_id:");
        v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &schedule_config->schedule_id);
        v25 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v24, (const char (*)[10])" pool_id:");
        v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v25,
                &schedule_config->gacha_pool_id);
        v27 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v26, (const char (*)[10])" item_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
          v27,
          &gacha_rule_config_ptr->gacha_guarantee_item);
        common::milog::MiLogStream::~MiLogStream(&v213);
      }
      goto LABEL_177;
    }
  }
  selected_parent_type = 0;
  selected_item_type = GACHA_ITEM_INVALID;
  if ( gacha_rule_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&gacha_rule_config_ptr->gacha_guarantee_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&gacha_rule_config_ptr->gacha_guarantee_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&gacha_rule_config_ptr->gacha_guarantee_type);
    }
    if ( gacha_rule_config_ptr->gacha_guarantee_type == GACHA_GUARANTEE_N_COUNT
      || gacha_rule_config_ptr->gacha_guarantee_type == GACHA_GUARANTEE_N_COUNT_WITH_CHILDS )
    {
      if ( *(_BYTE *)(((unsigned __int64)&gacha_rule_config_ptr->gacha_guarantee_item_parent_type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)gacha_rule_config_ptr + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gacha_rule_config_ptr->gacha_guarantee_item_parent_type >> 3)
                                                                              + 0x7FFF8000) )
      {
        __asan_report_load4(&gacha_rule_config_ptr->gacha_guarantee_item_parent_type);
      }
      selected_parent_type = gacha_rule_config_ptr->gacha_guarantee_item_parent_type;
      v28 = PlayerGachaComp::gachaWishItem(this, schedule_config, gacha_record, selected_parent_type);
LABEL_77:
      wish_result_config_ptr = v28;
      if ( v28 )
      {
        data::GachaPoolExcelConfig::operator=(retstr, wish_result_config_ptr);
        v57 = (unsigned __int8)is_wish_triggered & 7;
        v58 = (*(_BYTE *)(((unsigned __int64)is_wish_triggered >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v57 >= *(_BYTE *)(((unsigned __int64)is_wish_triggered >> 3) + 0x7FFF8000));
        if ( (_BYTE)v58 )
          __asan_report_store1(is_wish_triggered, v57, v58);
        *is_wish_triggered = 1;
        common::milog::MiLogStream::create(
          &v213,
          &common::milog::MiLogDefault::default_log_obj_,
          2u,
          "./src/player/gacha/player_gacha_comp.cpp",
          "calcGachaDrop",
          1659);
        v59 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(&v213, (const char (*)[12])"gacha_type:");
        v60 = common::milog::MiLogStream::operator<<<data::GachaType,(data::GachaType*)0>(
                v59,
                &schedule_config->gacha_type);
        v61 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                v60,
                (const char (*)[16])" wish_progress:");
        v62 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v61, &gacha_record->wish_progress);
        v63 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                v62,
                (const char (*)[22])" select wish_item_id:");
        v64 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v63, &gacha_record->wish_item_id);
        v65 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v64, (const char (*)[6])" uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        *(_DWORD *)(v9 + 128) = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v65, (const unsigned int *)(v9 + 128));
        common::milog::MiLogStream::~MiLogStream(&v213);
        goto LABEL_177;
      }
      std::vector<data::GachaPoolExcelConfig>::vector((std::vector<data::GachaPoolExcelConfig> *const)(v9 + 224));
      up_config_ptr = data::GachaScheduleConfig::findGachaUpConfig(
                        schedule_config,
                        (data::GachaItemParentType)selected_parent_type);
      if ( up_config_ptr && !std::set<unsigned int>::empty(&up_config_ptr->item_set) )
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v212);
        v67 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v212);
        *(float *)a7.m128i_i32 = ConstValueExcelConfigMgr::getGachaDynamicUpBase(&v67->design_config.txt_config_mgr.const_value_config_mgr);
        *(_DWORD *)(v9 + 48) = _mm_cvtsi128_si32(a7);
        std::shared_ptr<Config>::~shared_ptr(&v212);
        *(_DWORD *)(v9 + 64) = GachaRecord::getGachaNoUpTimes(gacha_record, selected_parent_type);
        if ( *(_BYTE *)(((unsigned __int64)&up_config_ptr->prob >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)up_config_ptr + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&up_config_ptr->prob >> 3)
                                                                      + 0x7FFF8000) )
        {
          __asan_report_load4(&up_config_ptr->prob);
        }
        prob = (float)(int)up_config_ptr->prob;
        v68 = std::pow<float,unsigned int>(*(float *)(v9 + 48), *(_DWORD *)(v9 + 64)) * prob;
        *(float *)(v9 + 80) = v68;
        if ( *(float *)(v9 + 80) > 1000.0 )
          *(_DWORD *)(v9 + 80) = 1148846080;
        *(_DWORD *)(v9 + 96) = std::lround(*(float *)(v9 + 80));
        v71 = 999LL;
        *(_DWORD *)(v9 + 112) = common::tools::RandomUtils::rand<int>(0, 999);
        v69 = *(_DWORD *)(v9 + 64);
        v70 = *(_BYTE *)(((unsigned __int64)&gacha_log_context->gacha_no_up_times >> 3) + 0x7FFF8000);
        LOBYTE(v71) = v70 != 0;
        v72 = (v70 != 0) & (unsigned __int8)((char)((((_BYTE)gacha_log_context + 52) & 7) + 3) >= v70);
        if ( (_BYTE)v72 )
          __asan_report_store4(&gacha_log_context->gacha_no_up_times, v71, v72);
        gacha_log_context->gacha_no_up_times = v69;
        v73 = *(_DWORD *)(v9 + 96);
        v74 = *(_BYTE *)(((unsigned __int64)&gacha_log_context->gacha_up_prob >> 3) + 0x7FFF8000);
        if ( v74 != 0 && v74 <= 3 )
        {
          LOBYTE(v71) = v74 != 0;
          __asan_report_store4(&gacha_log_context->gacha_up_prob, v71, &gacha_log_context->gacha_up_prob);
        }
        gacha_log_context->gacha_up_prob = v73;
        if ( *(_DWORD *)(v9 + 112) < *(_DWORD *)(v9 + 96) )
        {
          __for_range_0 = &up_config_ptr->item_set;
          __for_end._M_current = (data::GachaPoolExcelConfig *)std::set<unsigned int>::begin(&up_config_ptr->item_set)._M_node;
          *(std::set<unsigned int>::iterator *)(v9 + 160) = std::set<unsigned int>::end(__for_range_0);
          while ( std::operator!=(
                    (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_end,
                    (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v9 + 160)) )
          {
            v75 = std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)&__for_end);
            v76 = v75;
            if ( *(_BYTE *)(((unsigned __int64)v75 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v75 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v75 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v75);
            }
            *(_DWORD *)(v9 + 128) = *v76;
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)&v212);
            p_gacha_pool_id = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v212)->design_config.txt_config_mgr.gacha_config_mgr;
            v78 = *(_DWORD *)(v9 + 128);
            if ( *(_BYTE *)(((unsigned __int64)&schedule_config->gacha_pool_id >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&schedule_config->gacha_pool_id >> 3) + 0x7FFF8000) <= 3 )
            {
              p_gacha_pool_id = (const GachaExcelConfigMgr *)&schedule_config->gacha_pool_id;
              __asan_report_load4(&schedule_config->gacha_pool_id);
            }
            gacha_up_item_config_ptr_0 = GachaExcelConfigMgr::findGachaItemInPool(
                                           p_gacha_pool_id,
                                           schedule_config->gacha_pool_id,
                                           v78);
            std::shared_ptr<Config>::~shared_ptr(&v212);
            if ( gacha_up_item_config_ptr_0 )
            {
              data::GachaPoolExcelConfig::GachaPoolExcelConfig(
                (data::GachaPoolExcelConfig *const)(v9 + 480),
                gacha_up_item_config_ptr_0);
              *(_DWORD *)(v9 + 492) = *(_DWORD *)(v9 + 128);
              *(_DWORD *)(v9 + 500) = 10;
              v87 = std::move<data::GachaPoolExcelConfig &>((data::GachaPoolExcelConfig *)(v9 + 480));
              std::vector<data::GachaPoolExcelConfig>::emplace_back<data::GachaPoolExcelConfig>(
                (std::vector<data::GachaPoolExcelConfig> *const)(v9 + 224),
                v87,
                v87);
              common::milog::MiLogStream::create(
                &v213,
                &common::milog::MiLogDefault::default_log_obj_,
                2u,
                "./src/player/gacha/player_gacha_comp.cpp",
                "calcGachaDrop",
                1699);
              v88 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                      &v213,
                      (const char (*)[22])"UpConfig schedule_id:");
              v89 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v88,
                      &schedule_config->schedule_id);
              v90 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                      v89,
                      (const char (*)[19])" item_parent_type:");
              *(_QWORD *)(v9 + 192) = data::enumValToStr((data::GachaItemParentType)selected_parent_type);
              v91 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(
                      v90,
                      (const char *const *)(v9 + 192));
              v92 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                      v91,
                      (const char (*)[10])" item_id:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v92,
                (const unsigned int *)(v9 + 128));
              common::milog::MiLogStream::~MiLogStream(&v213);
              data::GachaPoolExcelConfig::~GachaPoolExcelConfig((data::GachaPoolExcelConfig *const)(v9 + 480));
            }
            else
            {
              common::milog::MiLogStream::create(
                &v213,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/player/gacha/player_gacha_comp.cpp",
                "calcGachaDrop",
                1691);
              v79 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                      &v213,
                      (const char (*)[22])"UpConfig schedule_id:");
              v80 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v79,
                      &schedule_config->schedule_id);
              v81 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                      v80,
                      (const char (*)[19])" item_parent_type:");
              *(_QWORD *)(v9 + 192) = data::enumValToStr((data::GachaItemParentType)selected_parent_type);
              v82 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(
                      v81,
                      (const char *const *)(v9 + 192));
              v83 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                      v82,
                      (const char (*)[10])" item_id:");
              v84 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v83,
                      (const unsigned int *)(v9 + 128));
              v85 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                      v84,
                      (const char (*)[10])" pool_id:");
              v86 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v85,
                      &schedule_config->gacha_pool_id);
              common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                v86,
                (const char (*)[23])" item config not found");
              common::milog::MiLogStream::~MiLogStream(&v213);
            }
            std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)&__for_end);
          }
          if ( std::vector<data::GachaPoolExcelConfig>::empty((const std::vector<data::GachaPoolExcelConfig> *const)(v9 + 224)) )
          {
            common::milog::MiLogStream::create(
              &v213,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/player/gacha/player_gacha_comp.cpp",
              "calcGachaDrop",
              1704);
            v93 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                    &v213,
                    (const char (*)[43])"Up Trigger but item is empty, schedule_id:");
            v94 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v93,
                    &schedule_config->schedule_id);
            v95 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                    v94,
                    (const char (*)[19])" item_parent_type:");
            *(_QWORD *)(v9 + 192) = data::enumValToStr((data::GachaItemParentType)selected_parent_type);
            common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v95, (const char *const *)(v9 + 192));
            common::milog::MiLogStream::~MiLogStream(&v213);
          }
          v96 = (unsigned __int8)is_gacha_up_triggered & 7;
          v97 = (*(_BYTE *)(((unsigned __int64)is_gacha_up_triggered >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v96 >= *(_BYTE *)(((unsigned __int64)is_gacha_up_triggered >> 3) + 0x7FFF8000));
          if ( (_BYTE)v97 )
            __asan_report_store1(is_gacha_up_triggered, v96, v97);
          *is_gacha_up_triggered = 1;
        }
        common::milog::MiLogStream::create(
          &v213,
          &common::milog::MiLogDefault::default_log_obj_,
          2u,
          "./src/player/gacha/player_gacha_comp.cpp",
          "calcGachaDrop",
          1708);
        v98 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                &v213,
                (const char (*)[22])"UpConfig schedule_id:");
        v99 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v98, &schedule_config->schedule_id);
        v100 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                 v99,
                 (const char (*)[19])" item_parent_type:");
        *(_QWORD *)(v9 + 192) = data::enumValToStr((data::GachaItemParentType)selected_parent_type);
        v101 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(
                 v100,
                 (const char *const *)(v9 + 192));
        v102 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v101, (const char (*)[12])" up_random:");
        v103 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                 v102,
                 (const unsigned int *)(v9 + 112));
        v104 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                 v103,
                 (const char (*)[17])" up_config_prob:");
        v105 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v104, &up_config_ptr->prob);
        v106 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v105, (const char (*)[10])" up_base:");
        v107 = common::milog::MiLogStream::operator<<<float,(float *)0>(v106, (const float *)(v9 + 48));
        v108 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                 v107,
                 (const char (*)[14])" no_up_times:");
        v109 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                 v108,
                 (const unsigned int *)(v9 + 64));
        v110 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                 v109,
                 (const char (*)[18])" dynamic_up_prob:");
        v111 = common::milog::MiLogStream::operator<<<float,(float *)0>(v110, (const float *)(v9 + 80));
        v112 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                 v111,
                 (const char (*)[17])" up_prob_result:");
        v113 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                 v112,
                 (const unsigned int *)(v9 + 96));
        v114 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                 v113,
                 (const char (*)[23])"is_gacha_up_triggered:");
        if ( *(_BYTE *)(((unsigned __int64)is_gacha_up_triggered >> 3) + 0x7FFF8000) != 0
          && ((unsigned __int8)is_gacha_up_triggered & 7) >= *(_BYTE *)(((unsigned __int64)is_gacha_up_triggered >> 3)
                                                                      + 0x7FFF8000) )
        {
          __asan_report_load1(is_gacha_up_triggered);
        }
        common::milog::MiLogStream::operator<<(v114, *is_gacha_up_triggered);
        common::milog::MiLogStream::~MiLogStream(&v213);
      }
      if ( !std::vector<data::GachaPoolExcelConfig>::empty((const std::vector<data::GachaPoolExcelConfig> *const)(v9 + 224)) )
      {
LABEL_158:
        if ( std::vector<data::GachaPoolExcelConfig>::empty((const std::vector<data::GachaPoolExcelConfig> *const)(v9 + 224)) )
        {
          common::milog::MiLogStream::create(
            &v213,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/gacha/player_gacha_comp.cpp",
            "calcGachaDrop",
            1790);
          v150 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                   &v213,
                   (const char (*)[27])"gacha_pool_vec empty, uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          *(_DWORD *)(v9 + 128) = Player::getUid(this->player_);
          v151 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                   v150,
                   (const unsigned int *)(v9 + 128));
          v152 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v151, (const char (*)[10])" pool_id:");
          v153 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                   v152,
                   &schedule_config->gacha_pool_id);
          v154 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                   v153,
                   (const char (*)[19])" item_parent_type:");
          *(_QWORD *)(v9 + 160) = data::enumValToStr((data::GachaItemParentType)selected_parent_type);
          v155 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(
                   v154,
                   (const char *const *)(v9 + 160));
          v156 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                   v155,
                   (const char (*)[12])" item_type:");
          *(_QWORD *)(v9 + 192) = data::enumValToStr(selected_item_type);
          v157 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(
                   v156,
                   (const char *const *)(v9 + 192));
          v158 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                   v157,
                   (const char (*)[14])" schedule_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v158, &schedule_config->schedule_id);
          common::milog::MiLogStream::~MiLogStream(&v213);
        }
        else
        {
          __for_range_2 = (std::vector<data::GachaPoolExcelConfig> *)(v9 + 224);
          __for_begin._M_current = (data::GachaGuaranteeParentTypeWeight *)std::vector<data::GachaPoolExcelConfig>::begin((std::vector<data::GachaPoolExcelConfig> *const)(v9 + 224))._M_current;
          __for_end._M_current = std::vector<data::GachaPoolExcelConfig>::end(__for_range_2)._M_current;
          while ( __gnu_cxx::operator!=<data::GachaPoolExcelConfig *,std::vector<data::GachaPoolExcelConfig>>(
                    (const __gnu_cxx::__normal_iterator<data::GachaPoolExcelConfig*,std::vector<data::GachaPoolExcelConfig> > *)&__for_begin,
                    &__for_end) )
          {
            gacha_item_config = __gnu_cxx::__normal_iterator<data::GachaPoolExcelConfig *,std::vector<data::GachaPoolExcelConfig>>::operator*((const __gnu_cxx::__normal_iterator<data::GachaPoolExcelConfig*,std::vector<data::GachaPoolExcelConfig> > *const)&__for_begin);
            common::milog::MiLogStream::create(
              &v213,
              &common::milog::MiLogDefault::default_log_obj_,
              2u,
              "./src/player/gacha/player_gacha_comp.cpp",
              "calcGachaDrop",
              1799);
            v159 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                     &v213,
                     (const char (*)[23])"GachaPool schedule_id:");
            v160 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                     v159,
                     &schedule_config->schedule_id);
            v161 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                     v160,
                     (const char (*)[19])" item_parent_type:");
            *(_QWORD *)(v9 + 160) = data::enumValToStr((data::GachaItemParentType)selected_parent_type);
            v162 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(
                     v161,
                     (const char *const *)(v9 + 160));
            v163 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                     v162,
                     (const char (*)[12])" item_type:");
            *(_QWORD *)(v9 + 192) = data::enumValToStr(selected_item_type);
            v164 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(
                     v163,
                     (const char *const *)(v9 + 192));
            v165 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                     v164,
                     (const char (*)[10])" pool_id:");
            v166 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                     v165,
                     &schedule_config->gacha_pool_id);
            v167 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                     v166,
                     (const char (*)[10])" item_id:");
            v168 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                     v167,
                     &gacha_item_config->item_id);
            v169 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v168, (const char (*)[9])" weight:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v169, &gacha_item_config->weight);
            common::milog::MiLogStream::~MiLogStream(&v213);
            __gnu_cxx::__normal_iterator<data::GachaPoolExcelConfig *,std::vector<data::GachaPoolExcelConfig>>::operator++((__gnu_cxx::__normal_iterator<data::GachaPoolExcelConfig*,std::vector<data::GachaPoolExcelConfig> > *const)&__for_begin);
          }
          *(_DWORD *)(v9 + 112) = 0;
          if ( common::tools::RandomUtils::weightSelectOne<data::GachaPoolExcelConfig,unsigned int data::GachaPoolExcelConfig::*>(
                 (const std::vector<data::GachaPoolExcelConfig> *)(v9 + 224),
                 (uint32_t *)(v9 + 112),
                 (unsigned int *)0x14,
                 0) )
          {
            common::milog::MiLogStream::create(
              &v213,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/player/gacha/player_gacha_comp.cpp",
              "calcGachaDrop",
              1807);
            v170 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                     &v213,
                     (const char (*)[29])"weightSelectOne failed, uid:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
          }
          else
          {
            v171 = *(unsigned int *)(v9 + 112);
            if ( v171 >= std::vector<data::GachaPoolExcelConfig>::size((const std::vector<data::GachaPoolExcelConfig> *const)(v9 + 224)) )
            {
              common::milog::MiLogStream::create(
                &v213,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/player/gacha/player_gacha_comp.cpp",
                "calcGachaDrop",
                1812);
              v172 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                       &v213,
                       (const char (*)[29])"weightSelectOne failed, uid:");
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8(&this->player_);
              *(_DWORD *)(v9 + 128) = Player::getUid(this->player_);
              v173 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                       v172,
                       (const unsigned int *)(v9 + 128));
              v174 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                       v173,
                       (const char (*)[13])" select_idx:");
              v175 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                       v174,
                       (const unsigned int *)(v9 + 112));
              v176 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v175, (const char (*)[7])" size:");
              *(_QWORD *)(v9 + 192) = std::vector<data::GachaPoolExcelConfig>::size((const std::vector<data::GachaPoolExcelConfig> *const)(v9 + 224));
              common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                v176,
                (const unsigned __int64 *)(v9 + 192));
              common::milog::MiLogStream::~MiLogStream(&v213);
              goto LABEL_176;
            }
            v177 = std::vector<data::GachaPoolExcelConfig>::operator[](
                     (std::vector<data::GachaPoolExcelConfig> *const)(v9 + 224),
                     *(unsigned int *)(v9 + 112));
            data::GachaPoolExcelConfig::operator=(retstr, v177);
            common::milog::MiLogStream::create(
              &v213,
              &common::milog::MiLogDefault::default_log_obj_,
              2u,
              "./src/player/gacha/player_gacha_comp.cpp",
              "calcGachaDrop",
              1818);
            v178 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                     &v213,
                     (const char (*)[23])"GachaItem schedule_id:");
            v179 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                     v178,
                     &schedule_config->schedule_id);
            v180 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                     v179,
                     (const char (*)[19])" item_parent_type:");
            *(_QWORD *)(v9 + 160) = data::enumValToStr((data::GachaItemParentType)selected_parent_type);
            v181 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(
                     v180,
                     (const char *const *)(v9 + 160));
            v182 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                     v181,
                     (const char (*)[12])" item_type:");
            *(_QWORD *)(v9 + 192) = data::enumValToStr(selected_item_type);
            v183 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(
                     v182,
                     (const char *const *)(v9 + 192));
            v184 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                     v183,
                     (const char (*)[10])" pool_id:");
            v185 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                     v184,
                     &schedule_config->gacha_pool_id);
            v186 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                     v185,
                     (const char (*)[10])" item_id:");
            v187 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v186, &retstr->item_id);
            v170 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v187, (const char (*)[6])" uid:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
          }
          *(_DWORD *)(v9 + 128) = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v170, (const unsigned int *)(v9 + 128));
          common::milog::MiLogStream::~MiLogStream(&v213);
        }
LABEL_176:
        std::vector<data::GachaPoolExcelConfig>::~vector((std::vector<data::GachaPoolExcelConfig> *const)(v9 + 224));
        goto LABEL_177;
      }
      std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v9 + 288));
      if ( gacha_rule_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&gacha_rule_config_ptr->gacha_guarantee_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&gacha_rule_config_ptr->gacha_guarantee_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&gacha_rule_config_ptr->gacha_guarantee_type);
        }
        if ( gacha_rule_config_ptr->gacha_guarantee_type == GACHA_GUARANTEE_LOOP_COUNT_WITH_CHILDS )
        {
          M_current = std::vector<data::GachaGuaranteeParentTypeWeightWithChilds>::end(&gacha_rule_config_ptr->gacha_guarantee_parent_type_weight_childs_vec)._M_current;
          v116._M_current = std::vector<data::GachaGuaranteeParentTypeWeightWithChilds>::begin(&gacha_rule_config_ptr->gacha_guarantee_parent_type_weight_childs_vec)._M_current;
          *(__gnu_cxx::__normal_iterator<const data::GachaGuaranteeParentTypeWeightWithChilds*,std::vector<data::GachaGuaranteeParentTypeWeightWithChilds> > *)(v9 + 160) = std::find_if<__gnu_cxx::__normal_iterator<data::GachaGuaranteeParentTypeWeightWithChilds const*,std::vector<data::GachaGuaranteeParentTypeWeightWithChilds>>,PlayerGachaComp::calcGachaDrop(data::GachaScheduleConfig const&,GachaRecord &,unsigned int,bool &,bool &,GachaStatLogContext &)::{lambda(__gnu_cxx::__normal_iterator<data::GachaGuaranteeParentTypeWeightWithChilds const*,std::vector<data::GachaGuaranteeParentTypeWeightWithChilds>> const&)#1}>(v116, (__gnu_cxx::__normal_iterator<const data::GachaGuaranteeParentTypeWeightWithChilds*,std::vector<data::GachaGuaranteeParentTypeWeightWithChilds> >)M_current, (PlayerGachaComp::calcGachaDrop::<lambda(const auto:37&)>)selected_parent_type);
          *(std::vector<data::GachaGuaranteeParentTypeWeightWithChilds>::const_iterator *)(v9 + 192) = std::vector<data::GachaGuaranteeParentTypeWeightWithChilds>::end(&gacha_rule_config_ptr->gacha_guarantee_parent_type_weight_childs_vec);
          if ( __gnu_cxx::operator==<data::GachaGuaranteeParentTypeWeightWithChilds const*,std::vector<data::GachaGuaranteeParentTypeWeightWithChilds>>(
                 (const __gnu_cxx::__normal_iterator<const data::GachaGuaranteeParentTypeWeightWithChilds*,std::vector<data::GachaGuaranteeParentTypeWeightWithChilds> > *)(v9 + 160),
                 (const __gnu_cxx::__normal_iterator<const data::GachaGuaranteeParentTypeWeightWithChilds*,std::vector<data::GachaGuaranteeParentTypeWeightWithChilds> > *)(v9 + 192)) )
          {
            common::milog::MiLogStream::create(
              &v213,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/player/gacha/player_gacha_comp.cpp",
              "calcGachaDrop",
              1728);
            v117 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                     &v213,
                     (const char (*)[19])"Gacha schedule_id:");
            v118 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                     v117,
                     &schedule_config->schedule_id);
            v119 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                     v118,
                     (const char (*)[27])" guarantee_config rule_id:");
            v120 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                     v119,
                     (const unsigned int *)(v9 + 144));
            common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v120, (const char (*)[11])off_2526D700);
            common::milog::MiLogStream::~MiLogStream(&v213);
          }
          else
          {
            v121 = __gnu_cxx::__normal_iterator<data::GachaGuaranteeParentTypeWeightWithChilds const*,std::vector<data::GachaGuaranteeParentTypeWeightWithChilds>>::operator->((const __gnu_cxx::__normal_iterator<const data::GachaGuaranteeParentTypeWeightWithChilds*,std::vector<data::GachaGuaranteeParentTypeWeightWithChilds> > *const)(v9 + 160));
            std::vector<unsigned int>::operator=((std::vector<unsigned int> *const)(v9 + 288), &v121->item_type_vec);
          }
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&gacha_rule_config_ptr->gacha_guarantee_type >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&gacha_rule_config_ptr->gacha_guarantee_type >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&gacha_rule_config_ptr->gacha_guarantee_type);
          }
          if ( gacha_rule_config_ptr->gacha_guarantee_type == GACHA_GUARANTEE_N_COUNT_WITH_CHILDS )
            std::vector<unsigned int>::operator=(
              (std::vector<unsigned int> *const)(v9 + 288),
              &gacha_rule_config_ptr->gacha_guarantee_item_parent_type_childs.item_type_vec);
        }
      }
      if ( *(_BYTE *)(((unsigned __int64)&schedule_config->gacha_prob_rule_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)schedule_config + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&schedule_config->gacha_prob_rule_id >> 3)
                                                                       + 0x7FFF8000) )
      {
        __asan_report_load4(&schedule_config->gacha_prob_rule_id);
      }
      GachaRecord::getGachaTypeWeight(
        (std::vector<data::GachaGuaranteeTypeWeight> *)(v9 + 352),
        gacha_record,
        schedule_config->gacha_prob_rule_id,
        (data::GachaItemParentType)selected_parent_type,
        (const std::vector<unsigned int> *)(v9 + 288));
      if ( std::vector<data::GachaGuaranteeTypeWeight>::empty((const std::vector<data::GachaGuaranteeTypeWeight> *const)(v9 + 352)) )
      {
        common::milog::MiLogStream::create(
          &v213,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/gacha/player_gacha_comp.cpp",
          "calcGachaDrop",
          1744);
        v122 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                 &v213,
                 (const char (*)[42])"gacha_item_type_weight_vec is empty, uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
      }
      else
      {
        std::vector<data::GachaGuaranteeTypeWeight>::operator=(
          &gacha_log_context->gacha_item_type_weight_vec,
          (const std::vector<data::GachaGuaranteeTypeWeight> *)(v9 + 352));
        __for_range_1 = (std::vector<data::GachaGuaranteeTypeWeight> *)(v9 + 352);
        __for_end._M_current = (data::GachaPoolExcelConfig *)std::vector<data::GachaGuaranteeTypeWeight>::begin((std::vector<data::GachaGuaranteeTypeWeight> *const)(v9 + 352))._M_current;
        *(std::vector<data::GachaGuaranteeTypeWeight>::iterator *)(v9 + 160) = std::vector<data::GachaGuaranteeTypeWeight>::end(__for_range_1);
        while ( __gnu_cxx::operator!=<data::GachaGuaranteeTypeWeight *,std::vector<data::GachaGuaranteeTypeWeight>>(
                  (const __gnu_cxx::__normal_iterator<data::GachaGuaranteeTypeWeight*,std::vector<data::GachaGuaranteeTypeWeight> > *)&__for_end,
                  (const __gnu_cxx::__normal_iterator<data::GachaGuaranteeTypeWeight*,std::vector<data::GachaGuaranteeTypeWeight> > *)(v9 + 160)) )
        {
          gacha_type_weight = __gnu_cxx::__normal_iterator<data::GachaGuaranteeTypeWeight *,std::vector<data::GachaGuaranteeTypeWeight>>::operator*((const __gnu_cxx::__normal_iterator<data::GachaGuaranteeTypeWeight*,std::vector<data::GachaGuaranteeTypeWeight> > *const)&__for_end);
          *(_QWORD *)(v9 + 192) = 0LL;
          if ( *(_BYTE *)(((unsigned __int64)&gacha_type_weight->gacha_item_type >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&gacha_type_weight->gacha_item_type >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&gacha_type_weight->gacha_item_type);
          }
          *(_DWORD *)(v9 + 192) = gacha_type_weight->gacha_item_type;
          *(_DWORD *)(v9 + 196) = GachaRecord::getLastItemTypeGachaTimes(
                                    gacha_record,
                                    gacha_type_weight->gacha_item_type);
          v124 = std::move<std::pair<data::GachaItemType,unsigned int> &>((std::pair<data::GachaItemType,unsigned int> *)(v9 + 192));
          std::vector<std::pair<data::GachaItemType,unsigned int>>::emplace_back<std::pair<data::GachaItemType,unsigned int>>(
            &gacha_log_context->last_gacha_item_type_times_vec,
            v124,
            v125);
          __gnu_cxx::__normal_iterator<data::GachaGuaranteeTypeWeight *,std::vector<data::GachaGuaranteeTypeWeight>>::operator++((__gnu_cxx::__normal_iterator<data::GachaGuaranteeTypeWeight*,std::vector<data::GachaGuaranteeTypeWeight> > *const)&__for_end);
        }
        *(_DWORD *)(v9 + 112) = 0;
        if ( !common::tools::RandomUtils::weightSelectOne<data::GachaGuaranteeTypeWeight,unsigned int data::GachaGuaranteeTypeWeight::*>(
                (const std::vector<data::GachaGuaranteeTypeWeight> *)(v9 + 352),
                (uint32_t *)(v9 + 112),
                (unsigned int *)0xC,
                0) )
        {
          v126 = *(unsigned int *)(v9 + 112);
          if ( v126 < std::vector<data::GachaGuaranteeTypeWeight>::size((const std::vector<data::GachaGuaranteeTypeWeight> *const)(v9 + 352)) )
          {
            v132 = std::vector<data::GachaGuaranteeTypeWeight>::operator[](
                     (std::vector<data::GachaGuaranteeTypeWeight> *const)(v9 + 352),
                     *(unsigned int *)(v9 + 112));
            if ( *(_BYTE *)(((unsigned __int64)&v132->gacha_item_type >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&v132->gacha_item_type >> 3) + 0x7FFF8000) <= 3 )
            {
              v132 = (std::vector<data::GachaGuaranteeTypeWeight>::reference)__asan_report_load4(&v132->gacha_item_type);
            }
            selected_item_type = v132->gacha_item_type;
            common::milog::MiLogStream::create(
              &v213,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/gacha/player_gacha_comp.cpp",
              "calcGachaDrop",
              1770);
            v133 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                     &v213,
                     (const char (*)[19])"gacha_schedule_id:");
            v134 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                     v133,
                     &schedule_config->schedule_id);
            v135 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                     v134,
                     (const char (*)[16])" gacha_rule_id:");
            v136 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                     v135,
                     (const unsigned int *)(v9 + 144));
            v137 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v136, (const char (*)[7])" type:");
            *(_QWORD *)(v9 + 192) = data::enumValToStr(selected_item_type);
            v138 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(
                     v137,
                     (const char *const *)(v9 + 192));
            v139 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v138, (const char (*)[6])" uid:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            *(_DWORD *)(v9 + 128) = Player::getUid(this->player_);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v139,
              (const unsigned int *)(v9 + 128));
            common::milog::MiLogStream::~MiLogStream(&v213);
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)&v212);
            v140 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v212)->design_config.txt_config_mgr.gacha_config_mgr;
            if ( *(_BYTE *)(((unsigned __int64)&schedule_config->gacha_pool_id >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&schedule_config->gacha_pool_id >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&schedule_config->gacha_pool_id);
            }
            GachaExcelConfigMgr::findGachaPool(
              (std::vector<data::GachaPoolExcelConfig> *)(v9 + 416),
              v140,
              schedule_config->gacha_pool_id,
              selected_item_type);
            std::vector<data::GachaPoolExcelConfig>::operator=(
              (std::vector<data::GachaPoolExcelConfig> *const)(v9 + 224),
              (std::vector<data::GachaPoolExcelConfig> *)(v9 + 416));
            std::vector<data::GachaPoolExcelConfig>::~vector((std::vector<data::GachaPoolExcelConfig> *const)(v9 + 416));
            std::shared_ptr<Config>::~shared_ptr(&v212);
            data::GachaScheduleConfig::excludeUpItems(
              schedule_config,
              (std::vector<data::GachaPoolExcelConfig> *)(v9 + 224));
            if ( std::vector<data::GachaPoolExcelConfig>::empty((const std::vector<data::GachaPoolExcelConfig> *const)(v9 + 224)) )
            {
              common::milog::MiLogStream::create(
                &v213,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/player/gacha/player_gacha_comp.cpp",
                "calcGachaDrop",
                1780);
              v141 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                       &v213,
                       (const char (*)[27])"findGachaPool failed, uid:");
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8(&this->player_);
              *(_DWORD *)(v9 + 128) = Player::getUid(this->player_);
              v142 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                       v141,
                       (const unsigned int *)(v9 + 128));
              v143 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                       v142,
                       (const char (*)[10])" pool_id:");
              v144 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                       v143,
                       &schedule_config->gacha_pool_id);
              v145 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                       v144,
                       (const char (*)[19])" item_parent_type:");
              *(_QWORD *)(v9 + 160) = data::enumValToStr((data::GachaItemParentType)selected_parent_type);
              v146 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(
                       v145,
                       (const char *const *)(v9 + 160));
              v147 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                       v146,
                       (const char (*)[12])" item_type:");
              *(_QWORD *)(v9 + 192) = data::enumValToStr(selected_item_type);
              v148 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(
                       v147,
                       (const char *const *)(v9 + 192));
              v149 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                       v148,
                       (const char (*)[14])" schedule_id:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v149,
                &schedule_config->schedule_id);
              common::milog::MiLogStream::~MiLogStream(&v213);
              v123 = 0;
            }
            else
            {
              v123 = 1;
            }
          }
          else
          {
            common::milog::MiLogStream::create(
              &v213,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/player/gacha/player_gacha_comp.cpp",
              "calcGachaDrop",
              1766);
            v127 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                     &v213,
                     (const char (*)[29])"weightSelectOne failed, uid:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            *(_DWORD *)(v9 + 128) = Player::getUid(this->player_);
            v128 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                     v127,
                     (const unsigned int *)(v9 + 128));
            v129 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                     v128,
                     (const char (*)[13])" select_idx:");
            v130 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                     v129,
                     (const unsigned int *)(v9 + 112));
            v131 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v130, (const char (*)[7])" size:");
            *(_QWORD *)(v9 + 192) = std::vector<data::GachaGuaranteeTypeWeight>::size((const std::vector<data::GachaGuaranteeTypeWeight> *const)(v9 + 352));
            common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
              v131,
              (const unsigned __int64 *)(v9 + 192));
            common::milog::MiLogStream::~MiLogStream(&v213);
            v123 = 0;
          }
LABEL_157:
          std::vector<data::GachaGuaranteeTypeWeight>::~vector((std::vector<data::GachaGuaranteeTypeWeight> *const)(v9 + 352));
          std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v9 + 288));
          if ( v123 != 1 )
            goto LABEL_176;
          goto LABEL_158;
        }
        common::milog::MiLogStream::create(
          &v213,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/gacha/player_gacha_comp.cpp",
          "calcGachaDrop",
          1761);
        v122 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                 &v213,
                 (const char (*)[29])"weightSelectOne failed, uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
      }
      *(_DWORD *)(v9 + 128) = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v122, (const unsigned int *)(v9 + 128));
      common::milog::MiLogStream::~MiLogStream(&v213);
      v123 = 0;
      goto LABEL_157;
    }
  }
  std::vector<data::GachaGuaranteeParentTypeWeight>::vector((std::vector<data::GachaGuaranteeParentTypeWeight> *const)(v9 + 416));
  if ( !gacha_rule_config_ptr )
    goto LABEL_46;
  if ( *(_BYTE *)(((unsigned __int64)&gacha_rule_config_ptr->gacha_guarantee_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&gacha_rule_config_ptr->gacha_guarantee_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&gacha_rule_config_ptr->gacha_guarantee_type);
  }
  if ( gacha_rule_config_ptr->gacha_guarantee_type == GACHA_GUARANTEE_LOOP_COUNT
    || gacha_rule_config_ptr->gacha_guarantee_type == GACHA_GUARANTEE_LOOP_COUNT_WITH_CHILDS )
  {
    std::vector<data::GachaGuaranteeParentTypeWeight>::operator=(
      (std::vector<data::GachaGuaranteeParentTypeWeight> *const)(v9 + 416),
      &gacha_rule_config_ptr->gacha_guarantee_parent_type_weight_vec);
  }
  else
  {
LABEL_46:
    if ( *(_BYTE *)(((unsigned __int64)&schedule_config->gacha_prob_rule_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)schedule_config + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&schedule_config->gacha_prob_rule_id >> 3)
                                                                     + 0x7FFF8000) )
    {
      __asan_report_load4(&schedule_config->gacha_prob_rule_id);
    }
    GachaRecord::getGachaParentTypeWeight(
      (std::vector<data::GachaGuaranteeParentTypeWeight> *)(v9 + 352),
      gacha_record,
      schedule_config->gacha_prob_rule_id);
    std::vector<data::GachaGuaranteeParentTypeWeight>::operator=(
      (std::vector<data::GachaGuaranteeParentTypeWeight> *const)(v9 + 416),
      (std::vector<data::GachaGuaranteeParentTypeWeight> *)(v9 + 352));
    std::vector<data::GachaGuaranteeParentTypeWeight>::~vector((std::vector<data::GachaGuaranteeParentTypeWeight> *const)(v9 + 352));
  }
  if ( std::vector<data::GachaGuaranteeParentTypeWeight>::empty((const std::vector<data::GachaGuaranteeParentTypeWeight> *const)(v9 + 416)) )
  {
    common::milog::MiLogStream::create(
      &v213,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/gacha/player_gacha_comp.cpp",
      "calcGachaDrop",
      1620);
    v29 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
            &v213,
            (const char (*)[49])"gacha_item_parent_type_weight_vec is empty, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      *(double *)a7.m128i_i64 = __asan_report_load8(&this->player_);
    *(_DWORD *)(v9 + 128) = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, (const unsigned int *)(v9 + 128));
    common::milog::MiLogStream::~MiLogStream(&v213);
    v30 = 0;
  }
  else
  {
    std::vector<data::GachaGuaranteeParentTypeWeight>::operator=(
      &gacha_log_context->gacha_item_parent_type_weight_vec,
      (const std::vector<data::GachaGuaranteeParentTypeWeight> *)(v9 + 416));
    __for_range = (std::vector<data::GachaGuaranteeParentTypeWeight> *)(v9 + 416);
    __for_begin._M_current = std::vector<data::GachaGuaranteeParentTypeWeight>::begin((std::vector<data::GachaGuaranteeParentTypeWeight> *const)(v9 + 416))._M_current;
    __for_end._M_current = (data::GachaPoolExcelConfig *)std::vector<data::GachaGuaranteeParentTypeWeight>::end((std::vector<data::GachaGuaranteeParentTypeWeight> *const)(v9 + 416))._M_current;
    while ( __gnu_cxx::operator!=<data::GachaGuaranteeParentTypeWeight *,std::vector<data::GachaGuaranteeParentTypeWeight>>(
              &__for_begin,
              (const __gnu_cxx::__normal_iterator<data::GachaGuaranteeParentTypeWeight*,std::vector<data::GachaGuaranteeParentTypeWeight> > *)&__for_end) )
    {
      gacha_parent_type_weight = __gnu_cxx::__normal_iterator<data::GachaGuaranteeParentTypeWeight *,std::vector<data::GachaGuaranteeParentTypeWeight>>::operator*(&__for_begin);
      *(_QWORD *)(v9 + 192) = 0LL;
      if ( *(_BYTE *)(((unsigned __int64)&gacha_parent_type_weight->gacha_item_parent_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&gacha_parent_type_weight->gacha_item_parent_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&gacha_parent_type_weight->gacha_item_parent_type);
      }
      *(_DWORD *)(v9 + 192) = gacha_parent_type_weight->gacha_item_parent_type;
      *(_DWORD *)(v9 + 196) = GachaRecord::getLastItemParentTypeGachaTimes(
                                gacha_record,
                                gacha_parent_type_weight->gacha_item_parent_type);
      v31 = std::move<std::pair<data::GachaItemParentType,unsigned int> &>((std::pair<data::GachaItemParentType,unsigned int> *)(v9 + 192));
      std::vector<std::pair<data::GachaItemParentType,unsigned int>>::emplace_back<std::pair<data::GachaItemParentType,unsigned int>>(
        &gacha_log_context->last_gacha_item_parent_type_times_vec,
        v31,
        v32);
      common::milog::MiLogStream::create(
        &v213,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/gacha/player_gacha_comp.cpp",
        "calcGachaDrop",
        1632);
      v33 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
              &v213,
              (const char (*)[19])"gacha_schedule_id:");
      v34 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v33, &schedule_config->schedule_id);
      v35 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v34, (const char (*)[16])" gacha_rule_id:");
      v36 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v35,
              (const unsigned int *)(v9 + 144));
      v37 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v36, (const char (*)[7])" type:");
      if ( *(_BYTE *)(((unsigned __int64)&gacha_parent_type_weight->gacha_item_parent_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&gacha_parent_type_weight->gacha_item_parent_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&gacha_parent_type_weight->gacha_item_parent_type);
      }
      *(_QWORD *)(v9 + 160) = data::enumValToStr(gacha_parent_type_weight->gacha_item_parent_type);
      v38 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v37, (const char *const *)(v9 + 160));
      v39 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v38, (const char (*)[9])" weight:");
      v40 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v39,
              &gacha_parent_type_weight->weight);
      v41 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v40, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        *(double *)a7.m128i_i64 = __asan_report_load8(&this->player_);
      *(_DWORD *)(v9 + 128) = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v41, (const unsigned int *)(v9 + 128));
      common::milog::MiLogStream::~MiLogStream(&v213);
      __gnu_cxx::__normal_iterator<data::GachaGuaranteeParentTypeWeight *,std::vector<data::GachaGuaranteeParentTypeWeight>>::operator++(&__for_begin);
    }
    *(_DWORD *)(v9 + 112) = 0;
    if ( common::tools::RandomUtils::weightSelectOne<data::GachaGuaranteeParentTypeWeight,unsigned int data::GachaGuaranteeParentTypeWeight::*>(
           (const std::vector<data::GachaGuaranteeParentTypeWeight> *)(v9 + 416),
           (uint32_t *)(v9 + 112),
           (unsigned int *)0xC,
           0) )
    {
      common::milog::MiLogStream::create(
        &v213,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/gacha/player_gacha_comp.cpp",
        "calcGachaDrop",
        1640);
      v42 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
              &v213,
              (const char (*)[29])"weightSelectOne failed, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        *(double *)a7.m128i_i64 = __asan_report_load8(&this->player_);
      *(_DWORD *)(v9 + 128) = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v42, (const unsigned int *)(v9 + 128));
      common::milog::MiLogStream::~MiLogStream(&v213);
      v30 = 0;
    }
    else
    {
      v43 = *(unsigned int *)(v9 + 112);
      if ( v43 < std::vector<data::GachaGuaranteeParentTypeWeight>::size((const std::vector<data::GachaGuaranteeParentTypeWeight> *const)(v9 + 416)) )
      {
        v49 = std::vector<data::GachaGuaranteeParentTypeWeight>::operator[](
                (std::vector<data::GachaGuaranteeParentTypeWeight> *const)(v9 + 416),
                *(unsigned int *)(v9 + 112));
        if ( *(_BYTE *)(((unsigned __int64)&v49->gacha_item_parent_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v49->gacha_item_parent_type >> 3) + 0x7FFF8000) <= 3 )
        {
          v49 = (std::vector<data::GachaGuaranteeParentTypeWeight>::reference)__asan_report_load4(&v49->gacha_item_parent_type);
        }
        selected_parent_type = v49->gacha_item_parent_type;
        common::milog::MiLogStream::create(
          &v213,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/gacha/player_gacha_comp.cpp",
          "calcGachaDrop",
          1649);
        v50 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                &v213,
                (const char (*)[19])"gacha_schedule_id:");
        v51 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v50, &schedule_config->schedule_id);
        v52 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                v51,
                (const char (*)[16])" gacha_rule_id:");
        v53 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v52,
                (const unsigned int *)(v9 + 144));
        v54 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v53, (const char (*)[7])" type:");
        *(_QWORD *)(v9 + 192) = data::enumValToStr((data::GachaItemParentType)selected_parent_type);
        v55 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v54, (const char *const *)(v9 + 192));
        v56 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v55, (const char (*)[6])" uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          *(double *)a7.m128i_i64 = __asan_report_load8(&this->player_);
        *(_DWORD *)(v9 + 128) = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v56, (const unsigned int *)(v9 + 128));
        common::milog::MiLogStream::~MiLogStream(&v213);
        v30 = 1;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v213,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/gacha/player_gacha_comp.cpp",
          "calcGachaDrop",
          1645);
        v44 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                &v213,
                (const char (*)[29])"weightSelectOne failed, uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          *(double *)a7.m128i_i64 = __asan_report_load8(&this->player_);
        *(_DWORD *)(v9 + 128) = Player::getUid(this->player_);
        v45 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v44,
                (const unsigned int *)(v9 + 128));
        v46 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v45, (const char (*)[13])" select_idx:");
        v47 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v46,
                (const unsigned int *)(v9 + 112));
        v48 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v47, (const char (*)[7])" size:");
        *(_QWORD *)(v9 + 192) = std::vector<data::GachaGuaranteeParentTypeWeight>::size((const std::vector<data::GachaGuaranteeParentTypeWeight> *const)(v9 + 416));
        common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
          v48,
          (const unsigned __int64 *)(v9 + 192));
        common::milog::MiLogStream::~MiLogStream(&v213);
        v30 = 0;
      }
    }
  }
  std::vector<data::GachaGuaranteeParentTypeWeight>::~vector((std::vector<data::GachaGuaranteeParentTypeWeight> *const)(v9 + 416));
  if ( v30 == 1 )
  {
    v28 = PlayerGachaComp::gachaWishItem(this, schedule_config, gacha_record, selected_parent_type);
    goto LABEL_77;
  }
LABEL_177:
  if ( v214 == (char *)v9 )
  {
    *(_QWORD *)((v9 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v9 >> 3) + 0x7FFF8038) = 0;
    *(_DWORD *)((v9 >> 3) + 0x7FFF8040) = 0;
  }
  else
  {
    *(_QWORD *)v9 = 1172321806LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v9 >> 3) + 0x7FFF8040) = -168430091;
  }
  return retstr;
};

// Line 1722: range 00000000141DE334-00000000141DE3C2
bool __cdecl PlayerGachaComp::calcGachaDrop::_lambda_const_auto_37___::operator()_data::GachaGuaranteeParentTypeWeightWithChilds_(
        const PlayerGachaComp::calcGachaDrop::<lambda(const auto:37&)> *const __closure,
        const data::GachaGuaranteeParentTypeWeightWithChilds *o)
{
  data::GachaItemParentType gacha_item_parent_type; // ecx

  if ( *(_BYTE *)(((unsigned __int64)&o->gacha_item_parent_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&o->gacha_item_parent_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&o->gacha_item_parent_type);
  }
  gacha_item_parent_type = o->gacha_item_parent_type;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)__closure & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(__closure);
  }
  return gacha_item_parent_type == __closure->__selected_parent_type;
};

// Line 1826: range 00000000141CC9CA-00000000141CD263
const data::GachaPoolExcelConfig *__fastcall PlayerGachaComp::gachaWishItem(
        PlayerGachaComp *const this,
        const data::GachaScheduleConfig *schedule_config,
        const GachaRecord *gacha_record,
        uint32_t selected_parent_type)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  const data::GachaPoolExcelConfig *result; // rax
  GachaExcelConfigMgr *p_gacha_config_mgr; // rcx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  uint32_t wish_progress; // ecx
  const GachaExcelConfigMgr *p_wish_item_id; // rdi
  uint32_t wish_item_id; // edx
  common::milog::MiLogStream *v24; // rax
  uint32_t v25; // ecx
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  const data::GachaWishConfig *wish_config_ptr; // [rsp+20h] [rbp-A0h]
  const data::GachaPoolExcelConfig *wish_item_config_ptr; // [rsp+28h] [rbp-98h]
  std::shared_ptr<Config> v36; // [rsp+30h] [rbp-90h] BYREF
  common::milog::MiLogStream v37; // [rsp+40h] [rbp-80h] BYREF
  char v38[96]; // [rsp+60h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v38;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 4 25 selected_parent_type:1825";
  *(_QWORD *)(v4 + 16) = PlayerGachaComp::gachaWishItem;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116348;
  *(_DWORD *)(v4 + 32) = selected_parent_type;
  if ( *(_BYTE *)(((unsigned __int64)&gacha_record->wish_item_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&gacha_record->wish_item_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&gacha_record->wish_item_id);
  }
  if ( gacha_record->wish_item_id )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v36);
    p_gacha_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v36)->design_config.txt_config_mgr.gacha_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&schedule_config->gacha_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)schedule_config + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&schedule_config->gacha_type >> 3)
                                                                    + 0x7FFF8000) )
    {
      __asan_report_load4(&schedule_config->gacha_type);
    }
    wish_config_ptr = data::GachaExcelConfigMgrBase::findGachaWishConfig(
                        p_gacha_config_mgr,
                        schedule_config->gacha_type);
    std::shared_ptr<Config>::~shared_ptr(&v36);
    if ( wish_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&wish_config_ptr->wish_parent_type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)wish_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&wish_config_ptr->wish_parent_type >> 3)
                                                                       + 0x7FFF8000) )
      {
        __asan_report_load4(&wish_config_ptr->wish_parent_type);
      }
      if ( wish_config_ptr->wish_parent_type == *(_DWORD *)(v4 + 32) )
      {
        if ( *(_BYTE *)(((unsigned __int64)&wish_config_ptr->wish_max_progress >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&wish_config_ptr->wish_max_progress >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&wish_config_ptr->wish_max_progress);
        }
        if ( wish_config_ptr->wish_max_progress )
        {
          common::milog::MiLogStream::create(
            &v37,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/gacha/player_gacha_comp.cpp",
            "gachaWishItem",
            1848);
          v14 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                  &v37,
                  (const char (*)[18])"wish_parent_type:");
          v15 = common::milog::MiLogStream::operator<<<data::GachaItemParentType,(data::GachaItemParentType*)0>(
                  v14,
                  &wish_config_ptr->wish_parent_type);
          v16 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v15, (const char (*)[26])off_2526DA40);
          v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v16,
                  (const unsigned int *)(v4 + 32));
          v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  v17,
                  (const char (*)[16])" wish_progress:");
          v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v18,
                  &gacha_record->wish_progress);
          v20 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                  v19,
                  (const char (*)[15])" max_progress:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
            v20,
            &wish_config_ptr->wish_max_progress);
          common::milog::MiLogStream::~MiLogStream(&v37);
          if ( *(_BYTE *)(((unsigned __int64)&gacha_record->wish_progress >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)gacha_record - 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gacha_record->wish_progress >> 3)
                                                                        + 0x7FFF8000) )
          {
            __asan_report_load4(&gacha_record->wish_progress);
          }
          wish_progress = gacha_record->wish_progress;
          if ( *(_BYTE *)(((unsigned __int64)&wish_config_ptr->wish_max_progress >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&wish_config_ptr->wish_max_progress >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&wish_config_ptr->wish_max_progress);
          }
          if ( wish_progress >= wish_config_ptr->wish_max_progress )
          {
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)&v36);
            p_wish_item_id = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v36)->design_config.txt_config_mgr.gacha_config_mgr;
            if ( *(_BYTE *)(((unsigned __int64)&gacha_record->wish_item_id >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&gacha_record->wish_item_id >> 3) + 0x7FFF8000) <= 3 )
            {
              p_wish_item_id = (const GachaExcelConfigMgr *)&gacha_record->wish_item_id;
              __asan_report_load4(&gacha_record->wish_item_id);
            }
            wish_item_id = gacha_record->wish_item_id;
            if ( *(_BYTE *)(((unsigned __int64)&schedule_config->gacha_pool_id >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&schedule_config->gacha_pool_id >> 3) + 0x7FFF8000) <= 3 )
            {
              p_wish_item_id = (const GachaExcelConfigMgr *)&schedule_config->gacha_pool_id;
              __asan_report_load4(&schedule_config->gacha_pool_id);
            }
            wish_item_config_ptr = GachaExcelConfigMgr::findGachaItemInPool(
                                     p_wish_item_id,
                                     schedule_config->gacha_pool_id,
                                     wish_item_id);
            std::shared_ptr<Config>::~shared_ptr(&v36);
            if ( wish_item_config_ptr )
            {
              if ( *(_BYTE *)(((unsigned __int64)&gacha_record->wish_item_id >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&gacha_record->wish_item_id >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&gacha_record->wish_item_id);
              }
              v25 = gacha_record->wish_item_id;
              if ( *(_BYTE *)(((unsigned __int64)&wish_config_ptr->wish_parent_type >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)wish_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&wish_config_ptr->wish_parent_type >> 3)
                                                                               + 0x7FFF8000) )
              {
                __asan_report_load4(&wish_config_ptr->wish_parent_type);
              }
              if ( !PlayerGachaComp::isItemInParentTypeUpList(
                      this,
                      schedule_config,
                      wish_config_ptr->wish_parent_type,
                      v25) )
              {
                common::milog::MiLogStream::create(
                  &v37,
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/player/gacha/player_gacha_comp.cpp",
                  "gachaWishItem",
                  1867);
                v26 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                        &v37,
                        (const char (*)[41])"isItemInParentTypeUpList fails, item_id:");
                v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v26,
                        &gacha_record->wish_item_id);
                v28 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                        v27,
                        (const char (*)[14])" parent_type:");
                v29 = common::milog::MiLogStream::operator<<<data::GachaItemParentType,(data::GachaItemParentType*)0>(
                        v28,
                        &wish_config_ptr->wish_parent_type);
                v30 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                        v29,
                        (const char (*)[13])" gacha_type:");
                common::milog::MiLogStream::operator<<<data::GachaType,(data::GachaType*)0>(
                  v30,
                  &schedule_config->gacha_type);
                common::milog::MiLogStream::~MiLogStream(&v37);
                result = 0LL;
              }
              else
              {
                result = wish_item_config_ptr;
              }
            }
            else
            {
              common::milog::MiLogStream::create(
                &v37,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/player/gacha/player_gacha_comp.cpp",
                "gachaWishItem",
                1860);
              v24 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                      &v37,
                      (const char (*)[41])"findGachaItemInPool false, wish_item_id:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, &gacha_record->wish_item_id);
              common::milog::MiLogStream::~MiLogStream(&v37);
              result = 0LL;
            }
          }
          else
          {
            result = 0LL;
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v37,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/gacha/player_gacha_comp.cpp",
            "gachaWishItem",
            1844);
          v12 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(&v37, (const char (*)[12])"gacha_type:");
          v13 = common::milog::MiLogStream::operator<<<data::GachaType,(data::GachaType*)0>(
                  v12,
                  &schedule_config->gacha_type);
          common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
            v13,
            (const char (*)[25])" wish_max_progress == 0!");
          common::milog::MiLogStream::~MiLogStream(&v37);
          result = 0LL;
        }
      }
      else
      {
        result = 0LL;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v37,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/gacha/player_gacha_comp.cpp",
        "gachaWishItem",
        1835);
      v9 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
             &v37,
             (const char (*)[39])"findGachaWishConfig fails, gacha_type:");
      v10 = common::milog::MiLogStream::operator<<<data::GachaType,(data::GachaType*)0>(
              v9,
              &schedule_config->gacha_type);
      v11 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
              v10,
              (const char (*)[19])" but wish item id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &gacha_record->wish_item_id);
      common::milog::MiLogStream::~MiLogStream(&v37);
      result = 0LL;
    }
  }
  else
  {
    result = 0LL;
  }
  if ( v38 == (char *)v4 )
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

// Line 1874: range 00000000141CD264-00000000141CE0A1
int32_t __cdecl PlayerGachaComp::onGachaWishReq(
        PlayerGachaComp *const this,
        const proto::GachaWishReq *req,
        proto::GachaWishRsp *rsp_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  PlayerBasicComp *BasicComp; // rax
  common::milog::MiLogStream *v7; // rbx
  int32_t v8; // r14d
  google::protobuf::uint32 v9; // edx
  google::protobuf::uint32 v10; // edx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  common::milog::MiLogStream *v15; // r14
  data::GachaScheduleConfig *M_current; // r15
  std::vector<data::GachaScheduleConfig>::iterator v17; // rax
  common::milog::MiLogStream *v18; // r14
  signed int v19; // eax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // r14
  GachaExcelConfigMgr *p_gacha_config_mgr; // r14
  uint32_t v23; // ecx
  common::milog::MiLogStream *v24; // r14
  common::milog::MiLogStream *v25; // rax
  uint32_t v26; // ecx
  common::milog::MiLogStream *v27; // r14
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // r14
  __int64 v32; // rsi
  __int64 v33; // rdx
  __int64 v34; // rdx
  char v35; // al
  common::milog::MiLogStream *v36; // rax
  int32_t result; // eax
  unsigned int val; // [rsp+24h] [rbp-13Ch] BYREF
  uint32_t reason; // [rsp+28h] [rbp-138h]
  uint32_t cur_time; // [rsp+2Ch] [rbp-134h]
  uint32_t before_progress; // [rsp+30h] [rbp-130h]
  uint32_t before_wish_item_id; // [rsp+34h] [rbp-12Ch]
  __gnu_cxx::__normal_iterator<data::GachaScheduleConfig*,std::vector<data::GachaScheduleConfig> > __rhs; // [rsp+38h] [rbp-128h] BYREF
  const data::GachaWishConfig *wish_config_ptr; // [rsp+40h] [rbp-120h]
  const data::GachaScheduleConfig *schedule_config; // [rsp+48h] [rbp-118h]
  const data::GachaPoolExcelConfig *wish_item_config_ptr; // [rsp+50h] [rbp-110h]
  GachaRecord *gacha_record; // [rsp+58h] [rbp-108h]
  std::shared_ptr<Config> v50; // [rsp+60h] [rbp-100h] BYREF
  common::milog::MiLogStream v51; // [rsp+70h] [rbp-F0h] BYREF
  char v52[208]; // [rsp+90h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v52;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 15 gacha_type:1883 64 8 18 schedule_iter:1905 96 24 30 active_gacha_schedule_vec:1898";
  *(_QWORD *)(v3 + 16) = PlayerGachaComp::onGachaWishReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218103808;
  v5[536862724] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  BasicComp = Player::getBasicComp(this->player_);
  if ( PlayerBasicComp::isStateOpen(BasicComp, 0x1Fu) )
  {
    *(_DWORD *)(v3 + 48) = proto::GachaWishReq::gacha_type(req);
    proto::GachaWishRsp::set_gacha_type(rsp_0, *(_DWORD *)(v3 + 48));
    v9 = proto::GachaWishReq::gacha_schedule_id(req);
    proto::GachaWishRsp::set_gacha_schedule_id(rsp_0, v9);
    v10 = proto::GachaWishReq::item_id(req);
    proto::GachaWishRsp::set_wish_item_id(rsp_0, v10);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v50);
    v11 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v50);
    wish_config_ptr = data::GachaExcelConfigMgrBase::findGachaWishConfig(
                        &v11->design_config.txt_config_mgr.gacha_config_mgr,
                        *(_DWORD *)(v3 + 48));
    std::shared_ptr<Config>::~shared_ptr(&v50);
    if ( !wish_config_ptr )
    {
      common::milog::MiLogStream::create(
        &v51,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/gacha/player_gacha_comp.cpp",
        "onGachaWishReq",
        1891);
      v12 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
              &v51,
              (const char (*)[32])"findGachaWishConfig gacha_type:");
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v13, (const char (*)[7])" fails");
      common::milog::MiLogStream::~MiLogStream(&v51);
      proto::GachaWishRsp::set_retcode(rsp_0, -1);
      v8 = proto::GachaWishRsp::retcode(rsp_0);
      goto LABEL_43;
    }
    cur_time = common::tools::TimeUtils::getNow();
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v50);
    v14 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v50);
    data::DbGachaConfigMgr::findActivieGachaSchedules(
      (std::vector<data::GachaScheduleConfig> *)(v3 + 96),
      &v14->design_config.db_config_mgr.db_local_config_mgr.gacha_config_mgr,
      cur_time);
    std::shared_ptr<Config>::~shared_ptr(&v50);
    if ( std::vector<data::GachaScheduleConfig>::empty((const std::vector<data::GachaScheduleConfig> *const)(v3 + 96)) )
    {
      common::milog::MiLogStream::create(
        &v51,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/gacha/player_gacha_comp.cpp",
        "onGachaWishReq",
        1901);
      v15 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
              &v51,
              (const char (*)[31])"No active gacha schedule, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
      common::milog::MiLogStream::~MiLogStream(&v51);
      proto::GachaWishRsp::set_retcode(rsp_0, 1401);
      v8 = proto::GachaWishRsp::retcode(rsp_0);
      goto LABEL_42;
    }
    M_current = std::vector<data::GachaScheduleConfig>::end((std::vector<data::GachaScheduleConfig> *const)(v3 + 96))._M_current;
    v17._M_current = std::vector<data::GachaScheduleConfig>::begin((std::vector<data::GachaScheduleConfig> *const)(v3 + 96))._M_current;
    *(__gnu_cxx::__normal_iterator<data::GachaScheduleConfig*,std::vector<data::GachaScheduleConfig> > *)(v3 + 64) = std::find_if<__gnu_cxx::__normal_iterator<data::GachaScheduleConfig *,std::vector<data::GachaScheduleConfig>>,PlayerGachaComp::onGachaWishReq(proto::GachaWishReq const&,proto::GachaWishRsp &)::{lambda(__gnu_cxx::__normal_iterator<data::GachaScheduleConfig *,std::vector<data::GachaScheduleConfig>> const&)#1}>(v17, (__gnu_cxx::__normal_iterator<data::GachaScheduleConfig*,std::vector<data::GachaScheduleConfig> >)M_current, (PlayerGachaComp::onGachaWishReq::<lambda(const auto:38&)>)req);
    __rhs._M_current = std::vector<data::GachaScheduleConfig>::end((std::vector<data::GachaScheduleConfig> *const)(v3 + 96))._M_current;
    if ( __gnu_cxx::operator==<data::GachaScheduleConfig *,std::vector<data::GachaScheduleConfig>>(
           (const __gnu_cxx::__normal_iterator<data::GachaScheduleConfig*,std::vector<data::GachaScheduleConfig> > *)(v3 + 64),
           &__rhs) )
    {
      common::milog::MiLogStream::create(
        &v51,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/gacha/player_gacha_comp.cpp",
        "onGachaWishReq",
        1911);
      v18 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
              &v51,
              (const char (*)[39])"no matched gacha schedule, gacha_type:");
      v19 = proto::GachaWishReq::gacha_type(req);
      __rhs._M_current = (data::GachaScheduleConfig *)data::enumValToStr((data::GachaType)v19);
      v20 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v18, (const char *const *)&__rhs);
      v21 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v20, (const char (*)[14])" schedule_id:");
      val = proto::GachaWishReq::gacha_schedule_id(req);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &val);
      common::milog::MiLogStream::~MiLogStream(&v51);
      proto::GachaWishRsp::set_retcode(rsp_0, 1403);
      v8 = proto::GachaWishRsp::retcode(rsp_0);
LABEL_42:
      std::vector<data::GachaScheduleConfig>::~vector((std::vector<data::GachaScheduleConfig> *const)(v3 + 96));
      goto LABEL_43;
    }
    schedule_config = __gnu_cxx::__normal_iterator<data::GachaScheduleConfig *,std::vector<data::GachaScheduleConfig>>::operator*((const __gnu_cxx::__normal_iterator<data::GachaScheduleConfig*,std::vector<data::GachaScheduleConfig> > *const)(v3 + 64));
    reason = 2;
    if ( proto::GachaWishReq::item_id(req) )
    {
      reason = 1;
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v50);
      p_gacha_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v50)->design_config.txt_config_mgr.gacha_config_mgr;
      v23 = proto::GachaWishReq::item_id(req);
      if ( *(_BYTE *)(((unsigned __int64)&schedule_config->gacha_pool_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&schedule_config->gacha_pool_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&schedule_config->gacha_pool_id);
      }
      wish_item_config_ptr = GachaExcelConfigMgr::findGachaItemInPool(
                               p_gacha_config_mgr,
                               schedule_config->gacha_pool_id,
                               v23);
      std::shared_ptr<Config>::~shared_ptr(&v50);
      if ( !wish_item_config_ptr )
      {
        common::milog::MiLogStream::create(
          &v51,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/gacha/player_gacha_comp.cpp",
          "onGachaWishReq",
          1927);
        v24 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(&v51, (const char (*)[13])off_2526DCA0);
        val = proto::GachaWishReq::item_id(req);
        v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, &val);
        common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v25, (const char (*)[14])" not in pool!");
        common::milog::MiLogStream::~MiLogStream(&v51);
        proto::GachaWishRsp::set_retcode(rsp_0, -1);
        v8 = proto::GachaWishRsp::retcode(rsp_0);
        goto LABEL_42;
      }
      v26 = proto::GachaWishReq::item_id(req);
      if ( *(_BYTE *)(((unsigned __int64)&wish_config_ptr->wish_parent_type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)wish_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&wish_config_ptr->wish_parent_type >> 3)
                                                                       + 0x7FFF8000) )
      {
        __asan_report_load4(&wish_config_ptr->wish_parent_type);
      }
      if ( !PlayerGachaComp::isItemInParentTypeUpList(this, schedule_config, wish_config_ptr->wish_parent_type, v26) )
      {
        common::milog::MiLogStream::create(
          &v51,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/gacha/player_gacha_comp.cpp",
          "onGachaWishReq",
          1935);
        v27 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(&v51, (const char (*)[13])off_2526DCA0);
        val = proto::GachaWishReq::item_id(req);
        v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, &val);
        common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v28, (const char (*)[16])" not in up set!");
        common::milog::MiLogStream::~MiLogStream(&v51);
        proto::GachaWishRsp::set_retcode(rsp_0, 1408);
        v8 = proto::GachaWishRsp::retcode(rsp_0);
        goto LABEL_42;
      }
    }
    gacha_record = PlayerGachaComp::getGachaRecord(this, schedule_config);
    if ( *(_BYTE *)(((unsigned __int64)&gacha_record->wish_progress >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)gacha_record - 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gacha_record->wish_progress >> 3)
                                                                  + 0x7FFF8000) )
    {
      __asan_report_load4(&gacha_record->wish_progress);
    }
    before_progress = gacha_record->wish_progress;
    if ( *(_BYTE *)(((unsigned __int64)&gacha_record->wish_item_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&gacha_record->wish_item_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&gacha_record->wish_item_id);
    }
    before_wish_item_id = gacha_record->wish_item_id;
    if ( before_wish_item_id == proto::GachaWishReq::item_id(req) )
    {
      common::milog::MiLogStream::create(
        &v51,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/gacha/player_gacha_comp.cpp",
        "onGachaWishReq",
        1947);
      v29 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(&v51, (const char (*)[12])"gacha_type:");
      v30 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, (const unsigned int *)(v3 + 48));
      v31 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v30, (const char (*)[17])" same wish item:");
      val = proto::GachaWishReq::item_id(req);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, &val);
      common::milog::MiLogStream::~MiLogStream(&v51);
      proto::GachaWishRsp::set_retcode(rsp_0, 1407);
      v8 = proto::GachaWishRsp::retcode(rsp_0);
    }
    else
    {
      v32 = (((_BYTE)gacha_record - 36) & 7u) + 3;
      v33 = (*(_BYTE *)(((unsigned __int64)&gacha_record->wish_progress >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)gacha_record - 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gacha_record->wish_progress >> 3) + 0x7FFF8000));
      if ( (_BYTE)v33 )
        __asan_report_store4(&gacha_record->wish_progress, v32, v33);
      gacha_record->wish_progress = 0;
      v34 = proto::GachaWishReq::item_id(req);
      v35 = *(_BYTE *)(((unsigned __int64)&gacha_record->wish_item_id >> 3) + 0x7FFF8000);
      if ( v35 != 0 && v35 <= 3 )
      {
        LOBYTE(v32) = v35 != 0;
        __asan_report_store4(&gacha_record->wish_item_id, v32, v34);
      }
      gacha_record->wish_item_id = v34;
      proto::GachaWishRsp::set_retcode(rsp_0, 0);
      if ( *(_BYTE *)(((unsigned __int64)&gacha_record->wish_progress >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)gacha_record - 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gacha_record->wish_progress >> 3)
                                                                    + 0x7FFF8000) )
      {
        __asan_report_load4(&gacha_record->wish_progress);
      }
      proto::GachaWishRsp::set_wish_progress(rsp_0, gacha_record->wish_progress);
      if ( *(_BYTE *)(((unsigned __int64)&wish_config_ptr->wish_max_progress >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&wish_config_ptr->wish_max_progress >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&wish_config_ptr->wish_max_progress);
      }
      proto::GachaWishRsp::set_wish_max_progress(rsp_0, wish_config_ptr->wish_max_progress);
      common::milog::MiLogStream::create(
        &v51,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/gacha/player_gacha_comp.cpp",
        "onGachaWishReq",
        1960);
      v36 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
              &v51,
              (const char (*)[19])"gachaWish item_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v36, &gacha_record->wish_item_id);
      common::milog::MiLogStream::~MiLogStream(&v51);
      PlayerGachaComp::printWishProgressStatLog(this, gacha_record, before_progress, reason);
      v8 = 0;
    }
    goto LABEL_42;
  }
  common::milog::MiLogStream::create(
    &v51,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/player/gacha/player_gacha_comp.cpp",
    "onGachaWishReq",
    1878);
  v7 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
         &v51,
         (const char (*)[33])"OPEN_STATE_GACHA is locked, uid:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  val = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
  common::milog::MiLogStream::~MiLogStream(&v51);
  proto::GachaWishRsp::set_retcode(rsp_0, 141);
  v8 = proto::GachaWishRsp::retcode(rsp_0);
LABEL_43:
  result = v8;
  if ( v52 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 1905: range 00000000141DE49C-00000000141DE59E
bool __cdecl PlayerGachaComp::onGachaWishReq::_lambda_const_auto_38___::operator()_data::GachaScheduleConfig_(
        const PlayerGachaComp::onGachaWishReq::<lambda(const auto:38&)> *const __closure,
        const data::GachaScheduleConfig *o)
{
  data::GachaType gacha_type; // ebx
  uint32_t schedule_id; // ebx

  if ( *(_BYTE *)(((unsigned __int64)&o->gacha_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)o + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&o->gacha_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&o->gacha_type);
  }
  gacha_type = o->gacha_type;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  if ( gacha_type != proto::GachaWishReq::gacha_type(__closure->__req) )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)o >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)o >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(o);
  }
  schedule_id = o->schedule_id;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  return schedule_id == proto::GachaWishReq::gacha_schedule_id(__closure->__req);
};

// Line 1969: range 00000000141CE0A2-00000000141CE28C
bool __fastcall PlayerGachaComp::isItemInParentTypeUpList(
        PlayerGachaComp *const this,
        const data::GachaScheduleConfig *schedule_config,
        uint32_t item_parent_type,
        uint32_t item_id)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  bool result; // al
  const data::GachaUpConfig *up_config_ptr; // [rsp+28h] [rbp-A8h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-A0h] BYREF
  char v14[128]; // [rsp+50h] [rbp-80h] BYREF

  v4 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 21 item_parent_type:1968 64 4 12 item_id:1968";
  *(_QWORD *)(v4 + 16) = PlayerGachaComp::isItemInParentTypeUpList;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202116348;
  *(_DWORD *)(v4 + 48) = item_parent_type;
  *(_DWORD *)(v4 + 64) = item_id;
  up_config_ptr = data::GachaScheduleConfig::findGachaUpConfig(
                    schedule_config,
                    (data::GachaItemParentType)*(_DWORD *)(v4 + 48));
  if ( up_config_ptr )
  {
    result = std::set<unsigned int>::count(
               &up_config_ptr->item_set,
               (const std::set<unsigned int>::key_type *)(v4 + 64)) != 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/gacha/player_gacha_comp.cpp",
      "isItemInParentTypeUpList",
      1973);
    v7 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
           &v13,
           (const char (*)[31])"findGachaUpConfig parent_type:");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v4 + 48));
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v8, (const char (*)[7])" fails");
    common::milog::MiLogStream::~MiLogStream(&v13);
    result = 0;
  }
  if ( v14 == (char *)v4 )
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
  return result;
};

// Line 1980: range 00000000141CE28E-00000000141CE6E9
void __cdecl PlayerGachaComp::printWishProgressStatLog(
        const PlayerGachaComp *const this,
        const GachaRecord *gacha_record,
        uint32_t before_progress,
        uint32_t reason)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyGachaWishProgress,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyGachaWishProgress,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyGachaWishProgress,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyGachaWishProgress,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyGachaWishProgress,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyGachaWishProgress,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  Player *player; // r14
  std::string v15; // [rsp+0h] [rbp-F0h]
  uint32_t reasona; // [rsp+8h] [rbp-E8h]
  uint32_t before_progressa; // [rsp+Ch] [rbp-E4h]
  google::protobuf::uint32 *gacha_recorda; // [rsp+10h] [rbp-E0h]
  const PlayerGachaComp *thisa; // [rsp+18h] [rbp-D8h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+20h] [rbp-D0h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+30h] [rbp-C0h] BYREF
  std::string v22; // [rsp+40h] [rbp-B0h] BYREF
  char v23[144]; // [rsp+60h] [rbp-90h] BYREF

  *(&v15._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  v15._anon_0._M_allocated_capacity = (std::string::size_type)gacha_record;
  HIDWORD(v15._M_string_length) = before_progress;
  LODWORD(v15._M_string_length) = reason;
  v4 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 1 11 holder:1981 64 16 17 wish_log_ptr:1982";
  *(_QWORD *)(v4 + 16) = PlayerGachaComp::printWishProgressStatLog;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753551;
  v6[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  BasicComp = Player::getBasicComp(this->player_);
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v22, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 48), 0x899u, v15);
  std::string::~string(&v22);
  common::tools::perf::make_shared<proto_log::PlayerLogBodyGachaWishProgress>();
  v8 = std::__shared_ptr_access<proto_log::PlayerLogBodyGachaWishProgress,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGachaWishProgress,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
  if ( *(_BYTE *)(((unsigned __int64)gacha_recorda >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)gacha_recorda >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(gacha_recorda);
  }
  proto_log::PlayerLogBodyGachaWishProgress::set_gacha_type(v8, *gacha_recorda);
  v9 = std::__shared_ptr_access<proto_log::PlayerLogBodyGachaWishProgress,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGachaWishProgress,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
  if ( *(_BYTE *)(((unsigned __int64)(gacha_recorda + 1) >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)gacha_recorda + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(gacha_recorda + 1) >> 3)
                                                                + 0x7FFF8000) )
  {
    __asan_report_load4(gacha_recorda + 1);
  }
  proto_log::PlayerLogBodyGachaWishProgress::set_schedule_id(v9, gacha_recorda[1]);
  v10 = std::__shared_ptr_access<proto_log::PlayerLogBodyGachaWishProgress,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGachaWishProgress,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
  if ( *(_BYTE *)(((unsigned __int64)(gacha_recorda + 54) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)(gacha_recorda + 54) >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(gacha_recorda + 54);
  }
  proto_log::PlayerLogBodyGachaWishProgress::set_gacha_wish_item_id(v10, gacha_recorda[54]);
  v11 = std::__shared_ptr_access<proto_log::PlayerLogBodyGachaWishProgress,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGachaWishProgress,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
  proto_log::PlayerLogBodyGachaWishProgress::set_before_gacha_wish_progress(v11, before_progressa);
  v12 = std::__shared_ptr_access<proto_log::PlayerLogBodyGachaWishProgress,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGachaWishProgress,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
  if ( *(_BYTE *)(((unsigned __int64)(gacha_recorda + 55) >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)gacha_recorda - 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(gacha_recorda + 55) >> 3)
                                                                 + 0x7FFF8000) )
  {
    __asan_report_load4(gacha_recorda + 55);
  }
  proto_log::PlayerLogBodyGachaWishProgress::set_gacha_wish_progress(v12, gacha_recorda[55]);
  v13 = std::__shared_ptr_access<proto_log::PlayerLogBodyGachaWishProgress,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGachaWishProgress,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
  proto_log::PlayerLogBodyGachaWishProgress::set_reason(v13, reasona);
  if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&thisa->player_);
  player = thisa->player_;
  std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyGachaWishProgress,void>(
    &p_body_ptr,
    (const std::shared_ptr<proto_log::PlayerLogBodyGachaWishProgress> *)(v4 + 64));
  Player::printStatLog(player, &p_body_ptr, &p_body_ext_ptr, 0xEu);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
  std::shared_ptr<proto_log::PlayerLogBodyGachaWishProgress>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyGachaWishProgress> *const)(v4 + 64));
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 48));
  if ( v23 == (char *)v4 )
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

// Line 1993: range 00000000141CE6EA-00000000141CEA3B
void __cdecl PlayerGachaComp::tryRefresh(PlayerGachaComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  __int64 v6; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  uint32_t now; // [rsp+18h] [rbp-B8h]
  uint32_t time_offset; // [rsp+1Ch] [rbp-B4h]
  std::vector<data::GachaScheduleConfig>::iterator __for_begin; // [rsp+20h] [rbp-B0h] BYREF
  std::vector<data::GachaScheduleConfig>::iterator __for_end; // [rsp+28h] [rbp-A8h] BYREF
  std::vector<data::GachaScheduleConfig> *__for_range; // [rsp+30h] [rbp-A0h]
  const data::GachaScheduleConfig *gacha_schedule_config; // [rsp+38h] [rbp-98h]
  std::shared_ptr<Config> v14; // [rsp+40h] [rbp-90h] BYREF
  char v15[128]; // [rsp+50h] [rbp-80h] BYREF

  v1 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 24 30 active_gacha_schedule_vec:2005";
  *(_QWORD *)(v1 + 16) = PlayerGachaComp::tryRefresh;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218103808;
  v3[536862722] = -202116109;
  now = common::tools::TimeUtils::getNow();
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v14);
  v4 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v14);
  time_offset = ConstValueExcelConfigMgr::getTimeOffsetSec(&v4->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v14);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_gacha_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_gacha_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->last_gacha_time_);
  }
  if ( this->last_gacha_time_
    && now > this->last_gacha_time_
    && !common::tools::TimeUtils::isSameDay(now, this->last_gacha_time_, time_offset) )
  {
    v6 = (*(_BYTE *)(((unsigned __int64)&this->daily_gacha_times_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->daily_gacha_times_ >> 3) + 0x7FFF8000));
    if ( (_BYTE)v6 )
      __asan_report_store4(&this->daily_gacha_times_, (((_BYTE)this + 84) & 7u) + 3, v6);
    this->daily_gacha_times_ = 0;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v14);
  v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v14);
  data::DbGachaConfigMgr::findActivieGachaSchedules(
    (std::vector<data::GachaScheduleConfig> *)(v1 + 32),
    &v7->design_config.db_config_mgr.db_local_config_mgr.gacha_config_mgr,
    now);
  std::shared_ptr<Config>::~shared_ptr(&v14);
  __for_range = (std::vector<data::GachaScheduleConfig> *)(v1 + 32);
  __for_begin._M_current = std::vector<data::GachaScheduleConfig>::begin((std::vector<data::GachaScheduleConfig> *const)(v1 + 32))._M_current;
  __for_end._M_current = std::vector<data::GachaScheduleConfig>::end((std::vector<data::GachaScheduleConfig> *const)(v1 + 32))._M_current;
  while ( __gnu_cxx::operator!=<data::GachaScheduleConfig *,std::vector<data::GachaScheduleConfig>>(
            &__for_begin,
            &__for_end) )
  {
    gacha_schedule_config = __gnu_cxx::__normal_iterator<data::GachaScheduleConfig *,std::vector<data::GachaScheduleConfig>>::operator*(&__for_begin);
    PlayerGachaComp::refreshGachaRecord(this, gacha_schedule_config);
    __gnu_cxx::__normal_iterator<data::GachaScheduleConfig *,std::vector<data::GachaScheduleConfig>>::operator++(&__for_begin);
  }
  std::vector<data::GachaScheduleConfig>::~vector((std::vector<data::GachaScheduleConfig> *const)(v1 + 32));
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
};

// Line 2013: range 00000000141CEA3C-00000000141CEB11
bool __cdecl PlayerGachaComp::isUnderMinorsRestrict(const PlayerGachaComp *const this)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v1; // rax
  bool v2; // r12
  std::shared_ptr<Config> v4[2]; // [rsp+10h] [rbp-20h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v4);
  v1 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v4);
  if ( !FeatureSwitchMgr::isMinorsGachaRestrictEnabled(&v1->feature_switch_mgr) )
    goto LABEL_6;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  if ( Player::isMinor(this->player_) )
    v2 = 1;
  else
LABEL_6:
    v2 = 0;
  std::shared_ptr<Config>::~shared_ptr(v4);
  return v2;
};

// Line 2018: range 00000000141CEB12-00000000141CEB85
bool __cdecl PlayerGachaComp::isUnderGeneralRestrict(const PlayerGachaComp *const this)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v1; // rax
  bool isGeneralGachaRestrictEnabled; // bl
  std::shared_ptr<Config> v4[2]; // [rsp+10h] [rbp-20h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v4);
  v1 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v4);
  isGeneralGachaRestrictEnabled = FeatureSwitchMgr::isGeneralGachaRestrictEnabled(&v1->feature_switch_mgr);
  std::shared_ptr<Config>::~shared_ptr(v4);
  return isGeneralGachaRestrictEnabled;
};

// Line 2023: range 00000000141CEB86-00000000141CEBA4
bool __cdecl PlayerGachaComp::isGachaItemTypeIsNeedSave(
        const PlayerGachaComp *const this,
        data::GachaItemType gacha_item_type)
{
  return gacha_item_type != GACHA_ITEM_WEAPON_S3;
};

// Line 2035: range 00000000141CEBA6-00000000141CF26A
int32_t __cdecl PlayerGachaComp::onGachaOpenWishNotify(
        PlayerGachaComp *const this,
        const proto::GachaOpenWishNotify *notify)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  PlayerBasicComp *BasicComp; // rax
  common::milog::MiLogStream *v6; // rbx
  int32_t v7; // r14d
  GachaExcelConfigMgr *p_gacha_config_mgr; // r14
  uint32_t v9; // eax
  common::milog::MiLogStream *v10; // rbx
  common::milog::MiLogStream *v11; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  common::milog::MiLogStream *v13; // r14
  data::GachaScheduleConfig *M_current; // r15
  std::vector<data::GachaScheduleConfig>::iterator v15; // rax
  common::milog::MiLogStream *v16; // r14
  signed int v17; // eax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // r14
  const data::GachaScheduleConfig *v20; // rsi
  int32_t result; // eax
  unsigned int val; // [rsp+20h] [rbp-100h] BYREF
  uint32_t cur_time; // [rsp+24h] [rbp-FCh]
  __gnu_cxx::__normal_iterator<data::GachaScheduleConfig*,std::vector<data::GachaScheduleConfig> > __rhs; // [rsp+28h] [rbp-F8h] BYREF
  const data::GachaWishConfig *wish_config_ptr; // [rsp+30h] [rbp-F0h]
  GachaRecord *gacha_record; // [rsp+38h] [rbp-E8h]
  std::shared_ptr<Config> v27; // [rsp+40h] [rbp-E0h] BYREF
  common::milog::MiLogStream v28; // [rsp+50h] [rbp-D0h] BYREF
  char v29[176]; // [rsp+70h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 18 schedule_iter:2058 64 24 30 active_gacha_schedule_vec:2052";
  *(_QWORD *)(v2 + 16) = PlayerGachaComp::onGachaOpenWishNotify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  BasicComp = Player::getBasicComp(this->player_);
  if ( !PlayerBasicComp::isStateOpen(BasicComp, 0x1Fu) )
  {
    common::milog::MiLogStream::create(
      &v28,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/gacha/player_gacha_comp.cpp",
      "onGachaOpenWishNotify",
      2039);
    v6 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
           &v28,
           (const char (*)[33])"OPEN_STATE_GACHA is locked, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    common::milog::MiLogStream::~MiLogStream(&v28);
    v7 = 141;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v27);
    p_gacha_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v27)->design_config.txt_config_mgr.gacha_config_mgr;
    v9 = proto::GachaOpenWishNotify::gacha_type(notify);
    wish_config_ptr = data::GachaExcelConfigMgrBase::findGachaWishConfig(p_gacha_config_mgr, v9);
    std::shared_ptr<Config>::~shared_ptr(&v27);
    if ( wish_config_ptr )
    {
      cur_time = common::tools::TimeUtils::getNow();
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v27);
      v12 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v27);
      data::DbGachaConfigMgr::findActivieGachaSchedules(
        (std::vector<data::GachaScheduleConfig> *)(v2 + 64),
        &v12->design_config.db_config_mgr.db_local_config_mgr.gacha_config_mgr,
        cur_time);
      std::shared_ptr<Config>::~shared_ptr(&v27);
      if ( std::vector<data::GachaScheduleConfig>::empty((const std::vector<data::GachaScheduleConfig> *const)(v2 + 64)) )
      {
        common::milog::MiLogStream::create(
          &v28,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/gacha/player_gacha_comp.cpp",
          "onGachaOpenWishNotify",
          2055);
        v13 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                &v28,
                (const char (*)[31])"No active gacha schedule, uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
        common::milog::MiLogStream::~MiLogStream(&v28);
        v7 = 1401;
      }
      else
      {
        M_current = std::vector<data::GachaScheduleConfig>::end((std::vector<data::GachaScheduleConfig> *const)(v2 + 64))._M_current;
        v15._M_current = std::vector<data::GachaScheduleConfig>::begin((std::vector<data::GachaScheduleConfig> *const)(v2 + 64))._M_current;
        *(__gnu_cxx::__normal_iterator<data::GachaScheduleConfig*,std::vector<data::GachaScheduleConfig> > *)(v2 + 32) = std::find_if<__gnu_cxx::__normal_iterator<data::GachaScheduleConfig *,std::vector<data::GachaScheduleConfig>>,PlayerGachaComp::onGachaOpenWishNotify(proto::GachaOpenWishNotify const&)::{lambda(__gnu_cxx::__normal_iterator<data::GachaScheduleConfig *,std::vector<data::GachaScheduleConfig>> const&)#1}>(v15, (__gnu_cxx::__normal_iterator<data::GachaScheduleConfig*,std::vector<data::GachaScheduleConfig> >)M_current, (PlayerGachaComp::onGachaOpenWishNotify::<lambda(const auto:39&)>)notify);
        __rhs._M_current = std::vector<data::GachaScheduleConfig>::end((std::vector<data::GachaScheduleConfig> *const)(v2 + 64))._M_current;
        if ( __gnu_cxx::operator==<data::GachaScheduleConfig *,std::vector<data::GachaScheduleConfig>>(
               (const __gnu_cxx::__normal_iterator<data::GachaScheduleConfig*,std::vector<data::GachaScheduleConfig> > *)(v2 + 32),
               &__rhs) )
        {
          common::milog::MiLogStream::create(
            &v28,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/gacha/player_gacha_comp.cpp",
            "onGachaOpenWishNotify",
            2064);
          v16 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                  &v28,
                  (const char (*)[39])"no matched gacha schedule, gacha_type:");
          v17 = proto::GachaOpenWishNotify::gacha_type(notify);
          __rhs._M_current = (data::GachaScheduleConfig *)data::enumValToStr((data::GachaType)v17);
          v18 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v16, (const char *const *)&__rhs);
          v19 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                  v18,
                  (const char (*)[14])" schedule_id:");
          val = proto::GachaOpenWishNotify::gacha_schedule_id(notify);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &val);
          common::milog::MiLogStream::~MiLogStream(&v28);
          v7 = 1403;
        }
        else
        {
          v20 = __gnu_cxx::__normal_iterator<data::GachaScheduleConfig *,std::vector<data::GachaScheduleConfig>>::operator*((const __gnu_cxx::__normal_iterator<data::GachaScheduleConfig*,std::vector<data::GachaScheduleConfig> > *const)(v2 + 32));
          gacha_record = PlayerGachaComp::getGachaRecord(this, v20);
          if ( *(char *)(((unsigned __int64)&gacha_record->is_new_wish >> 3) + 0x7FFF8000) < 0 )
            __asan_report_store1(&gacha_record->is_new_wish, v20, &gacha_record->is_new_wish);
          gacha_record->is_new_wish = 0;
          v7 = 0;
        }
      }
      std::vector<data::GachaScheduleConfig>::~vector((std::vector<data::GachaScheduleConfig> *const)(v2 + 64));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v28,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/gacha/player_gacha_comp.cpp",
        "onGachaOpenWishNotify",
        2046);
      v10 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
              &v28,
              (const char (*)[32])"findGachaWishConfig gacha_type:");
      val = proto::GachaOpenWishNotify::gacha_type(notify);
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
      common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])" fails");
      common::milog::MiLogStream::~MiLogStream(&v28);
      v7 = -1;
    }
  }
  result = v7;
  if ( v29 == (char *)v2 )
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

// Line 2058: range 00000000141DE678-00000000141DE77A
bool __cdecl PlayerGachaComp::onGachaOpenWishNotify::_lambda_const_auto_39___::operator()_data::GachaScheduleConfig_(
        const PlayerGachaComp::onGachaOpenWishNotify::<lambda(const auto:39&)> *const __closure,
        const data::GachaScheduleConfig *o)
{
  data::GachaType gacha_type; // ebx
  uint32_t schedule_id; // ebx

  if ( *(_BYTE *)(((unsigned __int64)&o->gacha_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)o + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&o->gacha_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&o->gacha_type);
  }
  gacha_type = o->gacha_type;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  if ( gacha_type != proto::GachaOpenWishNotify::gacha_type(__closure->__notify) )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)o >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)o >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(o);
  }
  schedule_id = o->schedule_id;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  return schedule_id == proto::GachaOpenWishNotify::gacha_schedule_id(__closure->__notify);
};

// Line 2076: range 00000000141CF26C-00000000141CF9E1
__int64 __fastcall PlayerGachaComp::setWishProgressByGm(PlayerGachaComp *const this, uint32_t progress)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  unsigned int v6; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  data::GachaScheduleConfig *M_current; // r14
  std::vector<data::GachaScheduleConfig>::iterator v11; // rax
  common::milog::MiLogStream *v12; // r14
  const data::GachaScheduleConfig *v13; // rax
  uint32_t *p_wish_max_progress; // rsi
  uint32_t *v15; // rax
  uint32_t *v16; // rdx
  uint32_t v17; // ecx
  char v18; // dl
  __int64 v19; // rdx
  common::milog::MiLogStream *v20; // r14
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  __int64 result; // rax
  unsigned int val; // [rsp+2Ch] [rbp-124h] BYREF
  uint32_t cur_time; // [rsp+30h] [rbp-120h]
  uint32_t before_progress; // [rsp+34h] [rbp-11Ch]
  __gnu_cxx::__normal_iterator<data::GachaScheduleConfig*,std::vector<data::GachaScheduleConfig> > __rhs; // [rsp+38h] [rbp-118h] BYREF
  const data::GachaWishConfig *wish_config_ptr; // [rsp+40h] [rbp-110h]
  GachaRecord *gacha_record; // [rsp+48h] [rbp-108h]
  std::shared_ptr<Config> v30; // [rsp+50h] [rbp-100h] BYREF
  common::milog::MiLogStream v31; // [rsp+60h] [rbp-F0h] BYREF
  char v32[208]; // [rsp+80h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 4 15 gacha_type:2086 48 4 13 progress:2075 64 8 18 schedule_iter:2093 96 24 30 active_gacha"
                        "_schedule_vec:2078";
  *(_QWORD *)(v2 + 16) = PlayerGachaComp::setWishProgressByGm;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  *(_DWORD *)(v2 + 48) = progress;
  cur_time = common::tools::TimeUtils::getNow();
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v30);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v30);
  data::DbGachaConfigMgr::findActivieGachaSchedules(
    (std::vector<data::GachaScheduleConfig> *)(v2 + 96),
    &v5->design_config.db_config_mgr.db_local_config_mgr.gacha_config_mgr,
    cur_time);
  std::shared_ptr<Config>::~shared_ptr(&v30);
  if ( std::vector<data::GachaScheduleConfig>::empty((const std::vector<data::GachaScheduleConfig> *const)(v2 + 96)) )
  {
    common::milog::MiLogStream::create(
      &v31,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/gacha/player_gacha_comp.cpp",
      "setWishProgressByGm",
      2081);
    common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
      &v31,
      (const char (*)[33])"active_gacha_schedule_vec.empty!");
    common::milog::MiLogStream::~MiLogStream(&v31);
    v6 = 0;
  }
  else
  {
    *(_DWORD *)(v2 + 32) = 302;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v30);
    v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v30);
    wish_config_ptr = data::GachaExcelConfigMgrBase::findGachaWishConfig(
                        &v7->design_config.txt_config_mgr.gacha_config_mgr,
                        *(_DWORD *)(v2 + 32));
    std::shared_ptr<Config>::~shared_ptr(&v30);
    if ( wish_config_ptr )
    {
      M_current = std::vector<data::GachaScheduleConfig>::end((std::vector<data::GachaScheduleConfig> *const)(v2 + 96))._M_current;
      v11._M_current = std::vector<data::GachaScheduleConfig>::begin((std::vector<data::GachaScheduleConfig> *const)(v2 + 96))._M_current;
      *(__gnu_cxx::__normal_iterator<data::GachaScheduleConfig*,std::vector<data::GachaScheduleConfig> > *)(v2 + 64) = std::find_if<__gnu_cxx::__normal_iterator<data::GachaScheduleConfig *,std::vector<data::GachaScheduleConfig>>,PlayerGachaComp::setWishProgressByGm(unsigned int)::{lambda(__gnu_cxx::__normal_iterator<data::GachaScheduleConfig *,std::vector<data::GachaScheduleConfig>> const&)#1}>(v11, (__gnu_cxx::__normal_iterator<data::GachaScheduleConfig*,std::vector<data::GachaScheduleConfig> >)M_current, (PlayerGachaComp::setWishProgressByGm::<lambda(const auto:40&)>)(v2 + 32));
      __rhs._M_current = std::vector<data::GachaScheduleConfig>::end((std::vector<data::GachaScheduleConfig> *const)(v2 + 96))._M_current;
      if ( __gnu_cxx::operator==<data::GachaScheduleConfig *,std::vector<data::GachaScheduleConfig>>(
             (const __gnu_cxx::__normal_iterator<data::GachaScheduleConfig*,std::vector<data::GachaScheduleConfig> > *)(v2 + 64),
             &__rhs) )
      {
        common::milog::MiLogStream::create(
          &v31,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/gacha/player_gacha_comp.cpp",
          "setWishProgressByGm",
          2098);
        v12 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                &v31,
                (const char (*)[39])"no matched gacha schedule, gacha_type:");
        __rhs._M_current = (data::GachaScheduleConfig *)data::enumValToStr((data::GachaType)*(_DWORD *)(v2 + 32));
        common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v12, (const char *const *)&__rhs);
        common::milog::MiLogStream::~MiLogStream(&v31);
        v6 = -1;
      }
      else
      {
        v13 = __gnu_cxx::__normal_iterator<data::GachaScheduleConfig *,std::vector<data::GachaScheduleConfig>>::operator*((const __gnu_cxx::__normal_iterator<data::GachaScheduleConfig*,std::vector<data::GachaScheduleConfig> > *const)(v2 + 64));
        gacha_record = PlayerGachaComp::getGachaRecord(this, v13);
        if ( *(_BYTE *)(((unsigned __int64)&gacha_record->wish_item_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&gacha_record->wish_item_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&gacha_record->wish_item_id);
        }
        if ( gacha_record->wish_item_id )
        {
          if ( *(_BYTE *)(((unsigned __int64)&gacha_record->wish_progress >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)gacha_record - 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gacha_record->wish_progress >> 3)
                                                                        + 0x7FFF8000) )
          {
            __asan_report_load4(&gacha_record->wish_progress);
          }
          before_progress = gacha_record->wish_progress;
          p_wish_max_progress = &wish_config_ptr->wish_max_progress;
          v15 = (uint32_t *)std::min<unsigned int>((const unsigned int *)(v2 + 48), &wish_config_ptr->wish_max_progress);
          v16 = v15;
          if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v15);
          }
          v17 = *v16;
          v18 = *(_BYTE *)(((unsigned __int64)&gacha_record->wish_progress >> 3) + 0x7FFF8000);
          LOBYTE(p_wish_max_progress) = v18 != 0;
          v19 = (v18 != 0) & (unsigned __int8)((char)((((_BYTE)gacha_record - 36) & 7) + 3) >= v18);
          if ( (_BYTE)v19 )
            __asan_report_store4(&gacha_record->wish_progress, p_wish_max_progress, v19);
          gacha_record->wish_progress = v17;
          PlayerGachaComp::printWishProgressStatLog(this, gacha_record, before_progress, 5u);
          common::milog::MiLogStream::create(
            &v31,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/gacha/player_gacha_comp.cpp",
            "setWishProgressByGm",
            2112);
          v20 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v31, (const char (*)[5])"uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          val = Player::getUid(this->player_);
          v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &val);
          v22 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                  v21,
                  (const char (*)[15])" set progress:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &gacha_record->wish_progress);
          common::milog::MiLogStream::~MiLogStream(&v31);
          v6 = 0;
        }
        else
        {
          common::milog::MiLogStream::create(
            &v31,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/gacha/player_gacha_comp.cpp",
            "setWishProgressByGm",
            2105);
          common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
            &v31,
            (const char (*)[19])"wish_item_id is 0!");
          common::milog::MiLogStream::~MiLogStream(&v31);
          v6 = 0;
        }
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v31,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/gacha/player_gacha_comp.cpp",
        "setWishProgressByGm",
        2090);
      v8 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
             &v31,
             (const char (*)[32])"findGachaWishConfig gacha_type:");
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v9, (const char (*)[7])" fails");
      common::milog::MiLogStream::~MiLogStream(&v31);
      v6 = -1;
    }
  }
  std::vector<data::GachaScheduleConfig>::~vector((std::vector<data::GachaScheduleConfig> *const)(v2 + 96));
  result = v6;
  if ( v32 == (char *)v2 )
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

// Line 2095: range 00000000141DE854-00000000141DE90F
bool __cdecl PlayerGachaComp::setWishProgressByGm::_lambda_const_auto_40___::operator()_data::GachaScheduleConfig_(
        const PlayerGachaComp::setWishProgressByGm::<lambda(const auto:40&)> *const __closure,
        const data::GachaScheduleConfig *o)
{
  data::GachaType gacha_type; // esi
  uint32_t *v3; // rdx

  if ( *(_BYTE *)(((unsigned __int64)&o->gacha_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)o + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&o->gacha_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&o->gacha_type);
  }
  gacha_type = o->gacha_type;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  v3 = __closure->__gacha_type;
  if ( *(_BYTE *)(((unsigned __int64)__closure->__gacha_type >> 3) + 0x7FFF8000) != 0
    && (char)(((__int64)__closure->__gacha_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__closure->__gacha_type >> 3)
                                                                      + 0x7FFF8000) )
  {
    __asan_report_load4(__closure->__gacha_type);
  }
  return gacha_type == *v3;
};

// Line 2118: range 00000000141CF9E2-00000000141CFA3C
int32_t __cdecl PlayerGachaComp::setDailyGachaTimesByGm(PlayerGachaComp *const this, uint32_t count)
{
  __int64 v2; // rdx

  v2 = (*(_BYTE *)(((unsigned __int64)&this->daily_gacha_times_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->daily_gacha_times_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store4(&this->daily_gacha_times_, (((_BYTE)this + 84) & 7u) + 3, v2);
  this->daily_gacha_times_ = count;
  return 0;
};

// Line 2124: range 00000000141CFA3E-00000000141CFE80
__int64 __fastcall PlayerGachaComp::setCurScheduleDailyGachaTimesByGm(
        PlayerGachaComp *const this,
        uint32_t gacha_type,
        uint32_t count)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // rbx
  common::milog::MiLogStream *v6; // rax
  unsigned int v7; // r14d
  common::milog::MiLogStream *v8; // rax
  uint32_t Now; // edi
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 result; // rax
  GachaRecord *gacha_record; // [rsp+18h] [rbp-238h]
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-230h] BYREF
  char v16[528]; // [rsp+40h] [rbp-210h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(480LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 4 15 gacha_type:2123 48 360 26 gacha_schedule_config:2137";
  *(_QWORD *)(v3 + 16) = PlayerGachaComp::setCurScheduleDailyGachaTimesByGm;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61956;
  v5[536862732] = -218103808;
  v5[536862733] = -202116109;
  v5[536862734] = -202116109;
  *(_DWORD *)(v3 + 32) = gacha_type;
  if ( !data::isValidGachaType(*(_DWORD *)(v3 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/gacha/player_gacha_comp.cpp",
      "setCurScheduleDailyGachaTimesByGm",
      2127);
    v6 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(&v15, (const char (*)[24])byte_2526E180);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v15);
    v7 = -1;
  }
  else if ( *(_DWORD *)(v3 + 32) == 100 )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/gacha/player_gacha_comp.cpp",
      "setCurScheduleDailyGachaTimesByGm",
      2133);
    common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(&v15, (const char (*)[34])byte_2526E1C0);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v7 = -1;
  }
  else
  {
    PlayerGachaComp::findOpenScheduleConfig((data::GachaScheduleConfig *)(v3 + 48), this, *(data::GachaType *)(v3 + 32));
    if ( *(_DWORD *)(v3 + 48) )
    {
      gacha_record = PlayerGachaComp::getGachaRecord(this, (const data::GachaScheduleConfig *)(v3 + 48));
      Now = common::tools::TimeUtils::getNow();
      v10 = (((_BYTE)gacha_record - 28) & 7u) + 3;
      v11 = (*(_BYTE *)(((unsigned __int64)&gacha_record->cur_schedule_daily_last_gacha_time >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)gacha_record - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gacha_record->cur_schedule_daily_last_gacha_time >> 3) + 0x7FFF8000));
      if ( (_BYTE)v11 )
      {
        Now = (_DWORD)gacha_record + 228;
        __asan_report_store4(&gacha_record->cur_schedule_daily_last_gacha_time, v10, v11);
      }
      gacha_record->cur_schedule_daily_last_gacha_time = Now;
      if ( *(_BYTE *)(((unsigned __int64)&gacha_record->cur_schedule_daily_gacha_times >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&gacha_record->cur_schedule_daily_gacha_times >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(
          &gacha_record->cur_schedule_daily_gacha_times,
          v10,
          &gacha_record->cur_schedule_daily_gacha_times);
      }
      gacha_record->cur_schedule_daily_gacha_times = count;
      v7 = 0;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/gacha/player_gacha_comp.cpp",
        "setCurScheduleDailyGachaTimesByGm",
        2140);
      v8 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(&v15, (const char (*)[33])byte_2526E220);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v15);
      v7 = -1;
    }
    data::GachaScheduleConfig::~GachaScheduleConfig((data::GachaScheduleConfig *const)(v3 + 48));
  }
  result = v7;
  if ( v16 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8038) = 0;
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
    *(_DWORD *)((v3 >> 3) + 0x7FFF8038) = -168430091;
  }
  return result;
};

// Line 2151: range 00000000141CFE82-00000000141D025C
__int64 __fastcall PlayerGachaComp::getCurScheduleDailyGachaTimesByGm(PlayerGachaComp *const this, uint32_t gacha_type)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // rbx
  common::milog::MiLogStream *v5; // rax
  uint32_t cur_schedule_daily_gacha_times; // r14d
  common::milog::MiLogStream *v7; // rax
  __int64 result; // rax
  GachaRecord *gacha_record; // [rsp+18h] [rbp-238h]
  common::milog::MiLogStream v10; // [rsp+20h] [rbp-230h] BYREF
  char v11[528]; // [rsp+40h] [rbp-210h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(480LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 4 15 gacha_type:2150 48 360 26 gacha_schedule_config:2164";
  *(_QWORD *)(v2 + 16) = PlayerGachaComp::getCurScheduleDailyGachaTimesByGm;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862732] = -218103808;
  v4[536862733] = -202116109;
  v4[536862734] = -202116109;
  *(_DWORD *)(v2 + 32) = gacha_type;
  if ( !data::isValidGachaType(*(_DWORD *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/gacha/player_gacha_comp.cpp",
      "getCurScheduleDailyGachaTimesByGm",
      2154);
    v5 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(&v10, (const char (*)[24])byte_2526E180);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v10);
    cur_schedule_daily_gacha_times = 0;
  }
  else if ( *(_DWORD *)(v2 + 32) == 100 )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/gacha/player_gacha_comp.cpp",
      "getCurScheduleDailyGachaTimesByGm",
      2160);
    common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(&v10, (const char (*)[34])byte_2526E1C0);
    common::milog::MiLogStream::~MiLogStream(&v10);
    cur_schedule_daily_gacha_times = 0;
  }
  else
  {
    PlayerGachaComp::findOpenScheduleConfig((data::GachaScheduleConfig *)(v2 + 48), this, *(data::GachaType *)(v2 + 32));
    if ( *(_DWORD *)(v2 + 48) )
    {
      gacha_record = PlayerGachaComp::getGachaRecord(this, (const data::GachaScheduleConfig *)(v2 + 48));
      if ( *(_BYTE *)(((unsigned __int64)&gacha_record->cur_schedule_daily_gacha_times >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&gacha_record->cur_schedule_daily_gacha_times >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&gacha_record->cur_schedule_daily_gacha_times);
      }
      cur_schedule_daily_gacha_times = gacha_record->cur_schedule_daily_gacha_times;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v10,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/gacha/player_gacha_comp.cpp",
        "getCurScheduleDailyGachaTimesByGm",
        2167);
      v7 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(&v10, (const char (*)[33])byte_2526E220);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v10);
      cur_schedule_daily_gacha_times = 0;
    }
    data::GachaScheduleConfig::~GachaScheduleConfig((data::GachaScheduleConfig *const)(v2 + 48));
  }
  result = cur_schedule_daily_gacha_times;
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8038) = 0;
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8038) = -168430091;
  }
  return result;
};

// Line 2173: range 00000000141E3F48-00000000141E3F5C
void __cdecl GLOBAL__sub_I_merge_single_player_coop_comp_cpp()
{
  __static_initialization_and_destruction_0(1, 0xFFFF);
};

// Line 2173: range 00000000141E393C-00000000141E3F47
void __cdecl __static_initialization_and_destruction_0(int __initialize_p, int __priority)
{
  const std::_V2::error_category *v2; // rax
  const std::_V2::error_category *v3; // rax
  const std::_V2::error_category *v4; // rax
  const std::_V2::error_category *v5; // rax
  const std::_V2::error_category *v6; // rax
  __int64 v7; // rsi
  const boost::system::error_category *system_category; // rax
  const boost::system::error_category *netdb_category; // rax
  const boost::system::error_category *addrinfo_category; // rax
  const boost::system::error_category *misc_category; // rax
  _BYTE *v12; // rcx
  _BYTE *v13; // rcx
  char v14; // dl
  __int64 v15; // rdx
  _BYTE *v16; // rcx
  _BYTE *v17; // rcx
  char v18; // dl
  __int64 v19; // rdx
  _BYTE *v20; // rcx
  _BYTE *v21; // rcx
  char v22; // dl
  __int64 v23; // rdx
  const char *v24; // rcx
  _BYTE *v25; // rcx
  _BYTE *v26; // rcx
  char v27; // dl
  __int64 v28; // rdx
  _BYTE *v29; // rcx
  _BYTE *v30; // rcx
  char v31; // dl
  __int64 v32; // rdx
  _BYTE *v33; // rcx
  _BYTE *v34; // rcx
  char v35; // dl
  __int64 v36; // rdx
  const char *v37; // rcx

  if ( __initialize_p == 1 )
  {
    __asan_before_dynamic_init("src_merge/merge_single_player_coop_comp.cpp");
    if ( __priority == 0xFFFF )
    {
      std::ios_base::Init::Init(&std::__ioinit);
      __cxa_atexit((void (__fastcall *)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
      v2 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)&std::ios_base::Init::~Init);
      std::error_code::error_code((std::error_code *const)&opentracing::v3::invalid_span_context_error, 1, v2);
      v3 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)&opentracing::v3::invalid_span_context_error);
      std::error_code::error_code((std::error_code *const)&opentracing::v3::invalid_carrier_error, 2, v3);
      v4 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)&opentracing::v3::invalid_carrier_error);
      std::error_code::error_code((std::error_code *const)&opentracing::v3::span_context_corrupted_error, 3, v4);
      v5 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)&opentracing::v3::span_context_corrupted_error);
      std::error_code::error_code((std::error_code *const)&opentracing::v3::key_not_found_error, 4, v5);
      v6 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)&opentracing::v3::key_not_found_error);
      v7 = 5LL;
      std::error_code::error_code((std::error_code *const)&opentracing::v3::lookup_key_not_supported_error, 5, v6);
      boost::none_t::none_t((boost::none_t *const)&boost::none, (boost::none_t::init_tag)5);
      boost::optional_ns::in_place_init_t::in_place_init_t(
        (boost::optional_ns::in_place_init_t *const)&boost::optional_ns::in_place_init,
        (boost::optional_ns::in_place_init_t::init_tag)5);
      boost::optional_ns::in_place_init_if_t::in_place_init_if_t(
        (boost::optional_ns::in_place_init_if_t *const)&boost::optional_ns::in_place_init_if,
        (boost::optional_ns::in_place_init_if_t::init_tag)5);
      system_category = boost::asio::error::get_system_category();
      if ( *(_BYTE *)(((unsigned __int64)&boost::asio::error::system_category >> 3) + 0x7FFF8000) )
        system_category = (const boost::system::error_category *)__asan_report_store8(
                                                                   &boost::asio::error::system_category,
                                                                   5LL);
      boost::asio::error::system_category = system_category;
      netdb_category = boost::asio::error::get_netdb_category();
      if ( *(_BYTE *)(((unsigned __int64)&boost::asio::error::netdb_category >> 3) + 0x7FFF8000) )
        netdb_category = (const boost::system::error_category *)__asan_report_store8(
                                                                  &boost::asio::error::netdb_category,
                                                                  5LL);
      boost::asio::error::netdb_category = netdb_category;
      addrinfo_category = boost::asio::error::get_addrinfo_category();
      if ( *(_BYTE *)(((unsigned __int64)&boost::asio::error::addrinfo_category >> 3) + 0x7FFF8000) )
        addrinfo_category = (const boost::system::error_category *)__asan_report_store8(
                                                                     &boost::asio::error::addrinfo_category,
                                                                     5LL);
      boost::asio::error::addrinfo_category = addrinfo_category;
      misc_category = boost::asio::error::get_misc_category();
      if ( *(_BYTE *)(((unsigned __int64)&boost::asio::error::misc_category >> 3) + 0x7FFF8000) )
        misc_category = (const boost::system::error_category *)__asan_report_store8(
                                                                 &boost::asio::error::misc_category,
                                                                 5LL);
      boost::asio::error::misc_category = misc_category;
      v12 = &`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_);
      }
      if ( !*v12 )
      {
        v13 = &`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_;
        v14 = *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ >> 3)
                       + 0x7FFF8000);
        LOBYTE(v7) = v14 != 0;
        v15 = (v14 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ & 7) >= v14);
        if ( (_BYTE)v15 )
          __asan_report_store1(
            &`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_,
            v7,
            v15);
        *v13 = 1;
        boost::asio::detail::tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context>::tss_ptr(&boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_);
        v7 = (__int64)&boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context>::~tss_ptr,
          &boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_,
          &_dso_handle);
      }
      v16 = &`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_);
      }
      if ( !*v16 )
      {
        v17 = &`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_;
        v18 = *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ >> 3)
                       + 0x7FFF8000);
        LOBYTE(v7) = v18 != 0;
        v19 = (v18 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ & 7) >= v18);
        if ( (_BYTE)v19 )
          __asan_report_store1(
            &`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_,
            v7,
            v19);
        *v17 = 1;
        v7 = (__int64)&boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::posix_global_impl<boost::asio::system_context>::~posix_global_impl,
          &boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_,
          &_dso_handle);
      }
      v20 = &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero);
      }
      if ( !*v20 )
      {
        v21 = &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero;
        v22 = *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                       + 0x7FFF8000);
        LOBYTE(v7) = v22 != 0;
        v23 = (v22 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero & 7) >= v22);
        if ( (_BYTE)v23 )
          __asan_report_store1(
            &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero,
            v7,
            v23);
        *v21 = 1;
        v24 = common::tools::StringStream<common::tools::FixedBuffer<16384>>::digits + 9;
        if ( *(_BYTE *)(((unsigned __int64)&common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                      + 0x7FFF8000) )
          __asan_report_store8(&common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero, v7);
        common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero = v24;
      }
      v25 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id);
      }
      if ( !*v25 )
      {
        v26 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id;
        v27 = *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id >> 3)
                       + 0x7FFF8000);
        LOBYTE(v7) = v27 != 0;
        v28 = (v27 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id & 7) >= v27);
        if ( (_BYTE)v28 )
          __asan_report_store1(
            &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id,
            v7,
            v28);
        *v26 = 1;
        boost::asio::detail::service_id<boost::asio::detail::scheduler>::service_id(&boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id);
        v7 = (__int64)&boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::service_id<boost::asio::detail::scheduler>::~service_id,
          &boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id,
          &_dso_handle);
      }
      v29 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id);
      }
      if ( !*v29 )
      {
        v30 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id;
        v31 = *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id >> 3)
                       + 0x7FFF8000);
        LOBYTE(v7) = v31 != 0;
        v32 = (v31 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id & 7) >= v31);
        if ( (_BYTE)v32 )
          __asan_report_store1(
            &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id,
            v7,
            v32);
        *v30 = 1;
        boost::asio::detail::service_id<boost::asio::detail::epoll_reactor>::service_id(&boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id);
        v7 = (__int64)&boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::service_id<boost::asio::detail::epoll_reactor>::~service_id,
          &boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id,
          &_dso_handle);
      }
      v33 = &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero);
      }
      if ( !*v33 )
      {
        v34 = &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero;
        v35 = *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero >> 3)
                       + 0x7FFF8000);
        LOBYTE(v7) = v35 != 0;
        v36 = (v35 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero & 7) >= v35);
        if ( (_BYTE)v36 )
          __asan_report_store1(
            &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero,
            v7,
            v36);
        *v34 = 1;
        v37 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::digits + 9;
        if ( *(_BYTE *)(((unsigned __int64)&common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero >> 3)
                      + 0x7FFF8000) )
          __asan_report_store8(&common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero, v7);
        common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero = v37;
      }
    }
    __asan_after_dynamic_init();
  }
};
