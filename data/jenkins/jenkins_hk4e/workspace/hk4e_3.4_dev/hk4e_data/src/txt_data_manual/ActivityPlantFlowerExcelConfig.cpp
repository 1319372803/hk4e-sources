// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ActivityPlantFlowerExcelConfig.cpp

// Line 19: range 0000000012C99CB4-0000000012C99D0F
int32_t __cdecl ActivityPlantFlowerExcelConfigMgr::rewriteConfig(
        ActivityPlantFlowerExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  if ( ActivityPlantFlowerExcelConfigMgr::rewritePlantFlowerConfig(this, txt_config_mgr)
    || ActivityPlantFlowerExcelConfigMgr::rewritePlantFlowerDailyConfig(this, txt_config_mgr) )
  {
    return -1;
  }
  else
  {
    return 0;
  }
};

// Line 29: range 0000000012C99D10-0000000012C99D6B
int32_t __cdecl ActivityPlantFlowerExcelConfigMgr::checkConfig(
        ActivityPlantFlowerExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  if ( ActivityPlantFlowerExcelConfigMgr::checkPlantFlowerConfig(this, txt_config_mgr)
    || ActivityPlantFlowerExcelConfigMgr::checkPlantFlowerDailyConfig(this, txt_config_mgr) )
  {
    return -1;
  }
  else
  {
    return 0;
  }
};

