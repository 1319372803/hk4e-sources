// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_game/common/gcg_statistics.cpp

// Line 23: range 000000000DED5D7E-000000000DED60D2
__int64 __fastcall GCGStatistics::reportStatisticSpecifyDataUint(
        GCGStatistics *const this,
        GCGControllerValue controller_id,
        GCGStatisticSpecifyItemType statistic_type,
        uint32_t value,
        bool is_add)
{
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  _DWORD *v7; // r13
  __int64 result; // rax
  unsigned __int64 v9; // rax
  uint32_t v10; // r14d
  unsigned __int64 v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // r14
  std::unordered_map<proto::GCGStatisticSpecifyItemType,GCGSpecifyData>::mapped_type *v19; // rax
  unsigned int val; // [rsp+28h] [rbp-C8h] BYREF
  unsigned int v24; // [rsp+2Ch] [rbp-C4h] BYREF
  GCGControllerStatistics *controller_statistic; // [rsp+30h] [rbp-C0h]
  std::unordered_map<proto::GCGStatisticSpecifyItemType,GCGSpecifyData> *statistic_specify_item_data_map; // [rsp+38h] [rbp-B8h]
  common::milog::MiLogStream v27; // [rsp+40h] [rbp-B0h] BYREF
  char v28[144]; // [rsp+60h] [rbp-90h] BYREF

  v5 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "3 32 4 16 controller_id:22 48 4 17 statistic_type:22 64 4 8 value:22";
  *(_QWORD *)(v5 + 16) = GCGStatistics::reportStatisticSpecifyDataUint;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556924;
  v7[536862722] = -202116348;
  *(_DWORD *)(v5 + 32) = controller_id;
  *(_DWORD *)(v5 + 48) = statistic_type;
  *(_DWORD *)(v5 + 64) = value;
  if ( !GCGStatistics::isNeedReport(this) )
  {
    result = 0LL;
  }
  else if ( *(_DWORD *)(v5 + 64) )
  {
    controller_statistic = std::map<proto::GCGControllerValue,GCGControllerStatistics>::operator[](
                             &this->statistics_map,
                             (const std::map<proto::GCGControllerValue,GCGControllerStatistics>::key_type *)(v5 + 32));
    statistic_specify_item_data_map = &controller_statistic->statistic_specify_item_data_map;
    if ( is_add )
    {
      v9 = (unsigned __int64)std::unordered_map<proto::GCGStatisticSpecifyItemType,GCGSpecifyData>::operator[](
                               statistic_specify_item_data_map,
                               (const std::unordered_map<proto::GCGStatisticSpecifyItemType,GCGSpecifyData>::key_type *)(v5 + 48));
      if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((v9 >> 3) + 0x7FFF8000) <= 3 )
        v9 = __asan_report_load4(v9);
      *(_DWORD *)v9 += *(_DWORD *)(v5 + 64);
    }
    else
    {
      v10 = *(_DWORD *)(v5 + 64);
      v11 = (unsigned __int64)std::unordered_map<proto::GCGStatisticSpecifyItemType,GCGSpecifyData>::operator[](
                                statistic_specify_item_data_map,
                                (const std::unordered_map<proto::GCGStatisticSpecifyItemType,GCGSpecifyData>::key_type *)(v5 + 48));
      if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((v11 >> 3) + 0x7FFF8000) <= 3 )
        v11 = __asan_report_store4(v11);
      *(_DWORD *)v11 = v10;
    }
    GCGStatistics::updateChallengeByStatisticSpecifyItemType(
      this,
      *(GCGControllerValue *)(v5 + 32),
      *(GCGStatisticSpecifyItemType *)(v5 + 48));
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/card_game/common/gcg_statistics.cpp",
      "reportStatisticSpecifyDataUint",
      46);
    v12 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v27, (const char (*)[15])"[STATISTIC] c:");
    val = *(_DWORD *)(v5 + 32);
    v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
    v14 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v13, (const char (*)[7])" item:");
    v24 = *(_DWORD *)(v5 + 48);
    v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &v24);
    v16 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v15, (const char (*)[8])" value:");
    v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v5 + 64));
    v18 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v17, (const char (*)[8])" final:");
    v19 = std::unordered_map<proto::GCGStatisticSpecifyItemType,GCGSpecifyData>::operator[](
            statistic_specify_item_data_map,
            (const std::unordered_map<proto::GCGStatisticSpecifyItemType,GCGSpecifyData>::key_type *)(v5 + 48));
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &v19->data_uint);
    common::milog::MiLogStream::~MiLogStream(&v27);
    result = 0LL;
  }
  else
  {
    result = 0LL;
  }
  if ( v28 == (char *)v5 )
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
  return result;
};

