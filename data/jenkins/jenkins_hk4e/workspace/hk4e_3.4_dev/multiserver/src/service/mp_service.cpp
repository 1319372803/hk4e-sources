// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/service/mp_service.cpp

// Line 21: range 000000000DE8E2DE-000000000DE8E628
int32_t __cdecl MpService::init(MpService *const this, common::tools::PTree *pt)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t v5; // r14d
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+1Bh] [rbp-95h] BYREF
  uint32_t thread_num; // [rsp+1Ch] [rbp-94h]
  std::string child_name; // [rsp+20h] [rbp-90h] BYREF
  char v10[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 8 ms_pt:23";
  *(_QWORD *)(v2 + 16) = MpService::init;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&child_name, "Root.ServiceList.Mpservice", &__a);
  common::tools::PTree::getChild(pt, &child_name);
  std::string::~string(&child_name);
  std::allocator<char>::~allocator(&__a);
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&child_name, "<xmlattr>.thread_num", &__a);
  thread_num = common::tools::PTree::get<unsigned int>((const common::tools::PTree *const)(v2 + 32), &child_name, 1u);
  std::string::~string(&child_name);
  std::allocator<char>::~allocator(&__a);
  if ( thread_num == 1 )
  {
    if ( ServiceBase::init(this, (common::tools::PTree *)(v2 + 32)) )
    {
      v5 = -1;
    }
    else if ( ServiceBase::addHandler<MpHandler>(this) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&child_name,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/service/mp_service.cpp",
        "init",
        40);
      common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)&child_name, off_1BB49CC0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&child_name);
      v5 = -1;
    }
    else
    {
      v5 = 0;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&child_name,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/service/mp_service.cpp",
      "init",
      29);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
      (common::milog::MiLogStream *const)&child_name,
      (const char (*)[26])"mpservice thread_num != 1");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&child_name);
    v5 = -1;
  }
  common::tools::PTree::~PTree((common::tools::PTree *const)(v2 + 32));
  result = v5;
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 47: range 000000000DE8E62A-000000000DE8E63B
int32_t __cdecl MpService::onWorkThreadStart(MpService *const this, uint32_t thread_index)
{
  return 0;
};
