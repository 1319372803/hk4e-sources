// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_tool.cpp

// Line 19: range 000000000CCED117-000000000CCED741
const Json::Value *__cdecl jsonValueFind(const Json::Value *jval, const std::string *key)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  const Json::Value *result; // rax
  __int64 v6; // r14
  const char *v7; // r14
  const char *v8; // rcx
  char v9[304]; // [rsp+20h] [rbp-130h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 4 9 <unknown> 64 32 9 <unknown> 128 32 9 <unknown> 192 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = jsonValueFind;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862723] = -218959118;
  v4[536862725] = -218959118;
  v4[536862727] = -202116109;
  if ( (unsigned __int8)std::string::empty(key) )
  {
    result = 0LL;
  }
  else
  {
    v6 = std::string::c_str(key);
    v7 = (const char *)(std::string::length(key) + v6);
    v8 = (const char *)std::string::c_str(key);
    result = (const Json::Value *)Json::Value::find((Json::Value *)jval, v8, v7);
  }
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 38: range 000000000CCED742-000000000CCED766
Json::Value *__cdecl jsonValueFind(Json::Value *jval, const std::string *key)
{
  return (Json::Value *)jsonValueFind(jval, key);
};

// Line 43: range 000000000CCED767-000000000CCEEDA7
bool __cdecl parseJsonFile(const std::string *json_path, Json::Value *root)
{
  bool v2; // r15
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rdx
  __int64 v8; // rax
  Json::Value_0 *v9; // rax
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rax
  Json::Value_0 *v12; // rax
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax
  Json::Value_0 *v15; // rax
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rax
  Json::Value_0 *v18; // rax
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  Json::Value_0 *v21; // rax
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rax
  Json::Value_0 *v24; // rax
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rax
  Json::Value_0 *v27; // rax
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rax
  Json::Value_0 *v30; // rax
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rax
  Json::Value_0 *v33; // rax
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // rax
  Json::Value_0 *v36; // rax
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rax
  Json::Value_0 *v39; // rax
  unsigned __int64 v40; // rax
  Json::CharReader *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rdx
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // rdx
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rdx
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // rax
  int v51; // [rsp+8h] [rbp-A68h]
  const char *begin; // [rsp+28h] [rbp-A48h]
  const char *end; // [rsp+30h] [rbp-A40h]
  char v54[2608]; // [rsp+40h] [rbp-A30h] BYREF

  v3 = (unsigned __int64)v54;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_6(2560LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "23 32 1 9 <unknown> 48 8 13 reader_ptr:69 80 8 9 <unknown> 112 32 9 <unknown> 176 32 6 doc:52 24"
                        "0 32 9 <unknown> 304 32 10 err_msg:77 368 32 9 <unknown> 432 32 9 <unknown> 496 40 9 <unknown> 5"
                        "76 40 9 <unknown> 656 40 9 <unknown> 736 40 9 <unknown> 816 40 9 <unknown> 896 40 9 <unknown> 97"
                        "6 40 9 <unknown> 1056 40 9 <unknown> 1136 40 9 <unknown> 1216 40 9 <unknown> 1296 40 9 <unknown>"
                        " 1376 48 17 reader_builder:56 1456 376 6 ofs:50 1904 520 6 ifs:44";
  *(_QWORD *)(v3 + 16) = parseJsonFile;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61953;
  v5[536862721] = -234881024;
  v5[536862722] = 62194;
  v5[536862722] = -234881024;
  v5[536862723] = 62194;
  v5[536862724] = -219021312;
  v5[536862725] = 62194;
  v5[536862726] = -219021312;
  v5[536862727] = 62194;
  v5[536862728] = -219021312;
  v5[536862729] = 62194;
  v5[536862730] = -219021312;
  v5[536862731] = 62194;
  v5[536862732] = -219021312;
  v5[536862733] = 62194;
  v5[536862734] = -219021312;
  v5[536862735] = 62194;
  v5[536862736] = -234881024;
  v5[536862737] = -218959118;
  v5[536862739] = -218959360;
  v5[536862740] = 62194;
  v5[536862741] = -234881024;
  v5[536862742] = -218959118;
  v5[536862744] = -218959360;
  v5[536862745] = 62194;
  v5[536862746] = -234881024;
  v5[536862747] = -218959118;
  v5[536862749] = -218959360;
  v5[536862750] = 62194;
  v5[536862751] = -234881024;
  v5[536862752] = -218959118;
  v5[536862754] = -218959360;
  v5[536862755] = 62194;
  v5[536862756] = -234881024;
  v5[536862757] = -218959118;
  v5[536862759] = -218959360;
  v5[536862760] = 62194;
  v5[536862761] = -234881024;
  v5[536862762] = -218959118;
  v5[536862764] = -219021312;
  v5[536862765] = 62194;
  v5[536862777] = -218959360;
  v5[536862778] = -218959118;
  v5[536862779] = 62194;
  v5[536862795] = -218103808;
  v5[536862796] = -202116109;
  v5[536862797] = -202116109;
  v5[536862798] = -202116109;
  v5[536862799] = -202116109;
  std::ifstream::basic_ifstream(v3 + 1904, json_path, 8LL);
  if ( (unsigned __int8)std::ios::operator!(v3 + 2160) )
  {
    if ( *(char *)(((v3 + 112) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 143) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 113) & 7) >= *(_BYTE *)(((v3 + 143) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 112, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 112),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/json_tool.cpp",
      "parseJsonFile",
      47);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v3 + 112),
           (const char (*)[16])"[CONFIG_ERROR] ");
    v7 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v6, (const char (*)[18])"load file fails: ");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, json_path);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 112));
    *(_DWORD *)(((v3 + 112) >> 3) + 0x7FFF8000) = -117901064;
    v2 = 0;
  }
  else
  {
    std::ostringstream::basic_ostringstream(v3 + 1456);
    v8 = std::ifstream::rdbuf(v3 + 1904);
    std::ostream::operator<<(v3 + 1456, v8);
    if ( *(char *)(((v3 + 176) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 207) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 80 + 31) & 7) >= *(_BYTE *)(((v3 + 207) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 176, 32LL);
    }
    std::ostringstream::str(v3 + 176, v3 + 1456);
    begin = (const char *)std::string::data(v3 + 176);
    end = &begin[std::string::size(v3 + 176)];
    Json::CharReaderBuilder::CharReaderBuilder((Json::CharReaderBuilder *)(v3 + 1376));
    Json::Value::Value((Json::Value *)(v3 + 496), 0);
    v9 = Json::Value::operator[]((Json::Value_0 *const)(v3 + 1384), "collectComments");
    Json::Value::operator=(v9, (Json::Value_0 *)(v3 + 496));
    Json::Value::~Value((Json::Value_0 *const)(v3 + 496));
    v10 = ((v3 + 496) >> 3) + 2147450880;
    *(_DWORD *)v10 = -117901064;
    *(_BYTE *)(v10 + 4) = -8;
    v11 = ((v3 + 576) >> 3) + 2147450880;
    *(_DWORD *)v11 = 0;
    *(_BYTE *)(v11 + 4) = 0;
    Json::Value::Value((Json::Value *)(v3 + 576), 1);
    v12 = Json::Value::operator[]((Json::Value_0 *const)(v3 + 1384), "allowComments");
    Json::Value::operator=(v12, (Json::Value_0 *)(v3 + 576));
    Json::Value::~Value((Json::Value_0 *const)(v3 + 576));
    v13 = ((v3 + 576) >> 3) + 2147450880;
    *(_DWORD *)v13 = -117901064;
    *(_BYTE *)(v13 + 4) = -8;
    v14 = ((v3 + 656) >> 3) + 2147450880;
    *(_DWORD *)v14 = 0;
    *(_BYTE *)(v14 + 4) = 0;
    Json::Value::Value((Json::Value *)(v3 + 656), 1);
    v15 = Json::Value::operator[]((Json::Value_0 *const)(v3 + 1384), "allowTrailingCommas");
    Json::Value::operator=(v15, (Json::Value_0 *)(v3 + 656));
    Json::Value::~Value((Json::Value_0 *const)(v3 + 656));
    v16 = ((v3 + 656) >> 3) + 2147450880;
    *(_DWORD *)v16 = -117901064;
    *(_BYTE *)(v16 + 4) = -8;
    v17 = ((v3 + 736) >> 3) + 2147450880;
    *(_DWORD *)v17 = 0;
    *(_BYTE *)(v17 + 4) = 0;
    Json::Value::Value((Json::Value *)(v3 + 736), 1);
    v18 = Json::Value::operator[]((Json::Value_0 *const)(v3 + 1384), "strictRoot");
    Json::Value::operator=(v18, (Json::Value_0 *)(v3 + 736));
    Json::Value::~Value((Json::Value_0 *const)(v3 + 736));
    v19 = ((v3 + 736) >> 3) + 2147450880;
    *(_DWORD *)v19 = -117901064;
    *(_BYTE *)(v19 + 4) = -8;
    v20 = ((v3 + 816) >> 3) + 2147450880;
    *(_DWORD *)v20 = 0;
    *(_BYTE *)(v20 + 4) = 0;
    Json::Value::Value((Json::Value *)(v3 + 816), 1);
    v21 = Json::Value::operator[]((Json::Value_0 *const)(v3 + 1384), "allowDroppedNullPlaceholders");
    Json::Value::operator=(v21, (Json::Value_0 *)(v3 + 816));
    Json::Value::~Value((Json::Value_0 *const)(v3 + 816));
    v22 = ((v3 + 816) >> 3) + 2147450880;
    *(_DWORD *)v22 = -117901064;
    *(_BYTE *)(v22 + 4) = -8;
    v23 = ((v3 + 896) >> 3) + 2147450880;
    *(_DWORD *)v23 = 0;
    *(_BYTE *)(v23 + 4) = 0;
    Json::Value::Value((Json::Value *)(v3 + 896), 0);
    v24 = Json::Value::operator[]((Json::Value_0 *const)(v3 + 1384), "allowNumericKeys");
    Json::Value::operator=(v24, (Json::Value_0 *)(v3 + 896));
    Json::Value::~Value((Json::Value_0 *const)(v3 + 896));
    v25 = ((v3 + 896) >> 3) + 2147450880;
    *(_DWORD *)v25 = -117901064;
    *(_BYTE *)(v25 + 4) = -8;
    v26 = ((v3 + 976) >> 3) + 2147450880;
    *(_DWORD *)v26 = 0;
    *(_BYTE *)(v26 + 4) = 0;
    Json::Value::Value((Json::Value *)(v3 + 976), 0);
    v27 = Json::Value::operator[]((Json::Value_0 *const)(v3 + 1384), "allowSingleQuotes");
    Json::Value::operator=(v27, (Json::Value_0 *)(v3 + 976));
    Json::Value::~Value((Json::Value_0 *const)(v3 + 976));
    v28 = ((v3 + 976) >> 3) + 2147450880;
    *(_DWORD *)v28 = -117901064;
    *(_BYTE *)(v28 + 4) = -8;
    v29 = ((v3 + 1056) >> 3) + 2147450880;
    *(_DWORD *)v29 = 0;
    *(_BYTE *)(v29 + 4) = 0;
    Json::Value::Value((Json::Value *)(v3 + 1056), 1000);
    v30 = Json::Value::operator[]((Json::Value_0 *const)(v3 + 1384), "stackLimit");
    Json::Value::operator=(v30, (Json::Value_0 *)(v3 + 1056));
    Json::Value::~Value((Json::Value_0 *const)(v3 + 1056));
    v31 = ((v3 + 1056) >> 3) + 2147450880;
    *(_DWORD *)v31 = -117901064;
    *(_BYTE *)(v31 + 4) = -8;
    v32 = ((v3 + 1136) >> 3) + 2147450880;
    *(_DWORD *)v32 = 0;
    *(_BYTE *)(v32 + 4) = 0;
    Json::Value::Value((Json::Value *)(v3 + 1136), 0);
    v33 = Json::Value::operator[]((Json::Value_0 *const)(v3 + 1384), "failIfExtra");
    Json::Value::operator=(v33, (Json::Value_0 *)(v3 + 1136));
    Json::Value::~Value((Json::Value_0 *const)(v3 + 1136));
    v34 = ((v3 + 1136) >> 3) + 2147450880;
    *(_DWORD *)v34 = -117901064;
    *(_BYTE *)(v34 + 4) = -8;
    v35 = ((v3 + 1216) >> 3) + 2147450880;
    *(_DWORD *)v35 = 0;
    *(_BYTE *)(v35 + 4) = 0;
    Json::Value::Value((Json::Value *)(v3 + 1216), 1);
    v36 = Json::Value::operator[]((Json::Value_0 *const)(v3 + 1384), "rejectDupKeys");
    Json::Value::operator=(v36, (Json::Value_0 *)(v3 + 1216));
    Json::Value::~Value((Json::Value_0 *const)(v3 + 1216));
    v37 = ((v3 + 1216) >> 3) + 2147450880;
    *(_DWORD *)v37 = -117901064;
    *(_BYTE *)(v37 + 4) = -8;
    v38 = ((v3 + 1296) >> 3) + 2147450880;
    *(_DWORD *)v38 = 0;
    *(_BYTE *)(v38 + 4) = 0;
    Json::Value::Value((Json::Value *)(v3 + 1296), 0);
    v39 = Json::Value::operator[]((Json::Value_0 *const)(v3 + 1384), "allowSpecialFloats");
    Json::Value::operator=(v39, (Json::Value_0 *)(v3 + 1296));
    Json::Value::~Value((Json::Value_0 *const)(v3 + 1296));
    v40 = ((v3 + 1296) >> 3) + 2147450880;
    *(_DWORD *)v40 = -117901064;
    *(_BYTE *)(v40 + 4) = -8;
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 0;
    v41 = (Json::CharReader *)Json::CharReaderBuilder::newCharReader((Json::CharReaderBuilder *)(v3 + 1376));
    std::unique_ptr<Json::CharReader>::unique_ptr<std::default_delete<Json::CharReader>,void>(
      (std::unique_ptr<Json::CharReader> *const)(v3 + 48),
      v41);
    if ( std::operator==<Json::CharReader,std::default_delete<Json::CharReader>>(
           (const std::unique_ptr<Json::CharReader> *)(v3 + 48),
           0LL) )
    {
      *(_DWORD *)(((v3 + 240) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 240) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 271) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 16 + 31) & 7) >= *(_BYTE *)(((v3 + 271) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 240, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 240),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/json_tool.cpp",
        "parseJsonFile",
        72);
      v42 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 240),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v43 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              v42,
              (const char (*)[27])"newCharReader fails, path:");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v43, json_path);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 240));
      *(_DWORD *)(((v3 + 240) >> 3) + 0x7FFF8000) = -117901064;
      v2 = 0;
    }
    else
    {
      *(_DWORD *)(((v3 + 304) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v3 + 32);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v3 + 304),
        byte_1A0D8BA0,
        (const std::allocator<char> *)(v3 + 32));
      std::allocator<char>::~allocator(v3 + 32);
      *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
      v44 = (unsigned __int64)std::unique_ptr<Json::CharReader>::operator->((const std::unique_ptr<Json::CharReader> *const)(v3 + 48));
      if ( *(_BYTE *)((v44 >> 3) + 0x7FFF8000) )
        v44 = __asan_report_load8(v44);
      v45 = *(_QWORD *)v44 + 16LL;
      if ( *(_BYTE *)((v45 >> 3) + 0x7FFF8000) )
        v44 = __asan_report_load8(*(_QWORD *)v44 + 16LL);
      if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64, const char *, const char *, Json::Value *, unsigned __int64))v45)(
             v44,
             begin,
             end,
             root,
             v3 + 304) != 1 )
      {
        *(_DWORD *)(((v3 + 368) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 368) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 399) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 113) & 7) >= *(_BYTE *)(((v3 + 399) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 368, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 368),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/json_tool.cpp",
          "parseJsonFile",
          80);
        v46 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 368),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v47 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                v46,
                (const char (*)[19])"json parse fails: ");
        v48 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v47, json_path);
        v49 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v48, (const char (*)[9])", error:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v49, (const std::string *)(v3 + 304));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 368));
        *(_DWORD *)(((v3 + 368) >> 3) + 0x7FFF8000) = -117901064;
        v2 = 0;
        v51 = 0;
      }
      else
      {
        v51 = 1;
      }
      std::string::~string((void *)(v3 + 304));
      *(_DWORD *)(((v3 + 304) >> 3) + 0x7FFF8000) = -117901064;
      if ( v51 == 1 )
        v2 = 1;
    }
    std::unique_ptr<Json::CharReader>::~unique_ptr((std::unique_ptr<Json::CharReader> *const)(v3 + 48));
    Json::CharReaderBuilder::~CharReaderBuilder((Json::CharReaderBuilder *const)(v3 + 1376));
    std::string::~string((void *)(v3 + 176));
    std::ostringstream::~ostringstream(v3 + 1456);
  }
  std::ifstream::~ifstream(v3 + 1904);
  if ( v54 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF80A4) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 172) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v3 >> 3) + 0x7FFF80B0) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF80E4) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF80EC) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF812C) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8134) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF813C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_6(v3, 2560LL, v54);
  }
  return v2;
};

