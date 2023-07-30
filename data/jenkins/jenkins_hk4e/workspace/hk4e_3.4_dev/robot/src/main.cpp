// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/robot/src/main.cpp

// Line 24: range 00000000004E1158-00000000004E1172
void __cdecl RobotGroup::RobotGroup(RobotGroup *const this)
{
  std::vector<std::shared_ptr<Robot>>::vector(&this->robot_vec_);
};

// Line 24: range 00000000008F2D18-00000000008F2D3D
void __cdecl RobotGroup::RobotGroup(RobotGroup *const this, RobotGroup *a2)
{
  std::vector<std::shared_ptr<Robot>>::vector(&this->robot_vec_, &a2->robot_vec_);
};

// Line 24: range 000000000063A8FA-000000000063A91F
void __cdecl RobotGroup::RobotGroup(RobotGroup *const this, const RobotGroup *a2)
{
  std::vector<std::shared_ptr<Robot>>::vector(&this->robot_vec_, &a2->robot_vec_);
};

// Line 24: range 00000000004E1174-00000000004E118E
void __cdecl RobotGroup::~RobotGroup(RobotGroup *const this)
{
  std::vector<std::shared_ptr<Robot>>::~vector(&this->robot_vec_);
};

// Line 28: range 00000000004E0A86-00000000004E0A93
std::vector<std::shared_ptr<Robot>> *__cdecl RobotGroup::getRobotVec(RobotGroup *const this)
{
  return &this->robot_vec_;
};

// Line 30: range 00000000004E0A94-00000000004E0E21
void __cdecl RobotGroup::enetThread(RobotGroup *const this)
{
  Robot *v1; // rax
  std::__shared_ptr_access<Robot,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  Robot *v3; // rax
  Robot *v4; // rax
  std::__shared_ptr_access<Robot,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  Robot *v6; // rax
  bool is_all_finished; // [rsp+17h] [rbp-89h]
  uint32_t sleep_count; // [rsp+18h] [rbp-88h]
  uint32_t stop_count; // [rsp+1Ch] [rbp-84h]
  std::vector<std::shared_ptr<Robot>>::iterator __for_begin; // [rsp+20h] [rbp-80h] BYREF
  std::vector<std::shared_ptr<Robot>>::iterator __for_end; // [rsp+28h] [rbp-78h] BYREF
  std::vector<std::shared_ptr<Robot>> *__for_range; // [rsp+30h] [rbp-70h]
  RobotPtr *robot_ptr; // [rsp+38h] [rbp-68h]
  std::vector<std::shared_ptr<Robot>> *__for_range_0; // [rsp+40h] [rbp-60h]
  std::vector<std::shared_ptr<Robot>> *__for_range_1; // [rsp+48h] [rbp-58h]
  std::vector<std::shared_ptr<Robot>> *__for_range_2; // [rsp+50h] [rbp-50h]
  RobotPtr *robot_ptr_2; // [rsp+58h] [rbp-48h]
  RobotPtr *robot_ptr_1; // [rsp+60h] [rbp-40h]
  RobotPtr *robot_ptr_0; // [rsp+68h] [rbp-38h]
  common::milog::MiLogStream v20; // [rsp+70h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v20,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/main.cpp",
    "enetThread",
    32);
  common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v20, (const char (*)[18])"enter enet thread");
  common::milog::MiLogStream::~MiLogStream(&v20);
  while ( !g_shutdown )
  {
    is_all_finished = 1;
    __for_range = &this->robot_vec_;
    __for_begin._M_current = std::vector<std::shared_ptr<Robot>>::begin(&this->robot_vec_)._M_current;
    __for_end._M_current = std::vector<std::shared_ptr<Robot>>::end(__for_range)._M_current;
    while ( __gnu_cxx::operator!=<std::shared_ptr<Robot> *,std::vector<std::shared_ptr<Robot>>>(
              &__for_begin,
              &__for_end) )
    {
      robot_ptr = __gnu_cxx::__normal_iterator<std::shared_ptr<Robot> *,std::vector<std::shared_ptr<Robot>>>::operator*(&__for_begin);
      v1 = std::__shared_ptr_access<Robot,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Robot,(__gnu_cxx::_Lock_policy)2,false,false> *const)robot_ptr);
      Robot::runEnet(v1);
      v2 = std::__shared_ptr_access<Robot,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Robot,(__gnu_cxx::_Lock_policy)2,false,false> *const)robot_ptr);
      if ( !Robot::isFinished(v2) )
        is_all_finished = 0;
      __gnu_cxx::__normal_iterator<std::shared_ptr<Robot> *,std::vector<std::shared_ptr<Robot>>>::operator++(&__for_begin);
    }
    if ( is_all_finished )
      break;
    usleep(0x3E8u);
  }
  __for_range_0 = &this->robot_vec_;
  __for_begin._M_current = std::vector<std::shared_ptr<Robot>>::begin(&this->robot_vec_)._M_current;
  __for_end._M_current = std::vector<std::shared_ptr<Robot>>::end(__for_range_0)._M_current;
  while ( __gnu_cxx::operator!=<std::shared_ptr<Robot> *,std::vector<std::shared_ptr<Robot>>>(&__for_begin, &__for_end) )
  {
    robot_ptr_0 = __gnu_cxx::__normal_iterator<std::shared_ptr<Robot> *,std::vector<std::shared_ptr<Robot>>>::operator*(&__for_begin);
    v3 = std::__shared_ptr_access<Robot,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Robot,(__gnu_cxx::_Lock_policy)2,false,false> *const)robot_ptr_0);
    Robot::stop(v3);
    __gnu_cxx::__normal_iterator<std::shared_ptr<Robot> *,std::vector<std::shared_ptr<Robot>>>::operator++(&__for_begin);
  }
  sleep_count = 0;
  while ( 1 )
  {
    stop_count = 0;
    __for_range_1 = &this->robot_vec_;
    __for_begin._M_current = std::vector<std::shared_ptr<Robot>>::begin(&this->robot_vec_)._M_current;
    __for_end._M_current = std::vector<std::shared_ptr<Robot>>::end(__for_range_1)._M_current;
    while ( __gnu_cxx::operator!=<std::shared_ptr<Robot> *,std::vector<std::shared_ptr<Robot>>>(
              &__for_begin,
              &__for_end) )
    {
      robot_ptr_1 = __gnu_cxx::__normal_iterator<std::shared_ptr<Robot> *,std::vector<std::shared_ptr<Robot>>>::operator*(&__for_begin);
      v4 = std::__shared_ptr_access<Robot,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Robot,(__gnu_cxx::_Lock_policy)2,false,false> *const)robot_ptr_1);
      Robot::runEnet(v4);
      v5 = std::__shared_ptr_access<Robot,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Robot,(__gnu_cxx::_Lock_policy)2,false,false> *const)robot_ptr_1);
      if ( Robot::getStatus(v5) != STATUS_RUNNING )
        ++stop_count;
      __gnu_cxx::__normal_iterator<std::shared_ptr<Robot> *,std::vector<std::shared_ptr<Robot>>>::operator++(&__for_begin);
    }
    if ( stop_count >= std::vector<std::shared_ptr<Robot>>::size(&this->robot_vec_) )
      break;
    if ( ++sleep_count > 0x3E8 )
      break;
    usleep(0x3E8u);
  }
  __for_range_2 = &this->robot_vec_;
  __for_begin._M_current = std::vector<std::shared_ptr<Robot>>::begin(&this->robot_vec_)._M_current;
  __for_end._M_current = std::vector<std::shared_ptr<Robot>>::end(__for_range_2)._M_current;
  while ( __gnu_cxx::operator!=<std::shared_ptr<Robot> *,std::vector<std::shared_ptr<Robot>>>(&__for_begin, &__for_end) )
  {
    robot_ptr_2 = __gnu_cxx::__normal_iterator<std::shared_ptr<Robot> *,std::vector<std::shared_ptr<Robot>>>::operator*(&__for_begin);
    v6 = std::__shared_ptr_access<Robot,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Robot,(__gnu_cxx::_Lock_policy)2,false,false> *const)robot_ptr_2);
    Robot::onExit(v6);
    __gnu_cxx::__normal_iterator<std::shared_ptr<Robot> *,std::vector<std::shared_ptr<Robot>>>::operator++(&__for_begin);
  }
  common::milog::MiLogStream::create(
    &v20,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/main.cpp",
    "enetThread",
    67);
  common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v20, (const char (*)[17])"exit enet thread");
  common::milog::MiLogStream::~MiLogStream(&v20);
};

