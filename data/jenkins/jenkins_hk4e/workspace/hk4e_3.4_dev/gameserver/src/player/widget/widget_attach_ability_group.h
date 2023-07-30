// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/widget/widget_attach_ability_group.h

// Line 18: range 000000001634A95C-000000001634A9A9
void __cdecl WidgetAttachAbilityGroup::~WidgetAttachAbilityGroup(WidgetAttachAbilityGroup *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'WidgetAttachAbilityGroup + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_WidgetBase = v2;
  WidgetBase::~WidgetBase((WidgetBase *const)this);
};

// Line 18: range 000000001634A9AA-000000001634A9D4
void __cdecl WidgetAttachAbilityGroup::~WidgetAttachAbilityGroup(WidgetAttachAbilityGroup *const this)
{
  WidgetAttachAbilityGroup::~WidgetAttachAbilityGroup(this);
  operator delete(this, 0x98uLL);
};

// Line 22: range 000000001634A80A-000000001634A95A
void __fastcall ZN24WidgetAttachAbilityGroupCI210WidgetBaseER16PlayerWidgetCompR6Playerj(
        WidgetAttachAbilityGroup *const this,
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
  *(_QWORD *)(v4 + 16) = ZN24WidgetAttachAbilityGroupCI210WidgetBaseER16PlayerWidgetCompR6Playerj;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116348;
  *(_DWORD *)(v4 + 32) = a4;
  WidgetBase::WidgetBase((WidgetBase *const)this, a2, a3, *(_DWORD *)(v4 + 32));
  v7 = (int (**)(...))(&`vtable for'WidgetAttachAbilityGroup + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_WidgetBase = v7;
  v8 = ((_BYTE)this - 111) & 7;
  v9 = (*(_BYTE *)(((unsigned __int64)&this->is_attach_ability_group_widget_attached_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v8 >= *(_BYTE *)(((unsigned __int64)&this->is_attach_ability_group_widget_attached_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v9 )
    __asan_report_store1(&this->is_attach_ability_group_widget_attached_, v8, v9);
  this->is_attach_ability_group_widget_attached_ = 0;
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

// Line 26: range 0000000017A07DD8-0000000017A07E13
std::type_index __cdecl WidgetAttachAbilityGroup::getTypeIndex(const WidgetAttachAbilityGroup *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&WidgetAttachAbilityGroup::widget_type >> 3) + 0x7FFF8000) )
    __asan_report_load8(&WidgetAttachAbilityGroup::widget_type);
  return WidgetAttachAbilityGroup::widget_type;
};
