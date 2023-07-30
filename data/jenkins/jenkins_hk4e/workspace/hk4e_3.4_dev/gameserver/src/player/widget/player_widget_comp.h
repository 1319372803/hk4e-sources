// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/widget/player_widget_comp.h

// Line 30: range 00000000144C9428-00000000144C953B
void __cdecl WidgetAnchorPointData::WidgetAnchorPointData(WidgetAnchorPointData *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  bool v3; // dl

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1, (_BYTE)this);
  }
  this->id = 0;
  Vector3::Vector3(&this->pos, 0.0, 0.0, 0.0);
  Vector3::Vector3(&this->rot, 0.0, 0.0, 0.0);
  v2 = (((_BYTE)this + 28) & 7u) + 3;
  v3 = *(_BYTE *)(((unsigned __int64)&this->end_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->end_time >> 3) + 0x7FFF8000);
  if ( v3 )
    __asan_report_store4(&this->end_time, v2, v3);
  this->end_time = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->scene_id, v2, (_BYTE)this + 32);
  }
  this->scene_id = 0;
  std::shared_ptr<Gadget>::shared_ptr(&this->gadget_ptr);
};

// Line 30: range 00000000144A297C-00000000144A299A
void __cdecl WidgetAnchorPointData::~WidgetAnchorPointData(WidgetAnchorPointData *const this)
{
  std::shared_ptr<Gadget>::~shared_ptr(&this->gadget_ptr);
};