// Line 78: range 0000000000439C24-0000000000439FCB
void __fastcall signal_handler(int sig)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  int v4; // eax
  common::milog::MiLogStream *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  __int64 val; // [rsp+18h] [rbp-88h] BYREF
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-80h] BYREF
  char v12[96]; // [rsp+40h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 6 sig:77";
  *(_QWORD *)(v1 + 16) = signal_handler;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  *(_DWORD *)(v1 + 32) = sig;
  v4 = *(_DWORD *)(v1 + 32);
  if ( v4 == 15 )
  {
    g_shutdown = 1;
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/main.cpp",
      "signal_handler",
      101);
    v8 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v11, (const char (*)[19])"catch sig SIGTERM ");
    common::milog::MiLogStream::operator<<<int,(int *)0>(v8, (const int *)(v1 + 32));
    common::milog::MiLogStream::~MiLogStream(&v11);
  }
  else
  {
    if ( v4 <= 15 )
    {
      switch ( v4 )
      {
        case 14:
          common::milog::MiLogStream::create(
            &v11,
            &common::milog::MiLogDefault::default_log_obj_,
            2u,
            "./src/main.cpp",
            "signal_handler",
            83);
          v5 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                 &v11,
                 (const char (*)[14])"Current Time:");
          val = common::tools::TimeUtils::getNow();
          common::milog::MiLogStream::operator<<<long,(long *)0>(v5, &val);
          common::milog::MiLogStream::~MiLogStream(&v11);
          goto LABEL_15;
        case 1:
          g_shutdown = 1;
          common::milog::MiLogStream::create(
            &v11,
            &common::milog::MiLogDefault::default_log_obj_,
            2u,
            "./src/main.cpp",
            "signal_handler",
            95);
          v7 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                 &v11,
                 (const char (*)[18])"catch sig SIGHUP ");
          common::milog::MiLogStream::operator<<<int,(int *)0>(v7, (const int *)(v1 + 32));
          common::milog::MiLogStream::~MiLogStream(&v11);
          goto LABEL_15;
        case 2:
          g_shutdown = 1;
          common::milog::MiLogStream::create(
            &v11,
            &common::milog::MiLogDefault::default_log_obj_,
            2u,
            "./src/main.cpp",
            "signal_handler",
            89);
          v6 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                 &v11,
                 (const char (*)[18])"catch sig SIGINT:");
          common::milog::MiLogStream::operator<<<int,(int *)0>(v6, (const int *)(v1 + 32));
          common::milog::MiLogStream::~MiLogStream(&v11);
          goto LABEL_15;
      }
    }
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/main.cpp",
      "signal_handler",
      106);
    v9 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v11, (const char (*)[11])"catch sig ");
    common::milog::MiLogStream::operator<<<int,(int *)0>(v9, (const int *)(v1 + 32));
    common::milog::MiLogStream::~MiLogStream(&v11);
  }
