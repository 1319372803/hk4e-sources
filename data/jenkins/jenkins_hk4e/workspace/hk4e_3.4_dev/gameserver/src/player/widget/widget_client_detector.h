// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/widget/widget_client_detector.h

// Line 17: range 000000001635AA46-000000001635AA93
void __cdecl WidgetClientDetector::~WidgetClientDetector(WidgetClientDetector *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'WidgetClientDetector + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_WidgetBase = v2;
  WidgetBase::~WidgetBase((WidgetBase *const)this);
};

// Line 17: range 000000001635AA94-000000001635AABE
void __cdecl WidgetClientDetector::~WidgetClientDetector(WidgetClientDetector *const this)
{
  WidgetClientDetector::~WidgetClientDetector(this);
  operator delete(this, 0x98uLL);
};

// Line 21: range 000000001634B346-000000001634B49C
void __fastcall ZN20WidgetClientDetectorCI210WidgetBaseER16PlayerWidgetCompR6Playerj(
        WidgetClientDetector *const this,
        PlayerWidgetComp *a2,
        Player *a3,
        int a4)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  int (**v7)(...); // rdx
  bool v8; // dl
  char v11[96]; // [rsp+20h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v4 + 16) = ZN20WidgetClientDetectorCI210WidgetBaseER16PlayerWidgetCompR6Playerj;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116348;
  *(_DWORD *)(v4 + 32) = a4;
  WidgetBase::WidgetBase((WidgetBase *const)this, a2, a3, *(_DWORD *)(v4 + 32));
  v7 = (int (**)(...))(&`vtable for'WidgetClientDetector + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_WidgetBase = v7;
  v8 = *(_BYTE *)(((unsigned __int64)&this->curr_points_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->curr_points_ >> 3) + 0x7FFF8000);
  if ( v8 )
    __asan_report_store4(&this->curr_points_, (((_BYTE)this - 108) & 7u) + 3, v8);
  this->curr_points_ = 0;
  if ( v11 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 24: range 000000001623CC2E-000000001623CC69
std::type_index __cdecl WidgetClientDetector::getTypeIndex(const WidgetClientDetector *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&WidgetClientDetector::widget_type >> 3) + 0x7FFF8000) )
    __asan_report_load8(&WidgetClientDetector::widget_type);
  return WidgetClientDetector::widget_type;
};
