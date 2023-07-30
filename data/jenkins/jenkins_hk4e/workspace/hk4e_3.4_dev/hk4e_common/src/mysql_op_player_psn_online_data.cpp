// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_common/src/mysql_op_player_psn_online_data.cpp

// Line 32: range 000000000D414A00-000000000D41629F
int32_t __cdecl MysqlOpPlayerPsnOnlineIdData::insertOrUpdatePlayerPsnOnlineIdData(
        const TablePlayerPsnOnlineIdData *row)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::__shared_ptr<TracingMgr,(__gnu_cxx::_Lock_policy)2>::element_type *v4; // rsi
  unsigned __int64 v5; // rax
  char v6; // al
  int32_t v7; // r14d
  std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rsi
  mysqlpp::Connection *v9; // rsi
  __int64 v10; // rax
  std::ostream *v11; // rax
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  std::ostream *v14; // rax
  unsigned __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  const char *v23; // rcx
  std::ostream *v24; // rax
  unsigned __int64 v25; // rax
  __int64 v26; // rax
  std::ostream *v27; // rax
  unsigned __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // rax
  const char *v36; // rcx
  std::ostream *ostr; // [rsp+10h] [rbp-810h]
  std::ostream *v39; // [rsp+10h] [rbp-810h]
  std::ostream *v40; // [rsp+10h] [rbp-810h]
  std::ostream *v41; // [rsp+10h] [rbp-810h]
  std::ostream *v42; // [rsp+10h] [rbp-810h]
  std::ostream *v43; // [rsp+10h] [rbp-810h]
  char v44[2032]; // [rsp+30h] [rbp-7F0h] BYREF

  v1 = (unsigned __int64)v44;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_5(1984LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "22 48 1 9 <unknown> 64 1 9 <unknown> 80 4 6 ret:33 96 16 9 <unknown> 128 16 11 conn_ptr:45 160 2"
                        "4 9 <unknown> 224 24 9 <unknown> 288 24 9 <unknown> 352 24 9 <unknown> 416 32 9 <unknown> 480 32"
                        " 9 <unknown> 544 32 9 <unknown> 608 32 9 <unknown> 672 32 9 <unknown> 736 32 9 <unknown> 800 32 "
                        "9 <unknown> 864 32 9 <unknown> 928 56 13 span_proxy:34 1024 56 13 _tc_guard_:36 1120 56 9 <unkno"
                        "wn> 1216 56 9 <unknown> 1312 544 8 query:53";
  *(_QWORD *)(v1 + 16) = MysqlOpPlayerPsnOnlineIdData::insertOrUpdatePlayerPsnOnlineIdData;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -234556927;
  v3[536862723] = -219021312;
  v3[536862724] = -219021312;
  v3[536862725] = -234881024;
  v3[536862726] = -218959118;
  v3[536862727] = -234881024;
  v3[536862728] = -218959118;
  v3[536862729] = -234881024;
  v3[536862730] = -218959118;
  v3[536862731] = -234881024;
  v3[536862732] = -218959118;
  v3[536862734] = -218959118;
  v3[536862736] = -218959118;
  v3[536862738] = -218959118;
  v3[536862740] = -218959118;
  v3[536862742] = -218959118;
  v3[536862744] = -218959118;
  v3[536862746] = -218959118;
  v3[536862748] = -218959118;
  v3[536862750] = -234881024;
  v3[536862751] = -218959118;
  v3[536862753] = -234881024;
  v3[536862754] = -218959118;
  v3[536862756] = -234881024;
  v3[536862757] = -218959118;
  v3[536862759] = -234881024;
  v3[536862760] = -218959118;
  v3[536862778] = -202116109;
  v3[536862779] = -202116109;
  v3[536862780] = -202116109;
  v3[536862781] = -202116109;
  if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v1 + 80);
  *(_DWORD *)(v1 + 80) = 0;
  opentracing::v3::string_view::string_view(
    (opentracing::v3::string_view *const)(v1 + 96),
    "insertOrUpdatePlayerPsnOnlineIdData");
  v4 = std::__shared_ptr<TracingMgr,(__gnu_cxx::_Lock_policy)2>::get(&ResourceBox::tracing_mgr_ptr);
  if ( *(_WORD *)(((v1 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_load16(v1 + 96);
  SpanProxy::SpanProxy(
    (SpanProxy *const)(v1 + 928),
    v4,
    *(opentracing::v3::string_view *)(v1 + 96),
    0LL,
    0,
    (const int *)(v1 + 80));
  *(_WORD *)(((v1 + 96) >> 3) + 0x7FFF8000) = -1800;
  v5 = ((v1 + 1024) >> 3) + 2147450880;
  *(_DWORD *)v5 = 0;
  *(_WORD *)(v5 + 4) = 0;
  *(_BYTE *)(v5 + 6) = 0;
  *(_DWORD *)(((v1 + 480) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v1 + 64);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 480),
    "insertOrUpdatePlayerPsnOnlineIdData",
    (const std::allocator<char> *)(v1 + 64));
  *(_DWORD *)(((v1 + 416) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 416),
    "MYSQL",
    (const std::allocator<char> *)(v1 + 48));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v1 + 1024),
    (const std::string *)(v1 + 416),
    (const std::string *)(v1 + 480));
  std::string::~string((void *)(v1 + 416));
  *(_DWORD *)(((v1 + 416) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
  std::string::~string((void *)(v1 + 480));
  *(_DWORD *)(((v1 + 480) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 64);
  *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
  if ( (unsigned __int8)std::string::empty(row) || (unsigned __int8)std::string::empty(&row->online_id) )
    goto LABEL_13;
  if ( *(_BYTE *)(((unsigned __int64)&row->uid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&row->uid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&row->uid);
  }
  if ( !row->uid )
LABEL_13:
    v6 = 1;
  else
    v6 = 0;
  if ( v6 )
  {
    *(_DWORD *)(((v1 + 544) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v1 + 544) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v1 + 575) >> 3) + 0x7FFF8000) != 0
      && (char)((v1 - 64 + 127) & 7) >= *(_BYTE *)(((v1 + 575) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v1 + 544, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v1 + 544),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/mysql_op_player_psn_online_data.cpp",
      "insertOrUpdatePlayerPsnOnlineIdData",
      40);
    common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
      (common::milog::MiLogStream *const)(v1 + 544),
      (const char (*)[38])"psn_id/online_id is empty or uid is 0");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 544));
    *(_DWORD *)(((v1 + 544) >> 3) + 0x7FFF8000) = -117901064;
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80);
    *(_DWORD *)(v1 + 80) = -1;
    v7 = *(_DWORD *)(v1 + 80);
  }
  else
  {
    *(_WORD *)(((v1 + 128) >> 3) + 0x7FFF8000) = 0;
    v8 = std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::mysql_mgr_ptr);
    if ( *(_WORD *)(((v1 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store16(v1 + 128, v8);
    common::midb::MySqlMgrT<std::mutex>::grab(v8, 3u, 0);
    if ( std::operator==<mysqlpp::Connection>(0LL, (const std::shared_ptr<mysqlpp::Connection> *)(v1 + 128)) )
    {
      *(_DWORD *)(((v1 + 608) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v1 + 608) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v1 + 639) >> 3) + 0x7FFF8000) != 0
        && (char)((v1 + 127) & 7) >= *(_BYTE *)(((v1 + 639) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v1 + 608, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v1 + 608),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/mysql_op_player_psn_online_data.cpp",
        "insertOrUpdatePlayerPsnOnlineIdData",
        48);
      common::milog::MiLogStream::operator()(
        (common::milog::MiLogStream *const)(v1 + 608),
        "[MYSQL]grab connect to mysql failed");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 608));
      *(_DWORD *)(((v1 + 608) >> 3) + 0x7FFF8000) = -117901064;
      if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v1 + 80);
      *(_DWORD *)(v1 + 80) = -1;
      v7 = *(_DWORD *)(v1 + 80);
    }
    else
    {
      __asan_unpoison_stack_memory(v1 + 1312, 544LL);
      v9 = std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 128));
      if ( *(char *)(((v1 + 1312) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v1 + 1855) >> 3) + 0x7FFF8000) != 0
        && (char)((v1 - 64 + 127) & 7) >= *(_BYTE *)(((v1 + 1855) >> 3) + 0x7FFF8000) )
      {
        v9 = (mysqlpp::Connection *)544;
        __asan_report_store_n(v1 + 1312, 544LL);
      }
      mysqlpp::Connection::query((mysqlpp::Query *)(v1 + 1312), v9, byte_1A7CA440);
      v10 = std::operator<<<std::char_traits<char>>(v1 + 1312, "update t_player_psn_online_id_data set ");
      v11 = (std::ostream *)std::operator<<<std::char_traits<char>>(v10, " psn_id=");
      ostr = mysqlpp::operator<<(v11, quote).ostr;
      v12 = ((v1 + 160) >> 3) + 2147450880;
      *(_WORD *)v12 = 0;
      *(_BYTE *)(v12 + 2) = 0;
      mysqlpp::SQLTypeAdapter::SQLTypeAdapter(v1 + 160, row, 0LL);
      v13 = mysqlpp::operator<<(ostr, (mysqlpp::SQLTypeAdapter *)(v1 + 160));
      v14 = (std::ostream *)std::operator<<<std::char_traits<char>>(v13, ",online_id=");
      v39 = mysqlpp::operator<<(v14, quote).ostr;
      v15 = ((v1 + 224) >> 3) + 2147450880;
      *(_WORD *)v15 = 0;
      *(_BYTE *)(v15 + 2) = 0;
      mysqlpp::SQLTypeAdapter::SQLTypeAdapter(v1 + 224, &row->online_id, 0LL);
      v16 = mysqlpp::operator<<(v39, (mysqlpp::SQLTypeAdapter *)(v1 + 224));
      v17 = std::operator<<<std::char_traits<char>>(v16, " where uid=");
      if ( *(_BYTE *)(((unsigned __int64)&row->uid >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&row->uid >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&row->uid);
      }
      v18 = std::ostream::operator<<(v17, row->uid);
      std::operator<<<std::char_traits<char>>(v18, " limit 1;");
      mysqlpp::SQLTypeAdapter::~SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v1 + 224));
      v19 = ((v1 + 224) >> 3) + 2147450880;
      *(_WORD *)v19 = -1800;
      *(_BYTE *)(v19 + 2) = -8;
      mysqlpp::SQLTypeAdapter::~SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v1 + 160));
      v20 = ((v1 + 160) >> 3) + 2147450880;
      *(_WORD *)v20 = -1800;
      *(_BYTE *)(v20 + 2) = -8;
      v21 = ((v1 + 1120) >> 3) + 2147450880;
      *(_DWORD *)v21 = 0;
      *(_WORD *)(v21 + 4) = 0;
      *(_BYTE *)(v21 + 6) = 0;
      if ( *(char *)(((v1 + 1120) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v1 + 1175) >> 3) + 0x7FFF8000) != 0
        && (char)((v1 - 105) & 7) >= *(_BYTE *)(((v1 + 1175) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v1 + 1120, 56LL);
      }
      mysqlpp::Query::execute((mysqlpp::Query *)(v1 + 1120));
      mysqlpp::SimpleResult::~SimpleResult((mysqlpp::SimpleResult *const)(v1 + 1120));
      v22 = ((v1 + 1120) >> 3) + 2147450880;
      *(_DWORD *)v22 = -117901064;
      *(_WORD *)(v22 + 4) = -1800;
      *(_BYTE *)(v22 + 6) = -8;
      if ( mysqlpp::Query::affected_rows((mysqlpp::Query *const)(v1 + 1312)) )
      {
        *(_DWORD *)(((v1 + 736) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v1 + 736) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v1 + 767) >> 3) + 0x7FFF8000) != 0
          && (char)((v1 - 64 + 63) & 7) >= *(_BYTE *)(((v1 + 767) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v1 + 736, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v1 + 736),
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "src/mysql_op_player_psn_online_data.cpp",
          "insertOrUpdatePlayerPsnOnlineIdData",
          78);
        v43 = (std::ostream *)std::string::c_str(&row->online_id);
        v36 = (const char *)std::string::c_str(row);
        if ( *(_BYTE *)(((unsigned __int64)&row->uid >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&row->uid >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&row->uid);
        }
        common::milog::MiLogStream::operator()(
          (common::milog::MiLogStream *const)(v1 + 736),
          "update uid=%u, psn_id=%s online_id=%s to t_player_psn_online_id_data",
          row->uid,
          v36,
          (const char *)v43);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 736));
        *(_DWORD *)(((v1 + 736) >> 3) + 0x7FFF8000) = -117901064;
      }
      else
      {
        *(_DWORD *)(((v1 + 672) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v1 + 672) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v1 + 703) >> 3) + 0x7FFF8000) != 0
          && (char)((v1 - 96 + 31) & 7) >= *(_BYTE *)(((v1 + 703) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v1 + 672, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v1 + 672),
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "src/mysql_op_player_psn_online_data.cpp",
          "insertOrUpdatePlayerPsnOnlineIdData",
          67);
        v40 = (std::ostream *)std::string::c_str(&row->online_id);
        v23 = (const char *)std::string::c_str(row);
        if ( *(_BYTE *)(((unsigned __int64)&row->uid >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&row->uid >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&row->uid);
        }
        common::milog::MiLogStream::operator()(
          (common::milog::MiLogStream *const)(v1 + 672),
          "insert uid=%u, psn_id=%s online_id=%s to t_player_psn_online_id_data",
          row->uid,
          v23,
          (const char *)v40);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 672));
        *(_DWORD *)(((v1 + 672) >> 3) + 0x7FFF8000) = -117901064;
        mysqlpp::Query::reset((mysqlpp::Query *)(v1 + 1312));
        std::operator<<<std::char_traits<char>>(
          v1 + 1312,
          "insert into t_player_psn_online_id_data (psn_id, online_id, uid) values");
        v24 = (std::ostream *)std::operator<<<std::char_traits<char>>(v1 + 1312, "(");
        v41 = mysqlpp::operator<<(v24, quote).ostr;
        v25 = ((v1 + 288) >> 3) + 2147450880;
        *(_WORD *)v25 = 0;
        *(_BYTE *)(v25 + 2) = 0;
        mysqlpp::SQLTypeAdapter::SQLTypeAdapter(v1 + 288, row, 0LL);
        v26 = mysqlpp::operator<<(v41, (mysqlpp::SQLTypeAdapter *)(v1 + 288));
        v27 = (std::ostream *)std::operator<<<std::char_traits<char>>(v26, ",");
        v42 = mysqlpp::operator<<(v27, quote).ostr;
        v28 = ((v1 + 352) >> 3) + 2147450880;
        *(_WORD *)v28 = 0;
        *(_BYTE *)(v28 + 2) = 0;
        mysqlpp::SQLTypeAdapter::SQLTypeAdapter(v1 + 352, &row->online_id, 0LL);
        v29 = mysqlpp::operator<<(v42, (mysqlpp::SQLTypeAdapter *)(v1 + 352));
        v30 = std::operator<<<std::char_traits<char>>(v29, ",");
        if ( *(_BYTE *)(((unsigned __int64)&row->uid >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&row->uid >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&row->uid);
        }
        v31 = std::ostream::operator<<(v30, row->uid);
        std::operator<<<std::char_traits<char>>(v31, ")");
        mysqlpp::SQLTypeAdapter::~SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v1 + 352));
        v32 = ((v1 + 352) >> 3) + 2147450880;
        *(_WORD *)v32 = -1800;
        *(_BYTE *)(v32 + 2) = -8;
        mysqlpp::SQLTypeAdapter::~SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v1 + 288));
        v33 = ((v1 + 288) >> 3) + 2147450880;
        *(_WORD *)v33 = -1800;
        *(_BYTE *)(v33 + 2) = -8;
        v34 = ((v1 + 1216) >> 3) + 2147450880;
        *(_DWORD *)v34 = 0;
        *(_WORD *)(v34 + 4) = 0;
        *(_BYTE *)(v34 + 6) = 0;
        if ( *(char *)(((v1 + 1216) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v1 + 1271) >> 3) + 0x7FFF8000) != 0
          && (char)((v1 - 64 + 55) & 7) >= *(_BYTE *)(((v1 + 1271) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v1 + 1216, 56LL);
        }
        mysqlpp::Query::execute((mysqlpp::Query *)(v1 + 1216));
        mysqlpp::SimpleResult::~SimpleResult((mysqlpp::SimpleResult *const)(v1 + 1216));
        v35 = ((v1 + 1216) >> 3) + 2147450880;
        *(_DWORD *)v35 = -117901064;
        *(_WORD *)(v35 + 4) = -1800;
        *(_BYTE *)(v35 + 6) = -8;
      }
      if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v1 + 80);
      *(_DWORD *)(v1 + 80) = 0;
      v7 = *(_DWORD *)(v1 + 80);
      mysqlpp::Query::~Query((mysqlpp::Query *const)(v1 + 1312));
    }
    std::shared_ptr<mysqlpp::Connection>::~shared_ptr((std::shared_ptr<mysqlpp::Connection> *const)(v1 + 128));
  }
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v1 + 1024));
  SpanProxy::~SpanProxy((SpanProxy *const)(v1 + 928));
  if ( v44 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF806C) = 0LL;
    memset(
      (void *)((unsigned __int64)(v3 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v3 + 2147450880 - (((_DWORD)v3 + 2147450888) & 0xFFFFFFF8) + 116) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v1 >> 3) + 0x7FFF8078) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8084) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF808C) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8094) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF809C) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF80E8) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF80F0) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    __asan_stack_free_5(v1, 1984LL, v44);
  }
  return v7;
};