LABEL_15:
  if ( v12 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 114: range 0000000000439FCC-000000000043A00E
void __cdecl print_usage()
{
  puts("usage:");
  puts(aRobotC);
  puts(asc_DEB0DE0);
  puts(aV_1);
  puts(asc_DEB0E80);
};

// Line 140: range 000000000043A00F-000000000043E11A
int __cdecl main(int argc, const char **argv, const char **envp)
{
  int v3; // r14d
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  unsigned __int64 v7; // rax
  bool v8; // r15
  common::milog::MiLogStream *v9; // rax
  _BOOL4 v10; // r15d
  char v11; // r15
  common::milog::MiLogStream *v12; // rax
  _BOOL4 v13; // r15d
  _BOOL4 v14; // r15d
  _BOOL4 v16; // r15d
  Config *v17; // r15
  unsigned int v18; // edx
  RobotReporter *v19; // r15
  RobotReporter *v20; // r15
  int v21; // r15d
  unsigned int v22; // r15d
  bool v23; // r15
  const char *v24; // rdx
  int v25; // r15d
  std::vector<unsigned int>::size_type v26; // r15
  const std::set<unsigned int>::value_type *v27; // rsi
  unsigned int *v28; // rax
  uint32_t *v29; // rdx
  int v30; // r15d
  std::vector<User>::size_type v31; // r15
  Robot *v33; // rdi
  int v34; // r15d
  int v35; // r15d
  std::vector<std::shared_ptr<Robot>>::size_type v36; // rax
  RobotReporter *v37; // r15
  RobotReporter *v38; // r15
  Robot *v39; // rdi
  int v40; // r15d
  std::vector<std::shared_ptr<Robot>>::size_type v41; // rax
  std::vector<RobotGroup>::size_type v42; // rax
  std::vector<RobotGroup>::size_type v43; // r15
  std::__shared_ptr_access<Robot,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v44; // rax
  common::milog::MiLogStream *v45; // r15
  std::__shared_ptr_access<Robot,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v46; // rax
  const User *v47; // rax
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // r15
  std::__shared_ptr_access<Robot,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v50; // rax
  std::__shared_ptr_access<Robot,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v51; // rax
  RobotReporter *v52; // r15
  RobotReporter *v53; // r15
  RobotReporter *v54; // r15
  int v55; // r15d
  ReporterReqRspHelper *v56; // rax
  ReporterNZeroHelper *v57; // rax
  RobotReporter *v58; // r15
  RobotReporter *v59; // rax
  Reporter *v60; // rax
  __m128i v62; // [rsp+0h] [rbp-AA0h] BYREF
  char *v63; // [rsp+10h] [rbp-A90h]
  uint32_t value[2]; // [rsp+18h] [rbp-A88h]
  char **argva; // [rsp+20h] [rbp-A80h]
  int argca; // [rsp+2Ch] [rbp-A74h]
  std::allocator<char> v67; // [rsp+36h] [rbp-A6Ah] BYREF
  std::allocator<char> __a; // [rsp+37h] [rbp-A69h] BYREF
  int32_t ret; // [rsp+38h] [rbp-A68h]
  uint32_t round; // [rsp+3Ch] [rbp-A64h]
  uint32_t i; // [rsp+40h] [rbp-A60h]
  uint32_t idx; // [rsp+44h] [rbp-A5Ch]
  uint32_t idx_0; // [rsp+48h] [rbp-A58h]
  uint32_t i_0; // [rsp+4Ch] [rbp-A54h]
  uint32_t fail_num; // [rsp+50h] [rbp-A50h]
  int opt; // [rsp+54h] [rbp-A4Ch]
  uint32_t thread_num; // [rsp+58h] [rbp-A48h]
  uint32_t rounds; // [rsp+5Ch] [rbp-A44h]
  uint32_t group_size; // [rsp+60h] [rbp-A40h]
  uint32_t type; // [rsp+64h] [rbp-A3Ch]
  uint32_t min_uid; // [rsp+68h] [rbp-A38h]
  uint32_t max_uid; // [rsp+6Ch] [rbp-A34h]
  uint32_t uid; // [rsp+70h] [rbp-A30h]
  uint32_t num; // [rsp+74h] [rbp-A2Ch]
  std::vector<std::string>::iterator __for_begin; // [rsp+78h] [rbp-A28h] BYREF
  std::vector<std::string>::iterator __for_end; // [rsp+80h] [rbp-A20h] BYREF
  std::list<std::pair<std::string,common::tools::PTree>>::iterator __for_begin_0; // [rsp+88h] [rbp-A18h] BYREF
  std::list<std::pair<std::string,common::tools::PTree>>::iterator __for_end_0; // [rsp+90h] [rbp-A10h] BYREF
  std::set<unsigned int>::iterator __for_begin_1; // [rsp+98h] [rbp-A08h] BYREF
  std::set<unsigned int>::iterator __for_end_1; // [rsp+A0h] [rbp-A00h] BYREF
  std::vector<std::string> *__for_range; // [rsp+A8h] [rbp-9F8h]
  std::string *script_file; // [rsp+B0h] [rbp-9F0h]
  std::list<std::pair<std::string,common::tools::PTree>> *__for_range_0; // [rsp+B8h] [rbp-9E8h]
  std::vector<std::shared_ptr<Robot>> *__for_range_2; // [rsp+C0h] [rbp-9E0h]
  std::vector<std::shared_ptr<Robot>> *__for_range_3; // [rsp+C8h] [rbp-9D8h]
  RobotPtr *robot_ptr_0; // [rsp+D0h] [rbp-9D0h]
  RobotGroup *group; // [rsp+D8h] [rbp-9C8h]
  RobotPtr *robot_ptr; // [rsp+E0h] [rbp-9C0h]
  std::vector<std::shared_ptr<Robot>> *tmp_robot_vec; // [rsp+E8h] [rbp-9B8h]
  std::pair<std::string,common::tools::PTree> *__in; // [rsp+F0h] [rbp-9B0h]
  std::tuple_element<0,std::pair<std::string,common::tools::PTree> >::type *key; // [rsp+F8h] [rbp-9A8h]
  std::tuple_element<1,std::pair<std::string,common::tools::PTree> >::type *data; // [rsp+100h] [rbp-9A0h]
  std::set<unsigned int> *__for_range_1; // [rsp+108h] [rbp-998h]
  User *user; // [rsp+110h] [rbp-990h]
  std::string path; // [rsp+120h] [rbp-980h] BYREF
  std::string v106; // [rsp+140h] [rbp-960h] BYREF
  std::string v107; // [rsp+160h] [rbp-940h] BYREF
  std::string v108; // [rsp+180h] [rbp-920h] BYREF
  std::string v109; // [rsp+1A0h] [rbp-900h] BYREF
  std::string v110; // [rsp+1C0h] [rbp-8E0h] BYREF
  std::string v111; // [rsp+1E0h] [rbp-8C0h] BYREF
  std::string v112; // [rsp+200h] [rbp-8A0h] BYREF
  std::string v113; // [rsp+220h] [rbp-880h] BYREF
  std::string __str; // [rsp+240h] [rbp-860h] BYREF
  std::string v115; // [rsp+260h] [rbp-840h] BYREF
  std::string v116; // [rsp+280h] [rbp-820h] BYREF
  std::string v117; // [rsp+2A0h] [rbp-800h] BYREF
  std::string v118; // [rsp+2C0h] [rbp-7E0h] BYREF
  std::string v119; // [rsp+2E0h] [rbp-7C0h] BYREF
  std::string v120; // [rsp+300h] [rbp-7A0h] BYREF
  std::string v121; // [rsp+320h] [rbp-780h] BYREF
  std::string v122; // [rsp+340h] [rbp-760h] BYREF
  std::string v123; // [rsp+360h] [rbp-740h] BYREF
  std::string v124; // [rsp+380h] [rbp-720h] BYREF
  std::string p_default_value; // [rsp+3A0h] [rbp-700h] BYREF
  common::milog::MiLogStream v126; // [rsp+3C0h] [rbp-6E0h] BYREF
  std::filesystem::__cxx11::path __p; // [rsp+3E0h] [rbp-6C0h] BYREF
  char v128[1680]; // [rsp+410h] [rbp-690h] BYREF

  argca = argc;
  argva = (char **)argv;
  v4 = (unsigned __int64)v128;
  v63 = v128;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_5(1632LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "24 48 4 7 idx:361 64 8 6 pt:223 96 8 13 thread_pt:227 128 8 12 robot_pt:236 160 8 10 log_pt:257 "
                        "192 8 17 robot_list_pt:269 224 16 14 config_ptr:271 256 16 10 rsa_pt:294 288 16 13 robot_ptr:392"
                        " 320 24 14 script_vec:300 384 24 22 robot_list_pt_list:304 448 24 12 user_vec:320 512 24 9 group"
                        ":420 576 32 15 config_file:167 640 32 12 lua_file:205 704 32 16 reset_script:242 768 32 17 robot"
                        "_str_sum:306 832 32 13 robot_str:313 896 32 12 port_str:323 960 32 15 account_uid:329 1024 32 12"
                        " uid_list:359 1088 48 11 uid_set:360 1168 80 8 user:376 1280 280 8 conf:237";
  *(_QWORD *)(v4 + 16) = main;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -218959360;
  v6[536862723] = -218959360;
  v6[536862724] = -218959360;
  v6[536862725] = -218959360;
  v6[536862726] = -218959360;
  v6[536862727] = -219021312;
  v6[536862728] = -219021312;
  v6[536862729] = -219021312;
  v6[536862730] = -234881024;
  v6[536862731] = -218959118;
  v6[536862732] = -234881024;
  v6[536862733] = -218959118;
  v6[536862734] = -234881024;
  v6[536862735] = -218959118;
  v6[536862736] = -234881024;
  v6[536862737] = -218959118;
  v6[536862739] = -218959118;
  v6[536862741] = -218959118;
  v6[536862743] = -218959118;
  v6[536862745] = -218959118;
  v6[536862747] = -218959118;
  v6[536862749] = -218959118;
  v6[536862751] = -218959118;
  v6[536862753] = -218959118;
  v6[536862755] = -219021312;
  v6[536862756] = 62194;
  v6[536862759] = -218959118;
  v6[536862768] = -218103808;
  v6[536862769] = -202116109;
  v6[536862770] = -202116109;
  if ( argca <= 1 )
  {
    print_usage();
    v3 = 1;
    goto LABEL_171;
  }
  signal(1, signal_handler);
  signal(2, signal_handler);
  signal(13, signal_handler);
  signal(17, signal_handler);
  signal(14, signal_handler);
  signal(10, signal_handler);
  signal(3, signal_handler);
  signal(15, signal_handler);
  ProtoUtils::setShowInitLog(0);
  proto::CmdIdConfig_descriptor();
  proto::Retcode_descriptor();
  if ( ProtoUtils::init() )
  {
    common::milog::MiLogStream::create(
      &v126,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/main.cpp",
      "main",
      163);
    common::milog::MiLogStream::operator()(&v126, "init ProtoUtils failed");
    common::milog::MiLogStream::~MiLogStream(&v126);
    v3 = -1;
    goto LABEL_171;
  }
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>((std::string *const)(v4 + 576), "conf/robot.xml", &__a);
  std::allocator<char>::~allocator(&__a);
  opt = 0;
  while ( 1 )
  {
    opt = getopt(argca, argva, ":c:vh");
    if ( opt == -1 )
    {
      std::allocator<char>::allocator(&__a);
      if ( *(_BYTE *)(((unsigned __int64)&optind >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)&optind & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&optind >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&optind);
      }
      v7 = (unsigned __int64)&argva[optind];
      if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
        v7 = __asan_report_load8(&argva[optind]);
      std::string::basic_string<std::allocator<char>>((std::string *const)(v4 + 640), *(const char **)v7, &__a);
      std::allocator<char>::~allocator(&__a);
      ret = 0;
      if ( !std::string::ends_with((const std::string *const)(v4 + 640), ".lua") )
      {
        print_usage();
        v3 = 1;
LABEL_169:
        std::string::~string((std::string *const)(v4 + 640));
        goto LABEL_170;
      }
      std::filesystem::__cxx11::path::path<std::string,std::filesystem::__cxx11::path>(
        &__p,
        (const std::string *)(v4 + 640),
        auto_format);
      v8 = !std::filesystem::exists(&__p);
      std::filesystem::__cxx11::path::~path(&__p);
      if ( v8 )
      {
        common::milog::MiLogStream::create(
          &v126,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/main.cpp",
          "main",
          218);
        v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               &v126,
               (const char (*)[16])"file not exist:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, (const std::string *)(v4 + 640));
        common::milog::MiLogStream::~MiLogStream(&v126);
        v3 = 1;
        goto LABEL_169;
      }
      common::tools::PTree::PTree((common::tools::PTree *const)(v4 + 64));
      common::tools::PTree::readXml((common::tools::PTree *const)(v4 + 64), (const std::string *)(v4 + 576));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>((std::string *const)&v126, "Root.ThreadConf", &__a);
      common::tools::PTree::getChild((const common::tools::PTree *const)(v4 + 64), (const std::string *)&v126);
      std::string::~string((std::string *const)&v126);
      std::allocator<char>::~allocator(&__a);
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>((std::string *const)&v126, "<xmlattr>.thread_num", &__a);
      thread_num = common::tools::PTree::get<unsigned int>(
                     (const common::tools::PTree *const)(v4 + 96),
                     (const std::string *)&v126);
      std::string::~string((std::string *const)&v126);
      std::allocator<char>::~allocator(&__a);
      if ( !thread_num || thread_num > 0x20 )
      {
        common::milog::MiLogStream::create(
          &v126,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/main.cpp",
          "main",
          231);
        common::milog::MiLogStream::operator()(&v126, "thread_num=%u error", thread_num);
        common::milog::MiLogStream::~MiLogStream(&v126);
        v3 = 1;
        v10 = 0;
        goto LABEL_167;
      }
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>((std::string *const)&v126, "Root.RobotConf", &__a);
      common::tools::PTree::getChild((const common::tools::PTree *const)(v4 + 64), (const std::string *)&v126);
      std::string::~string((std::string *const)&v126);
      std::allocator<char>::~allocator(&__a);
      RobotConf::RobotConf((RobotConf *const)(v4 + 1280));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&path, "<xmlattr>.timeout_ms", &__a);
      *(_DWORD *)(v4 + 1316) = common::tools::PTree::get<unsigned int>(
                                 (const common::tools::PTree *const)(v4 + 128),
                                 &path,
                                 0x2710u);
      std::string::~string(&path);
      std::allocator<char>::~allocator(&__a);
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v106, "<xmlattr>.open_log", &__a);
      *(_BYTE *)(v4 + 1404) = common::tools::PTree::get<bool>((const common::tools::PTree *const)(v4 + 128), &v106, 1);
      std::string::~string(&v106);
      std::allocator<char>::~allocator(&__a);
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v107, "<xmlattr>.force_exit", &__a);
      *(_BYTE *)(v4 + 1512) = common::tools::PTree::get<bool>((const common::tools::PTree *const)(v4 + 128), &v107, 0);
      std::string::~string(&v107);
      std::allocator<char>::~allocator(&__a);
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v108, "<xmlattr>.read_data_config", &__a);
      *(_BYTE *)(v4 + 1513) = common::tools::PTree::get<bool>((const common::tools::PTree *const)(v4 + 128), &v108, 1);
      std::string::~string(&v108);
      std::allocator<char>::~allocator(&__a);
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>((std::string *const)&v126, byte_DE2A700, &__a);
      std::allocator<char>::allocator(&v67);
      std::string::basic_string<std::allocator<char>>(&v109, "<xmlattr>.reset_script", &v67);
      common::tools::PTree::get<std::string>(
        (std::string *)(v4 + 704),
        (const common::tools::PTree *const)(v4 + 128),
        &v109,
        (std::string *)&v126);
      std::string::~string(&v109);
      std::allocator<char>::~allocator(&v67);
      std::string::~string((std::string *const)&v126);
      std::allocator<char>::~allocator(&__a);
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v110, "<xmlattr>.compress", &__a);
      *(_BYTE *)(v4 + 1405) = common::tools::PTree::get<bool>((const common::tools::PTree *const)(v4 + 128), &v110, 1);
      std::string::~string(&v110);
      std::allocator<char>::~allocator(&__a);
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v111, "<xmlattr>.crc32", &__a);
      *(_BYTE *)(v4 + 1406) = common::tools::PTree::get<bool>((const common::tools::PTree *const)(v4 + 128), &v111, 1);
      std::string::~string(&v111);
      std::allocator<char>::~allocator(&__a);
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&p_default_value, byte_DE2A700, &__a);
      std::allocator<char>::allocator(&v67);
      std::string::basic_string<std::allocator<char>>(&v112, "<xmlattr>.client_version", &v67);
      common::tools::PTree::get<std::string>(
        (std::string *)&v126,
        (const common::tools::PTree *const)(v4 + 128),
        &v112,
        &p_default_value);
      std::string::operator=((std::string *const)(v4 + 1408), (std::string *)&v126);
      std::string::~string((std::string *const)&v126);
      std::string::~string(&v112);
      std::allocator<char>::~allocator(&v67);
      std::string::~string(&p_default_value);
      std::allocator<char>::~allocator(&__a);
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v113, "<xmlattr>.rounds", &__a);
      rounds = common::tools::PTree::get<unsigned int>((const common::tools::PTree *const)(v4 + 128), &v113, 1u);
      std::string::~string(&v113);
      std::allocator<char>::~allocator(&__a);
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v4 + 832),
        "<xmlattr>.use_req_rsp_helper",
        &__a);
      *(_BYTE *)(v4 + 1552) = common::tools::PTree::get<bool>(
                                (const common::tools::PTree *const)(v4 + 128),
                                (const std::string *)(v4 + 832),
                                0);
      std::string::~string((std::string *const)(v4 + 832));
      std::allocator<char>::~allocator(&__a);
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v4 + 896),
        "<xmlattr>.use_not_zero_helper",
        &__a);
      *(_BYTE *)(v4 + 1553) = common::tools::PTree::get<bool>(
                                (const common::tools::PTree *const)(v4 + 128),
                                (const std::string *)(v4 + 896),
                                0);
      std::string::~string((std::string *const)(v4 + 896));
      std::allocator<char>::~allocator(&__a);
      v11 = 0;
      LOBYTE(value[0]) = !std::string::empty((const std::string *const)(v4 + 704))
                      && (!std::string::ends_with((const std::string *const)(v4 + 704), ".lua")
                       || (std::filesystem::__cxx11::path::path<std::string,std::filesystem::__cxx11::path>(
                             &__p,
                             (const std::string *)(v4 + 704),
                             auto_format),
                           v11 = 1,
                           !std::filesystem::exists(&__p)));
      if ( v11 )
        std::filesystem::__cxx11::path::~path(&__p);
      if ( LOBYTE(value[0]) )
      {
        common::milog::MiLogStream::create(
          &v126,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/main.cpp",
          "main",
          252);
        v12 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                &v126,
                (const char (*)[22])"invalid reset_script:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v12, (const std::string *)(v4 + 704));
        common::milog::MiLogStream::~MiLogStream(&v126);
        v3 = 1;
        v13 = 0;
LABEL_166:
        std::string::~string((std::string *const)(v4 + 704));
        RobotConf::~RobotConf((RobotConf *const)(v4 + 1280));
        common::tools::PTree::~PTree((common::tools::PTree *const)(v4 + 128));
        v10 = v13;
LABEL_167:
        common::tools::PTree::~PTree((common::tools::PTree *const)(v4 + 96));
        common::tools::PTree::~PTree((common::tools::PTree *const)(v4 + 64));
        if ( v10 )
          v3 = ret;
        goto LABEL_169;
      }
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>((std::string *const)&v126, "Root.LogConf", &__a);
      common::tools::PTree::getChild((const common::tools::PTree *const)(v4 + 64), (const std::string *)&v126);
      std::string::~string((std::string *const)&v126);
      std::allocator<char>::~allocator(&__a);
      if ( common::milog::MiLog::init(
             &common::milog::MiLogDefault::default_log_obj_,
             (const common::tools::PTree *)(v4 + 160)) )
      {
        common::milog::MiLogStream::create(
          &v126,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/main.cpp",
          "main",
          260);
        common::milog::MiLogStream::operator()(&v126, "log init failed.");
        common::milog::MiLogStream::~MiLogStream(&v126);
        v3 = 1;
        v14 = 0;
LABEL_165:
        common::tools::PTree::~PTree((common::tools::PTree *const)(v4 + 160));
        v13 = v14;
        goto LABEL_166;
      }
      if ( common::milog::MiLog::startThread(&common::milog::MiLogDefault::default_log_obj_) )
      {
        common::milog::MiLogStream::create(
          &v126,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/main.cpp",
          "main",
          265);
        common::milog::MiLogStream::operator()(&v126, "start log thread failed.");
        common::milog::MiLogStream::~MiLogStream(&v126);
        v3 = 1;
        v14 = 0;
        goto LABEL_165;
      }
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>((std::string *const)&v126, "Root.RobotList", &__a);
      common::tools::PTree::getChild((const common::tools::PTree *const)(v4 + 64), (const std::string *)&v126);
      std::string::~string((std::string *const)&v126);
      std::allocator<char>::~allocator(&__a);
      std::make_shared<Config>();
      Config::config_ptr = std::__shared_ptr<Config,(__gnu_cxx::_Lock_policy)2>::get((const std::__shared_ptr<Config,(__gnu_cxx::_Lock_policy)2> *const)(v4 + 224));
      if ( *(_BYTE *)(v4 + 1513) && Config::loadDesignConfig(Config::config_ptr) )
      {
        common::milog::MiLogStream::create(
          &v126,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/main.cpp",
          "main",
          277);
        common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
          &v126,
          (const char (*)[23])"loadDesignConfig fails");
        common::milog::MiLogStream::~MiLogStream(&v126);
        v3 = 1;
        v16 = 0;
