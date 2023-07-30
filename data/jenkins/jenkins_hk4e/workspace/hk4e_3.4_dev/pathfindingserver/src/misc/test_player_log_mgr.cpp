// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/pathfindingserver/src/misc/test_player_log_mgr.cpp

// Line 23: range 000000000CB6EE06-000000000CB6EE90
int32_t __cdecl TestPlayerLogMgr::init(TestPlayerLogMgr *const this, common::tools::PTree *a2)
{
  common::milog::MiLogStream v3; // [rsp+10h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v3,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "./src/misc/test_player_log_mgr.cpp",
    "init",
    24);
  common::milog::MiLogStream::operator()(&v3, "test_player_log_length_limit inited");
  common::milog::MiLogStream::~MiLogStream(&v3);
  return 0;
};

// Line 30: range 000000000CB6EE92-000000000CB6EFE6
int32_t __cdecl TestPlayerLogMgr::start(TestPlayerLogMgr *const this)
{
  TestPlayerLogMgr *v2; // [rsp+10h] [rbp-80h] BYREF
  std::thread __t; // [rsp+18h] [rbp-78h] BYREF
  int (*__f[2])(TestPlayerLogMgr *); // [rsp+20h] [rbp-70h] BYREF
  std::_Bind_helper<false,int (TestPlayerLogMgr::*)(),TestPlayerLogMgr*>::type v5; // [rsp+30h] [rbp-60h] BYREF
  common::milog::MiLogStream v6; // [rsp+50h] [rbp-40h] BYREF

  if ( std::atomic<bool>::operator bool(&this->is_run_) )
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/test_player_log_mgr.cpp",
      "start",
      33);
    common::milog::MiLogStream::operator()(&v6, "can not restart");
    common::milog::MiLogStream::~MiLogStream(&v6);
    return -1;
  }
  else
  {
    std::atomic<bool>::operator=(&this->is_run_, 1);
    v2 = this;
    __f[0] = (int (*)(TestPlayerLogMgr *))TestPlayerLogMgr::workThread;
    __f[1] = 0LL;
    std::bind<int (TestPlayerLogMgr::*)(void),TestPlayerLogMgr*>(&v5, __f, &v2, (TestPlayerLogMgr **)__f);
    ZNSt6threadC2ISt5_BindIFM16TestPlayerLogMgrFivEPS2_EEJEvEEOT_DpOT0_(&__t, &v5);
    std::thread::operator=(&this->work_thread_, &__t);
    std::thread::~thread(&__t);
    return 0;
  }
};

// Line 45: range 000000000CB6EFE8-000000000CB6F005
bool __cdecl TestPlayerLogMgr::isRun(TestPlayerLogMgr *const this)
{
  return std::thread::joinable(&this->work_thread_);
};

// Line 51: range 000000000CB6F006-000000000CB6F05F
int32_t __cdecl TestPlayerLogMgr::stop(TestPlayerLogMgr *const this)
{
  if ( std::atomic<bool>::operator bool(&this->is_run_) )
  {
    std::atomic<bool>::operator=(&this->is_run_, 0);
    std::thread::join(&this->work_thread_);
  }
  return 0;
};

// Line 63: range 000000000CB6F060-000000000CB6F07E
int32_t __cdecl TestPlayerLogMgr::fini(TestPlayerLogMgr *const this)
{
  common::tools::SafeQueue<MessageLog>::clear(&this->packet_log_queue_);
  return 0;
};

// Line 70: range 000000000CB6F080-000000000CB6F127
void __cdecl TestPlayerLogMgr::pushPacketLog(
        TestPlayerLogMgr *const this,
        uint32_t uid,
        uint16_t cmd_id,
        MessagePtr *p_message_ptr)
{
  MessageLog *v5; // rdx
  std::shared_ptr<google::protobuf::Message> v6; // [rsp+20h] [rbp-40h] BYREF
  MessageLog v7; // [rsp+30h] [rbp-30h] BYREF

  std::shared_ptr<google::protobuf::Message>::shared_ptr(&v6, p_message_ptr);
  MessageLog::MessageLog(&v7, &v6, uid, cmd_id);
  common::tools::SafeQueue<MessageLog>::emplace<MessageLog>(&this->packet_log_queue_, &v7, v5);
  MessageLog::~MessageLog(&v7);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v6);
};

