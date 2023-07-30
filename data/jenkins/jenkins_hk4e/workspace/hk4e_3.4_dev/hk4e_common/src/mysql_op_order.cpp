// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_common/src/mysql_op_order.cpp

// Line 23: range 000000000D405780-000000000D405A76
int32_t __cdecl MysqlOpOrder::checkMysqlTableExistance()
{
  unsigned __int64 v0; // r13
  __int64 v1; // rax
  _DWORD *v2; // r12
  int32_t v3; // r15d
  unsigned __int64 v4; // rax
  char *i; // r14
  int32_t result; // eax
  char v7[240]; // [rsp+10h] [rbp-F0h] BYREF

  v0 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v1 = __asan_stack_malloc_2(192LL);
    if ( v1 )
      v0 = v1;
  }
  *(_QWORD *)v0 = 1102416563LL;
  *(_QWORD *)(v0 + 8) = "4 32 1 9 <unknown> 48 1 9 <unknown> 64 24 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v0 + 16) = MysqlOpOrder::checkMysqlTableExistance;
  v2 = (_DWORD *)(v0 >> 3);
  v2[536862720] = -235802127;
  v2[536862721] = -234753535;
  v2[536862722] = -234881024;
  v2[536862723] = -218959118;
  v2[536862725] = -202116109;
  std::allocator<char>::allocator(v0 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v0 + 128),
    "t_order_data",
    (const std::allocator<char> *)(v0 + 32));
  std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v0 + 48));
  std::vector<std::string>::vector(
    (std::vector<std::string> *const)(v0 + 64),
    (std::initializer_list<std::string >)__PAIR128__(1LL, v0 + 128),
    (const std::vector<std::string>::allocator_type *)(v0 + 48));
  v3 = MysqlOpBase::checkMysqlTableExistance(0x7D1u, (const std::vector<std::string> *)(v0 + 64));
  std::vector<std::string>::~vector((std::vector<std::string> *const)(v0 + 64));
  v4 = ((v0 + 64) >> 3) + 2147450880;
  *(_WORD *)v4 = -1800;
  *(_BYTE *)(v4 + 2) = -8;
  std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v0 + 48));
  *(_BYTE *)(((v0 + 48) >> 3) + 0x7FFF8000) = -8;
  for ( i = (char *)(v0 + 160); i != (char *)(v0 + 128); std::string::~string(i) )
    i -= 32;
  *(_DWORD *)(((v0 + 128) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v0 + 32);
  result = v3;
  if ( v7 == (char *)v0 )
  {
    *(_QWORD *)((v0 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v0 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v0 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v0 = 1172321806LL;
    *(_QWORD *)((v0 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v0 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v0 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 29: range 000000000D405A78-000000000D407AB8
int32_t __cdecl MysqlOpOrder::insertOrder(const TableOrderData *row, uint32_t *order_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rsi
  mysqlpp::Connection *v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  std::ostream *v14; // rax
  std::ostream *ostr; // r14
  unsigned __int64 v16; // rax
  __int64 v17; // rax
  std::ostream *v18; // rax
  std::ostream *v19; // r14
  unsigned __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  std::ostream *v26; // rax
  std::ostream *v27; // r14
  unsigned __int64 v28; // rax
  __int64 v29; // rax
  std::ostream *v30; // rax
  std::ostream *v31; // r14
  unsigned __int64 v32; // rax
  __int64 v33; // rax
  std::ostream *v34; // rax
  std::ostream *v35; // r14
  unsigned __int64 v36; // rax
  __int64 v37; // rax
  std::ostream *v38; // rax
  std::ostream *v39; // r14
  unsigned __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rax
  std::ostream *v46; // rax
  std::ostream *v47; // r14
  unsigned __int64 v48; // rax
  __int64 v49; // rax
  std::ostream *v50; // rax
  std::ostream *v51; // r14
  unsigned __int64 v52; // rax
  __int64 v53; // rax
  std::ostream *v54; // rax
  std::ostream *v55; // r14
  unsigned __int64 v56; // rax
  __int64 v57; // rax
  std::ostream *v58; // rax
  std::ostream *v59; // r14
  unsigned __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rcx
  __int64 v63; // rax
  std::ostream *v64; // rax
  std::ostream *v65; // r14
  unsigned __int64 v66; // rax
  __int64 v67; // rax
  std::ostream *v68; // rax
  std::ostream *v69; // r14
  unsigned __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // rcx
  __int64 v73; // rax
  __int64 v74; // rcx
  __int64 v75; // rax
  std::ostream *v76; // rax
  std::ostream *v77; // r14
  unsigned __int64 v78; // rax
  __int64 v79; // rax
  std::ostream *v80; // rax
  std::ostream *v81; // r14
  unsigned __int64 v82; // rax
  __int64 v83; // rax
  std::ostream *v84; // rax
  std::ostream *v85; // r14
  unsigned __int64 v86; // rax
  __int64 v87; // rax
  std::ostream *v88; // rax
  std::ostream *v89; // r14
  unsigned __int64 v90; // rax
  __int64 v91; // rax
  std::ostream *v92; // rax
  std::ostream *v93; // r14
  unsigned __int64 v94; // rax
  __int64 v95; // rax
  unsigned __int64 v96; // rax
  unsigned __int64 v97; // rax
  unsigned __int64 v98; // rax
  unsigned __int64 v99; // rax
  unsigned __int64 v100; // rax
  unsigned __int64 v101; // rax
  unsigned __int64 v102; // rax
  unsigned __int64 v103; // rax
  unsigned __int64 v104; // rax
  unsigned __int64 v105; // rax
  unsigned __int64 v106; // rax
  unsigned __int64 v107; // rax
  unsigned __int64 v108; // rax
  unsigned __int64 v109; // rax
  unsigned __int64 v110; // rax
  unsigned __int64 v111; // rax
  unsigned __int64 v112; // rax
  unsigned __int64 v113; // rax
  unsigned __int64 v114; // rax
  uint32_t inserted; // edi
  char v118[2480]; // [rsp+30h] [rbp-9B0h] BYREF

  v2 = (unsigned __int64)v118;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_6(2432LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "29 32 1 9 <unknown> 48 1 9 <unknown> 64 16 11 conn_ptr:36 96 24 9 <unknown> 160 24 9 <unknown> 2"
                        "24 24 9 <unknown> 288 24 9 <unknown> 352 24 9 <unknown> 416 24 9 <unknown> 480 24 9 <unknown> 54"
                        "4 24 9 <unknown> 608 24 9 <unknown> 672 24 9 <unknown> 736 24 9 <unknown> 800 24 9 <unknown> 864"
                        " 24 9 <unknown> 928 24 9 <unknown> 992 24 9 <unknown> 1056 24 9 <unknown> 1120 24 9 <unknown> 11"
                        "84 32 9 <unknown> 1248 32 9 <unknown> 1312 32 9 <unknown> 1376 32 9 <unknown> 1440 32 9 <unknown"
                        "> 1504 32 9 <unknown> 1568 56 13 _tc_guard_:30 1664 56 9 <unknown> 1760 544 8 query:43";
  *(_QWORD *)(v2 + 16) = MysqlOpOrder::insertOrder;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862722] = -219021312;
  v4[536862723] = -234881024;
  v4[536862724] = -218959118;
  v4[536862725] = -234881024;
  v4[536862726] = -218959118;
  v4[536862727] = -234881024;
  v4[536862728] = -218959118;
  v4[536862729] = -234881024;
  v4[536862730] = -218959118;
  v4[536862731] = -234881024;
  v4[536862732] = -218959118;
  v4[536862733] = -234881024;
  v4[536862734] = -218959118;
  v4[536862735] = -234881024;
  v4[536862736] = -218959118;
  v4[536862737] = -234881024;
  v4[536862738] = -218959118;
  v4[536862739] = -234881024;
  v4[536862740] = -218959118;
  v4[536862741] = -234881024;
  v4[536862742] = -218959118;
  v4[536862743] = -234881024;
  v4[536862744] = -218959118;
  v4[536862745] = -234881024;
  v4[536862746] = -218959118;
  v4[536862747] = -234881024;
  v4[536862748] = -218959118;
  v4[536862749] = -234881024;
  v4[536862750] = -218959118;
  v4[536862751] = -234881024;
  v4[536862752] = -218959118;
  v4[536862753] = -234881024;
  v4[536862754] = -218959118;
  v4[536862755] = -234881024;
  v4[536862756] = -218959118;
  v4[536862758] = -218959118;
  v4[536862760] = -218959118;
  v4[536862762] = -218959118;
  v4[536862764] = -218959118;
  v4[536862766] = -218959118;
  v4[536862768] = -218959118;
  v4[536862770] = -234881024;
  v4[536862771] = -218959118;
  v4[536862773] = -234881024;
  v4[536862774] = -218959118;
  v4[536862792] = -202116109;
  v4[536862793] = -202116109;
  v4[536862794] = -202116109;
  v4[536862795] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 1248),
    "insertOrder",
    (const std::allocator<char> *)(v2 + 48));
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 1184),
    "MYSQL",
    (const std::allocator<char> *)(v2 + 32));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v2 + 1568),
    (const std::string *)(v2 + 1184),
    (const std::string *)(v2 + 1248));
  std::string::~string((void *)(v2 + 1184));
  *(_DWORD *)(((v2 + 1184) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  std::string::~string((void *)(v2 + 1248));
  *(_DWORD *)(((v2 + 1248) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( *(_BYTE *)(((unsigned __int64)&row->uid >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)row + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&row->uid >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&row->uid);
  }
  if ( row->uid )
  {
    *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
    v6 = std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::mysql_mgr_ptr);
    if ( *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store16(v2 + 64, v6);
    common::midb::MySqlMgrT<std::mutex>::grab(v6, 0x7D1u, 0);
    if ( std::operator==<mysqlpp::Connection>(0LL, (const std::shared_ptr<mysqlpp::Connection> *)(v2 + 64)) )
    {
      *(_DWORD *)(((v2 + 1376) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 1376) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 1407) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 1407) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 1376, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 1376),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "src/mysql_op_order.cpp",
        "insertOrder",
        39);
      common::milog::MiLogStream::operator()(
        (common::milog::MiLogStream *const)(v2 + 1376),
        "[MYSQL]grab connect to mysql order db failed");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1376));
      *(_DWORD *)(((v2 + 1376) >> 3) + 0x7FFF8000) = -117901064;
      v5 = -1;
    }
    else
    {
      __asan_unpoison_stack_memory(v2 + 1760, 544LL);
      v7 = std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      if ( *(char *)(((v2 + 1760) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 2303) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 1) & 7) >= *(_BYTE *)(((v2 + 2303) >> 3) + 0x7FFF8000) )
      {
        v7 = (mysqlpp::Connection *)544;
        __asan_report_store_n(v2 + 1760, 544LL);
      }
      mysqlpp::Connection::query((mysqlpp::Query *)(v2 + 1760), v7, qstr);
      v8 = std::operator<<<std::char_traits<char>>(
             v2 + 1760,
             "insert into t_order_data(uid, product_id, product_name, product_num, coin_num, ");
      v9 = std::operator<<<std::char_traits<char>>(
             v8,
             "total_fee, currency, price_tier, trade_no, trade_time, channel_id, channel_order_no, ");
      v10 = std::operator<<<std::char_traits<char>>(
              v9,
              "pay_plat, extend, env, is_sandbox, region, bonus, bonus_num, vip_point_num, ");
      v11 = std::operator<<<std::char_traits<char>>(v10, "pay_type, pay_vendor, client_type, device, client_ip) values");
      v12 = std::operator<<<std::char_traits<char>>(v11, "(");
      if ( *(_BYTE *)(((unsigned __int64)&row->uid >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)row + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&row->uid >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&row->uid);
      }
      v13 = std::ostream::operator<<(v12, row->uid);
      v14 = (std::ostream *)std::operator<<<std::char_traits<char>>(v13, ",");
      ostr = mysqlpp::operator<<(v14, quote).ostr;
      v16 = ((v2 + 96) >> 3) + 2147450880;
      *(_WORD *)v16 = 0;
      *(_BYTE *)(v16 + 2) = 0;
      mysqlpp::SQLTypeAdapter::SQLTypeAdapter(v2 + 96, &row->product_id, 0LL);
      v17 = mysqlpp::operator<<(ostr, (mysqlpp::SQLTypeAdapter *)(v2 + 96));
      v18 = (std::ostream *)std::operator<<<std::char_traits<char>>(v17, ",");
      v19 = mysqlpp::operator<<(v18, quote).ostr;
      v20 = ((v2 + 160) >> 3) + 2147450880;
      *(_WORD *)v20 = 0;
      *(_BYTE *)(v20 + 2) = 0;
      mysqlpp::SQLTypeAdapter::SQLTypeAdapter(v2 + 160, &row->product_name, 0LL);
      v21 = mysqlpp::operator<<(v19, (mysqlpp::SQLTypeAdapter *)(v2 + 160));
      v22 = std::operator<<<std::char_traits<char>>(v21, ",");
      if ( *(_BYTE *)(((unsigned __int64)&row->product_num >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&row->product_num >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&row->product_num);
      }
      v23 = std::ostream::operator<<(v22, row->product_num);
      v24 = std::operator<<<std::char_traits<char>>(v23, ",");
      if ( *(_BYTE *)(((unsigned __int64)&row->coin_num >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)row + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&row->coin_num >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&row->coin_num);
      }
      v25 = std::ostream::operator<<(v24, row->coin_num);
      v26 = (std::ostream *)std::operator<<<std::char_traits<char>>(v25, ",");
      v27 = mysqlpp::operator<<(v26, quote).ostr;
      v28 = ((v2 + 224) >> 3) + 2147450880;
      *(_WORD *)v28 = 0;
      *(_BYTE *)(v28 + 2) = 0;
      mysqlpp::SQLTypeAdapter::SQLTypeAdapter(v2 + 224, &row->total_fee, 0LL);
      v29 = mysqlpp::operator<<(v27, (mysqlpp::SQLTypeAdapter *)(v2 + 224));
      v30 = (std::ostream *)std::operator<<<std::char_traits<char>>(v29, ",");
      v31 = mysqlpp::operator<<(v30, quote).ostr;
      v32 = ((v2 + 288) >> 3) + 2147450880;
      *(_WORD *)v32 = 0;
      *(_BYTE *)(v32 + 2) = 0;
      mysqlpp::SQLTypeAdapter::SQLTypeAdapter(v2 + 288, &row->currency, 0LL);
      v33 = mysqlpp::operator<<(v31, (mysqlpp::SQLTypeAdapter *)(v2 + 288));
      v34 = (std::ostream *)std::operator<<<std::char_traits<char>>(v33, ",");
      v35 = mysqlpp::operator<<(v34, quote).ostr;
      v36 = ((v2 + 352) >> 3) + 2147450880;
      *(_WORD *)v36 = 0;
      *(_BYTE *)(v36 + 2) = 0;
      mysqlpp::SQLTypeAdapter::SQLTypeAdapter(v2 + 352, &row->price_tier, 0LL);
      v37 = mysqlpp::operator<<(v35, (mysqlpp::SQLTypeAdapter *)(v2 + 352));
      v38 = (std::ostream *)std::operator<<<std::char_traits<char>>(v37, ",");
      v39 = mysqlpp::operator<<(v38, quote).ostr;
      v40 = ((v2 + 416) >> 3) + 2147450880;
      *(_WORD *)v40 = 0;
      *(_BYTE *)(v40 + 2) = 0;
      mysqlpp::SQLTypeAdapter::SQLTypeAdapter(v2 + 416, &row->trade_no, 0LL);
      v41 = mysqlpp::operator<<(v39, (mysqlpp::SQLTypeAdapter *)(v2 + 416));
      v42 = std::operator<<<std::char_traits<char>>(v41, ",");
      if ( *(_BYTE *)(((unsigned __int64)&row->trade_time >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&row->trade_time >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&row->trade_time);
      }
      v43 = std::ostream::operator<<(v42, row->trade_time);
      v44 = std::operator<<<std::char_traits<char>>(v43, ",");
      if ( *(_BYTE *)(((unsigned __int64)&row->channel_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)row - 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&row->channel_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&row->channel_id);
      }
      v45 = std::ostream::operator<<(v44, row->channel_id);
      v46 = (std::ostream *)std::operator<<<std::char_traits<char>>(v45, ",");
      v47 = mysqlpp::operator<<(v46, quote).ostr;
      v48 = ((v2 + 480) >> 3) + 2147450880;
      *(_WORD *)v48 = 0;
      *(_BYTE *)(v48 + 2) = 0;
      mysqlpp::SQLTypeAdapter::SQLTypeAdapter(v2 + 480, &row->channel_order_no, 0LL);
      v49 = mysqlpp::operator<<(v47, (mysqlpp::SQLTypeAdapter *)(v2 + 480));
      v50 = (std::ostream *)std::operator<<<std::char_traits<char>>(v49, ",");
      v51 = mysqlpp::operator<<(v50, quote).ostr;
      v52 = ((v2 + 544) >> 3) + 2147450880;
      *(_WORD *)v52 = 0;
      *(_BYTE *)(v52 + 2) = 0;
      mysqlpp::SQLTypeAdapter::SQLTypeAdapter(v2 + 544, &row->pay_plat, 0LL);
      v53 = mysqlpp::operator<<(v51, (mysqlpp::SQLTypeAdapter *)(v2 + 544));
      v54 = (std::ostream *)std::operator<<<std::char_traits<char>>(v53, ",");
      v55 = mysqlpp::operator<<(v54, quote).ostr;
      v56 = ((v2 + 608) >> 3) + 2147450880;
      *(_WORD *)v56 = 0;
      *(_BYTE *)(v56 + 2) = 0;
      mysqlpp::SQLTypeAdapter::SQLTypeAdapter(v2 + 608, &row->extend, 0LL);
      v57 = mysqlpp::operator<<(v55, (mysqlpp::SQLTypeAdapter *)(v2 + 608));
      v58 = (std::ostream *)std::operator<<<std::char_traits<char>>(v57, ",");
      v59 = mysqlpp::operator<<(v58, quote).ostr;
      v60 = ((v2 + 672) >> 3) + 2147450880;
      *(_WORD *)v60 = 0;
      *(_BYTE *)(v60 + 2) = 0;
      mysqlpp::SQLTypeAdapter::SQLTypeAdapter(v2 + 672, &row->env, 0LL);
      v61 = mysqlpp::operator<<(v59, (mysqlpp::SQLTypeAdapter *)(v2 + 672));
      v62 = std::operator<<<std::char_traits<char>>(v61, ",");
      if ( *(_BYTE *)(((unsigned __int64)&row->is_sandbox >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&row->is_sandbox >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&row->is_sandbox);
      }
      v63 = std::ostream::operator<<(v62, row->is_sandbox);
      v64 = (std::ostream *)std::operator<<<std::char_traits<char>>(v63, ",");
      v65 = mysqlpp::operator<<(v64, quote).ostr;
      v66 = ((v2 + 736) >> 3) + 2147450880;
      *(_WORD *)v66 = 0;
      *(_BYTE *)(v66 + 2) = 0;
      mysqlpp::SQLTypeAdapter::SQLTypeAdapter(v2 + 736, &row->region, 0LL);
      v67 = mysqlpp::operator<<(v65, (mysqlpp::SQLTypeAdapter *)(v2 + 736));
      v68 = (std::ostream *)std::operator<<<std::char_traits<char>>(v67, ",");
      v69 = mysqlpp::operator<<(v68, quote).ostr;
      v70 = ((v2 + 800) >> 3) + 2147450880;
      *(_WORD *)v70 = 0;
      *(_BYTE *)(v70 + 2) = 0;
      mysqlpp::SQLTypeAdapter::SQLTypeAdapter(v2 + 800, &row->bonus, 0LL);
      v71 = mysqlpp::operator<<(v69, (mysqlpp::SQLTypeAdapter *)(v2 + 800));
      v72 = std::operator<<<std::char_traits<char>>(v71, ",");
      if ( *(_BYTE *)(((unsigned __int64)&row->bonus_num >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&row->bonus_num >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&row->bonus_num);
      }
      v73 = std::ostream::operator<<(v72, row->bonus_num);
      v74 = std::operator<<<std::char_traits<char>>(v73, ",");
      if ( *(_BYTE *)(((unsigned __int64)&row->vip_point_num >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)row - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&row->vip_point_num >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&row->vip_point_num);
      }
      v75 = std::ostream::operator<<(v74, row->vip_point_num);
      v76 = (std::ostream *)std::operator<<<std::char_traits<char>>(v75, ",");
      v77 = mysqlpp::operator<<(v76, quote).ostr;
      v78 = ((v2 + 864) >> 3) + 2147450880;
      *(_WORD *)v78 = 0;
      *(_BYTE *)(v78 + 2) = 0;
      mysqlpp::SQLTypeAdapter::SQLTypeAdapter(v2 + 864, &row->pay_type, 0LL);
      v79 = mysqlpp::operator<<(v77, (mysqlpp::SQLTypeAdapter *)(v2 + 864));
      v80 = (std::ostream *)std::operator<<<std::char_traits<char>>(v79, ",");
      v81 = mysqlpp::operator<<(v80, quote).ostr;
      v82 = ((v2 + 928) >> 3) + 2147450880;
      *(_WORD *)v82 = 0;
      *(_BYTE *)(v82 + 2) = 0;
      mysqlpp::SQLTypeAdapter::SQLTypeAdapter(v2 + 928, &row->pay_vendor, 0LL);
      v83 = mysqlpp::operator<<(v81, (mysqlpp::SQLTypeAdapter *)(v2 + 928));
      v84 = (std::ostream *)std::operator<<<std::char_traits<char>>(v83, ",");
      v85 = mysqlpp::operator<<(v84, quote).ostr;
      v86 = ((v2 + 992) >> 3) + 2147450880;
      *(_WORD *)v86 = 0;
      *(_BYTE *)(v86 + 2) = 0;
      mysqlpp::SQLTypeAdapter::SQLTypeAdapter(v2 + 992, &row->client_type, 0LL);
      v87 = mysqlpp::operator<<(v85, (mysqlpp::SQLTypeAdapter *)(v2 + 992));
      v88 = (std::ostream *)std::operator<<<std::char_traits<char>>(v87, ",");
      v89 = mysqlpp::operator<<(v88, quote).ostr;
      v90 = ((v2 + 1056) >> 3) + 2147450880;
      *(_WORD *)v90 = 0;
      *(_BYTE *)(v90 + 2) = 0;
      mysqlpp::SQLTypeAdapter::SQLTypeAdapter(v2 + 1056, &row->device, 0LL);
      v91 = mysqlpp::operator<<(v89, (mysqlpp::SQLTypeAdapter *)(v2 + 1056));
      v92 = (std::ostream *)std::operator<<<std::char_traits<char>>(v91, ",");
      v93 = mysqlpp::operator<<(v92, quote).ostr;
      v94 = ((v2 + 1120) >> 3) + 2147450880;
      *(_WORD *)v94 = 0;
      *(_BYTE *)(v94 + 2) = 0;
      mysqlpp::SQLTypeAdapter::SQLTypeAdapter(v2 + 1120, &row->client_ip, 0LL);
      v95 = mysqlpp::operator<<(v93, (mysqlpp::SQLTypeAdapter *)(v2 + 1120));
      std::operator<<<std::char_traits<char>>(v95, ")");
      mysqlpp::SQLTypeAdapter::~SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v2 + 1120));
      v96 = ((v2 + 1120) >> 3) + 2147450880;
      *(_WORD *)v96 = -1800;
      *(_BYTE *)(v96 + 2) = -8;
      mysqlpp::SQLTypeAdapter::~SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v2 + 1056));
      v97 = ((v2 + 1056) >> 3) + 2147450880;
      *(_WORD *)v97 = -1800;
      *(_BYTE *)(v97 + 2) = -8;
      mysqlpp::SQLTypeAdapter::~SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v2 + 992));
      v98 = ((v2 + 992) >> 3) + 2147450880;
      *(_WORD *)v98 = -1800;
      *(_BYTE *)(v98 + 2) = -8;
      mysqlpp::SQLTypeAdapter::~SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v2 + 928));
      v99 = ((v2 + 928) >> 3) + 2147450880;
      *(_WORD *)v99 = -1800;
      *(_BYTE *)(v99 + 2) = -8;
      mysqlpp::SQLTypeAdapter::~SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v2 + 864));
      v100 = ((v2 + 864) >> 3) + 2147450880;
      *(_WORD *)v100 = -1800;
      *(_BYTE *)(v100 + 2) = -8;
      mysqlpp::SQLTypeAdapter::~SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v2 + 800));
      v101 = ((v2 + 800) >> 3) + 2147450880;
      *(_WORD *)v101 = -1800;
      *(_BYTE *)(v101 + 2) = -8;
      mysqlpp::SQLTypeAdapter::~SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v2 + 736));
      v102 = ((v2 + 736) >> 3) + 2147450880;
      *(_WORD *)v102 = -1800;
      *(_BYTE *)(v102 + 2) = -8;
      mysqlpp::SQLTypeAdapter::~SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v2 + 672));
      v103 = ((v2 + 672) >> 3) + 2147450880;
      *(_WORD *)v103 = -1800;
      *(_BYTE *)(v103 + 2) = -8;
      mysqlpp::SQLTypeAdapter::~SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v2 + 608));
      v104 = ((v2 + 608) >> 3) + 2147450880;
      *(_WORD *)v104 = -1800;
      *(_BYTE *)(v104 + 2) = -8;
      mysqlpp::SQLTypeAdapter::~SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v2 + 544));
      v105 = ((v2 + 544) >> 3) + 2147450880;
      *(_WORD *)v105 = -1800;
      *(_BYTE *)(v105 + 2) = -8;
      mysqlpp::SQLTypeAdapter::~SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v2 + 480));
      v106 = ((v2 + 480) >> 3) + 2147450880;
      *(_WORD *)v106 = -1800;
      *(_BYTE *)(v106 + 2) = -8;
      mysqlpp::SQLTypeAdapter::~SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v2 + 416));
      v107 = ((v2 + 416) >> 3) + 2147450880;
      *(_WORD *)v107 = -1800;
      *(_BYTE *)(v107 + 2) = -8;
      mysqlpp::SQLTypeAdapter::~SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v2 + 352));
      v108 = ((v2 + 352) >> 3) + 2147450880;
      *(_WORD *)v108 = -1800;
      *(_BYTE *)(v108 + 2) = -8;
      mysqlpp::SQLTypeAdapter::~SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v2 + 288));
      v109 = ((v2 + 288) >> 3) + 2147450880;
      *(_WORD *)v109 = -1800;
      *(_BYTE *)(v109 + 2) = -8;
      mysqlpp::SQLTypeAdapter::~SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v2 + 224));
      v110 = ((v2 + 224) >> 3) + 2147450880;
      *(_WORD *)v110 = -1800;
      *(_BYTE *)(v110 + 2) = -8;
      mysqlpp::SQLTypeAdapter::~SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v2 + 160));
      v111 = ((v2 + 160) >> 3) + 2147450880;
      *(_WORD *)v111 = -1800;
      *(_BYTE *)(v111 + 2) = -8;
      mysqlpp::SQLTypeAdapter::~SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v2 + 96));
      v112 = ((v2 + 96) >> 3) + 2147450880;
      *(_WORD *)v112 = -1800;
      *(_BYTE *)(v112 + 2) = -8;
      v113 = ((v2 + 1664) >> 3) + 2147450880;
      *(_DWORD *)v113 = 0;
      *(_WORD *)(v113 + 4) = 0;
      *(_BYTE *)(v113 + 6) = 0;
      if ( *(char *)(((v2 + 1664) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 1719) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 73) & 7) >= *(_BYTE *)(((v2 + 1719) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 1664, 56LL);
      }
      mysqlpp::Query::execute((mysqlpp::Query *)(v2 + 1664));
      mysqlpp::SimpleResult::~SimpleResult((mysqlpp::SimpleResult *const)(v2 + 1664));
      v114 = ((v2 + 1664) >> 3) + 2147450880;
      *(_DWORD *)v114 = -117901064;
      *(_WORD *)(v114 + 4) = -1800;
      *(_BYTE *)(v114 + 6) = -8;
      inserted = mysqlpp::Query::insert_id((mysqlpp::Query *const)(v2 + 1760));
      if ( *(_BYTE *)(((unsigned __int64)order_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)order_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)order_id >> 3) + 0x7FFF8000) )
      {
        inserted = (unsigned int)order_id;
        __asan_report_store4(order_id);
      }
      *order_id = inserted;
      v5 = 0;
      mysqlpp::Query::~Query((mysqlpp::Query *const)(v2 + 1760));
    }
    std::shared_ptr<mysqlpp::Connection>::~shared_ptr((std::shared_ptr<mysqlpp::Connection> *const)(v2 + 64));
  }
  else
  {
    *(_DWORD *)(((v2 + 1312) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 1312) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 1343) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 1343) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 1312, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 1312),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/mysql_op_order.cpp",
      "insertOrder",
      33);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v2 + 1312), "row.uid == 0");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1312));
    *(_DWORD *)(((v2 + 1312) >> 3) + 0x7FFF8000) = -117901064;
    v5 = -1;
  }
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v2 + 1568));
  if ( v118 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80BC) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 196) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v2 >> 3) + 0x7FFF80C8) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80D0) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80D8) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8120) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8128) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_6(v2, 2432LL, v118);
  }
  return v5;
};