// Line 65: range 000000000D414708-000000000D4149FE
int32_t __cdecl MysqlOpPlayerPsnOnlineIdData::checkMysqlTableExistance()
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
  *(_QWORD *)(v0 + 16) = MysqlOpPlayerPsnOnlineIdData::checkMysqlTableExistance;
  v2 = (_DWORD *)(v0 >> 3);
  v2[536862720] = -235802127;
  v2[536862721] = -234753535;
  v2[536862722] = -234881024;
  v2[536862723] = -218959118;
  v2[536862725] = -202116109;
  std::allocator<char>::allocator(v0 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v0 + 128),
    "t_player_psn_online_id_data",
    (const std::allocator<char> *)(v0 + 32));
  std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v0 + 48));
  std::vector<std::string>::vector(
    (std::vector<std::string> *const)(v0 + 64),
    (std::initializer_list<std::string >)__PAIR128__(1LL, v0 + 128),
    (const std::vector<std::string>::allocator_type *)(v0 + 48));
  v3 = MysqlOpBase::checkMysqlTableExistance(3u, (const std::vector<std::string> *)(v0 + 64));
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

// Line 98: range 000000000D4162A0-000000000D41894E
int32_t __cdecl MysqlOpPlayerPsnOnlineIdData::insertOrUpdateOrReplacePlayerPsnOnlineIdData(
        const TablePlayerPsnOnlineIdData *row)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::__shared_ptr<TracingMgr,(__gnu_cxx::_Lock_policy)2>::element_type *v4; // rsi
  unsigned __int64 v5; // rax
  char v6; // al
  int32_t v7; // r14d
  std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rsi
  mysqlpp::Connection *v9; // rsi
  std::ostream *v10; // rax
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  std::ostream *v13; // rax
  unsigned __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  std::ostream *v20; // rax
  unsigned __int64 v21; // rax
  __int64 v22; // rax
  std::ostream *v23; // rax
  unsigned __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rcx
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rax
  const char *v33; // rdx
  const char *v34; // rdx
  const char *v35; // rdx
  common::milog::MiLogStream *v36; // r14
  int v37; // edx
  const char *v39; // [rsp+8h] [rbp-A08h]
  const char *v40; // [rsp+8h] [rbp-A08h]
  const char *v41; // [rsp+8h] [rbp-A08h]
  std::ostream *ostr; // [rsp+10h] [rbp-A00h]
  std::ostream *v43; // [rsp+10h] [rbp-A00h]
  std::ostream *v44; // [rsp+10h] [rbp-A00h]
  std::ostream *v45; // [rsp+10h] [rbp-A00h]
  mysqlpp::sql_int_unsigned v46; // [rsp+10h] [rbp-A00h]
  mysqlpp::sql_int_unsigned uid; // [rsp+10h] [rbp-A00h]
  mysqlpp::sql_int_unsigned v48; // [rsp+10h] [rbp-A00h]
  unsigned __int64 affected_rows; // [rsp+28h] [rbp-9E8h]
  char v50[2512]; // [rsp+40h] [rbp-9D0h] BYREF

  v1 = (unsigned __int64)v50;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_6(2464LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "31 32 1 9 <unknown> 48 1 9 <unknown> 64 4 7 ret:102 80 4 9 <unknown> 96 16 9 timer:100 128 16 9 "
                        "<unknown> 160 16 12 conn_ptr:114 192 24 9 <unknown> 256 24 9 <unknown> 320 24 9 <unknown> 384 24"
                        " 9 <unknown> 448 24 9 <unknown> 512 24 9 <unknown> 576 32 9 <unknown> 640 32 9 <unknown> 704 32 "
                        "9 <unknown> 768 32 9 <unknown> 832 32 9 <unknown> 896 32 9 <unknown> 960 32 9 <unknown> 1024 32 "
                        "9 <unknown> 1088 32 9 <unknown> 1152 32 9 <unknown> 1216 32 9 <unknown> 1280 32 9 <unknown> 1344"
                        " 32 9 <unknown> 1408 56 14 span_proxy:103 1504 56 14 _tc_guard_:105 1600 56 9 <unknown> 1696 56 "
                        "9 <unknown> 1792 544 9 query:122";
  *(_QWORD *)(v1 + 16) = MysqlOpPlayerPsnOnlineIdData::insertOrUpdateOrReplacePlayerPsnOnlineIdData;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753535;
  v3[536862722] = -234556924;
  v3[536862723] = -219021312;
  v3[536862724] = -219021312;
  v3[536862725] = -219021312;
  v3[536862726] = -234881024;
  v3[536862727] = -218959118;
  v3[536862728] = -234881024;
  v3[536862729] = -218959118;
  v3[536862730] = -234881024;
  v3[536862731] = -218959118;
  v3[536862732] = -234881024;
  v3[536862733] = -218959118;
  v3[536862734] = -234881024;
  v3[536862735] = -218959118;
  v3[536862736] = -234881024;
  v3[536862737] = -218959118;
  v3[536862739] = -218959118;
  v3[536862741] = -218959118;
  v3[536862743] = -218959118;
  v3[536862745] = -218959118;
  v3[536862747] = -218959118;
  v3[536862749] = -218959118;
  v3[536862751] = -218959118;
  v3[536862753] = -218959118;
  v3[536862755] = -218959118;
  v3[536862757] = -218959118;
  v3[536862759] = -218959118;
  v3[536862761] = -218959118;
  v3[536862763] = -218959118;
  v3[536862765] = -234881024;
  v3[536862766] = -218959118;
  v3[536862768] = -234881024;
  v3[536862769] = -218959118;
  v3[536862771] = -234881024;
  v3[536862772] = -218959118;
  v3[536862774] = -234881024;
  v3[536862775] = -218959118;
  v3[536862793] = -202116109;
  v3[536862794] = -202116109;
  v3[536862795] = -202116109;
  v3[536862796] = -202116109;
  common::tools::TimeUtils::Timer::Timer((common::tools::TimeUtils::Timer *const)(v1 + 96));
  if ( *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v1 + 64);
  *(_DWORD *)(v1 + 64) = 0;
  opentracing::v3::string_view::string_view(
    (opentracing::v3::string_view *const)(v1 + 128),
    "insertOrUpdateOrReplacePlayerPsnOnlineIdData");
  v4 = std::__shared_ptr<TracingMgr,(__gnu_cxx::_Lock_policy)2>::get(&ResourceBox::tracing_mgr_ptr);
  if ( *(_WORD *)(((v1 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_load16(v1 + 128);
  SpanProxy::SpanProxy(
    (SpanProxy *const)(v1 + 1408),
    v4,
    *(opentracing::v3::string_view *)(v1 + 128),
    0LL,
    0,
    (const int *)(v1 + 64));
  *(_WORD *)(((v1 + 128) >> 3) + 0x7FFF8000) = -1800;
  v5 = ((v1 + 1504) >> 3) + 2147450880;
  *(_DWORD *)v5 = 0;
  *(_WORD *)(v5 + 4) = 0;
  *(_BYTE *)(v5 + 6) = 0;
  *(_DWORD *)(((v1 + 640) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 640),
    "insertOrUpdateOrReplacePlayerPsnOnlineIdData",
    (const std::allocator<char> *)(v1 + 48));
  *(_DWORD *)(((v1 + 576) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v1 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 576),
    "MYSQL",
    (const std::allocator<char> *)(v1 + 32));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v1 + 1504),
    (const std::string *)(v1 + 576),
    (const std::string *)(v1 + 640));
  std::string::~string((void *)(v1 + 576));
  *(_DWORD *)(((v1 + 576) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 32);
  *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) = -8;
  std::string::~string((void *)(v1 + 640));
  *(_DWORD *)(((v1 + 640) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( (unsigned __int8)std::string::empty(row) || (unsigned __int8)std::string::empty(&row->online_id) )
    goto LABEL_13;
  if ( *(_BYTE *)(((unsigned __int64)&row->uid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&row->uid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&row->uid);
  }
  if ( !row->uid )
LABEL_13:
    v6 = 1;
  else
    v6 = 0;
  if ( !v6 )
  {
    *(_WORD *)(((v1 + 160) >> 3) + 0x7FFF8000) = 0;
    v8 = std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::mysql_mgr_ptr);
    if ( *(_WORD *)(((v1 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store16(v1 + 160, v8);
    common::midb::MySqlMgrT<std::mutex>::grab(v8, 3u, 0);
    if ( std::operator==<mysqlpp::Connection>(0LL, (const std::shared_ptr<mysqlpp::Connection> *)(v1 + 160)) )
    {
      *(_DWORD *)(((v1 + 768) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v1 + 768) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v1 + 799) >> 3) + 0x7FFF8000) != 0
        && (char)((v1 - 96 + 127) & 7) >= *(_BYTE *)(((v1 + 799) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v1 + 768, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v1 + 768),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/mysql_op_player_psn_online_data.cpp",
        "insertOrUpdateOrReplacePlayerPsnOnlineIdData",
        117);
      common::milog::MiLogStream::operator()(
        (common::milog::MiLogStream *const)(v1 + 768),
        "[MYSQL]grab connect to mysql failed");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 768));
      *(_DWORD *)(((v1 + 768) >> 3) + 0x7FFF8000) = -117901064;
      if ( *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v1 + 64);
      *(_DWORD *)(v1 + 64) = -1;
      v7 = *(_DWORD *)(v1 + 64);
      goto LABEL_68;
    }
    __asan_unpoison_stack_memory(v1 + 1792, 544LL);
    v9 = std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 160));
    if ( *(char *)(((v1 + 1792) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v1 + 2335) >> 3) + 0x7FFF8000) != 0
      && (char)((v1 - 96 + 127) & 7) >= *(_BYTE *)(((v1 + 2335) >> 3) + 0x7FFF8000) )
    {
      v9 = (mysqlpp::Connection *)544;
      __asan_report_store_n(v1 + 1792, 544LL);
    }
    mysqlpp::Connection::query((mysqlpp::Query *)(v1 + 1792), v9, byte_1A7CA440);
    v10 = (std::ostream *)std::operator<<<std::char_traits<char>>(
                            v1 + 1792,
                            "insert into t_player_psn_online_id_data values(");
    ostr = mysqlpp::operator<<(v10, quote).ostr;
    v11 = ((v1 + 192) >> 3) + 2147450880;
    *(_WORD *)v11 = 0;
    *(_BYTE *)(v11 + 2) = 0;
    mysqlpp::SQLTypeAdapter::SQLTypeAdapter(v1 + 192, row, 0LL);
    v12 = mysqlpp::operator<<(ostr, (mysqlpp::SQLTypeAdapter *)(v1 + 192));
    v13 = (std::ostream *)std::operator<<<std::char_traits<char>>(v12, ",");
    v43 = mysqlpp::operator<<(v13, quote).ostr;
    v14 = ((v1 + 256) >> 3) + 2147450880;
    *(_WORD *)v14 = 0;
    *(_BYTE *)(v14 + 2) = 0;
    mysqlpp::SQLTypeAdapter::SQLTypeAdapter(v1 + 256, &row->online_id, 0LL);
    v15 = mysqlpp::operator<<(v43, (mysqlpp::SQLTypeAdapter *)(v1 + 256));
    v16 = std::operator<<<std::char_traits<char>>(v15, ",");
    if ( *(_BYTE *)(((unsigned __int64)&row->uid >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&row->uid >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&row->uid);
    }
    v17 = std::ostream::operator<<(v16, row->uid);
    v18 = std::operator<<<std::char_traits<char>>(v17, ")");
    v19 = std::operator<<<std::char_traits<char>>(v18, " on duplicate key update ");
    v20 = (std::ostream *)std::operator<<<std::char_traits<char>>(v19, "psn_id=");
    v44 = mysqlpp::operator<<(v20, quote).ostr;
    v21 = ((v1 + 320) >> 3) + 2147450880;
    *(_WORD *)v21 = 0;
    *(_BYTE *)(v21 + 2) = 0;
    mysqlpp::SQLTypeAdapter::SQLTypeAdapter(v1 + 320, row, 0LL);
    v22 = mysqlpp::operator<<(v44, (mysqlpp::SQLTypeAdapter *)(v1 + 320));
    v23 = (std::ostream *)std::operator<<<std::char_traits<char>>(v22, ",online_id=");
    v45 = mysqlpp::operator<<(v23, quote).ostr;
    v24 = ((v1 + 384) >> 3) + 2147450880;
    *(_WORD *)v24 = 0;
    *(_BYTE *)(v24 + 2) = 0;
    mysqlpp::SQLTypeAdapter::SQLTypeAdapter(v1 + 384, &row->online_id, 0LL);
    v25 = mysqlpp::operator<<(v45, (mysqlpp::SQLTypeAdapter *)(v1 + 384));
    v26 = std::operator<<<std::char_traits<char>>(v25, ",uid=");
    if ( *(_BYTE *)(((unsigned __int64)&row->uid >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&row->uid >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&row->uid);
    }
    std::ostream::operator<<(v26, row->uid);
    mysqlpp::SQLTypeAdapter::~SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v1 + 384));
    v27 = ((v1 + 384) >> 3) + 2147450880;
    *(_WORD *)v27 = -1800;
    *(_BYTE *)(v27 + 2) = -8;
    mysqlpp::SQLTypeAdapter::~SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v1 + 320));
    v28 = ((v1 + 320) >> 3) + 2147450880;
    *(_WORD *)v28 = -1800;
    *(_BYTE *)(v28 + 2) = -8;
    mysqlpp::SQLTypeAdapter::~SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v1 + 256));
    v29 = ((v1 + 256) >> 3) + 2147450880;
    *(_WORD *)v29 = -1800;
    *(_BYTE *)(v29 + 2) = -8;
    mysqlpp::SQLTypeAdapter::~SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v1 + 192));
    v30 = ((v1 + 192) >> 3) + 2147450880;
    *(_WORD *)v30 = -1800;
    *(_BYTE *)(v30 + 2) = -8;
    v31 = ((v1 + 1600) >> 3) + 2147450880;
    *(_DWORD *)v31 = 0;
    *(_WORD *)(v31 + 4) = 0;
    *(_BYTE *)(v31 + 6) = 0;
    if ( *(char *)(((v1 + 1600) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v1 + 1655) >> 3) + 0x7FFF8000) != 0
      && (char)((v1 + 119) & 7) >= *(_BYTE *)(((v1 + 1655) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v1 + 1600, 56LL);
    }
    mysqlpp::Query::execute((mysqlpp::Query *)(v1 + 1600));
    mysqlpp::SimpleResult::~SimpleResult((mysqlpp::SimpleResult *const)(v1 + 1600));
    v32 = ((v1 + 1600) >> 3) + 2147450880;
    *(_DWORD *)v32 = -117901064;
    *(_WORD *)(v32 + 4) = -1800;
    *(_BYTE *)(v32 + 6) = -8;
    affected_rows = mysqlpp::Query::affected_rows((mysqlpp::Query *const)(v1 + 1792));
    if ( affected_rows )
    {
      if ( affected_rows == 1 )
      {
        *(_DWORD *)(((v1 + 896) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v1 + 896) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v1 + 927) >> 3) + 0x7FFF8000) != 0
          && (char)((v1 - 97) & 7) >= *(_BYTE *)(((v1 + 927) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v1 + 896, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v1 + 896),
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "src/mysql_op_player_psn_online_data.cpp",
          "insertOrUpdateOrReplacePlayerPsnOnlineIdData",
          147);
        if ( *(_BYTE *)(((unsigned __int64)&row->uid >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&row->uid >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&row->uid);
        }
        uid = row->uid;
        v40 = (const char *)std::string::c_str(&row->online_id);
        v34 = (const char *)std::string::c_str(row);
        common::milog::MiLogStream::operator()(
          (common::milog::MiLogStream *const)(v1 + 896),
          "record insert, psn_id=%s online_id=%s uid=%u",
          v34,
          v40,
          uid);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 896));
        *(_DWORD *)(((v1 + 896) >> 3) + 0x7FFF8000) = -117901064;
      }
      else
      {
        if ( affected_rows != 2 )
        {
          *(_DWORD *)(((v1 + 1024) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v1 + 1024) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v1 + 1055) >> 3) + 0x7FFF8000) != 0
            && (char)((v1 - 96 + 127) & 7) >= *(_BYTE *)(((v1 + 1055) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v1 + 1024, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v1 + 1024),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "src/mysql_op_player_psn_online_data.cpp",
            "insertOrUpdateOrReplacePlayerPsnOnlineIdData",
            157);
          common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
            (common::milog::MiLogStream *const)(v1 + 1024),
            (const char (*)[22])"affected_rows invalid");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 1024));
          *(_DWORD *)(((v1 + 1024) >> 3) + 0x7FFF8000) = -117901064;
          if ( *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_store4(v1 + 64);
          *(_DWORD *)(v1 + 64) = -1;
          v7 = *(_DWORD *)(v1 + 64);
          goto LABEL_67;
        }
        *(_DWORD *)(((v1 + 960) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v1 + 960) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v1 + 991) >> 3) + 0x7FFF8000) != 0
          && (char)((v1 - 96 + 63) & 7) >= *(_BYTE *)(((v1 + 991) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v1 + 960, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v1 + 960),
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "src/mysql_op_player_psn_online_data.cpp",
          "insertOrUpdateOrReplacePlayerPsnOnlineIdData",
          152);
        if ( *(_BYTE *)(((unsigned __int64)&row->uid >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&row->uid >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&row->uid);
        }
        v48 = row->uid;
        v41 = (const char *)std::string::c_str(&row->online_id);
        v35 = (const char *)std::string::c_str(row);
        common::milog::MiLogStream::operator()(
          (common::milog::MiLogStream *const)(v1 + 960),
          "record update, psn_id=%s online_id=%s uid=%u",
          v35,
          v41,
          v48);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 960));
        *(_DWORD *)(((v1 + 960) >> 3) + 0x7FFF8000) = -117901064;
      }
    }
    else
    {
      *(_DWORD *)(((v1 + 832) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v1 + 832) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v1 + 863) >> 3) + 0x7FFF8000) != 0
        && (char)((v1 + 95) & 7) >= *(_BYTE *)(((v1 + 863) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v1 + 832, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v1 + 832),
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "src/mysql_op_player_psn_online_data.cpp",
        "insertOrUpdateOrReplacePlayerPsnOnlineIdData",
        142);
      if ( *(_BYTE *)(((unsigned __int64)&row->uid >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&row->uid >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&row->uid);
      }
      v46 = row->uid;
      v39 = (const char *)std::string::c_str(&row->online_id);
      v33 = (const char *)std::string::c_str(row);
      common::milog::MiLogStream::operator()(
        (common::milog::MiLogStream *const)(v1 + 832),
        "record exist, psn_id=%s online_id=%s uid=%u",
        v33,
        v39,
        v46);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 832));
      *(_DWORD *)(((v1 + 832) >> 3) + 0x7FFF8000) = -117901064;
    }
    *(_DWORD *)(((v1 + 1344) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v1 + 1344) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v1 + 1375) >> 3) + 0x7FFF8000) != 0
      && (char)((v1 + 95) & 7) >= *(_BYTE *)(((v1 + 1375) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v1 + 1344, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v1 + 1344),
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "src/mysql_op_player_psn_online_data.cpp",
      "insertOrUpdateOrReplacePlayerPsnOnlineIdData",
      214);
    v36 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
            (common::milog::MiLogStream *const)(v1 + 1344),
            (const char (*)[57])"insertOrUpdateOrReplacePlayerPsnOnlineIdData cost time: ");
    *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) = 4;
    v37 = common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v1 + 96));
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80);
    *(_DWORD *)(v1 + 80) = v37;
    common::milog::MiLogStream::operator<<<int,(int *)0>(v36, (const int *)(v1 + 80));
    *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) = -8;
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 1344));
    *(_DWORD *)(((v1 + 1344) >> 3) + 0x7FFF8000) = -117901064;
    if ( *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 64);
    *(_DWORD *)(v1 + 64) = 0;
    v7 = *(_DWORD *)(v1 + 64);