// Line 76: range 000000000CB6F128-000000000CB6F609
int32_t __cdecl TestPlayerLogMgr::workThread(TestPlayerLogMgr *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v4; // r14
  common::milog::MiLogStream *v5; // rax
  pthread_t v6; // rax
  const MessageLog *v7; // rax
  int v8; // eax
  int32_t result; // eax
  __int64 val; // [rsp+18h] [rbp-178h] BYREF
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-170h] BYREF
  char v12[336]; // [rsp+40h] [rbp-150h] BYREF

  v1 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_3(288LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 24 14 message_log:82 112 32 10 log_str:83 176 80 6 que:85";
  *(_QWORD *)(v1 + 16) = TestPlayerLogMgr::workThread;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862722] = -218959360;
  v3[536862723] = 62194;
  v3[536862724] = -219021312;
  v3[536862725] = 62194;
  v3[536862728] = -202116109;
  common::milog::MiLogStream::create(
    &v11,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "./src/misc/test_player_log_mgr.cpp",
    "workThread",
    77);
  common::milog::MiLogStream::operator()(&v11, "TestPlayerLogMgr thread start");
  common::milog::MiLogStream::~MiLogStream(&v11);
  common::milog::MiLogStream::create(
    &v11,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "./src/misc/test_player_log_mgr.cpp",
    "workThread",
    79);
  v4 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v11, (const char (*)[14])"[THREAD] tid:");
  val = syscall(186LL);
  v5 = common::milog::MiLogStream::operator<<<long,(long *)0>(v4, &val);
  common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(v5, (const char (*)[24])" test_player_log thread");
  common::milog::MiLogStream::~MiLogStream(&v11);
  v6 = pthread_self();
  pthread_setname_np(v6, "test_player_log");
  MessageLog::MessageLog((MessageLog *const)(v1 + 48));
  std::string::basic_string(v1 + 112);
  std::queue<MessageLog>::queue<std::deque<MessageLog>,void>((std::queue<MessageLog> *const)(v1 + 176));
  while ( std::atomic<bool>::operator bool(&this->is_run_) )
  {
    common::tools::SafeQueue<MessageLog>::popAll(&this->packet_log_queue_, (std::queue<MessageLog> *)(v1 + 176));
    if ( std::queue<MessageLog>::empty((const std::queue<MessageLog> *const)(v1 + 176)) )
    {
      usleep(0x3E8u);
    }
    else
    {
      while ( !std::queue<MessageLog>::empty((const std::queue<MessageLog> *const)(v1 + 176)) )
      {
        v7 = std::queue<MessageLog>::front((std::queue<MessageLog> *const)(v1 + 176));
        MessageLog::operator=((MessageLog *const)(v1 + 48), v7);
        std::queue<MessageLog>::pop((std::queue<MessageLog> *const)(v1 + 176));
        v8 = *(unsigned __int16 *)(v1 + 68);
        if ( v8 == 2398 )
        {
          TestPlayerLogMgr::writePacketQueryPathRsp(this, (const MessageLog *)(v1 + 48));
        }
        else if ( *(unsigned __int16 *)(v1 + 68) <= 0x95Eu )
        {
          if ( v8 == 2372 )
          {
            TestPlayerLogMgr::writePacketQueryPathReq(this, (const MessageLog *)(v1 + 48));
          }
          else if ( *(unsigned __int16 *)(v1 + 68) <= 0x944u )
          {
            if ( v8 == 2307 )
            {
              TestPlayerLogMgr::writePacketEnterSceneReq(this, (const MessageLog *)(v1 + 48));
            }
            else if ( v8 == 2312 )
            {
              TestPlayerLogMgr::writePacketObstacleModifyNotify(this, (const MessageLog *)(v1 + 48));
            }
          }
        }
      }
    }
  }
  common::milog::MiLogStream::create(
    &v11,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "./src/misc/test_player_log_mgr.cpp",
    "workThread",
    119);
  common::milog::MiLogStream::operator()(&v11, "PacketLogMgr thread stop");
  common::milog::MiLogStream::~MiLogStream(&v11);
  std::queue<MessageLog>::~queue((std::queue<MessageLog> *const)(v1 + 176));
  std::string::~string((void *)(v1 + 112));
  MessageLog::~MessageLog((MessageLog *const)(v1 + 48));
  result = 0;
  if ( v12 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8020) = -168430091;
  }
  return result;
};