// Line 86: range 000000000D407ABA-000000000D408579
int32_t __cdecl MysqlOpOrder::updateOrderFinishTime(uint32_t order_id, uint32_t finish_time)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rsi
  mysqlpp::Connection *v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  char v15[1328]; // [rsp+20h] [rbp-530h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1280LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "11 32 1 9 <unknown> 48 1 9 <unknown> 64 16 11 conn_ptr:93 96 32 9 <unknown> 160 32 9 <unknown> 2"
                        "24 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 56 13 _tc_guard_:87 512 56 9 <unknow"
                        "n> 608 544 9 query:100";
  *(_QWORD *)(v2 + 16) = MysqlOpOrder::updateOrderFinishTime;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862722] = -219021312;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -218959118;
  v4[536862730] = -218959118;
  v4[536862732] = -218959118;
  v4[536862734] = -234881024;
  v4[536862735] = -218959118;
  v4[536862737] = -234881024;
  v4[536862738] = -218959118;
  v4[536862756] = -202116109;
  v4[536862757] = -202116109;
  v4[536862758] = -202116109;
  v4[536862759] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 160),
    "updateOrderFinishTime",
    (const std::allocator<char> *)(v2 + 48));
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 96),
    "MYSQL",
    (const std::allocator<char> *)(v2 + 32));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v2 + 416),
    (const std::string *)(v2 + 96),
    (const std::string *)(v2 + 160));
  std::string::~string((void *)(v2 + 96));
  *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  std::string::~string((void *)(v2 + 160));
  *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( order_id && finish_time )
  {
    *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
    v6 = std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::mysql_mgr_ptr);
    if ( *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store16(v2 + 64, v6);
    common::midb::MySqlMgrT<std::mutex>::grab(v6, 0x7D1u, 0);
    if ( std::operator==<mysqlpp::Connection>(0LL, (const std::shared_ptr<mysqlpp::Connection> *)(v2 + 64)) )
    {
      *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 288) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 319) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 319) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 288, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 288),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "src/mysql_op_order.cpp",
        "updateOrderFinishTime",
        96);
      common::milog::MiLogStream::operator()(
        (common::milog::MiLogStream *const)(v2 + 288),
        "[MYSQL]grab connect to mysql order db failed");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
      v5 = -1;
    }
    else
    {
      __asan_unpoison_stack_memory(v2 + 608, 544LL);
      v7 = std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      if ( *(char *)(((v2 + 608) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 1151) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 1151) >> 3) + 0x7FFF8000) )
      {
        v7 = (mysqlpp::Connection *)544;
        __asan_report_store_n(v2 + 608, 544LL);
      }
      mysqlpp::Connection::query((mysqlpp::Query *)(v2 + 608), v7, 0LL);
      v8 = std::operator<<<std::char_traits<char>>(v2 + 608, "update t_order_data set finish_time=");
      v9 = std::ostream::operator<<(v8, finish_time);
      v10 = std::operator<<<std::char_traits<char>>(v9, " where id=");
      std::ostream::operator<<(v10, order_id);
      v11 = ((v2 + 512) >> 3) + 2147450880;
      *(_DWORD *)v11 = 0;
      *(_WORD *)(v11 + 4) = 0;
      *(_BYTE *)(v11 + 6) = 0;
      if ( *(char *)(((v2 + 512) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 567) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 55) & 7) >= *(_BYTE *)(((v2 + 567) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 512, 56LL);
      }
      mysqlpp::Query::execute((mysqlpp::Query *)(v2 + 512));
      mysqlpp::SimpleResult::~SimpleResult((mysqlpp::SimpleResult *const)(v2 + 512));
      v12 = ((v2 + 512) >> 3) + 2147450880;
      *(_DWORD *)v12 = -117901064;
      *(_WORD *)(v12 + 4) = -1800;
      *(_BYTE *)(v12 + 6) = -8;
      v5 = 0;
      mysqlpp::Query::~Query((mysqlpp::Query *const)(v2 + 608));
    }
    std::shared_ptr<mysqlpp::Connection>::~shared_ptr((std::shared_ptr<mysqlpp::Connection> *const)(v2 + 64));
  }
  else
  {
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 224) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 32 + 31) & 7) >= *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 224, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 224),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/mysql_op_order.cpp",
      "updateOrderFinishTime",
      90);
    common::milog::MiLogStream::operator()(
      (common::milog::MiLogStream *const)(v2 + 224),
      "order_id == 0 or finish_time == 0");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    v5 = -1;
  }
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v2 + 416));
  if ( v15 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8030) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8048) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8090) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8098) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1280LL, v15);
  }
  return v5;
};