// Line 54: range 000000000DED60D4-000000000DED63A8
__int64 __fastcall GCGStatistics::reportStatisticSpecifyDataUintVec(
        GCGStatistics *const this,
        GCGControllerValue controller_id,
        GCGStatisticSpecifyItemType statistic_type,
        uint32_t append_value)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  __int64 result; // rax
  std::unordered_map<proto::GCGStatisticSpecifyItemType,GCGSpecifyData>::mapped_type *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r14
  std::unordered_map<proto::GCGStatisticSpecifyItemType,GCGSpecifyData>::mapped_type *v16; // rax
  unsigned int val; // [rsp+20h] [rbp-D0h] BYREF
  unsigned int v20; // [rsp+24h] [rbp-CCh] BYREF
  unsigned __int64 v21; // [rsp+28h] [rbp-C8h] BYREF
  GCGControllerStatistics *controller_statistic; // [rsp+30h] [rbp-C0h]
  std::unordered_map<proto::GCGStatisticSpecifyItemType,GCGSpecifyData> *statistic_specify_item_data_map; // [rsp+38h] [rbp-B8h]
  common::milog::MiLogStream v24; // [rsp+40h] [rbp-B0h] BYREF
  char v25[144]; // [rsp+60h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 32 4 16 controller_id:53 48 4 17 statistic_type:53 64 4 15 append_value:53";
  *(_QWORD *)(v4 + 16) = GCGStatistics::reportStatisticSpecifyDataUintVec;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -202116348;
  *(_DWORD *)(v4 + 32) = controller_id;
  *(_DWORD *)(v4 + 48) = statistic_type;
  *(_DWORD *)(v4 + 64) = append_value;
  if ( GCGStatistics::isNeedReport(this) )
  {
    controller_statistic = std::map<proto::GCGControllerValue,GCGControllerStatistics>::operator[](
                             &this->statistics_map,
                             (const std::map<proto::GCGControllerValue,GCGControllerStatistics>::key_type *)(v4 + 32));
    statistic_specify_item_data_map = &controller_statistic->statistic_specify_item_data_map;
    v8 = std::unordered_map<proto::GCGStatisticSpecifyItemType,GCGSpecifyData>::operator[](
           &controller_statistic->statistic_specify_item_data_map,
           (const std::unordered_map<proto::GCGStatisticSpecifyItemType,GCGSpecifyData>::key_type *)(v4 + 48));
    std::vector<unsigned int>::emplace_back<unsigned int &>(
      &v8->data_uint_vec,
      (unsigned int *)(v4 + 64),
      (unsigned int *)&v8->data_uint_vec);
    GCGStatistics::updateChallengeByStatisticSpecifyItemType(
      this,
      *(GCGControllerValue *)(v4 + 32),
      *(GCGStatisticSpecifyItemType *)(v4 + 48));
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/card_game/common/gcg_statistics.cpp",
      "reportStatisticSpecifyDataUintVec",
      66);
    v9 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v24, (const char (*)[15])"[STATISTIC] c:");
    val = *(_DWORD *)(v4 + 32);
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
    v11 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v10, (const char (*)[7])" item:");
    v20 = *(_DWORD *)(v4 + 48);
    v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &v20);
    v13 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v12, (const char (*)[8])" value:");
    v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v4 + 64));
    v15 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v14, (const char (*)[7])" size:");
    v16 = std::unordered_map<proto::GCGStatisticSpecifyItemType,GCGSpecifyData>::operator[](
            statistic_specify_item_data_map,
            (const std::unordered_map<proto::GCGStatisticSpecifyItemType,GCGSpecifyData>::key_type *)(v4 + 48));
    v21 = std::vector<unsigned int>::size(&v16->data_uint_vec);
    common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v15, &v21);
    common::milog::MiLogStream::~MiLogStream(&v24);
  }
  result = 0LL;
  if ( v25 == (char *)v4 )
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