// Line 124: range 000000000CB6F60A-000000000CB6FDDB
void __cdecl TestPlayerLogMgr::writePacketEnterSceneReq(TestPlayerLogMgr *const this, const MessageLog *message_log)
{
  __m128i v2; // xmm0
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<const proto::PathfindingEnterSceneReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // r14
  std::__shared_ptr_access<const proto::PathfindingEnterSceneReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  common::milog::MiLogStream *v13; // rax
  std::__shared_ptr_access<const proto::PathfindingEnterSceneReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  std::__shared_ptr_access<const proto::PathfindingEnterSceneReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  const proto::ObstacleInfo *v16; // rax
  common::milog::MiLogStream *v17; // r14
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // r14
  const proto::Vector *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // r14
  const proto::Vector *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // r14
  const proto::Vector *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // r14
  const proto::MathQuaternion *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // r14
  const proto::MathQuaternion *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // r14
  const proto::MathQuaternion *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // r14
  const proto::MathQuaternion *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // r14
  const proto::Vector3Int *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // r14
  const proto::Vector3Int *v44; // rax
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // r14
  const proto::Vector3Int *v47; // rax
  common::milog::MiLogStream *v48; // rax
  std::__shared_ptr_access<const proto::PathfindingEnterSceneReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v49; // rax
  std::__shared_ptr_access<const proto::PathfindingEnterSceneReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v50; // rax
  common::milog::MiLogStream *v51; // rax
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // r14
  std::__shared_ptr_access<const proto::PathfindingEnterSceneReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v54; // rax
  common::milog::MiLogStream *v55; // rax
  common::milog::MiLogStream *v56; // r14
  std::__shared_ptr_access<const proto::PathfindingEnterSceneReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v57; // rax
  common::milog::MiLogStream *v58; // rax
  float v59; // [rsp+18h] [rbp-148h] BYREF
  float v60; // [rsp+1Ch] [rbp-144h] BYREF
  float v61; // [rsp+20h] [rbp-140h] BYREF
  float v62; // [rsp+24h] [rbp-13Ch] BYREF
  float v63; // [rsp+28h] [rbp-138h] BYREF
  float v64; // [rsp+2Ch] [rbp-134h] BYREF
  float v65; // [rsp+30h] [rbp-130h] BYREF
  int v66; // [rsp+34h] [rbp-12Ch] BYREF
  unsigned int val; // [rsp+38h] [rbp-128h] BYREF
  unsigned int v68; // [rsp+3Ch] [rbp-124h] BYREF
  int32_t i; // [rsp+40h] [rbp-120h]
  int32_t i_0; // [rsp+44h] [rbp-11Ch]
  int32_t size; // [rsp+48h] [rbp-118h]
  int32_t size_0; // [rsp+4Ch] [rbp-114h]
  char v73[272]; // [rsp+50h] [rbp-110h] BYREF

  v3 = (unsigned __int64)v73;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 16 15 message_ptr:125 64 32 13 logStream:128 128 56 12 obstacle:134";
  *(_QWORD *)(v3 + 16) = TestPlayerLogMgr::writePacketEnterSceneReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862723] = -218959118;
  v5[536862725] = -218103808;
  v5[536862726] = -202116109;
  std::dynamic_pointer_cast<proto::PathfindingEnterSceneReq const,google::protobuf::Message>((const std::shared_ptr<google::protobuf::Message> *)(v3 + 32));
  if ( !std::operator==<proto::PathfindingEnterSceneReq const>(
          (const std::shared_ptr<const proto::PathfindingEnterSceneReq> *)(v3 + 32),
          0LL) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      0x28u,
      "./src/misc/test_player_log_mgr.cpp",
      "writePacketEnterSceneReq",
      128);
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           &message_log->uid);
    v7 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v6, (const char (*)[2])" ");
    v8 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
           v7,
           (const char (*)[42])"[PathfindingEnterSceneReq] { \"sceneId\" : ");
    v9 = std::__shared_ptr_access<proto::PathfindingEnterSceneReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const proto::PathfindingEnterSceneReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    val = proto::PathfindingEnterSceneReq::scene_id(v9);
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
    v11 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v10, (const char (*)[14])", \"version\": ");
    v12 = std::__shared_ptr_access<proto::PathfindingEnterSceneReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const proto::PathfindingEnterSceneReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    v68 = proto::PathfindingEnterSceneReq::version(v12);
    v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &v68);
    common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v13, (const char (*)[17])", \"obstacles\": [");
    i = 0;
    v14 = std::__shared_ptr_access<proto::PathfindingEnterSceneReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const proto::PathfindingEnterSceneReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    size = proto::PathfindingEnterSceneReq::obstacles_size(v14);
    while ( i < size )
    {
      v15 = std::__shared_ptr_access<proto::PathfindingEnterSceneReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const proto::PathfindingEnterSceneReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      v16 = proto::PathfindingEnterSceneReq::obstacles(v15, i);
      proto::ObstacleInfo::ObstacleInfo((proto::ObstacleInfo *const)(v3 + 128), v16);
      v17 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
              (common::milog::MiLogStream *const)(v3 + 64),
              (const char (*)[17])"{ \"obstacleId\": ");
      v68 = proto::ObstacleInfo::obstacle_id((const proto::ObstacleInfo *const)(v3 + 128));
      v18 = common::milog::MiLogStream::operator<<<int,(int *)0>(v17, (const int *)&v68);
      common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v18, (const char (*)[14])", \"shape\" : \"");
      if ( proto::ObstacleInfo::shape((const proto::ObstacleInfo *const)(v3 + 128)) )
        common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
          (common::milog::MiLogStream *const)(v3 + 64),
          (const char (*)[19])"OBSTACLE_SHAPE_BOX");
      else
        common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
          (common::milog::MiLogStream *const)(v3 + 64),
          (const char (*)[23])"OBSTACLE_SHAPE_CAPSULE");
      v19 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              (common::milog::MiLogStream *const)(v3 + 64),
              (const char (*)[22])"\", \"center\" : { \"x\": ");
      v20 = proto::ObstacleInfo::center((const proto::ObstacleInfo *const)(v3 + 128));
      *(float *)v2.m128i_i32 = proto::Vector::x(v20);
      LODWORD(v59) = _mm_cvtsi128_si32(v2);
      v21 = common::milog::MiLogStream::operator<<<float,(float *)0>(v19, &v59);
      v22 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v21, (const char (*)[8])", \"y\": ");
      v23 = proto::ObstacleInfo::center((const proto::ObstacleInfo *const)(v3 + 128));
      *(float *)v2.m128i_i32 = proto::Vector::y(v23);
      LODWORD(v60) = _mm_cvtsi128_si32(v2);
      v24 = common::milog::MiLogStream::operator<<<float,(float *)0>(v22, &v60);
      v25 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v24, (const char (*)[8])", \"z\": ");
      v26 = proto::ObstacleInfo::center((const proto::ObstacleInfo *const)(v3 + 128));
      *(float *)v2.m128i_i32 = proto::Vector::z(v26);
      LODWORD(v61) = _mm_cvtsi128_si32(v2);
      v27 = common::milog::MiLogStream::operator<<<float,(float *)0>(v25, &v61);
      v28 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
              v27,
              (const char (*)[25])" }, \"rotation\" : { \"x\": ");
      v29 = proto::ObstacleInfo::rotation((const proto::ObstacleInfo *const)(v3 + 128));
      *(float *)v2.m128i_i32 = proto::MathQuaternion::x(v29);
      LODWORD(v62) = _mm_cvtsi128_si32(v2);
      v30 = common::milog::MiLogStream::operator<<<float,(float *)0>(v28, &v62);
      v31 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v30, (const char (*)[8])", \"y\": ");
      v32 = proto::ObstacleInfo::rotation((const proto::ObstacleInfo *const)(v3 + 128));
      *(float *)v2.m128i_i32 = proto::MathQuaternion::y(v32);
      LODWORD(v63) = _mm_cvtsi128_si32(v2);
      v33 = common::milog::MiLogStream::operator<<<float,(float *)0>(v31, &v63);
      v34 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v33, (const char (*)[8])", \"z\": ");
      v35 = proto::ObstacleInfo::rotation((const proto::ObstacleInfo *const)(v3 + 128));
      *(float *)v2.m128i_i32 = proto::MathQuaternion::z(v35);
      LODWORD(v64) = _mm_cvtsi128_si32(v2);
      v36 = common::milog::MiLogStream::operator<<<float,(float *)0>(v34, &v64);
      v37 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v36, (const char (*)[8])", \"w\": ");
      v38 = proto::ObstacleInfo::rotation((const proto::ObstacleInfo *const)(v3 + 128));
      *(float *)v2.m128i_i32 = proto::MathQuaternion::w(v38);
      LODWORD(v65) = _mm_cvtsi128_si32(v2);
      v39 = common::milog::MiLogStream::operator<<<float,(float *)0>(v37, &v65);
      v40 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
              v39,
              (const char (*)[24])" }, \"extents\" : { \"x\": ");
      v41 = proto::ObstacleInfo::extents((const proto::ObstacleInfo *const)(v3 + 128));
      v66 = proto::Vector3Int::x(v41);
      v42 = common::milog::MiLogStream::operator<<<int,(int *)0>(v40, &v66);
      v43 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v42, (const char (*)[8])", \"y\": ");
      v44 = proto::ObstacleInfo::extents((const proto::ObstacleInfo *const)(v3 + 128));
      val = proto::Vector3Int::y(v44);
      v45 = common::milog::MiLogStream::operator<<<int,(int *)0>(v43, (const int *)&val);
      v46 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v45, (const char (*)[8])", \"z\": ");
      v47 = proto::ObstacleInfo::extents((const proto::ObstacleInfo *const)(v3 + 128));
      v68 = proto::Vector3Int::z(v47);
      v48 = common::milog::MiLogStream::operator<<<int,(int *)0>(v46, (const int *)&v68);
      common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v48, (const char (*)[6])" } },");
      proto::ObstacleInfo::~ObstacleInfo((proto::ObstacleInfo *const)(v3 + 128));
      ++i;
    }
    common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
      (common::milog::MiLogStream *const)(v3 + 64),
      (const char (*)[38])"], \"isEditor\": false, \"activityId\": [");
    i_0 = 0;
    v49 = std::__shared_ptr_access<proto::PathfindingEnterSceneReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const proto::PathfindingEnterSceneReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    size_0 = proto::PathfindingEnterSceneReq::activity_id_size(v49);
    while ( i_0 < size_0 )
    {
      v50 = std::__shared_ptr_access<proto::PathfindingEnterSceneReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const proto::PathfindingEnterSceneReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      v68 = proto::PathfindingEnterSceneReq::activity_id(v50, i_0);
      v51 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              (common::milog::MiLogStream *const)(v3 + 64),
              &v68);
      common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v51, (const char (*)[2])",");
      ++i_0;
    }
    v52 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(
            (common::milog::MiLogStream *const)(v3 + 64),
            (const char (*)[2])"]");
    v53 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
            v52,
            (const char (*)[19])", \"sceneTagHash\": ");
    v54 = std::__shared_ptr_access<proto::PathfindingEnterSceneReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const proto::PathfindingEnterSceneReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    val = proto::PathfindingEnterSceneReq::scene_tag_hash(v54);
    v55 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v53, &val);
    v56 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v55, (const char (*)[16])", \"polygonId\": ");
    v57 = std::__shared_ptr_access<proto::PathfindingEnterSceneReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const proto::PathfindingEnterSceneReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    v68 = proto::PathfindingEnterSceneReq::polygon_id(v57);
    v58 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v56, &v68);
    common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v58, (const char (*)[3])" }");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
  }
  std::shared_ptr<proto::PathfindingEnterSceneReq const>::~shared_ptr((std::shared_ptr<const proto::PathfindingEnterSceneReq> *const)(v3 + 32));
  if ( v73 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8014) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = -168430091;
  }
};

