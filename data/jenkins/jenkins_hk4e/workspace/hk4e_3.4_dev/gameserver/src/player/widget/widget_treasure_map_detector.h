// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/widget/widget_treasure_map_detector.h

// Line 20: range 000000001635A1F6-000000001635A267
void __cdecl WidgetTreasureMapDetector::~WidgetTreasureMapDetector(WidgetTreasureMapDetector *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'WidgetTreasureMapDetector + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_WidgetBase = v2;
  std::weak_ptr<Entity>::~weak_ptr(&this->treasure_detector_entity_wtr_);
  PlayerUnixTimer::~PlayerUnixTimer(&this->treasure_detector_timer_);
  WidgetBase::~WidgetBase(this);
};

// Line 20: range 000000001635A268-000000001635A292
void __cdecl WidgetTreasureMapDetector::~WidgetTreasureMapDetector(WidgetTreasureMapDetector *const this)
{
  WidgetTreasureMapDetector::~WidgetTreasureMapDetector(this);
  operator delete(this, 0x100uLL);
};

// Line 25: range 000000001635125C-00000000163514CF
void __fastcall ZN25WidgetTreasureMapDetectorCI210WidgetBaseER16PlayerWidgetCompR6Playerj(
        WidgetTreasureMapDetector *const this,
        PlayerWidgetComp *a2,
        Player *a3,
        int a4)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  int (**v7)(...); // rdx
  WidgetTreasureMapDetector **v8; // r8
  const std::_Placeholder<1> *v9; // r9
  WidgetTreasureMapDetector *v12; // [rsp+28h] [rbp-C8h] BYREF
  PlayerPtr p_player_ptr; // [rsp+30h] [rbp-C0h] BYREF
  void (*__f[2])(WidgetTreasureMapDetector *, unsigned __int64); // [rsp+40h] [rbp-B0h] BYREF
  std::_Bind_helper<false,void (WidgetTreasureMapDetector::*)(long unsigned int),WidgetTreasureMapDetector*,const std::_Placeholder<1>&>::type p___f; // [rsp+50h] [rbp-A0h] BYREF
  std::function<void(long unsigned int)> p_callback; // [rsp+70h] [rbp-80h] BYREF
  char v17[96]; // [rsp+90h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v4 + 16) = ZN25WidgetTreasureMapDetectorCI210WidgetBaseER16PlayerWidgetCompR6Playerj;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116348;
  *(_DWORD *)(v4 + 32) = a4;
  WidgetBase::WidgetBase(this, a2, a3, *(_DWORD *)(v4 + 32));
  v7 = (int (**)(...))(&`vtable for'WidgetTreasureMapDetector + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_WidgetBase = v7;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  toPtr<Player,Player>((Player *)&p_player_ptr);
  v12 = this;
  __f[0] = (void (*)(WidgetTreasureMapDetector *, unsigned __int64))WidgetTreasureMapDetector::onTreasureDetectorTimer;
  __f[1] = 0LL;
  std::bind<void (WidgetTreasureMapDetector::*)(unsigned long),WidgetTreasureMapDetector*,std::_Placeholder<1> const&>(
    &p___f,
    __f,
    &v12,
    (const std::_Placeholder<1> *)&std::placeholders::_1,
    v8,
    v9);
  std::function<void ()(unsigned long)>::function<std::_Bind<void (WidgetTreasureMapDetector::*)(unsigned long) ()(WidgetTreasureMapDetector*,std::_Placeholder<1>)>,void,void>(
    &p_callback,
    &p___f);
  PlayerUnixTimer::PlayerUnixTimer(&this->treasure_detector_timer_, &p_player_ptr, &p_callback);
  std::function<void ()(unsigned long)>::~function(&p_callback);
  std::shared_ptr<Player>::~shared_ptr(&p_player_ptr);
  std::weak_ptr<Entity>::weak_ptr(&this->treasure_detector_entity_wtr_);
  if ( v17 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 27: range 000000001623DEE0-000000001623DF1B
std::type_index __cdecl WidgetTreasureMapDetector::getTypeIndex(const WidgetTreasureMapDetector *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&WidgetTreasureMapDetector::widget_type >> 3) + 0x7FFF8000) )
    __asan_report_load8(&WidgetTreasureMapDetector::widget_type);
  return WidgetTreasureMapDetector::widget_type;
};
