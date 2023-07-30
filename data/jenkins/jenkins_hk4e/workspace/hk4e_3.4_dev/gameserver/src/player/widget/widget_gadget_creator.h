// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/widget/widget_gadget_creator.h

// Line 17: range 000000001634BED4-000000001634BF21
void __cdecl WidgetGadgetCreator::~WidgetGadgetCreator(WidgetGadgetCreator *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'WidgetGadgetCreator + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_WidgetBase = v2;
  WidgetBase::~WidgetBase(this);
};

// Line 17: range 000000001634BF22-000000001634BF4C
void __cdecl WidgetGadgetCreator::~WidgetGadgetCreator(WidgetGadgetCreator *const this)
{
  WidgetGadgetCreator::~WidgetGadgetCreator(this);
  operator delete(this, 0x98uLL);
};

// Line 20: range 000000001634BDC8-000000001634BED3
void __fastcall ZN19WidgetGadgetCreatorCI210WidgetBaseER16PlayerWidgetCompR6Playerj(
        WidgetGadgetCreator *const this,
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
  *(_QWORD *)(v4 + 16) = ZN19WidgetGadgetCreatorCI210WidgetBaseER16PlayerWidgetCompR6Playerj;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116348;
  *(_DWORD *)(v4 + 32) = a4;
  WidgetBase::WidgetBase(this, a2, a3, *(_DWORD *)(v4 + 32));
  v7 = (int (**)(...))(&`vtable for'WidgetGadgetCreator + 2);
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