// Line 42: range 0000000014405206-000000001440529E
void __cdecl WidgetBonfireData::WidgetBonfireData(WidgetBonfireData *const this, const WidgetBonfireData *a2)
{
  uint32_t end_time; // ecx
  char v3; // al
  const WidgetBonfireData *v4; // [rsp+0h] [rbp-10h]

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

// Line 42: range 00000000144051E6-0000000014405204
void __cdecl WidgetBonfireData::~WidgetBonfireData(WidgetBonfireData *const this)
{
  std::weak_ptr<Gadget>::~weak_ptr(&this->gadget_wtr);
};

// Line 49: range 000000001440541C-0000000014405444
WidgetLunchBoxData *__cdecl WidgetLunchBoxData::operator=(WidgetLunchBoxData *const this, WidgetLunchBoxData *a2)
{
  std::map<unsigned int,unsigned int>::operator=(&this->slot_material_map, &a2->slot_material_map);
  return this;
};

// Line 49: range 0000000017486A5A-0000000017486A74
void __cdecl WidgetLunchBoxData::WidgetLunchBoxData(WidgetLunchBoxData *const this)
{
  std::map<unsigned int,unsigned int>::map(&this->slot_material_map);
};

// Line 49: range 00000000144EDA2A-00000000144EDA44
void __cdecl WidgetLunchBoxData::~WidgetLunchBoxData(WidgetLunchBoxData *const this)
{
  std::map<unsigned int,unsigned int>::~map(&this->slot_material_map);
};

// Line 59: range 00000000144B6E8C-00000000144B6F01
void __cdecl WidgetCoolDownInfo::WidgetCoolDownInfo(WidgetCoolDownInfo *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->last_use_time = 0LL;
  if ( *(char *)(((unsigned __int64)&this->is_success >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_success, v1, &this->is_success);
  this->is_success = 1;
};

// Line 68: range 00000000144EDB84-00000000144EDBAE
void __cdecl PlayerWidgetComp::~PlayerWidgetComp(PlayerWidgetComp *const this)
{
  PlayerWidgetComp::~PlayerWidgetComp(this);
  operator delete(this, 0x1B0uLL);
};

// Line 68: range 00000000144EDA9A-00000000144EDB83
void __cdecl PlayerWidgetComp::~PlayerWidgetComp(PlayerWidgetComp *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'PlayerWidgetComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_PlayerCompBase = v2;
  std::map<unsigned int,std::shared_ptr<WidgetBase>>::~map(&this->widget_pool_);
  std::map<data::WidgetOccupyTag,std::weak_ptr<WidgetBase>>::~map(&this->widget_slot_map_);
  std::multimap<unsigned int,WidgetBonfireData>::~multimap(&this->bonfire_map_);
  std::shared_ptr<UnixTimer>::~shared_ptr(&this->widget_timer_ptr_);
  std::unordered_map<unsigned int,WidgetCoolDownInfo>::~unordered_map(&this->normal_cool_down_info_map_);
  std::unordered_map<unsigned int,WidgetCoolDownInfo>::~unordered_map(&this->group_cool_down_info_map_);
  WidgetLunchBoxData::~WidgetLunchBoxData(&this->lunch_box_data_);
  std::map<unsigned int,WidgetAnchorPointData>::~map(&this->anchor_point_map_);
  std::shared_ptr<WidgetGadgetMgr>::~shared_ptr(&this->widget_gadget_mgr_ptr_);
  PlayerCompBase::~PlayerCompBase(this);
};

// Line 71: range 00000000172141C3-00000000172141CD
uint32_t __cdecl PlayerWidgetComp::getType()
{
  return 40;
};

// Line 74: range 0000000017486C78-0000000017486EEE
void __cdecl ZN16PlayerWidgetCompCI214PlayerCompBaseER6Player(PlayerWidgetComp *const this, Player *a2)
{
  int (**v2)(...); // rdx
  Player *player; // rax
  Player *v4; // rsi
  __int64 v5; // rsi
  bool v6; // dl
  __int64 v7; // rsi
  __int64 v8; // rdx

  PlayerCompBase::PlayerCompBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'PlayerWidgetComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_PlayerCompBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  player = this->player_;
  if ( *(_WORD *)(((unsigned __int64)&this->widget_gadget_mgr_ptr_ >> 3) + 0x7FFF8000) )
    player = (Player *)__asan_report_store16(&this->widget_gadget_mgr_ptr_, a2);
  v4 = player;
  common::tools::perf::make_shared<WidgetGadgetMgr,Player &>((Player *)&this->widget_gadget_mgr_ptr_, player);
  if ( *(_BYTE *)(((unsigned __int64)&this->next_widget_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->next_widget_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->next_widget_id_, v4, (_BYTE)this + 48);
  }
  this->next_widget_id_ = 1;
  v5 = (((_BYTE)this + 52) & 7u) + 3;
  v6 = *(_BYTE *)(((unsigned __int64)&this->last_use_anchor_point_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_use_anchor_point_time_ >> 3)
                                                        + 0x7FFF8000);
  if ( v6 )
    __asan_report_store4(&this->last_use_anchor_point_time_, v5, v6);
  this->last_use_anchor_point_time_ = 0;
  std::map<unsigned int,WidgetAnchorPointData>::map(&this->anchor_point_map_);
  WidgetLunchBoxData::WidgetLunchBoxData(&this->lunch_box_data_);
  std::unordered_map<unsigned int,WidgetCoolDownInfo>::unordered_map(&this->group_cool_down_info_map_);
  std::unordered_map<unsigned int,WidgetCoolDownInfo>::unordered_map(&this->normal_cool_down_info_map_);
  std::shared_ptr<UnixTimer>::shared_ptr(&this->widget_timer_ptr_);
  std::multimap<unsigned int,WidgetBonfireData>::multimap(&this->bonfire_map_);
  std::map<data::WidgetOccupyTag,std::weak_ptr<WidgetBase>>::map(&this->widget_slot_map_);
  std::map<unsigned int,std::shared_ptr<WidgetBase>>::map(&this->widget_pool_);
  if ( *(char *)(((unsigned __int64)&this->is_oneoff_gather_point_detector_transfered_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(
      &this->is_oneoff_gather_point_detector_transfered_,
      v5,
      &this->is_oneoff_gather_point_detector_transfered_);
  this->is_oneoff_gather_point_detector_transfered_ = 0;
  v7 = ((_BYTE)this - 87) & 7;
  v8 = (*(_BYTE *)(((unsigned __int64)&this->is_client_collector_transfered_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&this->is_client_collector_transfered_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_store1(&this->is_client_collector_transfered_, v7, v8);
  this->is_client_collector_transfered_ = 0;
};

// Line 165: range 00000000180AC652-00000000180AC663
const WidgetLunchBoxData *__cdecl PlayerWidgetComp::getLunchBoxData(const PlayerWidgetComp *const this)
{
  return &this->lunch_box_data_;
};

// Line 202: range 0000000014404BCE-0000000014404BEB
WidgetGadgetMgr *__cdecl PlayerWidgetComp::getWidgetGadgetMgr(PlayerWidgetComp *const this)
{
  return std::__shared_ptr_access<WidgetGadgetMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<WidgetGadgetMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->widget_gadget_mgr_ptr_);
};

// Line 294: range 000000001441407A-000000001441431E
void __cdecl PlayerWidgetComp::foreachWidget<WidgetBackground>(
        const PlayerWidgetComp *const this,
        std::function<ForeachPolicy(WidgetBackground&)> *p_func)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // rbx
  int v5; // r14d
  WidgetBackground *v6; // rdx
  std::map<unsigned int,std::shared_ptr<WidgetBase>>::iterator __for_begin; // [rsp+10h] [rbp-100h] BYREF
  std::map<unsigned int,std::shared_ptr<WidgetBase>>::iterator __for_end; // [rsp+18h] [rbp-F8h] BYREF
  std::map<unsigned int,std::shared_ptr<WidgetBase>> *__for_range; // [rsp+20h] [rbp-F0h]
  const std::pair<unsigned int const,std::shared_ptr<WidgetBase> > *v10; // [rsp+28h] [rbp-E8h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<WidgetBase> > >::type *_; // [rsp+30h] [rbp-E0h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<WidgetBase> > >::type *base_widget_ptr; // [rsp+38h] [rbp-D8h]
  char v13[208]; // [rsp+40h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 16 14 widget_ptr:300 80 48 20 copy_widget_pool:297";
  *(_QWORD *)(v2 + 16) = PlayerWidgetComp::foreachWidget<WidgetBackground>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = 62194;
  v4[536862724] = -202116109;
  std::map<unsigned int,std::shared_ptr<WidgetBase>>::map(
    (std::map<unsigned int,std::shared_ptr<WidgetBase>> *const)(v2 + 80),
    &this->widget_pool_);
  __for_range = (std::map<unsigned int,std::shared_ptr<WidgetBase>> *)(v2 + 80);
  __for_begin._M_node = std::map<unsigned int,std::shared_ptr<WidgetBase>>::begin((std::map<unsigned int,std::shared_ptr<WidgetBase>> *const)(v2 + 80))._M_node;
  __for_end._M_node = std::map<unsigned int,std::shared_ptr<WidgetBase>>::end((std::map<unsigned int,std::shared_ptr<WidgetBase>> *const)(v2 + 80))._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v10 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<WidgetBase>>>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,std::shared_ptr<WidgetBase>>(v10);
    base_widget_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<WidgetBase> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<WidgetBase>>(v10);
    std::dynamic_pointer_cast<WidgetBackground,WidgetBase>((const std::shared_ptr<WidgetBase> *)(v2 + 48));
    if ( std::operator==<WidgetBackground>(0LL, (const std::shared_ptr<WidgetBackground> *)(v2 + 48)) )
    {
      v5 = 0;
    }
    else
    {
      v6 = std::__shared_ptr_access<WidgetBackground,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<WidgetBackground,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
      v5 = std::function<ForeachPolicy ()(WidgetBackground &)>::operator()(p_func, v6) ? 1 : 2;
    }
    std::shared_ptr<WidgetBackground>::~shared_ptr((std::shared_ptr<WidgetBackground> *const)(v2 + 48));
    if ( v5 )
    {
      if ( v5 != 2 )
        break;
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<WidgetBase>>>::operator++(&__for_begin);
  }
  std::map<unsigned int,std::shared_ptr<WidgetBase>>::~map((std::map<unsigned int,std::shared_ptr<WidgetBase>> *const)(v2 + 80));
  if ( v13 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 294: range 000000001667A166-000000001667A40A
void __cdecl PlayerWidgetComp::foreachWidget<WidgetDigScanner>(
        const PlayerWidgetComp *const this,
        std::function<ForeachPolicy(WidgetDigScanner&)> *p_func)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // rbx
  int v5; // r14d
  std::__shared_ptr_access<WidgetDigScanner,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rdx
  std::map<unsigned int,std::shared_ptr<WidgetBase>>::iterator __for_begin; // [rsp+10h] [rbp-100h] BYREF
  std::map<unsigned int,std::shared_ptr<WidgetBase>>::iterator __for_end; // [rsp+18h] [rbp-F8h] BYREF
  std::map<unsigned int,std::shared_ptr<WidgetBase>> *__for_range; // [rsp+20h] [rbp-F0h]
  const std::pair<unsigned int const,std::shared_ptr<WidgetBase> > *v10; // [rsp+28h] [rbp-E8h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<WidgetBase> > >::type *_; // [rsp+30h] [rbp-E0h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<WidgetBase> > >::type *base_widget_ptr; // [rsp+38h] [rbp-D8h]
  char v13[208]; // [rsp+40h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 16 14 widget_ptr:300 80 48 20 copy_widget_pool:297";
  *(_QWORD *)(v2 + 16) = PlayerWidgetComp::foreachWidget<WidgetDigScanner>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = 62194;
  v4[536862724] = -202116109;
  std::map<unsigned int,std::shared_ptr<WidgetBase>>::map(
    (std::map<unsigned int,std::shared_ptr<WidgetBase>> *const)(v2 + 80),
    &this->widget_pool_);
  __for_range = (std::map<unsigned int,std::shared_ptr<WidgetBase>> *)(v2 + 80);
  __for_begin._M_node = std::map<unsigned int,std::shared_ptr<WidgetBase>>::begin((std::map<unsigned int,std::shared_ptr<WidgetBase>> *const)(v2 + 80))._M_node;
  __for_end._M_node = std::map<unsigned int,std::shared_ptr<WidgetBase>>::end((std::map<unsigned int,std::shared_ptr<WidgetBase>> *const)(v2 + 80))._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v10 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<WidgetBase>>>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,std::shared_ptr<WidgetBase>>(v10);
    base_widget_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<WidgetBase> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<WidgetBase>>(v10);
    std::dynamic_pointer_cast<WidgetDigScanner,WidgetBase>((const std::shared_ptr<WidgetBase> *)(v2 + 48));
    if ( std::operator==<WidgetDigScanner>(0LL, (const std::shared_ptr<WidgetDigScanner> *)(v2 + 48)) )
    {
      v5 = 0;
    }
    else
    {
      v6 = std::__shared_ptr_access<WidgetDigScanner,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<WidgetDigScanner,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
      v5 = std::function<ForeachPolicy ()(WidgetDigScanner &)>::operator()(p_func, v6) ? 1 : 2;
    }
    std::shared_ptr<WidgetDigScanner>::~shared_ptr((std::shared_ptr<WidgetDigScanner> *const)(v2 + 48));
    if ( v5 )
    {
      if ( v5 != 2 )
        break;
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<WidgetBase>>>::operator++(&__for_begin);
  }
  std::map<unsigned int,std::shared_ptr<WidgetBase>>::~map((std::map<unsigned int,std::shared_ptr<WidgetBase>> *const)(v2 + 80));
  if ( v13 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 294: range 00000000144154B2-0000000014415756
void __cdecl PlayerWidgetComp::foreachWidget<WidgetGadgetBuilder>(
        const PlayerWidgetComp *const this,
        std::function<ForeachPolicy(WidgetGadgetBuilder&)> *p_func)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // rbx
  int v5; // r14d
  WidgetGadgetBuilder *v6; // rdx
  std::map<unsigned int,std::shared_ptr<WidgetBase>>::iterator __for_begin; // [rsp+10h] [rbp-100h] BYREF
  std::map<unsigned int,std::shared_ptr<WidgetBase>>::iterator __for_end; // [rsp+18h] [rbp-F8h] BYREF
  std::map<unsigned int,std::shared_ptr<WidgetBase>> *__for_range; // [rsp+20h] [rbp-F0h]
  const std::pair<unsigned int const,std::shared_ptr<WidgetBase> > *v10; // [rsp+28h] [rbp-E8h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<WidgetBase> > >::type *_; // [rsp+30h] [rbp-E0h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<WidgetBase> > >::type *base_widget_ptr; // [rsp+38h] [rbp-D8h]
  char v13[208]; // [rsp+40h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 16 14 widget_ptr:300 80 48 20 copy_widget_pool:297";
  *(_QWORD *)(v2 + 16) = PlayerWidgetComp::foreachWidget<WidgetGadgetBuilder>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = 62194;
  v4[536862724] = -202116109;
  std::map<unsigned int,std::shared_ptr<WidgetBase>>::map(
    (std::map<unsigned int,std::shared_ptr<WidgetBase>> *const)(v2 + 80),
    &this->widget_pool_);
  __for_range = (std::map<unsigned int,std::shared_ptr<WidgetBase>> *)(v2 + 80);
  __for_begin._M_node = std::map<unsigned int,std::shared_ptr<WidgetBase>>::begin((std::map<unsigned int,std::shared_ptr<WidgetBase>> *const)(v2 + 80))._M_node;
  __for_end._M_node = std::map<unsigned int,std::shared_ptr<WidgetBase>>::end((std::map<unsigned int,std::shared_ptr<WidgetBase>> *const)(v2 + 80))._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v10 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<WidgetBase>>>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,std::shared_ptr<WidgetBase>>(v10);
    base_widget_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<WidgetBase> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<WidgetBase>>(v10);
    std::dynamic_pointer_cast<WidgetGadgetBuilder,WidgetBase>((const std::shared_ptr<WidgetBase> *)(v2 + 48));
    if ( std::operator==<WidgetGadgetBuilder>(0LL, (const std::shared_ptr<WidgetGadgetBuilder> *)(v2 + 48)) )
    {
      v5 = 0;
    }
    else
    {
      v6 = std::__shared_ptr_access<WidgetGadgetBuilder,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<WidgetGadgetBuilder,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
      v5 = std::function<ForeachPolicy ()(WidgetGadgetBuilder &)>::operator()(p_func, v6) ? 1 : 2;
    }
    std::shared_ptr<WidgetGadgetBuilder>::~shared_ptr((std::shared_ptr<WidgetGadgetBuilder> *const)(v2 + 48));
    if ( v5 )
    {
      if ( v5 != 2 )
        break;
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<WidgetBase>>>::operator++(&__for_begin);
  }
  std::map<unsigned int,std::shared_ptr<WidgetBase>>::~map((std::map<unsigned int,std::shared_ptr<WidgetBase>> *const)(v2 + 80));
  if ( v13 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 294: range 000000001441737E-0000000014417622
void __cdecl PlayerWidgetComp::foreachWidget<WidgetLightStone>(
        const PlayerWidgetComp *const this,
        std::function<ForeachPolicy(WidgetLightStone&)> *p_func)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // rbx
  int v5; // r14d
  WidgetLightStone *v6; // rdx
  std::map<unsigned int,std::shared_ptr<WidgetBase>>::iterator __for_begin; // [rsp+10h] [rbp-100h] BYREF
  std::map<unsigned int,std::shared_ptr<WidgetBase>>::iterator __for_end; // [rsp+18h] [rbp-F8h] BYREF
  std::map<unsigned int,std::shared_ptr<WidgetBase>> *__for_range; // [rsp+20h] [rbp-F0h]
  const std::pair<unsigned int const,std::shared_ptr<WidgetBase> > *v10; // [rsp+28h] [rbp-E8h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<WidgetBase> > >::type *_; // [rsp+30h] [rbp-E0h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<WidgetBase> > >::type *base_widget_ptr; // [rsp+38h] [rbp-D8h]
  char v13[208]; // [rsp+40h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 16 14 widget_ptr:300 80 48 20 copy_widget_pool:297";
  *(_QWORD *)(v2 + 16) = PlayerWidgetComp::foreachWidget<WidgetLightStone>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = 62194;
  v4[536862724] = -202116109;
  std::map<unsigned int,std::shared_ptr<WidgetBase>>::map(
    (std::map<unsigned int,std::shared_ptr<WidgetBase>> *const)(v2 + 80),
    &this->widget_pool_);
  __for_range = (std::map<unsigned int,std::shared_ptr<WidgetBase>> *)(v2 + 80);
  __for_begin._M_node = std::map<unsigned int,std::shared_ptr<WidgetBase>>::begin((std::map<unsigned int,std::shared_ptr<WidgetBase>> *const)(v2 + 80))._M_node;
  __for_end._M_node = std::map<unsigned int,std::shared_ptr<WidgetBase>>::end((std::map<unsigned int,std::shared_ptr<WidgetBase>> *const)(v2 + 80))._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v10 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<WidgetBase>>>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,std::shared_ptr<WidgetBase>>(v10);
    base_widget_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<WidgetBase> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<WidgetBase>>(v10);
    std::dynamic_pointer_cast<WidgetLightStone,WidgetBase>((const std::shared_ptr<WidgetBase> *)(v2 + 48));
    if ( std::operator==<WidgetLightStone>(0LL, (const std::shared_ptr<WidgetLightStone> *)(v2 + 48)) )
    {
      v5 = 0;
    }
    else
    {
      v6 = std::__shared_ptr_access<WidgetLightStone,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<WidgetLightStone,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
      v5 = std::function<ForeachPolicy ()(WidgetLightStone &)>::operator()(p_func, v6) ? 1 : 2;
    }
    std::shared_ptr<WidgetLightStone>::~shared_ptr((std::shared_ptr<WidgetLightStone> *const)(v2 + 48));
    if ( v5 )
    {
      if ( v5 != 2 )
        break;
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<WidgetBase>>>::operator++(&__for_begin);
  }
  std::map<unsigned int,std::shared_ptr<WidgetBase>>::~map((std::map<unsigned int,std::shared_ptr<WidgetBase>> *const)(v2 + 80));
  if ( v13 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 294: range 0000000014416AB6-0000000014416D5A
void __cdecl PlayerWidgetComp::foreachWidget<WidgetOneoffGatherPointDetector>(
        const PlayerWidgetComp *const this,
        std::function<ForeachPolicy(WidgetOneoffGatherPointDetector&)> *p_func)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // rbx
  int v5; // r14d
  WidgetOneoffGatherPointDetector *v6; // rdx
  std::map<unsigned int,std::shared_ptr<WidgetBase>>::iterator __for_begin; // [rsp+10h] [rbp-100h] BYREF
  std::map<unsigned int,std::shared_ptr<WidgetBase>>::iterator __for_end; // [rsp+18h] [rbp-F8h] BYREF
  std::map<unsigned int,std::shared_ptr<WidgetBase>> *__for_range; // [rsp+20h] [rbp-F0h]
  const std::pair<unsigned int const,std::shared_ptr<WidgetBase> > *v10; // [rsp+28h] [rbp-E8h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<WidgetBase> > >::type *_; // [rsp+30h] [rbp-E0h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<WidgetBase> > >::type *base_widget_ptr; // [rsp+38h] [rbp-D8h]
  char v13[208]; // [rsp+40h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 16 14 widget_ptr:300 80 48 20 copy_widget_pool:297";
  *(_QWORD *)(v2 + 16) = PlayerWidgetComp::foreachWidget<WidgetOneoffGatherPointDetector>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = 62194;
  v4[536862724] = -202116109;
  std::map<unsigned int,std::shared_ptr<WidgetBase>>::map(
    (std::map<unsigned int,std::shared_ptr<WidgetBase>> *const)(v2 + 80),
    &this->widget_pool_);
  __for_range = (std::map<unsigned int,std::shared_ptr<WidgetBase>> *)(v2 + 80);
  __for_begin._M_node = std::map<unsigned int,std::shared_ptr<WidgetBase>>::begin((std::map<unsigned int,std::shared_ptr<WidgetBase>> *const)(v2 + 80))._M_node;
  __for_end._M_node = std::map<unsigned int,std::shared_ptr<WidgetBase>>::end((std::map<unsigned int,std::shared_ptr<WidgetBase>> *const)(v2 + 80))._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v10 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<WidgetBase>>>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,std::shared_ptr<WidgetBase>>(v10);
    base_widget_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<WidgetBase> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<WidgetBase>>(v10);
    std::dynamic_pointer_cast<WidgetOneoffGatherPointDetector,WidgetBase>((const std::shared_ptr<WidgetBase> *)(v2 + 48));
    if ( std::operator==<WidgetOneoffGatherPointDetector>(
           0LL,
           (const std::shared_ptr<WidgetOneoffGatherPointDetector> *)(v2 + 48)) )
    {
      v5 = 0;
    }
    else
    {
      v6 = std::__shared_ptr_access<WidgetOneoffGatherPointDetector,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<WidgetOneoffGatherPointDetector,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
      v5 = std::function<ForeachPolicy ()(WidgetOneoffGatherPointDetector &)>::operator()(p_func, v6) ? 1 : 2;
    }
    std::shared_ptr<WidgetOneoffGatherPointDetector>::~shared_ptr((std::shared_ptr<WidgetOneoffGatherPointDetector> *const)(v2 + 48));
    if ( v5 )
    {
      if ( v5 != 2 )
        break;
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<WidgetBase>>>::operator++(&__for_begin);
  }
  std::map<unsigned int,std::shared_ptr<WidgetBase>>::~map((std::map<unsigned int,std::shared_ptr<WidgetBase>> *const)(v2 + 80));
  if ( v13 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 313: range 0000000016255336-000000001625544C
// local variable allocation has failed, the output may be wrong!
std::shared_ptr<WidgetOneoffGatherPointDetector> __cdecl PlayerWidgetComp::findWidget<WidgetOneoffGatherPointDetector>(
        PlayerWidgetComp *const this,
        uint32_t material_id)
{
  int v2; // edx
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::shared_ptr<WidgetOneoffGatherPointDetector> result; // rax
  int material_ida; // [rsp+Ch] [rbp-74h]
  char v8[96]; // [rsp+20h] [rbp-60h] BYREF

  material_ida = v2;
  v3 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 19 base_widget_ptr:315";
  *(_QWORD *)(v3 + 16) = PlayerWidgetComp::findWidget<WidgetOneoffGatherPointDetector>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  PlayerWidgetComp::findBaseWidget((PlayerWidgetComp *const)(v3 + 32), *(__int64 *)&material_id, material_ida);
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, *(_QWORD *)&material_id);
  std::dynamic_pointer_cast<WidgetOneoffGatherPointDetector,WidgetBase>((const std::shared_ptr<WidgetBase> *)this);
  std::shared_ptr<WidgetBase>::~shared_ptr((std::shared_ptr<WidgetBase> *const)(v3 + 32));
  if ( v8 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<WidgetOneoffGatherPointDetector,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 313: range 0000000013EE906A-0000000013EE9180
// local variable allocation has failed, the output may be wrong!
std::shared_ptr<WidgetQuickHitTree> __cdecl PlayerWidgetComp::findWidget<WidgetQuickHitTree>(
        PlayerWidgetComp *const this,
        uint32_t material_id)
{
  int v2; // edx
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::shared_ptr<WidgetQuickHitTree> result; // rax
  int material_ida; // [rsp+Ch] [rbp-74h]
  char v8[96]; // [rsp+20h] [rbp-60h] BYREF

  material_ida = v2;
  v3 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 19 base_widget_ptr:315";
  *(_QWORD *)(v3 + 16) = PlayerWidgetComp::findWidget<WidgetQuickHitTree>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  PlayerWidgetComp::findBaseWidget((PlayerWidgetComp *const)(v3 + 32), *(__int64 *)&material_id, material_ida);
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, *(_QWORD *)&material_id);
  std::dynamic_pointer_cast<WidgetQuickHitTree,WidgetBase>((const std::shared_ptr<WidgetBase> *)this);
  std::shared_ptr<WidgetBase>::~shared_ptr((std::shared_ptr<WidgetBase> *const)(v3 + 32));
  if ( v8 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<WidgetQuickHitTree,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 320: range 0000000016252EEC-0000000016253002
// local variable allocation has failed, the output may be wrong!
std::shared_ptr<WidgetGadgetBuilder> __cdecl PlayerWidgetComp::getOrCreateWidget<WidgetGadgetBuilder>(
        PlayerWidgetComp *const this,
        uint32_t material_id)
{
  int v2; // edx
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::shared_ptr<WidgetGadgetBuilder> result; // rax
  int material_ida; // [rsp+Ch] [rbp-74h]
  char v8[96]; // [rsp+20h] [rbp-60h] BYREF

  material_ida = v2;
  v3 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 19 base_widget_ptr:322";
  *(_QWORD *)(v3 + 16) = PlayerWidgetComp::getOrCreateWidget<WidgetGadgetBuilder>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  PlayerWidgetComp::getOrCreateBaseWidget(
    (PlayerWidgetComp *const)(v3 + 32),
    *(PlayerWidgetComp **)&material_id,
    material_ida);
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, *(_QWORD *)&material_id);
  std::dynamic_pointer_cast<WidgetGadgetBuilder,WidgetBase>((const std::shared_ptr<WidgetBase> *)this);
  std::shared_ptr<WidgetBase>::~shared_ptr((std::shared_ptr<WidgetBase> *const)(v3 + 32));
  if ( v8 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<WidgetGadgetBuilder,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 1016: range 0000000015D6A166-0000000015D6A27C
// local variable allocation has failed, the output may be wrong!
std::shared_ptr<WidgetLightStone> __cdecl PlayerWidgetComp::findWidget<WidgetLightStone>(
        PlayerWidgetComp *const this,
        uint32_t material_id)
{
  int v2; // edx
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::shared_ptr<WidgetLightStone> result; // rax
  int material_ida; // [rsp+Ch] [rbp-74h]
  char v8[96]; // [rsp+20h] [rbp-60h] BYREF

  material_ida = v2;
  v3 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 19 base_widget_ptr:315";
  *(_QWORD *)(v3 + 16) = PlayerWidgetComp::findWidget<WidgetLightStone>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  PlayerWidgetComp::findBaseWidget((PlayerWidgetComp *const)(v3 + 32), *(__int64 *)&material_id, material_ida);
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, *(_QWORD *)&material_id);
  std::dynamic_pointer_cast<WidgetLightStone,WidgetBase>((const std::shared_ptr<WidgetBase> *)this);
  std::shared_ptr<WidgetBase>::~shared_ptr((std::shared_ptr<WidgetBase> *const)(v3 + 32));
  if ( v8 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<WidgetLightStone,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};
