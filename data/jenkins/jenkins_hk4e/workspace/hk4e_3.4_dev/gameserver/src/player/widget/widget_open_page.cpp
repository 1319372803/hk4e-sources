// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/widget/widget_open_page.cpp

// Line 22: range 000000001621BDDA-000000001621BF69
int32_t __cdecl WidgetOpenPage::init(WidgetOpenPage *const this, data::ConfigBaseWidgetToyPtr *p_base_config_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t v5; // r14d
  int32_t result; // eax
  common::milog::MiLogStream v7; // [rsp+10h] [rbp-90h] BYREF
  char v8[112]; // [rsp+30h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 23 open_page_config_ptr:23";
  *(_QWORD *)(v2 + 16) = WidgetOpenPage::init;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::dynamic_pointer_cast<data::ConfigWidgetToyOpenPage,data::ConfigBaseWidgetToy>((const std::shared_ptr<data::ConfigBaseWidgetToy> *)(v2 + 32));
  if ( std::operator!=<data::ConfigWidgetToyOpenPage>(
         (const std::shared_ptr<data::ConfigWidgetToyOpenPage> *)(v2 + 32),
         0LL) )
  {
    v5 = 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/widget/widget_open_page.cpp",
      "init",
      28);
    common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
      &v7,
      (const char (*)[44])"convert ConfigWidgetToyOpenPage ptr failed.");
    common::milog::MiLogStream::~MiLogStream(&v7);
    v5 = 5;
  }
  std::shared_ptr<data::ConfigWidgetToyOpenPage>::~shared_ptr((std::shared_ptr<data::ConfigWidgetToyOpenPage> *const)(v2 + 32));
  result = v5;
  if ( v8 == (char *)v2 )
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

// Line 34: range 000000001621BF6A-000000001621BFF3
int32_t __cdecl WidgetOpenPage::onQuickUse(
        WidgetOpenPage *const this,
        const proto::QuickUseWidgetReq *req,
        proto::QuickUseWidgetRsp *rsp_0)
{
  common::milog::MiLogStream v4; // [rsp+20h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v4,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/widget/widget_open_page.cpp",
    "onQuickUse",
    36);
  common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
    &v4,
    (const char (*)[30])"in WidgetOpenPage::onQuickUse");
  common::milog::MiLogStream::~MiLogStream(&v4);
  return 0;
};