LABEL_67:
    mysqlpp::Query::~Query((mysqlpp::Query *const)(v1 + 1792));
LABEL_68:
    std::shared_ptr<mysqlpp::Connection>::~shared_ptr((std::shared_ptr<mysqlpp::Connection> *const)(v1 + 160));
    goto LABEL_69;
  }
  *(_DWORD *)(((v1 + 704) >> 3) + 0x7FFF8000) = 0;
  if ( *(char *)(((v1 + 704) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v1 + 735) >> 3) + 0x7FFF8000) != 0
    && (char)((v1 - 96 + 63) & 7) >= *(_BYTE *)(((v1 + 735) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v1 + 704, 32LL);
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v1 + 704),
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "src/mysql_op_player_psn_online_data.cpp",
    "insertOrUpdateOrReplacePlayerPsnOnlineIdData",
    109);
  common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
    (common::milog::MiLogStream *const)(v1 + 704),
    (const char (*)[38])"psn_id/online_id is empty or uid is 0");
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 704));
  *(_DWORD *)(((v1 + 704) >> 3) + 0x7FFF8000) = -117901064;
  if ( *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v1 + 64);
  *(_DWORD *)(v1 + 64) = -1;
  v7 = *(_DWORD *)(v1 + 64);
LABEL_69:
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v1 + 1504));
  SpanProxy::~SpanProxy((SpanProxy *const)(v1 + 1408));
  common::tools::TimeUtils::Timer::~Timer((common::tools::TimeUtils::Timer *const)(v1 + 96));
  if ( v50 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF80A8) = 0LL;
    memset(
      (void *)((unsigned __int64)(v3 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v3 + 2147450880 - (((_DWORD)v3 + 2147450888) & 0xFFFFFFF8) + 176) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v1 >> 3) + 0x7FFF80B4) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF80C0) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF80C8) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF80D0) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF80D8) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8124) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF812C) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    __asan_stack_free_6(v1, 2464LL, v50);
  }
  return v7;
};

