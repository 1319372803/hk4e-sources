// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/widget/widget_capture_animal.h

// Line 22: range 000000001635AB3A-000000001635AB87
void __cdecl WidgetCaptureAnimal::~WidgetCaptureAnimal(WidgetCaptureAnimal *const this)
{
  __int64 v1; // rsi
  __int64 *v2; // rdx

  v2 = &`vtable for'WidgetCaptureAnimal + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  *(_QWORD *)this->baseclass_0 = v2;
  WidgetAttachAbilityGroup::~WidgetAttachAbilityGroup((WidgetAttachAbilityGroup *const)this);
};

// Line 22: range 000000001635AB88-000000001635ABB2
void __cdecl WidgetCaptureAnimal::~WidgetCaptureAnimal(WidgetCaptureAnimal *const this)
{
  WidgetCaptureAnimal::~WidgetCaptureAnimal(this);
  operator delete(this, 0x98uLL);
};

// Line 26: range 000000001634A9D6-000000001634AB2C
void __fastcall ZN19WidgetCaptureAnimalCI210WidgetBaseER16PlayerWidgetCompR6Playerj(
        WidgetCaptureAnimal *const this,
        PlayerWidgetComp *a2,
        Player *a3,
        int a4)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  __int64 *v7; // rdx
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
  *(_QWORD *)(v4 + 16) = ZN19WidgetCaptureAnimalCI210WidgetBaseER16PlayerWidgetCompR6Playerj;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116348;
  *(_DWORD *)(v4 + 32) = a4;
  ZN24WidgetAttachAbilityGroupCI210WidgetBaseER16PlayerWidgetCompR6Playerj(
    (WidgetAttachAbilityGroup *const)this,
    a2,
    a3,
    *(_DWORD *)(v4 + 32));
  v7 = &`vtable for'WidgetCaptureAnimal + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  *(_QWORD *)this->baseclass_0 = v7;
  v8 = *(_BYTE *)(((unsigned __int64)&this->skill_flag_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->skill_flag_ >> 3) + 0x7FFF8000);
  if ( v8 )
    __asan_report_store4(&this->skill_flag_, (((_BYTE)this - 108) & 7u) + 3, v8);
  this->skill_flag_ = 0;
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

// Line 32: range 000000001623C9C6-000000001623CA01
std::type_index __cdecl WidgetCaptureAnimal::getTypeIndex(const WidgetCaptureAnimal *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&WidgetCaptureAnimal::widget_type >> 3) + 0x7FFF8000) )
    __asan_report_load8(&WidgetCaptureAnimal::widget_type);
  return WidgetCaptureAnimal::widget_type;
};
