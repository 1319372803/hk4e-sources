// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/widget/widget_quick_hit_tree.h

// Line 19: range 000000001635A570-000000001635A5BD
void __cdecl WidgetQuickHitTree::~WidgetQuickHitTree(WidgetQuickHitTree *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'WidgetQuickHitTree + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_WidgetBase = v2;
  WidgetUseAttachAbilityTrigger::~WidgetUseAttachAbilityTrigger((WidgetUseAttachAbilityTrigger *const)this);
};

// Line 19: range 000000001635A5BE-000000001635A5E8
void __cdecl WidgetQuickHitTree::~WidgetQuickHitTree(WidgetQuickHitTree *const this)
{
  WidgetQuickHitTree::~WidgetQuickHitTree(this);
  operator delete(this, 0x98uLL);
};

// Line 23: range 000000001634F3A8-000000001634F4FE
void __fastcall ZN18WidgetQuickHitTreeCI210WidgetBaseER16PlayerWidgetCompR6Playerj(
        WidgetQuickHitTree *const this,
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
  *(_QWORD *)(v4 + 16) = ZN18WidgetQuickHitTreeCI210WidgetBaseER16PlayerWidgetCompR6Playerj;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116348;
  *(_DWORD *)(v4 + 32) = a4;
  ZN29WidgetUseAttachAbilityTriggerCI210WidgetBaseER16PlayerWidgetCompR6Playerj(
    (WidgetUseAttachAbilityTrigger *const)this,
    a2,
    a3,
    *(_DWORD *)(v4 + 32));
  v7 = (int (**)(...))(&`vtable for'WidgetQuickHitTree + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_WidgetBase = v7;
  v8 = *(_BYTE *)(((unsigned __int64)&this->last_use_toy_hit_tree_flag_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_use_toy_hit_tree_flag_ >> 3)
                                                         + 0x7FFF8000);
  if ( v8 )
    __asan_report_store4(&this->last_use_toy_hit_tree_flag_, (((_BYTE)this - 108) & 7u) + 3, v8);
  this->last_use_toy_hit_tree_flag_ = 0;
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

// Line 25: range 000000001623DAE4-000000001623DB1F
std::type_index __cdecl WidgetQuickHitTree::getTypeIndex(const WidgetQuickHitTree *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&WidgetQuickHitTree::widget_type >> 3) + 0x7FFF8000) )
    __asan_report_load8(&WidgetQuickHitTree::widget_type);
  return WidgetQuickHitTree::widget_type;
};

// Line 29: range 0000000013EC275C-0000000013EC27B0
uint32_t __cdecl WidgetQuickHitTree::getLastUseToyHitTreeFlag(const WidgetQuickHitTree *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->last_use_toy_hit_tree_flag_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_use_toy_hit_tree_flag_ >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_load4(&this->last_use_toy_hit_tree_flag_);
  }
  return this->last_use_toy_hit_tree_flag_;
};

// Line 29: range 0000000013EC27B2-0000000013EC280D
void __cdecl WidgetQuickHitTree::setLastUseToyHitTreeFlag(
        WidgetQuickHitTree *const this,
        uint32_t last_use_toy_hit_tree_flag__out)
{
  bool v2; // dl

  v2 = *(_BYTE *)(((unsigned __int64)&this->last_use_toy_hit_tree_flag_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_use_toy_hit_tree_flag_ >> 3)
                                                         + 0x7FFF8000);
  if ( v2 )
    __asan_report_store4(&this->last_use_toy_hit_tree_flag_, (((_BYTE)this - 108) & 7u) + 3, v2);
  this->last_use_toy_hit_tree_flag_ = last_use_toy_hit_tree_flag__out;
};
