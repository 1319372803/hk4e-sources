// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/widget/widget_gadget_builder.h

// Line 19: range 000000001630A4DA-000000001630A572
void __cdecl GadgetBuilderWidgetData::GadgetBuilderWidgetData(
        GadgetBuilderWidgetData *const this,
        const GadgetBuilderWidgetData *a2)
{
  uint32_t end_time; // ecx
  char v3; // al
  const GadgetBuilderWidgetData *v4; // [rsp+0h] [rbp-10h]

  v4 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  end_time = a2->end_time;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2, (_BYTE)this);
  }
  this->end_time = end_time;
  std::weak_ptr<Gadget>::weak_ptr(&this->gadget_wtr, &v4->gadget_wtr);
};

// Line 19: range 000000001623CE5A-000000001623CE78
void __cdecl GadgetBuilderWidgetData::~GadgetBuilderWidgetData(GadgetBuilderWidgetData *const this)
{
  std::weak_ptr<Gadget>::~weak_ptr(&this->gadget_wtr);
};

// Line 25: range 000000001635A84C-000000001635A8AB
void __cdecl WidgetGadgetBuilder::~WidgetGadgetBuilder(WidgetGadgetBuilder *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'WidgetGadgetBuilder + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_WidgetBase = v2;
  std::multimap<unsigned int,GadgetBuilderWidgetData>::~multimap(&this->gadget_builder_map_);
  WidgetBase::~WidgetBase(this);
};

// Line 25: range 000000001635A8AC-000000001635A8D6
void __cdecl WidgetGadgetBuilder::~WidgetGadgetBuilder(WidgetGadgetBuilder *const this)
{
  WidgetGadgetBuilder::~WidgetGadgetBuilder(this);
  operator delete(this, 0xC8uLL);
};

// Line 30: range 000000001634C86E-000000001634C98B
void __fastcall ZN19WidgetGadgetBuilderCI210WidgetBaseER16PlayerWidgetCompR6Playerj(
        WidgetGadgetBuilder *const this,
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
  *(_QWORD *)(v4 + 16) = ZN19WidgetGadgetBuilderCI210WidgetBaseER16PlayerWidgetCompR6Playerj;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116348;
  *(_DWORD *)(v4 + 32) = a4;
  WidgetBase::WidgetBase(this, a2, a3, *(_DWORD *)(v4 + 32));
  v7 = (int (**)(...))(&`vtable for'WidgetGadgetBuilder + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_WidgetBase = v7;
  std::multimap<unsigned int,GadgetBuilderWidgetData>::multimap(&this->gadget_builder_map_);
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

// Line 32: range 000000001623CD5A-000000001623CD95
std::type_index __cdecl WidgetGadgetBuilder::getTypeIndex(const WidgetGadgetBuilder *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&WidgetGadgetBuilder::widget_type >> 3) + 0x7FFF8000) )
    __asan_report_load8(&WidgetGadgetBuilder::widget_type);
  return WidgetGadgetBuilder::widget_type;
};