// Line 40: range 0000000012C99D6C-0000000012C9A352
const data::ActivityPlantFlowerDailyExcelConfig *__fastcall ActivityPlantFlowerExcelConfigMgr::findDailyConfig(
        const ActivityPlantFlowerExcelConfigMgr *const this,
        uint32_t schedule_id,
        uint32_t daily_index)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  const data::ActivityPlantFlowerDailyExcelConfig *result; // rax
  common::milog::MiLogStream *v8; // rax
  unsigned __int64 v9; // r14
  std::vector<unsigned int>::size_type v10; // rsi
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v11; // rax
  int *v12; // rdx
  int v13; // ecx
  char v14; // al
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  const data::ActivityPlantFlowerMainExcelConfig *plant_flower_config_ptr; // [rsp+20h] [rbp-160h]
  const data::ActivityPlantFlowerDailyExcelConfig *daily_config_ptr; // [rsp+28h] [rbp-158h]
  char v23[336]; // [rsp+30h] [rbp-150h] BYREF

  v3 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(288LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 48 4 18 daily_config_id:55 64 4 14 schedule_id:39 80 4 14 daily_index:39 96 32 9 <unknown> 160"
                        " 32 9 <unknown> 224 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityPlantFlowerExcelConfigMgr::findDailyConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862724] = -218959118;
  v5[536862726] = -218959118;
  v5[536862728] = -202116109;
  *(_DWORD *)(v3 + 64) = schedule_id;
  *(_DWORD *)(v3 + 80) = daily_index;
  plant_flower_config_ptr = data::ActivityPlantFlowerExcelConfigMgrBase::findActivityPlantFlowerMainExcelConfig(
                              this,
                              *(unsigned int *)(v3 + 64));
  if ( plant_flower_config_ptr )
  {
    if ( std::vector<unsigned int>::empty(&plant_flower_config_ptr->daily_config_id_list) )
    {
      if ( *(char *)(((v3 + 160) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 191) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 65) & 7) >= *(_BYTE *)(((v3 + 191) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 160, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 160),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/txt_data_manual/ActivityPlantFlowerExcelConfig.cpp",
        "findDailyConfig",
        50);
      v8 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
             (common::milog::MiLogStream *const)(v3 + 160),
             (const char (*)[63])"plant flower activity daily config id list empty, schedule_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 64));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
      result = 0LL;
    }
    else
    {
      v9 = (unsigned int)(*(_DWORD *)(v3 + 80) - 1);
      v10 = (unsigned int)(v9 % std::vector<unsigned int>::size(&plant_flower_config_ptr->daily_config_id_list));
      v11 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                  &plant_flower_config_ptr->daily_config_id_list,
                                                                                                  v10);
      v12 = (int *)v11;
      if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v11);
      }
      v13 = *v12;
      v14 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
      if ( v14 != 0 && v14 <= 3 )
      {
        LOBYTE(v10) = v14 != 0;
        __asan_report_store4(v3 + 48, v10);
      }
      *(_DWORD *)(v3 + 48) = v13;
      daily_config_ptr = data::ActivityPlantFlowerExcelConfigMgrBase::findActivityPlantFlowerDailyExcelConfig(
                           this,
                           *(unsigned int *)(v3 + 48));
      if ( daily_config_ptr )
      {
        result = daily_config_ptr;
      }
      else
      {
        if ( *(char *)(((v3 + 224) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 255) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 32 + 31) & 7) >= *(_BYTE *)(((v3 + 255) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 224, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 224),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/txt_data_manual/ActivityPlantFlowerExcelConfig.cpp",
          "findDailyConfig",
          59);
        v15 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
                (common::milog::MiLogStream *const)(v3 + 224),
                (const char (*)[63])"findActivityPlantFlowerDailyExcelConfig fail, daily_config_id:");
        v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v15,
                (const unsigned int *)(v3 + 48));
        v17 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v16, (const char (*)[14])" schedule_id:");
        v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v17,
                (const unsigned int *)(v3 + 64));
        v19 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v18, (const char (*)[14])" daily_index:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v3 + 80));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
        result = 0LL;
      }
    }
  }
  else
  {
    if ( *(char *)(((v3 + 96) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 127) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 127) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 96, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 96),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/txt_data_manual/ActivityPlantFlowerExcelConfig.cpp",
      "findDailyConfig",
      44);
    v6 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
           (common::milog::MiLogStream *const)(v3 + 96),
           (const char (*)[58])"findActivityPlantFlowerMainExcelConfig fail, schedule_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 64));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
    result = 0LL;
  }
  if ( v23 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
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

// Line 66: range 0000000012C9A354-0000000012C9A614
bool __fastcall ActivityPlantFlowerExcelConfigMgr::isFlowerGatherId(
        const ActivityPlantFlowerExcelConfigMgr *const this,
        __int64 schedule_id,
        uint32_t home_gather_id)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::unordered_map<unsigned int,std::unordered_set<unsigned int>> *p_schedule_flower_home_gather_id_map; // rdx
  std::unordered_map<unsigned int,std::unordered_set<unsigned int>> *v7; // rdx
  char *v8; // rsi
  bool v9; // al
  bool result; // al
  std::unordered_set<unsigned int> *flower_home_gather_id_set; // [rsp+18h] [rbp-E8h]
  char v13[224]; // [rsp+20h] [rbp-E0h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 32 4 14 schedule_id:65 48 4 17 home_gather_id:65 64 8 7 iter:67 96 8 9 <unknown> 128 8 9 <unkn"
                        "own> 160 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityPlantFlowerExcelConfigMgr::isFlowerGatherId;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -202116352;
  *(_DWORD *)(v3 + 32) = schedule_id;
  *(_DWORD *)(v3 + 48) = home_gather_id;
  p_schedule_flower_home_gather_id_map = &this->schedule_flower_home_gather_id_map_;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, schedule_id);
  *(std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::find(p_schedule_flower_home_gather_id_map, (const std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::key_type *)(v3 + 32));
  v7 = &this->schedule_flower_home_gather_id_map_;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 32);
  *(std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::end(v7);
  v8 = (char *)(v3 + 96);
  v9 = std::__detail::operator==<std::pair<unsigned int const,std::unordered_set<unsigned int>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_set<unsigned int> >,false> *)(v3 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_set<unsigned int> >,false> *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v9 )
  {
    result = 0;
  }
  else
  {
    flower_home_gather_id_set = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_set<unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_set<unsigned int> >,false,false> *const)(v3 + 64))->second;
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, v8);
    *(std::unordered_set<unsigned int>::const_iterator *)(v3 + 160) = std::unordered_set<unsigned int>::end(flower_home_gather_id_set);
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, v8);
    *(std::unordered_set<unsigned int>::const_iterator *)(v3 + 128) = std::unordered_set<unsigned int>::find(
                                                                        flower_home_gather_id_set,
                                                                        (const std::unordered_set<unsigned int>::key_type *)(v3 + 48));
    result = std::__detail::operator!=<unsigned int,false>(
               (const std::__detail::_Node_iterator_base<unsigned int,false> *)(v3 + 128),
               (const std::__detail::_Node_iterator_base<unsigned int,false> *)(v3 + 160));
  }
  if ( v13 == (char *)v3 )
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