// Line 221: range 000000000D418950-000000000D418DA5
int32_t __cdecl MysqlOpPlayerPsnOnlineIdData::selectPlayerUidByPsnId(
        const std::vector<std::string> *psn_id_vec,
        std::vector<unsigned int> *uid_vec)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  int32_t result; // eax
  std::vector<TablePlayerPsnOnlineIdData> *__for_range; // [rsp+10h] [rbp-120h]
  const TablePlayerPsnOnlineIdData *row; // [rsp+18h] [rbp-118h]
  char v9[272]; // [rsp+20h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 8 15 __for_begin:232 64 8 13 __for_end:232 96 24 11 row_vec:226 160 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = MysqlOpPlayerPsnOnlineIdData::selectPlayerUidByPsnId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -234881024;
  v4[536862724] = -218959118;
  v4[536862726] = -202116109;
  if ( std::vector<std::string>::empty(psn_id_vec) )
  {
    v5 = 0;
  }
  else
  {
    std::vector<TablePlayerPsnOnlineIdData>::vector((std::vector<TablePlayerPsnOnlineIdData> *const)(v2 + 96));
    if ( MysqlOpPlayerPsnOnlineIdData::selectPlayerPsnOnlineIdDataByPsnId(
           psn_id_vec,
           (std::vector<TablePlayerPsnOnlineIdData> *)(v2 + 96)) )
    {
      if ( *(char *)(((v2 + 160) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 191) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 191) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 160, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 160),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/mysql_op_player_psn_online_data.cpp",
        "selectPlayerUidByPsnId",
        229);
      common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
        (common::milog::MiLogStream *const)(v2 + 160),
        (const char (*)[41])"selectPlayerPsnOnlineIdDataByPsnId fails");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
      *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
      v5 = -1;
    }
    else
    {
      __for_range = (std::vector<TablePlayerPsnOnlineIdData> *)(v2 + 96);
      if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(std::vector<TablePlayerPsnOnlineIdData>::iterator *)(v2 + 32) = std::vector<TablePlayerPsnOnlineIdData>::begin(__for_range);
      if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(std::vector<TablePlayerPsnOnlineIdData>::iterator *)(v2 + 64) = std::vector<TablePlayerPsnOnlineIdData>::end(__for_range);
      while ( __gnu_cxx::operator!=<TablePlayerPsnOnlineIdData *,std::vector<TablePlayerPsnOnlineIdData>>(
                (const __gnu_cxx::__normal_iterator<TablePlayerPsnOnlineIdData*,std::vector<TablePlayerPsnOnlineIdData> > *)(v2 + 32),
                (const __gnu_cxx::__normal_iterator<TablePlayerPsnOnlineIdData*,std::vector<TablePlayerPsnOnlineIdData> > *)(v2 + 64)) )
      {
        row = __gnu_cxx::__normal_iterator<TablePlayerPsnOnlineIdData *,std::vector<TablePlayerPsnOnlineIdData>>::operator*((const __gnu_cxx::__normal_iterator<TablePlayerPsnOnlineIdData*,std::vector<TablePlayerPsnOnlineIdData> > *const)(v2 + 32));
        if ( *(_BYTE *)(((unsigned __int64)&row->uid >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&row->uid >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&row->uid);
        }
        if ( row->uid )
          std::vector<unsigned int>::push_back(uid_vec, &row->uid);
        __gnu_cxx::__normal_iterator<TablePlayerPsnOnlineIdData *,std::vector<TablePlayerPsnOnlineIdData>>::operator++((__gnu_cxx::__normal_iterator<TablePlayerPsnOnlineIdData*,std::vector<TablePlayerPsnOnlineIdData> > *const)(v2 + 32));
      }
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      v5 = 0;
    }
    std::vector<TablePlayerPsnOnlineIdData>::~vector((std::vector<TablePlayerPsnOnlineIdData> *const)(v2 + 96));
  }
  result = v5;
  if ( v9 == (char *)v2 )
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