// Line 117: range 000000000D40857A-000000000D409361
int32_t __cdecl MysqlOpOrder::selectRecentUnfinishedOrder(uint32_t uid, std::vector<TableOrderData> *order_vec)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rsi
  time_t v7; // rsi
  mysqlpp::Connection *v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  std::ostream *v12; // rax
  std::ostream *ostr; // r14
  unsigned __int64 v14; // rax
  __int64 v15; // rax
  unsigned __int64 v16; // rax
  std::logic_error *exception; // rdi
  uint32_t now; // [rsp+20h] [rbp-5A0h]
  char v21[1424]; // [rsp+30h] [rbp-590h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1376LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "13 32 1 9 <unknown> 48 1 9 <unknown> 64 16 12 conn_ptr:125 96 24 9 <unknown> 160 32 9 <unknown> "
                        "224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 18 start_time"
                        "_str:138 544 32 9 <unknown> 608 56 14 _tc_guard_:118 704 544 9 query:141";
  *(_QWORD *)(v2 + 16) = MysqlOpOrder::selectRecentUnfinishedOrder;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862722] = -219021312;
  v4[536862723] = -234881024;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -218959118;
  v4[536862730] = -218959118;
  v4[536862732] = -218959118;
  v4[536862734] = -218959118;
  v4[536862736] = -218959118;
  v4[536862738] = -218959118;
  v4[536862740] = -234881024;
  v4[536862741] = -218959118;
  v4[536862759] = -202116109;
  v4[536862760] = -202116109;
  v4[536862761] = -202116109;
  v4[536862762] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 224),
    "selectRecentUnfinishedOrder",
    (const std::allocator<char> *)(v2 + 48));
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 160),
    "MYSQL",
    (const std::allocator<char> *)(v2 + 32));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v2 + 608),
    (const std::string *)(v2 + 160),
    (const std::string *)(v2 + 224));
  std::string::~string((void *)(v2 + 160));
  *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  std::string::~string((void *)(v2 + 224));
  *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( uid )
  {
    *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
    v6 = std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::mysql_mgr_ptr);
    if ( *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store16(v2 + 64, v6);
    common::midb::MySqlMgrT<std::mutex>::grab(v6, 0x7D1u, 0);
    if ( std::operator==<mysqlpp::Connection>(0LL, (const std::shared_ptr<mysqlpp::Connection> *)(v2 + 64)) )
    {
      *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 352) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 383) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 383) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 352, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 352),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "src/mysql_op_order.cpp",
        "selectRecentUnfinishedOrder",
        128);
      common::milog::MiLogStream::operator()(
        (common::milog::MiLogStream *const)(v2 + 352),
        "[MYSQL]grab connect to mysql order db failed");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 352));
      *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
      v5 = -1;
    }
    else
    {
      now = common::tools::TimeUtils::getNow();
      if ( now > 0x278D00 )
      {
        *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = 0;
        v7 = now - 2592000;
        if ( *(char *)(((v2 + 480) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 511) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 1) & 7) >= *(_BYTE *)(((v2 + 511) >> 3) + 0x7FFF8000) )
        {
          v7 = 32LL;
          __asan_report_store_n(v2 + 480, 32LL);
        }
        common::tools::TimeUtils::getStrByTime[abi:cxx11]((std::string *)(v2 + 480), v7);
        __asan_unpoison_stack_memory(v2 + 704, 544LL);
        v8 = std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        if ( *(char *)(((v2 + 704) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 1247) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 1247) >> 3) + 0x7FFF8000) )
        {
          v8 = (mysqlpp::Connection *)544;
          __asan_report_store_n(v2 + 704, 544LL);
        }
        mysqlpp::Connection::query((mysqlpp::Query *)(v2 + 704), v8, "select ");
        std::operator<<<std::char_traits<char>>(
          v2 + 704,
          " id, uid, product_id, product_name, product_num, coin_num, total_fee, currency, price_tier, ");
        std::operator<<<std::char_traits<char>>(
          v2 + 704,
          " trade_no, trade_time, channel_id, channel_order_no, pay_plat, extend, unix_timestamp(create_time) as create_t"
          "ime, finish_time, ");
        std::operator<<<std::char_traits<char>>(
          v2 + 704,
          " bonus, bonus_num, vip_point_num, pay_type, pay_vendor, client_type, device, client_ip ");
        std::operator<<<std::char_traits<char>>(v2 + 704, " from t_order_data");
        v9 = std::operator<<<std::char_traits<char>>(v2 + 704, " where uid=");
        v10 = std::ostream::operator<<(v9, uid);
        v11 = std::operator<<<std::char_traits<char>>(v10, " and ");
        v12 = (std::ostream *)std::operator<<<std::char_traits<char>>(v11, " create_time >=");
        ostr = mysqlpp::operator<<(v12, quote).ostr;
        v14 = ((v2 + 96) >> 3) + 2147450880;
        *(_WORD *)v14 = 0;
        *(_BYTE *)(v14 + 2) = 0;
        mysqlpp::SQLTypeAdapter::SQLTypeAdapter(v2 + 96, v2 + 480, 0LL);
        v15 = mysqlpp::operator<<(ostr, (mysqlpp::SQLTypeAdapter *)(v2 + 96));
        std::operator<<<std::char_traits<char>>(v15, " and finish_time=0");
        mysqlpp::SQLTypeAdapter::~SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v2 + 96));
        v16 = ((v2 + 96) >> 3) + 2147450880;
        *(_WORD *)v16 = -1800;
        *(_BYTE *)(v16 + 2) = -8;
        std::vector<TableOrderData>::clear(order_vec);
        mysqlpp::Query::storein<std::vector<TableOrderData>>((mysqlpp::Query *const)(v2 + 704), order_vec);
        if ( mysqlpp::Query::errnum((const mysqlpp::Query *const)(v2 + 704)) )
        {
          exception = (std::logic_error *)__cxa_allocate_exception(0x10uLL);
          std::logic_error::logic_error(exception, "query has error");
          __asan_handle_no_return(exception);
          _cxa_throw(
            exception,
            (struct type_info *)&`typeinfo for'std::logic_error,
            (void (__fastcall *)(void *))&std::logic_error::~logic_error);
        }
        v5 = 0;
        mysqlpp::Query::~Query((mysqlpp::Query *const)(v2 + 704));
        std::string::~string((void *)(v2 + 480));
      }
      else
      {
        *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 416) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 447) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 447) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 416, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 416),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "src/mysql_op_order.cpp",
          "selectRecentUnfinishedOrder",
          134);
        common::milog::MiLogStream::operator()(
          (common::milog::MiLogStream *const)(v2 + 416),
          "recent_days is too large: %u",
          30LL);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 416));
        *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -117901064;
        v5 = -1;
      }
    }
    std::shared_ptr<mysqlpp::Connection>::~shared_ptr((std::shared_ptr<mysqlpp::Connection> *const)(v2 + 64));
  }
  else
  {
    *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 288) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 319) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 319) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 288, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 288),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/mysql_op_order.cpp",
      "selectRecentUnfinishedOrder",
      121);
    common::milog::MiLogStream::operator()(
      (common::milog::MiLogStream *const)(v2 + 288),
      "0 == uid || 0 == recent_days");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
    *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
    v5 = -1;
  }
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v2 + 608));
  if ( v21 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8038) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8048) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8050) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF809C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80A4) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1376LL, v21);
  }
  return v5;
};

// Line 168: range 000000000D409362-000000000D40A16D
__int64 __fastcall MysqlOpOrder::selectOrder(uint32_t order_id, TableOrderData *row, unsigned __int64 is_exist)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  unsigned int v6; // r14d
  std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rsi
  mysqlpp::Connection *v8; // rsi
  unsigned __int64 v9; // rax
  std::logic_error *exception; // rdi
  const TableOrderData *v11; // rax
  unsigned __int64 v12; // rax
  char v16[1392]; // [rsp+40h] [rbp-570h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_5(1344LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "15 48 1 9 <unknown> 64 1 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 4 12 order_id:167 128"
                        " 8 9 <unknown> 160 16 12 conn_ptr:175 192 24 11 row_vec:195 256 32 9 <unknown> 320 32 9 <unknown"
                        "> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown> 576 56 14 _tc_guard_:169 672 544 9 query:185";
  *(_QWORD *)(v3 + 16) = MysqlOpOrder::selectOrder;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -234556927;
  v5[536862723] = -234556924;
  v5[536862724] = -218959360;
  v5[536862725] = -219021312;
  v5[536862726] = -234881024;
  v5[536862727] = -218959118;
  v5[536862729] = -218959118;
  v5[536862731] = -218959118;
  v5[536862733] = -218959118;
  v5[536862735] = -218959118;
  v5[536862737] = -218959118;
  v5[536862739] = -234881024;
  v5[536862740] = -218959118;
  v5[536862758] = -202116109;
  v5[536862759] = -202116109;
  v5[536862760] = -202116109;
  v5[536862761] = -202116109;
  *(_DWORD *)(v3 + 112) = order_id;
  std::allocator<char>::allocator(v3 + 64);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 320),
    "selectOrder",
    (const std::allocator<char> *)(v3 + 64));
  std::allocator<char>::allocator(v3 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 256),
    "MYSQL",
    (const std::allocator<char> *)(v3 + 48));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v3 + 576),
    (const std::string *)(v3 + 256),
    (const std::string *)(v3 + 320));
  std::string::~string((void *)(v3 + 256));
  *(_DWORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v3 + 48);
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
  std::string::~string((void *)(v3 + 320));
  *(_DWORD *)(((v3 + 320) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v3 + 64);
  *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
  if ( *(_DWORD *)(v3 + 112) )
  {
    *(_WORD *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    v7 = std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::mysql_mgr_ptr);
    if ( *(_WORD *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store16(v3 + 160, v7);
    common::midb::MySqlMgrT<std::mutex>::grab(v7, 0x7D1u, 0);
    if ( std::operator==<mysqlpp::Connection>(0LL, (const std::shared_ptr<mysqlpp::Connection> *)(v3 + 160)) )
    {
      *(_DWORD *)(((v3 + 448) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 448) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 479) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 33) & 7) >= *(_BYTE *)(((v3 + 479) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 448, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 448),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "src/mysql_op_order.cpp",
        "selectOrder",
        178);
      common::milog::MiLogStream::operator()(
        (common::milog::MiLogStream *const)(v3 + 448),
        "[MYSQL]grab connect to mysql order db failed");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 448));
      *(_DWORD *)(((v3 + 448) >> 3) + 0x7FFF8000) = -117901064;
      v6 = -1;
    }
    else
    {
      if ( *(_BYTE *)((is_exist >> 3) + 0x7FFF8000) != 0
        && (char)(is_exist & 7) >= *(_BYTE *)((is_exist >> 3) + 0x7FFF8000) )
      {
        __asan_report_store1(is_exist);
      }
      *(_BYTE *)is_exist = 0;
      __asan_unpoison_stack_memory(v3 + 672, 544LL);
      v8 = std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
      if ( *(char *)(((v3 + 672) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 1215) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 65) & 7) >= *(_BYTE *)(((v3 + 1215) >> 3) + 0x7FFF8000) )
      {
        v8 = (mysqlpp::Connection *)544;
        __asan_report_store_n(v3 + 672, 544LL);
      }
      mysqlpp::Connection::query((mysqlpp::Query *)(v3 + 672), v8, "select ");
      std::operator<<<std::char_traits<char>>(
        v3 + 672,
        " id, uid, product_id, product_name, product_num, coin_num, total_fee, currency, price_tier, ");
      std::operator<<<std::char_traits<char>>(
        v3 + 672,
        " trade_no, trade_time, channel_id, channel_order_no, pay_plat, extend, unix_timestamp(create_time) as create_tim"
        "e, finish_time, ");
      std::operator<<<std::char_traits<char>>(
        v3 + 672,
        " bonus, bonus_num, vip_point_num, pay_type, pay_vendor, client_type, device, client_ip ");
      std::operator<<<std::char_traits<char>>(v3 + 672, " from t_order_data where id = ");
      std::ostream::operator<<(v3 + 672, *(unsigned int *)(v3 + 112));
      v9 = ((v3 + 192) >> 3) + 2147450880;
      *(_WORD *)v9 = 0;
      *(_BYTE *)(v9 + 2) = 0;
      std::vector<TableOrderData>::vector((std::vector<TableOrderData> *const)(v3 + 192));
      mysqlpp::Query::storein<std::vector<TableOrderData>>(
        (mysqlpp::Query *const)(v3 + 672),
        (std::vector<TableOrderData> *)(v3 + 192));
      if ( mysqlpp::Query::errnum((const mysqlpp::Query *const)(v3 + 672)) )
      {
        exception = (std::logic_error *)__cxa_allocate_exception(0x10uLL);
        std::logic_error::logic_error(exception, "query has error");
        __asan_handle_no_return(exception);
        _cxa_throw(
          exception,
          (struct type_info *)&`typeinfo for'std::logic_error,
          (void (__fastcall *)(void *))&std::logic_error::~logic_error);
      }
      if ( std::vector<TableOrderData>::size((const std::vector<TableOrderData> *const)(v3 + 192)) )
      {
        v11 = std::vector<TableOrderData>::operator[]((std::vector<TableOrderData> *const)(v3 + 192), 0LL);
        TableOrderData::operator=(row, v11);
        if ( *(_BYTE *)((is_exist >> 3) + 0x7FFF8000) != 0
          && (char)(is_exist & 7) >= *(_BYTE *)((is_exist >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(is_exist);
        }
        *(_BYTE *)is_exist = 1;
      }
      std::vector<TableOrderData>::~vector((std::vector<TableOrderData> *const)(v3 + 192));
      v12 = ((v3 + 192) >> 3) + 2147450880;
      *(_WORD *)v12 = -1800;
      *(_BYTE *)(v12 + 2) = -8;
      v6 = 0;
      mysqlpp::Query::~Query((mysqlpp::Query *const)(v3 + 672));
    }
    std::shared_ptr<mysqlpp::Connection>::~shared_ptr((std::shared_ptr<mysqlpp::Connection> *const)(v3 + 160));
  }
  else
  {
    *(_DWORD *)(((v3 + 384) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v3 + 384) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 415) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 415) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 384, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 384),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/mysql_op_order.cpp",
      "selectOrder",
      172);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v3 + 384), "order_id == 0");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 384));
    *(_DWORD *)(((v3 + 384) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
  }
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v3 + 576));
  if ( v16 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8040) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF804C) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8098) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF80A0) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_5(v3, 1344LL, v16);
  }
  return v6;
};