// Line 171: range 000000000CB6FDDC-000000000CB7064E
void __cdecl TestPlayerLogMgr::writePacketQueryPathReq(TestPlayerLogMgr *const this, const MessageLog *message_log)
{
  __m128i v2; // xmm0
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  std::__shared_ptr_access<const proto::QueryPathReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  proto::QueryPathReq_OptionType type; // eax
  common::milog::MiLogStream *v10; // r14
  std::__shared_ptr_access<const proto::QueryPathReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  std::__shared_ptr_access<const proto::QueryPathReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // r14
  std::__shared_ptr_access<const proto::QueryPathReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  const proto::Vector *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // r14
  std::__shared_ptr_access<const proto::QueryPathReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  const proto::Vector *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // r14
  std::__shared_ptr_access<const proto::QueryPathReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rax
  const proto::Vector *v26; // rax
  common::milog::MiLogStream *v27; // rax
  std::__shared_ptr_access<const proto::QueryPathReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  std::__shared_ptr_access<const proto::QueryPathReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rax
  const proto::Vector *v30; // rax
  common::milog::MiLogStream *v31; // r14
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // r14
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // r14
  common::milog::MiLogStream *v36; // rax
  std::__shared_ptr_access<const proto::QueryPathReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v37; // rax
  common::milog::MiLogStream *v38; // r14
  std::__shared_ptr_access<const proto::QueryPathReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v39; // rax
  const proto::QueryFilter *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // r14
  std::__shared_ptr_access<const proto::QueryPathReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v43; // rax
  const proto::QueryFilter *v44; // rax
  common::milog::MiLogStream *v45; // rax
  std::__shared_ptr_access<const proto::QueryPathReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v46; // rax
  common::milog::MiLogStream *v47; // r14
  std::__shared_ptr_access<const proto::QueryPathReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v48; // rax
  const proto::Vector3Int *v49; // rax
  common::milog::MiLogStream *v50; // rax
  common::milog::MiLogStream *v51; // r14
  std::__shared_ptr_access<const proto::QueryPathReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v52; // rax
  const proto::Vector3Int *v53; // rax
  common::milog::MiLogStream *v54; // rax
  common::milog::MiLogStream *v55; // r14
  std::__shared_ptr_access<const proto::QueryPathReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v56; // rax
  const proto::Vector3Int *v57; // rax
  common::milog::MiLogStream *v58; // rax
  std::__shared_ptr_access<const proto::QueryPathReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v59; // rax
  common::milog::MiLogStream *v60; // r14
  std::__shared_ptr_access<const proto::QueryPathReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v61; // rax
  const proto::Vector3Int *v62; // rax
  common::milog::MiLogStream *v63; // rax
  common::milog::MiLogStream *v64; // r14
  std::__shared_ptr_access<const proto::QueryPathReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v65; // rax
  const proto::Vector3Int *v66; // rax
  common::milog::MiLogStream *v67; // rax
  common::milog::MiLogStream *v68; // r14
  std::__shared_ptr_access<const proto::QueryPathReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v69; // rax
  const proto::Vector3Int *v70; // rax
  common::milog::MiLogStream *v71; // rax
  int val; // [rsp+14h] [rbp-10Ch] BYREF
  unsigned int v73; // [rsp+18h] [rbp-108h] BYREF
  float v74; // [rsp+1Ch] [rbp-104h] BYREF
  float v75; // [rsp+20h] [rbp-100h] BYREF
  float v76; // [rsp+24h] [rbp-FCh] BYREF
  int i; // [rsp+28h] [rbp-F8h]
  int size; // [rsp+2Ch] [rbp-F4h]
  char v79[240]; // [rsp+30h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v79;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 16 15 message_ptr:172 64 32 13 logStream:175 128 32 7 pos:197";
  *(_QWORD *)(v3 + 16) = TestPlayerLogMgr::writePacketQueryPathReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862723] = -218959118;
  v5[536862725] = -202116109;
  std::dynamic_pointer_cast<proto::QueryPathReq const,google::protobuf::Message>((const std::shared_ptr<google::protobuf::Message> *)(v3 + 32));
  if ( !std::operator==<proto::QueryPathReq const>((const std::shared_ptr<const proto::QueryPathReq> *)(v3 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      0x28u,
      "./src/misc/test_player_log_mgr.cpp",
      "writePacketQueryPathReq",
      175);
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           &message_log->uid);
    v7 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v6, (const char (*)[2])" ");
    common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
      v7,
      (const char (*)[32])"[QueryPathReq] { \"queryType\": \"");
    v8 = std::__shared_ptr_access<proto::QueryPathReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const proto::QueryPathReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    type = proto::QueryPathReq::query_type(v8);
    if ( type == QueryPathReq_OptionType_OPTION_NORMAL )
    {
      common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
        (common::milog::MiLogStream *const)(v3 + 64),
        (const char (*)[14])"OPTION_NORMAL");
    }
    else if ( type == QueryPathReq_OptionType_OPTION_FIRST_CAN_GO )
    {
      common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
        (common::milog::MiLogStream *const)(v3 + 64),
        (const char (*)[20])"OPTION_FIRST_CAN_GO");
    }
    else
    {
      common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
        (common::milog::MiLogStream *const)(v3 + 64),
        (const char (*)[12])"OPTION_NONE");
    }
    v10 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
            (common::milog::MiLogStream *const)(v3 + 64),
            (const char (*)[15])"\", \"queryId\": ");
    v11 = std::__shared_ptr_access<proto::QueryPathReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const proto::QueryPathReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    val = proto::QueryPathReq::query_id(v11);
    v12 = common::milog::MiLogStream::operator<<<int,(int *)0>(v10, &val);
    v13 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v12, (const char (*)[14])", \"sceneId\": ");
    v14 = std::__shared_ptr_access<proto::QueryPathReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const proto::QueryPathReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    v73 = proto::QueryPathReq::scene_id(v14);
    v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &v73);
    v16 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
            v15,
            (const char (*)[23])", \"sourcePos\": { \"x\": ");
    v17 = std::__shared_ptr_access<proto::QueryPathReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const proto::QueryPathReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    v18 = proto::QueryPathReq::source_pos(v17);
    *(float *)v2.m128i_i32 = proto::Vector::x(v18);
    LODWORD(v74) = _mm_cvtsi128_si32(v2);
    v19 = common::milog::MiLogStream::operator<<<float,(float *)0>(v16, &v74);
    v20 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v19, (const char (*)[8])", \"y\": ");
    v21 = std::__shared_ptr_access<proto::QueryPathReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const proto::QueryPathReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    v22 = proto::QueryPathReq::source_pos(v21);
    *(float *)v2.m128i_i32 = proto::Vector::y(v22);
    LODWORD(v75) = _mm_cvtsi128_si32(v2);
    v23 = common::milog::MiLogStream::operator<<<float,(float *)0>(v20, &v75);
    v24 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v23, (const char (*)[8])", \"z\": ");
    v25 = std::__shared_ptr_access<proto::QueryPathReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const proto::QueryPathReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    v26 = proto::QueryPathReq::source_pos(v25);
    *(float *)v2.m128i_i32 = proto::Vector::z(v26);
    LODWORD(v76) = _mm_cvtsi128_si32(v2);
    v27 = common::milog::MiLogStream::operator<<<float,(float *)0>(v24, &v76);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v27, (const char (*)[23])"}, \"destinationPos\": [");
    i = 0;
    v28 = std::__shared_ptr_access<proto::QueryPathReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const proto::QueryPathReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    size = proto::QueryPathReq::destination_pos_size(v28);
    while ( i < size )
    {
      v29 = std::__shared_ptr_access<proto::QueryPathReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const proto::QueryPathReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      v30 = proto::QueryPathReq::destination_pos(v29, i);
      proto::Vector::Vector((proto::Vector *const)(v3 + 128), v30);
      v31 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
              (common::milog::MiLogStream *const)(v3 + 64),
              (const char (*)[8])"{ \"x\": ");
      *(float *)v2.m128i_i32 = proto::Vector::x((const proto::Vector *const)(v3 + 128));
      LODWORD(v74) = _mm_cvtsi128_si32(v2);
      v32 = common::milog::MiLogStream::operator<<<float,(float *)0>(v31, &v74);
      v33 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v32, (const char (*)[8])", \"y\": ");
      *(float *)v2.m128i_i32 = proto::Vector::y((const proto::Vector *const)(v3 + 128));
      LODWORD(v75) = _mm_cvtsi128_si32(v2);
      v34 = common::milog::MiLogStream::operator<<<float,(float *)0>(v33, &v75);
      v35 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v34, (const char (*)[8])", \"z\": ");
      *(float *)v2.m128i_i32 = proto::Vector::z((const proto::Vector *const)(v3 + 128));
      LODWORD(v76) = _mm_cvtsi128_si32(v2);
      v36 = common::milog::MiLogStream::operator<<<float,(float *)0>(v35, &v76);
      common::milog::MiLogStream::operator<<<char [4],(char *[4])0>(v36, (const char (*)[4])" },");
      proto::Vector::~Vector((proto::Vector *const)(v3 + 128));
      ++i;
    }
    v37 = std::__shared_ptr_access<proto::QueryPathReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const proto::QueryPathReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    if ( proto::QueryPathReq::has_filter(v37) )
    {
      v38 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v3 + 64),
              (const char (*)[27])"], \"filter\": { \"type_id\": ");
      v39 = std::__shared_ptr_access<proto::QueryPathReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const proto::QueryPathReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      v40 = proto::QueryPathReq::filter(v39);
      LODWORD(v75) = proto::QueryFilter::type_id(v40);
      v41 = common::milog::MiLogStream::operator<<<int,(int *)0>(v38, (const int *)&v75);
      v42 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              v41,
              (const char (*)[16])", \"area_mask\": ");
      v43 = std::__shared_ptr_access<proto::QueryPathReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const proto::QueryPathReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      v44 = proto::QueryPathReq::filter(v43);
      LODWORD(v76) = proto::QueryFilter::area_mask(v44);
      v45 = common::milog::MiLogStream::operator<<<int,(int *)0>(v42, (const int *)&v76);
      common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v45, (const char (*)[3])" }");
    }
    else
    {
      common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
        (common::milog::MiLogStream *const)(v3 + 64),
        (const char (*)[18])"], \"filter\": null");
    }
    v46 = std::__shared_ptr_access<proto::QueryPathReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const proto::QueryPathReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    if ( proto::QueryPathReq::has_destination_extend(v46) )
    {
      v47 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
              (common::milog::MiLogStream *const)(v3 + 64),
              (const char (*)[31])", \"destinationExtend\": { \"x\": ");
      v48 = std::__shared_ptr_access<proto::QueryPathReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const proto::QueryPathReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      v49 = proto::QueryPathReq::destination_extend(v48);
      LODWORD(v74) = proto::Vector3Int::x(v49);
      v50 = common::milog::MiLogStream::operator<<<int,(int *)0>(v47, (const int *)&v74);
      v51 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v50, (const char (*)[8])", \"y\": ");
      v52 = std::__shared_ptr_access<proto::QueryPathReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const proto::QueryPathReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      v53 = proto::QueryPathReq::destination_extend(v52);
      LODWORD(v75) = proto::Vector3Int::y(v53);
      v54 = common::milog::MiLogStream::operator<<<int,(int *)0>(v51, (const int *)&v75);
      v55 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v54, (const char (*)[8])", \"z\": ");
      v56 = std::__shared_ptr_access<proto::QueryPathReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const proto::QueryPathReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      v57 = proto::QueryPathReq::destination_extend(v56);
      LODWORD(v76) = proto::Vector3Int::z(v57);
      v58 = common::milog::MiLogStream::operator<<<int,(int *)0>(v55, (const int *)&v76);
      common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v58, (const char (*)[3])" }");
    }
    else
    {
      common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
        (common::milog::MiLogStream *const)(v3 + 64),
        (const char (*)[28])", \"destinationExtend\": null");
    }
    v59 = std::__shared_ptr_access<proto::QueryPathReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const proto::QueryPathReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    if ( proto::QueryPathReq::has_source_extend(v59) )
    {
      v60 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
              (common::milog::MiLogStream *const)(v3 + 64),
              (const char (*)[26])", \"sourceExtend\": { \"x\": ");
      v61 = std::__shared_ptr_access<proto::QueryPathReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const proto::QueryPathReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      v62 = proto::QueryPathReq::source_extend(v61);
      LODWORD(v74) = proto::Vector3Int::x(v62);
      v63 = common::milog::MiLogStream::operator<<<int,(int *)0>(v60, (const int *)&v74);
      v64 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v63, (const char (*)[8])", \"y\": ");
      v65 = std::__shared_ptr_access<proto::QueryPathReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const proto::QueryPathReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      v66 = proto::QueryPathReq::source_extend(v65);
      LODWORD(v75) = proto::Vector3Int::y(v66);
      v67 = common::milog::MiLogStream::operator<<<int,(int *)0>(v64, (const int *)&v75);
      v68 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v67, (const char (*)[8])", \"z\": ");
      v69 = std::__shared_ptr_access<proto::QueryPathReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const proto::QueryPathReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      v70 = proto::QueryPathReq::source_extend(v69);
      LODWORD(v76) = proto::Vector3Int::z(v70);
      v71 = common::milog::MiLogStream::operator<<<int,(int *)0>(v68, (const int *)&v76);
      common::milog::MiLogStream::operator<<<char [4],(char *[4])0>(v71, (const char (*)[4])off_1A5F6EC0);
    }
    else
    {
      common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
        (common::milog::MiLogStream *const)(v3 + 64),
        (const char (*)[25])", \"sourceExtend\": null }");
    }
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
  }
  std::shared_ptr<proto::QueryPathReq const>::~shared_ptr((std::shared_ptr<const proto::QueryPathReq> *const)(v3 + 32));
  if ( v79 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 232: range 000000000CB70650-000000000CB70AEE
void __cdecl TestPlayerLogMgr::writePacketQueryPathRsp(TestPlayerLogMgr *const this, const MessageLog *message_log)
{
  __m128i v2; // xmm0
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<const proto::QueryPathRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // r14
  std::__shared_ptr_access<const proto::QueryPathRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  common::milog::MiLogStream *v13; // rax
  std::__shared_ptr_access<const proto::QueryPathRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  proto::QueryPathRsp_PathStatusType status; // eax
  std::__shared_ptr_access<const proto::QueryPathRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  std::__shared_ptr_access<const proto::QueryPathRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  const proto::Vector *v18; // rax
  common::milog::MiLogStream *v19; // r14
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // r14
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // r14
  common::milog::MiLogStream *v24; // rax
  float v25; // [rsp+1Ch] [rbp-104h] BYREF
  int val; // [rsp+20h] [rbp-100h] BYREF
  float v27; // [rsp+24h] [rbp-FCh] BYREF
  int i; // [rsp+28h] [rbp-F8h]
  int size; // [rsp+2Ch] [rbp-F4h]
  char v30[240]; // [rsp+30h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 16 15 message_ptr:233 64 32 13 logStream:236 128 32 10 corner:257";
  *(_QWORD *)(v3 + 16) = TestPlayerLogMgr::writePacketQueryPathRsp;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862723] = -218959118;
  v5[536862725] = -202116109;
  std::dynamic_pointer_cast<proto::QueryPathRsp const,google::protobuf::Message>((const std::shared_ptr<google::protobuf::Message> *)(v3 + 32));
  if ( !std::operator==<proto::QueryPathRsp const>((const std::shared_ptr<const proto::QueryPathRsp> *)(v3 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      0x28u,
      "./src/misc/test_player_log_mgr.cpp",
      "writePacketQueryPathRsp",
      236);
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           &message_log->uid);
    v7 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v6, (const char (*)[2])" ");
    v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
           v7,
           (const char (*)[29])"[QueryPathRsp] { \"retcode\": ");
    v9 = std::__shared_ptr_access<proto::QueryPathRsp const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const proto::QueryPathRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    val = proto::QueryPathRsp::retcode(v9);
    v10 = common::milog::MiLogStream::operator<<<int,(int *)0>(v8, &val);
    v11 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v10, (const char (*)[14])", \"queryId\": ");
    v12 = std::__shared_ptr_access<proto::QueryPathRsp const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const proto::QueryPathRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    LODWORD(v27) = proto::QueryPathRsp::query_id(v12);
    v13 = common::milog::MiLogStream::operator<<<int,(int *)0>(v11, (const int *)&v27);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v13, (const char (*)[19])", \"queryStatus\": \"");
    v14 = std::__shared_ptr_access<proto::QueryPathRsp const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const proto::QueryPathRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    status = proto::QueryPathRsp::query_status(v14);
    if ( status == QueryPathRsp_PathStatusType_STATUS_PARTIAL )
    {
      common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
        (common::milog::MiLogStream *const)(v3 + 64),
        (const char (*)[15])"STATUS_PARTIAL");
    }
    else if ( status <= QueryPathRsp_PathStatusType_STATUS_PARTIAL
           && status
           && status == QueryPathRsp_PathStatusType_STATUS_SUCC )
    {
      common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
        (common::milog::MiLogStream *const)(v3 + 64),
        (const char (*)[12])"STATUS_SUCC");
    }
    else
    {
      common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
        (common::milog::MiLogStream *const)(v3 + 64),
        (const char (*)[12])"STATUS_FAIL");
    }
    common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
      (common::milog::MiLogStream *const)(v3 + 64),
      (const char (*)[16])"\", \"corners\": [");
    i = 0;
    v16 = std::__shared_ptr_access<proto::QueryPathRsp const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const proto::QueryPathRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    size = proto::QueryPathRsp::corners_size(v16);
    while ( i < size )
    {
      v17 = std::__shared_ptr_access<proto::QueryPathRsp const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const proto::QueryPathRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      v18 = proto::QueryPathRsp::corners(v17, i);
      proto::Vector::Vector((proto::Vector *const)(v3 + 128), v18);
      v19 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
              (common::milog::MiLogStream *const)(v3 + 64),
              (const char (*)[8])"{ \"x\": ");
      *(float *)v2.m128i_i32 = proto::Vector::x((const proto::Vector *const)(v3 + 128));
      LODWORD(v25) = _mm_cvtsi128_si32(v2);
      v20 = common::milog::MiLogStream::operator<<<float,(float *)0>(v19, &v25);
      v21 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v20, (const char (*)[8])", \"y\": ");
      *(float *)v2.m128i_i32 = proto::Vector::y((const proto::Vector *const)(v3 + 128));
      val = _mm_cvtsi128_si32(v2);
      v22 = common::milog::MiLogStream::operator<<<float,(float *)0>(v21, (const float *)&val);
      v23 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v22, (const char (*)[8])", \"z\": ");
      *(float *)v2.m128i_i32 = proto::Vector::z((const proto::Vector *const)(v3 + 128));
      LODWORD(v27) = _mm_cvtsi128_si32(v2);
      v24 = common::milog::MiLogStream::operator<<<float,(float *)0>(v23, &v27);
      common::milog::MiLogStream::operator<<<char [4],(char *[4])0>(v24, (const char (*)[4])" },");
      proto::Vector::~Vector((proto::Vector *const)(v3 + 128));
      ++i;
    }
    common::milog::MiLogStream::operator<<<char [4],(char *[4])0>(
      (common::milog::MiLogStream *const)(v3 + 64),
      (const char (*)[4])off_1A5F71A0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
  }
  std::shared_ptr<proto::QueryPathRsp const>::~shared_ptr((std::shared_ptr<const proto::QueryPathRsp> *const)(v3 + 32));
  if ( v30 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 263: range 000000000CB70AF0-000000000CB711EF
void __cdecl TestPlayerLogMgr::writePacketObstacleModifyNotify(
        TestPlayerLogMgr *const this,
        const MessageLog *message_log)
{
  __m128i v2; // xmm0
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<const proto::ObstacleModifyNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // rax
  std::__shared_ptr_access<const proto::ObstacleModifyNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::__shared_ptr_access<const proto::ObstacleModifyNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  const proto::ObstacleInfo *v13; // rax
  common::milog::MiLogStream *v14; // r14
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // r14
  const proto::Vector *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // r14
  const proto::Vector *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // r14
  const proto::Vector *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // r14
  const proto::MathQuaternion *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // r14
  const proto::MathQuaternion *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // r14
  const proto::MathQuaternion *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // r14
  const proto::MathQuaternion *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // r14
  const proto::Vector3Int *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // r14
  const proto::Vector3Int *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // r14
  const proto::Vector3Int *v44; // rax
  common::milog::MiLogStream *v45; // rax
  std::__shared_ptr_access<const proto::ObstacleModifyNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v46; // rax
  std::__shared_ptr_access<const proto::ObstacleModifyNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v47; // rax
  common::milog::MiLogStream *v48; // rax
  float v49; // [rsp+18h] [rbp-148h] BYREF
  float v50; // [rsp+1Ch] [rbp-144h] BYREF
  float v51; // [rsp+20h] [rbp-140h] BYREF
  float v52; // [rsp+24h] [rbp-13Ch] BYREF
  float v53; // [rsp+28h] [rbp-138h] BYREF
  float v54; // [rsp+2Ch] [rbp-134h] BYREF
  float v55; // [rsp+30h] [rbp-130h] BYREF
  int v56; // [rsp+34h] [rbp-12Ch] BYREF
  int v57; // [rsp+38h] [rbp-128h] BYREF
  unsigned int val; // [rsp+3Ch] [rbp-124h] BYREF
  int32_t i; // [rsp+40h] [rbp-120h]
  int32_t i_0; // [rsp+44h] [rbp-11Ch]
  int32_t size; // [rsp+48h] [rbp-118h]
  int32_t size_0; // [rsp+4Ch] [rbp-114h]
  char v63[272]; // [rsp+50h] [rbp-110h] BYREF

  v3 = (unsigned __int64)v63;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 16 15 message_ptr:264 64 32 13 logStream:267 128 56 12 obstacle:272";
  *(_QWORD *)(v3 + 16) = TestPlayerLogMgr::writePacketObstacleModifyNotify;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862723] = -218959118;
  v5[536862725] = -218103808;
  v5[536862726] = -202116109;
  std::dynamic_pointer_cast<proto::ObstacleModifyNotify const,google::protobuf::Message>((const std::shared_ptr<google::protobuf::Message> *)(v3 + 32));
  if ( !std::operator==<proto::ObstacleModifyNotify const>(
          (const std::shared_ptr<const proto::ObstacleModifyNotify> *)(v3 + 32),
          0LL) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      0x28u,
      "./src/misc/test_player_log_mgr.cpp",
      "writePacketObstacleModifyNotify",
      267);
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           &message_log->uid);
    v7 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v6, (const char (*)[2])" ");
    v8 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
           v7,
           (const char (*)[38])"[ObstacleModifyNotify] { \"sceneId\" : ");
    v9 = std::__shared_ptr_access<proto::ObstacleModifyNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const proto::ObstacleModifyNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    val = proto::ObstacleModifyNotify::scene_id(v9);
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
    common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v10, (const char (*)[20])", \"addObstacles\": [");
    i = 0;
    v11 = std::__shared_ptr_access<proto::ObstacleModifyNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const proto::ObstacleModifyNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    size = proto::ObstacleModifyNotify::add_obstacles_size(v11);
    while ( i < size )
    {
      v12 = std::__shared_ptr_access<proto::ObstacleModifyNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const proto::ObstacleModifyNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      v13 = proto::ObstacleModifyNotify::add_obstacles(v12, i);
      proto::ObstacleInfo::ObstacleInfo((proto::ObstacleInfo *const)(v3 + 128), v13);
      v14 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
              (common::milog::MiLogStream *const)(v3 + 64),
              (const char (*)[17])"{ \"obstacleId\": ");
      val = proto::ObstacleInfo::obstacle_id((const proto::ObstacleInfo *const)(v3 + 128));
      v15 = common::milog::MiLogStream::operator<<<int,(int *)0>(v14, (const int *)&val);
      common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v15, (const char (*)[14])", \"shape\" : \"");
      if ( proto::ObstacleInfo::shape((const proto::ObstacleInfo *const)(v3 + 128)) )
        common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
          (common::milog::MiLogStream *const)(v3 + 64),
          (const char (*)[19])"OBSTACLE_SHAPE_BOX");
      else
        common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
          (common::milog::MiLogStream *const)(v3 + 64),
          (const char (*)[23])"OBSTACLE_SHAPE_CAPSULE");
      v16 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              (common::milog::MiLogStream *const)(v3 + 64),
              (const char (*)[22])"\", \"center\" : { \"x\": ");
      v17 = proto::ObstacleInfo::center((const proto::ObstacleInfo *const)(v3 + 128));
      *(float *)v2.m128i_i32 = proto::Vector::x(v17);
      LODWORD(v49) = _mm_cvtsi128_si32(v2);
      v18 = common::milog::MiLogStream::operator<<<float,(float *)0>(v16, &v49);
      v19 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v18, (const char (*)[8])", \"y\": ");
      v20 = proto::ObstacleInfo::center((const proto::ObstacleInfo *const)(v3 + 128));
      *(float *)v2.m128i_i32 = proto::Vector::y(v20);
      LODWORD(v50) = _mm_cvtsi128_si32(v2);
      v21 = common::milog::MiLogStream::operator<<<float,(float *)0>(v19, &v50);
      v22 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v21, (const char (*)[8])", \"z\": ");
      v23 = proto::ObstacleInfo::center((const proto::ObstacleInfo *const)(v3 + 128));
      *(float *)v2.m128i_i32 = proto::Vector::z(v23);
      LODWORD(v51) = _mm_cvtsi128_si32(v2);
      v24 = common::milog::MiLogStream::operator<<<float,(float *)0>(v22, &v51);
      v25 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
              v24,
              (const char (*)[25])" }, \"rotation\" : { \"x\": ");
      v26 = proto::ObstacleInfo::rotation((const proto::ObstacleInfo *const)(v3 + 128));
      *(float *)v2.m128i_i32 = proto::MathQuaternion::x(v26);
      LODWORD(v52) = _mm_cvtsi128_si32(v2);
      v27 = common::milog::MiLogStream::operator<<<float,(float *)0>(v25, &v52);
      v28 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v27, (const char (*)[8])", \"y\": ");
      v29 = proto::ObstacleInfo::rotation((const proto::ObstacleInfo *const)(v3 + 128));
      *(float *)v2.m128i_i32 = proto::MathQuaternion::y(v29);
      LODWORD(v53) = _mm_cvtsi128_si32(v2);
      v30 = common::milog::MiLogStream::operator<<<float,(float *)0>(v28, &v53);
      v31 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v30, (const char (*)[8])", \"z\": ");
      v32 = proto::ObstacleInfo::rotation((const proto::ObstacleInfo *const)(v3 + 128));
      *(float *)v2.m128i_i32 = proto::MathQuaternion::z(v32);
      LODWORD(v54) = _mm_cvtsi128_si32(v2);
      v33 = common::milog::MiLogStream::operator<<<float,(float *)0>(v31, &v54);
      v34 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v33, (const char (*)[8])", \"w\": ");
      v35 = proto::ObstacleInfo::rotation((const proto::ObstacleInfo *const)(v3 + 128));
      *(float *)v2.m128i_i32 = proto::MathQuaternion::w(v35);
      LODWORD(v55) = _mm_cvtsi128_si32(v2);
      v36 = common::milog::MiLogStream::operator<<<float,(float *)0>(v34, &v55);
      v37 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
              v36,
              (const char (*)[24])" }, \"extents\" : { \"x\": ");
      v38 = proto::ObstacleInfo::extents((const proto::ObstacleInfo *const)(v3 + 128));
      v56 = proto::Vector3Int::x(v38);
      v39 = common::milog::MiLogStream::operator<<<int,(int *)0>(v37, &v56);
      v40 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v39, (const char (*)[8])", \"y\": ");
      v41 = proto::ObstacleInfo::extents((const proto::ObstacleInfo *const)(v3 + 128));
      v57 = proto::Vector3Int::y(v41);
      v42 = common::milog::MiLogStream::operator<<<int,(int *)0>(v40, &v57);
      v43 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v42, (const char (*)[8])", \"z\": ");
      v44 = proto::ObstacleInfo::extents((const proto::ObstacleInfo *const)(v3 + 128));
      val = proto::Vector3Int::z(v44);
      v45 = common::milog::MiLogStream::operator<<<int,(int *)0>(v43, (const int *)&val);
      common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v45, (const char (*)[6])" } },");
      proto::ObstacleInfo::~ObstacleInfo((proto::ObstacleInfo *const)(v3 + 128));
      ++i;
    }
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
      (common::milog::MiLogStream *const)(v3 + 64),
      (const char (*)[26])"], \"removeObstacleIds\": [");
    i_0 = 0;
    v46 = std::__shared_ptr_access<proto::ObstacleModifyNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const proto::ObstacleModifyNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    size_0 = proto::ObstacleModifyNotify::remove_obstacle_ids_size(v46);
    while ( i_0 < size_0 )
    {
      v47 = std::__shared_ptr_access<proto::ObstacleModifyNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const proto::ObstacleModifyNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      val = proto::ObstacleModifyNotify::remove_obstacle_ids(v47, i_0);
      v48 = common::milog::MiLogStream::operator<<<int,(int *)0>(
              (common::milog::MiLogStream *const)(v3 + 64),
              (const int *)&val);
      common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v48, (const char (*)[2])",");
      ++i_0;
    }
    common::milog::MiLogStream::operator<<<char [4],(char *[4])0>(
      (common::milog::MiLogStream *const)(v3 + 64),
      (const char (*)[4])off_1A5F71A0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
  }
  std::shared_ptr<proto::ObstacleModifyNotify const>::~shared_ptr((std::shared_ptr<const proto::ObstacleModifyNotify> *const)(v3 + 32));
  if ( v63 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8014) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = -168430091;
  }
};