LABEL_164:
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 224));
        common::tools::PTree::~PTree((common::tools::PTree *const)(v4 + 192));
        v14 = v16;
        goto LABEL_165;
      }
      if ( Config::loadFirstPacketSecretKey(Config::config_ptr) )
      {
        common::milog::MiLogStream::create(
          &v126,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/main.cpp",
          "main",
          284);
        common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
          &v126,
          (const char (*)[20])"loadSecretKey fails");
        common::milog::MiLogStream::~MiLogStream(&v126);
        v3 = 1;
        v16 = 0;
        goto LABEL_164;
      }
      if ( Config::loadRsakey(Config::config_ptr) )
      {
        common::milog::MiLogStream::create(
          &v126,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/main.cpp",
          "main",
          291);
        common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v126, (const char (*)[18])"loadRsakey failed");
        common::milog::MiLogStream::~MiLogStream(&v126);
        v3 = 1;
        v16 = 0;
        goto LABEL_164;
      }
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>((std::string *const)&v126, "Root.RsaConf", &__a);
      common::tools::PTree::getChildOptional(
        (common::tools::PTree *)(v4 + 256),
        (const common::tools::PTree *const)(v4 + 64),
        (const std::string *)&v126);
      std::string::~string((std::string *const)&v126);
      std::allocator<char>::~allocator(&__a);
      if ( std::optional<common::tools::PTree>::has_value((const std::optional<common::tools::PTree> *const)(v4 + 256)) )
      {
        *(_QWORD *)value = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v4 + 256));
        std::allocator<char>::allocator(&__a);
        std::string::basic_string<std::allocator<char>>((std::string *const)(v4 + 960), "<xmlattr>.key_id", &__a);
        v17 = Config::config_ptr;
        v18 = common::tools::PTree::get<unsigned int>(
                *(const common::tools::PTree *const *)value,
                (const std::string *)(v4 + 960),
                1u);
        if ( *(_BYTE *)(((unsigned __int64)&v17->key_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v17->key_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_store4(&v17->key_id);
        }
        v17->key_id = v18;
        std::string::~string((std::string *const)(v4 + 960));
        std::allocator<char>::~allocator(&__a);
      }
      std::vector<std::string>::vector((std::vector<std::string> *const)(v4 + 320));
      if ( !std::string::empty((const std::string *const)(v4 + 704)) )
        std::vector<std::string>::push_back(
          (std::vector<std::string> *const)(v4 + 320),
          (const std::vector<std::string>::value_type *)(v4 + 704));
      std::vector<std::string>::push_back(
        (std::vector<std::string> *const)(v4 + 320),
        (const std::vector<std::string>::value_type *)(v4 + 640));
      common::tools::PTree::getAllChild[abi:cxx11](
        (std::list<std::pair<std::string,common::tools::PTree>> *)(v4 + 384),
        (const common::tools::PTree *const)(v4 + 192));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>((std::string *const)(v4 + 768), &byte_DEB1A40, &__a);
      std::allocator<char>::~allocator(&__a);
      v19 = MultiThreadSingleton<RobotReporter>::instance();
      common::tools::TimeUtils::getNowStr[abi:cxx11](&p_default_value);
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>((std::string *const)&v126, &byte_DEB1A80, &__a);
      RobotReporter::addProperty(v19, (const std::string *)(v4 + 768), (const std::string *)&v126, &p_default_value);
      std::string::~string((std::string *const)&v126);
      std::allocator<char>::~allocator(&__a);
      std::string::~string(&p_default_value);
      round = 1;
      while ( 2 )
      {
        if ( round > rounds )
        {
          if ( *(_BYTE *)(v4 + 1552) )
          {
            v56 = MultiThreadSingleton<ReporterReqRspHelper>::instance();
            ReporterReqRspHelper::settle(v56, (const std::string *)(v4 + 768));
          }
          if ( *(_BYTE *)(v4 + 1553) )
          {
            v57 = MultiThreadSingleton<ReporterNZeroHelper>::instance();
            ReporterNZeroHelper::settle(v57, (const std::string *)(v4 + 768));
          }
          v58 = MultiThreadSingleton<RobotReporter>::instance();
          common::tools::TimeUtils::getNowStr[abi:cxx11](&p_default_value);
          std::allocator<char>::allocator(&__a);
          std::string::basic_string<std::allocator<char>>((std::string *const)&v126, &byte_DEB2240, &__a);
          RobotReporter::addProperty(v58, (const std::string *)(v4 + 768), (const std::string *)&v126, &p_default_value);
          std::string::~string((std::string *const)&v126);
          std::allocator<char>::~allocator(&__a);
          std::string::~string(&p_default_value);
          v59 = MultiThreadSingleton<RobotReporter>::instance();
          RobotReporter::endReport(v59);
          v60 = MultiThreadSingleton<Reporter>::instance();
          Reporter::endReport(v60);
          v55 = 1;
LABEL_163:
          std::string::~string((std::string *const)(v4 + 768));
          std::list<std::pair<std::string,common::tools::PTree>>::~list((std::list<std::pair<std::string,common::tools::PTree>> *const)(v4 + 384));
          std::vector<std::string>::~vector((std::vector<std::string> *const)(v4 + 320));
          std::optional<common::tools::PTree>::~optional((std::optional<common::tools::PTree> *const)(v4 + 256));
          v16 = v55 == 1;
          goto LABEL_164;
        }
        __for_range = (std::vector<std::string> *)(v4 + 320);
        __for_begin._M_current = std::vector<std::string>::begin((std::vector<std::string> *const)(v4 + 320))._M_current;
        __for_end._M_current = std::vector<std::string>::end(__for_range)._M_current;
LABEL_72:
        if ( !__gnu_cxx::operator!=<std::string *,std::vector<std::string>>(&__for_begin, &__for_end) )
        {
LABEL_157:
          ++round;
          continue;
        }
        break;
      }
      script_file = __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator*(&__for_begin);
      common::tools::StringUtils::numToStr<unsigned int>((std::string *)(v4 + 960), round);
      std::operator+<char>((std::string *)&v126, &_lhs, (std::string *)(v4 + 960));
      std::operator+<char>((std::string *)(v4 + 832), (std::string *)&v126, _rhs);
      std::string::~string((std::string *const)&v126);
      std::string::~string((std::string *const)(v4 + 960));
      v20 = MultiThreadSingleton<RobotReporter>::instance();
      common::tools::TimeUtils::getNowStr[abi:cxx11](&p_default_value);
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>((std::string *const)&v126, &byte_DEB1B40, &__a);
      RobotReporter::addProperty(v20, (const std::string *)(v4 + 832), (const std::string *)&v126, &p_default_value);
      std::string::~string((std::string *const)&v126);
      std::allocator<char>::~allocator(&__a);
      std::string::~string(&p_default_value);
      __for_range_0 = (std::list<std::pair<std::string,common::tools::PTree>> *)(v4 + 384);
      __for_begin_0._M_node = std::list<std::pair<std::string,common::tools::PTree>>::begin((std::list<std::pair<std::string,common::tools::PTree>> *const)(v4 + 384))._M_node;
      __for_end_0._M_node = std::list<std::pair<std::string,common::tools::PTree>>::end(__for_range_0)._M_node;
      while ( 1 )
      {
        if ( !std::operator!=(&__for_begin_0, &__for_end_0) )
        {
          common::minet::KcpClientMgr::init(&kcp_client_mgr, 1u);
          common::minet::KcpClientMgr::start(&kcp_client_mgr);
          v36 = std::vector<std::shared_ptr<Robot>>::size(&robot_vec);
          group_size = (thread_num + v36 - 1) / thread_num;
          RobotGroup::RobotGroup((RobotGroup *const)(v4 + 512));
          v37 = MultiThreadSingleton<RobotReporter>::instance();
          value[0] = std::vector<std::shared_ptr<Robot>>::size(&robot_vec);
          std::allocator<char>::allocator(&__a);
          std::string::basic_string<std::allocator<char>>((std::string *const)&v126, &byte_DEB20C0, &__a);
          RobotReporter::addPropertyUp(v37, (const std::string *)(v4 + 832), (const std::string *)&v126, value[0]);
          std::string::~string((std::string *const)&v126);
          std::allocator<char>::~allocator(&__a);
          v38 = MultiThreadSingleton<RobotReporter>::instance();
          value[0] = std::vector<std::shared_ptr<Robot>>::size(&robot_vec);
          std::allocator<char>::allocator(&__a);
          std::string::basic_string<std::allocator<char>>((std::string *const)&v126, &byte_DEB20C0, &__a);
          RobotReporter::addPropertyUp(v38, (const std::string *)(v4 + 768), (const std::string *)&v126, value[0]);
          std::string::~string((std::string *const)&v126);
          std::allocator<char>::~allocator(&__a);
          __for_range_2 = &robot_vec;
          __for_begin_1._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)std::vector<std::shared_ptr<Robot>>::begin(&robot_vec)._M_current;
          __for_end_1._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)std::vector<std::shared_ptr<Robot>>::end(__for_range_2)._M_current;
          while ( __gnu_cxx::operator!=<std::shared_ptr<Robot> *,std::vector<std::shared_ptr<Robot>>>(
                    (const __gnu_cxx::__normal_iterator<std::shared_ptr<Robot>*,std::vector<std::shared_ptr<Robot>> > *)&__for_begin_1,
                    (const __gnu_cxx::__normal_iterator<std::shared_ptr<Robot>*,std::vector<std::shared_ptr<Robot>> > *)&__for_end_1) )
          {
            robot_ptr = __gnu_cxx::__normal_iterator<std::shared_ptr<Robot> *,std::vector<std::shared_ptr<Robot>>>::operator*((const __gnu_cxx::__normal_iterator<std::shared_ptr<Robot>*,std::vector<std::shared_ptr<Robot>> > *const)&__for_begin_1);
            v39 = std::__shared_ptr_access<Robot,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Robot,(__gnu_cxx::_Lock_policy)2,false,false> *const)robot_ptr);
            if ( !Robot::connect(v39) )
            {
              v3 = 1;
              v40 = 0;
              goto LABEL_148;
            }
            tmp_robot_vec = RobotGroup::getRobotVec((RobotGroup *const)(v4 + 512));
            std::vector<std::shared_ptr<Robot>>::push_back(tmp_robot_vec, robot_ptr);
            v41 = std::vector<std::shared_ptr<Robot>>::size(tmp_robot_vec);
            if ( v41 >= group_size )
            {
              std::vector<RobotGroup>::push_back(
                &robot_group_vec,
                (const std::vector<RobotGroup>::value_type *)(v4 + 512));
              std::vector<std::shared_ptr<Robot>>::clear(tmp_robot_vec);
            }
            __gnu_cxx::__normal_iterator<std::shared_ptr<Robot> *,std::vector<std::shared_ptr<Robot>>>::operator++((__gnu_cxx::__normal_iterator<std::shared_ptr<Robot>*,std::vector<std::shared_ptr<Robot>> > *const)&__for_begin_1);
          }
          v42 = std::vector<RobotGroup>::size(&robot_group_vec);
          if ( v42 != thread_num )
            std::vector<RobotGroup>::resize(&robot_group_vec, thread_num);
          for ( i_0 = 0; ; ++i_0 )
          {
            v43 = i_0;
            if ( v43 >= std::vector<RobotGroup>::size(&robot_group_vec) )
              break;
            group = std::vector<RobotGroup>::operator[](&robot_group_vec, i_0);
            v62.m128i_i64[0] = (__int64)RobotGroup::enetThread;
            v62.m128i_i64[1] = 0LL;
            *(__m128i *)(v4 + 288) = _mm_load_si128(&v62);
            std::bind<void (RobotGroup::*)(void),RobotGroup&>(
              (std::_Bind_helper<false,void (RobotGroup::*)(),RobotGroup&>::type *)&__p,
              (void (**)(RobotGroup *))(v4 + 288),
              group,
              (RobotGroup *)(v4 + 288));
            common::tools::ThreadGroup::createThread<std::_Bind<void (RobotGroup::*)(void) ()(RobotGroup)>>(
              &robot_thread_group,
              (std::_Bind<void (RobotGroup::*(RobotGroup))()> *)&__p);
            std::_Bind<void (RobotGroup::*)(void) ()(RobotGroup)>::~_Bind((std::_Bind<void (RobotGroup::*(RobotGroup))()> *const)&__p);
          }
          common::tools::ThreadGroup::joinAll(&robot_thread_group);
          fail_num = 0;
          __for_range_3 = &robot_vec;
          __for_begin_1._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)std::vector<std::shared_ptr<Robot>>::begin(&robot_vec)._M_current;
          __for_end_1._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)std::vector<std::shared_ptr<Robot>>::end(__for_range_3)._M_current;
          while ( __gnu_cxx::operator!=<std::shared_ptr<Robot> *,std::vector<std::shared_ptr<Robot>>>(
                    (const __gnu_cxx::__normal_iterator<std::shared_ptr<Robot>*,std::vector<std::shared_ptr<Robot>> > *)&__for_begin_1,
                    (const __gnu_cxx::__normal_iterator<std::shared_ptr<Robot>*,std::vector<std::shared_ptr<Robot>> > *)&__for_end_1) )
          {
            robot_ptr_0 = __gnu_cxx::__normal_iterator<std::shared_ptr<Robot> *,std::vector<std::shared_ptr<Robot>>>::operator*((const __gnu_cxx::__normal_iterator<std::shared_ptr<Robot>*,std::vector<std::shared_ptr<Robot>> > *const)&__for_begin_1);
            v44 = std::__shared_ptr_access<Robot,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Robot,(__gnu_cxx::_Lock_policy)2,false,false> *const)robot_ptr_0);
            if ( Robot::getRetcode(v44) )
            {
              common::milog::MiLogStream::create(
                &v126,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/main.cpp",
                "main",
                455);
              v45 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                      &v126,
                      (const char (*)[22])"robot run fails, uid:");
              v46 = std::__shared_ptr_access<Robot,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Robot,(__gnu_cxx::_Lock_policy)2,false,false> *const)robot_ptr_0);
              v47 = Robot::getUser(v46);
              v48 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v45, &v47->uid);
              v49 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                      v48,
                      (const char (*)[11])", retcode:");
              v50 = std::__shared_ptr_access<Robot,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Robot,(__gnu_cxx::_Lock_policy)2,false,false> *const)robot_ptr_0);
              *(_DWORD *)(v4 + 48) = Robot::getRetcode(v50);
              common::milog::MiLogStream::operator<<<int,(int *)0>(v49, (const int *)(v4 + 48));
              common::milog::MiLogStream::~MiLogStream(&v126);
              v51 = std::__shared_ptr_access<Robot,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Robot,(__gnu_cxx::_Lock_policy)2,false,false> *const)robot_ptr_0);
              ret = Robot::getRetcode(v51);
              ++fail_num;
            }
            __gnu_cxx::__normal_iterator<std::shared_ptr<Robot> *,std::vector<std::shared_ptr<Robot>>>::operator++((__gnu_cxx::__normal_iterator<std::shared_ptr<Robot>*,std::vector<std::shared_ptr<Robot>> > *const)&__for_begin_1);
          }
          common::milog::MiLogStream::create(
            &v126,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/main.cpp",
            "main",
            460);
          common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(&v126, (const char (*)[13])"all finished");
          common::milog::MiLogStream::~MiLogStream(&v126);
          std::vector<std::shared_ptr<Robot>>::clear(&robot_vec);
          std::vector<RobotGroup>::clear(&robot_group_vec);
          common::minet::KcpClientMgr::stop(&kcp_client_mgr);
          v52 = MultiThreadSingleton<RobotReporter>::instance();
          std::allocator<char>::allocator(&__a);
          std::string::basic_string<std::allocator<char>>((std::string *const)&v126, &byte_DEB21C0, &__a);
          RobotReporter::addPropertyUp(v52, (const std::string *)(v4 + 832), (const std::string *)&v126, fail_num);
          std::string::~string((std::string *const)&v126);
          std::allocator<char>::~allocator(&__a);
          v53 = MultiThreadSingleton<RobotReporter>::instance();
          std::allocator<char>::allocator(&__a);
          std::string::basic_string<std::allocator<char>>((std::string *const)&v126, &byte_DEB21C0, &__a);
          RobotReporter::addPropertyUp(v53, (const std::string *)(v4 + 768), (const std::string *)&v126, fail_num);
          std::string::~string((std::string *const)&v126);
          std::allocator<char>::~allocator(&__a);
          v54 = MultiThreadSingleton<RobotReporter>::instance();
          common::tools::TimeUtils::getNowStr[abi:cxx11](&p_default_value);
          std::allocator<char>::allocator(&__a);
          std::string::basic_string<std::allocator<char>>((std::string *const)&v126, &byte_DEB2200, &__a);
          RobotReporter::addProperty(v54, (const std::string *)(v4 + 832), (const std::string *)&v126, &p_default_value);
          std::string::~string((std::string *const)&v126);
          std::allocator<char>::~allocator(&__a);
          std::string::~string(&p_default_value);
          if ( ret )
            v40 = 1;
          else
            v40 = 2;