// Line 74: range 000000000DED63AA-000000000DED63C3
int32_t __cdecl GCGStatistics::reportStatisticCommonDataUint(
        GCGStatistics *const this,
        GCGStatisticCommonItemType statistic_type,
        uint32_t value,
        bool is_add)
{
  return 0;
};

// Line 100: range 000000000DED63C4-000000000DED6623
__int64 __fastcall GCGStatistics::reportStatisticCommonDataUintVec(
        GCGStatistics *const this,
        GCGStatisticCommonItemType statistic_type,
        uint32_t append_value)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  __int64 result; // rax
  std::unordered_map<proto::GCGStatisticCommonItemType,GCGSpecifyData>::mapped_type *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  std::unordered_map<proto::GCGStatisticCommonItemType,GCGSpecifyData>::mapped_type *v13; // rax
  unsigned int val; // [rsp+14h] [rbp-BCh] BYREF
  unsigned __int64 v16; // [rsp+18h] [rbp-B8h] BYREF
  common::milog::MiLogStream v17; // [rsp+20h] [rbp-B0h] BYREF
  char v18[144]; // [rsp+40h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 17 statistic_type:99 64 4 15 append_value:99";
  *(_QWORD *)(v3 + 16) = GCGStatistics::reportStatisticCommonDataUintVec;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116348;
  *(_DWORD *)(v3 + 48) = statistic_type;
  *(_DWORD *)(v3 + 64) = append_value;
  if ( GCGStatistics::isNeedReport(this) )
  {
    v7 = std::unordered_map<proto::GCGStatisticCommonItemType,GCGSpecifyData>::operator[](
           &this->statistic_common_item_map,
           (const std::unordered_map<proto::GCGStatisticCommonItemType,GCGSpecifyData>::key_type *)(v3 + 48));
    std::vector<unsigned int>::emplace_back<unsigned int &>(
      &v7->data_uint_vec,
      (unsigned int *)(v3 + 64),
      (unsigned int *)&v7->data_uint_vec);
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/card_game/common/gcg_statistics.cpp",
      "reportStatisticCommonDataUintVec",
      106);
    v8 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
           &v17,
           (const char (*)[26])"[STATISTIC] common  item:");
    val = *(_DWORD *)(v3 + 48);
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
    v10 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v9, (const char (*)[8])" value:");
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 64));
    v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])" size:");
    v13 = std::unordered_map<proto::GCGStatisticCommonItemType,GCGSpecifyData>::operator[](
            &this->statistic_common_item_map,
            (const std::unordered_map<proto::GCGStatisticCommonItemType,GCGSpecifyData>::key_type *)(v3 + 48));
    v16 = std::vector<unsigned int>::size(&v13->data_uint_vec);
    common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v12, &v16);
    common::milog::MiLogStream::~MiLogStream(&v17);
  }
  result = 0LL;
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