// Line 217: range 000000000D40A16E-000000000D40B183
__int64 __fastcall MysqlOpOrder::selectOrderByUid(
        uint32_t uid,
        uint32_t begin_time,
        uint32_t end_time,
        std::vector<TableOrderData> *row_vec)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  unsigned int v7; // r14d
  std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rsi
  time_t v9; // rsi
  time_t v10; // rsi
  mysqlpp::Connection *v11; // rsi
  __int64 v12; // rax
  std::ostream *v13; // rax
  std::ostream *ostr; // r14
  unsigned __int64 v15; // rax
  __int64 v16; // rax
  std::ostream *v17; // rax
  std::ostream *v18; // r14
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rax
  std::logic_error *exception; // rdi
  char v27[1584]; // [rsp+40h] [rbp-630h] BYREF

  v4 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_5(1536LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "18 48 1 9 <unknown> 64 1 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 4 7 uid:216 128 8 9 <"
                        "unknown> 160 16 12 conn_ptr:224 192 24 9 <unknown> 256 24 9 <unknown> 320 32 9 <unknown> 384 32 "
                        "9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown> 576 32 18 begin_time_str:231 640 32 16 end_tim"
                        "e_str:232 704 32 9 <unknown> 768 56 14 _tc_guard_:218 864 544 9 query:235";
  *(_QWORD *)(v4 + 16) = MysqlOpOrder::selectOrderByUid;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753551;
  v6[536862722] = -234556927;
  v6[536862723] = -234556924;
  v6[536862724] = -218959360;
  v6[536862725] = -219021312;
  v6[536862726] = -234881024;
  v6[536862727] = -218959118;
  v6[536862728] = -234881024;
  v6[536862729] = -218959118;
  v6[536862731] = -218959118;
  v6[536862733] = -218959118;
  v6[536862735] = -218959118;
  v6[536862737] = -218959118;
  v6[536862739] = -218959118;
  v6[536862741] = -218959118;
  v6[536862743] = -218959118;
  v6[536862745] = -234881024;
  v6[536862746] = -218959118;
  v6[536862764] = -202116109;
  v6[536862765] = -202116109;
  v6[536862766] = -202116109;
  v6[536862767] = -202116109;
  *(_DWORD *)(v4 + 112) = uid;
  std::allocator<char>::allocator(v4 + 64);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v4 + 384),
    "selectOrderByUid",
    (const std::allocator<char> *)(v4 + 64));
  std::allocator<char>::allocator(v4 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v4 + 320),
    "MYSQL",
    (const std::allocator<char> *)(v4 + 48));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v4 + 768),
    (const std::string *)(v4 + 320),
    (const std::string *)(v4 + 384));
  std::string::~string((void *)(v4 + 320));
  *(_DWORD *)(((v4 + 320) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v4 + 48);
  *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) = -8;
  std::string::~string((void *)(v4 + 384));
  *(_DWORD *)(((v4 + 384) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v4 + 64);
  *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) = -8;
  if ( *(_DWORD *)(v4 + 112) )
  {
    *(_WORD *)(((v4 + 160) >> 3) + 0x7FFF8000) = 0;
    v8 = std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::mysql_mgr_ptr);
    if ( *(_WORD *)(((v4 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store16(v4 + 160, v8);
    common::midb::MySqlMgrT<std::mutex>::grab(v8, 0x7D1u, 0);
    if ( std::operator==<mysqlpp::Connection>(0LL, (const std::shared_ptr<mysqlpp::Connection> *)(v4 + 160)) )
    {
      *(_DWORD *)(((v4 + 512) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v4 + 512) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 543) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 + 31) & 7) >= *(_BYTE *)(((v4 + 543) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 512, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 512),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "src/mysql_op_order.cpp",
        "selectOrderByUid",
        227);
      common::milog::MiLogStream::operator()(
        (common::milog::MiLogStream *const)(v4 + 512),
        "[MYSQL]grab connect to mysql order db failed");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 512));
      *(_DWORD *)(((v4 + 512) >> 3) + 0x7FFF8000) = -117901064;
      v7 = -1;
    }
    else
    {
      *(_DWORD *)(((v4 + 576) >> 3) + 0x7FFF8000) = 0;
      v9 = begin_time;
      if ( *(char *)(((v4 + 576) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 607) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 + 95) & 7) >= *(_BYTE *)(((v4 + 607) >> 3) + 0x7FFF8000) )
      {
        v9 = 32LL;
        __asan_report_store_n(v4 + 576, 32LL);
      }
      common::tools::TimeUtils::getStrByTime[abi:cxx11]((std::string *)(v4 + 576), v9);
      *(_DWORD *)(((v4 + 640) >> 3) + 0x7FFF8000) = 0;
      v10 = end_time;
      if ( *(char *)(((v4 + 640) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 671) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 - 97) & 7) >= *(_BYTE *)(((v4 + 671) >> 3) + 0x7FFF8000) )
      {
        v10 = 32LL;
        __asan_report_store_n(v4 + 640, 32LL);
      }
      common::tools::TimeUtils::getStrByTime[abi:cxx11]((std::string *)(v4 + 640), v10);
      __asan_unpoison_stack_memory(v4 + 864, 544LL);
      v11 = std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
      if ( *(char *)(((v4 + 864) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 1407) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 + 127) & 7) >= *(_BYTE *)(((v4 + 1407) >> 3) + 0x7FFF8000) )
      {
        v11 = (mysqlpp::Connection *)544;
        __asan_report_store_n(v4 + 864, 544LL);
      }
      mysqlpp::Connection::query((mysqlpp::Query *)(v4 + 864), v11, "select ");
      std::operator<<<std::char_traits<char>>(
        v4 + 864,
        " id, uid, product_id, product_name, product_num, coin_num, total_fee, currency, price_tier, ");
      std::operator<<<std::char_traits<char>>(
        v4 + 864,
        " trade_no, trade_time, channel_id, channel_order_no, pay_plat, extend, env, is_sandbox, unix_timestamp(create_ti"
        "me) as create_time, finish_time, ");
      std::operator<<<std::char_traits<char>>(
        v4 + 864,
        " bonus, bonus_num, vip_point_num, pay_type, pay_vendor, client_type, device, client_ip ");
      std::operator<<<std::char_traits<char>>(v4 + 864, " from t_order_data where uid = ");
      v12 = std::ostream::operator<<(v4 + 864, *(unsigned int *)(v4 + 112));
      v13 = (std::ostream *)std::operator<<<std::char_traits<char>>(v12, " and create_time >=");
      ostr = mysqlpp::operator<<(v13, quote).ostr;
      v15 = ((v4 + 192) >> 3) + 2147450880;
      *(_WORD *)v15 = 0;
      *(_BYTE *)(v15 + 2) = 0;
      mysqlpp::SQLTypeAdapter::SQLTypeAdapter(v4 + 192, v4 + 576, 0LL);
      v16 = mysqlpp::operator<<(ostr, (mysqlpp::SQLTypeAdapter *)(v4 + 192));
      v17 = (std::ostream *)std::operator<<<std::char_traits<char>>(v16, " and create_time<=");
      v18 = mysqlpp::operator<<(v17, quote).ostr;
      v19 = ((v4 + 256) >> 3) + 2147450880;
      *(_WORD *)v19 = 0;
      *(_BYTE *)(v19 + 2) = 0;
      mysqlpp::SQLTypeAdapter::SQLTypeAdapter(v4 + 256, v4 + 640, 0LL);
      mysqlpp::operator<<(v18, (mysqlpp::SQLTypeAdapter *)(v4 + 256));
      mysqlpp::SQLTypeAdapter::~SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v4 + 256));
      v20 = ((v4 + 256) >> 3) + 2147450880;
      *(_WORD *)v20 = -1800;
      *(_BYTE *)(v20 + 2) = -8;
      mysqlpp::SQLTypeAdapter::~SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v4 + 192));
      v21 = ((v4 + 192) >> 3) + 2147450880;
      *(_WORD *)v21 = -1800;
      *(_BYTE *)(v21 + 2) = -8;
      std::vector<TableOrderData>::clear(row_vec);
      mysqlpp::Query::storein<std::vector<TableOrderData>>((mysqlpp::Query *const)(v4 + 864), row_vec);
      if ( mysqlpp::Query::errnum((const mysqlpp::Query *const)(v4 + 864)) )
      {
        exception = (std::logic_error *)__cxa_allocate_exception(0x10uLL);
        std::logic_error::logic_error(exception, "query has error");
        __asan_handle_no_return(exception);
        _cxa_throw(
          exception,
          (struct type_info *)&`typeinfo for'std::logic_error,
          (void (__fastcall *)(void *))&std::logic_error::~logic_error);
      }
      v7 = 0;
      mysqlpp::Query::~Query((mysqlpp::Query *const)(v4 + 864));
      std::string::~string((void *)(v4 + 640));
      std::string::~string((void *)(v4 + 576));
    }
    std::shared_ptr<mysqlpp::Connection>::~shared_ptr((std::shared_ptr<mysqlpp::Connection> *const)(v4 + 160));
  }
  else
  {
    *(_DWORD *)(((v4 + 448) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v4 + 448) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v4 + 479) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 - 64 + 31) & 7) >= *(_BYTE *)(((v4 + 479) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v4 + 448, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v4 + 448),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/mysql_op_order.cpp",
      "selectOrderByUid",
      221);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v4 + 448), "uid == 0");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 448));
    *(_DWORD *)(((v4 + 448) >> 3) + 0x7FFF8000) = -117901064;
    v7 = -1;
  }
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v4 + 768));
  if ( v27 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8038) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8040) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF804C) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8054) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF805C) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8064) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF80B0) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF80B8) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    __asan_stack_free_5(v4, 1536LL, v27);
  }
  return v7;
};

// Line 262: range 000000000D40B184-000000000D40C016
int32_t __cdecl MysqlOpOrder::selectOrderByTradeNo(const std::string *trade_no, TableOrderData *row, bool *is_exist)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  int32_t v6; // r14d
  std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rsi
  mysqlpp::Connection *v8; // rsi
  std::ostream *ostr; // r14
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  std::logic_error *exception; // rdi
  const TableOrderData *v14; // rdx
  unsigned __int64 v15; // rax
  char v19[1424]; // [rsp+40h] [rbp-590h] BYREF

  v3 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_5(1376LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "15 32 1 9 <unknown> 48 1 9 <unknown> 64 4 9 <unknown> 80 4 9 <unknown> 96 8 9 <unknown> 128 16 1"
                        "2 conn_ptr:269 160 24 9 <unknown> 224 24 11 row_vec:289 288 32 9 <unknown> 352 32 9 <unknown> 41"
                        "6 32 9 <unknown> 480 32 9 <unknown> 544 32 9 <unknown> 608 56 14 _tc_guard_:263 704 544 9 query:279";
  *(_QWORD *)(v3 + 16) = MysqlOpOrder::selectOrderByTradeNo;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753535;
  v5[536862722] = -234556924;
  v5[536862723] = -218959360;
  v5[536862724] = -219021312;
  v5[536862725] = -234881024;
  v5[536862726] = -218959118;
  v5[536862727] = -234881024;
  v5[536862728] = -218959118;
  v5[536862730] = -218959118;
  v5[536862732] = -218959118;
  v5[536862734] = -218959118;
  v5[536862736] = -218959118;
  v5[536862738] = -218959118;
  v5[536862740] = -234881024;
  v5[536862741] = -218959118;
  v5[536862759] = -202116109;
  v5[536862760] = -202116109;
  v5[536862761] = -202116109;
  v5[536862762] = -202116109;
  std::allocator<char>::allocator(v3 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 352),
    "selectOrderByTradeNo",
    (const std::allocator<char> *)(v3 + 48));
  std::allocator<char>::allocator(v3 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 288),
    "MYSQL",
    (const std::allocator<char> *)(v3 + 32));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v3 + 608),
    (const std::string *)(v3 + 288),
    (const std::string *)(v3 + 352));
  std::string::~string((void *)(v3 + 288));
  *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v3 + 32);
  *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
  std::string::~string((void *)(v3 + 352));
  *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v3 + 48);
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( (unsigned __int8)std::string::empty(trade_no) )
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
      3u,
      "src/mysql_op_order.cpp",
      "selectOrderByTradeNo",
      266);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v3 + 416), "trade_no empty");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 416));
    *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
  }
  else
  {
    *(_WORD *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    v7 = std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::mysql_mgr_ptr);
    if ( *(_WORD *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store16(v3 + 128, v7);
    common::midb::MySqlMgrT<std::mutex>::grab(v7, 0x7D1u, 0);
    if ( std::operator==<mysqlpp::Connection>(0LL, (const std::shared_ptr<mysqlpp::Connection> *)(v3 + 128)) )
    {
      *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 480) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 511) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 1) & 7) >= *(_BYTE *)(((v3 + 511) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 480, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 480),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "src/mysql_op_order.cpp",
        "selectOrderByTradeNo",
        272);
      common::milog::MiLogStream::operator()(
        (common::milog::MiLogStream *const)(v3 + 480),
        "[MYSQL]grab connect to mysql order db failed");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 480));
      *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = -117901064;
      v6 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)is_exist >> 3) + 0x7FFF8000) != 0
        && ((unsigned __int8)is_exist & 7) >= *(_BYTE *)(((unsigned __int64)is_exist >> 3) + 0x7FFF8000) )
      {
        __asan_report_store1(is_exist);
      }
      *is_exist = 0;
      __asan_unpoison_stack_memory(v3 + 704, 544LL);
      v8 = std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
      if ( *(char *)(((v3 + 704) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 1247) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 33) & 7) >= *(_BYTE *)(((v3 + 1247) >> 3) + 0x7FFF8000) )
      {
        v8 = (mysqlpp::Connection *)544;
        __asan_report_store_n(v3 + 704, 544LL);
      }
      mysqlpp::Connection::query((mysqlpp::Query *)(v3 + 704), v8, "select ");
      std::operator<<<std::char_traits<char>>(
        v3 + 704,
        " id, uid, product_id, product_name, product_num, coin_num, total_fee, currency, price_tier, ");
      std::operator<<<std::char_traits<char>>(
        v3 + 704,
        " trade_no, trade_time, channel_id, channel_order_no, pay_plat, extend, env, is_sandbox, unix_timestamp(create_ti"
        "me) as create_time, finish_time, ");
      std::operator<<<std::char_traits<char>>(
        v3 + 704,
        " bonus, bonus_num, vip_point_num, pay_type, pay_vendor, client_type, device, client_ip ");
      std::operator<<<std::char_traits<char>>(v3 + 704, " from t_order_data where trade_no = ");
      ostr = mysqlpp::operator<<((std::ostream *)(v3 + 704), quote).ostr;
      v10 = ((v3 + 160) >> 3) + 2147450880;
      *(_WORD *)v10 = 0;
      *(_BYTE *)(v10 + 2) = 0;
      mysqlpp::SQLTypeAdapter::SQLTypeAdapter(v3 + 160, trade_no, 0LL);
      mysqlpp::operator<<(ostr, (mysqlpp::SQLTypeAdapter *)(v3 + 160));
      mysqlpp::SQLTypeAdapter::~SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v3 + 160));
      v11 = ((v3 + 160) >> 3) + 2147450880;
      *(_WORD *)v11 = -1800;
      *(_BYTE *)(v11 + 2) = -8;
      v12 = ((v3 + 224) >> 3) + 2147450880;
      *(_WORD *)v12 = 0;
      *(_BYTE *)(v12 + 2) = 0;
      std::vector<TableOrderData>::vector((std::vector<TableOrderData> *const)(v3 + 224));
      mysqlpp::Query::storein<std::vector<TableOrderData>>(
        (mysqlpp::Query *const)(v3 + 704),
        (std::vector<TableOrderData> *)(v3 + 224));
      if ( mysqlpp::Query::errnum((const mysqlpp::Query *const)(v3 + 704)) )
      {
        exception = (std::logic_error *)__cxa_allocate_exception(0x10uLL);
        std::logic_error::logic_error(exception, "query has error");
        __asan_handle_no_return(exception);
        _cxa_throw(
          exception,
          (struct type_info *)&`typeinfo for'std::logic_error,
          (void (__fastcall *)(void *))&std::logic_error::~logic_error);
      }
      if ( std::vector<TableOrderData>::size((const std::vector<TableOrderData> *const)(v3 + 224)) )
      {
        v14 = std::vector<TableOrderData>::operator[]((std::vector<TableOrderData> *const)(v3 + 224), 0LL);
        TableOrderData::operator=(row, v14);
        if ( *(_BYTE *)(((unsigned __int64)is_exist >> 3) + 0x7FFF8000) != 0
          && ((unsigned __int8)is_exist & 7) >= *(_BYTE *)(((unsigned __int64)is_exist >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(is_exist);
        }
        *is_exist = 1;
      }
      std::vector<TableOrderData>::~vector((std::vector<TableOrderData> *const)(v3 + 224));
      v15 = ((v3 + 224) >> 3) + 2147450880;
      *(_WORD *)v15 = -1800;
      *(_BYTE *)(v15 + 2) = -8;
      v6 = 0;
      mysqlpp::Query::~Query((mysqlpp::Query *const)(v3 + 704));
    }
    std::shared_ptr<mysqlpp::Connection>::~shared_ptr((std::shared_ptr<mysqlpp::Connection> *const)(v3 + 128));
  }
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v3 + 608));
  if ( v19 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8044) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 76) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v3 >> 3) + 0x7FFF8050) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF809C) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF80A4) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_5(v3, 1376LL, v19);
  }
  return v6;
};