// Line 243: range 000000000D418DA6-000000000D419A85
int32_t __cdecl MysqlOpPlayerPsnOnlineIdData::selectPlayerPsnOnlineIdDataByPsnId(
        const std::vector<std::string> *psn_id_vec,
        std::vector<TablePlayerPsnOnlineIdData> *row_vec)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rsi
  int32_t v6; // r14d
  common::milog::MiLogStream *v7; // rdx
  mysqlpp::Connection *v8; // rsi
  std::ostream *ostr; // r14
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rax
  std::logic_error *exception; // rdi
  bool is_first; // [rsp+27h] [rbp-569h]
  const std::string *psn_id; // [rsp+38h] [rbp-558h]
  char v17[1360]; // [rsp+40h] [rbp-550h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1312LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "13 32 1 9 <unknown> 48 1 9 <unknown> 64 8 15 __for_begin:261 96 8 13 __for_end:261 128 16 12 con"
                        "n_ptr:246 160 24 9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <"
                        "unknown> 480 32 9 <unknown> 544 56 14 _tc_guard_:244 640 544 9 query:257";
  *(_QWORD *)(v2 + 16) = MysqlOpPlayerPsnOnlineIdData::selectPlayerPsnOnlineIdDataByPsnId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -219021312;
  v4[536862725] = -234881024;
  v4[536862726] = -218959118;
  v4[536862728] = -218959118;
  v4[536862730] = -218959118;
  v4[536862732] = -218959118;
  v4[536862734] = -218959118;
  v4[536862736] = -218959118;
  v4[536862738] = -234881024;
  v4[536862739] = -218959118;
  v4[536862757] = -202116109;
  v4[536862758] = -202116109;
  v4[536862759] = -202116109;
  v4[536862760] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 288),
    "selectPlayerPsnOnlineIdDataByPsnId",
    (const std::allocator<char> *)(v2 + 48));
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 224),
    "MYSQL",
    (const std::allocator<char> *)(v2 + 32));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v2 + 544),
    (const std::string *)(v2 + 224),
    (const std::string *)(v2 + 288));
  std::string::~string((void *)(v2 + 224));
  *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  std::string::~string((void *)(v2 + 288));
  *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  *(_WORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
  v5 = std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::mysql_mgr_ptr);
  if ( *(_WORD *)(((v2 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store16(v2 + 128, v5);
  common::midb::MySqlMgrT<std::mutex>::grab(v5, 3u, 0);
  if ( std::operator==<mysqlpp::Connection>(0LL, (const std::shared_ptr<mysqlpp::Connection> *)(v2 + 128)) )
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
      3u,
      "src/mysql_op_player_psn_online_data.cpp",
      "selectPlayerPsnOnlineIdDataByPsnId",
      249);
    common::milog::MiLogStream::operator()(
      (common::milog::MiLogStream *const)(v2 + 352),
      "[MYSQL]grab connect to mysql failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 352));
    *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
  }
  else
  {
    if ( std::vector<std::string>::size(psn_id_vec) > 0x3E8 )
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
        "src/mysql_op_player_psn_online_data.cpp",
        "selectPlayerPsnOnlineIdDataByPsnId",
        254);
      v7 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
             (common::milog::MiLogStream *const)(v2 + 416),
             (const char (*)[17])"psn_id_vec size:");
      common::milog::MiLogStream::operator<<<std::string>(v7, psn_id_vec);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 416));
      *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -117901064;
    }
    __asan_unpoison_stack_memory(v2 + 640, 544LL);
    v8 = std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
    if ( *(char *)(((v2 + 640) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 1183) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 1183) >> 3) + 0x7FFF8000) )
    {
      v8 = (mysqlpp::Connection *)544;
      __asan_report_store_n(v2 + 640, 544LL);
    }
    mysqlpp::Connection::query((mysqlpp::Query *)(v2 + 640), v8, byte_1A7CA440);
    std::operator<<<std::char_traits<char>>(
      v2 + 640,
      "select psn_id, online_id, uid from t_player_psn_online_id_data where psn_id in");
    std::operator<<<std::char_traits<char>>(v2 + 640, "(");
    is_first = 1;
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<std::string>::const_iterator *)(v2 + 64) = std::vector<std::string>::begin(psn_id_vec);
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<std::string>::const_iterator *)(v2 + 96) = std::vector<std::string>::end(psn_id_vec);
    while ( __gnu_cxx::operator!=<std::string const*,std::vector<std::string>>(
              (const __gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *)(v2 + 64),
              (const __gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *)(v2 + 96)) )
    {
      psn_id = __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator*((const __gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *const)(v2 + 64));
      if ( is_first )
        is_first = 0;
      else
        std::operator<<<std::char_traits<char>>(v2 + 640, ",");
      ostr = mysqlpp::operator<<((std::ostream *)(v2 + 640), quote).ostr;
      v10 = ((v2 + 160) >> 3) + 2147450880;
      *(_WORD *)v10 = 0;
      *(_BYTE *)(v10 + 2) = 0;
      mysqlpp::SQLTypeAdapter::SQLTypeAdapter(v2 + 160, psn_id, 0LL);
      mysqlpp::operator<<(ostr, (mysqlpp::SQLTypeAdapter *)(v2 + 160));
      mysqlpp::SQLTypeAdapter::~SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v2 + 160));
      v11 = ((v2 + 160) >> 3) + 2147450880;
      *(_WORD *)v11 = -1800;
      *(_BYTE *)(v11 + 2) = -8;
      __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator++((__gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *const)(v2 + 64));
    }
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    std::operator<<<std::char_traits<char>>(v2 + 640, ")");
    mysqlpp::Query::storein<std::vector<TablePlayerPsnOnlineIdData>>((mysqlpp::Query *const)(v2 + 640), row_vec);
    if ( mysqlpp::Query::errnum((const mysqlpp::Query *const)(v2 + 640)) )
    {
      exception = (std::logic_error *)__cxa_allocate_exception(0x10uLL);
      std::logic_error::logic_error(exception, "query has error");
      __asan_handle_no_return(exception);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::logic_error,
        (void (__fastcall *)(void *))&std::logic_error::~logic_error);
    }
    v6 = 0;
    mysqlpp::Query::~Query((mysqlpp::Query *const)(v2 + 640));
  }
  std::shared_ptr<mysqlpp::Connection>::~shared_ptr((std::shared_ptr<mysqlpp::Connection> *const)(v2 + 128));
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v2 + 544));
  if ( v17 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8040) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8048) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8094) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF809C) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1312LL, v17);
  }
  return v6;
};