// Line 113: range 000000000DED6624-000000000DED6866
int32_t __cdecl GCGStatistics::reportStatisticOperationData(
        GCGStatistics *const this,
        proto_log::GCGOperationType op_type,
        GCGControllerValue controller_id,
        uint32_t param1,
        std::vector<unsigned int> *p_param_list)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  _DWORD *v7; // r13
  GCGDuel *Duel; // rax
  uint32_t Round; // eax
  google::protobuf::RepeatedField<unsigned int> *v10; // rdx
  proto_log::GCGOperationData *v11; // rax
  proto_log::GCGOperationData *v12; // rdx
  int32_t result; // eax
  char v17[176]; // [rsp+20h] [rbp-B0h] BYREF

  v5 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(128LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 56 24 proto_operation_data:118";
  *(_QWORD *)(v5 + 16) = GCGStatistics::reportStatisticOperationData;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862722] = -218103808;
  v7[536862723] = -202116109;
  if ( GCGStatistics::isNeedReport(this) )
  {
    proto_log::GCGOperationData::GCGOperationData((proto_log::GCGOperationData *const)(v5 + 32));
    proto_log::GCGOperationData::set_operation_type((proto_log::GCGOperationData *const)(v5 + 32), op_type);
    proto_log::GCGOperationData::set_controller_id((proto_log::GCGOperationData *const)(v5 + 32), controller_id);
    if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->game_mode_);
    Duel = GCGGameMode::getDuel(this->game_mode_);
    Round = GCGDuel::getRound(Duel);
    proto_log::GCGOperationData::set_round((proto_log::GCGOperationData *const)(v5 + 32), Round);
    proto_log::GCGOperationData::set_param1((proto_log::GCGOperationData *const)(v5 + 32), param1);
    v10 = proto_log::GCGOperationData::mutable_paramlist((proto_log::GCGOperationData *const)(v5 + 32));
    common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(p_param_list, v10);
    v11 = std::move<proto_log::GCGOperationData &>((proto_log::GCGOperationData *)(v5 + 32));
    std::vector<proto_log::GCGOperationData>::emplace_back<proto_log::GCGOperationData>(
      &this->statistic_operation_vec,
      v11,
      v12);
    proto_log::GCGOperationData::~GCGOperationData((proto_log::GCGOperationData *const)(v5 + 32));
  }
  result = 0;
  if ( v17 == (char *)v5 )
  {
    *(_DWORD *)((v5 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 129: range 000000000DED6868-000000000DED6876
void __cdecl GCGStatistics::setTaskInfo(GCGStatistics *const this, const GCGBothAIAttackTask *task)
{
  ;
};

// Line 141: range 000000000DED6878-000000000DED6882
void __cdecl GCGStatistics::reportBothAIResult(const GCGStatistics *const this)
{
  ;
};

// Line 224: range 000000000DED6884-000000000DED6B36
const GCGSpecifyData *__fastcall GCGStatistics::getStatisticSpecifyData(
        const GCGStatistics *const this,
        GCGControllerValue controller_id,
        GCGStatisticSpecifyItemType statistic_type)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  const GCGSpecifyData *result; // rax
  unsigned int val; // [rsp+14h] [rbp-BCh] BYREF
  std::__detail::_Node_iterator_base<std::pair<const proto::GCGStatisticSpecifyItemType,GCGSpecifyData>,false> __y; // [rsp+18h] [rbp-B8h] BYREF
  const GCGControllerStatistics *controller_statistic; // [rsp+20h] [rbp-B0h]
  const std::unordered_map<proto::GCGStatisticSpecifyItemType,GCGSpecifyData> *statistic_specify_item_data_map; // [rsp+28h] [rbp-A8h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-A0h] BYREF
  char v14[128]; // [rsp+50h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 17 controller_id:223 48 4 18 statistic_type:223 64 8 8 iter:233";
  *(_QWORD *)(v3 + 16) = GCGStatistics::getStatisticSpecifyData;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 32) = controller_id;
  *(_DWORD *)(v3 + 48) = statistic_type;
  if ( !(_BYTE)`guard variable for'GCGStatistics::getStatisticSpecifyData(proto::GCGControllerValue,proto::GCGStatisticSpecifyItemType)::empty_specify_data
    && __cxa_guard_acquire(&`guard variable for'GCGStatistics::getStatisticSpecifyData(proto::GCGControllerValue,proto::GCGStatisticSpecifyItemType)::empty_specify_data) )
  {
    GCGSpecifyData::GCGSpecifyData((GCGSpecifyData *const)&GCGStatistics::getStatisticSpecifyData(proto::GCGControllerValue,proto::GCGStatisticSpecifyItemType)const::empty_specify_data);
    __cxa_guard_release(&`guard variable for'GCGStatistics::getStatisticSpecifyData(proto::GCGControllerValue,proto::GCGStatisticSpecifyItemType)::empty_specify_data);
    __cxa_atexit(
      (void (__fastcall *)(void *))GCGSpecifyData::~GCGSpecifyData,
      (void *)&GCGStatistics::getStatisticSpecifyData(proto::GCGControllerValue,proto::GCGStatisticSpecifyItemType)const::empty_specify_data,
      &_dso_handle);
  }
  if ( std::map<proto::GCGControllerValue,GCGControllerStatistics>::count(
         &this->statistics_map,
         (const std::map<proto::GCGControllerValue,GCGControllerStatistics>::key_type *)(v3 + 32)) )
  {
    controller_statistic = std::map<proto::GCGControllerValue,GCGControllerStatistics>::at(
                             &this->statistics_map,
                             (const std::map<proto::GCGControllerValue,GCGControllerStatistics>::key_type *)(v3 + 32));
    statistic_specify_item_data_map = &controller_statistic->statistic_specify_item_data_map;
    *(std::unordered_map<proto::GCGStatisticSpecifyItemType,GCGSpecifyData>::const_iterator *)(v3 + 64) = std::unordered_map<proto::GCGStatisticSpecifyItemType,GCGSpecifyData>::find(&controller_statistic->statistic_specify_item_data_map, (const std::unordered_map<proto::GCGStatisticSpecifyItemType,GCGSpecifyData>::key_type *)(v3 + 48));
    __y._M_cur = std::unordered_map<proto::GCGStatisticSpecifyItemType,GCGSpecifyData>::end(statistic_specify_item_data_map)._M_cur;
    if ( std::__detail::operator!=<std::pair<proto::GCGStatisticSpecifyItemType const,GCGSpecifyData>,false>(
           (const std::__detail::_Node_iterator_base<std::pair<const proto::GCGStatisticSpecifyItemType,GCGSpecifyData>,false> *)(v3 + 64),
           &__y) )
    {
      result = &std::__detail::_Node_const_iterator<std::pair<proto::GCGStatisticSpecifyItemType const,GCGSpecifyData>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<const proto::GCGStatisticSpecifyItemType,GCGSpecifyData>,false,false> *const)(v3 + 64))->second;
    }
    else
    {
      result = &GCGStatistics::getStatisticSpecifyData(proto::GCGControllerValue,proto::GCGStatisticSpecifyItemType)const::empty_specify_data;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/common/gcg_statistics.cpp",
      "getStatisticSpecifyData",
      228);
    v6 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(&v13, (const char (*)[12])off_1BB5A840);
    val = *(_DWORD *)(v3 + 32);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    result = &GCGStatistics::getStatisticSpecifyData(proto::GCGControllerValue,proto::GCGStatisticSpecifyItemType)const::empty_specify_data;
  }
  if ( v14 == (char *)v3 )
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

// Line 242: range 000000000DED6B38-000000000DED6CE7
const GCGSpecifyData *__fastcall GCGStatistics::getStatisticCommonData(
        const GCGStatistics *const this,
        GCGStatisticCommonItemType statistic_type)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const GCGSpecifyData *result; // rax
  std::__detail::_Node_iterator_base<std::pair<const proto::GCGStatisticCommonItemType,GCGSpecifyData>,false> __y; // [rsp+18h] [rbp-88h] BYREF
  char v7[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 18 statistic_type:241 64 8 8 iter:244";
  *(_QWORD *)(v2 + 16) = GCGStatistics::getStatisticCommonData;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = statistic_type;
  if ( !(_BYTE)`guard variable for'GCGStatistics::getStatisticCommonData(proto::GCGStatisticCommonItemType)::empty_specify_data
    && __cxa_guard_acquire(&`guard variable for'GCGStatistics::getStatisticCommonData(proto::GCGStatisticCommonItemType)::empty_specify_data) )
  {
    GCGSpecifyData::GCGSpecifyData((GCGSpecifyData *const)&GCGStatistics::getStatisticCommonData(proto::GCGStatisticCommonItemType)const::empty_specify_data);
    __cxa_guard_release(&`guard variable for'GCGStatistics::getStatisticCommonData(proto::GCGStatisticCommonItemType)::empty_specify_data);
    __cxa_atexit(
      (void (__fastcall *)(void *))GCGSpecifyData::~GCGSpecifyData,
      (void *)&GCGStatistics::getStatisticCommonData(proto::GCGStatisticCommonItemType)const::empty_specify_data,
      &_dso_handle);
  }
  *(std::unordered_map<proto::GCGStatisticCommonItemType,GCGSpecifyData>::const_iterator *)(v2 + 64) = std::unordered_map<proto::GCGStatisticCommonItemType,GCGSpecifyData>::find(&this->statistic_common_item_map, (const std::unordered_map<proto::GCGStatisticCommonItemType,GCGSpecifyData>::key_type *)(v2 + 48));
  __y._M_cur = std::unordered_map<proto::GCGStatisticCommonItemType,GCGSpecifyData>::end(&this->statistic_common_item_map)._M_cur;
  if ( std::__detail::operator!=<std::pair<proto::GCGStatisticCommonItemType const,GCGSpecifyData>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<const proto::GCGStatisticCommonItemType,GCGSpecifyData>,false> *)(v2 + 64),
         &__y) )
  {
    result = &std::__detail::_Node_const_iterator<std::pair<proto::GCGStatisticCommonItemType const,GCGSpecifyData>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<const proto::GCGStatisticCommonItemType,GCGSpecifyData>,false,false> *const)(v2 + 64))->second;
  }
  else
  {
    result = &GCGStatistics::getStatisticCommonData(proto::GCGStatisticCommonItemType)const::empty_specify_data;
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

// Line 253: range 000000000DED6CE8-000000000DED6D32
bool __cdecl GCGStatistics::isNeedReport(GCGStatistics *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  return !GCGGameMode::isDuringSnapshot(this->game_mode_);
};

// Line 258: range 000000000DED6D34-000000000DED7049
void __cdecl GCGStatistics::updateChallengeByStatisticSpecifyItemType(
        GCGStatistics *const this,
        GCGControllerValue controller_id,
        GCGStatisticSpecifyItemType statistic_type)
{
  switch ( statistic_type )
  {
    case BEING_HEAL_SUM:
      if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->game_mode_);
      GCGGameMode::updatePlayerControllerChallengeByType(this->game_mode_, controller_id, GCG_CHALLENGE_BEING_HEAL_SUM);
      break;
    case SHIELD_REDUCE_SUM:
      if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->game_mode_);
      GCGGameMode::updatePlayerControllerChallengeByType(
        this->game_mode_,
        controller_id,
        GCG_CHALLENGE_SHIELD_REDUCE_SUM);
      break;
    case ELEMENT_REACTION_TIMES:
      if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->game_mode_);
      GCGGameMode::updatePlayerControllerChallengeByType(
        this->game_mode_,
        controller_id,
        GCG_CHALLENGE_ELEMENT_REACTION_TIMES);
      break;
    case ONE_HIT_DAMAGE_VEC:
      if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->game_mode_);
      GCGGameMode::updatePlayerControllerChallengeByType(
        this->game_mode_,
        controller_id,
        GCG_CHALLENGE_ONE_HIT_DAMAGE_TIMES);
      break;
    case PLAY_CARD_TIMES:
      if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->game_mode_);
      GCGGameMode::updatePlayerControllerChallengeByType(this->game_mode_, controller_id, GCG_CHALLENGE_PLAY_CARD_TIMES);
      break;
    case SUMMON_TIMES:
      if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->game_mode_);
      GCGGameMode::updatePlayerControllerChallengeByType(this->game_mode_, controller_id, GCG_CHALLENGE_SUMMON_TIMES);
      if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->game_mode_);
      GCGGameMode::updatePlayerControllerChallengeByType(this->game_mode_, controller_id, GCG_CHALLENGE_SUMMON_TIMES_X);
      break;
    case SKILL_TAG_Q_TIMES:
      if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->game_mode_);
      GCGGameMode::updatePlayerControllerChallengeByType(
        this->game_mode_,
        controller_id,
        GCG_CHALLENGE_SKILL_TAG_Q_TIMES);
      break;
    case ONE_OPERATION_KILL_COUNT_VEC:
      if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->game_mode_);
      GCGGameMode::updatePlayerControllerChallengeByType(
        this->game_mode_,
        controller_id,
        GCG_CHALLENGE_ONE_OPERATION_KILL_COUNT_TIMES);
      break;
    case CHARACTER_DIE_TIMES:
      if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->game_mode_);
      GCGGameMode::updatePlayerControllerChallengeByType(
        this->game_mode_,
        controller_id,
        GCG_CHALLENGE_DEAD_CHARACTER_NUM);
      break;
    default:
      return;
  }
};