// Line 78: range 0000000012C9A616-0000000012C9ABCA
int32_t __cdecl ActivityPlantFlowerExcelConfigMgr::rewritePlantFlowerConfig(
        ActivityPlantFlowerExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char *v5; // rsi
  std::vector<unsigned int>::reference v6; // rax
  _DWORD *v7; // rdx
  char v8; // cl
  char v9; // al
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v10; // rax
  unsigned int *v11; // rdx
  __int64 v12; // rsi
  std::unordered_set<unsigned int> *v13; // rax
  int32_t result; // eax
  data::ActivityPlantFlowerMainExcelConfigMap *__for_range; // [rsp+20h] [rbp-140h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityPlantFlowerMainExcelConfig>,false,false>::reference __in; // [rsp+28h] [rbp-138h]
  const std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::key_type *schedule_id; // [rsp+30h] [rbp-130h]
  std::tuple_element<1,std::pair<unsigned int const,data::ActivityPlantFlowerMainExcelConfig> >::type *config; // [rsp+38h] [rbp-128h]
  std::vector<unsigned int> *__for_range_0; // [rsp+40h] [rbp-120h]
  data::HomeWorldPlantExcelConfig *home_plant_config_ptr; // [rsp+48h] [rbp-118h]
  const std::vector<data::ConfigHomeGather> *__for_range_1; // [rsp+50h] [rbp-110h]
  const data::ConfigHomeGather *home_gather_config; // [rsp+58h] [rbp-108h]
  char v24[256]; // [rsp+60h] [rbp-100h] BYREF

  v2 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 32 8 14 __for_begin:80 64 8 12 __for_end:80 96 8 14 __for_begin:87 128 8 12 __for_end:87 160 8"
                        " 14 __for_begin:92 192 8 12 __for_end:92";
  *(_QWORD *)(v2 + 16) = ActivityPlantFlowerExcelConfigMgr::rewritePlantFlowerConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862726] = -202116352;
  std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::clear(&this->schedule_flower_home_gather_id_map_);
  __for_range = &this->activity_plant_flower_main_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityPlantFlowerMainExcelConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::ActivityPlantFlowerMainExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityPlantFlowerMainExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ActivityPlantFlowerMainExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v5 = (char *)(v2 + 64);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::ActivityPlantFlowerMainExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityPlantFlowerMainExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityPlantFlowerMainExcelConfig>,false> *)(v2 + 64)) )
      break;
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityPlantFlowerMainExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityPlantFlowerMainExcelConfig>,false,false> *const)(v2 + 32));
    schedule_id = std::get<0ul,unsigned int const,data::ActivityPlantFlowerMainExcelConfig>(__in);
    for ( config = std::get<1ul,unsigned int const,data::ActivityPlantFlowerMainExcelConfig>(__in);
          ;
          std::vector<unsigned int>::pop_back(&config->daily_config_id_list) )
    {
      if ( std::vector<unsigned int>::empty(&config->daily_config_id_list) )
        goto LABEL_16;
      v6 = std::vector<unsigned int>::back(&config->daily_config_id_list);
      v7 = v6;
      v8 = *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000);
      LOBYTE(v5) = v8 != 0;
      if ( v8 != 0 && (char)(((unsigned __int8)v6 & 7) + 3) >= v8 )
        __asan_report_load4(v6);
      if ( *v7 )
LABEL_16:
        v9 = 0;
      else
        v9 = 1;
      if ( !v9 )
        break;
    }
    __for_range_0 = &config->seed_id_list;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v5);
    *(std::vector<unsigned int>::iterator *)(v2 + 96) = std::vector<unsigned int>::begin(__for_range_0);
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 128, v5);
    *(std::vector<unsigned int>::iterator *)(v2 + 128) = std::vector<unsigned int>::end(__for_range_0);
    while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v2 + 96),
              (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v2 + 128)) )
    {
      v10 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v2 + 96));
      v11 = v10;
      if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v10);
      }
      v12 = *v11;
      home_plant_config_ptr = data::HomeWorldExcelConfigMgrBase::findHomeWorldPlantExcelConfig(
                                &txt_config_mgr->home_config_mgr,
                                v12);
      if ( home_plant_config_ptr )
      {
        __for_range_1 = &home_plant_config_ptr->config_home_gather;
        *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 160, v12);
        *(std::vector<data::ConfigHomeGather>::const_iterator *)(v2 + 160) = std::vector<data::ConfigHomeGather>::begin(__for_range_1);
        *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 192, v12);
        *(std::vector<data::ConfigHomeGather>::const_iterator *)(v2 + 192) = std::vector<data::ConfigHomeGather>::end(__for_range_1);
        while ( __gnu_cxx::operator!=<data::ConfigHomeGather const*,std::vector<data::ConfigHomeGather>>(
                  (const __gnu_cxx::__normal_iterator<const data::ConfigHomeGather*,std::vector<data::ConfigHomeGather> > *)(v2 + 160),
                  (const __gnu_cxx::__normal_iterator<const data::ConfigHomeGather*,std::vector<data::ConfigHomeGather> > *)(v2 + 192)) )
        {
          home_gather_config = __gnu_cxx::__normal_iterator<data::ConfigHomeGather const*,std::vector<data::ConfigHomeGather>>::operator*((const __gnu_cxx::__normal_iterator<const data::ConfigHomeGather*,std::vector<data::ConfigHomeGather> > *const)(v2 + 160));
          v13 = std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::operator[](
                  &this->schedule_flower_home_gather_id_map_,
                  schedule_id);
          std::unordered_set<unsigned int>::insert(v13, &home_gather_config->home_gather_id);
          __gnu_cxx::__normal_iterator<data::ConfigHomeGather const*,std::vector<data::ConfigHomeGather>>::operator++((__gnu_cxx::__normal_iterator<const data::ConfigHomeGather*,std::vector<data::ConfigHomeGather> > *const)(v2 + 160));
        }
        *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
      }
      __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v2 + 96));
    }
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityPlantFlowerMainExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityPlantFlowerMainExcelConfig>,false,false> *const)(v2 + 32));
  }
  result = 0;
  if ( v24 == (char *)v2 )
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
  return result;
};