// Line 291: range 000000000D419A86-000000000D41A1A7
int32_t __cdecl MysqlOpPlayerPsnOnlineIdData::selectPlayerUidByOnlineId(
        const std::vector<std::string> *online_id_vec,
        std::vector<unsigned int> *uid_vec)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  unsigned __int64 v6; // rax
  int32_t result; // eax
  std::vector<TablePlayerPsnOnlineIdData> *__for_range; // [rsp+10h] [rbp-220h]
  const TablePlayerPsnOnlineIdData *row; // [rsp+18h] [rbp-218h]
  char v10[528]; // [rsp+20h] [rbp-210h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(480LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "9 32 1 9 <unknown> 48 1 9 <unknown> 64 8 15 __for_begin:304 96 8 13 __for_end:304 128 24 11 row_"
                        "vec:297 192 32 9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown> 384 56 14 _tc_guard_:296";
  *(_QWORD *)(v2 + 16) = MysqlOpPlayerPsnOnlineIdData::selectPlayerUidByOnlineId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -234881024;
  v4[536862725] = -218959118;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862731] = -218959118;
  v4[536862733] = -218103808;
  v4[536862734] = -202116109;
  if ( std::vector<std::string>::empty(online_id_vec) )
  {
    v5 = 0;
  }
  else
  {
    std::allocator<char>::allocator(v2 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 256),
      "selectPlayerUidByOnlineId",
      (const std::allocator<char> *)(v2 + 48));
    std::allocator<char>::allocator(v2 + 32);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 192),
      "MYSQL",
      (const std::allocator<char> *)(v2 + 32));
    MonitorReportUtils::TimeCostGuard::TimeCostGuard(
      (MonitorReportUtils::TimeCostGuard *const)(v2 + 384),
      (const std::string *)(v2 + 192),
      (const std::string *)(v2 + 256));
    std::string::~string((void *)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 32);
    *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
    std::string::~string((void *)(v2 + 256));
    *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    v6 = ((v2 + 128) >> 3) + 2147450880;
    *(_WORD *)v6 = 0;
    *(_BYTE *)(v6 + 2) = 0;
    std::vector<TablePlayerPsnOnlineIdData>::vector((std::vector<TablePlayerPsnOnlineIdData> *const)(v2 + 128));
    if ( MysqlOpPlayerPsnOnlineIdData::selectPlayerPsnOnlineIdDataByOnlineId(
           online_id_vec,
           (std::vector<TablePlayerPsnOnlineIdData> *)(v2 + 128)) )
    {
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 320) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 351) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 32 + 127) & 7) >= *(_BYTE *)(((v2 + 351) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 320, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 320),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/mysql_op_player_psn_online_data.cpp",
        "selectPlayerUidByOnlineId",
        300);
      common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
        (common::milog::MiLogStream *const)(v2 + 320),
        (const char (*)[44])"selectPlayerPsnOnlineIdDataByOnlineId fails");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
      v5 = -1;
    }
    else
    {
      __for_range = (std::vector<TablePlayerPsnOnlineIdData> *)(v2 + 128);
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(std::vector<TablePlayerPsnOnlineIdData>::iterator *)(v2 + 64) = std::vector<TablePlayerPsnOnlineIdData>::begin(__for_range);
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(std::vector<TablePlayerPsnOnlineIdData>::iterator *)(v2 + 96) = std::vector<TablePlayerPsnOnlineIdData>::end(__for_range);
      while ( __gnu_cxx::operator!=<TablePlayerPsnOnlineIdData *,std::vector<TablePlayerPsnOnlineIdData>>(
                (const __gnu_cxx::__normal_iterator<TablePlayerPsnOnlineIdData*,std::vector<TablePlayerPsnOnlineIdData> > *)(v2 + 64),
                (const __gnu_cxx::__normal_iterator<TablePlayerPsnOnlineIdData*,std::vector<TablePlayerPsnOnlineIdData> > *)(v2 + 96)) )
      {
        row = __gnu_cxx::__normal_iterator<TablePlayerPsnOnlineIdData *,std::vector<TablePlayerPsnOnlineIdData>>::operator*((const __gnu_cxx::__normal_iterator<TablePlayerPsnOnlineIdData*,std::vector<TablePlayerPsnOnlineIdData> > *const)(v2 + 64));
        if ( *(_BYTE *)(((unsigned __int64)&row->uid >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&row->uid >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&row->uid);
        }
        if ( row->uid )
          std::vector<unsigned int>::push_back(uid_vec, &row->uid);
        __gnu_cxx::__normal_iterator<TablePlayerPsnOnlineIdData *,std::vector<TablePlayerPsnOnlineIdData>>::operator++((__gnu_cxx::__normal_iterator<TablePlayerPsnOnlineIdData*,std::vector<TablePlayerPsnOnlineIdData> > *const)(v2 + 64));
      }
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
      v5 = 0;
    }
    std::vector<TablePlayerPsnOnlineIdData>::~vector((std::vector<TablePlayerPsnOnlineIdData> *const)(v2 + 128));
    MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v2 + 384));
  }
  result = v5;
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8034) = 0LL;
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

