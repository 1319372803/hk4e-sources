// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/widget/widget_background.cpp

// Line 25: range 00000000161FDA78-00000000161FDAFD
int32_t __cdecl WidgetBackground::fromDetailBin(
        WidgetBackground *const this,
        const proto::WidgetDetailBin *detail_bin,
        const proto::WidgetBin *widget_bin)
{
  const proto::WidgetDetailBin *v3; // rax
  bool is_active; // cl
  char v5; // dl
  __int64 v6; // rdx
  const proto::WidgetBackgroundBin *bin; // [rsp+28h] [rbp-8h]

  v3 = proto::WidgetBin::detail_bin(widget_bin);
  bin = proto::WidgetDetailBin::background_widget(v3);
  is_active = proto::WidgetBackgroundBin::is_active(bin);
  v5 = *(_BYTE *)(((unsigned __int64)&this->is_active_ >> 3) + 0x7FFF8000);
  LOBYTE(detail_bin) = v5 != 0;
  v6 = (v5 != 0) & (unsigned __int8)((((unsigned __int8)this - 111) & 7) >= v5);
  if ( (_BYTE)v6 )
    __asan_report_store1(&this->is_active_, detail_bin, v6);
  this->is_active_ = is_active;
  return 0;
};

// Line 32: range 00000000161FDAFE-00000000161FDB86
int32_t __cdecl WidgetBackground::toDetailBin(
        const WidgetBackground *const this,
        proto::WidgetDetailBin *detail_bin,
        proto::WidgetBin *widget_bin)
{
  proto::WidgetDetailBin *v3; // rax
  proto::WidgetBackgroundBin *bin; // [rsp+28h] [rbp-8h]

  v3 = proto::WidgetBin::mutable_detail_bin(widget_bin);
  bin = proto::WidgetDetailBin::mutable_background_widget(v3);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_active_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 111) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_active_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_active_);
  }
  proto::WidgetBackgroundBin::set_is_active(bin, this->is_active_);
  return 0;
};

