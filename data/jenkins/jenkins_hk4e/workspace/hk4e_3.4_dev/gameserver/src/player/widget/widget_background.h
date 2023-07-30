// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/widget/widget_background.h

// Line 18: range 0000000016349EE0-0000000016349F2D
void __cdecl WidgetBackground::~WidgetBackground(WidgetBackground *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'WidgetBackground + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_WidgetBase = v2;
  WidgetBase::~WidgetBase((WidgetBase *const)this);
};

// Line 18: range 0000000016349F2E-0000000016349F58
void __cdecl WidgetBackground::~WidgetBackground(WidgetBackground *const this)
{
  WidgetBackground::~WidgetBackground(this);
  operator delete(this, 0x98uLL);
};

// Line 22: range 0000000016349A42-0000000016349B92
void __fastcall ZN16WidgetBackgroundCI210WidgetBaseER16PlayerWidgetCompR6Playerj(
        WidgetBackground *const this,
        PlayerWidgetComp *a2,
        Player *a3,
        int a4)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  int (**v7)(...); // rdx
  __int64 v8; // rsi
  __int64 v9; // rdx
  char v12[96]; // [rsp+20h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v4 + 16) = ZN16WidgetBackgroundCI210WidgetBaseER16PlayerWidgetCompR6Playerj;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116348;
  *(_DWORD *)(v4 + 32) = a4;
  WidgetBase::WidgetBase((WidgetBase *const)this, a2, a3, *(_DWORD *)(v4 + 32));
  v7 = (int (**)(...))(&`vtable for'WidgetBackground + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_WidgetBase = v7;
  v8 = ((_BYTE)this - 111) & 7;
  v9 = (*(_BYTE *)(((unsigned __int64)&this->is_active_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v8 >= *(_BYTE *)(((unsigned __int64)&this->is_active_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v9 )
    __asan_report_store1(&this->is_active_, v8, v9);
  this->is_active_ = 0;
  if ( v12 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 27: range 000000001623C89A-000000001623C8D5
std::type_index __cdecl WidgetBackground::getTypeIndex(const WidgetBackground *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&WidgetBackground::widget_type >> 3) + 0x7FFF8000) )
    __asan_report_load8(&WidgetBackground::widget_type);
  return WidgetBackground::widget_type;
};

// Line 202: range 0000000014404BEC-0000000014404C3E
bool __cdecl WidgetBackground::getIsActive(const WidgetBackground *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_active_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 111) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_active_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_active_);
  }
  return this->is_active_;
};