// Line 103: range 0000000012C9ABCC-0000000012C9BF3D
int32_t __cdecl ActivityPlantFlowerExcelConfigMgr::checkPlantFlowerConfig(
        ActivityPlantFlowerExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  char *v6; // rsi
  std::vector<unsigned int>::size_type v7; // r15
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rdx
  char *v10; // rsi
  unsigned int *v11; // rax
  int *v12; // rdx
  int v13; // ecx
  char v14; // al
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rdx
  char *v19; // rsi
  unsigned int *v20; // rax
  int *v21; // rdx
  int v22; // ecx
  char v23; // al
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rdx
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  __int64 v29; // rsi
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rdx
  int v32; // eax
  char *v33; // rsi
  unsigned int *v34; // rax
  int *v35; // rdx
  int v36; // ecx
  char v37; // al
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rdx
  char *v42; // rsi
  unsigned int *v43; // rax
  int *v44; // rdx
  int v45; // ecx
  char v46; // al
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // rax
  common::milog::MiLogStream *v50; // rdx
  int32_t ret; // [rsp+20h] [rbp-3A0h]
  data::ActivityPlantFlowerMainExcelConfigMap *__for_range; // [rsp+28h] [rbp-398h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityPlantFlowerMainExcelConfig>,false,false>::reference v55; // [rsp+30h] [rbp-390h]
  std::tuple_element<0,std::pair<unsigned int const,data::ActivityPlantFlowerMainExcelConfig> >::type *schedule_id; // [rsp+38h] [rbp-388h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ActivityPlantFlowerMainExcelConfig> >::type *config; // [rsp+40h] [rbp-380h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+48h] [rbp-378h]
  const std::vector<unsigned int> *__for_range_1; // [rsp+50h] [rbp-370h]
  const std::vector<unsigned int> *__for_range_2; // [rsp+60h] [rbp-360h]
  const std::vector<unsigned int> *__for_range_3; // [rsp+68h] [rbp-358h]
  char v62[848]; // [rsp+70h] [rbp-350h] BYREF

  v3 = (unsigned __int64)v62;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(800LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "20 32 4 13 flower_id:114 48 4 19 daily_config_id:124 64 4 13 reward_id:141 80 4 11 seed_id:151 9"
                        "6 8 15 __for_begin:105 128 8 13 __for_end:105 160 8 15 __for_begin:114 192 8 13 __for_end:114 22"
                        "4 8 15 __for_begin:124 256 8 13 __for_end:124 288 8 15 __for_begin:141 320 8 13 __for_end:141 35"
                        "2 8 15 __for_begin:151 384 8 13 __for_end:151 416 32 9 <unknown> 480 32 9 <unknown> 544 32 9 <un"
                        "known> 608 32 9 <unknown> 672 32 9 <unknown> 736 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityPlantFlowerExcelConfigMgr::checkPlantFlowerConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -234556924;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -218959360;
  v5[536862727] = -218959360;
  v5[536862728] = -218959360;
  v5[536862729] = -218959360;
  v5[536862730] = -218959360;
  v5[536862731] = -218959360;
  v5[536862732] = -218959360;
  v5[536862734] = -218959118;
  v5[536862736] = -218959118;
  v5[536862738] = -218959118;
  v5[536862740] = -218959118;
  v5[536862742] = -218959118;
  v5[536862744] = -202116109;
  ret = 0;
  __for_range = &this->activity_plant_flower_main_excel_config_map;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityPlantFlowerMainExcelConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::ActivityPlantFlowerMainExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 128, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityPlantFlowerMainExcelConfig>::iterator *)(v3 + 128) = std::unordered_map<unsigned int,data::ActivityPlantFlowerMainExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v6 = (char *)(v3 + 128);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::ActivityPlantFlowerMainExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityPlantFlowerMainExcelConfig>,false> *)(v3 + 96),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityPlantFlowerMainExcelConfig>,false> *)(v3 + 128)) )
    {
      v32 = 1;
      goto LABEL_82;
    }
    v55 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityPlantFlowerMainExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityPlantFlowerMainExcelConfig>,false,false> *const)(v3 + 96));
    schedule_id = std::get<0ul,unsigned int const,data::ActivityPlantFlowerMainExcelConfig>(v55);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::ActivityPlantFlowerMainExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ActivityPlantFlowerMainExcelConfig>(v55);
    v7 = std::vector<unsigned int>::size(&config->daily_config_id_list);
    if ( v7 != std::vector<unsigned int>::size(&config->seed_reward_id_list) )
    {
      *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 416) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 447) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 65) & 7) >= *(_BYTE *)(((v3 + 447) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 416, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 416),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityPlantFlowerExcelConfig.cpp",
        "checkPlantFlowerConfig",
        109);
      v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 416),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v9 = common::milog::MiLogStream::operator<<<char [82],(char *[82])0>(v8, (const char (*)[82])byte_1AA70780);
      v6 = (char *)schedule_id;
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, schedule_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 416));
      *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    __for_range_0 = &config->flower_id_list;
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, v6);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 160) = std::vector<unsigned int>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 192, v6);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 192) = std::vector<unsigned int>::end(__for_range_0);
    while ( 1 )
    {
      v10 = (char *)(v3 + 192);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 160),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 192)) )
        break;
      *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 4;
      v11 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 160));
      v12 = (int *)v11;
      if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v11);
      }
      v13 = *v12;
      v14 = *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000);
      if ( v14 != 0 && v14 <= 3 )
      {
        LOBYTE(v10) = v14 != 0;
        __asan_report_store4(v3 + 32, v10);
      }
      *(_DWORD *)(v3 + 32) = v13;
      if ( !HomeWorldExcelConfigMgr::isCustomNodeFurnitrue(&txt_config_mgr->home_config_mgr, *(_DWORD *)(v3 + 32)) )
      {
        *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 480) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 511) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 32 + 31) & 7) >= *(_BYTE *)(((v3 + 511) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 480, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 480),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityPlantFlowerExcelConfig.cpp",
          "checkPlantFlowerConfig",
          118);
        v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 480),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v16 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(v15, (const char (*)[52])byte_1AA70800);
        v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v16,
                (const unsigned int *)(v3 + 32));
        v18 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v17, (const char (*)[14])" schedule_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, schedule_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 480));
        *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 160));
    }
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
    __for_range_1 = &config->daily_config_id_list;
    *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 224, v10);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 224) = std::vector<unsigned int>::begin(__for_range_1);
    *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 256, v10);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 256) = std::vector<unsigned int>::end(__for_range_1);
    while ( 1 )
    {
      v19 = (char *)(v3 + 256);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 224),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 256)) )
        break;
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
      v20 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 224));
      v21 = (int *)v20;
      if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v20 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v20);
      }
      v22 = *v21;
      v23 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
      if ( v23 != 0 && v23 <= 3 )
      {
        LOBYTE(v19) = v23 != 0;
        __asan_report_store4(v3 + 48, v19);
      }
      *(_DWORD *)(v3 + 48) = v22;
      if ( !data::ActivityPlantFlowerExcelConfigMgrBase::findActivityPlantFlowerDailyExcelConfig(
              this,
              *(unsigned int *)(v3 + 48)) )
      {
        *(_DWORD *)(((v3 + 544) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 544) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 575) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 63) & 7) >= *(_BYTE *)(((v3 + 575) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 544, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 544),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityPlantFlowerExcelConfig.cpp",
          "checkPlantFlowerConfig",
          128);
        v24 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 544),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v25 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
                v24,
                (const char (*)[63])"findActivityPlantFlowerDailyExcelConfig fail, daily_config_id:");
        v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v25,
                (const unsigned int *)(v3 + 48));
        v27 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v26, (const char (*)[14])" schedule_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, schedule_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 544));
        *(_DWORD *)(((v3 + 544) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 224));
    }
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = -8;
    p_new_activity_config_mgr = &txt_config_mgr->new_activity_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)schedule_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)schedule_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)schedule_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(schedule_id);
    }
    v29 = *schedule_id;
    if ( !NewActivityExcelConfigMgr::findActivityConfigPtrByScheduleId(p_new_activity_config_mgr, v29) )
      break;
    __for_range_2 = &config->seed_reward_id_list;
    *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 288, v29);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 288) = std::vector<unsigned int>::begin(__for_range_2);
    *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 320, v29);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 320) = std::vector<unsigned int>::end(__for_range_2);
    while ( 1 )
    {
      v33 = (char *)(v3 + 320);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 288),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 320)) )
        break;
      *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 4;
      v34 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 288));
      v35 = (int *)v34;
      if ( *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v34 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v34);
      }
      v36 = *v35;
      v37 = *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000);
      if ( v37 != 0 && v37 <= 3 )
      {
        LOBYTE(v33) = v37 != 0;
        __asan_report_store4(v3 + 64, v33);
      }
      *(_DWORD *)(v3 + 64) = v36;
      if ( (unsigned __int8)TxtConfigMgr::isValidRewardIdAndMatchItemLimitType(
                              txt_config_mgr,
                              *(_DWORD *)(v3 + 64),
                              ITEM_LIMIT_ACTIVITY_PLANT_FLOWER) != 1 )
      {
        *(_DWORD *)(((v3 + 672) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 672) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 703) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 65) & 7) >= *(_BYTE *)(((v3 + 703) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 672, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 672),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityPlantFlowerExcelConfig.cpp",
          "checkPlantFlowerConfig",
          145);
        v38 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 672),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v39 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
                v38,
                (const char (*)[54])"isValidRewardIdAndMatchItemLimitType fail, reward_id:");
        v40 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v39,
                (const unsigned int *)(v3 + 64));
        v41 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v40, (const char (*)[14])" schedule_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v41, schedule_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 672));
        *(_DWORD *)(((v3 + 672) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 288));
    }
    *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = -8;
    __for_range_3 = &config->seed_id_list;
    *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 352, v33);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 352) = std::vector<unsigned int>::begin(__for_range_3);
    *(_BYTE *)(((v3 + 384) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 384) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 384, v33);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 384) = std::vector<unsigned int>::end(__for_range_3);
    while ( 1 )
    {
      v42 = (char *)(v3 + 384);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 352),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 384)) )
        break;
      *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 4;
      v43 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 352));
      v44 = (int *)v43;
      if ( *(_BYTE *)(((unsigned __int64)v43 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v43 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v43 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v43);
      }
      v45 = *v44;
      v46 = *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000);
      if ( v46 != 0 && v46 <= 3 )
      {
        LOBYTE(v42) = v46 != 0;
        __asan_report_store4(v3 + 80, v42);
      }
      *(_DWORD *)(v3 + 80) = v45;
      if ( !data::HomeWorldExcelConfigMgrBase::findHomeWorldPlantExcelConfig(
              &txt_config_mgr->home_config_mgr,
              *(unsigned int *)(v3 + 80)) )
      {
        *(_DWORD *)(((v3 + 736) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 736) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 767) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 32 + 31) & 7) >= *(_BYTE *)(((v3 + 767) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 736, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 736),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityPlantFlowerExcelConfig.cpp",
          "checkPlantFlowerConfig",
          155);
        v47 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 736),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v48 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                v47,
                (const char (*)[45])"findHomeWorldPlantExcelConfig fail, seed_id:");
        v49 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v48,
                (const unsigned int *)(v3 + 80));
        v50 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v49, (const char (*)[14])" schedule_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v50, schedule_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 736));
        *(_DWORD *)(((v3 + 736) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 352));
    }
    *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 384) >> 3) + 0x7FFF8000) = -8;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityPlantFlowerMainExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityPlantFlowerMainExcelConfig>,false,false> *const)(v3 + 96));
  }
  *(_DWORD *)(((v3 + 608) >> 3) + 0x7FFF8000) = 0;
  if ( *(char *)(((v3 + 608) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 639) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 639) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 608, 32LL);
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v3 + 608),
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/txt_data_manual/ActivityPlantFlowerExcelConfig.cpp",
    "checkPlantFlowerConfig",
    135);
  v30 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 608),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v31 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
          v30,
          (const char (*)[55])"findActivityConfigPtrByScheduleId failed, schedule_id:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, schedule_id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 608));
  v2 = -1;
  v32 = 0;