// Line 39: range 00000000161FDB88-00000000161FDDAD
int32_t __cdecl WidgetBackground::init(WidgetBackground *const this, data::ConfigBaseWidgetToyPtr *p_base_config_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  char *v5; // rsi
  int32_t v6; // r14d
  std::__shared_ptr_access<data::ConfigWidgetBackground,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rdx
  bool *p_default_active_state; // rax
  bool default_active_state; // cl
  char v10; // dl
  __int64 v11; // rdx
  int32_t result; // eax
  common::milog::MiLogStream v13; // [rsp+10h] [rbp-90h] BYREF
  char v14[112]; // [rsp+30h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 13 config_ptr:40";
  *(_QWORD *)(v2 + 16) = WidgetBackground::init;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::dynamic_pointer_cast<data::ConfigWidgetBackground,data::ConfigBaseWidgetToy>((const std::shared_ptr<data::ConfigBaseWidgetToy> *)(v2 + 32));
  v5 = (char *)(v2 + 32);
  if ( std::operator==<data::ConfigWidgetBackground>(
         0LL,
         (const std::shared_ptr<data::ConfigWidgetBackground> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/widget/widget_background.cpp",
      "init",
      43);
    common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
      &v13,
      (const char (*)[63])"dynamic_pointer_cast to ConfigWidgetBackground pointer failed.");
    common::milog::MiLogStream::~MiLogStream(&v13);
    v6 = 5;
  }
  else
  {
    v7 = std::__shared_ptr_access<data::ConfigWidgetBackground,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigWidgetBackground,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    p_default_active_state = &v7->default_active_state;
    if ( *(_BYTE *)(((unsigned __int64)p_default_active_state >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)p_default_active_state & 7) >= *(_BYTE *)(((unsigned __int64)p_default_active_state >> 3)
                                                                   + 0x7FFF8000) )
    {
      __asan_report_load1(p_default_active_state);
    }
    default_active_state = v7->default_active_state;
    v10 = *(_BYTE *)(((unsigned __int64)&this->is_active_ >> 3) + 0x7FFF8000);
    LOBYTE(v5) = v10 != 0;
    v11 = (v10 != 0) & (unsigned __int8)((((unsigned __int8)this - 111) & 7) >= v10);
    if ( (_BYTE)v11 )
      __asan_report_store1(&this->is_active_, v5, v11);
    this->is_active_ = default_active_state;
    v6 = 0;
  }
  std::shared_ptr<data::ConfigWidgetBackground>::~shared_ptr((std::shared_ptr<data::ConfigWidgetBackground> *const)(v2 + 32));
  result = v6;
  if ( v14 == (char *)v2 )
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

// Line 51: range 00000000161FDDAE-00000000161FDF69
int32_t __cdecl WidgetBackground::onChangeActiveState(
        WidgetBackground *const this,
        const proto::ChangeWidgetBackgroundActiveStateReq *req,
        proto::ChangeWidgetBackgroundActiveStateRsp *rsp_0)
{
  __int64 v3; // rsi
  bool is_active; // bl
  bool v6; // cl
  char v7; // dl
  __int64 v8; // rdx
  common::milog::MiLogStream *v9; // rcx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream v13; // [rsp+20h] [rbp-30h] BYREF

  v3 = ((_BYTE)this - 111) & 7;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_active_ >> 3) + 0x7FFF8000) != 0
    && (char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_active_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_active_);
  }
  is_active = this->is_active_;
  if ( is_active == proto::ChangeWidgetBackgroundActiveStateReq::is_active(req) )
    return 0;
  v6 = proto::ChangeWidgetBackgroundActiveStateReq::is_active(req);
  v7 = *(_BYTE *)(((unsigned __int64)&this->is_active_ >> 3) + 0x7FFF8000);
  LOBYTE(v3) = v7 != 0;
  v8 = (v7 != 0) & (unsigned __int8)((((unsigned __int8)this - 111) & 7) >= v7);
  if ( (_BYTE)v8 )
    __asan_report_store1(&this->is_active_, v3, v8);
  this->is_active_ = v6;
  common::milog::MiLogStream::create(
    &v13,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/widget/widget_background.cpp",
    "onChangeActiveState",
    57);
  v9 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
         &v13,
         (const char (*)[31])"change widget active state to:");
  if ( *(_BYTE *)(((unsigned __int64)&this->is_active_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 111) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_active_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_active_);
  }
  v10 = common::milog::MiLogStream::operator<<(v9, this->is_active_);
  v11 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v10, (const char (*)[15])", material_id:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &this->material_id_);
  common::milog::MiLogStream::~MiLogStream(&v13);
  return 0;
};

// Line 62: range 000000001623C8D6-000000001623C911
std::type_index __cdecl WidgetFishing::getTypeIndex(const WidgetFishing *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&WidgetFishing::widget_type >> 3) + 0x7FFF8000) )
    __asan_report_load8(&WidgetFishing::widget_type);
  return WidgetFishing::widget_type;
};

// Line 62: range 0000000016349F5A-000000001634A065
void __fastcall ZN13WidgetFishingCI210WidgetBaseER16PlayerWidgetCompR6Playerj(
        WidgetFishing *const this,
        PlayerWidgetComp *a2,
        Player *a3,
        int a4)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  int (**v7)(...); // rdx
  char v10[96]; // [rsp+20h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v4 + 16) = ZN13WidgetFishingCI210WidgetBaseER16PlayerWidgetCompR6Playerj;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116348;
  *(_DWORD *)(v4 + 32) = a4;
  ZN16WidgetBackgroundCI210WidgetBaseER16PlayerWidgetCompR6Playerj(this, a2, a3, *(_DWORD *)(v4 + 32));
  v7 = (int (**)(...))(&`vtable for'WidgetFishing + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_WidgetBase = v7;
  if ( v10 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 62: range 000000001635AC2E-000000001635AC7B
void __cdecl WidgetFishing::~WidgetFishing(WidgetFishing *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'WidgetFishing + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_WidgetBase = v2;
  WidgetBackground::~WidgetBackground(this);
};

// Line 62: range 000000001635AC7C-000000001635ACA6
void __cdecl WidgetFishing::~WidgetFishing(WidgetFishing *const this)
{
  WidgetFishing::~WidgetFishing(this);
  operator delete(this, 0x98uLL);
};