// Line 93: range 000000000CCEEDA8-000000000CCEF2B5
void __cdecl ovrrideJsonValue(Json::Value *from_jval, Json::Value *to_jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool v5; // al
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rax
  Json::ValueIterator::reference value; // [rsp+10h] [rbp-140h]
  Json::Value *to_value; // [rsp+18h] [rbp-138h]
  char v10[304]; // [rsp+20h] [rbp-130h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 16 7 cit:103 80 16 9 <unknown> 112 32 11 key_str:109 176 40 7 key:105";
  *(_QWORD *)(v2 + 16) = ovrrideJsonValue;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = 62194;
  v4[536862723] = 62194;
  v4[536862724] = -219021312;
  v4[536862725] = 62194;
  v4[536862726] = -218103808;
  v4[536862727] = -202116109;
  if ( Json::Value::type((const Json::Value_0 *const)to_jval) )
  {
    if ( Json::Value::type((const Json::Value_0 *const)to_jval) == objectValue )
    {
      if ( *(_WORD *)(((v2 + 48) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      Json::Value::begin((Json::Value_0 *const)from_jval);
      while ( 1 )
      {
        *(_WORD *)(((v2 + 80) >> 3) + 0x7FFF8000) = 0;
        if ( *(_WORD *)(((v2 + 80) >> 3) + 0x7FFF8000) )
          __asan_report_store16();
        Json::Value::end((Json::Value_0 *const)from_jval);
        v5 = Json::ValueIteratorBase::operator!=(
               (const Json::ValueIteratorBase *const)(v2 + 48),
               (const Json::ValueIteratorBase::SelfType *)(v2 + 80));
        *(_WORD *)(((v2 + 80) >> 3) + 0x7FFF8000) = -1800;
        if ( !v5 )
          break;
        v6 = ((v2 + 176) >> 3) + 2147450880;
        *(_DWORD *)v6 = 0;
        *(_BYTE *)(v6 + 4) = 0;
        if ( *(char *)(((v2 + 176) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 215) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 80 + 39) & 7) >= *(_BYTE *)(((v2 + 215) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 176, 40LL);
        }
        Json::ValueIteratorBase::key((Json::ValueIteratorBase *)(v2 + 176));
        value = Json::ValueIterator::operator*((Json::ValueIterator *const)(v2 + 48));
        if ( !Json::Value::isNull((const Json::Value_0 *const)value) )
        {
          *(_DWORD *)(((v2 + 112) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 112) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 143) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 113) & 7) >= *(_BYTE *)(((v2 + 143) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 112, 32LL);
          }
          Json::Value::asString[abi:cxx11]((Json::String *)(v2 + 112), (Json::Value_0 *)(v2 + 176));
          if ( !std::operator==<char>((const std::string *)(v2 + 112), "Default") )
          {
            to_value = (Json::Value *)Json::Value::operator[](
                                        (Json::Value_0 *const)to_jval,
                                        (const Json::String *)(v2 + 112));
            if ( Json::Value::isNull((const Json::Value_0 *const)to_value) )
              Json::Value::operator=(to_value);
            else
              ovrrideJsonValue(value, to_value);
          }
          std::string::~string((void *)(v2 + 112));
        }
        Json::Value::~Value((Json::Value_0 *const)(v2 + 176));
        v7 = ((v2 + 176) >> 3) + 2147450880;
        *(_DWORD *)v7 = -117901064;
        *(_BYTE *)(v7 + 4) = -8;
        *(_DWORD *)(((v2 + 112) >> 3) + 0x7FFF8000) = -117901064;
        Json::ValueIterator::operator++((Json::ValueIterator *const)(v2 + 48));
      }
    }
  }
  else
  {
    Json::Value::operator=(to_jval);
  }
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 121: range 000000000CCEF2B6-000000000CCEF852
bool __cdecl overrideDefault(Json::Value *jval)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  bool result; // al
  bool v5; // al
  unsigned __int64 v6; // rax
  Json::Value *v7; // rdx
  unsigned __int64 v8; // rax
  Json::Value *default_val_ptr; // [rsp+10h] [rbp-180h]
  char v10[368]; // [rsp+20h] [rbp-170h] BYREF

  v1 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_3(320LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "6 32 1 9 <unknown> 48 16 7 cit:125 80 16 9 <unknown> 112 32 9 <unknown> 176 32 11 key_str:128 24"
                        "0 40 12 key_jval:127";
  *(_QWORD *)(v1 + 16) = overrideDefault;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61953;
  v3[536862722] = 62194;
  v3[536862723] = 62194;
  v3[536862724] = -219021312;
  v3[536862725] = 62194;
  v3[536862726] = -219021312;
  v3[536862727] = 62194;
  v3[536862728] = -218103808;
  v3[536862729] = -202116109;
  std::allocator<char>::allocator(v1 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 112),
    "Default",
    (const std::allocator<char> *)(v1 + 32));
  default_val_ptr = jsonValueFind(jval, (const std::string *)(v1 + 112));
  std::string::~string((void *)(v1 + 112));
  *(_DWORD *)(((v1 + 112) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 32);
  *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( default_val_ptr )
  {
    *(_WORD *)(((v1 + 48) >> 3) + 0x7FFF8000) = 0;
    if ( *(_WORD *)(((v1 + 48) >> 3) + 0x7FFF8000) )
      __asan_report_store16();
    Json::Value::begin((Json::Value_0 *const)jval);
    while ( 1 )
    {
      *(_WORD *)(((v1 + 80) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v1 + 80) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      Json::Value::end((Json::Value_0 *const)jval);
      v5 = Json::ValueIteratorBase::operator!=(
             (const Json::ValueIteratorBase *const)(v1 + 48),
             (const Json::ValueIteratorBase::SelfType *)(v1 + 80));
      *(_WORD *)(((v1 + 80) >> 3) + 0x7FFF8000) = -1800;
      if ( !v5 )
        break;
      v6 = ((v1 + 240) >> 3) + 2147450880;
      *(_DWORD *)v6 = 0;
      *(_BYTE *)(v6 + 4) = 0;
      if ( *(char *)(((v1 + 240) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v1 + 279) >> 3) + 0x7FFF8000) != 0
        && (char)((v1 - 16 + 39) & 7) >= *(_BYTE *)(((v1 + 279) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v1 + 240, 40LL);
      }
      Json::ValueIteratorBase::key((Json::ValueIteratorBase *)(v1 + 240));
      *(_DWORD *)(((v1 + 176) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v1 + 176) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v1 + 207) >> 3) + 0x7FFF8000) != 0
        && (char)((v1 - 49) & 7) >= *(_BYTE *)(((v1 + 207) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v1 + 176, 32LL);
      }
      Json::Value::asString[abi:cxx11]((Json::String *)(v1 + 176), (Json::Value_0 *)(v1 + 240));
      if ( !std::operator==<char>((const std::string *)(v1 + 176), "Default") )
      {
        v7 = Json::ValueIterator::operator*((Json::ValueIterator *const)(v1 + 48));
        ovrrideJsonValue(default_val_ptr, v7);
      }
      std::string::~string((void *)(v1 + 176));
      Json::Value::~Value((Json::Value_0 *const)(v1 + 240));
      v8 = ((v1 + 240) >> 3) + 2147450880;
      *(_DWORD *)v8 = -117901064;
      *(_BYTE *)(v8 + 4) = -8;
      *(_DWORD *)(((v1 + 176) >> 3) + 0x7FFF8000) = -117901064;
      Json::ValueIterator::operator++((Json::ValueIterator *const)(v1 + 48));
    }
    result = 1;
  }
  else
  {
    result = 1;
  }
  if ( v10 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 138: range 000000000CCEF853-000000000CCEF8B9
std::map<int,std::any> *__cdecl getEmptyAnyMap()
{
  if ( !(_BYTE)`guard variable for'getEmptyAnyMap(void)::empty_any_map
    && __cxa_guard_acquire(&`guard variable for'getEmptyAnyMap(void)::empty_any_map) )
  {
    std::map<int,std::any>::map(&getEmptyAnyMap(void)::empty_any_map);
    __cxa_guard_release(&`guard variable for'getEmptyAnyMap(void)::empty_any_map);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::map<int,std::any>::~map,
      &getEmptyAnyMap(void)::empty_any_map,
      &_dso_handle);
  }
  return &getEmptyAnyMap(void)::empty_any_map;
};

// Line 144: range 000000000CCEF8BA-000000000CCEF8D3
int32_t __cdecl getStringHash(const std::string *str)
{
  return common::tools::StringUtils::getStringHash(str);
};

// Line 149: range 000000000CCEF8D4-000000000CCEF8F7
uint64_t __cdecl getCombinedHash(uint32_t hash_value1, uint32_t hash_value2)
{
  return ((unsigned __int64)hash_value1 << 32) | hash_value2;
};

// Line 155: range 000000000CCEF8F8-000000000CCEFE62
std::vector<std::string> *__cdecl getAllDynamicKeyFromDynamicFloat[abi:cxx11](
        std::vector<std::string> *retstr,
        const data::DynamicFloat *dynamic_float)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  const std::type_info *v5; // rax
  const std::shared_ptr<BaseDFNode> *v6; // rax
  std::string *p_key; // rdx
  std::__shared_ptr_access<BinOpDFNode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<BinOpDFNode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  char v11[336]; // [rsp+10h] [rbp-150h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(288LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 48 16 12 node_ptr:166 80 16 12 node_ptr:170 112 16 15 dynamic_ptr:172 144 16 13 binop_ptr:178 176 80 5 q:157";
  *(_QWORD *)(v2 + 16) = getAllDynamicKeyFromDynamicFloat[abi:cxx11];
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = 62194;
  v4[536862723] = 62194;
  v4[536862724] = 62194;
  v4[536862725] = 62194;
  v4[536862728] = -202116109;
  std::vector<std::string>::vector(retstr);
  std::queue<std::shared_ptr<BaseDFNode>>::queue<std::deque<std::shared_ptr<BaseDFNode>>,void>((std::queue<std::shared_ptr<BaseDFNode>> *const)(v2 + 176));
  if ( std::any::has_value(&dynamic_float->impl) )
  {
    v5 = std::any::type(&dynamic_float->impl);
    if ( !std::type_info::operator!=(v5, (const std::type_info *)&`typeinfo for'std::shared_ptr<BaseDFNode>) )
    {
      if ( *(_WORD *)(((v2 + 48) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      std::any_cast<std::shared_ptr<BaseDFNode>>((const std::any *)(v2 + 48));
      std::queue<std::shared_ptr<BaseDFNode>>::push(
        (std::queue<std::shared_ptr<BaseDFNode>> *const)(v2 + 176),
        (const std::queue<std::shared_ptr<BaseDFNode>>::value_type *)(v2 + 48));
      while ( !std::queue<std::shared_ptr<BaseDFNode>>::empty((const std::queue<std::shared_ptr<BaseDFNode>> *const)(v2 + 176)) )
      {
        *(_WORD *)(((v2 + 80) >> 3) + 0x7FFF8000) = 0;
        v6 = std::queue<std::shared_ptr<BaseDFNode>>::front((std::queue<std::shared_ptr<BaseDFNode>> *const)(v2 + 176));
        std::shared_ptr<BaseDFNode>::shared_ptr((std::shared_ptr<BaseDFNode> *const)(v2 + 80), v6);
        std::queue<std::shared_ptr<BaseDFNode>>::pop((std::queue<std::shared_ptr<BaseDFNode>> *const)(v2 + 176));
        *(_WORD *)(((v2 + 112) >> 3) + 0x7FFF8000) = 0;
        if ( *(_WORD *)(((v2 + 112) >> 3) + 0x7FFF8000) )
          __asan_report_store16();
        std::dynamic_pointer_cast<DynamicDFNode,BaseDFNode>((const std::shared_ptr<BaseDFNode> *)(v2 + 112));
        if ( std::operator!=<DynamicDFNode>((const std::shared_ptr<DynamicDFNode> *)(v2 + 112), 0LL) )
        {
          p_key = &std::__shared_ptr_access<DynamicDFNode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DynamicDFNode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112))->key;
          std::vector<std::string>::emplace_back<std::string&>(retstr, p_key, p_key);
        }
        else
        {
          *(_WORD *)(((v2 + 144) >> 3) + 0x7FFF8000) = 0;
          if ( *(_WORD *)(((v2 + 144) >> 3) + 0x7FFF8000) )
            __asan_report_store16();
          std::dynamic_pointer_cast<BinOpDFNode,BaseDFNode>((const std::shared_ptr<BaseDFNode> *)(v2 + 144));
          if ( std::operator!=<BinOpDFNode>((const std::shared_ptr<BinOpDFNode> *)(v2 + 144), 0LL) )
          {
            v8 = std::__shared_ptr_access<BinOpDFNode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BinOpDFNode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
            std::queue<std::shared_ptr<BaseDFNode>>::push(
              (std::queue<std::shared_ptr<BaseDFNode>> *const)(v2 + 176),
              &v8->left_ptr);
            v9 = std::__shared_ptr_access<BinOpDFNode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BinOpDFNode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
            std::queue<std::shared_ptr<BaseDFNode>>::push(
              (std::queue<std::shared_ptr<BaseDFNode>> *const)(v2 + 176),
              &v9->right_ptr);
          }
          std::shared_ptr<BinOpDFNode>::~shared_ptr((std::shared_ptr<BinOpDFNode> *const)(v2 + 144));
        }
        std::shared_ptr<DynamicDFNode>::~shared_ptr((std::shared_ptr<DynamicDFNode> *const)(v2 + 112));
        std::shared_ptr<BaseDFNode>::~shared_ptr((std::shared_ptr<BaseDFNode> *const)(v2 + 80));
        *(_WORD *)(((v2 + 80) >> 3) + 0x7FFF8000) = -1800;
        *(_WORD *)(((v2 + 112) >> 3) + 0x7FFF8000) = -1800;
        *(_WORD *)(((v2 + 144) >> 3) + 0x7FFF8000) = -1800;
      }
      std::shared_ptr<BaseDFNode>::~shared_ptr((std::shared_ptr<BaseDFNode> *const)(v2 + 48));
    }
  }
  std::queue<std::shared_ptr<BaseDFNode>>::~queue((std::queue<std::shared_ptr<BaseDFNode>> *const)(v2 + 176));
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = -168430091;
  }
  return retstr;
};