// Line 307: range 000000000D40C1B8-000000000D40C1CC
void __cdecl GLOBAL__sub_I_mysql_op_order_cpp()
{
  __static_initialization_and_destruction_0(1, 0xFFFF);
};

// Line 307: range 000000000D40C017-000000000D40C1B7
void __cdecl __static_initialization_and_destruction_0(int __initialize_p, int __priority)
{
  const std::_V2::error_category *v2; // rax
  const std::_V2::error_category *v3; // rax
  const std::_V2::error_category *v4; // rax
  const std::_V2::error_category *v5; // rax
  const std::_V2::error_category *v6; // rax
  _BYTE *v7; // rcx
  _BYTE *v8; // rcx
  const char *v9; // rcx

  if ( __initialize_p == 1 )
  {
    __asan_before_dynamic_init("src/mysql_op_order.cpp");
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
      std::error_code::error_code((std::error_code *const)&opentracing::v3::lookup_key_not_supported_error, 5, v6);
      v7 = &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero);
      }
      if ( !*v7 )
      {
        v8 = &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero;
        if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero);
        }
        *v8 = 1;
        v9 = common::tools::StringStream<common::tools::FixedBuffer<16384>>::digits + 9;
        if ( *(_BYTE *)(((unsigned __int64)&common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                      + 0x7FFF8000) )
          __asan_report_store8();
        common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero = v9;
      }
    }
    __asan_after_dynamic_init();
  }
};