LABEL_148:
          RobotGroup::~RobotGroup((RobotGroup *const)(v4 + 512));
          if ( v40 )
          {
            if ( v40 == 2 )
              v35 = 2;
            else
              v35 = 1;
          }
          else
          {
            v35 = 0;
          }
LABEL_153:
          std::string::~string((std::string *const)(v4 + 832));
          if ( !v35 )
          {
            v55 = 0;
            goto LABEL_163;
          }
          if ( v35 != 2 )
            goto LABEL_157;
          __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator++(&__for_begin);
          goto LABEL_72;
        }
        __in = std::_List_iterator<std::pair<std::string,common::tools::PTree>>::operator*(&__for_begin_0);
        key = std::get<0ul,std::string,common::tools::PTree>(__in);
        data = std::get<1ul,std::string,common::tools::PTree>(__in);
        if ( !std::operator!=<char>(key, "Robot") )
          break;
LABEL_127:
        std::_List_iterator<std::pair<std::string,common::tools::PTree>>::operator++(&__for_begin_0);
      }
      std::vector<User>::vector((std::vector<User> *const)(v4 + 448));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>((std::string *const)&v126, "<xmlattr>.host", &__a);
      common::tools::PTree::get<std::string>(&__str, data, (const std::string *)&v126);
      std::string::operator=((std::string *const)(v4 + 1280), &__str);
      std::string::~string(&__str);
      std::string::~string((std::string *const)&v126);
      std::allocator<char>::~allocator(&__a);
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>((std::string *const)&v126, "<xmlattr>.port", &__a);
      common::tools::PTree::get<std::string>((std::string *)(v4 + 896), data, (const std::string *)&v126);
      std::string::~string((std::string *const)&v126);
      std::allocator<char>::~allocator(&__a);
      if ( common::tools::StringUtils::strToNum<unsigned short>(
             (const std::string *)(v4 + 896),
             (unsigned __int16 *)(v4 + 1312),
             1) )
      {
        v3 = 1;
        v21 = 0;
LABEL_120:
        std::string::~string((std::string *const)(v4 + 896));
        if ( v21 )
        {
          if ( v21 == 2 )
            v34 = 2;
          else
            v34 = 1;
        }
        else
        {
          v34 = 0;
        }
        std::vector<User>::~vector((std::vector<User> *const)(v4 + 448));
        if ( !v34 )
        {
          v35 = 0;
          goto LABEL_153;
        }
        goto LABEL_127;
      }
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>((std::string *const)&v126, "<xmlattr>.account_uid", &__a);
      common::tools::PTree::get<std::string>((std::string *)(v4 + 960), data, (const std::string *)&v126);
      std::string::~string((std::string *const)&v126);
      std::allocator<char>::~allocator(&__a);
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>((std::string *const)&v126, "<xmlattr>.account_type", &__a);
      *(_DWORD *)(v4 + 1320) = common::tools::PTree::get<unsigned int>(data, (const std::string *)&v126);
      std::string::~string((std::string *const)&v126);
      std::allocator<char>::~allocator(&__a);
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v115, "<xmlattr>.uid", &__a);
      *(_DWORD *)(v4 + 1400) = common::tools::PTree::get<unsigned int>(data, &v115, 0);
      std::string::~string(&v115);
      std::allocator<char>::~allocator(&__a);
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v116, "<xmlattr>.is_guest", &__a);
      *(_BYTE *)(v4 + 1396) = common::tools::PTree::get<bool>(data, &v116, 0);
      std::string::~string(&v116);
      std::allocator<char>::~allocator(&__a);
      v22 = *(_DWORD *)(v4 + 1320);
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v117, "<xmlattr>.channel_id", &__a);
      *(_DWORD *)(v4 + 1392) = common::tools::PTree::get<unsigned int>(data, &v117, v22);
      std::string::~string(&v117);
      std::allocator<char>::~allocator(&__a);
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&p_default_value, byte_DE2A700, &__a);
      std::allocator<char>::allocator(&v67);
      std::string::basic_string<std::allocator<char>>(&v118, "<xmlattr>.account_token", &v67);
      common::tools::PTree::get<std::string>((std::string *)&v126, data, &v118, &p_default_value);
      std::string::operator=((std::string *const)(v4 + 1360), (std::string *)&v126);
      std::string::~string((std::string *const)&v126);
      std::string::~string(&v118);
      std::allocator<char>::~allocator(&v67);
      std::string::~string(&p_default_value);
      std::allocator<char>::~allocator(&__a);
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v119, "<xmlattr>.platform_type", &__a);
      *(_DWORD *)(v4 + 1440) = common::tools::PTree::get<unsigned int>(data, &v119, 0);
      std::string::~string(&v119);
      std::allocator<char>::~allocator(&__a);
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&p_default_value, byte_DE2A700, &__a);
      std::allocator<char>::allocator(&v67);
      std::string::basic_string<std::allocator<char>>(&v120, "<xmlattr>.online_id", &v67);
      common::tools::PTree::get<std::string>((std::string *)&v126, data, &v120, &p_default_value);
      std::string::operator=((std::string *const)(v4 + 1448), (std::string *)&v126);
      std::string::~string((std::string *const)&v126);
      std::string::~string(&v120);
      std::allocator<char>::~allocator(&v67);
      std::string::~string(&p_default_value);
      std::allocator<char>::~allocator(&__a);
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&p_default_value, byte_DE2A700, &__a);
      std::allocator<char>::allocator(&v67);
      std::string::basic_string<std::allocator<char>>(&v121, "<xmlattr>.psn_region", &v67);
      common::tools::PTree::get<std::string>((std::string *)&v126, data, &v121, &p_default_value);
      std::string::operator=((std::string *const)(v4 + 1480), (std::string *)&v126);
      std::string::~string((std::string *const)&v126);
      std::string::~string(&v121);
      std::allocator<char>::~allocator(&v67);
      std::string::~string(&p_default_value);
      std::allocator<char>::~allocator(&__a);
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&p_default_value, byte_DE2A700, &__a);
      std::allocator<char>::allocator(&v67);
      std::string::basic_string<std::allocator<char>>(&v122, "<xmlattr>.cloud_client_ip", &v67);
      common::tools::PTree::get<std::string>((std::string *)&v126, data, &v122, &p_default_value);
      std::string::operator=((std::string *const)(v4 + 1520), (std::string *)&v126);
      std::string::~string((std::string *const)&v126);
      std::string::~string(&v122);
      std::allocator<char>::~allocator(&v67);
      std::string::~string(&p_default_value);
      std::allocator<char>::~allocator(&__a);
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v123, "<xmlattr>.type", &__a);
      type = common::tools::PTree::get<unsigned int>(data, &v123, 1u);
      std::string::~string(&v123);
      std::allocator<char>::~allocator(&__a);
      if ( type == 1 )
      {
        std::allocator<char>::allocator(&__a);
        std::string::basic_string<std::allocator<char>>((std::string *const)&v126, "<xmlattr>.num", &__a);
        num = common::tools::PTree::get<unsigned int>(data, (const std::string *)&v126);
        std::string::~string((std::string *const)&v126);
        std::allocator<char>::~allocator(&__a);
        User::User((User *const)(v4 + 1168));
        for ( i = 1; i <= num; ++i )
          std::vector<User>::push_back(
            (std::vector<User> *const)(v4 + 448),
            (const std::vector<User>::value_type *)(v4 + 1168));
        User::~User((User *const)(v4 + 1168));
      }
      else if ( type == 2 )
      {
        std::allocator<char>::allocator(&__a);
        std::string::basic_string<std::allocator<char>>(&v124, "<xmlattr>.min_uid", &__a);
        min_uid = common::tools::PTree::get<int>(data, &v124, 0);
        std::string::~string(&v124);
        std::allocator<char>::~allocator(&__a);
        std::allocator<char>::allocator(&__a);
        std::string::basic_string<std::allocator<char>>((std::string *const)(v4 + 1024), "<xmlattr>.max_uid", &__a);
        max_uid = common::tools::PTree::get<int>(data, (const std::string *)(v4 + 1024), 0);
        std::string::~string((std::string *const)(v4 + 1024));
        std::allocator<char>::~allocator(&__a);
        std::allocator<char>::allocator(&__a);
        std::string::basic_string<std::allocator<char>>((std::string *const)&v126, byte_DE2A700, &__a);
        std::allocator<char>::allocator(&v67);
        std::string::basic_string<std::allocator<char>>(&p_default_value, "<xmlattr>.uid_list", &v67);
        common::tools::PTree::get<std::string>((std::string *)(v4 + 1024), data, &p_default_value, (std::string *)&v126);
        std::string::~string(&p_default_value);
        std::allocator<char>::~allocator(&v67);
        std::string::~string((std::string *const)&v126);
        std::allocator<char>::~allocator(&__a);
        std::set<unsigned int>::set((std::set<unsigned int> *const)(v4 + 1088));
        for ( *(_DWORD *)(v4 + 48) = min_uid; max_uid >= *(_DWORD *)(v4 + 48); ++*(_DWORD *)(v4 + 48) )
          std::set<unsigned int>::insert(
            (std::set<unsigned int> *const)(v4 + 1088),
            (const std::set<unsigned int>::value_type *)(v4 + 48));
        std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v4 + 512));
        std::allocator<char>::allocator(&__a);
        std::string::basic_string<std::allocator<char>>((std::string *const)&v126, ",", &__a);
        v23 = common::tools::StringUtils::splitToList<unsigned int>(
                (const std::string *)(v4 + 1024),
                (const std::string *)&v126,
                (std::vector<unsigned int> *)(v4 + 512),
                1) != 0;
        std::string::~string((std::string *const)&v126);
        std::allocator<char>::~allocator(&__a);
        if ( v23 )
        {
          common::milog::MiLogStream::create(
            &v126,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/main.cpp",
            "main",
            368);
          v24 = std::string::c_str((const std::string *const)(v4 + 1024));
          common::milog::MiLogStream::operator()(&v126, "uid list format error: %s", v24);
          common::milog::MiLogStream::~MiLogStream(&v126);
          v25 = 0;
        }
        else
        {
          for ( idx = 0; ; ++idx )
          {
            v26 = idx;
            if ( v26 >= std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v4 + 512)) )
              break;
            v27 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v4 + 512), idx);
            std::set<unsigned int>::insert((std::set<unsigned int> *const)(v4 + 1088), v27);
          }
          User::User((User *const)(v4 + 1168));
          __for_range_1 = (std::set<unsigned int> *)(v4 + 1088);
          __for_begin_1._M_node = std::set<unsigned int>::begin((const std::set<unsigned int> *const)(v4 + 1088))._M_node;
          __for_end_1._M_node = std::set<unsigned int>::end(__for_range_1)._M_node;
          while ( std::operator!=(&__for_begin_1, &__for_end_1) )
          {
            v28 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin_1);
            v29 = v28;
            if ( *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v28 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v28);
            }
            uid = *v29;
            if ( uid )
            {
              *(_DWORD *)(v4 + 1168) = uid;
              std::vector<User>::push_back(
                (std::vector<User> *const)(v4 + 448),
                (const std::vector<User>::value_type *)(v4 + 1168));
            }
            std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin_1);
          }
          User::~User((User *const)(v4 + 1168));
          v25 = 1;
        }
        std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v4 + 512));
        std::set<unsigned int>::~set((std::set<unsigned int> *const)(v4 + 1088));
        std::string::~string((std::string *const)(v4 + 1024));
        if ( v25 != 1 )
        {
          v30 = 0;
LABEL_117:
          std::string::~string((std::string *const)(v4 + 960));
          if ( v30 == 1 )
            v21 = 2;
          else
            v21 = 1;
          goto LABEL_120;
        }
      }
      for ( idx_0 = 0; ; ++idx_0 )
      {
        v31 = idx_0;
        if ( v31 >= std::vector<User>::size((const std::vector<User> *const)(v4 + 448)) )
          break;
        user = std::vector<User>::operator[]((std::vector<User> *const)(v4 + 448), idx_0);
        *(_DWORD *)(v4 + 48) = idx_0 + 1;
        std::make_shared<Robot,unsigned int>((unsigned int *)(v4 + 288), (unsigned int *)(v4 + 48));
        if ( std::operator==<Robot>((const std::shared_ptr<Robot> *)(v4 + 288), 0LL) )
        {
          common::milog::MiLogStream::create(
            &v126,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/main.cpp",
            "main",
            395);
          common::milog::MiLogStream::operator()(&v126, "create robot failed.");
          common::milog::MiLogStream::~MiLogStream(&v126);
        }
        else
        {
          std::string::operator=((std::string *const)(v4 + 1328), (const std::string *)(v4 + 960));
          if ( !std::string::empty((const std::string *const)(v4 + 960))
            && std::vector<User>::size((const std::vector<User> *const)(v4 + 448)) > 1 )
          {
            std::to_string((std::string *)&v126, idx_0);
            std::string::operator+=((std::string *const)(v4 + 1328), (const std::string *)&v126);
            std::string::~string((std::string *const)&v126);
          }
          v33 = std::__shared_ptr_access<Robot,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Robot,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 288));
          if ( Robot::init(v33, (RobotConf *)(v4 + 1280), user, script_file, round) )
          {
            common::milog::MiLogStream::create(
              &v126,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/main.cpp",
              "main",
              408);
            common::milog::MiLogStream::operator()(&v126, "init robot failed.");
            common::milog::MiLogStream::~MiLogStream(&v126);
          }
          else
          {
            std::vector<std::shared_ptr<Robot>>::push_back(
              &robot_vec,
              (const std::vector<std::shared_ptr<Robot>>::value_type *)(v4 + 288));
          }
        }
        std::shared_ptr<Robot>::~shared_ptr((std::shared_ptr<Robot> *const)(v4 + 288));
      }
      v30 = 1;
      goto LABEL_117;
    }
    if ( opt == 118 )
    {
      puts("robot debug");
      printf("  built    %s %s\n", "Oct 11 2022", "22:57:34");
      v3 = 0;
      goto LABEL_170;
    }
    if ( opt > 118 )
      goto LABEL_28;
    if ( opt == 104 )
    {
      print_usage();
      v3 = 0;
      goto LABEL_170;
    }
    if ( opt > 104 )
      goto LABEL_28;
    if ( opt != 99 )
      break;
    if ( *(_BYTE *)(((unsigned __int64)&optarg >> 3) + 0x7FFF8000) )
      __asan_report_load8(&optarg);
    std::string::operator=((std::string *const)(v4 + 576), optarg);
  }
  if ( opt > 99 )
    goto LABEL_28;
  if ( opt == 58 )
  {
    puts("option needs a value");
    v3 = -1;
  }
  else if ( opt == 63 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&optopt >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)&optopt & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&optopt >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&optopt);
    }
    printf("unknown option: %c\n", (unsigned int)optopt);
    v3 = -1;
  }
  else
  {
LABEL_28:
    print_usage();
    v3 = -1;
  }
LABEL_170:
  std::string::~string((std::string *const)(v4 + 576));
LABEL_171:
  if ( v63 == (char *)v4 )
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
    *(_DWORD *)((v4 >> 3) + 0x7FFF8054) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF805C) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8064) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF806C) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8074) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF807C) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8084) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF808C) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF809C) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF80C0) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF80C8) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    __asan_stack_free_5(v4, 1632LL, v63);
  }
  return v3;
};