// Line 316: range 000000000D41A1A8-000000000D41AE87
int32_t __cdecl MysqlOpPlayerPsnOnlineIdData::selectPlayerPsnOnlineIdDataByOnlineId(
        const std::vector<std::string> *online_id_vec,
        std::vector<TablePlayerPsnOnlineIdData> *row_vec)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rsi
  int32_t v6; // r14d
  common::milog::MiLogStream *v7; // rdx
  mysqlpp::Connection *v8; // rsi
  std::ostream *ostr; // r14
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rax
  std::logic_error *exception; // rdi
  bool is_first; // [rsp+27h] [rbp-569h]
  const std::string *online_id; // [rsp+38h] [rbp-558h]
  char v17[1360]; // [rsp+40h] [rbp-550h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1312LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "13 32 1 9 <unknown> 48 1 9 <unknown> 64 8 15 __for_begin:334 96 8 13 __for_end:334 128 16 12 con"
                        "n_ptr:319 160 24 9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <"
                        "unknown> 480 32 9 <unknown> 544 56 14 _tc_guard_:317 640 544 9 query:330";
  *(_QWORD *)(v2 + 16) = MysqlOpPlayerPsnOnlineIdData::selectPlayerPsnOnlineIdDataByOnlineId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -219021312;
  v4[536862725] = -234881024;
  v4[536862726] = -218959118;
  v4[536862728] = -218959118;
  v4[536862730] = -218959118;
  v4[536862732] = -218959118;
  v4[536862734] = -218959118;
  v4[536862736] = -218959118;
  v4[536862738] = -234881024;
  v4[536862739] = -218959118;
  v4[536862757] = -202116109;
  v4[536862758] = -202116109;
  v4[536862759] = -202116109;
  v4[536862760] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 288),
    "selectPlayerPsnOnlineIdDataByOnlineId",
    (const std::allocator<char> *)(v2 + 48));
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 224),
    "MYSQL",
    (const std::allocator<char> *)(v2 + 32));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v2 + 544),
    (const std::string *)(v2 + 224),
    (const std::string *)(v2 + 288));
  std::string::~string((void *)(v2 + 224));
  *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  std::string::~string((void *)(v2 + 288));
  *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  *(_WORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
  v5 = std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::mysql_mgr_ptr);
  if ( *(_WORD *)(((v2 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store16(v2 + 128, v5);
  common::midb::MySqlMgrT<std::mutex>::grab(v5, 3u, 0);
  if ( std::operator==<mysqlpp::Connection>(0LL, (const std::shared_ptr<mysqlpp::Connection> *)(v2 + 128)) )
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
      3u,
      "src/mysql_op_player_psn_online_data.cpp",
      "selectPlayerPsnOnlineIdDataByOnlineId",
      322);
    common::milog::MiLogStream::operator()(
      (common::milog::MiLogStream *const)(v2 + 352),
      "[MYSQL]grab connect to mysql failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 352));
    *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
  }
  else
  {
    if ( std::vector<std::string>::size(online_id_vec) > 0x3E8 )
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
        "src/mysql_op_player_psn_online_data.cpp",
        "selectPlayerPsnOnlineIdDataByOnlineId",
        327);
      v7 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
             (common::milog::MiLogStream *const)(v2 + 416),
             (const char (*)[20])"online_id_vec size:");
      common::milog::MiLogStream::operator<<<std::string>(v7, online_id_vec);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 416));
      *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -117901064;
    }
    __asan_unpoison_stack_memory(v2 + 640, 544LL);
    v8 = std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
    if ( *(char *)(((v2 + 640) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 1183) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 1183) >> 3) + 0x7FFF8000) )
    {
      v8 = (mysqlpp::Connection *)544;
      __asan_report_store_n(v2 + 640, 544LL);
    }
    mysqlpp::Connection::query((mysqlpp::Query *)(v2 + 640), v8, byte_1A7CA440);
    std::operator<<<std::char_traits<char>>(
      v2 + 640,
      "select psn_id, online_id, uid from t_player_psn_online_id_data where online_id in");
    std::operator<<<std::char_traits<char>>(v2 + 640, "(");
    is_first = 1;
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<std::string>::const_iterator *)(v2 + 64) = std::vector<std::string>::begin(online_id_vec);
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<std::string>::const_iterator *)(v2 + 96) = std::vector<std::string>::end(online_id_vec);
    while ( __gnu_cxx::operator!=<std::string const*,std::vector<std::string>>(
              (const __gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *)(v2 + 64),
              (const __gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *)(v2 + 96)) )
    {
      online_id = __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator*((const __gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *const)(v2 + 64));
      if ( is_first )
        is_first = 0;
      else
        std::operator<<<std::char_traits<char>>(v2 + 640, ",");
      ostr = mysqlpp::operator<<((std::ostream *)(v2 + 640), quote).ostr;
      v10 = ((v2 + 160) >> 3) + 2147450880;
      *(_WORD *)v10 = 0;
      *(_BYTE *)(v10 + 2) = 0;
      mysqlpp::SQLTypeAdapter::SQLTypeAdapter(v2 + 160, online_id, 0LL);
      mysqlpp::operator<<(ostr, (mysqlpp::SQLTypeAdapter *)(v2 + 160));
      mysqlpp::SQLTypeAdapter::~SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v2 + 160));
      v11 = ((v2 + 160) >> 3) + 2147450880;
      *(_WORD *)v11 = -1800;
      *(_BYTE *)(v11 + 2) = -8;
      __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator++((__gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *const)(v2 + 64));
    }
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    std::operator<<<std::char_traits<char>>(v2 + 640, ")");
    mysqlpp::Query::storein<std::vector<TablePlayerPsnOnlineIdData>>((mysqlpp::Query *const)(v2 + 640), row_vec);
    if ( mysqlpp::Query::errnum((const mysqlpp::Query *const)(v2 + 640)) )
    {
      exception = (std::logic_error *)__cxa_allocate_exception(0x10uLL);
      std::logic_error::logic_error(exception, "query has error");
      __asan_handle_no_return(exception);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::logic_error,
        (void (__fastcall *)(void *))&std::logic_error::~logic_error);
    }
    v6 = 0;
    mysqlpp::Query::~Query((mysqlpp::Query *const)(v2 + 640));
  }
  std::shared_ptr<mysqlpp::Connection>::~shared_ptr((std::shared_ptr<mysqlpp::Connection> *const)(v2 + 128));
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v2 + 544));
  if ( v17 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8040) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8048) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8094) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF809C) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1312LL, v17);
  }
  return v6;
};