LABEL_82:
  if ( v32 == 1 )
    v2 = ret;
  if ( v62 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8044) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 76) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v3 >> 3) + 0x7FFF8050) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8058) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8060) = 0;
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
    *(_QWORD *)((v3 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8058) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8060) = -168430091;
  }
  return v2;
};

// Line 165: range 0000000012C9BF3E-0000000012C9C121
int32_t __cdecl ActivityPlantFlowerExcelConfigMgr::rewritePlantFlowerDailyConfig(
        ActivityPlantFlowerExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityPlantFlowerDailyExcelConfig>,false,false> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t result; // eax
  data::ActivityPlantFlowerDailyExcelConfigMap *__for_range; // [rsp+10h] [rbp-A0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityPlantFlowerDailyExcelConfig>,false,false>::reference __in; // [rsp+18h] [rbp-98h]
  std::tuple_element<1,std::pair<unsigned int const,data::ActivityPlantFlowerDailyExcelConfig> >::type *daily_config; // [rsp+28h] [rbp-88h]
  char v9[128]; // [rsp+30h] [rbp-80h] BYREF

  v2 = (std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityPlantFlowerDailyExcelConfig>,false,false> *)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityPlantFlowerDailyExcelConfig>,false,false> *)v3;
  }
  v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityPlantFlowerDailyExcelConfig>,false>::__node_type *)1102416563;
  v2[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityPlantFlowerDailyExcelConfig>,false>::__node_type *)"2 32 8 15 __for_begin:166 64 8 13 __for_end:166";
  v2[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityPlantFlowerDailyExcelConfig>,false>::__node_type *)ActivityPlantFlowerExcelConfigMgr::rewritePlantFlowerDailyConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  __for_range = &this->activity_plant_flower_daily_excel_config_map;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], txt_config_mgr);
  v2[4]._M_cur = std::unordered_map<unsigned int,data::ActivityPlantFlowerDailyExcelConfig>::begin(__for_range)._M_cur;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], txt_config_mgr);
  v2[8]._M_cur = std::unordered_map<unsigned int,data::ActivityPlantFlowerDailyExcelConfig>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::ActivityPlantFlowerDailyExcelConfig>,false>(
            v2 + 4,
            v2 + 8) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityPlantFlowerDailyExcelConfig>,false,false>::operator*(v2 + 4);
    std::get<0ul,unsigned int const,data::ActivityPlantFlowerDailyExcelConfig>(__in);
    daily_config = std::get<1ul,unsigned int const,data::ActivityPlantFlowerDailyExcelConfig>(__in);
    common::tools::MiscUtils::removeEmptyElement<data::IdCountConfig,unsigned int data::IdCountConfig::*>(
      &daily_config->cost_item_list,
      (unsigned int *)8);
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityPlantFlowerDailyExcelConfig>,false,false>::operator++(v2 + 4);
  }
  result = 0;
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityPlantFlowerDailyExcelConfig>,false>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 174: range 0000000012C9C122-0000000012C9CD1B
int32_t __cdecl ActivityPlantFlowerExcelConfigMgr::checkPlantFlowerDailyConfig(
        ActivityPlantFlowerExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::tuple_element<0,std::pair<unsigned int const,data::ActivityPlantFlowerDailyExcelConfig> >::type *v5; // rsi
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rdx
  char *v8; // rsi
  ItemExcelConfigMgr *p_item_config_mgr; // rcx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rdx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rdx
  char *v18; // rsi
  unsigned int *v19; // rax
  int *v20; // rdx
  int v21; // ecx
  char v22; // al
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rdx
  int32_t result; // eax
  int32_t ret; // [rsp+10h] [rbp-260h]
  data::ActivityPlantFlowerDailyExcelConfigMap *__for_range; // [rsp+18h] [rbp-258h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityPlantFlowerDailyExcelConfig>,false,false>::reference v31; // [rsp+20h] [rbp-250h]
  std::tuple_element<0,std::pair<unsigned int const,data::ActivityPlantFlowerDailyExcelConfig> >::type *daily_config_id; // [rsp+28h] [rbp-248h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ActivityPlantFlowerDailyExcelConfig> >::type *daily_config; // [rsp+30h] [rbp-240h]
  const std::vector<data::IdCountConfig> *__for_range_0; // [rsp+38h] [rbp-238h]
  const std::vector<unsigned int> *__for_range_1; // [rsp+40h] [rbp-230h]
  const data::IdCountConfig *id_count_config; // [rsp+48h] [rbp-228h]
  char v37[544]; // [rsp+50h] [rbp-220h] BYREF

  v2 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(512LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "11 48 4 13 reward_id:199 64 8 15 __for_begin:176 96 8 13 __for_end:176 128 8 15 __for_begin:183 "
                        "160 8 13 __for_end:183 192 8 15 __for_begin:199 224 8 13 __for_end:199 256 32 9 <unknown> 320 32"
                        " 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityPlantFlowerExcelConfigMgr::checkPlantFlowerDailyConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862726] = -218959360;
  v4[536862727] = -218959360;
  v4[536862729] = -218959118;
  v4[536862731] = -218959118;
  v4[536862733] = -218959118;
  v4[536862735] = -202116109;
  ret = 0;
  __for_range = &this->activity_plant_flower_daily_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityPlantFlowerDailyExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ActivityPlantFlowerDailyExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityPlantFlowerDailyExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::ActivityPlantFlowerDailyExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v5 = (std::tuple_element<0,std::pair<unsigned int const,data::ActivityPlantFlowerDailyExcelConfig> >::type *)(v2 + 96);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::ActivityPlantFlowerDailyExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityPlantFlowerDailyExcelConfig>,false> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityPlantFlowerDailyExcelConfig>,false> *)(v2 + 96)) )
      break;
    v31 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityPlantFlowerDailyExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityPlantFlowerDailyExcelConfig>,false,false> *const)(v2 + 64));
    daily_config_id = std::get<0ul,unsigned int const,data::ActivityPlantFlowerDailyExcelConfig>(v31);
    daily_config = (std::tuple_element<1,const std::pair<unsigned int const,data::ActivityPlantFlowerDailyExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ActivityPlantFlowerDailyExcelConfig>(v31);
    if ( std::vector<data::IdCountConfig>::empty(&daily_config->cost_item_list) )
    {
      *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 256) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 287) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 287) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 256, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 256),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityPlantFlowerExcelConfig.cpp",
        "checkPlantFlowerDailyConfig",
        180);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 256),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v7 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
             v6,
             (const char (*)[42])"cost_item_list is empty, daily_config_id:");
      v5 = daily_config_id;
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, daily_config_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
      *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    __for_range_0 = &daily_config->cost_item_list;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 128, v5);
    *(std::vector<data::IdCountConfig>::const_iterator *)(v2 + 128) = std::vector<data::IdCountConfig>::begin(__for_range_0);
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 160, v5);
    *(std::vector<data::IdCountConfig>::const_iterator *)(v2 + 160) = std::vector<data::IdCountConfig>::end(__for_range_0);
    while ( 1 )
    {
      v8 = (char *)(v2 + 160);
      if ( !__gnu_cxx::operator!=<data::IdCountConfig const*,std::vector<data::IdCountConfig>>(
              (const __gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *)(v2 + 128),
              (const __gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *)(v2 + 160)) )
        break;
      id_count_config = __gnu_cxx::__normal_iterator<data::IdCountConfig const*,std::vector<data::IdCountConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *const)(v2 + 128));
      p_item_config_mgr = &txt_config_mgr->item_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&id_count_config->id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&id_count_config->id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&id_count_config->id);
      }
      if ( !ItemExcelConfigMgr::findItemConfig(p_item_config_mgr, id_count_config->id) )
      {
        *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 320) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 351) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 351) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 320, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 320),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityPlantFlowerExcelConfig.cpp",
          "checkPlantFlowerDailyConfig",
          187);
        v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 320),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v11 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                v10,
                (const char (*)[30])"findItemConfig fail, item_id:");
        v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &id_count_config->id);
        v13 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                v12,
                (const char (*)[18])" daily_config_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, daily_config_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
        *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      if ( *(_BYTE *)(((unsigned __int64)&id_count_config->count >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)id_count_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&id_count_config->count >> 3)
                                                                       + 0x7FFF8000) )
      {
        __asan_report_load4(&id_count_config->count);
      }
      if ( !id_count_config->count )
      {
        *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 384) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 415) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 415) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 384, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 384),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityPlantFlowerExcelConfig.cpp",
          "checkPlantFlowerDailyConfig",
          192);
        v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 384),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v15 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                v14,
                (const char (*)[21])"count is 0, item_id:");
        v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &id_count_config->id);
        v17 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                v16,
                (const char (*)[18])" daily_config_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, daily_config_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
        *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      __gnu_cxx::__normal_iterator<data::IdCountConfig const*,std::vector<data::IdCountConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *const)(v2 + 128));
    }
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
    __for_range_1 = &daily_config->reward_id_list;
    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 192, v8);
    *(std::vector<unsigned int>::const_iterator *)(v2 + 192) = std::vector<unsigned int>::begin(__for_range_1);
    *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 224, v8);
    *(std::vector<unsigned int>::const_iterator *)(v2 + 224) = std::vector<unsigned int>::end(__for_range_1);
    while ( 1 )
    {
      v18 = (char *)(v2 + 224);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 192),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 224)) )
        break;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
      v19 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 192));
      v20 = (int *)v19;
      if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v19 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v19);
      }
      v21 = *v20;
      v22 = *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000);
      if ( v22 != 0 && v22 <= 3 )
      {
        LOBYTE(v18) = v22 != 0;
        __asan_report_store4(v2 + 48, v18);
      }
      *(_DWORD *)(v2 + 48) = v21;
      if ( (unsigned __int8)TxtConfigMgr::isValidRewardIdAndMatchItemLimitType(
                              txt_config_mgr,
                              *(_DWORD *)(v2 + 48),
                              ITEM_LIMIT_ACTIVITY_PLANT_FLOWER) != 1 )
      {
        *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 448) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 479) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 64 + 31) & 7) >= *(_BYTE *)(((v2 + 479) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 448, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 448),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityPlantFlowerExcelConfig.cpp",
          "checkPlantFlowerDailyConfig",
          203);
        v23 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 448),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v24 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
                v23,
                (const char (*)[54])"isValidRewardIdAndMatchItemLimitType fail, reward_id:");
        v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v24,
                (const unsigned int *)(v2 + 48));
        v26 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                v25,
                (const char (*)[18])" daily_config_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, daily_config_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
        *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 192));
    }
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityPlantFlowerDailyExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityPlantFlowerDailyExcelConfig>,false,false> *const)(v2 + 64));
  }
  result = ret;
  if ( v37 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0LL;
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
  }
  return result;
};
