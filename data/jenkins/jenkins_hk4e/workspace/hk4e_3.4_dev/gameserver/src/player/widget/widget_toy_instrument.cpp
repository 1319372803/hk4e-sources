// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/widget/widget_toy_instrument.cpp

// Line 22: range 000000001621E822-000000001621E9B1
int32_t __cdecl WidgetToyInstrument::init(
        WidgetToyInstrument *const this,
        data::ConfigBaseWidgetToyPtr *p_base_config_ptr)
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
  *(_QWORD *)(v2 + 16) = WidgetToyInstrument::init;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::dynamic_pointer_cast<data::ConfigWidgetToyInstrument,data::ConfigBaseWidgetToy>((const std::shared_ptr<data::ConfigBaseWidgetToy> *)(v2 + 32));
  if ( std::operator!=<data::ConfigWidgetToyInstrument>(
         (const std::shared_ptr<data::ConfigWidgetToyInstrument> *)(v2 + 32),
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
      "./src/player/widget/widget_toy_instrument.cpp",
      "init",
      28);
    common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
      &v7,
      (const char (*)[46])"convert ConfigWidgetToyInstrument ptr failed.");
    common::milog::MiLogStream::~MiLogStream(&v7);
    v5 = 5;
  }
  std::shared_ptr<data::ConfigWidgetToyInstrument>::~shared_ptr((std::shared_ptr<data::ConfigWidgetToyInstrument> *const)(v2 + 32));
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

// Line 34: range 000000001621E9B2-000000001621EA3B
int32_t __cdecl WidgetToyInstrument::onQuickUse(
        WidgetToyInstrument *const this,
        const proto::QuickUseWidgetReq *req,
        proto::QuickUseWidgetRsp *rsp_0)
{
  common::milog::MiLogStream v4; // [rsp+20h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v4,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/widget/widget_toy_instrument.cpp",
    "onQuickUse",
    36);
  common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
    &v4,
    (const char (*)[35])"in WidgetToyInstrument::onQuickUse");
  common::milog::MiLogStream::~MiLogStream(&v4);
  return 0;
};
