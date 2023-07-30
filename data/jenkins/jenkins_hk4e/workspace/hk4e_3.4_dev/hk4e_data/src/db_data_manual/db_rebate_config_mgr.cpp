// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/db_data_manual/db_rebate_config_mgr.cpp

// Line 21: range 000000000CE4678A-000000000CE46837
void __cdecl data::t_rebate_config::t_rebate_config(data::t_rebate_config *const this, const mysqlpp::Row *row)
{
  std::string::basic_string(&this->account_uid);
  std::string::basic_string(&this->item_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->table_override_ = 0LL;
  data::populate_t_rebate_config<(mysqlpp::sql_dummy_type)0>(this, row);
};

// Line 21: range 000000000D3C18F6-000000000D3C1A03
void __cdecl data::t_rebate_config::t_rebate_config(data::t_rebate_config *const this, data::t_rebate_config *a2)
{
  mysqlpp::sql_int_unsigned account_type; // ecx
  const char *table_override; // rdx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  account_type = a2->account_type;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->account_type = account_type;
  std::string::basic_string(&this->account_uid, &a2->account_uid);
  std::string::basic_string(&this->item_list, &a2->item_list);
  if ( *(_BYTE *)(((unsigned __int64)&a2->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->table_override_);
  table_override = a2->table_override_;
  if ( *(_BYTE *)(((unsigned __int64)&this->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->table_override_ = table_override;
};

// Line 21: range 000000000D0FA8C4-000000000D0FA8F2
void __cdecl data::t_rebate_config::~t_rebate_config(data::t_rebate_config *const this)
{
  std::string::~string(&this->item_list);
  std::string::~string(&this->account_uid);
};

// Line 29: range 000000000CDB4CE6-000000000CDB6795
int32_t __cdecl data::DbRebateConfigMgr::loadRebateConfig(
        data::DbRebateConfigMgr *const this,
        common::midb::MysqlConnPtr *conn_ptr)
{
  __int64 v2; // rax
  _DWORD *v3; // r12
  int32_t v4; // r13d
  mysqlpp::Connection *v5; // rsi
  __int64 v6; // rax
  std::logic_error *exception; // rdi
  _DWORD *v8; // rax
  unsigned int account_type; // ecx
  unsigned __int64 v10; // rax
  bool v11; // r13
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rdx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  std::vector<std::string>::size_type v18; // rsi
  std::vector<std::string>::size_type v19; // r13
  std::vector<std::string>::size_type v20; // r13
  char v21; // al
  __int64 *v22; // rdx
  const std::string *v23; // rax
  const std::string *v24; // rax
  char v25; // al
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rdx
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  unsigned __int64 v34; // rax
  data::RebateConfig *v35; // rdx
  std::pair<unsigned int,std::string > *v36; // rcx
  data::RebateConfig *v37; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<const std::pair<unsigned int,std::string >,data::RebateConfig>,false,true>,bool> v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  _DWORD *v41; // rax
  unsigned __int64 v42; // rax
  unsigned __int64 v43; // rax
  common::milog::MiLogStream *v44; // r13
  std::vector<data::t_rebate_config>::size_type v45; // rax
  common::milog::MiLogStream *v46; // rax
  unsigned __int64 v47; // rax
  unsigned __int64 v49; // [rsp+18h] [rbp-728h]
  int32_t ret; // [rsp+34h] [rbp-70Ch]
  std::vector<data::t_rebate_config> *__for_range; // [rsp+38h] [rbp-708h]
  __gnu_cxx::__normal_iterator<data::t_rebate_config*,std::vector<data::t_rebate_config> >::reference row; // [rsp+40h] [rbp-700h]
  char v53[1776]; // [rsp+50h] [rbp-6F0h] BYREF

  v49 = (unsigned __int64)v53;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_5(1728LL);
    if ( v2 )
      v49 = v2;
  }
  *(_QWORD *)v49 = 1102416563LL;
  *(_QWORD *)(v49 + 8) = "21 32 1 9 <unknown> 48 1 9 <unknown> 64 4 6 idx:67 80 8 14 __for_begin:50 112 8 12 __for_end:50"
                         " 144 8 9 <unknown> 176 8 9 <unknown> 208 16 18 id_count_config:69 240 24 10 row_vec:43 304 24 1"
                         "2 split_vec:56 368 32 9 <unknown> 432 32 9 <unknown> 496 32 9 <unknown> 560 32 9 <unknown> 624 "
                         "32 9 <unknown> 688 32 9 <unknown> 752 32 9 <unknown> 816 32 9 <unknown> 880 40 16 account_index"
                         ":81 960 64 9 config:52 1056 544 8 query:36";
  *(_QWORD *)(v49 + 16) = data::DbRebateConfigMgr::loadRebateConfig;
  v3 = (_DWORD *)(v49 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753535;
  v3[536862722] = 61956;
  v3[536862722] = -234881024;
  v3[536862723] = 62194;
  v3[536862723] = -234881024;
  v3[536862724] = 62194;
  v3[536862724] = -234881024;
  v3[536862725] = 62194;
  v3[536862725] = -234881024;
  v3[536862726] = 62194;
  v3[536862727] = 62194;
  v3[536862728] = -218959360;
  v3[536862729] = 62194;
  v3[536862730] = -218959360;
  v3[536862731] = 62194;
  v3[536862732] = -219021312;
  v3[536862733] = 62194;
  v3[536862734] = -219021312;
  v3[536862735] = 62194;
  v3[536862736] = -219021312;
  v3[536862737] = 62194;
  v3[536862738] = -219021312;
  v3[536862739] = 62194;
  v3[536862740] = -219021312;
  v3[536862741] = 62194;
  v3[536862742] = -219021312;
  v3[536862743] = 62194;
  v3[536862744] = -219021312;
  v3[536862745] = 62194;
  v3[536862746] = -219021312;
  v3[536862747] = 62194;
  v3[536862748] = -234881024;
  v3[536862749] = -218959118;
  v3[536862752] = -218959118;
  v3[536862770] = -202116109;
  v3[536862771] = -202116109;
  v3[536862772] = -202116109;
  v3[536862773] = -202116109;
  if ( std::operator==<mysqlpp::Connection>(0LL, conn_ptr) )
  {
    if ( *(char *)(((v49 + 368) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v49 + 399) >> 3) + 0x7FFF8000) != 0
      && (char)((v49 - 113) & 7) >= *(_BYTE *)(((v49 + 399) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v49 + 368, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v49 + 368),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/db_data_manual/db_rebate_config_mgr.cpp",
      "loadRebateConfig",
      32);
    common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
      (common::milog::MiLogStream *const)(v49 + 368),
      (const char (*)[17])"conn_ptr is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v49 + 368));
    v4 = -1;
  }
  else
  {
    v5 = std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false> *const)conn_ptr);
    if ( *(char *)(((v49 + 1056) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v49 + 1599) >> 3) + 0x7FFF8000) != 0
      && (char)((v49 - 64 + 127) & 7) >= *(_BYTE *)(((v49 + 1599) >> 3) + 0x7FFF8000) )
    {
      v5 = (mysqlpp::Connection *)544;
      __asan_report_store_n(v49 + 1056, 544LL);
    }
    mysqlpp::Connection::query((mysqlpp::Query *)(v49 + 1056), v5, "select ");
    ret = 0;
    v6 = std::operator<<<std::char_traits<char>>(v49 + 1056, "`account_type`, `account_uid`, `item_list`");
    std::operator<<<std::char_traits<char>>(v6, " from t_rebate_config");
    std::vector<data::t_rebate_config>::vector((std::vector<data::t_rebate_config> *const)(v49 + 240));
    mysqlpp::Query::storein<std::vector<data::t_rebate_config>>(
      (mysqlpp::Query *const)(v49 + 1056),
      (std::vector<data::t_rebate_config> *)(v49 + 240));
    if ( mysqlpp::Query::errnum((const mysqlpp::Query *const)(v49 + 1056)) )
    {
      exception = (std::logic_error *)__cxa_allocate_exception(0x10uLL);
      std::logic_error::logic_error(exception, "query has error");
      __asan_handle_no_return(exception);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::logic_error,
        (void (__fastcall *)(void *))&std::logic_error::~logic_error);
    }
    __for_range = (std::vector<data::t_rebate_config> *)(v49 + 240);
    if ( *(_BYTE *)(((v49 + 80) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<data::t_rebate_config>::iterator *)(v49 + 80) = std::vector<data::t_rebate_config>::begin(__for_range);
    if ( *(_BYTE *)(((v49 + 112) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<data::t_rebate_config>::iterator *)(v49 + 112) = std::vector<data::t_rebate_config>::end(__for_range);
    while ( __gnu_cxx::operator!=<data::t_rebate_config *,std::vector<data::t_rebate_config>>(
              (const __gnu_cxx::__normal_iterator<data::t_rebate_config*,std::vector<data::t_rebate_config> > *)(v49 + 80),
              (const __gnu_cxx::__normal_iterator<data::t_rebate_config*,std::vector<data::t_rebate_config> > *)(v49 + 112)) )
    {
      row = __gnu_cxx::__normal_iterator<data::t_rebate_config *,std::vector<data::t_rebate_config>>::operator*((const __gnu_cxx::__normal_iterator<data::t_rebate_config*,std::vector<data::t_rebate_config> > *const)(v49 + 80));
      v8 = (_DWORD *)(((v49 + 960) >> 3) + 2147450880);
      *v8 = 0;
      v8[1] = 0;
      data::RebateConfig::RebateConfig((data::RebateConfig *const)(v49 + 960));
      if ( *(_BYTE *)(((unsigned __int64)row >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)row >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(row);
      }
      account_type = row->account_type;
      if ( *(_BYTE *)(((v49 + 960) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v49 + 960) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v49 + 960);
      *(_DWORD *)(v49 + 960) = account_type;
      std::string::operator=(v49 + 968, &row->account_uid);
      v10 = ((v49 + 304) >> 3) + 2147450880;
      *(_WORD *)v10 = 0;
      *(_BYTE *)(v10 + 2) = 0;
      std::vector<std::string>::vector((std::vector<std::string> *const)(v49 + 304));
      *(_DWORD *)(((v49 + 496) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v49 + 48) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v49 + 48);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v49 + 496),
        ":",
        (const std::allocator<char> *)(v49 + 48));
      *(_DWORD *)(((v49 + 432) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v49 + 32) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v49 + 32);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v49 + 432),
        ",",
        (const std::allocator<char> *)(v49 + 32));
      v11 = common::tools::StringUtils::split(
              &row->item_list,
              (const std::string *)(v49 + 432),
              (const std::string *)(v49 + 496),
              2u,
              (std::vector<std::string> *)(v49 + 304),
              0)
         || (std::vector<std::string>::size((const std::vector<std::string> *const)(v49 + 304)) & 1) != 0;
      std::string::~string((void *)(v49 + 432));
      *(_DWORD *)(((v49 + 432) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v49 + 32);
      *(_BYTE *)(((v49 + 32) >> 3) + 0x7FFF8000) = -8;
      std::string::~string((void *)(v49 + 496));
      *(_DWORD *)(((v49 + 496) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v49 + 48);
      *(_BYTE *)(((v49 + 48) >> 3) + 0x7FFF8000) = -8;
      if ( v11 )
      {
        *(_DWORD *)(((v49 + 560) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v49 + 560) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v49 + 591) >> 3) + 0x7FFF8000) != 0
          && (char)((v49 + 79) & 7) >= *(_BYTE *)(((v49 + 591) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v49 + 560, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v49 + 560),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/db_data_manual/db_rebate_config_mgr.cpp",
          "loadRebateConfig",
          60);
        v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v49 + 560),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v13 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                v12,
                (const char (*)[26])"split fail, account_type:");
        v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &row->account_type);
        v15 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v14, (const char (*)[14])" account_uid:");
        v16 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v15, &row->account_uid);
        v17 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v16, (const char (*)[12])" item_list:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v17, &row->item_list);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v49 + 560));
        *(_DWORD *)(((v49 + 560) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      else
      {
        v18 = std::vector<std::string>::size((const std::vector<std::string> *const)(v49 + 304)) >> 1;
        std::vector<data::IdCountConfig>::reserve((std::vector<data::IdCountConfig> *const)(v49 + 1000), v18);
        *(_BYTE *)(((v49 + 64) >> 3) + 0x7FFF8000) = 4;
        if ( *(_BYTE *)(((v49 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v49 + 64) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v49 + 64);
        for ( *(_DWORD *)(v49 + 64) = 0; ; *(_DWORD *)(v49 + 64) += 2 )
        {
          if ( *(_BYTE *)(((v49 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v49 + 64) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_load4(v49 + 64);
          v19 = *(unsigned int *)(v49 + 64);
          if ( v19 >= std::vector<std::string>::size((const std::vector<std::string> *const)(v49 + 304)) )
            goto LABEL_40;
          if ( *(_BYTE *)(((v49 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v49 + 64) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_load4(v49 + 64);
          v20 = (unsigned int)(*(_DWORD *)(v49 + 64) + 1);
          if ( v20 >= std::vector<std::string>::size((const std::vector<std::string> *const)(v49 + 304)) )
LABEL_40:
            v21 = 0;
          else
            v21 = 1;
          if ( !v21 )
            break;
          *(_WORD *)(((v49 + 208) >> 3) + 0x7FFF8000) = 0;
          v22 = &`vtable for'data::IdCountConfig + 2;
          if ( *(_BYTE *)(((v49 + 208) >> 3) + 0x7FFF8000) )
            __asan_report_store8();
          *(_QWORD *)(v49 + 208) = v22;
          if ( *(_BYTE *)(((v49 + 216) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v49 + 216) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_store4(v49 + 216);
          *(_DWORD *)(v49 + 216) = 0;
          if ( *(_BYTE *)(((v49 + 220) >> 3) + 0x7FFF8000) != 0
            && (char)(((v49 - 64 + 28) & 7) + 3) >= *(_BYTE *)(((v49 + 220) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store4(v49 + 220);
          }
          *(_DWORD *)(v49 + 220) = 0;
          if ( *(_BYTE *)(((v49 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v49 + 64) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_load4(v49 + 64);
          v23 = std::vector<std::string>::operator[](
                  (std::vector<std::string> *const)(v49 + 304),
                  *(unsigned int *)(v49 + 64));
          if ( common::tools::StringUtils::strToNum<unsigned int>(v23, (unsigned int *)(v49 + 216), 1) )
            goto LABEL_54;
          if ( *(_BYTE *)(((v49 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v49 + 64) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_load4(v49 + 64);
          v24 = std::vector<std::string>::operator[](
                  (std::vector<std::string> *const)(v49 + 304),
                  (unsigned int)(*(_DWORD *)(v49 + 64) + 1));
          if ( common::tools::StringUtils::strToNum<unsigned int>(v24, (unsigned int *)(v49 + 220), 1) )
LABEL_54:
            v25 = 1;
          else
            v25 = 0;
          if ( v25 )
          {
            *(_DWORD *)(((v49 + 624) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v49 + 624) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v49 + 655) >> 3) + 0x7FFF8000) != 0
              && (char)((v49 - 113) & 7) >= *(_BYTE *)(((v49 + 655) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v49 + 624, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v49 + 624),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/db_data_manual/db_rebate_config_mgr.cpp",
              "loadRebateConfig",
              73);
            v26 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v49 + 624),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v27 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                    v26,
                    (const char (*)[29])"strToNum fail, account_type:");
            v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, &row->account_type);
            v29 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                    v28,
                    (const char (*)[14])" account_uid:");
            v30 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v29, &row->account_uid);
            v31 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                    v30,
                    (const char (*)[12])" item_list:");
            v32 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v31, &row->item_list);
            v33 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v32, (const char (*)[6])" idx:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v33,
              (const unsigned int *)(v49 + 64));
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v49 + 624));
            *(_DWORD *)(((v49 + 624) >> 3) + 0x7FFF8000) = -117901064;
            ret = -1;
          }
          else
          {
            std::vector<data::IdCountConfig>::push_back(
              (std::vector<data::IdCountConfig> *const)(v49 + 1000),
              (const std::vector<data::IdCountConfig>::value_type *)(v49 + 208));
          }
          data::IdCountConfig::~IdCountConfig((data::IdCountConfig *const)(v49 + 208));
          *(_WORD *)(((v49 + 208) >> 3) + 0x7FFF8000) = -1800;
          if ( *(_BYTE *)(((v49 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v49 + 64) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_load4(v49 + 64);
        }
        *(_BYTE *)(((v49 + 64) >> 3) + 0x7FFF8000) = -8;
        v34 = ((v49 + 880) >> 3) + 2147450880;
        *(_DWORD *)v34 = 0;
        *(_BYTE *)(v34 + 4) = 0;
        if ( *(char *)(((v49 + 880) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v49 + 919) >> 3) + 0x7FFF8000) != 0
          && (char)((v49 - 105) & 7) >= *(_BYTE *)(((v49 + 919) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v49 + 880, 40LL);
        }
        std::make_pair<unsigned int &,std::string &>(
          (std::pair<unsigned int,std::string > *)(v49 + 880),
          (unsigned int *)(v49 + 960),
          (std::string *)(v49 + 968));
        v35 = std::move<data::RebateConfig &>((data::RebateConfig *)(v49 + 960));
        v38 = std::unordered_map<std::pair<unsigned int,std::string>,data::RebateConfig,boost::hash<std::pair<unsigned int,std::string>>,std::equal_to<std::pair<unsigned int,std::string>>,std::allocator<std::pair<std::pair<unsigned int,std::string> const,data::RebateConfig>>>::emplace<std::pair<unsigned int,std::string>&,data::RebateConfig>(
                &this->account_config_map_,
                (std::pair<unsigned int,std::string > *)(v49 + 880),
                v35,
                v36,
                v37);
        if ( !v38.second )
        {
          *(_DWORD *)(((v49 + 688) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v49 + 688) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v49 + 719) >> 3) + 0x7FFF8000) != 0
            && (char)((v49 - 80 + 31) & 7) >= *(_BYTE *)(((v49 + 719) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v49 + 688, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v49 + 688),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/db_data_manual/db_rebate_config_mgr.cpp",
            "loadRebateConfig",
            84);
          v39 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v49 + 688),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v40 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                  v39,
                  (const char (*)[25])"duplicate account_index:");
          common::milog::MiLogStream::operator<<<unsigned int,std::string>(
            v40,
            (const std::pair<unsigned int,std::string > *)(v49 + 880));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v49 + 688));
          *(_DWORD *)(((v49 + 688) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
        std::pair<unsigned int,std::string>::~pair((std::pair<unsigned int,std::string > *const)(v49 + 880));
      }
      std::vector<std::string>::~vector((std::vector<std::string> *const)(v49 + 304));
      data::RebateConfig::~RebateConfig((data::RebateConfig *const)(v49 + 960));
      v41 = (_DWORD *)(((v49 + 960) >> 3) + 2147450880);
      *v41 = -117901064;
      v41[1] = -117901064;
      v42 = ((v49 + 304) >> 3) + 2147450880;
      *(_WORD *)v42 = -1800;
      *(_BYTE *)(v42 + 2) = -8;
      v43 = ((v49 + 880) >> 3) + 2147450880;
      *(_DWORD *)v43 = -117901064;
      *(_BYTE *)(v43 + 4) = -8;
      __gnu_cxx::__normal_iterator<data::t_rebate_config *,std::vector<data::t_rebate_config>>::operator++((__gnu_cxx::__normal_iterator<data::t_rebate_config*,std::vector<data::t_rebate_config> > *const)(v49 + 80));
    }
    *(_BYTE *)(((v49 + 80) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v49 + 112) >> 3) + 0x7FFF8000) = -8;
    *(_DWORD *)(((v49 + 752) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v49 + 752) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v49 + 783) >> 3) + 0x7FFF8000) != 0
      && (char)((v49 - 64 + 79) & 7) >= *(_BYTE *)(((v49 + 783) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v49 + 752, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v49 + 752),
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/db_data_manual/db_rebate_config_mgr.cpp",
      "loadRebateConfig",
      89);
    v44 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(
            (common::milog::MiLogStream *const)(v49 + 752),
            (const char (*)[6])"load ");
    *(_BYTE *)(((v49 + 144) >> 3) + 0x7FFF8000) = 0;
    v45 = std::vector<data::t_rebate_config>::size((const std::vector<data::t_rebate_config> *const)(v49 + 240));
    if ( *(_BYTE *)(((v49 + 144) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(_QWORD *)(v49 + 144) = v45;
    v46 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
            v44,
            (const unsigned __int64 *)(v49 + 144));
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
      v46,
      (const char (*)[29])" config from t_rebate_config");
    *(_BYTE *)(((v49 + 144) >> 3) + 0x7FFF8000) = -8;
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v49 + 752));
    *(_DWORD *)(((v49 + 752) >> 3) + 0x7FFF8000) = -117901064;
    std::vector<data::t_rebate_config>::~vector((std::vector<data::t_rebate_config> *const)(v49 + 240));
    v47 = ((v49 + 240) >> 3) + 2147450880;
    *(_WORD *)v47 = -1800;
    *(_BYTE *)(v47 + 2) = -8;
    v4 = ret;
    mysqlpp::Query::~Query((mysqlpp::Query *const)(v49 + 1056));
  }
  if ( v53 == (char *)v49 )
  {
    *(_QWORD *)((v49 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v49 >> 3) + 0x7FFF807C) = 0LL;
    memset(
      (void *)((unsigned __int64)(v3 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v3 + 2147450880 - (((_DWORD)v3 + 2147450888) & 0xFFFFFFF8) + 132) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v49 >> 3) + 0x7FFF80C8) = 0LL;
    *(_QWORD *)((v49 >> 3) + 0x7FFF80D0) = 0LL;
  }
  else
  {
    *(_QWORD *)v49 = 1172321806LL;
    __asan_stack_free_5(v49, 1728LL, v53);
  }
  return v4;
};

// Line 102: range 000000000CDB6796-000000000CDB7743
int32_t __cdecl data::DbRebateConfigMgr::checkRebateConfig(
        const data::DbRebateConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  unsigned int first; // ecx
  common::milog::MiLogStream *v7; // rdx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rdx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v15; // rdx
  common::milog::MiLogStream *v16; // rdx
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  unsigned __int64 v19; // rax
  common::milog::MiLogStream *v20; // r14
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rdx
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rdx
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  unsigned __int64 v30; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-2E4h]
  std::__detail::_Node_const_iterator<std::pair<const std::pair<unsigned int,std::string >,data::RebateConfig>,false,true>::reference v33; // [rsp+28h] [rbp-2D8h]
  std::tuple_element<0,std::pair<const std::pair<unsigned int,std::string >,data::RebateConfig> >::type *account_index; // [rsp+30h] [rbp-2D0h]
  std::tuple_element<1,const std::pair<const std::pair<unsigned int,std::string >,data::RebateConfig> >::type *rebate_config; // [rsp+38h] [rbp-2C8h]
  const std::vector<data::IdCountConfig> *__for_range_0; // [rsp+40h] [rbp-2C0h]
  const data::IdCountConfig *id_count_config; // [rsp+48h] [rbp-2B8h]
  char v38[688]; // [rsp+50h] [rbp-2B0h] BYREF

  v2 = (unsigned __int64)v38;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(640LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "11 48 8 15 __for_begin:104 80 8 13 __for_end:104 112 8 15 __for_begin:128 144 8 13 __for_end:128"
                        " 176 32 9 <unknown> 240 32 9 <unknown> 304 32 9 <unknown> 368 32 9 <unknown> 432 32 9 <unknown> "
                        "496 32 9 <unknown> 560 40 18 item_param_bin:131";
  *(_QWORD *)(v2 + 16) = data::DbRebateConfigMgr::checkRebateConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862721] = -234881024;
  v4[536862722] = 62194;
  v4[536862722] = -234881024;
  v4[536862723] = 62194;
  v4[536862723] = -234881024;
  v4[536862724] = 62194;
  v4[536862724] = -234881024;
  v4[536862725] = 62194;
  v4[536862726] = -219021312;
  v4[536862727] = 62194;
  v4[536862728] = -219021312;
  v4[536862729] = 62194;
  v4[536862730] = -219021312;
  v4[536862731] = 62194;
  v4[536862732] = -219021312;
  v4[536862733] = 62194;
  v4[536862734] = -219021312;
  v4[536862735] = 62194;
  v4[536862736] = -219021312;
  v4[536862737] = 62194;
  v4[536862738] = -218103808;
  v4[536862739] = -202116109;
  ret = 0;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::unordered_map<std::pair<unsigned int,std::string >,data::RebateConfig,boost::hash<std::pair<unsigned int,std::string > >,std::equal_to<std::pair<unsigned int,std::string > >,std::allocator<std::pair<const std::pair<unsigned int,std::string >,data::RebateConfig> > >::const_iterator *)(v2 + 48) = std::unordered_map<std::pair<unsigned int,std::string>,data::RebateConfig,boost::hash<std::pair<unsigned int,std::string>>,std::equal_to<std::pair<unsigned int,std::string>>,std::allocator<std::pair<std::pair<unsigned int,std::string> const,data::RebateConfig>>>::begin(&this->account_config_map_);
  if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::unordered_map<std::pair<unsigned int,std::string >,data::RebateConfig,boost::hash<std::pair<unsigned int,std::string > >,std::equal_to<std::pair<unsigned int,std::string > >,std::allocator<std::pair<const std::pair<unsigned int,std::string >,data::RebateConfig> > >::const_iterator *)(v2 + 80) = std::unordered_map<std::pair<unsigned int,std::string>,data::RebateConfig,boost::hash<std::pair<unsigned int,std::string>>,std::equal_to<std::pair<unsigned int,std::string>>,std::allocator<std::pair<std::pair<unsigned int,std::string> const,data::RebateConfig>>>::end(&this->account_config_map_);
  while ( std::__detail::operator!=<std::pair<std::pair const<unsigned int,std::string>,data::RebateConfig>,true>(
            (const std::__detail::_Node_iterator_base<std::pair<const std::pair<unsigned int,std::string >,data::RebateConfig>,true> *)(v2 + 48),
            (const std::__detail::_Node_iterator_base<std::pair<const std::pair<unsigned int,std::string >,data::RebateConfig>,true> *)(v2 + 80)) )
  {
    v33 = std::__detail::_Node_const_iterator<std::pair<std::pair const<unsigned int,std::string>,data::RebateConfig>,false,true>::operator*((const std::__detail::_Node_const_iterator<std::pair<const std::pair<unsigned int,std::string >,data::RebateConfig>,false,true> *const)(v2 + 48));
    account_index = std::get<0ul,std::pair<unsigned int,std::string> const,data::RebateConfig>(v33);
    rebate_config = (std::tuple_element<1,const std::pair<const std::pair<unsigned int,std::string >,data::RebateConfig> >::type *)std::get<1ul,std::pair<unsigned int,std::string> const,data::RebateConfig>(v33);
    if ( *(_BYTE *)(((unsigned __int64)account_index >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)account_index >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(account_index);
    }
    first = account_index->first;
    if ( *(_BYTE *)(((unsigned __int64)rebate_config >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)rebate_config >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(rebate_config);
    }
    if ( first != rebate_config->account_type
      || std::operator!=<char>(&account_index->second, &rebate_config->account_uid) )
    {
      *(_DWORD *)(((v2 + 176) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 176) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 207) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 49) & 7) >= *(_BYTE *)(((v2 + 207) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 176, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 176),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/db_data_manual/db_rebate_config_mgr.cpp",
        "checkRebateConfig",
        109);
      v7 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
             (common::milog::MiLogStream *const)(v2 + 176),
             (const char (*)[14])"account_type:");
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &account_index->first);
      v9 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v8, (const char (*)[14])" account_uid:");
      v10 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, &account_index->second);
      v11 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v10, (const char (*)[15])" account_type:");
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &rebate_config->account_type);
      v13 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v12, (const char (*)[14])" account_uid:");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v13, &rebate_config->account_uid);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 176));
      *(_DWORD *)(((v2 + 176) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    if ( *(_BYTE *)(((unsigned __int64)rebate_config >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)rebate_config >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(rebate_config);
    }
    if ( !rebate_config->account_type || !proto::AccountType_IsValid(rebate_config->account_type) )
    {
      *(_DWORD *)(((v2 + 240) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 240) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 271) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 15) & 7) >= *(_BYTE *)(((v2 + 271) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 240, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 240),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/db_data_manual/db_rebate_config_mgr.cpp",
        "checkRebateConfig",
        118);
      v15 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              (common::milog::MiLogStream *const)(v2 + 240),
              (const char (*)[22])"invalid account_type:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &rebate_config->account_type);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 240));
      *(_DWORD *)(((v2 + 240) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    if ( std::vector<data::IdCountConfig>::empty(&rebate_config->id_count_config_vec) )
    {
      *(_DWORD *)(((v2 + 304) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 304) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 335) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 79) & 7) >= *(_BYTE *)(((v2 + 335) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 304, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 304),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/db_data_manual/db_rebate_config_mgr.cpp",
        "checkRebateConfig",
        125);
      v16 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
              (common::milog::MiLogStream *const)(v2 + 304),
              (const char (*)[34])"item_list is empty, account_type:");
      v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &rebate_config->account_type);
      v18 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v17, (const char (*)[14])" account_uid:");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v18, &rebate_config->account_uid);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 304));
      *(_DWORD *)(((v2 + 304) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    __for_range_0 = &rebate_config->id_count_config_vec;
    *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<data::IdCountConfig>::const_iterator *)(v2 + 112) = std::vector<data::IdCountConfig>::begin(__for_range_0);
    *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<data::IdCountConfig>::const_iterator *)(v2 + 144) = std::vector<data::IdCountConfig>::end(__for_range_0);
    while ( __gnu_cxx::operator!=<data::IdCountConfig const*,std::vector<data::IdCountConfig>>(
              (const __gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *)(v2 + 112),
              (const __gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *)(v2 + 144)) )
    {
      id_count_config = __gnu_cxx::__normal_iterator<data::IdCountConfig const*,std::vector<data::IdCountConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *const)(v2 + 112));
      v19 = ((v2 + 560) >> 3) + 2147450880;
      *(_DWORD *)v19 = 0;
      *(_BYTE *)(v19 + 4) = 0;
      proto::ItemParamBin::ItemParamBin((proto::ItemParamBin *const)(v2 + 560));
      if ( *(_BYTE *)(((unsigned __int64)&id_count_config->id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&id_count_config->id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&id_count_config->id);
      }
      proto::ItemParamBin::set_item_id((proto::ItemParamBin *const)(v2 + 560), id_count_config->id);
      if ( *(_BYTE *)(((unsigned __int64)&id_count_config->count >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)id_count_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&id_count_config->count >> 3)
                                                                       + 0x7FFF8000) )
      {
        __asan_report_load4(&id_count_config->count);
      }
      proto::ItemParamBin::set_count((proto::ItemParamBin *const)(v2 + 560), id_count_config->count);
      if ( TxtConfigMgr::checkItemParamBin(txt_config_mgr, (const proto::ItemParamBin *)(v2 + 560), ITEM_LIMIT_REBATE) )
      {
        *(_DWORD *)(((v2 + 368) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 368) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 399) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 113) & 7) >= *(_BYTE *)(((v2 + 399) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 368, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 368),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/db_data_manual/db_rebate_config_mgr.cpp",
          "checkRebateConfig",
          136);
        v20 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                (common::milog::MiLogStream *const)(v2 + 368),
                (const char (*)[40])"checkItemParamBin fail, item_param_bin:");
        *(_DWORD *)(((v2 + 432) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 432) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 463) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 49) & 7) >= *(_BYTE *)(((v2 + 463) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 432, 32LL);
        }
        google::protobuf::Message::ShortDebugString[abi:cxx11](
          (std::string *)(v2 + 432),
          (google::protobuf::Message *)(v2 + 560));
        v21 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v20, (const std::string *)(v2 + 432));
        v22 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v21, (const char (*)[15])" account_type:");
        v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &rebate_config->account_type);
        v24 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v23, (const char (*)[14])" account_uid:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v24, &rebate_config->account_uid);
        std::string::~string((void *)(v2 + 432));
        *(_DWORD *)(((v2 + 432) >> 3) + 0x7FFF8000) = -117901064;
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 368));
        *(_DWORD *)(((v2 + 368) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      if ( *(_BYTE *)(((unsigned __int64)&id_count_config->id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&id_count_config->id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&id_count_config->id);
      }
      if ( !TxtConfigMgr::isItemAllowedByOutputControl(txt_config_mgr, id_count_config->id, ITEM_LIMIT_REBATE) )
      {
        *(_DWORD *)(((v2 + 496) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 496) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 527) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 + 15) & 7) >= *(_BYTE *)(((v2 + 527) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 496, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 496),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/db_data_manual/db_rebate_config_mgr.cpp",
          "checkRebateConfig",
          144);
        v25 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
                (common::milog::MiLogStream *const)(v2 + 496),
                (const char (*)[55])"isItemAllowedByOutputControl fail, id_count_config.id:");
        v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, &id_count_config->id);
        v27 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v26, (const char (*)[15])" account_type:");
        v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, &rebate_config->account_type);
        v29 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v28, (const char (*)[14])" account_uid:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v29, &rebate_config->account_uid);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 496));
        *(_DWORD *)(((v2 + 496) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      proto::ItemParamBin::~ItemParamBin((proto::ItemParamBin *const)(v2 + 560));
      v30 = ((v2 + 560) >> 3) + 2147450880;
      *(_DWORD *)v30 = -117901064;
      *(_BYTE *)(v30 + 4) = -8;
      __gnu_cxx::__normal_iterator<data::IdCountConfig const*,std::vector<data::IdCountConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *const)(v2 + 112));
    }
    *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
    std::__detail::_Node_const_iterator<std::pair<std::pair const<unsigned int,std::string>,data::RebateConfig>,false,true>::operator++((std::__detail::_Node_const_iterator<std::pair<const std::pair<unsigned int,std::string >,data::RebateConfig>,false,true> *const)(v2 + 48));
  }
  result = ret;
  if ( v38 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8048) = 0LL;
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
  }
  return result;
};

// Line 156: range 000000000CDB7744-000000000CDB7A4B
const data::RebateConfig *__fastcall data::DbRebateConfigMgr::findRebateConfig(
        const data::DbRebateConfigMgr *const this,
        uint32_t account_type,
        std::string *p_account_uid)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::string *v6; // rsi
  unsigned __int64 v7; // rax
  const data::DbRebateConfigMgr *v8; // rax
  bool v9; // al
  const data::RebateConfig *result; // rax
  char v12[240]; // [rsp+20h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 4 16 account_type:155 48 8 8 iter:157 80 8 9 <unknown> 112 40 9 <unknown>";
  *(_QWORD *)(v3 + 16) = data::DbRebateConfigMgr::findRebateConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61956;
  v5[536862721] = -234881024;
  v5[536862722] = 62194;
  v5[536862722] = -234881024;
  v5[536862723] = 62194;
  v5[536862724] = -218103808;
  v5[536862725] = -202116109;
  *(_DWORD *)(v3 + 32) = account_type;
  v6 = std::move<std::string &>(p_account_uid);
  if ( *(char *)(((v3 + 112) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 151) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 - 105) & 7) >= *(_BYTE *)(((v3 + 151) >> 3) + 0x7FFF8000) )
  {
    v6 = (std::string *)40;
    __asan_report_store_n(v3 + 112, 40LL);
  }
  std::make_pair<unsigned int &,std::string>(
    (std::pair<unsigned int,std::string > *)(v3 + 112),
    (unsigned int *)(v3 + 32),
    v6);
  if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::unordered_map<std::pair<unsigned int,std::string >,data::RebateConfig,boost::hash<std::pair<unsigned int,std::string > >,std::equal_to<std::pair<unsigned int,std::string > >,std::allocator<std::pair<const std::pair<unsigned int,std::string >,data::RebateConfig> > >::const_iterator *)(v3 + 48) = std::unordered_map<std::pair<unsigned int,std::string>,data::RebateConfig,boost::hash<std::pair<unsigned int,std::string>>,std::equal_to<std::pair<unsigned int,std::string>>,std::allocator<std::pair<std::pair<unsigned int,std::string> const,data::RebateConfig>>>::find(&this->account_config_map_, (const std::unordered_map<std::pair<unsigned int,std::string >,data::RebateConfig,boost::hash<std::pair<unsigned int,std::string > >,std::equal_to<std::pair<unsigned int,std::string > >,std::allocator<std::pair<const std::pair<unsigned int,std::string >,data::RebateConfig> > >::key_type *)(v3 + 112));
  std::pair<unsigned int,std::string>::~pair((std::pair<unsigned int,std::string > *const)(v3 + 112));
  v7 = ((v3 + 112) >> 3) + 2147450880;
  *(_DWORD *)v7 = -117901064;
  *(_BYTE *)(v7 + 4) = -8;
  *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 0;
  v8 = this;
  if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::unordered_map<std::pair<unsigned int,std::string >,data::RebateConfig,boost::hash<std::pair<unsigned int,std::string > >,std::equal_to<std::pair<unsigned int,std::string > >,std::allocator<std::pair<const std::pair<unsigned int,std::string >,data::RebateConfig> > >::const_iterator *)(v3 + 80) = std::unordered_map<std::pair<unsigned int,std::string>,data::RebateConfig,boost::hash<std::pair<unsigned int,std::string>>,std::equal_to<std::pair<unsigned int,std::string>>,std::allocator<std::pair<std::pair<unsigned int,std::string> const,data::RebateConfig>>>::end(&v8->account_config_map_);
  v9 = std::__detail::operator==<std::pair<std::pair const<unsigned int,std::string>,data::RebateConfig>,true>(
         (const std::__detail::_Node_iterator_base<std::pair<const std::pair<unsigned int,std::string >,data::RebateConfig>,true> *)(v3 + 48),
         (const std::__detail::_Node_iterator_base<std::pair<const std::pair<unsigned int,std::string >,data::RebateConfig>,true> *)(v3 + 80));
  *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
  if ( v9 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<std::pair const<unsigned int,std::string>,data::RebateConfig>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::pair<unsigned int,std::string >,data::RebateConfig>,false,true> *const)(v3 + 48))->second;
  if ( v12 == (char *)v3 )
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

// Line 399: range 000000000CF1C686-000000000CF1CB26
// local variable allocation has failed, the output may be wrong!
void __cdecl data::populate_t_rebate_config<(mysqlpp::sql_dummy_type)0>(
        data::t_rebate_config *s,
        const mysqlpp::Row *row)
{
  unsigned __int64 p_anon_0; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  const mysqlpp::String *v5; // rax
  unsigned int v6; // edx
  const mysqlpp::String *v7; // r14
  const mysqlpp::String *v8; // r14
  std::string rowa; // [rsp+0h] [rbp-180h] OVERLAPPED BYREF

  rowa._M_string_length = (std::string::size_type)s;
  rowa._M_dataplus._M_p = (std::string::pointer)row;
  p_anon_0 = (unsigned __int64)&rowa._anon_0;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(320LL);
    if ( v3 )
      p_anon_0 = v3;
  }
  *(_QWORD *)p_anon_0 = 1102416563LL;
  *(_QWORD *)(p_anon_0 + 8) = "5 32 16 27 ignore_schema_mismatches:21 64 32 9 <unknown> 128 32 9 <unknown> 192 32 9 <unkn"
                              "own> 256 32 9 <unknown>";
  *(_QWORD *)(p_anon_0 + 16) = data::populate_t_rebate_config<(mysqlpp::sql_dummy_type)0>;
  v4 = (_DWORD *)(p_anon_0 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862723] = -218959118;
  v4[536862725] = -218959118;
  v4[536862727] = -218959118;
  v4[536862729] = -202116109;
  mysqlpp::NoExceptions::NoExceptions(
    (mysqlpp::NoExceptions *const)(p_anon_0 + 32),
    (const mysqlpp::OptionalExceptions *)rowa._M_dataplus._M_p);
  v5 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  v6 = mysqlpp::String::conv<unsigned int>(v5, 0);
  if ( *(_BYTE *)((rowa._M_string_length >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)((rowa._M_string_length >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(rowa._M_string_length);
  }
  *(_DWORD *)rowa._M_string_length = v6;
  v7 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  std::string::basic_string(p_anon_0 + 64);
  if ( *(char *)(((p_anon_0 + 128) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((p_anon_0 + 159) >> 3) + 0x7FFF8000) != 0
    && (char)((p_anon_0 - 97) & 7) >= *(_BYTE *)(((p_anon_0 + 159) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(p_anon_0 + 128, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(p_anon_0 + 128), v7, rowa);
  std::string::operator=(rowa._M_string_length + 8, p_anon_0 + 128);
  std::string::~string((void *)(p_anon_0 + 128));
  *(_DWORD *)(((p_anon_0 + 128) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(p_anon_0 + 64));
  *(_DWORD *)(((p_anon_0 + 64) >> 3) + 0x7FFF8000) = -117901064;
  *(_DWORD *)(((p_anon_0 + 256) >> 3) + 0x7FFF8000) = 0;
  v8 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  *(_DWORD *)(((p_anon_0 + 192) >> 3) + 0x7FFF8000) = 0;
  std::string::basic_string(p_anon_0 + 192);
  if ( *(char *)(((p_anon_0 + 256) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((p_anon_0 + 287) >> 3) + 0x7FFF8000) != 0
    && (char)((p_anon_0 + 31) & 7) >= *(_BYTE *)(((p_anon_0 + 287) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(p_anon_0 + 256, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(p_anon_0 + 256), v8, rowa);
  std::string::operator=(rowa._M_string_length + 40, p_anon_0 + 256);
  std::string::~string((void *)(p_anon_0 + 256));
  *(_DWORD *)(((p_anon_0 + 256) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(p_anon_0 + 192));
  *(_DWORD *)(((p_anon_0 + 192) >> 3) + 0x7FFF8000) = -117901064;
  mysqlpp::NoExceptions::~NoExceptions((mysqlpp::NoExceptions *const)(p_anon_0 + 32));
  if ( &rowa._anon_0 == (std::string::$CFBEC286C7F52157F7E59FC354047095 *)p_anon_0 )
  {
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8020) = 0LL;
  }
  else
  {
    *(_QWORD *)p_anon_0 = 1172321806LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
};