// Line 363: range 000000000D41AE88-000000000D41BC00
__int64 __fastcall MysqlOpPlayerPsnOnlineIdData::deletePlayerPsnOnlineIdData(const std::string *psn_id, uint32_t uid)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rsi
  unsigned int v6; // r15d
  mysqlpp::Connection *v7; // rsi
  std::ostream *v8; // rax
  std::ostream *ostr; // r15
  unsigned __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  char v24[1488]; // [rsp+30h] [rbp-5D0h] BYREF

  v2 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1440LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "14 48 1 9 <unknown> 64 1 9 <unknown> 80 4 7 uid:362 96 16 12 conn_ptr:365 128 24 9 <unknown> 192"
                        " 32 9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 "
                        "32 9 <unknown> 576 56 14 _tc_guard_:364 672 56 9 <unknown> 768 544 9 query:371";
  *(_QWORD *)(v2 + 16) = MysqlOpPlayerPsnOnlineIdData::deletePlayerPsnOnlineIdData;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234556927;
  v4[536862723] = -219021312;
  v4[536862724] = -234881024;
  v4[536862725] = -218959118;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862731] = -218959118;
  v4[536862733] = -218959118;
  v4[536862735] = -218959118;
  v4[536862737] = -218959118;
  v4[536862739] = -234881024;
  v4[536862740] = -218959118;
  v4[536862742] = -234881024;
  v4[536862743] = -218959118;
  v4[536862761] = -202116109;
  v4[536862762] = -202116109;
  v4[536862763] = -202116109;
  v4[536862764] = -202116109;
  *(_DWORD *)(v2 + 80) = uid;
  std::allocator<char>::allocator(v2 + 64);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 256),
    "deletePlayerPsnOnlineIdData",
    (const std::allocator<char> *)(v2 + 64));
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 192),
    "MYSQL",
    (const std::allocator<char> *)(v2 + 48));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v2 + 576),
    (const std::string *)(v2 + 192),
    (const std::string *)(v2 + 256));
  std::string::~string((void *)(v2 + 192));
  *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  std::string::~string((void *)(v2 + 256));
  *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 64);
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
  v5 = std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::mysql_mgr_ptr);
  if ( *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store16(v2 + 96, v5);
  common::midb::MySqlMgrT<std::mutex>::grab(v5, 3u, 0);
  if ( std::operator==<mysqlpp::Connection>(0LL, (const std::shared_ptr<mysqlpp::Connection> *)(v2 + 96)) )
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
      3u,
      "src/mysql_op_player_psn_online_data.cpp",
      "deletePlayerPsnOnlineIdData",
      368);
    common::milog::MiLogStream::operator()(
      (common::milog::MiLogStream *const)(v2 + 320),
      "[MYSQL]grab connect to mysql failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
    *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
  }
  else
  {
    __asan_unpoison_stack_memory(v2 + 768, 544LL);
    v7 = std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    if ( *(char *)(((v2 + 768) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 1311) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 96 + 127) & 7) >= *(_BYTE *)(((v2 + 1311) >> 3) + 0x7FFF8000) )
    {
      v7 = (mysqlpp::Connection *)544;
      __asan_report_store_n(v2 + 768, 544LL);
    }
    mysqlpp::Connection::query((mysqlpp::Query *)(v2 + 768), v7, byte_1A7CA440);
    v8 = (std::ostream *)std::operator<<<std::char_traits<char>>(
                           v2 + 768,
                           "delete from t_player_psn_online_id_data where psn_id=");
    ostr = mysqlpp::operator<<(v8, quote).ostr;
    v10 = ((v2 + 128) >> 3) + 2147450880;
    *(_WORD *)v10 = 0;
    *(_BYTE *)(v10 + 2) = 0;
    mysqlpp::SQLTypeAdapter::SQLTypeAdapter(v2 + 128, psn_id, 0LL);
    v11 = mysqlpp::operator<<(ostr, (mysqlpp::SQLTypeAdapter *)(v2 + 128));
    v12 = std::operator<<<std::char_traits<char>>(v11, " and uid=");
    v13 = std::ostream::operator<<(v12, *(unsigned int *)(v2 + 80));
    std::operator<<<std::char_traits<char>>(v13, " limit 1");
    mysqlpp::SQLTypeAdapter::~SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v2 + 128));
    v14 = ((v2 + 128) >> 3) + 2147450880;
    *(_WORD *)v14 = -1800;
    *(_BYTE *)(v14 + 2) = -8;
    v15 = ((v2 + 672) >> 3) + 2147450880;
    *(_DWORD *)v15 = 0;
    *(_WORD *)(v15 + 4) = 0;
    *(_BYTE *)(v15 + 6) = 0;
    if ( *(char *)(((v2 + 672) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 727) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 96 + 55) & 7) >= *(_BYTE *)(((v2 + 727) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 672, 56LL);
    }
    mysqlpp::Query::execute((mysqlpp::Query *)(v2 + 672));
    mysqlpp::SimpleResult::~SimpleResult((mysqlpp::SimpleResult *const)(v2 + 672));
    v16 = ((v2 + 672) >> 3) + 2147450880;
    *(_DWORD *)v16 = -117901064;
    *(_WORD *)(v16 + 4) = -1800;
    *(_BYTE *)(v16 + 6) = -8;
    if ( mysqlpp::Query::affected_rows((mysqlpp::Query *const)(v2 + 768)) )
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
        1u,
        "src/mysql_op_player_psn_online_data.cpp",
        "deletePlayerPsnOnlineIdData",
        380);
      v17 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
              (common::milog::MiLogStream *const)(v2 + 384),
              (const char (*)[43])"deletePlayerPsnOnlineIdData succ, psn_id: ");
      v18 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v17, psn_id);
      v19 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v18, (const char (*)[8])" ,uid: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v2 + 80));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
      *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
    }
    else
    {
      *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 448) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 479) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 96 + 63) & 7) >= *(_BYTE *)(((v2 + 479) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 448, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 448),
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "src/mysql_op_player_psn_online_data.cpp",
        "deletePlayerPsnOnlineIdData",
        384);
      v20 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
              (common::milog::MiLogStream *const)(v2 + 448),
              (const char (*)[45])"deletePlayerPsnOnlineIdData failed, psn_id: ");
      v21 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v20, psn_id);
      v22 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v21, (const char (*)[8])" ,uid: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, (const unsigned int *)(v2 + 80));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
      *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
    }
    v6 = 0;
    mysqlpp::Query::~Query((mysqlpp::Query *const)(v2 + 768));
  }
  std::shared_ptr<mysqlpp::Connection>::~shared_ptr((std::shared_ptr<mysqlpp::Connection> *const)(v2 + 96));
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v2 + 576));
  if ( v24 == (char *)v2 )
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF804C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8054) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF805C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80A4) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80AC) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1440LL, v24);
  }
  return v6;
};

// Line 394: range 000000000D41BDA2-000000000D41BDB6
void __cdecl GLOBAL__sub_I_mysql_op_player_psn_online_data_cpp()
{
  __static_initialization_and_destruction_0(1, 0xFFFF);
};

// Line 394: range 000000000D41BC01-000000000D41BDA1
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
    __asan_before_dynamic_init("src/mysql_op_player_psn_online_data.cpp");
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
