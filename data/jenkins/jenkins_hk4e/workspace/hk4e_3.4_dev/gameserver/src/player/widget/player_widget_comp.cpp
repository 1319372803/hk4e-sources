// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/widget/player_widget_comp.cpp

// Line 62: range 000000001439DD4E-000000001439DE83
int32_t __cdecl WidgetAnchorPointData::toClient(const WidgetAnchorPointData *const this, proto::AnchorPointData *proto)
{
  proto::Vector *v2; // rax
  proto::Vector *v3; // rax

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  proto::AnchorPointData::set_anchor_point_id(proto, this->id);
  v2 = proto::AnchorPointData::mutable_pos(proto);
  Vector3::toClient(&this->pos, v2);
  v3 = proto::AnchorPointData::mutable_rot(proto);
  Vector3::toClient(&this->rot, v3);
  if ( *(_BYTE *)(((unsigned __int64)&this->end_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->end_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->end_time);
  }
  proto::AnchorPointData::set_end_time(proto, this->end_time);
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->scene_id);
  }
  proto::AnchorPointData::set_scene_id(proto, this->scene_id);
  return 0;
};

// Line 73: range 000000001439DE84-000000001439DFA8
int32_t __cdecl WidgetLunchBoxData::fromBin(WidgetLunchBoxData *const this, const proto::WidgetLunchBoxBin *bin)
{
  const google::protobuf::MapPair<unsigned int,unsigned int> *v2; // rax
  unsigned int v3; // ebx
  unsigned int *v4; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v5; // rax
  unsigned int *v6; // rdx
  char v7; // cl
  const google::protobuf::Map<unsigned int,unsigned int> *__for_range; // [rsp+10h] [rbp-60h]
  unsigned int slot_type[2]; // [rsp+18h] [rbp-58h] BYREF
  google::protobuf::Map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+20h] [rbp-50h] BYREF
  google::protobuf::Map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+40h] [rbp-30h] BYREF

  std::map<unsigned int,unsigned int>::clear(&this->slot_material_map);
  __for_range = proto::WidgetLunchBoxBin::slot_material_map(bin);
  google::protobuf::Map<unsigned int,unsigned int>::begin(&__for_begin, __for_range);
  google::protobuf::Map<unsigned int,unsigned int>::end(&__for_end, __for_range);
  while ( google::protobuf::operator!=(&__for_begin, &__for_end) )
  {
    v2 = google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator*(&__for_begin);
    google::protobuf::MapPair<unsigned int,unsigned int>::MapPair(
      (google::protobuf::MapPair<unsigned int,unsigned int> *const)slot_type,
      v2);
    v3 = slot_type[1];
    v4 = slot_type;
    v5 = std::map<unsigned int,unsigned int>::operator[](&this->slot_material_map, slot_type);
    v6 = v5;
    v7 = *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000);
    if ( v7 != 0 && (char)(((unsigned __int8)v5 & 7) + 3) >= v7 )
    {
      LOBYTE(v4) = v7 != 0;
      __asan_report_store4(v5, v4, (_BYTE)v5);
    }
    *v6 = v3;
    google::protobuf::MapPair<unsigned int,unsigned int>::~MapPair((google::protobuf::MapPair<unsigned int,unsigned int> *const)slot_type);
    google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator++(&__for_begin);
  }
  return 0;
};

// Line 83: range 000000001439DFAA-000000001439E15A
int32_t __cdecl WidgetLunchBoxData::toBin(const WidgetLunchBoxData *const this, proto::WidgetLunchBoxBin *bin)
{
  std::pair<unsigned int const,unsigned int> *v2; // rax
  std::pair<unsigned int const,unsigned int> *v3; // rdx
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *v4; // rax
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type v5; // ebx
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *v6; // rsi
  unsigned int *v7; // rax
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *v8; // rdx
  char v9; // cl
  std::map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-48h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+20h] [rbp-40h] BYREF
  google::protobuf::Map<unsigned int,unsigned int> *proto_map; // [rsp+28h] [rbp-38h]
  const std::map<unsigned int,unsigned int> *__for_range; // [rsp+30h] [rbp-30h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *slot_type; // [rsp+38h] [rbp-28h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *material_id; // [rsp+40h] [rbp-20h]
  std::pair<unsigned int const,unsigned int> __in; // [rsp+48h] [rbp-18h] BYREF

  proto_map = proto::WidgetLunchBoxBin::mutable_slot_material_map(bin);
  __for_range = &this->slot_material_map;
  __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(&this->slot_material_map)._M_node;
  __for_end._M_node = std::map<unsigned int,unsigned int>::end(&this->slot_material_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v2 = (std::pair<unsigned int const,unsigned int> *)std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
    v3 = v2;
    if ( ((unsigned __int8)v2 & 7) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&v2->second + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v2->second + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load_n(v2, 8LL);
    }
    __in = *v3;
    slot_type = std::get<0ul,unsigned int const,unsigned int>(&__in);
    v4 = std::get<1ul,unsigned int const,unsigned int>(&__in);
    material_id = v4;
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v4);
    }
    v5 = *material_id;
    v6 = slot_type;
    v7 = google::protobuf::Map<unsigned int,unsigned int>::operator[](proto_map, slot_type);
    v8 = v7;
    v9 = *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000);
    if ( v9 != 0 && (char)(((unsigned __int8)v7 & 7) + 3) >= v9 )
    {
      LOBYTE(v6) = v9 != 0;
      __asan_report_store4(v7, v6, (_BYTE)v7);
    }
    *v8 = v5;
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 93: range 000000001439E15C-000000001439E280
int32_t __cdecl WidgetLunchBoxData::fromClient(WidgetLunchBoxData *const this, const proto::LunchBoxData *proto)
{
  const google::protobuf::MapPair<unsigned int,unsigned int> *v2; // rax
  unsigned int v3; // ebx
  unsigned int *v4; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v5; // rax
  unsigned int *v6; // rdx
  char v7; // cl
  const google::protobuf::Map<unsigned int,unsigned int> *__for_range; // [rsp+10h] [rbp-60h]
  unsigned int slot_type[2]; // [rsp+18h] [rbp-58h] BYREF
  google::protobuf::Map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+20h] [rbp-50h] BYREF
  google::protobuf::Map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+40h] [rbp-30h] BYREF

  std::map<unsigned int,unsigned int>::clear(&this->slot_material_map);
  __for_range = proto::LunchBoxData::slot_material_map(proto);
  google::protobuf::Map<unsigned int,unsigned int>::begin(&__for_begin, __for_range);
  google::protobuf::Map<unsigned int,unsigned int>::end(&__for_end, __for_range);
  while ( google::protobuf::operator!=(&__for_begin, &__for_end) )
  {
    v2 = google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator*(&__for_begin);
    google::protobuf::MapPair<unsigned int,unsigned int>::MapPair(
      (google::protobuf::MapPair<unsigned int,unsigned int> *const)slot_type,
      v2);
    v3 = slot_type[1];
    v4 = slot_type;
    v5 = std::map<unsigned int,unsigned int>::operator[](&this->slot_material_map, slot_type);
    v6 = v5;
    v7 = *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000);
    if ( v7 != 0 && (char)(((unsigned __int8)v5 & 7) + 3) >= v7 )
    {
      LOBYTE(v4) = v7 != 0;
      __asan_report_store4(v5, v4, (_BYTE)v5);
    }
    *v6 = v3;
    google::protobuf::MapPair<unsigned int,unsigned int>::~MapPair((google::protobuf::MapPair<unsigned int,unsigned int> *const)slot_type);
    google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator++(&__for_begin);
  }
  return 0;
};

// Line 103: range 000000001439E282-000000001439E432
int32_t __cdecl WidgetLunchBoxData::toClient(const WidgetLunchBoxData *const this, proto::LunchBoxData *proto)
{
  std::pair<unsigned int const,unsigned int> *v2; // rax
  std::pair<unsigned int const,unsigned int> *v3; // rdx
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *v4; // rax
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type v5; // ebx
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *v6; // rsi
  unsigned int *v7; // rax
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *v8; // rdx
  char v9; // cl
  std::map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-48h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+20h] [rbp-40h] BYREF
  google::protobuf::Map<unsigned int,unsigned int> *proto_map; // [rsp+28h] [rbp-38h]
  const std::map<unsigned int,unsigned int> *__for_range; // [rsp+30h] [rbp-30h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *slot_type; // [rsp+38h] [rbp-28h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *material_id; // [rsp+40h] [rbp-20h]
  std::pair<unsigned int const,unsigned int> __in; // [rsp+48h] [rbp-18h] BYREF

  proto_map = proto::LunchBoxData::mutable_slot_material_map(proto);
  __for_range = &this->slot_material_map;
  __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(&this->slot_material_map)._M_node;
  __for_end._M_node = std::map<unsigned int,unsigned int>::end(&this->slot_material_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v2 = (std::pair<unsigned int const,unsigned int> *)std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
    v3 = v2;
    if ( ((unsigned __int8)v2 & 7) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&v2->second + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v2->second + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load_n(v2, 8LL);
    }
    __in = *v3;
    slot_type = std::get<0ul,unsigned int const,unsigned int>(&__in);
    v4 = std::get<1ul,unsigned int const,unsigned int>(&__in);
    material_id = v4;
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v4);
    }
    v5 = *material_id;
    v6 = slot_type;
    v7 = google::protobuf::Map<unsigned int,unsigned int>::operator[](proto_map, slot_type);
    v8 = v7;
    v9 = *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000);
    if ( v9 != 0 && (char)(((unsigned __int8)v7 & 7) + 3) >= v9 )
    {
      LOBYTE(v6) = v9 != 0;
      __asan_report_store4(v7, v6, (_BYTE)v7);
    }
    *v8 = v5;
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 113: range 000000001439E434-000000001439E4C3
void __cdecl WidgetCoolDownInfo::fromBin(WidgetCoolDownInfo *const this, const proto::WidgetCoolDownInfoBin *bin)
{
  uint64_t use_time; // rax
  unsigned int v3; // eax
  __int64 v4; // rdx
  char v5; // al

  use_time = proto::WidgetCoolDownInfoBin::last_use_time(bin);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    use_time = __asan_report_store8(this, bin);
  this->last_use_time = use_time;
  LOBYTE(v3) = proto::WidgetCoolDownInfoBin::is_success(bin);
  v4 = v3;
  v5 = *(_BYTE *)(((unsigned __int64)&this->is_success >> 3) + 0x7FFF8000);
  if ( v5 < 0 )
  {
    LOBYTE(bin) = v5 != 0;
    __asan_report_store1(&this->is_success, bin, v4);
  }
  this->is_success = v4;
};

// Line 119: range 000000001439E4C4-000000001439E559
void __cdecl WidgetCoolDownInfo::toBin(const WidgetCoolDownInfo *const this, proto::WidgetCoolDownInfoBin *bin)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  proto::WidgetCoolDownInfoBin::set_last_use_time(bin, this->last_use_time);
  if ( *(char *)(((unsigned __int64)&this->is_success >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_success);
  proto::WidgetCoolDownInfoBin::set_is_success(bin, this->is_success);
};

// Line 126: range 000000001439E55A-000000001439F2F9
int32_t __cdecl PlayerWidgetComp::fromBin(PlayerWidgetComp *const this, const proto::PlayerDataBin *player_data_bin)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  uint32_t widget_id; // edx
  char v7; // al
  uint32_t use_anchor_point_time; // ecx
  char v9; // dl
  bool v10; // dl
  std::map<unsigned int,WidgetAnchorPointData>::key_type *p_k; // rsi
  uint32_t v12; // edx
  char v13; // al
  const proto::VectorBin *v14; // rax
  const proto::VectorBin *v15; // rsi
  uint32_t v16; // ecx
  char v17; // dl
  bool v18; // dl
  uint32_t v19; // edx
  char v20; // al
  const proto::WidgetLunchBoxBin *v21; // rax
  common::milog::MiLogStream *v22; // rcx
  common::milog::MiLogStream *v23; // r14
  int v24; // r15d
  unsigned int *v25; // rcx
  std::shared_ptr<WidgetBase> *v26; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<WidgetBase> > >,bool> v27; // rax
  common::milog::MiLogStream *v28; // r14
  WidgetBase *v29; // rax
  common::milog::MiLogStream *v30; // r14
  common::milog::MiLogStream *v31; // rax
  std::map<unsigned int,std::shared_ptr<WidgetBase>>::mapped_type *v32; // r12
  std::map<data::WidgetOccupyTag,std::weak_ptr<WidgetBase>> *p_widget_slot_map; // rcx
  std::weak_ptr<WidgetBase> *v34; // rax
  int32_t result; // eax
  std::map<unsigned int,WidgetAnchorPointData>::key_type __k; // [rsp+2Ch] [rbp-174h] BYREF
  google::protobuf::RepeatedPtrField<proto::WidgetAnchorPointBin>::const_iterator __for_begin; // [rsp+30h] [rbp-170h] BYREF
  google::protobuf::RepeatedPtrField<proto::WidgetAnchorPointBin>::const_iterator __for_end; // [rsp+38h] [rbp-168h] BYREF
  const proto::PlayerWidgetCompBin *proto_comp; // [rsp+40h] [rbp-160h]
  const google::protobuf::RepeatedPtrField<proto::WidgetAnchorPointBin> *__for_range; // [rsp+48h] [rbp-158h]
  const google::protobuf::RepeatedPtrField<proto::WidgetCoolDownInfoBin> *__for_range_0; // [rsp+50h] [rbp-150h]
  const google::protobuf::RepeatedPtrField<proto::WidgetCoolDownInfoBin> *__for_range_1; // [rsp+58h] [rbp-148h]
  const google::protobuf::RepeatedPtrField<proto::WidgetBin> *__for_range_2; // [rsp+60h] [rbp-140h]
  const google::protobuf::Map<unsigned int,unsigned int> *__for_range_3; // [rsp+68h] [rbp-138h]
  const unsigned int *p_tag; // [rsp+70h] [rbp-130h]
  const proto::WidgetBin *widget_bin; // [rsp+78h] [rbp-128h]
  const proto::WidgetCoolDownInfoBin *proto_1; // [rsp+80h] [rbp-120h]
  WidgetCoolDownInfo *cool_down_info_0; // [rsp+88h] [rbp-118h]
  const proto::WidgetCoolDownInfoBin *proto_0; // [rsp+90h] [rbp-110h]
  WidgetCoolDownInfo *cool_down_info; // [rsp+98h] [rbp-108h]
  const proto::WidgetAnchorPointBin *proto; // [rsp+A0h] [rbp-100h]
  WidgetAnchorPointData *anchor_point_data; // [rsp+A8h] [rbp-F8h]
  Vector3 v53; // [rsp+B4h] [rbp-ECh] BYREF
  std::shared_ptr<WidgetBase> __r; // [rsp+C0h] [rbp-E0h] BYREF
  google::protobuf::Map<unsigned int,unsigned int>::const_iterator __for_begin_0; // [rsp+D0h] [rbp-D0h] BYREF
  google::protobuf::Map<unsigned int,unsigned int>::const_iterator __for_end_0; // [rsp+F0h] [rbp-B0h] BYREF
  common::milog::MiLogStream v57; // [rsp+110h] [rbp-90h] BYREF
  char v58[112]; // [rsp+130h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v58;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 14 widget_ptr:169";
  *(_QWORD *)(v3 + 16) = PlayerWidgetComp::fromBin;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  proto_comp = proto::PlayerDataBin::widget_comp_bin(player_data_bin);
  widget_id = proto::PlayerWidgetCompBin::next_widget_id(proto_comp);
  v7 = *(_BYTE *)(((unsigned __int64)&this->next_widget_id_ >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(player_data_bin) = v7 != 0;
    __asan_report_store4(&this->next_widget_id_, player_data_bin, widget_id);
  }
  this->next_widget_id_ = widget_id;
  use_anchor_point_time = proto::PlayerWidgetCompBin::last_use_anchor_point_time(proto_comp);
  v9 = *(_BYTE *)(((unsigned __int64)&this->last_use_anchor_point_time_ >> 3) + 0x7FFF8000);
  LOBYTE(player_data_bin) = v9 != 0;
  v10 = v9 != 0 && (char)((((_BYTE)this + 52) & 7) + 3) >= v9;
  if ( v10 )
    __asan_report_store4(&this->last_use_anchor_point_time_, player_data_bin, v10);
  this->last_use_anchor_point_time_ = use_anchor_point_time;
  __for_range = proto::PlayerWidgetCompBin::anchor_point_list(proto_comp);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::WidgetAnchorPointBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::WidgetAnchorPointBin>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::WidgetAnchorPointBin const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    proto = google::protobuf::internal::RepeatedPtrIterator<proto::WidgetAnchorPointBin const>::operator*(&__for_begin);
    __k = proto::WidgetAnchorPointBin::id(proto);
    p_k = &__k;
    anchor_point_data = std::map<unsigned int,WidgetAnchorPointData>::operator[](&this->anchor_point_map_, &__k);
    v12 = proto::WidgetAnchorPointBin::id(proto);
    v13 = *(_BYTE *)(((unsigned __int64)anchor_point_data >> 3) + 0x7FFF8000);
    if ( v13 != 0 && v13 <= 3 )
    {
      LOBYTE(p_k) = v13 != 0;
      __asan_report_store4(anchor_point_data, p_k, v12);
    }
    anchor_point_data->id = v12;
    v14 = proto::WidgetAnchorPointBin::pos(proto);
    Vector3::Vector3(&v53, v14);
    if ( (((unsigned __int8)anchor_point_data + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&anchor_point_data->pos >> 3)
                                                                    + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)&anchor_point_data->pos >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&anchor_point_data->pos.z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)anchor_point_data + 15) & 7) >= *(_BYTE *)((((unsigned __int64)&anchor_point_data->pos.z + 3) >> 3)
                                                                     + 0x7FFF8000) )
    {
      __asan_report_store_n(&anchor_point_data->pos, 12LL);
    }
    anchor_point_data->pos = v53;
    v15 = proto::WidgetAnchorPointBin::rot(proto);
    Vector3::Vector3(&v53, v15);
    if ( *(char *)(((unsigned __int64)&anchor_point_data->rot >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&anchor_point_data->rot.z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)anchor_point_data + 27) & 7) >= *(_BYTE *)((((unsigned __int64)&anchor_point_data->rot.z + 3) >> 3)
                                                                     + 0x7FFF8000) )
    {
      v15 = (const proto::VectorBin *)12;
      __asan_report_store_n(&anchor_point_data->rot, 12LL);
    }
    anchor_point_data->rot = v53;
    v16 = proto::WidgetAnchorPointBin::end_time(proto);
    v17 = *(_BYTE *)(((unsigned __int64)&anchor_point_data->end_time >> 3) + 0x7FFF8000);
    LOBYTE(v15) = v17 != 0;
    v18 = v17 != 0 && (char)((((_BYTE)anchor_point_data + 28) & 7) + 3) >= v17;
    if ( v18 )
      __asan_report_store4(&anchor_point_data->end_time, v15, v18);
    anchor_point_data->end_time = v16;
    v19 = proto::WidgetAnchorPointBin::scene_id(proto);
    v20 = *(_BYTE *)(((unsigned __int64)&anchor_point_data->scene_id >> 3) + 0x7FFF8000);
    if ( v20 != 0 && v20 <= 3 )
    {
      LOBYTE(v15) = v20 != 0;
      __asan_report_store4(&anchor_point_data->scene_id, v15, v19);
    }
    anchor_point_data->scene_id = v19;
    google::protobuf::internal::RepeatedPtrIterator<proto::WidgetAnchorPointBin const>::operator++(&__for_begin);
  }
  v21 = proto::PlayerWidgetCompBin::lunch_box(proto_comp);
  WidgetLunchBoxData::fromBin(&this->lunch_box_data_, v21);
  if ( PlayerWidgetComp::tryTransferOneoffGatherPointDetectorData(this, proto_comp) )
  {
    common::milog::MiLogStream::create(
      &v57,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/widget/player_widget_comp.cpp",
      "fromBin",
      143);
    v22 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
            &v57,
            (const char (*)[51])" tryTransferOneoffGatherPointDetectorData failed! ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
LABEL_24:
    operator<<(v22, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v57);
    v2 = -1;
    goto LABEL_54;
  }
  if ( PlayerWidgetComp::tryTransferClientCollectorData(this, proto_comp) )
  {
    common::milog::MiLogStream::create(
      &v57,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/widget/player_widget_comp.cpp",
      "fromBin",
      149);
    v22 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
            &v57,
            (const char (*)[41])" tryTransferClientCollectorData failed! ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    goto LABEL_24;
  }
  __for_range_0 = proto::PlayerWidgetCompBin::group_cool_down_data_list(proto_comp);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::WidgetCoolDownInfoBin>::begin(__for_range_0).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::WidgetCoolDownInfoBin>::end(__for_range_0).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::WidgetCoolDownInfoBin const>::operator!=(
            (const google::protobuf::internal::RepeatedPtrIterator<const proto::WidgetCoolDownInfoBin> *const)&__for_begin,
            (const google::protobuf::internal::RepeatedPtrIterator<const proto::WidgetCoolDownInfoBin>::iterator *)&__for_end) )
  {
    proto_0 = google::protobuf::internal::RepeatedPtrIterator<proto::WidgetCoolDownInfoBin const>::operator*((const google::protobuf::internal::RepeatedPtrIterator<const proto::WidgetCoolDownInfoBin> *const)&__for_begin);
    __k = proto::WidgetCoolDownInfoBin::id(proto_0);
    cool_down_info = std::unordered_map<unsigned int,WidgetCoolDownInfo>::operator[](
                       &this->group_cool_down_info_map_,
                       &__k);
    WidgetCoolDownInfo::fromBin(cool_down_info, proto_0);
    google::protobuf::internal::RepeatedPtrIterator<proto::WidgetCoolDownInfoBin const>::operator++((google::protobuf::internal::RepeatedPtrIterator<const proto::WidgetCoolDownInfoBin> *const)&__for_begin);
  }
  __for_range_1 = proto::PlayerWidgetCompBin::normal_cool_down_data_list(proto_comp);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::WidgetCoolDownInfoBin>::begin(__for_range_1).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::WidgetCoolDownInfoBin>::end(__for_range_1).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::WidgetCoolDownInfoBin const>::operator!=(
            (const google::protobuf::internal::RepeatedPtrIterator<const proto::WidgetCoolDownInfoBin> *const)&__for_begin,
            (const google::protobuf::internal::RepeatedPtrIterator<const proto::WidgetCoolDownInfoBin>::iterator *)&__for_end) )
  {
    proto_1 = google::protobuf::internal::RepeatedPtrIterator<proto::WidgetCoolDownInfoBin const>::operator*((const google::protobuf::internal::RepeatedPtrIterator<const proto::WidgetCoolDownInfoBin> *const)&__for_begin);
    __k = proto::WidgetCoolDownInfoBin::id(proto_1);
    cool_down_info_0 = std::unordered_map<unsigned int,WidgetCoolDownInfo>::operator[](
                         &this->normal_cool_down_info_map_,
                         &__k);
    WidgetCoolDownInfo::fromBin(cool_down_info_0, proto_1);
    google::protobuf::internal::RepeatedPtrIterator<proto::WidgetCoolDownInfoBin const>::operator++((google::protobuf::internal::RepeatedPtrIterator<const proto::WidgetCoolDownInfoBin> *const)&__for_begin);
  }
  __for_range_2 = proto::PlayerWidgetCompBin::widget_bin_list(proto_comp);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::WidgetBin>::begin(__for_range_2).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::WidgetBin>::end(__for_range_2).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::WidgetBin const>::operator!=(
            (const google::protobuf::internal::RepeatedPtrIterator<const proto::WidgetBin> *const)&__for_begin,
            (const google::protobuf::internal::RepeatedPtrIterator<const proto::WidgetBin>::iterator *)&__for_end) )
  {
    widget_bin = google::protobuf::internal::RepeatedPtrIterator<proto::WidgetBin const>::operator*((const google::protobuf::internal::RepeatedPtrIterator<const proto::WidgetBin> *const)&__for_begin);
    proto::WidgetBin::material_id(widget_bin);
    PlayerWidgetComp::findBaseWidget((PlayerWidgetComp *const)(v3 + 32), (uint32_t)this);
    if ( !std::operator==<WidgetBase>(0LL, (const std::shared_ptr<WidgetBase> *)(v3 + 32)) )
      goto LABEL_59;
    proto::WidgetBin::material_id(widget_bin);
    PlayerWidgetComp::createAndInitWidget((PlayerWidgetComp *const)&__r, (uint32_t)this);
    std::shared_ptr<WidgetBase>::operator=((std::shared_ptr<WidgetBase> *const)(v3 + 32), &__r);
    std::shared_ptr<WidgetBase>::~shared_ptr(&__r);
    if ( std::operator==<WidgetBase>(0LL, (const std::shared_ptr<WidgetBase> *)(v3 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v57,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/widget/player_widget_comp.cpp",
        "fromBin",
        175);
      v23 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
              &v57,
              (const char (*)[39])"create widget ptr failed, material_id:");
      __k = proto::WidgetBin::material_id(widget_bin);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &__k);
      common::milog::MiLogStream::~MiLogStream(&v57);
      v2 = -1;
      v24 = 0;
      goto LABEL_46;
    }
    __k = proto::WidgetBin::material_id(widget_bin);
    v27 = std::map<unsigned int,std::shared_ptr<WidgetBase>>::emplace<unsigned int,std::shared_ptr<WidgetBase>&>(
            &this->widget_pool_,
            &__k,
            (std::shared_ptr<WidgetBase> *)(v3 + 32),
            v25,
            v26);
    if ( !v27.second )
    {
      common::milog::MiLogStream::create(
        &v57,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/widget/player_widget_comp.cpp",
        "fromBin",
        180);
      v28 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
              &v57,
              (const char (*)[32])"duplicated widget, material_id:");
      __k = proto::WidgetBin::material_id(widget_bin);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, &__k);
      common::milog::MiLogStream::~MiLogStream(&v57);
      v2 = -1;
      v24 = 0;
    }
    else
    {
LABEL_59:
      if ( std::operator!=<WidgetBase>((const std::shared_ptr<WidgetBase> *)(v3 + 32), 0LL)
        && (v29 = std::__shared_ptr_access<WidgetBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<WidgetBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32)),
            WidgetBase::fromBin(v29, widget_bin)) )
      {
        common::milog::MiLogStream::create(
          &v57,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/widget/player_widget_comp.cpp",
          "fromBin",
          188);
        v30 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                &v57,
                (const char (*)[16])"widget fromBin ");
        __k = proto::WidgetBin::material_id(widget_bin);
        v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, &__k);
        common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v31, (const char (*)[7])" fails");
        common::milog::MiLogStream::~MiLogStream(&v57);
        v2 = -1;
        v24 = 0;
      }
      else
      {
        v24 = 1;
      }
    }
LABEL_46:
    std::shared_ptr<WidgetBase>::~shared_ptr((std::shared_ptr<WidgetBase> *const)(v3 + 32));
    if ( v24 != 1 )
      goto LABEL_54;
    google::protobuf::internal::RepeatedPtrIterator<proto::WidgetBin const>::operator++((google::protobuf::internal::RepeatedPtrIterator<const proto::WidgetBin> *const)&__for_begin);
  }
  std::map<data::WidgetOccupyTag,std::weak_ptr<WidgetBase>>::clear(&this->widget_slot_map_);
  __for_range_3 = proto::PlayerWidgetCompBin::slot_material_map(proto_comp);
  google::protobuf::Map<unsigned int,unsigned int>::begin(&__for_begin_0, __for_range_3);
  google::protobuf::Map<unsigned int,unsigned int>::end(&__for_end_0, __for_range_3);
  while ( google::protobuf::operator!=(&__for_begin_0, &__for_end_0) )
  {
    p_tag = (const unsigned int *)google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator*(&__for_begin_0);
    v32 = std::map<unsigned int,std::shared_ptr<WidgetBase>>::operator[](&this->widget_pool_, p_tag + 1);
    p_widget_slot_map = &this->widget_slot_map_;
    if ( *(_BYTE *)(((unsigned __int64)p_tag >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_tag & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_tag >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_tag);
    }
    __k = *p_tag;
    v34 = std::map<data::WidgetOccupyTag,std::weak_ptr<WidgetBase>>::operator[](
            p_widget_slot_map,
            (std::map<data::WidgetOccupyTag,std::weak_ptr<WidgetBase>>::key_type *)&__k);
    std::weak_ptr<WidgetBase>::operator=<WidgetBase>(v34, v32);
    google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator++(&__for_begin_0);
  }
  v2 = 0;
LABEL_54:
  result = v2;
  if ( v58 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 204: range 000000001439F2FA-000000001439FD79
int32_t __cdecl PlayerWidgetComp::toBin(PlayerWidgetComp *const this, proto::PlayerDataBin *player_data_bin)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  Vector3 *p_pos; // r14
  proto::VectorBin *v6; // rax
  Vector3 *p_rot; // r14
  proto::VectorBin *v8; // rax
  proto::WidgetLunchBoxBin *v9; // rax
  std::__shared_ptr_access<WidgetBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  common::milog::MiLogStream *v11; // rax
  int32_t result; // eax
  WidgetBase *v13; // rax
  uint32_t MaterialId; // r14d
  google::protobuf::Map<unsigned int,unsigned int>::key_type *p_key; // rsi
  unsigned int *v16; // rax
  uint32_t *v17; // rdx
  char v18; // cl
  google::protobuf::Map<unsigned int,unsigned int>::key_type key; // [rsp+1Ch] [rbp-174h] BYREF
  std::map<unsigned int,WidgetAnchorPointData>::iterator __for_begin; // [rsp+20h] [rbp-170h] BYREF
  std::map<unsigned int,WidgetAnchorPointData>::iterator __for_end; // [rsp+28h] [rbp-168h] BYREF
  proto::PlayerWidgetCompBin *proto_comp; // [rsp+30h] [rbp-160h]
  std::map<unsigned int,WidgetAnchorPointData> *__for_range; // [rsp+38h] [rbp-158h]
  std::unordered_map<unsigned int,WidgetCoolDownInfo> *__for_range_0; // [rsp+40h] [rbp-150h]
  std::unordered_map<unsigned int,WidgetCoolDownInfo> *__for_range_1; // [rsp+48h] [rbp-148h]
  std::map<unsigned int,std::shared_ptr<WidgetBase>> *__for_range_2; // [rsp+50h] [rbp-140h]
  google::protobuf::Map<unsigned int,unsigned int> *bin_slot_map; // [rsp+58h] [rbp-138h]
  std::map<data::WidgetOccupyTag,std::weak_ptr<WidgetBase>> *__for_range_3; // [rsp+60h] [rbp-130h]
  const std::pair<const data::WidgetOccupyTag,std::weak_ptr<WidgetBase> > *v29; // [rsp+68h] [rbp-128h]
  std::tuple_element<0,const std::pair<const data::WidgetOccupyTag,std::weak_ptr<WidgetBase> > >::type *tag; // [rsp+70h] [rbp-120h]
  std::tuple_element<1,const std::pair<const data::WidgetOccupyTag,std::weak_ptr<WidgetBase> > >::type *widget_wtr; // [rsp+78h] [rbp-118h]
  const std::pair<unsigned int const,std::shared_ptr<WidgetBase> > *v32; // [rsp+80h] [rbp-110h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<WidgetBase> > >::type *material_id; // [rsp+88h] [rbp-108h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<WidgetBase> > >::type *widget_ptr; // [rsp+90h] [rbp-100h]
  proto::WidgetBin *widget_bin; // [rsp+98h] [rbp-F8h]
  const std::pair<unsigned int const,WidgetCoolDownInfo> *v36; // [rsp+A0h] [rbp-F0h]
  std::tuple_element<0,const std::pair<unsigned int const,WidgetCoolDownInfo> >::type *id_0; // [rsp+A8h] [rbp-E8h]
  std::tuple_element<1,const std::pair<unsigned int const,WidgetCoolDownInfo> >::type *cool_down_info_0; // [rsp+B0h] [rbp-E0h]
  proto::WidgetCoolDownInfoBin *proto_1; // [rsp+B8h] [rbp-D8h]
  const std::pair<unsigned int const,WidgetCoolDownInfo> *v40; // [rsp+C0h] [rbp-D0h]
  std::tuple_element<0,const std::pair<unsigned int const,WidgetCoolDownInfo> >::type *id; // [rsp+C8h] [rbp-C8h]
  std::tuple_element<1,const std::pair<unsigned int const,WidgetCoolDownInfo> >::type *cool_down_info; // [rsp+D0h] [rbp-C0h]
  proto::WidgetCoolDownInfoBin *proto_0; // [rsp+D8h] [rbp-B8h]
  const std::pair<unsigned int const,WidgetAnchorPointData> *v44; // [rsp+E0h] [rbp-B0h]
  std::tuple_element<0,const std::pair<unsigned int const,WidgetAnchorPointData> >::type *_; // [rsp+E8h] [rbp-A8h]
  std::tuple_element<1,const std::pair<unsigned int const,WidgetAnchorPointData> >::type *data; // [rsp+F0h] [rbp-A0h]
  proto::WidgetAnchorPointBin *proto; // [rsp+F8h] [rbp-98h]
  common::milog::MiLogStream v48; // [rsp+100h] [rbp-90h] BYREF
  char v49[112]; // [rsp+120h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v49;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 widget_ptr:253";
  *(_QWORD *)(v2 + 16) = PlayerWidgetComp::toBin;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  proto_comp = proto::PlayerDataBin::mutable_widget_comp_bin(player_data_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->next_widget_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->next_widget_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->next_widget_id_);
  }
  proto::PlayerWidgetCompBin::set_next_widget_id(proto_comp, this->next_widget_id_);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_use_anchor_point_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_use_anchor_point_time_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->last_use_anchor_point_time_);
  }
  proto::PlayerWidgetCompBin::set_last_use_anchor_point_time(proto_comp, this->last_use_anchor_point_time_);
  __for_range = &this->anchor_point_map_;
  __for_begin._M_node = std::map<unsigned int,WidgetAnchorPointData>::begin(&this->anchor_point_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,WidgetAnchorPointData>::end(&this->anchor_point_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v44 = std::_Rb_tree_iterator<std::pair<unsigned int const,WidgetAnchorPointData>>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,WidgetAnchorPointData>(v44);
    data = (std::tuple_element<1,const std::pair<unsigned int const,WidgetAnchorPointData> >::type *)std::get<1ul,unsigned int const,WidgetAnchorPointData>(v44);
    proto = proto::PlayerWidgetCompBin::add_anchor_point_list(proto_comp);
    if ( *(_BYTE *)(((unsigned __int64)data >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)data >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(data);
    }
    proto::WidgetAnchorPointBin::set_id(proto, data->id);
    p_pos = &data->pos;
    v6 = proto::WidgetAnchorPointBin::mutable_pos(proto);
    Vector3::toBin(p_pos, v6);
    p_rot = &data->rot;
    v8 = proto::WidgetAnchorPointBin::mutable_rot(proto);
    Vector3::toBin(p_rot, v8);
    if ( *(_BYTE *)(((unsigned __int64)&data->end_time >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)data + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&data->end_time >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&data->end_time);
    }
    proto::WidgetAnchorPointBin::set_end_time(proto, data->end_time);
    if ( *(_BYTE *)(((unsigned __int64)&data->scene_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&data->scene_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&data->scene_id);
    }
    proto::WidgetAnchorPointBin::set_scene_id(proto, data->scene_id);
    std::_Rb_tree_iterator<std::pair<unsigned int const,WidgetAnchorPointData>>::operator++(&__for_begin);
  }
  v9 = proto::PlayerWidgetCompBin::mutable_lunch_box(proto_comp);
  WidgetLunchBoxData::toBin(&this->lunch_box_data_, v9);
  if ( *(char *)(((unsigned __int64)&this->is_oneoff_gather_point_detector_transfered_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_oneoff_gather_point_detector_transfered_);
  proto::PlayerWidgetCompBin::set_is_oneoff_gather_point_detector_transfered(
    proto_comp,
    this->is_oneoff_gather_point_detector_transfered_);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_client_collector_transfered_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 87) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_client_collector_transfered_ >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_client_collector_transfered_);
  }
  proto::PlayerWidgetCompBin::set_is_client_collector_transfered(proto_comp, this->is_client_collector_transfered_);
  __for_range_0 = &this->group_cool_down_info_map_;
  __for_begin._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,WidgetAnchorPointData> >::_Base_ptr)std::unordered_map<unsigned int,WidgetCoolDownInfo>::begin(&this->group_cool_down_info_map_)._M_cur;
  __for_end._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,WidgetAnchorPointData> >::_Base_ptr)std::unordered_map<unsigned int,WidgetCoolDownInfo>::end(__for_range_0)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,WidgetCoolDownInfo>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,WidgetCoolDownInfo>,false> *)&__for_begin,
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,WidgetCoolDownInfo>,false> *)&__for_end) )
  {
    v40 = std::__detail::_Node_iterator<std::pair<unsigned int const,WidgetCoolDownInfo>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,WidgetCoolDownInfo>,false,false> *const)&__for_begin);
    id = std::get<0ul,unsigned int const,WidgetCoolDownInfo>(v40);
    cool_down_info = (std::tuple_element<1,const std::pair<unsigned int const,WidgetCoolDownInfo> >::type *)std::get<1ul,unsigned int const,WidgetCoolDownInfo>(v40);
    proto_0 = proto::PlayerWidgetCompBin::add_group_cool_down_data_list(proto_comp);
    WidgetCoolDownInfo::toBin(cool_down_info, proto_0);
    if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(id);
    }
    proto::WidgetCoolDownInfoBin::set_id(proto_0, *id);
    std::__detail::_Node_iterator<std::pair<unsigned int const,WidgetCoolDownInfo>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,WidgetCoolDownInfo>,false,false> *const)&__for_begin);
  }
  __for_range_1 = &this->normal_cool_down_info_map_;
  __for_begin._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,WidgetAnchorPointData> >::_Base_ptr)std::unordered_map<unsigned int,WidgetCoolDownInfo>::begin(&this->normal_cool_down_info_map_)._M_cur;
  __for_end._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,WidgetAnchorPointData> >::_Base_ptr)std::unordered_map<unsigned int,WidgetCoolDownInfo>::end(__for_range_1)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,WidgetCoolDownInfo>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,WidgetCoolDownInfo>,false> *)&__for_begin,
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,WidgetCoolDownInfo>,false> *)&__for_end) )
  {
    v36 = std::__detail::_Node_iterator<std::pair<unsigned int const,WidgetCoolDownInfo>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,WidgetCoolDownInfo>,false,false> *const)&__for_begin);
    id_0 = std::get<0ul,unsigned int const,WidgetCoolDownInfo>(v36);
    cool_down_info_0 = (std::tuple_element<1,const std::pair<unsigned int const,WidgetCoolDownInfo> >::type *)std::get<1ul,unsigned int const,WidgetCoolDownInfo>(v36);
    proto_1 = proto::PlayerWidgetCompBin::add_normal_cool_down_data_list(proto_comp);
    WidgetCoolDownInfo::toBin(cool_down_info_0, proto_1);
    if ( *(_BYTE *)(((unsigned __int64)id_0 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)id_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id_0 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(id_0);
    }
    proto::WidgetCoolDownInfoBin::set_id(proto_1, *id_0);
    std::__detail::_Node_iterator<std::pair<unsigned int const,WidgetCoolDownInfo>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,WidgetCoolDownInfo>,false,false> *const)&__for_begin);
  }
  __for_range_2 = &this->widget_pool_;
  __for_begin._M_node = std::map<unsigned int,std::shared_ptr<WidgetBase>>::begin(&this->widget_pool_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::shared_ptr<WidgetBase>>::end(__for_range_2)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<WidgetBase> > >::_Self *)&__for_begin,
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<WidgetBase> > >::_Self *)&__for_end) )
  {
    v32 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<WidgetBase>>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<WidgetBase> > > *const)&__for_begin);
    material_id = std::get<0ul,unsigned int const,std::shared_ptr<WidgetBase>>(v32);
    widget_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<WidgetBase> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<WidgetBase>>(v32);
    if ( std::operator!=<WidgetBase>(widget_ptr, 0LL) )
    {
      widget_bin = proto::PlayerWidgetCompBin::add_widget_bin_list(proto_comp);
      v10 = std::__shared_ptr_access<WidgetBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<WidgetBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)widget_ptr);
      if ( WidgetBase::toBin(v10, widget_bin) )
      {
        common::milog::MiLogStream::create(
          &v48,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/widget/player_widget_comp.cpp",
          "toBin",
          245);
        v11 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                &v48,
                (const char (*)[34])"widget toBin failed, material_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, material_id);
        common::milog::MiLogStream::~MiLogStream(&v48);
        result = -1;
        goto LABEL_47;
      }
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<WidgetBase>>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<WidgetBase> > > *const)&__for_begin);
  }
  bin_slot_map = proto::PlayerWidgetCompBin::mutable_slot_material_map(proto_comp);
  __for_range_3 = &this->widget_slot_map_;
  __for_begin._M_node = std::map<data::WidgetOccupyTag,std::weak_ptr<WidgetBase>>::begin(&this->widget_slot_map_)._M_node;
  __for_end._M_node = std::map<data::WidgetOccupyTag,std::weak_ptr<WidgetBase>>::end(__for_range_3)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<const data::WidgetOccupyTag,std::weak_ptr<WidgetBase> > >::_Self *)&__for_begin,
            (const std::_Rb_tree_iterator<std::pair<const data::WidgetOccupyTag,std::weak_ptr<WidgetBase> > >::_Self *)&__for_end) )
  {
    v29 = std::_Rb_tree_iterator<std::pair<data::WidgetOccupyTag const,std::weak_ptr<WidgetBase>>>::operator*((const std::_Rb_tree_iterator<std::pair<const data::WidgetOccupyTag,std::weak_ptr<WidgetBase> > > *const)&__for_begin);
    tag = std::get<0ul,data::WidgetOccupyTag const,std::weak_ptr<WidgetBase>>(v29);
    widget_wtr = (std::tuple_element<1,const std::pair<const data::WidgetOccupyTag,std::weak_ptr<WidgetBase> > >::type *)std::get<1ul,data::WidgetOccupyTag const,std::weak_ptr<WidgetBase>>(v29);
    std::weak_ptr<WidgetBase>::lock((const std::weak_ptr<WidgetBase> *const)(v2 + 32));
    if ( !std::operator==<WidgetBase>((const std::shared_ptr<WidgetBase> *)(v2 + 32), 0LL) )
    {
      v13 = std::__shared_ptr_access<WidgetBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<WidgetBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      MaterialId = WidgetBase::getMaterialId(v13);
      if ( *(_BYTE *)(((unsigned __int64)tag >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)tag & 7) + 3) >= *(_BYTE *)(((unsigned __int64)tag >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(tag);
      }
      key = *tag;
      p_key = &key;
      v16 = google::protobuf::Map<unsigned int,unsigned int>::operator[](bin_slot_map, &key);
      v17 = v16;
      v18 = *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000);
      if ( v18 != 0 && (char)(((unsigned __int8)v16 & 7) + 3) >= v18 )
      {
        LOBYTE(p_key) = v18 != 0;
        __asan_report_store4(v16, p_key, (_BYTE)v16);
      }
      *v17 = MaterialId;
    }
    std::shared_ptr<WidgetBase>::~shared_ptr((std::shared_ptr<WidgetBase> *const)(v2 + 32));
    std::_Rb_tree_iterator<std::pair<data::WidgetOccupyTag const,std::weak_ptr<WidgetBase>>>::operator++((std::_Rb_tree_iterator<std::pair<const data::WidgetOccupyTag,std::weak_ptr<WidgetBase> > > *const)&__for_begin);
  }
  result = 0;
LABEL_47:
  if ( v49 == (char *)v2 )
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

// Line 266: range 000000001439FD7A-000000001439FDAC
int32_t __cdecl PlayerWidgetComp::init(PlayerWidgetComp *const this)
{
  WidgetGadgetMgr *WidgetGadgetMgr; // rax

  PlayerWidgetComp::initEventObservers(this);
  WidgetGadgetMgr = PlayerWidgetComp::getWidgetGadgetMgr(this);
  WidgetGadgetMgr::init(WidgetGadgetMgr);
  return 0;
};

// Line 274: range 000000001439FDAE-00000000143A021D
int32_t __cdecl PlayerWidgetComp::onLogin(PlayerWidgetComp *const this, bool is_new_player)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  FeatureSwitchMgr *p_feature_switch_mgr; // r14
  std::_Rb_tree_iterator<std::pair<unsigned int const,WidgetAnchorPointData> >::pointer v6; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,WidgetAnchorPointData> >::pointer v7; // rax
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  WidgetGadgetMgr *WidgetGadgetMgr; // rax
  const std::pair<unsigned int const,std::shared_ptr<WidgetBase> > *v11; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdx
  int32_t result; // eax
  std::map<unsigned int,std::shared_ptr<WidgetBase>>::iterator __for_end; // [rsp+10h] [rbp-D0h] BYREF
  std::map<unsigned int,std::shared_ptr<WidgetBase>> *__for_range; // [rsp+18h] [rbp-C8h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<WidgetBase> > >::type *material_id; // [rsp+20h] [rbp-C0h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<WidgetBase> > >::type *widget_ptr; // [rsp+28h] [rbp-B8h]
  std::pair<unsigned int const,std::shared_ptr<WidgetBase> > __in; // [rsp+30h] [rbp-B0h] BYREF
  char v20[144]; // [rsp+50h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 8 iter:275 64 16 14 gadget_ptr:279";
  *(_QWORD *)(v2 + 16) = PlayerWidgetComp::onLogin;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202178560;
  *(std::map<unsigned int,WidgetAnchorPointData>::iterator *)(v2 + 32) = std::map<unsigned int,WidgetAnchorPointData>::begin(&this->anchor_point_map_);
  while ( 1 )
  {
    __for_end._M_node = std::map<unsigned int,WidgetAnchorPointData>::end(&this->anchor_point_map_)._M_node;
    if ( !std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,WidgetAnchorPointData> >::_Self *)(v2 + 32),
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,WidgetAnchorPointData> >::_Self *)&__for_end) )
      break;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v2 + 64));
    p_feature_switch_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64))->feature_switch_mgr;
    v6 = std::_Rb_tree_iterator<std::pair<unsigned int const,WidgetAnchorPointData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,WidgetAnchorPointData> > *const)(v2 + 32));
    LOBYTE(p_feature_switch_mgr) = FeatureSwitchMgr::isAnchorPointNeedToDelete(p_feature_switch_mgr, &v6->second.pos);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 64));
    if ( (_BYTE)p_feature_switch_mgr )
    {
      v7 = std::_Rb_tree_iterator<std::pair<unsigned int const,WidgetAnchorPointData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,WidgetAnchorPointData> > *const)(v2 + 32));
      std::shared_ptr<Gadget>::shared_ptr((std::shared_ptr<Gadget> *const)(v2 + 64), &v7->second.gadget_ptr);
      if ( std::operator!=<Gadget>(0LL, (const std::shared_ptr<Gadget> *)(v2 + 64)) )
      {
        v8 = (unsigned __int64)std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
          v8 = __asan_report_load8(v8);
        v9 = *(_QWORD *)v8 + 128LL;
        if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
          v8 = __asan_report_load8(*(_QWORD *)v8 + 128LL);
        (*(void (__fastcall **)(unsigned __int64, VisionContext *))v9)(v8, &VisionContext::miss_context);
      }
      *(std::map<unsigned int,WidgetAnchorPointData>::iterator *)(v2 + 32) = std::map<unsigned int,WidgetAnchorPointData>::erase[abi:cxx11](
                                                                               &this->anchor_point_map_,
                                                                               *(std::map<unsigned int,WidgetAnchorPointData>::iterator *)(v2 + 32));
      std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v2 + 64));
    }
    else
    {
      std::_Rb_tree_iterator<std::pair<unsigned int const,WidgetAnchorPointData>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,WidgetAnchorPointData> > *const)(v2 + 32));
    }
  }
  PlayerWidgetComp::loadBackgroundWidget(this);
  PlayerWidgetComp::refreshAllWidgets(this, 0);
  PlayerWidgetComp::checkAndRepairAttachAbilityGroupWidget(this);
  WidgetGadgetMgr = PlayerWidgetComp::getWidgetGadgetMgr(this);
  WidgetGadgetMgr::onLogin(WidgetGadgetMgr, is_new_player);
  __for_range = &this->widget_pool_;
  *(std::map<unsigned int,std::shared_ptr<WidgetBase>>::iterator *)(v2 + 32) = std::map<unsigned int,std::shared_ptr<WidgetBase>>::begin(&this->widget_pool_);
  __for_end._M_node = std::map<unsigned int,std::shared_ptr<WidgetBase>>::end(__for_range)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<WidgetBase> > >::_Self *)(v2 + 32),
            &__for_end) )
  {
    v11 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<WidgetBase>>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<WidgetBase> > > *const)(v2 + 32));
    std::pair<unsigned int const,std::shared_ptr<WidgetBase>>::pair(&__in, v11);
    material_id = std::get<0ul,unsigned int const,std::shared_ptr<WidgetBase>>(&__in);
    widget_ptr = std::get<1ul,unsigned int const,std::shared_ptr<WidgetBase>>(&__in);
    if ( std::operator!=<WidgetBase>(widget_ptr, 0LL) )
    {
      v12 = (unsigned __int64)std::__shared_ptr_access<WidgetBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<WidgetBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)widget_ptr);
      if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
        v12 = __asan_report_load8(v12);
      v13 = *(_QWORD *)v12 + 64LL;
      if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
        v12 = __asan_report_load8(*(_QWORD *)v12 + 64LL);
      (*(void (__fastcall **)(unsigned __int64))v13)(v12);
    }
    std::pair<unsigned int const,std::shared_ptr<WidgetBase>>::~pair(&__in);
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<WidgetBase>>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<WidgetBase> > > *const)(v2 + 32));
  }
  result = 0;
  if ( v20 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 313: range 00000000143A028A-00000000143A079E
int32_t __cdecl PlayerWidgetComp::notifyAllData(PlayerWidgetComp *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  proto::AnchorPointData *v4; // rax
  uint32_t AnchorPointNextUsableTime; // eax
  proto::LunchBoxData *v6; // rax
  const std::pair<unsigned int const,std::shared_ptr<WidgetBase> > *v7; // rax
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  google::protobuf::RepeatedPtrField<proto::WidgetSlotData> *v10; // rdx
  WidgetGadgetMgr *WidgetGadgetMgr; // rax
  int32_t result; // eax
  std::map<unsigned int,WidgetAnchorPointData>::iterator __for_begin; // [rsp+18h] [rbp-1F8h] BYREF
  std::map<unsigned int,WidgetAnchorPointData>::iterator __for_end; // [rsp+20h] [rbp-1F0h] BYREF
  std::map<unsigned int,WidgetAnchorPointData> *__for_range; // [rsp+28h] [rbp-1E8h]
  std::map<unsigned int,std::shared_ptr<WidgetBase>> *__for_range_0; // [rsp+30h] [rbp-1E0h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<WidgetBase> > >::type *material_id; // [rsp+38h] [rbp-1D8h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<WidgetBase> > >::type *widget_ptr; // [rsp+40h] [rbp-1D0h]
  const std::pair<unsigned int const,WidgetAnchorPointData> *v19; // [rsp+48h] [rbp-1C8h]
  std::tuple_element<0,const std::pair<unsigned int const,WidgetAnchorPointData> >::type *_; // [rsp+50h] [rbp-1C0h]
  std::tuple_element<1,const std::pair<unsigned int const,WidgetAnchorPointData> >::type *data; // [rsp+58h] [rbp-1B8h]
  std::pair<unsigned int const,std::shared_ptr<WidgetBase> > __in; // [rsp+60h] [rbp-1B0h] BYREF
  std::function<ForeachPolicy(WidgetBackground&)> p_func; // [rsp+80h] [rbp-190h] BYREF
  char v24[368]; // [rsp+A0h] [rbp-170h] BYREF

  v1 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_3(320LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 216 10 notify:314";
  *(_QWORD *)(v1 + 16) = PlayerWidgetComp::notifyAllData;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862727] = -218103808;
  v3[536862728] = -202116109;
  v3[536862729] = -202116109;
  proto::AllWidgetDataNotify::AllWidgetDataNotify((proto::AllWidgetDataNotify *const)(v1 + 32));
  __for_range = &this->anchor_point_map_;
  __for_begin._M_node = std::map<unsigned int,WidgetAnchorPointData>::begin(&this->anchor_point_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,WidgetAnchorPointData>::end(&this->anchor_point_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v19 = std::_Rb_tree_iterator<std::pair<unsigned int const,WidgetAnchorPointData>>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,WidgetAnchorPointData>(v19);
    data = (std::tuple_element<1,const std::pair<unsigned int const,WidgetAnchorPointData> >::type *)std::get<1ul,unsigned int const,WidgetAnchorPointData>(v19);
    v4 = proto::AllWidgetDataNotify::add_anchor_point_list((proto::AllWidgetDataNotify *const)(v1 + 32));
    WidgetAnchorPointData::toClient(data, v4);
    std::_Rb_tree_iterator<std::pair<unsigned int const,WidgetAnchorPointData>>::operator++(&__for_begin);
  }
  AnchorPointNextUsableTime = PlayerWidgetComp::getAnchorPointNextUsableTime(this);
  proto::AllWidgetDataNotify::set_next_anchor_point_usable_time(
    (proto::AllWidgetDataNotify *const)(v1 + 32),
    AnchorPointNextUsableTime);
  v6 = proto::AllWidgetDataNotify::mutable_lunch_box_data((proto::AllWidgetDataNotify *const)(v1 + 32));
  WidgetLunchBoxData::toClient(&this->lunch_box_data_, v6);
  __for_range_0 = &this->widget_pool_;
  __for_begin._M_node = std::map<unsigned int,std::shared_ptr<WidgetBase>>::begin(&this->widget_pool_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::shared_ptr<WidgetBase>>::end(__for_range_0)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<WidgetBase> > >::_Self *)&__for_begin,
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<WidgetBase> > >::_Self *)&__for_end) )
  {
    v7 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<WidgetBase>>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<WidgetBase> > > *const)&__for_begin);
    std::pair<unsigned int const,std::shared_ptr<WidgetBase>>::pair(&__in, v7);
    material_id = std::get<0ul,unsigned int const,std::shared_ptr<WidgetBase>>(&__in);
    widget_ptr = std::get<1ul,unsigned int const,std::shared_ptr<WidgetBase>>(&__in);
    if ( std::operator!=<WidgetBase>(widget_ptr, 0LL) )
    {
      v8 = (unsigned __int64)std::__shared_ptr_access<WidgetBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<WidgetBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)widget_ptr);
      if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
        v8 = __asan_report_load8(v8);
      v9 = *(_QWORD *)v8 + 48LL;
      if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
        v8 = __asan_report_load8(*(_QWORD *)v8 + 48LL);
      (*(void (__fastcall **)(unsigned __int64, unsigned __int64))v9)(v8, v1 + 32);
    }
    std::pair<unsigned int const,std::shared_ptr<WidgetBase>>::~pair(&__in);
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<WidgetBase>>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<WidgetBase> > > *const)&__for_begin);
  }
  PlayerWidgetComp::packCoolDownInfo(this, (proto::AllWidgetDataNotify *)(v1 + 32), 1);
  PlayerWidgetComp::packCoolDownInfo(this, (proto::AllWidgetDataNotify *)(v1 + 32), 0);
  v10 = proto::AllWidgetDataNotify::mutable_slot_list((proto::AllWidgetDataNotify *const)(v1 + 32));
  PlayerWidgetComp::packSlotInfo(this, v10);
  std::function<ForeachPolicy ()(WidgetBackground &)>::function<PlayerWidgetComp::notifyAllData(void)::{lambda(WidgetBackground &)#1},void,void>(
    &p_func,
    (PlayerWidgetComp::notifyAllData::<lambda(WidgetBackground&)>)(v1 + 32));
  PlayerWidgetComp::foreachWidget<WidgetBackground>(this, &p_func);
  std::function<ForeachPolicy ()(WidgetBackground &)>::~function(&p_func);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Player::sendProto(this->player_, (const google::protobuf::Message *)(v1 + 32));
  WidgetGadgetMgr = PlayerWidgetComp::getWidgetGadgetMgr(this);
  WidgetGadgetMgr::notifyAllData(WidgetGadgetMgr);
  proto::AllWidgetDataNotify::~AllWidgetDataNotify((proto::AllWidgetDataNotify *const)(v1 + 32));
  result = 0;
  if ( v24 == (char *)v1 )
  {
    *(_DWORD *)((v1 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)((v1 >> 3) + 0x7FFF801C) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8024) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 334: range 00000000143A021E-00000000143A0288
ForeachPolicy __cdecl PlayerWidgetComp::notifyAllData(void)::{lambda(WidgetBackground &)#1}::operator()(
        const PlayerWidgetComp::notifyAllData::<lambda(WidgetBackground&)> *const __closure,
        WidgetBackground *widget)
{
  proto::AllWidgetDataNotify *notify; // rbx
  uint32_t MaterialId; // eax

  if ( WidgetBackground::getIsActive(widget) )
  {
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8(__closure);
    notify = __closure->__notify;
    MaterialId = WidgetBase::getMaterialId((WidgetBase *const)widget);
    proto::AllWidgetDataNotify::add_background_active_widget_list(notify, MaterialId);
  }
  return 0;
};

// Line 350: range 00000000143A07A0-00000000143A07BF
void __cdecl PlayerWidgetComp::onDailyRefresh(PlayerWidgetComp *const this)
{
  PlayerWidgetComp::refreshAllWidgets(this, 1);
};

// Line 355: range 00000000143A07C0-00000000143A07CA
void __cdecl PlayerWidgetComp::onLeaveScene(PlayerWidgetComp *const this)
{
  ;
};

// Line 360: range 00000000143A07CC-00000000143A0F7E
void __cdecl PlayerWidgetComp::initEventObservers(PlayerWidgetComp *const this)
{
  unsigned __int64 p_M_bucket_count; // r14
  __int64 v2; // rax
  _DWORD *v3; // r15
  PlayerEventComp *EventComp; // r12
  PlayerEventComp *v5; // r12
  PlayerEventComp *v6; // r12
  PlayerEventComp *v7; // r12
  PlayerEventComp *v8; // r12
  PlayerEventComp *v9; // r12
  PlayerEventComp *v10; // r12
  PlayerEventComp v11; // [rsp+80h] [rbp-120h] BYREF

  p_M_bucket_count = (unsigned __int64)&v11.event_center_.observer_list_map_._M_h._M_bucket_count;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      p_M_bucket_count = v2;
  }
  *(_QWORD *)p_M_bucket_count = 1102416563LL;
  *(_QWORD *)(p_M_bucket_count + 8) = "2 32 16 12 this_ptr:361 64 16 12 this_wtr:367";
  *(_QWORD *)(p_M_bucket_count + 16) = PlayerWidgetComp::initEventObservers;
  v3 = (_DWORD *)(p_M_bucket_count >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  toThisPtr<PlayerWidgetComp>((PlayerWidgetComp *)(p_M_bucket_count + 32));
  if ( std::operator==<PlayerWidgetComp>(0LL, (const std::shared_ptr<PlayerWidgetComp> *)(p_M_bucket_count + 32)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v11.event_center_.context_.pending_que_.c._M_impl._M_finish._M_last,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/widget/player_widget_comp.cpp",
      "initEventObservers",
      364);
    common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
      (common::milog::MiLogStream *const)&v11.event_center_.context_.pending_que_.c._M_impl._M_finish._M_last,
      (const char (*)[48])"dynamic_pointer_cast to PlayerWidgetComp failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v11.event_center_.context_.pending_que_.c._M_impl._M_finish._M_last);
  }
  else
  {
    std::weak_ptr<PlayerWidgetComp>::weak_ptr<PlayerWidgetComp,void>(
      (std::weak_ptr<PlayerWidgetComp> *const)(p_M_bucket_count + 64),
      (const std::shared_ptr<PlayerWidgetComp> *)(p_M_bucket_count + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    EventComp = Player::getEventComp(this->player_);
    std::weak_ptr<PlayerWidgetComp>::weak_ptr(
      (std::weak_ptr<PlayerWidgetComp> *const)&v11.event_center_.context_.pending_que_.c._M_impl._M_finish,
      (const std::weak_ptr<PlayerWidgetComp> *)(p_M_bucket_count + 64));
    PlayerEventComp::registerObserver<PlayerWidgetComp,PostEnterSceneEvent>(
      &v11,
      (std::weak_ptr<PlayerWidgetComp> *)EventComp,
      (void (*)(PlayerWidgetComp *, const PostEnterSceneEvent *))&v11.event_center_.context_.pending_que_.c._M_impl._M_finish);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v11);
    std::weak_ptr<PlayerWidgetComp>::~weak_ptr((std::weak_ptr<PlayerWidgetComp> *const)&v11.event_center_.context_.pending_que_.c._M_impl._M_finish);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    v5 = Player::getEventComp(this->player_);
    std::weak_ptr<PlayerWidgetComp>::weak_ptr(
      (std::weak_ptr<PlayerWidgetComp> *const)&v11.event_center_.context_.pending_que_.c._M_impl._M_finish,
      (const std::weak_ptr<PlayerWidgetComp> *)(p_M_bucket_count + 64));
    PlayerEventComp::registerObserver<PlayerWidgetComp,EnterMpEvent>(
      (PlayerEventComp *const)&v11._M_weak_this._M_refcount,
      (std::weak_ptr<PlayerWidgetComp> *)v5,
      (void (*)(PlayerWidgetComp *, const EnterMpEvent *))&v11.event_center_.context_.pending_que_.c._M_impl._M_finish);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v11._M_weak_this._M_refcount);
    std::weak_ptr<PlayerWidgetComp>::~weak_ptr((std::weak_ptr<PlayerWidgetComp> *const)&v11.event_center_.context_.pending_que_.c._M_impl._M_finish);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    v6 = Player::getEventComp(this->player_);
    std::weak_ptr<PlayerWidgetComp>::weak_ptr(
      (std::weak_ptr<PlayerWidgetComp> *const)&v11.event_center_.context_.pending_que_.c._M_impl._M_finish,
      (const std::weak_ptr<PlayerWidgetComp> *)(p_M_bucket_count + 64));
    PlayerEventComp::registerObserver<PlayerWidgetComp,EnterCombatEvent>(
      (PlayerEventComp *const)&v11.event_center_,
      (std::weak_ptr<PlayerWidgetComp> *)v6,
      (void (*)(PlayerWidgetComp *, const EnterCombatEvent *))&v11.event_center_.context_.pending_que_.c._M_impl._M_finish);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v11.event_center_);
    std::weak_ptr<PlayerWidgetComp>::~weak_ptr((std::weak_ptr<PlayerWidgetComp> *const)&v11.event_center_.context_.pending_que_.c._M_impl._M_finish);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    v7 = Player::getEventComp(this->player_);
    std::weak_ptr<PlayerWidgetComp>::weak_ptr(
      (std::weak_ptr<PlayerWidgetComp> *const)&v11.event_center_.context_.pending_que_.c._M_impl._M_finish,
      (const std::weak_ptr<PlayerWidgetComp> *)(p_M_bucket_count + 64));
    PlayerEventComp::registerObserver<PlayerWidgetComp,LoseItemEvent>(
      (PlayerEventComp *const)&v11.event_center_.context_.pending_que_,
      (std::weak_ptr<PlayerWidgetComp> *)v7,
      (void (*)(PlayerWidgetComp *, const LoseItemEvent *))&v11.event_center_.context_.pending_que_.c._M_impl._M_finish);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v11.event_center_.context_.pending_que_);
    std::weak_ptr<PlayerWidgetComp>::~weak_ptr((std::weak_ptr<PlayerWidgetComp> *const)&v11.event_center_.context_.pending_que_.c._M_impl._M_finish);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    v8 = Player::getEventComp(this->player_);
    std::weak_ptr<PlayerWidgetComp>::weak_ptr(
      (std::weak_ptr<PlayerWidgetComp> *const)&v11.event_center_.context_.pending_que_.c._M_impl._M_finish,
      (const std::weak_ptr<PlayerWidgetComp> *)(p_M_bucket_count + 64));
    PlayerEventComp::registerObserver<PlayerWidgetComp,EnterVehicleEvent>(
      (PlayerEventComp *const)&v11.event_center_.context_.pending_que_.c._M_impl._M_start,
      (std::weak_ptr<PlayerWidgetComp> *)v8,
      (void (*)(PlayerWidgetComp *, const EnterVehicleEvent *))&v11.event_center_.context_.pending_que_.c._M_impl._M_finish);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v11.event_center_.context_.pending_que_.c._M_impl._M_start);
    std::weak_ptr<PlayerWidgetComp>::~weak_ptr((std::weak_ptr<PlayerWidgetComp> *const)&v11.event_center_.context_.pending_que_.c._M_impl._M_finish);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    v9 = Player::getEventComp(this->player_);
    std::weak_ptr<PlayerWidgetComp>::weak_ptr(
      (std::weak_ptr<PlayerWidgetComp> *const)&v11.event_center_.context_.pending_que_.c._M_impl._M_finish,
      (const std::weak_ptr<PlayerWidgetComp> *)(p_M_bucket_count + 64));
    PlayerEventComp::registerObserver<PlayerWidgetComp,ChangeAvatarEvent>(
      (PlayerEventComp *const)&v11.event_center_.context_.pending_que_.c._M_impl._M_start._M_last,
      (std::weak_ptr<PlayerWidgetComp> *)v9,
      (void (*)(PlayerWidgetComp *, const ChangeAvatarEvent *))&v11.event_center_.context_.pending_que_.c._M_impl._M_finish);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v11.event_center_.context_.pending_que_.c._M_impl._M_start._M_last);
    std::weak_ptr<PlayerWidgetComp>::~weak_ptr((std::weak_ptr<PlayerWidgetComp> *const)&v11.event_center_.context_.pending_que_.c._M_impl._M_finish);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    v10 = Player::getEventComp(this->player_);
    std::weak_ptr<PlayerWidgetComp>::weak_ptr(
      (std::weak_ptr<PlayerWidgetComp> *const)&v11.event_center_.context_.pending_que_.c._M_impl._M_start._M_last,
      (const std::weak_ptr<PlayerWidgetComp> *)(p_M_bucket_count + 64));
    PlayerEventComp::registerObserver<PlayerWidgetComp,ObtainItemEvent>(
      (PlayerEventComp *const)&v11.event_center_.context_.pending_que_.c._M_impl._M_finish,
      (std::weak_ptr<PlayerWidgetComp> *)v10,
      (void (*)(PlayerWidgetComp *, const ObtainItemEvent *))&v11.event_center_.context_.pending_que_.c._M_impl._M_start._M_last);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v11.event_center_.context_.pending_que_.c._M_impl._M_finish);
    std::weak_ptr<PlayerWidgetComp>::~weak_ptr((std::weak_ptr<PlayerWidgetComp> *const)&v11.event_center_.context_.pending_que_.c._M_impl._M_start._M_last);
    std::weak_ptr<PlayerWidgetComp>::~weak_ptr((std::weak_ptr<PlayerWidgetComp> *const)(p_M_bucket_count + 64));
  }
  std::shared_ptr<PlayerWidgetComp>::~shared_ptr((std::shared_ptr<PlayerWidgetComp> *const)(p_M_bucket_count + 32));
  if ( &v11.event_center_.observer_list_map_._M_h._M_bucket_count == (std::_Hashtable<std::type_index,std::pair<const std::type_index,std::vector<std::shared_ptr<Observer>> >,std::allocator<std::pair<const std::type_index,std::vector<std::shared_ptr<Observer>> > >,std::__detail::_Select1st,std::equal_to<std::type_index>,std::hash<std::type_index>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true> >::size_type *)p_M_bucket_count )
  {
    *(_QWORD *)((p_M_bucket_count >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((p_M_bucket_count >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)p_M_bucket_count = 1172321806LL;
    *(_QWORD *)((p_M_bucket_count >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((p_M_bucket_count >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 380: range 00000000143A0F80-00000000143A1456
void __cdecl PlayerWidgetComp::onPostEnterSceneEvent(
        PlayerWidgetComp *const this,
        const PostEnterSceneEvent *post_enter_scene_event)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rcx
  uint32_t scene_id; // r14d
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  Scene *v8; // rdx
  Player *v9; // rax
  PlayerWidgetComp *WidgetComp; // r14
  std::map<unsigned int,WidgetAnchorPointData>::iterator __for_begin; // [rsp+10h] [rbp-110h] BYREF
  std::map<unsigned int,WidgetAnchorPointData>::iterator __for_end; // [rsp+18h] [rbp-108h] BYREF
  std::map<unsigned int,WidgetAnchorPointData> *__for_range; // [rsp+20h] [rbp-100h]
  std::pair<unsigned int const,WidgetAnchorPointData> *__in; // [rsp+28h] [rbp-F8h]
  std::tuple_element<0,std::pair<unsigned int const,WidgetAnchorPointData> >::type *_; // [rsp+30h] [rbp-F0h]
  std::tuple_element<1,std::pair<unsigned int const,WidgetAnchorPointData> >::type *anchor_point_data; // [rsp+38h] [rbp-E8h]
  std::shared_ptr<Player> p_player_ptr; // [rsp+40h] [rbp-E0h] BYREF
  common::milog::MiLogStream v18; // [rsp+50h] [rbp-D0h] BYREF
  char v19[176]; // [rsp+70h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 16 13 scene_ptr:381 64 16 14 player_ptr:387 96 16 14 own_player:388";
  *(_QWORD *)(v2 + 16) = PlayerWidgetComp::onPostEnterSceneEvent;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 32));
  if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/widget/player_widget_comp.cpp",
      "onPostEnterSceneEvent",
      384);
    v5 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
           &v18,
           (const char (*)[23])"getScene fail, player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    operator<<(v5, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v18);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    toThisPtr<Player>((Player *)(v2 + 64));
    std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    Scene::getOwnPlayer((const Scene *const)(v2 + 96));
    if ( std::operator==<Player,Player>(
           (const std::shared_ptr<Player> *)(v2 + 96),
           (const std::shared_ptr<Player> *)(v2 + 64)) )
    {
      __for_range = &this->anchor_point_map_;
      __for_begin._M_node = std::map<unsigned int,WidgetAnchorPointData>::begin(&this->anchor_point_map_)._M_node;
      __for_end._M_node = std::map<unsigned int,WidgetAnchorPointData>::end(&this->anchor_point_map_)._M_node;
      while ( std::operator!=(&__for_begin, &__for_end) )
      {
        __in = std::_Rb_tree_iterator<std::pair<unsigned int const,WidgetAnchorPointData>>::operator*(&__for_begin);
        _ = std::get<0ul,unsigned int const,WidgetAnchorPointData>(__in);
        anchor_point_data = std::get<1ul,unsigned int const,WidgetAnchorPointData>(__in);
        if ( *(_BYTE *)(((unsigned __int64)&anchor_point_data->scene_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&anchor_point_data->scene_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&anchor_point_data->scene_id);
        }
        scene_id = anchor_point_data->scene_id;
        v7 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
        if ( scene_id == Scene::getSceneId(v7) )
        {
          v8 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
          PlayerWidgetComp::tryCreateAnchorPointGadgetAndEnterScene(this, anchor_point_data, v8);
        }
        std::_Rb_tree_iterator<std::pair<unsigned int const,WidgetAnchorPointData>>::operator++(&__for_begin);
      }
    }
    if ( std::operator!=<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 96)) )
    {
      v9 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      WidgetComp = Player::getWidgetComp(v9);
      std::shared_ptr<Player>::shared_ptr(&p_player_ptr, (const std::shared_ptr<Player> *)(v2 + 64));
      PlayerWidgetComp::notifyAnchorPoints(WidgetComp, &p_player_ptr);
      std::shared_ptr<Player>::~shared_ptr(&p_player_ptr);
    }
    PlayerWidgetComp::notifyAllOneoffGatherPointDetectorData(this);
    PlayerWidgetComp::takeoffUseAttachAbilityGroupWidget(this);
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 96));
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 64));
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 32));
  if ( v19 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 409: range 00000000143A1458-00000000143A1927
void __cdecl PlayerWidgetComp::onEnterMpEvent(PlayerWidgetComp *const this, const EnterMpEvent *enter_mp_event)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  PlayerHomeComp *HomeComp; // rax
  char v6; // al
  common::milog::MiLogStream *v7; // rcx
  common::milog::MiLogStream *v8; // rcx
  Player *v9; // rax
  PlayerWidgetComp *WidgetComp; // r14
  std::shared_ptr<PlayerWorld> __r; // [rsp+10h] [rbp-C0h] BYREF
  common::milog::MiLogStream v12; // [rsp+20h] [rbp-B0h] BYREF
  char v13[144]; // [rsp+40h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 13 world_ptr:410 64 16 13 owner_ptr:420";
  *(_QWORD *)(v2 + 16) = PlayerWidgetComp::onEnterMpEvent;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurWorld<PlayerWorld>((const PlayerSceneComp *const)(v2 + 32));
  if ( std::operator==<PlayerWorld>(0LL, (const std::shared_ptr<PlayerWorld> *)(v2 + 32)) )
    goto LABEL_10;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  HomeComp = Player::getHomeComp(this->player_);
  if ( PlayerHomeComp::isInHomeWorld(HomeComp) )
LABEL_10:
    v6 = 1;
  else
    v6 = 0;
  if ( v6 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getMyPlayerWorld((const PlayerSceneComp *const)&__r);
    std::shared_ptr<PlayerWorld>::operator=((std::shared_ptr<PlayerWorld> *const)(v2 + 32), &__r);
    std::shared_ptr<PlayerWorld>::~shared_ptr(&__r);
  }
  if ( std::operator==<PlayerWorld>(0LL, (const std::shared_ptr<PlayerWorld> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/widget/player_widget_comp.cpp",
      "onEnterMpEvent",
      417);
    v7 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
           &v12,
           (const char (*)[23])"world is null! player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    operator<<(v7, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v12);
  }
  else
  {
    std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    PlayerWorld::getOwnPlayer((const PlayerWorld *const)(v2 + 64));
    if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v12,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/widget/player_widget_comp.cpp",
        "onEnterMpEvent",
        423);
      v8 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             &v12,
             (const char (*)[27])"getOwnPlayer fail, player:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      operator<<(v8, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v12);
    }
    else
    {
      v9 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      WidgetComp = Player::getWidgetComp(v9);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      toThisPtr<Player>((Player *)&__r);
      PlayerWidgetComp::notifyAnchorPoints(WidgetComp, (PlayerPtr *)&__r);
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)&__r);
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 64));
  }
  std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v2 + 32));
  if ( v13 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 431: range 00000000143A1928-00000000143A1EDA
void __cdecl PlayerWidgetComp::onEnterCombat(PlayerWidgetComp *const this, const EnterCombatEvent *enter_combat_event)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rcx
  common::milog::MiLogStream *v6; // rcx
  Player *v7; // rax
  PlayerWidgetComp *WidgetComp; // r14
  std::shared_ptr<Entity> __x; // [rsp+10h] [rbp-100h] BYREF
  common::milog::MiLogStream v10; // [rsp+20h] [rbp-F0h] BYREF
  char v11[208]; // [rsp+40h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 16 13 world_ptr:435 64 16 13 owner_ptr:441 96 24 21 combat_entity_vec:432";
  *(_QWORD *)(v2 + 16) = PlayerWidgetComp::onEnterCombat;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  std::vector<std::shared_ptr<Entity>>::vector((std::vector<std::shared_ptr<Entity>> *const)(v2 + 96));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Player::getAvatarComp(this->player_);
  PlayerAvatarComp::getCurAvatar((const PlayerAvatarComp *const)(v2 + 64));
  std::shared_ptr<Entity>::shared_ptr<Avatar,void>(&__x, (std::shared_ptr<Avatar> *)(v2 + 64));
  std::vector<std::shared_ptr<Entity>>::push_back((std::vector<std::shared_ptr<Entity>> *const)(v2 + 96), &__x);
  std::shared_ptr<Entity>::~shared_ptr(&__x);
  std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v2 + 64));
  std::weak_ptr<Monster>::lock((const std::weak_ptr<Monster> *const)(v2 + 64));
  std::shared_ptr<Entity>::shared_ptr<Monster,void>(&__x, (std::shared_ptr<Monster> *)(v2 + 64));
  std::vector<std::shared_ptr<Entity>>::push_back((std::vector<std::shared_ptr<Entity>> *const)(v2 + 96), &__x);
  std::shared_ptr<Entity>::~shared_ptr(&__x);
  std::shared_ptr<Monster>::~shared_ptr((std::shared_ptr<Monster> *const)(v2 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurWorld<PlayerWorld>((const PlayerSceneComp *const)(v2 + 32));
  if ( std::operator==<PlayerWorld>(0LL, (const std::shared_ptr<PlayerWorld> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/widget/player_widget_comp.cpp",
      "onEnterCombat",
      438);
    v5 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
           &v10,
           (const char (*)[26])"getCurWorld fail, player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    operator<<(v5, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v10);
  }
  else
  {
    std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    PlayerWorld::getOwnPlayer((const PlayerWorld *const)(v2 + 64));
    if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v10,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/widget/player_widget_comp.cpp",
        "onEnterCombat",
        444);
      v6 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             &v10,
             (const char (*)[27])"getOwnPlayer fail, player:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      operator<<(v6, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v10);
    }
    else
    {
      v7 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      WidgetComp = Player::getWidgetComp(v7);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      Player::getSceneComp(this->player_);
      PlayerSceneComp::getCurScene((const PlayerSceneComp *const)&__x);
      PlayerWidgetComp::removeNearbyBonfiresOnEnterCombat(
        WidgetComp,
        (ScenePtr *)&__x,
        (const std::vector<std::shared_ptr<Entity>> *)(v2 + 96));
      std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)&__x);
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 64));
  }
  std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v2 + 32));
  std::vector<std::shared_ptr<Entity>>::~vector((std::vector<std::shared_ptr<Entity>> *const)(v2 + 96));
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
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

// Line 451: range 00000000143A1EDC-00000000143A21C8
void __cdecl PlayerWidgetComp::onLoseItemEvent(PlayerWidgetComp *const this, const LoseItemEvent *lose_item_event)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  WidgetBase *v5; // rax
  common::milog::MiLogStream *v6; // rax
  std::__shared_ptr_access<WidgetAttachAbilityGroup,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rdx
  common::milog::MiLogStream v8; // [rsp+10h] [rbp-D0h] BYREF
  char v9[176]; // [rsp+30h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 15 material_id:458 64 16 14 widget_ptr:452 96 16 35 attach_ability_group_widget_ptr:460";
  *(_QWORD *)(v2 + 16) = PlayerWidgetComp::onLoseItemEvent;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  PlayerWidgetComp::getActionPanelWidget((const PlayerWidgetComp *const)(v2 + 64));
  if ( std::operator==<WidgetBase>(0LL, (const std::shared_ptr<WidgetBase> *)(v2 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/widget/player_widget_comp.cpp",
      "onLoseItemEvent",
      455);
    common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(&v8, (const char (*)[22])"widget_ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v8);
  }
  else
  {
    v5 = std::__shared_ptr_access<WidgetBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<WidgetBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    *(_DWORD *)(v2 + 48) = WidgetBase::getMaterialId(v5);
    std::dynamic_pointer_cast<WidgetAttachAbilityGroup,WidgetBase>((const std::shared_ptr<WidgetBase> *)(v2 + 96));
    if ( std::operator==<WidgetAttachAbilityGroup>((const std::shared_ptr<WidgetAttachAbilityGroup> *)(v2 + 96), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v8,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/widget/player_widget_comp.cpp",
        "onLoseItemEvent",
        463);
      v6 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
             &v8,
             (const char (*)[54])"convert WidgetAttachAbilityGroup failed, material_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v8);
    }
    else
    {
      v7 = std::__shared_ptr_access<WidgetAttachAbilityGroup,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<WidgetAttachAbilityGroup,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      WidgetAttachAbilityGroup::onLoseItemEvent(v7, lose_item_event);
    }
    std::shared_ptr<WidgetAttachAbilityGroup>::~shared_ptr((std::shared_ptr<WidgetAttachAbilityGroup> *const)(v2 + 96));
  }
  std::shared_ptr<WidgetBase>::~shared_ptr((std::shared_ptr<WidgetBase> *const)(v2 + 64));
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 471: range 00000000143A21CA-00000000143A221B
uint32_t __cdecl PlayerWidgetComp::getNextWidgetId(PlayerWidgetComp *const this)
{
  uint32_t result; // eax

  if ( *(_BYTE *)(((unsigned __int64)&this->next_widget_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->next_widget_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->next_widget_id_);
  }
  result = this->next_widget_id_;
  this->next_widget_id_ = result + 1;
  return result;
};

// Line 477: range 00000000143A2570-00000000143A2AF8
// local variable allocation has failed, the output may be wrong!
void __cdecl PlayerWidgetComp::refreshAllWidgets(PlayerWidgetComp *const this, bool is_notify)
{
  __int64 v2; // r14
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  const unsigned int *v6; // rax
  _DWORD *v7; // rdx
  char *v8; // rdx OVERLAPPED
  unsigned __int64 v9; // rsi OVERLAPPED
  std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdx
  char v14; // al
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  unsigned int __b; // [rsp+2Ch] [rbp-D4h] BYREF
  std::weak_ptr<Player> v19; // [rsp+30h] [rbp-D0h] BYREF
  std::shared_ptr<UnixTimer> __r; // [rsp+40h] [rbp-C0h] BYREF
  std::function<ForeachPolicy(WidgetGadgetBuilder&)> p_func; // [rsp+50h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+70h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 7 now:478 48 4 13 next_time:479 64 16 14 player_wtr:497";
  *(_QWORD *)(v3 + 16) = PlayerWidgetComp::refreshAllWidgets;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -202178560;
  *(_DWORD *)(v3 + 32) = common::tools::TimeUtils::getNow();
  *(_DWORD *)(v3 + 48) = PlayerWidgetComp::refreshAnchorPoints(this, *(_DWORD *)(v3 + 32), is_notify);
  __b = PlayerWidgetComp::refreshBonfires(this, *(_DWORD *)(v3 + 32), is_notify);
  v6 = std::min<unsigned int>((const unsigned int *)(v3 + 48), &__b);
  v7 = v6;
  if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v6);
  }
  *(_DWORD *)(v3 + 48) = *v7;
  v8 = (char *)(v3 + 48);
  v9 = *(unsigned int *)(v3 + 32) | v2 & 0xFFFFFF0000000000LL | ((unsigned __int64)is_notify << 32);
  std::function<ForeachPolicy ()(WidgetGadgetBuilder &)>::function<PlayerWidgetComp::refreshAllWidgets(bool)::{lambda(WidgetGadgetBuilder &)#1},void,void>(
    &p_func,
    *(PlayerWidgetComp::refreshAllWidgets::<lambda(WidgetGadgetBuilder&)> *)(&v8 - 1));
  PlayerWidgetComp::foreachWidget<WidgetGadgetBuilder>(this, &p_func);
  std::function<ForeachPolicy ()(WidgetGadgetBuilder &)>::~function(&p_func);
  if ( std::operator!=<UnixTimer>(0LL, &this->widget_timer_ptr_) )
  {
    v10 = std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->widget_timer_ptr_);
    if ( common::tools::MiTimer::isActive(v10) )
    {
      v11 = std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->widget_timer_ptr_);
      common::tools::MiTimer::cancel(v11);
    }
    std::shared_ptr<UnixTimer>::shared_ptr(&__r, 0LL);
    std::shared_ptr<UnixTimer>::operator=(&this->widget_timer_ptr_, &__r);
    std::shared_ptr<UnixTimer>::~shared_ptr(&__r);
  }
  if ( *(_DWORD *)(v3 + 48)
    && *(_DWORD *)(v3 + 32) < *(_DWORD *)(v3 + 48)
    && (unsigned int)(*(_DWORD *)(v3 + 32) + 86400) > *(_DWORD *)(v3 + 48) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    toThisPtr<Player>((Player *)&__r);
    std::weak_ptr<Player>::weak_ptr<Player,void>(
      (std::weak_ptr<Player> *const)(v3 + 64),
      (const std::shared_ptr<Player> *)&__r);
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)&__r);
    std::weak_ptr<Player>::weak_ptr(&v19, (const std::weak_ptr<Player> *)(v3 + 64));
    common::tools::perf::make_shared<UnixTimer,PlayerWidgetComp::refreshAllWidgets(bool)::{lambda(unsigned long)#2}>(
      (PlayerWidgetComp::refreshAllWidgets::<lambda(uint64_t)> *)&__r,
      (PlayerWidgetComp::refreshAllWidgets::<lambda(uint64_t)> *)&v19);
    std::shared_ptr<UnixTimer>::operator=(&this->widget_timer_ptr_, &__r);
    std::shared_ptr<UnixTimer>::~shared_ptr(&__r);
    PlayerWidgetComp::refreshAllWidgets(bool)::{lambda(unsigned long)#2}::~refreshAllWidgets((PlayerWidgetComp::refreshAllWidgets::<lambda(uint64_t)> *const)&v19);
    if ( std::operator==<UnixTimer>(0LL, &this->widget_timer_ptr_) )
      goto LABEL_21;
    v12 = (unsigned __int64)std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->widget_timer_ptr_);
    if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
      v12 = __asan_report_load8(v12);
    v13 = *(_QWORD *)v12 + 16LL;
    if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
      v12 = __asan_report_load8(*(_QWORD *)v12 + 16LL);
    if ( (*(unsigned int (__fastcall **)(unsigned __int64, _QWORD, _QWORD, const char *, const char *, __int64, _QWORD, _QWORD))v13)(
           v12,
           (unsigned int)(*(_DWORD *)(v3 + 48) - *(_DWORD *)(v3 + 32)),
           0LL,
           "./src/player/widget/player_widget_comp.cpp",
           "refreshAllWidgets",
           508LL,
           0LL,
           0LL) )
    {
LABEL_21:
      v14 = 1;
    }
    else
    {
      v14 = 0;
    }
    if ( v14 )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&p_func,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/widget/player_widget_comp.cpp",
        "refreshAllWidgets",
        510);
      v15 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
              (common::milog::MiLogStream *const)&p_func,
              (const char (*)[29])"start timer fail, next_time:");
      v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v3 + 48));
      v17 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v16, (const char (*)[6])" now:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_func);
    }
    std::weak_ptr<Player>::~weak_ptr((std::weak_ptr<Player> *const)(v3 + 64));
  }
  if ( v22 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 481: range 00000000143A221C-00000000143A23A1
ForeachPolicy __cdecl PlayerWidgetComp::refreshAllWidgets(bool)::{lambda(WidgetGadgetBuilder &)#1}::operator()(
        const PlayerWidgetComp::refreshAllWidgets::<lambda(WidgetGadgetBuilder&)> *const __closure,
        WidgetGadgetBuilder *gadget_builder)
{
  bool is_notify; // dl
  const unsigned int *v3; // rdx
  uint32_t *next_time; // rcx
  __int64 v5; // rsi
  bool v6; // dl
  unsigned int __b; // [rsp+1Ch] [rbp-4h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&__closure->__is_notify >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)__closure + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&__closure->__is_notify >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&__closure->__is_notify);
  }
  is_notify = __closure->__is_notify;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(__closure);
  }
  __b = WidgetGadgetBuilder::refreshGadgetBuilders(gadget_builder, __closure->__now, is_notify);
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__next_time >> 3) + 0x7FFF8000) )
    __asan_report_load8(&__closure->__next_time);
  v3 = std::min<unsigned int>(__closure->__next_time, &__b);
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__next_time >> 3) + 0x7FFF8000) )
    __asan_report_load8(&__closure->__next_time);
  next_time = __closure->__next_time;
  if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v3);
  }
  v5 = *v3;
  v6 = *(_BYTE *)(((unsigned __int64)next_time >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)next_time & 7) + 3) >= *(_BYTE *)(((unsigned __int64)next_time >> 3) + 0x7FFF8000);
  if ( v6 )
    __asan_report_store4(next_time, v5, v6);
  *next_time = v5;
  return 0;
};

// Line 498: range 00000000143A23A2-00000000143A2553
void __cdecl PlayerWidgetComp::refreshAllWidgets(bool)::{lambda(unsigned long)#2}::operator()(
        const PlayerWidgetComp::refreshAllWidgets::<lambda(uint64_t)> *const __closure,
        uint64_t now_ms)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  Player *v5; // rax
  PlayerWidgetComp *WidgetComp; // rax
  common::milog::MiLogStream v7; // [rsp+10h] [rbp-90h] BYREF
  char v8[112]; // [rsp+30h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 player_ptr:500";
  *(_QWORD *)(v2 + 16) = PlayerWidgetComp::refreshAllWidgets(bool)::{lambda(unsigned long)#2}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v2 + 32));
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v2 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/widget/player_widget_comp.cpp",
      "operator()",
      503);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v7, (const char (*)[19])"player_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v7);
  }
  else
  {
    v5 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    WidgetComp = Player::getWidgetComp(v5);
    PlayerWidgetComp::refreshAllWidgets(WidgetComp, 1);
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 32));
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 498: range 00000000143F1738-00000000143F175D
void __cdecl PlayerWidgetComp::refreshAllWidgets(bool)::{lambda(unsigned long)#2}::refreshAllWidgets(
        PlayerWidgetComp::refreshAllWidgets::<lambda(uint64_t)> *const this,
        PlayerWidgetComp::refreshAllWidgets::<lambda(uint64_t)> *a2)
{
  std::weak_ptr<Player>::weak_ptr(&this->__player_wtr, &a2->__player_wtr);
};

// Line 498: range 00000000143F1D16-00000000143F1D3B
void __cdecl PlayerWidgetComp::refreshAllWidgets(bool)::{lambda(unsigned long)#2}::refreshAllWidgets(
        PlayerWidgetComp::refreshAllWidgets::<lambda(uint64_t)> *const this,
        const PlayerWidgetComp::refreshAllWidgets::<lambda(uint64_t)> *a2)
{
  std::weak_ptr<Player>::weak_ptr(&this->__player_wtr, &a2->__player_wtr);
};

// Line 498: range 00000000143A2554-00000000143A256E
void __cdecl PlayerWidgetComp::refreshAllWidgets(bool)::{lambda(unsigned long)#2}::~refreshAllWidgets(
        PlayerWidgetComp::refreshAllWidgets::<lambda(uint64_t)> *const this)
{
  std::weak_ptr<Player>::~weak_ptr(&this->__player_wtr);
};

// Line 517: range 00000000143A2AFA-00000000143A2BA1
void __cdecl PlayerWidgetComp::clearWidgetCoolDownByGm(PlayerWidgetComp *const this)
{
  bool v1; // dl
  std::shared_ptr<Player> p_player_ptr; // [rsp+10h] [rbp-20h] BYREF

  v1 = *(_BYTE *)(((unsigned __int64)&this->last_use_anchor_point_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_use_anchor_point_time_ >> 3)
                                                        + 0x7FFF8000);
  if ( v1 )
    __asan_report_store4(&this->last_use_anchor_point_time_, (((_BYTE)this + 52) & 7u) + 3, v1);
  this->last_use_anchor_point_time_ = 0;
  std::shared_ptr<Player>::shared_ptr(&p_player_ptr, 0LL);
  PlayerWidgetComp::notifyAnchorPoints(this, &p_player_ptr);
  std::shared_ptr<Player>::~shared_ptr(&p_player_ptr);
};

// Line 524: range 00000000143A2BA2-00000000143A358A
int32_t __cdecl PlayerWidgetComp::checkUseAnchorPoint(PlayerWidgetComp *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  common::milog::MiLogStream *v5; // rcx
  int32_t v6; // r14d
  PlayerSceneComp *SceneComp; // rax
  common::milog::MiLogStream *v8; // rcx
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<data::ConfigWidgetToyAnchorPoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__shared_ptr_access<data::ConfigWidgetToyAnchorPoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  PlayerItemComp *ItemComp; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rcx
  std::map<unsigned int,WidgetAnchorPointData>::size_type v18; // r14
  std::__shared_ptr_access<data::ConfigWidgetToyAnchorPoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  common::milog::MiLogStream *v20; // r14
  uint32_t last_use_anchor_point_time; // r14d
  std::__shared_ptr_access<data::ConfigWidgetToyAnchorPoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // r14
  std::__shared_ptr_access<data::ConfigWidgetToyAnchorPoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  int32_t result; // eax
  unsigned __int64 val; // [rsp+18h] [rbp-118h] BYREF
  common::milog::MiLogStream v31; // [rsp+20h] [rbp-110h] BYREF
  char v32[240]; // [rsp+40h] [rbp-F0h] BYREF

  v1 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(192LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "6 32 4 7 ret:557 48 4 7 now:570 64 16 27 anchor_point_config_ptr:525 96 16 13 scene_ptr:536 128 "
                        "16 14 avatar_ptr:542 160 16 14 item_param:554";
  *(_QWORD *)(v1 + 16) = PlayerWidgetComp::checkUseAnchorPoint;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556924;
  v3[536862722] = -219021312;
  v3[536862723] = -219021312;
  v3[536862724] = -219021312;
  v3[536862725] = -202178560;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v1 + 160));
  v4 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 160));
  JsonConfigMgr::getWidgetNewConfig(&v4->design_config.json_config_mgr);
  WidgetJsonNewConfig::findWidgetConfig<data::ConfigWidgetToyAnchorPoint>((const WidgetJsonNewConfig *const)(v1 + 64));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v1 + 160));
  if ( std::operator==<data::ConfigWidgetToyAnchorPoint>(
         0LL,
         (const std::shared_ptr<data::ConfigWidgetToyAnchorPoint> *)(v1 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v31,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/widget/player_widget_comp.cpp",
      "checkUseAnchorPoint",
      528);
    v5 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
           &v31,
           (const char (*)[31])"findWidgetConfig fail, player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    operator<<(v5, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v31);
    v6 = 5;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    SceneComp = Player::getSceneComp(this->player_);
    if ( !PlayerSceneComp::isInMyPlayerWorld(SceneComp) )
    {
      v6 = 512;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      Player::getSceneComp(this->player_);
      PlayerSceneComp::getCurScene<PlayerWorldScene>((PlayerSceneComp *const)(v1 + 160));
      std::shared_ptr<Scene>::shared_ptr<PlayerWorldScene,void>(
        (std::shared_ptr<Scene> *const)(v1 + 96),
        (std::shared_ptr<PlayerWorldScene> *)(v1 + 160));
      std::shared_ptr<PlayerWorldScene>::~shared_ptr((std::shared_ptr<PlayerWorldScene> *const)(v1 + 160));
      if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v1 + 96)) )
      {
        common::milog::MiLogStream::create(
          &v31,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/widget/player_widget_comp.cpp",
          "checkUseAnchorPoint",
          539);
        v8 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
               &v31,
               (const char (*)[23])"getScene fail, player:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        operator<<(v8, this->player_);
        common::milog::MiLogStream::~MiLogStream(&v31);
        v6 = -1;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        Player::getAvatarComp(this->player_);
        PlayerAvatarComp::getCurAvatar((const PlayerAvatarComp *const)(v1 + 128));
        if ( std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v1 + 128)) )
        {
          common::milog::MiLogStream::create(
            &v31,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/widget/player_widget_comp.cpp",
            "checkUseAnchorPoint",
            545);
          common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
            &v31,
            (const char (*)[19])"avatar_ptr is null");
          common::milog::MiLogStream::~MiLogStream(&v31);
          v6 = -1;
        }
        else
        {
          v9 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
          *(_DWORD *)(v1 + 48) = Scene::getSceneId(v9);
          v10 = std::__shared_ptr_access<data::ConfigWidgetToyAnchorPoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigWidgetToyAnchorPoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
          if ( common::tools::MiscUtils::isContains<unsigned int>(
                 &v10->invalid_scene_ids,
                 (const unsigned int *)(v1 + 48)) )
          {
            v6 = 553;
          }
          else
          {
            *(_DWORD *)(v1 + 160) = 0;
            *(_DWORD *)(v1 + 164) = 0;
            *(_DWORD *)(v1 + 168) = 0;
            *(_DWORD *)(v1 + 172) = 0;
            v11 = std::__shared_ptr_access<data::ConfigWidgetToyAnchorPoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigWidgetToyAnchorPoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
            if ( *(_BYTE *)(((unsigned __int64)&v11->material_id >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&v11->material_id >> 3) + 0x7FFF8000) <= 3 )
            {
              v11 = (std::__shared_ptr_access<data::ConfigWidgetToyAnchorPoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v11->material_id);
            }
            *(_DWORD *)(v1 + 160) = v11->material_id;
            *(_DWORD *)(v1 + 164) = 1;
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            ItemComp = Player::getItemComp(this->player_);
            *(_DWORD *)(v1 + 32) = PlayerItemComp::checkSubItem(ItemComp, (const ItemParam *)(v1 + 160));
            if ( *(_DWORD *)(v1 + 32) )
            {
              common::milog::MiLogStream::create(
                &v31,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/player/widget/player_widget_comp.cpp",
                "checkUseAnchorPoint",
                560);
              v13 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                      &v31,
                      (const char (*)[31])"checkSubItem fail, item_param:");
              v14 = operator<<(v13, (const ItemParam *)(v1 + 160));
              v15 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v14, (const char (*)[6])" ret:");
              v16 = common::milog::MiLogStream::operator<<<int,(int *)0>(v15, (const int *)(v1 + 32));
              v17 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v16, (const char (*)[9])" player:");
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8(&this->player_);
              operator<<(v17, this->player_);
              common::milog::MiLogStream::~MiLogStream(&v31);
              v6 = *(_DWORD *)(v1 + 32);
            }
            else
            {
              v18 = std::map<unsigned int,WidgetAnchorPointData>::size(&this->anchor_point_map_);
              v19 = std::__shared_ptr_access<data::ConfigWidgetToyAnchorPoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigWidgetToyAnchorPoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
              if ( *(_BYTE *)(((unsigned __int64)&v19->max_count_in_scene >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&v19->max_count_in_scene >> 3) + 0x7FFF8000) <= 3 )
              {
                v19 = (std::__shared_ptr_access<data::ConfigWidgetToyAnchorPoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v19->max_count_in_scene);
              }
              if ( v18 < v19->max_count_in_scene )
              {
                *(_DWORD *)(v1 + 48) = common::tools::TimeUtils::getNow();
                if ( *(_BYTE *)(((unsigned __int64)&this->last_use_anchor_point_time_ >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_use_anchor_point_time_ >> 3)
                                                                      + 0x7FFF8000) )
                {
                  __asan_report_load4(&this->last_use_anchor_point_time_);
                }
                last_use_anchor_point_time = this->last_use_anchor_point_time_;
                v22 = std::__shared_ptr_access<data::ConfigWidgetToyAnchorPoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigWidgetToyAnchorPoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
                if ( *(_BYTE *)(((unsigned __int64)&v22->cool_down >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&v22->cool_down >> 3) + 0x7FFF8000) <= 3 )
                {
                  v22 = (std::__shared_ptr_access<data::ConfigWidgetToyAnchorPoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v22->cool_down);
                }
                if ( last_use_anchor_point_time + v22->cool_down <= *(_DWORD *)(v1 + 48) )
                {
                  v6 = 0;
                }
                else
                {
                  common::milog::MiLogStream::create(
                    &v31,
                    &common::milog::MiLogDefault::default_log_obj_,
                    1u,
                    "./src/player/widget/player_widget_comp.cpp",
                    "checkUseAnchorPoint",
                    573);
                  v23 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                          &v31,
                          (const char (*)[29])"last_use_anchor_point_time_:");
                  v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v23,
                          &this->last_use_anchor_point_time_);
                  v25 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v24, (const char (*)[5])" CD:");
                  v26 = std::__shared_ptr_access<data::ConfigWidgetToyAnchorPoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigWidgetToyAnchorPoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
                  v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, &v26->cool_down);
                  v28 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v27, (const char (*)[6])" now:");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v28,
                    (const unsigned int *)(v1 + 48));
                  common::milog::MiLogStream::~MiLogStream(&v31);
                  v6 = 608;
                }
              }
              else
              {
                common::milog::MiLogStream::create(
                  &v31,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/player/widget/player_widget_comp.cpp",
                  "checkUseAnchorPoint",
                  566);
                v20 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                        &v31,
                        (const char (*)[22])"anchor point is full:");
                val = std::map<unsigned int,WidgetAnchorPointData>::size(&this->anchor_point_map_);
                common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v20, &val);
                common::milog::MiLogStream::~MiLogStream(&v31);
                v6 = 675;
              }
            }
          }
        }
        std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v1 + 128));
      }
      std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v1 + 96));
    }
  }
  std::shared_ptr<data::ConfigWidgetToyAnchorPoint>::~shared_ptr((std::shared_ptr<data::ConfigWidgetToyAnchorPoint> *const)(v1 + 64));
  result = v6;
  if ( v32 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 580: range 00000000143A358C-00000000143A413C
void __cdecl PlayerWidgetComp::useAnchorPoint(PlayerWidgetComp *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  common::milog::MiLogStream *v5; // rcx
  common::milog::MiLogStream *v6; // rcx
  common::milog::MiLogStream *v7; // rcx
  std::__shared_ptr_access<data::ConfigWidgetToyAnchorPoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  PlayerItemComp *ItemComp; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  bool v14; // dl
  char *v15; // rsi
  uint32_t v16; // ecx
  char v17; // al
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  unsigned __int64 Position; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  unsigned __int64 Rotation; // rax
  __int64 v22; // rsi
  std::__shared_ptr_access<data::ConfigWidgetToyAnchorPoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rdx
  uint32_t *p_lasting_time; // rax
  uint32_t v25; // ecx
  char v26; // dl
  bool v27; // dl
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  uint32_t SceneId; // edx
  char v30; // al
  Scene *v31; // rdx
  uint32_t now; // [rsp+14h] [rbp-14Ch]
  WidgetAnchorPointData *anchor_point_data; // [rsp+18h] [rbp-148h]
  std::shared_ptr<Player> v34; // [rsp+20h] [rbp-140h] BYREF
  common::milog::MiLogStream v35; // [rsp+30h] [rbp-130h] BYREF
  char v36[272]; // [rsp+50h] [rbp-110h] BYREF

  v1 = (unsigned __int64)v36;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(224LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "7 32 4 7 ret:604 48 4 6 id:613 64 8 10 reason:603 96 16 27 anchor_point_config_ptr:581 128 16 13"
                        " scene_ptr:587 160 16 14 avatar_ptr:593 192 16 14 item_param:600";
  *(_QWORD *)(v1 + 16) = PlayerWidgetComp::useAnchorPoint;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556924;
  v3[536862722] = -218959360;
  v3[536862723] = -219021312;
  v3[536862724] = -219021312;
  v3[536862725] = -219021312;
  v3[536862726] = -202178560;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v34);
  v4 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v34);
  JsonConfigMgr::getWidgetNewConfig(&v4->design_config.json_config_mgr);
  WidgetJsonNewConfig::findWidgetConfig<data::ConfigWidgetToyAnchorPoint>((const WidgetJsonNewConfig *const)(v1 + 96));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v34);
  if ( !std::operator==<data::ConfigWidgetToyAnchorPoint>(
          0LL,
          (const std::shared_ptr<data::ConfigWidgetToyAnchorPoint> *)(v1 + 96)) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v1 + 128));
    if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v1 + 128)) )
    {
      common::milog::MiLogStream::create(
        &v35,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/widget/player_widget_comp.cpp",
        "useAnchorPoint",
        590);
      v6 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
             &v35,
             (const char (*)[23])"getScene fail, player:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      operator<<(v6, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v35);
      goto LABEL_48;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    Player::getAvatarComp(this->player_);
    PlayerAvatarComp::getCurAvatar((const PlayerAvatarComp *const)(v1 + 160));
    if ( std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v1 + 160)) )
    {
      common::milog::MiLogStream::create(
        &v35,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/widget/player_widget_comp.cpp",
        "useAnchorPoint",
        596);
      v7 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
             &v35,
             (const char (*)[28])"avatar_ptr is null, player:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
    }
    else
    {
      *(_DWORD *)(v1 + 192) = 0;
      *(_DWORD *)(v1 + 196) = 0;
      *(_DWORD *)(v1 + 200) = 0;
      *(_DWORD *)(v1 + 204) = 0;
      v8 = std::__shared_ptr_access<data::ConfigWidgetToyAnchorPoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigWidgetToyAnchorPoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
      if ( *(_BYTE *)(((unsigned __int64)&v8->material_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v8->material_id >> 3) + 0x7FFF8000) <= 3 )
      {
        v8 = (std::__shared_ptr_access<data::ConfigWidgetToyAnchorPoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v8->material_id);
      }
      *(_DWORD *)(v1 + 192) = v8->material_id;
      *(_DWORD *)(v1 + 196) = 1;
      SubItemReason::SubItemReason((SubItemReason *const)(v1 + 64), ACTION_REASON_USE_WIDGET_ANCHOR_POINT);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      ItemComp = Player::getItemComp(this->player_);
      *(_DWORD *)(v1 + 32) = PlayerItemComp::subItem(
                               ItemComp,
                               (const ItemParam *)(v1 + 192),
                               (const SubItemReason *)(v1 + 64));
      if ( !*(_DWORD *)(v1 + 32) )
      {
        now = common::tools::TimeUtils::getNow();
        v14 = *(_BYTE *)(((unsigned __int64)&this->last_use_anchor_point_time_ >> 3) + 0x7FFF8000) != 0
           && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_use_anchor_point_time_ >> 3)
                                                               + 0x7FFF8000);
        if ( v14 )
          __asan_report_store4(&this->last_use_anchor_point_time_, (((_BYTE)this + 52) & 7u) + 3, v14);
        this->last_use_anchor_point_time_ = now;
        *(_DWORD *)(v1 + 48) = PlayerWidgetComp::getNextWidgetId(this);
        v15 = (char *)(v1 + 48);
        anchor_point_data = std::map<unsigned int,WidgetAnchorPointData>::operator[](
                              &this->anchor_point_map_,
                              (const std::map<unsigned int,WidgetAnchorPointData>::key_type *)(v1 + 48));
        v16 = *(_DWORD *)(v1 + 48);
        v17 = *(_BYTE *)(((unsigned __int64)anchor_point_data >> 3) + 0x7FFF8000);
        if ( v17 != 0 && v17 <= 3 )
        {
          LOBYTE(v15) = v17 != 0;
          __asan_report_store4(anchor_point_data, v15, (_BYTE)anchor_point_data);
        }
        anchor_point_data->id = v16;
        v18 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 160));
        Position = (unsigned __int64)Entity::getPosition((const Entity *const)v18);
        if ( (((unsigned __int8)anchor_point_data + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&anchor_point_data->pos >> 3)
                                                                        + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)&anchor_point_data->pos >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&anchor_point_data->pos.z + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)anchor_point_data + 15) & 7) >= *(_BYTE *)((((unsigned __int64)&anchor_point_data->pos.z
                                                                           + 3) >> 3)
                                                                         + 0x7FFF8000) )
        {
          Position = __asan_report_store_n(&anchor_point_data->pos, 12LL);
        }
        if ( (char)(Position & 7) >= *(_BYTE *)((Position >> 3) + 0x7FFF8000)
          && *(_BYTE *)((Position >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)(((Position + 11) >> 3) + 0x7FFF8000) != 0
          && (char)((Position + 11) & 7) >= *(_BYTE *)(((Position + 11) >> 3) + 0x7FFF8000) )
        {
          Position = __asan_report_load_n(Position, 12LL);
        }
        *(_QWORD *)&anchor_point_data->pos.x = *(_QWORD *)Position;
        anchor_point_data->pos.z = *(float *)(Position + 8);
        v20 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 160));
        Rotation = (unsigned __int64)Entity::getRotation((const Entity *const)v20);
        if ( *(char *)(((unsigned __int64)&anchor_point_data->rot >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)((((unsigned __int64)&anchor_point_data->rot.z + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)anchor_point_data + 27) & 7) >= *(_BYTE *)((((unsigned __int64)&anchor_point_data->rot.z
                                                                           + 3) >> 3)
                                                                         + 0x7FFF8000) )
        {
          Rotation = __asan_report_store_n(&anchor_point_data->rot, 12LL);
        }
        v22 = ((_DWORD)Rotation + 11) & 7;
        if ( (char)(Rotation & 7) >= *(_BYTE *)((Rotation >> 3) + 0x7FFF8000)
          && *(_BYTE *)((Rotation >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)(((Rotation + 11) >> 3) + 0x7FFF8000) != 0
          && (char)((Rotation + 11) & 7) >= *(_BYTE *)(((Rotation + 11) >> 3) + 0x7FFF8000) )
        {
          v22 = 12LL;
          Rotation = __asan_report_load_n(Rotation, 12LL);
        }
        *(_QWORD *)&anchor_point_data->rot.x = *(_QWORD *)Rotation;
        anchor_point_data->rot.z = *(float *)(Rotation + 8);
        v23 = std::__shared_ptr_access<data::ConfigWidgetToyAnchorPoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigWidgetToyAnchorPoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
        p_lasting_time = &v23->lasting_time;
        if ( *(_BYTE *)(((unsigned __int64)p_lasting_time >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_lasting_time & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_lasting_time >> 3)
                                                                           + 0x7FFF8000) )
        {
          __asan_report_load4(p_lasting_time);
        }
        v25 = v23->lasting_time + now;
        v26 = *(_BYTE *)(((unsigned __int64)&anchor_point_data->end_time >> 3) + 0x7FFF8000);
        LOBYTE(v22) = v26 != 0;
        v27 = v26 != 0 && (char)((((_BYTE)anchor_point_data + 28) & 7) + 3) >= v26;
        if ( v27 )
          __asan_report_store4(&anchor_point_data->end_time, v22, v27);
        anchor_point_data->end_time = v25;
        v28 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 128));
        SceneId = Scene::getSceneId(v28);
        v30 = *(_BYTE *)(((unsigned __int64)&anchor_point_data->scene_id >> 3) + 0x7FFF8000);
        if ( v30 != 0 && v30 <= 3 )
        {
          LOBYTE(v22) = v30 != 0;
          __asan_report_store4(&anchor_point_data->scene_id, v22, SceneId);
        }
        anchor_point_data->scene_id = SceneId;
        v31 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 128));
        PlayerWidgetComp::tryCreateAnchorPointGadgetAndEnterScene(this, anchor_point_data, v31);
        std::shared_ptr<Player>::shared_ptr(&v34, 0LL);
        PlayerWidgetComp::notifyAnchorPoints(this, &v34);
        std::shared_ptr<Player>::~shared_ptr(&v34);
        PlayerWidgetComp::refreshAllWidgets(this, 1);
        goto LABEL_47;
      }
      common::milog::MiLogStream::create(
        &v35,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/widget/player_widget_comp.cpp",
        "useAnchorPoint",
        607);
      v10 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
              &v35,
              (const char (*)[26])"subItem fail, item_param:");
      v11 = operator<<(v10, (const ItemParam *)(v1 + 192));
      v12 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v11, (const char (*)[6])" ret:");
      v13 = common::milog::MiLogStream::operator<<<int,(int *)0>(v12, (const int *)(v1 + 32));
      v7 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v13, (const char (*)[9])" player:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
    }
    operator<<(v7, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v35);
LABEL_47:
    std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v1 + 160));
LABEL_48:
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v1 + 128));
    goto LABEL_49;
  }
  common::milog::MiLogStream::create(
    &v35,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/player/widget/player_widget_comp.cpp",
    "useAnchorPoint",
    584);
  v5 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
         &v35,
         (const char (*)[31])"findWidgetConfig fail, player:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  operator<<(v5, this->player_);
  common::milog::MiLogStream::~MiLogStream(&v35);
LABEL_49:
  std::shared_ptr<data::ConfigWidgetToyAnchorPoint>::~shared_ptr((std::shared_ptr<data::ConfigWidgetToyAnchorPoint> *const)(v1 + 96));
  if ( v36 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8018) = -168430091;
  }
};

// Line 629: range 00000000143A413E-00000000143A4523
__int64 __fastcall PlayerWidgetComp::removeAnchorPoint(PlayerWidgetComp *const this, uint32_t anchor_point_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  PlayerSceneComp *SceneComp; // rax
  unsigned int v6; // r14d
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rcx
  std::_Rb_tree_iterator<std::pair<unsigned int const,WidgetAnchorPointData> >::pointer v10; // rax
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdx
  __int64 result; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,WidgetAnchorPointData> >::_Self __y; // [rsp+18h] [rbp-E8h] BYREF
  std::shared_ptr<Player> p_player_ptr; // [rsp+20h] [rbp-E0h] BYREF
  common::milog::MiLogStream v16; // [rsp+30h] [rbp-D0h] BYREF
  char v17[176]; // [rsp+50h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 19 anchor_point_id:628 64 8 8 iter:635 96 16 14 gadget_ptr:641";
  *(_QWORD *)(v2 + 16) = PlayerWidgetComp::removeAnchorPoint;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202178560;
  *(_DWORD *)(v2 + 48) = anchor_point_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  SceneComp = Player::getSceneComp(this->player_);
  if ( !PlayerSceneComp::isInMyPlayerWorld(SceneComp) )
  {
    v6 = 512;
  }
  else
  {
    *(std::map<unsigned int,WidgetAnchorPointData>::iterator *)(v2 + 64) = std::map<unsigned int,WidgetAnchorPointData>::find(
                                                                             &this->anchor_point_map_,
                                                                             (const std::map<unsigned int,WidgetAnchorPointData>::key_type *)(v2 + 48));
    __y._M_node = std::map<unsigned int,WidgetAnchorPointData>::end(&this->anchor_point_map_)._M_node;
    if ( std::operator==(
           (const std::_Rb_tree_iterator<std::pair<unsigned int const,WidgetAnchorPointData> >::_Self *)(v2 + 64),
           &__y) )
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/widget/player_widget_comp.cpp",
        "removeAnchorPoint",
        638);
      v7 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v16, (const char (*)[17])"anchor_point_id:");
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 48));
      v9 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
             v8,
             (const char (*)[20])" not found, player:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      operator<<(v9, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v16);
      v6 = 676;
    }
    else
    {
      v10 = std::_Rb_tree_iterator<std::pair<unsigned int const,WidgetAnchorPointData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,WidgetAnchorPointData> > *const)(v2 + 64));
      std::shared_ptr<Gadget>::shared_ptr((std::shared_ptr<Gadget> *const)(v2 + 96), &v10->second.gadget_ptr);
      if ( std::operator!=<Gadget>(0LL, (const std::shared_ptr<Gadget> *)(v2 + 96)) )
      {
        v11 = (unsigned __int64)std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
          v11 = __asan_report_load8(v11);
        v12 = *(_QWORD *)v11 + 128LL;
        if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
          v11 = __asan_report_load8(*(_QWORD *)v11 + 128LL);
        (*(void (__fastcall **)(unsigned __int64, VisionContext *))v12)(v11, &VisionContext::miss_context);
      }
      std::map<unsigned int,WidgetAnchorPointData>::erase(
        &this->anchor_point_map_,
        (const std::map<unsigned int,WidgetAnchorPointData>::key_type *)(v2 + 48));
      std::shared_ptr<Player>::shared_ptr(&p_player_ptr, 0LL);
      PlayerWidgetComp::notifyAnchorPoints(this, &p_player_ptr);
      std::shared_ptr<Player>::~shared_ptr(&p_player_ptr);
      PlayerWidgetComp::refreshAllWidgets(this, 1);
      v6 = 0;
      std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v2 + 96));
    }
  }
  result = v6;
  if ( v17 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 656: range 00000000143A4524-00000000143A4677
const WidgetAnchorPointData *__fastcall PlayerWidgetComp::findAnchorPoint(
        const PlayerWidgetComp *const this,
        uint32_t anchor_point_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const WidgetAnchorPointData *result; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,WidgetAnchorPointData> >::_Self __y; // [rsp+18h] [rbp-88h] BYREF
  char v7[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 19 anchor_point_id:655 64 8 8 iter:657";
  *(_QWORD *)(v2 + 16) = PlayerWidgetComp::findAnchorPoint;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = anchor_point_id;
  *(std::map<unsigned int,WidgetAnchorPointData>::const_iterator *)(v2 + 64) = std::map<unsigned int,WidgetAnchorPointData>::find(
                                                                                 &this->anchor_point_map_,
                                                                                 (const std::map<unsigned int,WidgetAnchorPointData>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,WidgetAnchorPointData>::end(&this->anchor_point_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,WidgetAnchorPointData> >::_Self *)(v2 + 64),
         &__y) )
  {
    result = 0LL;
  }
  else
  {
    result = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,WidgetAnchorPointData>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,WidgetAnchorPointData> > *const)(v2 + 64))->second;
  }
  if ( v7 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 667: range 00000000143A4678-00000000143A5194
__int64 __fastcall PlayerWidgetComp::transferToAnchorPoint(PlayerWidgetComp *const this, uint32_t anchor_point_id)
{
  unsigned int v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  PlayerHomeComp *HomeComp; // rax
  int v7; // r15d
  Player *v8; // rax
  PlayerWidgetComp *WidgetComp; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rcx
  Player *v13; // rax
  uint32_t SceneComp; // ecx
  common::milog::MiLogStream *v15; // rcx
  int v16; // r15d
  PlayerDungeonComp *DungeonComp; // r15
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  Avatar *v19; // rax
  PlayerSceneComp *v20; // r14
  Scene *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rcx
  PlayerEventComp *EventComp; // r14
  __int64 result; // rax
  uint32_t scene_id; // [rsp+10h] [rbp-1F0h]
  const WidgetAnchorPointData *anchor_point_data_ptr; // [rsp+28h] [rbp-1D8h]
  const Vector3 *pos; // [rsp+30h] [rbp-1D0h]
  const Vector3 *rot; // [rsp+38h] [rbp-1C8h]
  std::shared_ptr<Player> __r; // [rsp+40h] [rbp-1C0h] BYREF
  common::milog::MiLogStream v36; // [rsp+50h] [rbp-1B0h] BYREF
  TransferReason p_reason; // [rsp+70h] [rbp-190h] BYREF
  char v38[336]; // [rsp+B0h] [rbp-150h] BYREF

  v3 = (unsigned __int64)v38;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(288LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "7 32 4 7 ret:703 48 4 19 anchor_point_id:666 64 16 20 owner_player_ptr:668 96 16 20 target_scene"
                        "_ptr:692 128 16 21 dungeon_scene_ptr:700 160 16 13 world_ptr:675 192 56 10 reason:716";
  *(_QWORD *)(v3 + 16) = PlayerWidgetComp::transferToAnchorPoint;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -219021312;
  v5[536862723] = -219021312;
  v5[536862724] = -219021312;
  v5[536862725] = -219021312;
  v5[536862727] = -218103808;
  v5[536862728] = -202116109;
  *(_DWORD *)(v3 + 48) = anchor_point_id;
  *(_QWORD *)(v3 + 64) = 0LL;
  *(_QWORD *)(v3 + 72) = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  HomeComp = Player::getHomeComp(this->player_);
  if ( PlayerHomeComp::isInHomeWorld(HomeComp) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    toThisPtr<Player>((Player *)&__r);
    std::shared_ptr<Player>::operator=((std::shared_ptr<Player> *const)(v3 + 64), &__r);
    std::shared_ptr<Player>::~shared_ptr(&__r);
LABEL_16:
    if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v3 + 64)) )
    {
      v2 = -1;
    }
    else
    {
      v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      WidgetComp = Player::getWidgetComp(v8);
      anchor_point_data_ptr = PlayerWidgetComp::findAnchorPoint(WidgetComp, *(_DWORD *)(v3 + 48));
      if ( anchor_point_data_ptr )
      {
        v13 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        SceneComp = (unsigned int)Player::getSceneComp(v13);
        if ( *(_BYTE *)(((unsigned __int64)&anchor_point_data_ptr->scene_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&anchor_point_data_ptr->scene_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&anchor_point_data_ptr->scene_id);
        }
        PlayerSceneComp::findScene((const PlayerSceneComp *const)(v3 + 96), SceneComp);
        if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v3 + 96)) )
        {
          v2 = 561;
        }
        else
        {
          pos = &anchor_point_data_ptr->pos;
          rot = &anchor_point_data_ptr->rot;
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          Player::getSceneComp(this->player_);
          PlayerSceneComp::getCurScene<DungeonScene>((PlayerSceneComp *const)(v3 + 128));
          if ( !std::operator!=<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v3 + 128)) )
            goto LABEL_41;
          *(_DWORD *)(v3 + 32) = -1;
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          Player::getAvatarComp(this->player_);
          PlayerAvatarComp::getCurAvatar((const PlayerAvatarComp *const)(v3 + 160));
          if ( std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v3 + 160)) )
          {
            common::milog::MiLogStream::create(
              &v36,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/widget/player_widget_comp.cpp",
              "transferToAnchorPoint",
              707);
            v15 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                    &v36,
                    (const char (*)[27])"getCurAvatar fail, player:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            operator<<(v15, this->player_);
            common::milog::MiLogStream::~MiLogStream(&v36);
            v2 = *(_DWORD *)(v3 + 32);
            v16 = 0;
          }
          else
          {
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            DungeonComp = Player::getDungeonComp(this->player_);
            v18 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
            scene_id = Scene::getSceneId(v18);
            std::shared_ptr<DungeonScene>::shared_ptr(
              (std::shared_ptr<DungeonScene> *const)&__r,
              (const std::shared_ptr<DungeonScene> *)(v3 + 128));
            v19 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
            LOBYTE(DungeonComp) = PlayerDungeonComp::trySettleCurDungeonBeforeTransfer(
                                    DungeonComp,
                                    v19,
                                    (DungeonScenePtr *)&__r,
                                    scene_id,
                                    pos,
                                    rot,
                                    (int32_t *)(v3 + 32)) != 0;
            std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)&__r);
            if ( (_BYTE)DungeonComp )
            {
              v2 = *(_DWORD *)(v3 + 32);
              v16 = 0;
            }
            else
            {
              v16 = 1;
            }
          }
          std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v3 + 160));
          if ( v16 == 1 )
          {
LABEL_41:
            TransferReason::TransferReason((TransferReason *const)(v3 + 192));
            *(_DWORD *)(v3 + 192) = 60;
            *(_BYTE *)(v3 + 240) = 1;
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            v20 = Player::getSceneComp(this->player_);
            TransferReason::TransferReason(&p_reason, (const TransferReason *)(v3 + 192));
            v21 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
            LOBYTE(v20) = PlayerSceneComp::jumpToScene(v20, v21, pos, rot, 0, &p_reason) != 0;
            TransferReason::~TransferReason(&p_reason);
            if ( (_BYTE)v20 )
            {
              common::milog::MiLogStream::create(
                &v36,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/widget/player_widget_comp.cpp",
                "transferToAnchorPoint",
                721);
              v22 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                      &v36,
                      (const char (*)[24])"jumpToScene fails, pos:");
              v23 = operator<<(v22, pos);
              v24 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v23, (const char (*)[6])" rot:");
              v25 = operator<<(v24, rot);
              v26 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                      v25,
                      (const char (*)[18])" anchor_point_id:");
              v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v26,
                      (const unsigned int *)(v3 + 48));
              v28 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v27, (const char (*)[9])" player:");
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8(&this->player_);
              operator<<(v28, this->player_);
              common::milog::MiLogStream::~MiLogStream(&v36);
              v2 = -1;
            }
            else
            {
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8(&this->player_);
              EventComp = Player::getEventComp(this->player_);
              common::tools::perf::make_shared<ManualTransportEvent>();
              std::shared_ptr<BaseEvent>::shared_ptr<ManualTransportEvent,void>(
                (std::shared_ptr<BaseEvent> *const)&__r,
                (std::shared_ptr<ManualTransportEvent> *)(v3 + 160));
              PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&__r);
              std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&__r);
              std::shared_ptr<ManualTransportEvent>::~shared_ptr((std::shared_ptr<ManualTransportEvent> *const)(v3 + 160));
              v2 = 0;
            }
            TransferReason::~TransferReason((TransferReason *const)(v3 + 192));
          }
          std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v3 + 128));
        }
        std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 96));
      }
      else
      {
        common::milog::MiLogStream::create(
          &v36,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/widget/player_widget_comp.cpp",
          "transferToAnchorPoint",
          689);
        v10 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                &v36,
                (const char (*)[17])"anchor_point_id:");
        v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v10,
                (const unsigned int *)(v3 + 48));
        v12 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                v11,
                (const char (*)[20])" not found, player:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        operator<<(v12, this->player_);
        common::milog::MiLogStream::~MiLogStream(&v36);
        v2 = 676;
      }
    }
    goto LABEL_53;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurWorld<PlayerWorld>((const PlayerSceneComp *const)(v3 + 160));
  if ( std::operator==<PlayerWorld>(0LL, (const std::shared_ptr<PlayerWorld> *)(v3 + 160)) )
  {
    v2 = -1;
    v7 = 0;
  }
  else
  {
    std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
    PlayerWorld::getOwnPlayer((const PlayerWorld *const)&__r);
    std::shared_ptr<Player>::operator=((std::shared_ptr<Player> *const)(v3 + 64), &__r);
    std::shared_ptr<Player>::~shared_ptr(&__r);
    v7 = 1;
  }
  std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v3 + 160));
  if ( v7 == 1 )
    goto LABEL_16;
LABEL_53:
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 64));
  result = v2;
  if ( v38 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF801C) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8020) = -168430091;
  }
  return result;
};

// Line 730: range 00000000143A5234-00000000143A5861
void __cdecl PlayerWidgetComp::notifyAnchorPoints(const PlayerWidgetComp *const this, PlayerPtr *p_player_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  Vector3 *p_pos; // r14
  proto::Vector *v6; // rax
  common::milog::MiLogStream *v7; // rcx
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // r14
  Player *v10; // rax
  PlayerWidgetComp *WidgetComp; // rax
  uint32_t AnchorPointNextUsableTime; // eax
  Player *v13; // rax
  std::map<unsigned int,WidgetAnchorPointData>::const_iterator __for_begin; // [rsp+18h] [rbp-128h] BYREF
  std::map<unsigned int,WidgetAnchorPointData>::const_iterator __for_end; // [rsp+20h] [rbp-120h] BYREF
  const std::map<unsigned int,WidgetAnchorPointData> *__for_range; // [rsp+28h] [rbp-118h]
  const std::pair<unsigned int const,WidgetAnchorPointData> *v17; // [rsp+30h] [rbp-110h]
  std::tuple_element<0,const std::pair<unsigned int const,WidgetAnchorPointData> >::type *_; // [rsp+38h] [rbp-108h]
  std::tuple_element<1,const std::pair<unsigned int const,WidgetAnchorPointData> >::type *data; // [rsp+40h] [rbp-100h]
  proto::AnchorPointData *proto; // [rsp+48h] [rbp-F8h]
  common::milog::MiLogStream v21; // [rsp+50h] [rbp-F0h] BYREF
  char v22[208]; // [rsp+70h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 16 13 world_ptr:742 80 48 10 notify:731";
  *(_QWORD *)(v2 + 16) = PlayerWidgetComp::notifyAnchorPoints;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = 62194;
  v4[536862724] = -202116109;
  proto::AnchorPointDataNotify::AnchorPointDataNotify((proto::AnchorPointDataNotify *const)(v2 + 80));
  __for_range = &this->anchor_point_map_;
  __for_begin._M_node = std::map<unsigned int,WidgetAnchorPointData>::begin(&this->anchor_point_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,WidgetAnchorPointData>::end(&this->anchor_point_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v17 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,WidgetAnchorPointData>>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,WidgetAnchorPointData>(v17);
    data = (std::tuple_element<1,const std::pair<unsigned int const,WidgetAnchorPointData> >::type *)std::get<1ul,unsigned int const,WidgetAnchorPointData>(v17);
    proto = proto::AnchorPointDataNotify::add_anchor_point_list((proto::AnchorPointDataNotify *const)(v2 + 80));
    if ( *(_BYTE *)(((unsigned __int64)data >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)data >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(data);
    }
    proto::AnchorPointData::set_anchor_point_id(proto, data->id);
    p_pos = &data->pos;
    v6 = proto::AnchorPointData::mutable_pos(proto);
    Vector3::toClient(p_pos, v6);
    if ( *(_BYTE *)(((unsigned __int64)&data->end_time >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)data + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&data->end_time >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&data->end_time);
    }
    proto::AnchorPointData::set_end_time(proto, data->end_time);
    if ( *(_BYTE *)(((unsigned __int64)&data->scene_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&data->scene_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&data->scene_id);
    }
    proto::AnchorPointData::set_scene_id(proto, data->scene_id);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,WidgetAnchorPointData>>::operator++(&__for_begin);
  }
  if ( std::operator==<Player>(0LL, p_player_ptr) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getMyPlayerWorld((const PlayerSceneComp *const)(v2 + 48));
    if ( std::operator==<PlayerWorld>(0LL, (const std::shared_ptr<PlayerWorld> *)(v2 + 48)) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/widget/player_widget_comp.cpp",
        "notifyAnchorPoints",
        745);
      v7 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
             &v21,
             (const char (*)[31])"getMyPlayerWorld fail, player:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
    }
    else
    {
      v8 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
      if ( World::getPlayerCount(v8) )
      {
        v9 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
        std::function<ForeachPolicy ()(Player &)>::function<PlayerWidgetComp::notifyAnchorPoints(std::shared_ptr<Player>)::{lambda(Player &)#1},void,void>(
          (std::function<ForeachPolicy(Player&)> *const)&v21,
          (PlayerWidgetComp::notifyAnchorPoints::<lambda(Player&)>)(v2 + 80));
        World::foreachPlayer(v9, (std::function<ForeachPolicy(Player&)> *)&v21);
        std::function<ForeachPolicy ()(Player &)>::~function((std::function<ForeachPolicy(Player&)> *const)&v21);
        goto LABEL_25;
      }
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/widget/player_widget_comp.cpp",
        "notifyAnchorPoints",
        750);
      v7 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
             &v21,
             (const char (*)[24])"world is empty, player:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
    }
    operator<<(v7, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v21);
LABEL_25:
    std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v2 + 48));
    goto LABEL_27;
  }
  v10 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_ptr);
  WidgetComp = Player::getWidgetComp(v10);
  AnchorPointNextUsableTime = PlayerWidgetComp::getAnchorPointNextUsableTime(WidgetComp);
  proto::AnchorPointDataNotify::set_next_usable_time(
    (proto::AnchorPointDataNotify *const)(v2 + 80),
    AnchorPointNextUsableTime);
  v13 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_ptr);
  Player::sendProto(v13, (const google::protobuf::Message *)(v2 + 80));
LABEL_27:
  proto::AnchorPointDataNotify::~AnchorPointDataNotify((proto::AnchorPointDataNotify *const)(v2 + 80));
  if ( v22 == (char *)v2 )
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

// Line 753: range 00000000143A5196-00000000143A5232
ForeachPolicy __cdecl PlayerWidgetComp::notifyAnchorPoints(std::shared_ptr<Player>)const::{lambda(Player&)#1}::operator()(
        const PlayerWidgetComp::notifyAnchorPoints::<lambda(Player&)> *const __closure,
        Player *player)
{
  proto::AnchorPointDataNotify *notify; // rbx
  PlayerWidgetComp *WidgetComp; // rax
  uint32_t AnchorPointNextUsableTime; // eax

  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  notify = __closure->__notify;
  WidgetComp = Player::getWidgetComp(player);
  AnchorPointNextUsableTime = PlayerWidgetComp::getAnchorPointNextUsableTime(WidgetComp);
  proto::AnchorPointDataNotify::set_next_usable_time(notify, AnchorPointNextUsableTime);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  Player::sendProto(player, __closure->__notify);
  return 0;
};

// Line 769: range 00000000143A5862-00000000143A5B77
uint32_t __cdecl PlayerWidgetComp::getAnchorPointNextUsableTime(const PlayerWidgetComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  uint32_t v4; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rcx
  uint32_t last_use_anchor_point_time; // r14d
  std::__shared_ptr_access<data::ConfigWidgetToyAnchorPoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  uint32_t result; // eax
  std::shared_ptr<Config> v10; // [rsp+10h] [rbp-A0h] BYREF
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-90h] BYREF
  char v12[112]; // [rsp+40h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 14 config_ptr:774";
  *(_QWORD *)(v1 + 16) = PlayerWidgetComp::getAnchorPointNextUsableTime;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_use_anchor_point_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_use_anchor_point_time_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->last_use_anchor_point_time_);
  }
  if ( this->last_use_anchor_point_time_ )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v10);
    v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v10);
    JsonConfigMgr::getWidgetNewConfig(&v5->design_config.json_config_mgr);
    WidgetJsonNewConfig::findWidgetConfig<data::ConfigWidgetToyAnchorPoint>((const WidgetJsonNewConfig *const)(v1 + 32));
    std::shared_ptr<Config>::~shared_ptr(&v10);
    if ( std::operator==<data::ConfigWidgetToyAnchorPoint>(
           0LL,
           (const std::shared_ptr<data::ConfigWidgetToyAnchorPoint> *)(v1 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/widget/player_widget_comp.cpp",
        "getAnchorPointNextUsableTime",
        777);
      v6 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
             &v11,
             (const char (*)[31])"findWidgetConfig fail, player:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      operator<<(v6, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v11);
      v4 = 0;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->last_use_anchor_point_time_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_use_anchor_point_time_ >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_load4(&this->last_use_anchor_point_time_);
      }
      last_use_anchor_point_time = this->last_use_anchor_point_time_;
      v8 = std::__shared_ptr_access<data::ConfigWidgetToyAnchorPoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigWidgetToyAnchorPoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      if ( *(_BYTE *)(((unsigned __int64)&v8->cool_down >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v8->cool_down >> 3) + 0x7FFF8000) <= 3 )
      {
        v8 = (std::__shared_ptr_access<data::ConfigWidgetToyAnchorPoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v8->cool_down);
      }
      v4 = v8->cool_down + last_use_anchor_point_time;
    }
    std::shared_ptr<data::ConfigWidgetToyAnchorPoint>::~shared_ptr((std::shared_ptr<data::ConfigWidgetToyAnchorPoint> *const)(v1 + 32));
  }
  else
  {
    v4 = 0;
  }
  result = v4;
  if ( v12 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 785: range 00000000143A5B78-00000000143A5EFA
uint32_t __cdecl PlayerWidgetComp::refreshAnchorPoints(PlayerWidgetComp *const this, uint32_t now, bool is_notify)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::_Rb_tree_iterator<std::pair<unsigned int const,WidgetAnchorPointData> >::pointer v6; // rdx
  uint32_t *p_end_time; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,WidgetAnchorPointData> >::pointer v8; // rax
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdx
  std::_Rb_tree_iterator<std::pair<unsigned int const,WidgetAnchorPointData> >::pointer v11; // rax
  const unsigned int *v12; // rax
  _DWORD *v13; // rdx
  uint32_t result; // eax
  bool is_has_change; // [rsp+17h] [rbp-A9h]
  std::_Rb_tree_iterator<std::pair<unsigned int const,WidgetAnchorPointData> >::_Self __y; // [rsp+18h] [rbp-A8h] BYREF
  char v18[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 21 next_refresh_time:787 64 8 8 iter:788 96 16 14 gadget_ptr:792";
  *(_QWORD *)(v3 + 16) = PlayerWidgetComp::refreshAnchorPoints;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202178560;
  is_has_change = 0;
  *(_DWORD *)(v3 + 48) = -1;
  *(std::map<unsigned int,WidgetAnchorPointData>::iterator *)(v3 + 64) = std::map<unsigned int,WidgetAnchorPointData>::begin(&this->anchor_point_map_);
  while ( 1 )
  {
    __y._M_node = std::map<unsigned int,WidgetAnchorPointData>::end(&this->anchor_point_map_)._M_node;
    if ( !std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,WidgetAnchorPointData> >::_Self *)(v3 + 64),
            &__y) )
      break;
    v6 = std::_Rb_tree_iterator<std::pair<unsigned int const,WidgetAnchorPointData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,WidgetAnchorPointData> > *const)(v3 + 64));
    p_end_time = &v6->second.end_time;
    if ( *(_BYTE *)(((unsigned __int64)p_end_time >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_end_time & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_end_time >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_end_time);
    }
    if ( now < v6->second.end_time )
    {
      v11 = std::_Rb_tree_iterator<std::pair<unsigned int const,WidgetAnchorPointData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,WidgetAnchorPointData> > *const)(v3 + 64));
      v12 = std::min<unsigned int>((const unsigned int *)(v3 + 48), &v11->second.end_time);
      v13 = v12;
      if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v12);
      }
      *(_DWORD *)(v3 + 48) = *v13;
      std::_Rb_tree_iterator<std::pair<unsigned int const,WidgetAnchorPointData>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,WidgetAnchorPointData> > *const)(v3 + 64));
    }
    else
    {
      v8 = std::_Rb_tree_iterator<std::pair<unsigned int const,WidgetAnchorPointData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,WidgetAnchorPointData> > *const)(v3 + 64));
      std::shared_ptr<Gadget>::shared_ptr((std::shared_ptr<Gadget> *const)(v3 + 96), &v8->second.gadget_ptr);
      if ( std::operator!=<Gadget>(0LL, (const std::shared_ptr<Gadget> *)(v3 + 96)) )
      {
        v9 = (unsigned __int64)std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
          v9 = __asan_report_load8(v9);
        v10 = *(_QWORD *)v9 + 128LL;
        if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
          v9 = __asan_report_load8(*(_QWORD *)v9 + 128LL);
        (*(void (__fastcall **)(unsigned __int64, VisionContext *))v10)(v9, &VisionContext::miss_context);
      }
      *(std::map<unsigned int,WidgetAnchorPointData>::iterator *)(v3 + 64) = std::map<unsigned int,WidgetAnchorPointData>::erase[abi:cxx11](
                                                                               &this->anchor_point_map_,
                                                                               *(std::map<unsigned int,WidgetAnchorPointData>::iterator *)(v3 + 64));
      is_has_change = 1;
      std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v3 + 96));
    }
  }
  if ( is_has_change && is_notify )
  {
    std::shared_ptr<Player>::shared_ptr((std::shared_ptr<Player> *const)(v3 + 96), 0LL);
    PlayerWidgetComp::notifyAnchorPoints(this, (PlayerPtr *)(v3 + 96));
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 96));
  }
  result = *(_DWORD *)(v3 + 48);
  if ( v18 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 815: range 00000000143A5EFC-00000000143A6465
void __cdecl PlayerWidgetComp::tryCreateAnchorPointGadgetAndEnterScene(
        PlayerWidgetComp *const this,
        WidgetAnchorPointData *anchor_point_data,
        Scene *scene)
{
  unsigned __int64 p_y; // r13
  __int64 v4; // rax
  _DWORD *v5; // rbx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::__shared_ptr_access<data::ConfigWidgetToyAnchorPoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rdx
  uint32_t *p_gadget_id; // rax
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdx
  GadgetParam v14; // [rsp+20h] [rbp-440h] BYREF

  p_y = (unsigned __int64)&v14.pos.y;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(1024LL);
    if ( v4 )
      p_y = v4;
  }
  *(_QWORD *)p_y = 1102416563LL;
  *(_QWORD *)(p_y + 8) = "2 48 16 27 anchor_point_config_ptr:816 80 816 16 gadget_param:824";
  *(_QWORD *)(p_y + 16) = PlayerWidgetComp::tryCreateAnchorPointGadgetAndEnterScene;
  v5 = (_DWORD *)(p_y >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862722] = 62194;
  v5[536862748] = -202116109;
  v5[536862749] = -202116109;
  v5[536862750] = -202116109;
  v5[536862751] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v14);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v14);
  JsonConfigMgr::getWidgetNewConfig(&v6->design_config.json_config_mgr);
  WidgetJsonNewConfig::findWidgetConfig<data::ConfigWidgetToyAnchorPoint>((const WidgetJsonNewConfig *const)(p_y + 48));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v14);
  if ( !std::operator==<data::ConfigWidgetToyAnchorPoint>(
          0LL,
          (const std::shared_ptr<data::ConfigWidgetToyAnchorPoint> *)(p_y + 48)) )
  {
    if ( std::operator==<Gadget>(0LL, &anchor_point_data->gadget_ptr) )
    {
      GadgetParam::GadgetParam((GadgetParam *const)(p_y + 80));
      v7 = std::__shared_ptr_access<data::ConfigWidgetToyAnchorPoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigWidgetToyAnchorPoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_y + 48));
      p_gadget_id = &v7->gadget_id;
      if ( *(_BYTE *)(((unsigned __int64)p_gadget_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_gadget_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_gadget_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(p_gadget_id);
      }
      *(_DWORD *)(p_y + 80) = v7->gadget_id;
      *(_DWORD *)(p_y + 88) = Scene::genNewEntityId(scene, PROT_ENTITY_GADGET);
      if ( (((unsigned __int8)anchor_point_data + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&anchor_point_data->pos >> 3)
                                                                      + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)&anchor_point_data->pos >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&anchor_point_data->pos.z + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)anchor_point_data + 15) & 7) >= *(_BYTE *)((((unsigned __int64)&anchor_point_data->pos.z
                                                                         + 3) >> 3)
                                                                       + 0x7FFF8000) )
      {
        __asan_report_load_n(&anchor_point_data->pos, 12LL);
      }
      *(Vector3 *)(p_y + 92) = anchor_point_data->pos;
      if ( *(char *)(((unsigned __int64)&anchor_point_data->rot >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)((((unsigned __int64)&anchor_point_data->rot.z + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)anchor_point_data + 27) & 7) >= *(_BYTE *)((((unsigned __int64)&anchor_point_data->rot.z
                                                                         + 3) >> 3)
                                                                       + 0x7FFF8000) )
      {
        __asan_report_load_n(&anchor_point_data->rot, 12LL);
      }
      *(Vector3 *)(p_y + 104) = anchor_point_data->rot;
      *(_DWORD *)(p_y + 172) = 0;
      EntityMgr::createGadget(&v14);
      std::shared_ptr<Gadget>::operator=(&anchor_point_data->gadget_ptr, (std::shared_ptr<Gadget> *)&v14);
      std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)&v14);
      GadgetParam::~GadgetParam((GadgetParam *const)(p_y + 80));
    }
    if ( std::operator!=<Gadget>(0LL, &anchor_point_data->gadget_ptr) )
    {
      v9 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)&anchor_point_data->gadget_ptr);
      if ( !Entity::isOnScene((const Entity *const)v9) )
      {
        v11 = (unsigned __int64)std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)&anchor_point_data->gadget_ptr);
        if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
          v11 = __asan_report_load8(v11);
        v12 = *(_QWORD *)v11 + 56LL;
        if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
          v11 = __asan_report_load8(*(_QWORD *)v11 + 56LL);
        (*(void (__fastcall **)(unsigned __int64, Scene *, VisionContext *))v12)(
          v11,
          scene,
          &VisionContext::meet_context);
      }
    }
  }
  std::shared_ptr<data::ConfigWidgetToyAnchorPoint>::~shared_ptr((std::shared_ptr<data::ConfigWidgetToyAnchorPoint> *const)(p_y + 48));
  if ( (GadgetParam *)&v14.pos.y == (GadgetParam *)p_y )
  {
    *(_QWORD *)((p_y >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((p_y >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((p_y >> 3) + 0x7FFF8070) = 0LL;
    *(_QWORD *)((p_y >> 3) + 0x7FFF8078) = 0LL;
  }
  else
  {
    *(_QWORD *)p_y = 1172321806LL;
    *(_QWORD *)((p_y >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_y >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_y >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_y >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_y >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_y >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_y >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_y >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_y >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_y >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_y >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_y >> 3) + 0x7FFF8058) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_y >> 3) + 0x7FFF8060) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_y >> 3) + 0x7FFF8068) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_y >> 3) + 0x7FFF8070) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_y >> 3) + 0x7FFF8078) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 840: range 00000000143A6466-00000000143A668C
int32_t __cdecl PlayerWidgetComp::clearAnchorPointsByGm(PlayerWidgetComp *const this)
{
  PlayerSceneComp *SceneComp; // rax
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rdx
  bool v5; // dl
  std::map<unsigned int,WidgetAnchorPointData>::iterator __for_begin; // [rsp+10h] [rbp-50h] BYREF
  std::map<unsigned int,WidgetAnchorPointData>::iterator __for_end; // [rsp+18h] [rbp-48h] BYREF
  std::map<unsigned int,WidgetAnchorPointData> *__for_range; // [rsp+20h] [rbp-40h]
  std::pair<unsigned int const,WidgetAnchorPointData> *__in; // [rsp+28h] [rbp-38h]
  std::tuple_element<0,std::pair<unsigned int const,WidgetAnchorPointData> >::type *_; // [rsp+30h] [rbp-30h]
  std::tuple_element<1,std::pair<unsigned int const,WidgetAnchorPointData> >::type *anchor_point_data; // [rsp+38h] [rbp-28h]
  std::shared_ptr<Player> p_player_ptr; // [rsp+40h] [rbp-20h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  SceneComp = Player::getSceneComp(this->player_);
  if ( !PlayerSceneComp::isInMyPlayerWorld(SceneComp) )
    return 512;
  __for_range = &this->anchor_point_map_;
  __for_begin._M_node = std::map<unsigned int,WidgetAnchorPointData>::begin(&this->anchor_point_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,WidgetAnchorPointData>::end(&this->anchor_point_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<unsigned int const,WidgetAnchorPointData>>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,WidgetAnchorPointData>(__in);
    anchor_point_data = std::get<1ul,unsigned int const,WidgetAnchorPointData>(__in);
    if ( std::operator!=<Gadget>(0LL, &anchor_point_data->gadget_ptr) )
    {
      v3 = (unsigned __int64)std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)&anchor_point_data->gadget_ptr);
      if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
        v3 = __asan_report_load8(v3);
      v4 = *(_QWORD *)v3 + 128LL;
      if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
        v3 = __asan_report_load8(*(_QWORD *)v3 + 128LL);
      (*(void (__fastcall **)(unsigned __int64, VisionContext *))v4)(v3, &VisionContext::miss_context);
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,WidgetAnchorPointData>>::operator++(&__for_begin);
  }
  std::map<unsigned int,WidgetAnchorPointData>::clear(&this->anchor_point_map_);
  v5 = *(_BYTE *)(((unsigned __int64)&this->last_use_anchor_point_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_use_anchor_point_time_ >> 3)
                                                        + 0x7FFF8000);
  if ( v5 )
    __asan_report_store4(&this->last_use_anchor_point_time_, (((_BYTE)this + 52) & 7u) + 3, v5);
  this->last_use_anchor_point_time_ = 0;
  std::shared_ptr<Player>::shared_ptr(&p_player_ptr, 0LL);
  PlayerWidgetComp::notifyAnchorPoints(this, &p_player_ptr);
  std::shared_ptr<Player>::~shared_ptr(&p_player_ptr);
  PlayerWidgetComp::refreshAllWidgets(this, 1);
  return 0;
};

// Line 862: range 00000000143A668E-00000000143A6D0E
__int64 __fastcall PlayerWidgetComp::checkBonfireWidgetCount(PlayerWidgetComp *const this, uint32_t uid)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rcx
  unsigned int v7; // r14d
  std::multimap<unsigned int,WidgetBonfireData>::size_type v8; // r14
  std::__shared_ptr_access<data::ConfigWidgetToyBonfire,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // r14
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  std::__shared_ptr_access<data::ConfigWidgetToyBonfire,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rcx
  std::__shared_ptr_access<data::ConfigWidgetToyBonfire,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rdx
  uint32_t *p_max_count_by_player; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // r14
  std::__shared_ptr_access<data::ConfigWidgetToyBonfire,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rcx
  __int64 result; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,WidgetBonfireData> >::_Self __y; // [rsp+18h] [rbp-F8h] BYREF
  common::milog::MiLogStream v26; // [rsp+20h] [rbp-F0h] BYREF
  char v27[208]; // [rsp+40h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 4 24 player_bonfire_count:888 48 4 7 uid:861 64 8 8 iter:870 96 16 22 bonfire_config_ptr:86"
                        "3 128 16 14 gadget_ptr:872";
  *(_QWORD *)(v2 + 16) = PlayerWidgetComp::checkBonfireWidgetCount;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -219021312;
  v4[536862724] = -202178560;
  *(_DWORD *)(v2 + 48) = uid;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v2 + 128));
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
  JsonConfigMgr::getWidgetNewConfig(&v5->design_config.json_config_mgr);
  WidgetJsonNewConfig::findWidgetConfig<data::ConfigWidgetToyBonfire>((const WidgetJsonNewConfig *const)(v2 + 96));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 128));
  if ( std::operator==<data::ConfigWidgetToyBonfire>(
         0LL,
         (const std::shared_ptr<data::ConfigWidgetToyBonfire> *)(v2 + 96)) )
  {
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/widget/player_widget_comp.cpp",
      "checkBonfireWidgetCount",
      866);
    v6 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
           &v26,
           (const char (*)[31])"findWidgetConfig fail, player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    operator<<(v6, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v26);
    v7 = 5;
  }
  else
  {
    *(std::multimap<unsigned int,WidgetBonfireData>::iterator *)(v2 + 64) = std::multimap<unsigned int,WidgetBonfireData>::begin(&this->bonfire_map_);
    while ( 1 )
    {
      __y._M_node = std::multimap<unsigned int,WidgetBonfireData>::end(&this->bonfire_map_)._M_node;
      if ( !std::operator!=(
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,WidgetBonfireData> >::_Self *)(v2 + 64),
              &__y) )
        break;
      std::_Rb_tree_iterator<std::pair<unsigned int const,WidgetBonfireData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,WidgetBonfireData> > *const)(v2 + 64));
      std::weak_ptr<Gadget>::lock((const std::weak_ptr<Gadget> *const)(v2 + 128));
      if ( std::operator==<Gadget>(0LL, (const std::shared_ptr<Gadget> *)(v2 + 128)) )
        *(std::multimap<unsigned int,WidgetBonfireData>::iterator *)(v2 + 64) = std::multimap<unsigned int,WidgetBonfireData>::erase[abi:cxx11](
                                                                                  &this->bonfire_map_,
                                                                                  *(std::multimap<unsigned int,WidgetBonfireData>::iterator *)(v2 + 64));
      else
        std::_Rb_tree_iterator<std::pair<unsigned int const,WidgetBonfireData>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,WidgetBonfireData> > *const)(v2 + 64));
      std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v2 + 128));
    }
    v8 = std::multimap<unsigned int,WidgetBonfireData>::size(&this->bonfire_map_);
    v9 = std::__shared_ptr_access<data::ConfigWidgetToyBonfire,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigWidgetToyBonfire,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    if ( *(_BYTE *)(((unsigned __int64)&v9->max_count_in_scene >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v9->max_count_in_scene >> 3) + 0x7FFF8000) <= 3 )
    {
      v9 = (std::__shared_ptr_access<data::ConfigWidgetToyBonfire,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v9->max_count_in_scene);
    }
    if ( v8 < v9->max_count_in_scene )
    {
      *(_DWORD *)(v2 + 32) = std::multimap<unsigned int,WidgetBonfireData>::count(
                               &this->bonfire_map_,
                               (const std::multimap<unsigned int,WidgetBonfireData>::key_type *)(v2 + 48));
      v16 = std::__shared_ptr_access<data::ConfigWidgetToyBonfire,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigWidgetToyBonfire,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      p_max_count_by_player = &v16->max_count_by_player;
      if ( *(_BYTE *)(((unsigned __int64)p_max_count_by_player >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_max_count_by_player & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_max_count_by_player >> 3)
                                                                                + 0x7FFF8000) )
      {
        __asan_report_load4(p_max_count_by_player);
      }
      if ( v16->max_count_by_player > *(_DWORD *)(v2 + 32) )
      {
        v7 = 0;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v26,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/widget/player_widget_comp.cpp",
          "checkBonfireWidgetCount",
          891);
        v18 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                &v26,
                (const char (*)[22])"player_bonfire_count:");
        v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v18,
                (const unsigned int *)(v2 + 32));
        v20 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                v19,
                (const char (*)[19])" exceed max count:");
        v21 = std::__shared_ptr_access<data::ConfigWidgetToyBonfire,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigWidgetToyBonfire,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &v21->max_count_by_player);
        v23 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v22, (const char (*)[9])" player:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        operator<<(v23, this->player_);
        common::milog::MiLogStream::~MiLogStream(&v26);
        v7 = 678;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v26,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/widget/player_widget_comp.cpp",
        "checkBonfireWidgetCount",
        884);
      v10 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v26, (const char (*)[15])"bonfire_count:");
      __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,WidgetBonfireData> >::_Base_ptr)std::multimap<unsigned int,WidgetBonfireData>::size(&this->bonfire_map_);
      v11 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
              v10,
              (const unsigned __int64 *)&__y);
      v12 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
              v11,
              (const char (*)[19])" exceed max count:");
      v13 = std::__shared_ptr_access<data::ConfigWidgetToyBonfire,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigWidgetToyBonfire,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &v13->max_count_in_scene);
      v15 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v14, (const char (*)[9])" player:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      operator<<(v15, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v26);
      v7 = 677;
    }
  }
  std::shared_ptr<data::ConfigWidgetToyBonfire>::~shared_ptr((std::shared_ptr<data::ConfigWidgetToyBonfire> *const)(v2 + 96));
  result = v7;
  if ( v27 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 899: range 00000000143A6D10-00000000143A7B1D
int32_t __cdecl PlayerWidgetComp::checkUseBonfireWidget(PlayerWidgetComp *const this, const Vector3 *pos)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rcx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rcx
  common::milog::MiLogStream *v9; // rcx
  common::milog::MiLogStream *v10; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  Player *v12; // rax
  PlayerWidgetComp *WidgetComp; // r15
  uint32_t Uid; // eax
  common::milog::MiLogStream *v15; // rcx
  std::__shared_ptr_access<data::ConfigWidgetToyBonfire,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  PlayerItemComp *ItemComp; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  std::__shared_ptr_access<data::ConfigWidgetToyBonfire,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  const Vector3 *Position; // rdx
  common::milog::MiLogStream *v25; // rdx
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // r14
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  const Vector3 *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rcx
  Scene *v32; // r15
  std::__shared_ptr_access<data::ConfigWidgetToyBonfire,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v33; // rdx
  float *p_combat_destroy_distance; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v35; // rax
  Vector3 *n; // rax
  const std::shared_ptr<Player> *v37; // rax
  common::milog::MiLogStream *v38; // r15
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v39; // rax
  Player *v40; // rax
  PlayerAvatarComp *AvatarComp; // rax
  const std::string *v42; // rax
  int v44; // r15d
  int32_t result; // eax
  float sight_range; // [rsp+Ch] [rbp-1C4h]
  std::vector<std::shared_ptr<Player>>::iterator __for_begin; // [rsp+28h] [rbp-1A8h] BYREF
  std::vector<std::shared_ptr<Player>>::iterator __for_end; // [rsp+30h] [rbp-1A0h] BYREF
  std::vector<std::shared_ptr<Player>> *__for_range; // [rsp+38h] [rbp-198h]
  common::milog::MiLogStream v50; // [rsp+40h] [rbp-190h] BYREF
  char v51[368]; // [rsp+60h] [rbp-170h] BYREF

  v3 = (unsigned __int64)v51;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(320LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "8 48 4 7 ret:925 64 16 14 avatar_ptr:900 96 16 22 bonfire_config_ptr:906 128 16 13 scene_ptr:912"
                        " 160 16 20 owner_player_ptr:918 192 16 14 item_param:932 224 16 14 player_ptr:956 256 24 23 surr"
                        "ound_player_vec:955";
  *(_QWORD *)(v3 + 16) = PlayerWidgetComp::checkUseBonfireWidget;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -219021312;
  v5[536862723] = -219021312;
  v5[536862724] = -219021312;
  v5[536862725] = -219021312;
  v5[536862726] = -219021312;
  v5[536862727] = -219021312;
  v5[536862728] = -218103808;
  v5[536862729] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Player::getAvatarComp(this->player_);
  PlayerAvatarComp::getCurAvatar((const PlayerAvatarComp *const)(v3 + 64));
  if ( !std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v3 + 64)) )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v3 + 224));
    v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 224));
    JsonConfigMgr::getWidgetNewConfig(&v7->design_config.json_config_mgr);
    WidgetJsonNewConfig::findWidgetConfig<data::ConfigWidgetToyBonfire>((const WidgetJsonNewConfig *const)(v3 + 96));
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 224));
    if ( std::operator==<data::ConfigWidgetToyBonfire>(
           0LL,
           (const std::shared_ptr<data::ConfigWidgetToyBonfire> *)(v3 + 96)) )
    {
      common::milog::MiLogStream::create(
        &v50,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/widget/player_widget_comp.cpp",
        "checkUseBonfireWidget",
        909);
      v8 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
             &v50,
             (const char (*)[31])"findWidgetConfig fail, player:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      operator<<(v8, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v50);
      v2 = 5;
      goto LABEL_65;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v3 + 128));
    if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v3 + 128)) )
    {
      common::milog::MiLogStream::create(
        &v50,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/widget/player_widget_comp.cpp",
        "checkUseBonfireWidget",
        915);
      v9 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
             &v50,
             (const char (*)[23])"getScene fail, player:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      operator<<(v9, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v50);
      v2 = -1;
      goto LABEL_64;
    }
    std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
    Scene::getOwnPlayer((const Scene *const)(v3 + 160));
    if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v3 + 160)) )
    {
      common::milog::MiLogStream::create(
        &v50,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/widget/player_widget_comp.cpp",
        "checkUseBonfireWidget",
        921);
      v10 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
              &v50,
              (const char (*)[26])"getOwnPlayer fail, scene:");
      v11 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
      common::milog::MiLogStream::operator<<<Scene,(Scene*)0>(v10, v11);
      common::milog::MiLogStream::~MiLogStream(&v50);
      v2 = -1;
    }
    else
    {
      v12 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
      WidgetComp = Player::getWidgetComp(v12);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      Uid = Player::getUid(this->player_);
      *(_DWORD *)(v3 + 48) = PlayerWidgetComp::checkBonfireWidgetCount(WidgetComp, Uid);
      if ( *(_DWORD *)(v3 + 48) )
      {
        common::milog::MiLogStream::create(
          &v50,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/widget/player_widget_comp.cpp",
          "checkUseBonfireWidget",
          928);
        v15 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                &v50,
                (const char (*)[38])"checkBonfireWidgetCount fail, player:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
      }
      else
      {
        *(_DWORD *)(v3 + 192) = 0;
        *(_DWORD *)(v3 + 196) = 0;
        *(_DWORD *)(v3 + 200) = 0;
        *(_DWORD *)(v3 + 204) = 0;
        v16 = std::__shared_ptr_access<data::ConfigWidgetToyBonfire,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigWidgetToyBonfire,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        if ( *(_BYTE *)(((unsigned __int64)&v16->material_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v16->material_id >> 3) + 0x7FFF8000) <= 3 )
        {
          v16 = (std::__shared_ptr_access<data::ConfigWidgetToyBonfire,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v16->material_id);
        }
        *(_DWORD *)(v3 + 192) = v16->material_id;
        *(_DWORD *)(v3 + 196) = 1;
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        ItemComp = Player::getItemComp(this->player_);
        *(_DWORD *)(v3 + 48) = PlayerItemComp::checkSubItem(ItemComp, (const ItemParam *)(v3 + 192));
        if ( !*(_DWORD *)(v3 + 48) )
        {
          v22 = std::__shared_ptr_access<data::ConfigWidgetToyBonfire,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigWidgetToyBonfire,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
          if ( *(_BYTE *)(((unsigned __int64)&v22->cd_group >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&v22->cd_group >> 3) + 0x7FFF8000) <= 3 )
          {
            v22 = (std::__shared_ptr_access<data::ConfigWidgetToyBonfire,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v22->cd_group);
          }
          if ( PlayerWidgetComp::checkWidgetGroupCoolDown(this, v22->cd_group) )
          {
            v2 = 608;
          }
          else
          {
            v23 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
            Position = Entity::getPosition((const Entity *const)v23);
            if ( getDistance(pos, Position) <= 20.0 )
            {
              v32 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
              v33 = std::__shared_ptr_access<data::ConfigWidgetToyBonfire,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigWidgetToyBonfire,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
              p_combat_destroy_distance = &v33->combat_destroy_distance;
              if ( *(_BYTE *)(((unsigned __int64)p_combat_destroy_distance >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)p_combat_destroy_distance & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_combat_destroy_distance >> 3)
                                                                                            + 0x7FFF8000) )
              {
                __asan_report_load4(p_combat_destroy_distance);
              }
              sight_range = v33->combat_destroy_distance;
              v35 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
              n = (Vector3 *)Entity::getPosition((const Entity *const)v35);
              if ( ((unsigned __int8)n & 7) >= *(_BYTE *)(((unsigned __int64)n >> 3) + 0x7FFF8000)
                && *(_BYTE *)(((unsigned __int64)n >> 3) + 0x7FFF8000) != 0
                || *(_BYTE *)((((unsigned __int64)&n->z + 3) >> 3) + 0x7FFF8000) != 0
                && (((unsigned __int8)n + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&n->z + 3) >> 3) + 0x7FFF8000) )
              {
                n = (Vector3 *)__asan_report_load_n(n, 12LL);
              }
              Scene::getSurroundPlayersInRange((std::vector<std::shared_ptr<Player>> *)(v3 + 256), v32, *n, sight_range);
              __for_range = (std::vector<std::shared_ptr<Player>> *)(v3 + 256);
              __for_begin._M_current = std::vector<std::shared_ptr<Player>>::begin((std::vector<std::shared_ptr<Player>> *const)(v3 + 256))._M_current;
              __for_end._M_current = std::vector<std::shared_ptr<Player>>::end((std::vector<std::shared_ptr<Player>> *const)(v3 + 256))._M_current;
              while ( __gnu_cxx::operator!=<std::shared_ptr<Player> *,std::vector<std::shared_ptr<Player>>>(
                        &__for_begin,
                        &__for_end) )
              {
                v37 = __gnu_cxx::__normal_iterator<std::shared_ptr<Player> *,std::vector<std::shared_ptr<Player>>>::operator*(&__for_begin);
                std::shared_ptr<Player>::shared_ptr((std::shared_ptr<Player> *const)(v3 + 224), v37);
                if ( std::operator!=<Player>(0LL, (const std::shared_ptr<Player> *)(v3 + 224)) )
                {
                  common::milog::MiLogStream::create(
                    &v50,
                    &common::milog::MiLogDefault::default_log_obj_,
                    1u,
                    "./src/player/widget/player_widget_comp.cpp",
                    "checkUseBonfireWidget",
                    960);
                  v38 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
                          &v50,
                          (const char (*)[8])"player:");
                  v39 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 224));
                  operator<<(v38, v39);
                  common::milog::MiLogStream::~MiLogStream(&v50);
                }
                if ( std::operator!=<Player>(0LL, (const std::shared_ptr<Player> *)(v3 + 224))
                  && (v40 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 224)),
                      AvatarComp = Player::getAvatarComp(v40),
                      v42 = PlayerAvatarComp::getCombatTransaction[abi:cxx11](AvatarComp),
                      (unsigned __int8)std::string::empty(v42) ^ 1) )
                {
                  v2 = 688;
                  v44 = 0;
                }
                else
                {
                  v44 = 1;
                }
                std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 224));
                if ( v44 != 1 )
                  goto LABEL_62;
                __gnu_cxx::__normal_iterator<std::shared_ptr<Player> *,std::vector<std::shared_ptr<Player>>>::operator++(&__for_begin);
              }
              v2 = 0;
LABEL_62:
              std::vector<std::shared_ptr<Player>>::~vector((std::vector<std::shared_ptr<Player>> *const)(v3 + 256));
            }
            else
            {
              common::milog::MiLogStream::create(
                &v50,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/widget/player_widget_comp.cpp",
                "checkUseBonfireWidget",
                951);
              v25 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                      &v50,
                      (const char (*)[27])"distance is too long, pos:");
              v26 = operator<<(v25, pos);
              v27 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                      v26,
                      (const char (*)[13])" avatar_pos:");
              v28 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
              v29 = Entity::getPosition((const Entity *const)v28);
              v30 = operator<<(v27, v29);
              v31 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v30, (const char (*)[9])" player:");
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8(&this->player_);
              operator<<(v31, this->player_);
              common::milog::MiLogStream::~MiLogStream(&v50);
              v2 = -1;
            }
          }
          goto LABEL_63;
        }
        common::milog::MiLogStream::create(
          &v50,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/widget/player_widget_comp.cpp",
          "checkUseBonfireWidget",
          938);
        v18 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                &v50,
                (const char (*)[31])"checkSubItem fail, item_param:");
        v19 = operator<<(v18, (const ItemParam *)(v3 + 192));
        v20 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v19, (const char (*)[6])" ret:");
        v21 = common::milog::MiLogStream::operator<<<int,(int *)0>(v20, (const int *)(v3 + 48));
        v15 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v21, (const char (*)[9])" player:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
      }
      operator<<(v15, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v50);
      v2 = *(_DWORD *)(v3 + 48);
    }
LABEL_63:
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 160));
LABEL_64:
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 128));
LABEL_65:
    std::shared_ptr<data::ConfigWidgetToyBonfire>::~shared_ptr((std::shared_ptr<data::ConfigWidgetToyBonfire> *const)(v3 + 96));
    goto LABEL_66;
  }
  common::milog::MiLogStream::create(
    &v50,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/player/widget/player_widget_comp.cpp",
    "checkUseBonfireWidget",
    903);
  v6 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
         &v50,
         (const char (*)[28])"avatar_ptr is null, player:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  operator<<(v6, this->player_);
  common::milog::MiLogStream::~MiLogStream(&v50);
  v2 = -1;
LABEL_66:
  std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v3 + 64));
  result = v2;
  if ( v51 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 971: range 00000000143A7B1E-00000000143A82CC
void __cdecl PlayerWidgetComp::useBonfireWidget(PlayerWidgetComp *const this, const Vector3 *pos, const Vector3 *rot)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rcx
  common::milog::MiLogStream *v8; // rcx
  common::milog::MiLogStream *v9; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__shared_ptr_access<data::ConfigWidgetToyBonfire,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  PlayerItemComp *ItemComp; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rcx
  Player *v18; // rax
  PlayerWidgetComp *WidgetComp; // rdi
  std::__shared_ptr_access<data::ConfigWidgetToyBonfire,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  common::milog::MiLogStream v23; // [rsp+20h] [rbp-130h] BYREF
  char v24[272]; // [rsp+40h] [rbp-110h] BYREF

  v3 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 48 4 7 ret:995 64 8 10 reason:994 96 16 22 bonfire_config_ptr:972 128 16 13 scene_ptr:978 160 "
                        "16 16 owner_player:984 192 16 14 item_param:991";
  *(_QWORD *)(v3 + 16) = PlayerWidgetComp::useBonfireWidget;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -219021312;
  v5[536862724] = -219021312;
  v5[536862725] = -219021312;
  v5[536862726] = -202178560;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v3 + 192));
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
  JsonConfigMgr::getWidgetNewConfig(&v6->design_config.json_config_mgr);
  WidgetJsonNewConfig::findWidgetConfig<data::ConfigWidgetToyBonfire>((const WidgetJsonNewConfig *const)(v3 + 96));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 192));
  if ( std::operator==<data::ConfigWidgetToyBonfire>(
         0LL,
         (const std::shared_ptr<data::ConfigWidgetToyBonfire> *)(v3 + 96)) )
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/widget/player_widget_comp.cpp",
      "useBonfireWidget",
      975);
    v7 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
           &v23,
           (const char (*)[31])"findWidgetConfig fail, player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    operator<<(v7, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v23);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v3 + 128));
    if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v3 + 128)) )
    {
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/widget/player_widget_comp.cpp",
        "useBonfireWidget",
        981);
      v8 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
             &v23,
             (const char (*)[23])"getScene fail, player:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      operator<<(v8, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v23);
    }
    else
    {
      std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
      Scene::getOwnPlayer((const Scene *const)(v3 + 160));
      if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v3 + 160)) )
      {
        common::milog::MiLogStream::create(
          &v23,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/widget/player_widget_comp.cpp",
          "useBonfireWidget",
          987);
        v9 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
               &v23,
               (const char (*)[26])"getOwnPlayer fail, scene:");
        v10 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
        common::milog::MiLogStream::operator<<<Scene,(Scene*)0>(v9, v10);
        common::milog::MiLogStream::~MiLogStream(&v23);
      }
      else
      {
        *(_DWORD *)(v3 + 192) = 0;
        *(_DWORD *)(v3 + 196) = 0;
        *(_DWORD *)(v3 + 200) = 0;
        *(_DWORD *)(v3 + 204) = 0;
        v11 = std::__shared_ptr_access<data::ConfigWidgetToyBonfire,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigWidgetToyBonfire,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        if ( *(_BYTE *)(((unsigned __int64)&v11->material_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v11->material_id >> 3) + 0x7FFF8000) <= 3 )
        {
          v11 = (std::__shared_ptr_access<data::ConfigWidgetToyBonfire,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v11->material_id);
        }
        *(_DWORD *)(v3 + 192) = v11->material_id;
        *(_DWORD *)(v3 + 196) = 1;
        SubItemReason::SubItemReason((SubItemReason *const)(v3 + 64), ACTION_REASON_USE_WIDGET_BONFIRE);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        ItemComp = Player::getItemComp(this->player_);
        *(_DWORD *)(v3 + 48) = PlayerItemComp::subItem(
                                 ItemComp,
                                 (const ItemParam *)(v3 + 192),
                                 (const SubItemReason *)(v3 + 64));
        if ( *(_DWORD *)(v3 + 48) )
        {
          common::milog::MiLogStream::create(
            &v23,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/widget/player_widget_comp.cpp",
            "useBonfireWidget",
            998);
          v13 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                  &v23,
                  (const char (*)[26])"subItem fail, item_param:");
          v14 = operator<<(v13, (const ItemParam *)(v3 + 192));
          v15 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v14, (const char (*)[6])" ret:");
          v16 = common::milog::MiLogStream::operator<<<int,(int *)0>(v15, (const int *)(v3 + 48));
          v17 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v16, (const char (*)[9])" player:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          operator<<(v17, this->player_);
          common::milog::MiLogStream::~MiLogStream(&v23);
        }
        else
        {
          v18 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
          WidgetComp = Player::getWidgetComp(v18);
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          {
            WidgetComp = (PlayerWidgetComp *)&this->player_;
            __asan_report_load8(&this->player_);
          }
          PlayerWidgetComp::createBonfireInMyWorld(WidgetComp, this->player_, pos, rot);
          v20 = std::__shared_ptr_access<data::ConfigWidgetToyBonfire,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigWidgetToyBonfire,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
          if ( *(_BYTE *)(((unsigned __int64)&v20->cd_group >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&v20->cd_group >> 3) + 0x7FFF8000) <= 3 )
          {
            v20 = (std::__shared_ptr_access<data::ConfigWidgetToyBonfire,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v20->cd_group);
          }
          PlayerWidgetComp::updateWidgetGroupCoolDown(this, v20->cd_group, 1);
        }
      }
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 160));
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 128));
  }
  std::shared_ptr<data::ConfigWidgetToyBonfire>::~shared_ptr((std::shared_ptr<data::ConfigWidgetToyBonfire> *const)(v3 + 96));
  if ( v24 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = -168430091;
  }
};

// Line 1008: range 00000000143A82CE-00000000143A8AA8
int32_t __cdecl PlayerWidgetComp::createBonfireInMyWorld(
        PlayerWidgetComp *const this,
        Player *creator_player,
        const Vector3 *pos,
        const Vector3 *rot)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rcx
  int32_t v9; // r14d
  std::__shared_ptr_access<data::ConfigWidgetToyBonfire,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  Scene *v11; // rax
  common::milog::MiLogStream *v12; // rcx
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // r14
  unsigned __int64 v15; // rax
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rsi
  int Now; // r14d
  std::__shared_ptr_access<data::ConfigWidgetToyBonfire,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rdx
  uint32_t *p_lasting_time; // rax
  unsigned int *v20; // rcx
  WidgetBonfireData *v21; // r8
  void (__fastcall *v23)(std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, VisionContext *); // [rsp+8h] [rbp-508h]
  unsigned int Uid; // [rsp+3Ch] [rbp-4D4h] BYREF
  common::milog::MiLogStream v28; // [rsp+40h] [rbp-4D0h] BYREF
  char v29[1200]; // [rsp+60h] [rbp-4B0h] BYREF

  v4 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_5(1152LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "5 48 16 23 bonfire_config_ptr:1009 80 16 14 scene_ptr:1015 112 16 15 gadget_ptr:1027 144 24 17 b"
                        "onfire_data:1035 208 816 17 gadget_param:1021";
  *(_QWORD *)(v4 + 16) = PlayerWidgetComp::createBonfireInMyWorld;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = 61937;
  v6[536862722] = 62194;
  v6[536862723] = 62194;
  v6[536862724] = 62194;
  v6[536862725] = -218959360;
  v6[536862726] = 62194;
  v6[536862752] = -202116109;
  v6[536862753] = -202116109;
  v6[536862754] = -202116109;
  v6[536862755] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v4 + 112));
  v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 112));
  JsonConfigMgr::getWidgetNewConfig(&v7->design_config.json_config_mgr);
  WidgetJsonNewConfig::findWidgetConfig<data::ConfigWidgetToyBonfire>((const WidgetJsonNewConfig *const)(v4 + 48));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 112));
  if ( std::operator==<data::ConfigWidgetToyBonfire>(
         0LL,
         (const std::shared_ptr<data::ConfigWidgetToyBonfire> *)(v4 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v28,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/widget/player_widget_comp.cpp",
      "createBonfireInMyWorld",
      1012);
    v8 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
           &v28,
           (const char (*)[31])"findWidgetConfig fail, player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    operator<<(v8, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v28);
    v9 = 5;
  }
  else
  {
    Player::getSceneComp(creator_player);
    PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v4 + 80));
    if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v4 + 80)) )
    {
      v9 = -1;
    }
    else
    {
      GadgetParam::GadgetParam((GadgetParam *const)(v4 + 208));
      v10 = std::__shared_ptr_access<data::ConfigWidgetToyBonfire,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigWidgetToyBonfire,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 48));
      if ( *(_BYTE *)(((unsigned __int64)&v10->gadget_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v10->gadget_id >> 3) + 0x7FFF8000) <= 3 )
      {
        v10 = (std::__shared_ptr_access<data::ConfigWidgetToyBonfire,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v10->gadget_id);
      }
      *(_DWORD *)(v4 + 208) = v10->gadget_id;
      v11 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 80));
      *(_DWORD *)(v4 + 216) = Scene::genNewEntityId(v11, PROT_ENTITY_GADGET);
      if ( ((unsigned __int8)pos & 7) >= *(_BYTE *)(((unsigned __int64)pos >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)pos >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&pos->z + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)pos + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&pos->z + 3) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load_n(pos, 12LL);
      }
      *(_QWORD *)(v4 + 220) = *(_QWORD *)&pos->x;
      *(float *)(v4 + 228) = pos->z;
      if ( ((unsigned __int8)rot & 7) >= *(_BYTE *)(((unsigned __int64)rot >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)rot >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&rot->z + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)rot + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&rot->z + 3) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load_n(rot, 12LL);
      }
      *(_QWORD *)(v4 + 232) = *(_QWORD *)&rot->x;
      *(float *)(v4 + 240) = rot->z;
      *(_DWORD *)(v4 + 300) = 0;
      EntityMgr::createGadget((const GadgetParam *)(v4 + 112));
      if ( std::operator==<Gadget>(0LL, (const std::shared_ptr<Gadget> *)(v4 + 112)) )
      {
        common::milog::MiLogStream::create(
          &v28,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/widget/player_widget_comp.cpp",
          "createBonfireInMyWorld",
          1030);
        v12 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                &v28,
                (const char (*)[27])"createGadget fail, player:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        operator<<(v12, this->player_);
        common::milog::MiLogStream::~MiLogStream(&v28);
        v9 = -1;
      }
      else
      {
        v13 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 112));
        v14 = v13;
        if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
          __asan_report_load8(v13);
        v15 = *(_QWORD *)v14->baseclass_0 + 56LL;
        if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
          v15 = __asan_report_load8(*(_QWORD *)v14->baseclass_0 + 56LL);
        v23 = *(void (__fastcall **)(std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, VisionContext *))v15;
        v16 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 80));
        v23(v14, v16, &VisionContext::meet_context);
        *(_DWORD *)(v4 + 144) = 0;
        *(_QWORD *)(v4 + 152) = 0LL;
        *(_QWORD *)(v4 + 160) = 0LL;
        Now = common::tools::TimeUtils::getNow();
        v18 = std::__shared_ptr_access<data::ConfigWidgetToyBonfire,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigWidgetToyBonfire,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 48));
        p_lasting_time = &v18->lasting_time;
        if ( *(_BYTE *)(((unsigned __int64)p_lasting_time >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_lasting_time & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_lasting_time >> 3)
                                                                           + 0x7FFF8000) )
        {
          __asan_report_load4(p_lasting_time);
        }
        *(_DWORD *)(v4 + 144) = Now + v18->lasting_time;
        std::weak_ptr<Gadget>::operator=<Gadget>(
          (std::weak_ptr<Gadget> *const)(v4 + 152),
          (const std::shared_ptr<Gadget> *)(v4 + 112));
        Uid = Player::getUid(creator_player);
        std::multimap<unsigned int,WidgetBonfireData>::emplace<unsigned int,WidgetBonfireData&>(
          &this->bonfire_map_,
          &Uid,
          (WidgetBonfireData *)(v4 + 144),
          v20,
          v21);
        PlayerWidgetComp::refreshAllWidgets(this, 1);
        v9 = 0;
        WidgetBonfireData::~WidgetBonfireData((WidgetBonfireData *const)(v4 + 144));
      }
      std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v4 + 112));
      GadgetParam::~GadgetParam((GadgetParam *const)(v4 + 208));
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v4 + 80));
  }
  std::shared_ptr<data::ConfigWidgetToyBonfire>::~shared_ptr((std::shared_ptr<data::ConfigWidgetToyBonfire> *const)(v4 + 48));
  if ( v29 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8018) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8080) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8088) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    __asan_stack_free_5(v4, 1152LL, v29);
  }
  return v9;
};

// Line 1046: range 00000000143A8AAA-00000000143A8DB8
uint32_t __cdecl PlayerWidgetComp::refreshBonfires(PlayerWidgetComp *const this, uint32_t now, bool is_notify)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::_Rb_tree_iterator<std::pair<unsigned int const,WidgetBonfireData> >::pointer v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  std::_Rb_tree_iterator<std::pair<unsigned int const,WidgetBonfireData> >::pointer v9; // rax
  const unsigned int *v10; // rax
  _DWORD *v11; // rdx
  uint32_t result; // eax
  std::_Rb_tree_iterator<std::pair<unsigned int const,WidgetBonfireData> >::_Self __y; // [rsp+18h] [rbp-A8h] BYREF
  char v14[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 22 next_refresh_time:1047 64 8 9 iter:1048 96 16 15 gadget_ptr:1052";
  *(_QWORD *)(v3 + 16) = PlayerWidgetComp::refreshBonfires;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202178560;
  *(_DWORD *)(v3 + 48) = -1;
  *(std::multimap<unsigned int,WidgetBonfireData>::iterator *)(v3 + 64) = std::multimap<unsigned int,WidgetBonfireData>::begin(&this->bonfire_map_);
  while ( 1 )
  {
    __y._M_node = std::multimap<unsigned int,WidgetBonfireData>::end(&this->bonfire_map_)._M_node;
    if ( !std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,WidgetBonfireData> >::_Self *)(v3 + 64),
            &__y) )
      break;
    v6 = std::_Rb_tree_iterator<std::pair<unsigned int const,WidgetBonfireData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,WidgetBonfireData> > *const)(v3 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&v6->second >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v6->second >> 3) + 0x7FFF8000) <= 3 )
    {
      v6 = (std::_Rb_tree_iterator<std::pair<unsigned int const,WidgetBonfireData> >::pointer)__asan_report_load4(&v6->second);
    }
    if ( now < v6->second.end_time )
    {
      v9 = std::_Rb_tree_iterator<std::pair<unsigned int const,WidgetBonfireData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,WidgetBonfireData> > *const)(v3 + 64));
      v10 = std::min<unsigned int>((const unsigned int *)(v3 + 48), &v9->second.end_time);
      v11 = v10;
      if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v10);
      }
      *(_DWORD *)(v3 + 48) = *v11;
      std::_Rb_tree_iterator<std::pair<unsigned int const,WidgetBonfireData>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,WidgetBonfireData> > *const)(v3 + 64));
    }
    else
    {
      std::_Rb_tree_iterator<std::pair<unsigned int const,WidgetBonfireData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,WidgetBonfireData> > *const)(v3 + 64));
      std::weak_ptr<Gadget>::lock((const std::weak_ptr<Gadget> *const)(v3 + 96));
      if ( std::operator!=<Gadget>(0LL, (const std::shared_ptr<Gadget> *)(v3 + 96)) )
      {
        v7 = (unsigned __int64)std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
          v7 = __asan_report_load8(v7);
        v8 = *(_QWORD *)v7 + 128LL;
        if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
          v7 = __asan_report_load8(*(_QWORD *)v7 + 128LL);
        (*(void (__fastcall **)(unsigned __int64, VisionContext *))v8)(v7, &VisionContext::miss_context);
      }
      *(std::multimap<unsigned int,WidgetBonfireData>::iterator *)(v3 + 64) = std::multimap<unsigned int,WidgetBonfireData>::erase[abi:cxx11](
                                                                                &this->bonfire_map_,
                                                                                *(std::multimap<unsigned int,WidgetBonfireData>::iterator *)(v3 + 64));
      std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v3 + 96));
    }
  }
  result = *(_DWORD *)(v3 + 48);
  if ( v14 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1070: range 00000000143A8DBA-00000000143A969F
void __cdecl PlayerWidgetComp::removeNearbyBonfiresOnEnterCombat(
        PlayerWidgetComp *const this,
        ScenePtr *p_scene_ptr,
        const std::vector<std::shared_ptr<Entity>> *combat_entity_vec)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rcx
  const std::shared_ptr<Entity> *v8; // rax
  std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  const Vector3 *Position; // rax
  common::milog::MiLogStream *v11; // rcx
  bool v12; // r14
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  const Vector3 *v14; // rax
  std::__shared_ptr_access<data::ConfigWidgetToyBonfire,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rdx
  float *p_combat_destroy_distance; // rax
  common::milog::MiLogStream *v17; // r14
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rcx
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rdx
  float Distance; // [rsp+4h] [rbp-17Ch]
  bool is_need_remove; // [rsp+27h] [rbp-159h]
  std::vector<std::shared_ptr<Entity>>::const_iterator __for_begin; // [rsp+28h] [rbp-158h] BYREF
  std::vector<std::shared_ptr<Entity>>::const_iterator __for_end; // [rsp+30h] [rbp-150h] BYREF
  const std::vector<std::shared_ptr<Entity>> *__for_range; // [rsp+38h] [rbp-148h]
  std::vector<Vector3> *__for_range_0; // [rsp+40h] [rbp-140h]
  const Vector3 *combat_position; // [rsp+48h] [rbp-138h]
  common::milog::MiLogStream v31; // [rsp+50h] [rbp-130h] BYREF
  char v32[272]; // [rsp+70h] [rbp-110h] BYREF

  v3 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 32 8 9 iter:1094 64 16 15 config_ptr:1071 96 16 15 gadget_ptr:1096 128 16 15 entity_ptr:1082 1"
                        "60 24 24 combat_position_vec:1081";
  *(_QWORD *)(v3 + 16) = PlayerWidgetComp::removeNearbyBonfiresOnEnterCombat;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -219021312;
  v5[536862723] = -219021312;
  v5[536862724] = -219021312;
  v5[536862725] = -218103808;
  v5[536862726] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v3 + 128));
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
  JsonConfigMgr::getWidgetNewConfig(&v6->design_config.json_config_mgr);
  WidgetJsonNewConfig::findWidgetConfig<data::ConfigWidgetToyBonfire>((const WidgetJsonNewConfig *const)(v3 + 64));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 128));
  if ( std::operator==<data::ConfigWidgetToyBonfire>(
         0LL,
         (const std::shared_ptr<data::ConfigWidgetToyBonfire> *)(v3 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v31,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/widget/player_widget_comp.cpp",
      "removeNearbyBonfiresOnEnterCombat",
      1074);
    v7 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
           &v31,
           (const char (*)[31])"findWidgetConfig fail, player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    operator<<(v7, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v31);
  }
  else if ( !std::multimap<unsigned int,WidgetBonfireData>::empty(&this->bonfire_map_) )
  {
    std::vector<Vector3>::vector((std::vector<Vector3> *const)(v3 + 160));
    __for_range = combat_entity_vec;
    __for_begin._M_current = std::vector<std::shared_ptr<Entity>>::begin(combat_entity_vec)._M_current;
    __for_end._M_current = std::vector<std::shared_ptr<Entity>>::end(combat_entity_vec)._M_current;
    while ( __gnu_cxx::operator!=<std::shared_ptr<Entity> const*,std::vector<std::shared_ptr<Entity>>>(
              &__for_begin,
              &__for_end) )
    {
      v8 = __gnu_cxx::__normal_iterator<std::shared_ptr<Entity> const*,std::vector<std::shared_ptr<Entity>>>::operator*(&__for_begin);
      std::shared_ptr<Entity>::shared_ptr((std::shared_ptr<Entity> *const)(v3 + 128), v8);
      if ( std::operator!=<Entity>(0LL, (const std::shared_ptr<Entity> *)(v3 + 128)) )
      {
        v9 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
        Position = Entity::getPosition(v9);
        std::vector<Vector3>::push_back((std::vector<Vector3> *const)(v3 + 160), Position);
      }
      std::shared_ptr<Entity>::~shared_ptr((std::shared_ptr<Entity> *const)(v3 + 128));
      __gnu_cxx::__normal_iterator<std::shared_ptr<Entity> const*,std::vector<std::shared_ptr<Entity>>>::operator++(&__for_begin);
    }
    if ( std::vector<Vector3>::empty((const std::vector<Vector3> *const)(v3 + 160)) )
    {
      common::milog::MiLogStream::create(
        &v31,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/widget/player_widget_comp.cpp",
        "removeNearbyBonfiresOnEnterCombat",
        1091);
      v11 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
              &v31,
              (const char (*)[38])"combat_position_vec is empty, player:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      operator<<(v11, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v31);
    }
    else
    {
      *(std::multimap<unsigned int,WidgetBonfireData>::iterator *)(v3 + 32) = std::multimap<unsigned int,WidgetBonfireData>::begin(&this->bonfire_map_);
      while ( 1 )
      {
        __for_end._M_current = (const std::shared_ptr<Entity> *)std::multimap<unsigned int,WidgetBonfireData>::end(&this->bonfire_map_)._M_node;
        if ( !std::operator!=(
                (const std::_Rb_tree_iterator<std::pair<unsigned int const,WidgetBonfireData> >::_Self *)(v3 + 32),
                (const std::_Rb_tree_iterator<std::pair<unsigned int const,WidgetBonfireData> >::_Self *)&__for_end) )
          break;
        std::_Rb_tree_iterator<std::pair<unsigned int const,WidgetBonfireData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,WidgetBonfireData> > *const)(v3 + 32));
        std::weak_ptr<Gadget>::lock((const std::weak_ptr<Gadget> *const)(v3 + 96));
        if ( std::operator==<Gadget>(0LL, (const std::shared_ptr<Gadget> *)(v3 + 96)) )
        {
          *(std::multimap<unsigned int,WidgetBonfireData>::iterator *)(v3 + 32) = std::multimap<unsigned int,WidgetBonfireData>::erase[abi:cxx11](
                                                                                    &this->bonfire_map_,
                                                                                    *(std::multimap<unsigned int,WidgetBonfireData>::iterator *)(v3 + 32));
        }
        else
        {
          std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
          Entity::getScene((const Entity *const)(v3 + 128));
          v12 = std::operator!=<Scene,Scene>((const std::shared_ptr<Scene> *)(v3 + 128), p_scene_ptr);
          std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 128));
          if ( v12 )
            goto LABEL_38;
          is_need_remove = 0;
          __for_range_0 = (std::vector<Vector3> *)(v3 + 160);
          __for_begin._M_current = (const std::shared_ptr<Entity> *)std::vector<Vector3>::begin((std::vector<Vector3> *const)(v3 + 160))._M_current;
          __for_end._M_current = (const std::shared_ptr<Entity> *)std::vector<Vector3>::end(__for_range_0)._M_current;
          while ( __gnu_cxx::operator!=<Vector3 *,std::vector<Vector3>>(
                    (const __gnu_cxx::__normal_iterator<Vector3*,std::vector<Vector3> > *)&__for_begin,
                    (const __gnu_cxx::__normal_iterator<Vector3*,std::vector<Vector3> > *)&__for_end) )
          {
            combat_position = __gnu_cxx::__normal_iterator<Vector3 *,std::vector<Vector3>>::operator*((const __gnu_cxx::__normal_iterator<Vector3*,std::vector<Vector3> > *const)&__for_begin);
            v13 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
            v14 = Entity::getPosition((const Entity *const)v13);
            Distance = getDistance(v14, combat_position);
            v15 = std::__shared_ptr_access<data::ConfigWidgetToyBonfire,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigWidgetToyBonfire,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
            p_combat_destroy_distance = &v15->combat_destroy_distance;
            if ( *(_BYTE *)(((unsigned __int64)p_combat_destroy_distance >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)p_combat_destroy_distance & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_combat_destroy_distance >> 3)
                                                                                          + 0x7FFF8000) )
            {
              __asan_report_load4(p_combat_destroy_distance);
            }
            if ( v15->combat_destroy_distance > Distance )
            {
              is_need_remove = 1;
              break;
            }
            __gnu_cxx::__normal_iterator<Vector3 *,std::vector<Vector3>>::operator++((__gnu_cxx::__normal_iterator<Vector3*,std::vector<Vector3> > *const)&__for_begin);
          }
          if ( !is_need_remove )
          {
LABEL_38:
            std::_Rb_tree_iterator<std::pair<unsigned int const,WidgetBonfireData>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,WidgetBonfireData> > *const)(v3 + 32));
          }
          else
          {
            common::milog::MiLogStream::create(
              &v31,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/widget/player_widget_comp.cpp",
              "removeNearbyBonfiresOnEnterCombat",
              1118);
            v17 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                    &v31,
                    (const char (*)[33])"destroy bonfire on enter combat:");
            v18 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
            v19 = common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v17, v18);
            v20 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                    v19,
                    (const char (*)[14])" scene_owner:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            operator<<(v20, this->player_);
            common::milog::MiLogStream::~MiLogStream(&v31);
            v21 = (unsigned __int64)std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
            if ( *(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
              v21 = __asan_report_load8(v21);
            v22 = *(_QWORD *)v21 + 128LL;
            if ( *(_BYTE *)((v22 >> 3) + 0x7FFF8000) )
              v21 = __asan_report_load8(*(_QWORD *)v21 + 128LL);
            (*(void (__fastcall **)(unsigned __int64, VisionContext *))v22)(v21, &VisionContext::miss_context);
            *(std::multimap<unsigned int,WidgetBonfireData>::iterator *)(v3 + 32) = std::multimap<unsigned int,WidgetBonfireData>::erase[abi:cxx11](
                                                                                      &this->bonfire_map_,
                                                                                      *(std::multimap<unsigned int,WidgetBonfireData>::iterator *)(v3 + 32));
          }
        }
        std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v3 + 96));
      }
    }
    std::vector<Vector3>::~vector((std::vector<Vector3> *const)(v3 + 160));
  }
  std::shared_ptr<data::ConfigWidgetToyBonfire>::~shared_ptr((std::shared_ptr<data::ConfigWidgetToyBonfire> *const)(v3 + 64));
  if ( v32 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = -168430091;
  }
};

// Line 1131: range 00000000143A96A0-00000000143A9972
int32_t __cdecl PlayerWidgetComp::clearBonfiresByGm(PlayerWidgetComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  PlayerSceneComp *SceneComp; // rax
  int32_t result; // eax
  const std::pair<unsigned int const,WidgetBonfireData> *v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  std::multimap<unsigned int,WidgetBonfireData>::iterator __for_begin; // [rsp+18h] [rbp-A8h] BYREF
  std::multimap<unsigned int,WidgetBonfireData>::iterator __for_end; // [rsp+20h] [rbp-A0h] BYREF
  std::multimap<unsigned int,WidgetBonfireData> *__for_range; // [rsp+28h] [rbp-98h]
  std::tuple_element<0,std::pair<unsigned int const,WidgetBonfireData> >::type *_; // [rsp+30h] [rbp-90h]
  std::tuple_element<1,std::pair<unsigned int const,WidgetBonfireData> >::type *bonfire_data; // [rsp+38h] [rbp-88h]
  std::pair<unsigned int const,WidgetBonfireData> __in; // [rsp+40h] [rbp-80h] BYREF
  char v15[96]; // [rsp+60h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 15 gadget_ptr:1138";
  *(_QWORD *)(v1 + 16) = PlayerWidgetComp::clearBonfiresByGm;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  SceneComp = Player::getSceneComp(this->player_);
  if ( !PlayerSceneComp::isInMyPlayerWorld(SceneComp) )
  {
    result = 512;
  }
  else
  {
    __for_range = &this->bonfire_map_;
    __for_begin._M_node = std::multimap<unsigned int,WidgetBonfireData>::begin(&this->bonfire_map_)._M_node;
    __for_end._M_node = std::multimap<unsigned int,WidgetBonfireData>::end(&this->bonfire_map_)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v6 = std::_Rb_tree_iterator<std::pair<unsigned int const,WidgetBonfireData>>::operator*(&__for_begin);
      std::pair<unsigned int const,WidgetBonfireData>::pair(&__in, v6);
      _ = std::get<0ul,unsigned int const,WidgetBonfireData>(&__in);
      bonfire_data = std::get<1ul,unsigned int const,WidgetBonfireData>(&__in);
      std::weak_ptr<Gadget>::lock((const std::weak_ptr<Gadget> *const)(v1 + 32));
      if ( std::operator!=<Gadget>(0LL, (const std::shared_ptr<Gadget> *)(v1 + 32)) )
      {
        v7 = (unsigned __int64)std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
        if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
          v7 = __asan_report_load8(v7);
        v8 = *(_QWORD *)v7 + 128LL;
        if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
          v7 = __asan_report_load8(*(_QWORD *)v7 + 128LL);
        (*(void (__fastcall **)(unsigned __int64, VisionContext *))v8)(v7, &VisionContext::miss_context);
      }
      std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v1 + 32));
      std::pair<unsigned int const,WidgetBonfireData>::~pair(&__in);
      std::_Rb_tree_iterator<std::pair<unsigned int const,WidgetBonfireData>>::operator++(&__for_begin);
    }
    std::multimap<unsigned int,WidgetBonfireData>::clear(&this->bonfire_map_);
    PlayerWidgetComp::refreshAllWidgets(this, 1);
    result = 0;
  }
  if ( v15 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1152: range 00000000143A9974-00000000143A9DEE
int32_t __cdecl PlayerWidgetComp::checkSetUpLunchBox(
        const PlayerWidgetComp *const this,
        const WidgetLunchBoxData *lunch_box_data)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  std::pair<unsigned int const,unsigned int> *v3; // rax
  std::pair<unsigned int const,unsigned int> *v4; // rdx
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rcx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  std::map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-78h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+20h] [rbp-70h] BYREF
  const WidgetJsonNewConfig *widget_json_config; // [rsp+28h] [rbp-68h]
  const std::map<unsigned int,unsigned int> *__for_range; // [rsp+30h] [rbp-60h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *slot_type; // [rsp+38h] [rbp-58h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *material_id; // [rsp+40h] [rbp-50h]
  std::pair<unsigned int const,unsigned int> __in; // [rsp+48h] [rbp-48h] BYREF
  std::shared_ptr<Config> v20; // [rsp+50h] [rbp-40h] BYREF
  common::milog::MiLogStream v21; // [rsp+60h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v20);
  v2 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v20);
  widget_json_config = JsonConfigMgr::getWidgetNewConfig(&v2->design_config.json_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v20);
  __for_range = &lunch_box_data->slot_material_map;
  __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(&lunch_box_data->slot_material_map)._M_node;
  __for_end._M_node = std::map<unsigned int,unsigned int>::end(&lunch_box_data->slot_material_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v3 = (std::pair<unsigned int const,unsigned int> *)std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
    v4 = v3;
    if ( ((unsigned __int8)v3 & 7) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&v3->second + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v3 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v3->second + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load_n(v3, 8LL);
    }
    __in = *v4;
    slot_type = std::get<0ul,unsigned int const,unsigned int>(&__in);
    material_id = std::get<1ul,unsigned int const,unsigned int>(&__in);
    if ( *(_BYTE *)(((unsigned __int64)slot_type >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)slot_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)slot_type >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(slot_type);
    }
    if ( *slot_type == 1 )
    {
      if ( !common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,unsigned int>(
              &widget_json_config->lunch_box_revive_material_set,
              material_id) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/widget/player_widget_comp.cpp",
          "checkSetUpLunchBox",
          1162);
        v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
               &v21,
               (const char (*)[25])"invalid revive material:");
        v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, material_id);
        v7 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v6, (const char (*)[9])" player:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        goto LABEL_20;
      }
    }
    else
    {
      if ( *slot_type != 2 )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/widget/player_widget_comp.cpp",
          "checkSetUpLunchBox",
          1174);
        v10 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                &v21,
                (const char (*)[19])"invalid slot_type:");
        v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, slot_type);
        v7 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v11, (const char (*)[9])" player:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
LABEL_20:
        operator<<(v7, this->player_);
        common::milog::MiLogStream::~MiLogStream(&v21);
        return 679;
      }
      if ( !common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,unsigned int>(
              &widget_json_config->lunch_box_heal_material_set,
              material_id) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/widget/player_widget_comp.cpp",
          "checkSetUpLunchBox",
          1169);
        v8 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
               &v21,
               (const char (*)[23])"invalid heal material:");
        v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, material_id);
        v7 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v9, (const char (*)[9])" player:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        goto LABEL_20;
      }
    }
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 1182: range 00000000143A9DF0-00000000143A9E24
void __cdecl PlayerWidgetComp::setUpLunchBox(PlayerWidgetComp *const this, WidgetLunchBoxData *lunch_box_data)
{
  WidgetLunchBoxData *v2; // rax

  v2 = std::move<WidgetLunchBoxData &>(lunch_box_data);
  WidgetLunchBoxData::operator=(&this->lunch_box_data_, v2);
};

// Line 1187: range 00000000143A9E26-00000000143AA3EB
__int64 __fastcall PlayerWidgetComp::checkWidgetGroupCoolDown(PlayerWidgetComp *const this, uint32_t group_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  PlayerGmComp *GmComp; // rax
  __int64 result; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  PlayerBasicComp *BasicComp; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,WidgetCoolDownInfo>,false,false>::pointer v9; // rax
  float cool_down_success; // xmm0_4
  float v11; // xmm0_4
  unsigned __int64 v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rcx
  const WidgetJsonNewConfig *widget_config; // [rsp+18h] [rbp-108h]
  data::ConfigWidgetCdGroup *cd_gourp_config; // [rsp+20h] [rbp-100h]
  const WidgetCoolDownInfo *cool_down_info; // [rsp+28h] [rbp-F8h]
  std::shared_ptr<Config> v22; // [rsp+30h] [rbp-F0h] BYREF
  common::milog::MiLogStream v23; // [rsp+40h] [rbp-E0h] BYREF
  char v24[192]; // [rsp+60h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 4 22 cool_down_seconds:1214 48 4 13 group_id:1186 64 8 16 config_iter:1194 96 8 14 info_ite"
                        "r:1201 128 8 16 cur_time_ms:1207";
  *(_QWORD *)(v2 + 16) = PlayerWidgetComp::checkWidgetGroupCoolDown;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -202116352;
  *(_DWORD *)(v2 + 48) = group_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  GmComp = Player::getGmComp(this->player_);
  if ( PlayerGmComp::getGmSetValue<bool>(GmComp, 0) )
  {
    result = 0LL;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v22);
    v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v22);
    widget_config = JsonConfigMgr::getWidgetNewConfig(&v7->design_config.json_config_mgr);
    std::shared_ptr<Config>::~shared_ptr(&v22);
    *(std::unordered_map<unsigned int,data::ConfigWidgetCdGroup>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ConfigWidgetCdGroup>::find(
                                                                                                 &widget_config->config_main_widget_toy.cd_group_config_map,
                                                                                                 (const std::unordered_map<unsigned int,data::ConfigWidgetCdGroup>::key_type *)(v2 + 48));
    *(std::unordered_map<unsigned int,data::ConfigWidgetCdGroup>::const_iterator *)(v2 + 128) = std::unordered_map<unsigned int,data::ConfigWidgetCdGroup>::cend(&widget_config->config_main_widget_toy.cd_group_config_map);
    if ( std::__detail::operator==<std::pair<unsigned int const,data::ConfigWidgetCdGroup>,false>(
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ConfigWidgetCdGroup>,false> *)(v2 + 64),
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ConfigWidgetCdGroup>,false> *)(v2 + 128)) )
    {
      result = 5LL;
    }
    else
    {
      cd_gourp_config = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ConfigWidgetCdGroup>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ConfigWidgetCdGroup>,false,false> *const)(v2 + 64))->second;
      *(std::unordered_map<unsigned int,WidgetCoolDownInfo>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,WidgetCoolDownInfo>::find(
                                                                                      &this->group_cool_down_info_map_,
                                                                                      (const std::unordered_map<unsigned int,WidgetCoolDownInfo>::key_type *)(v2 + 48));
      *(std::unordered_map<unsigned int,WidgetCoolDownInfo>::iterator *)(v2 + 128) = std::unordered_map<unsigned int,WidgetCoolDownInfo>::end(&this->group_cool_down_info_map_);
      if ( std::__detail::operator==<std::pair<unsigned int const,WidgetCoolDownInfo>,false>(
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,WidgetCoolDownInfo>,false> *)(v2 + 96),
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,WidgetCoolDownInfo>,false> *)(v2 + 128)) )
      {
        result = 0LL;
      }
      else
      {
        *(_QWORD *)(v2 + 128) = common::tools::TimeUtils::getNowMs();
        if ( *(_BYTE *)(((unsigned __int64)cd_gourp_config >> 3) + 0x7FFF8000) != 0
          && ((unsigned __int8)cd_gourp_config & 7) >= *(_BYTE *)(((unsigned __int64)cd_gourp_config >> 3) + 0x7FFF8000) )
        {
          __asan_report_load1(cd_gourp_config);
        }
        if ( cd_gourp_config->is_under_time_scale )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          BasicComp = Player::getBasicComp(this->player_);
          *(_QWORD *)(v2 + 128) = PlayerBasicComp::getPlayerTimeMs(BasicComp);
        }
        v9 = std::__detail::_Node_iterator<std::pair<unsigned int const,WidgetCoolDownInfo>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,WidgetCoolDownInfo>,false,false> *const)(v2 + 96));
        cool_down_info = &v9->second;
        if ( *(char *)(((unsigned __int64)&v9->second.is_success >> 3) + 0x7FFF8000) < 0 )
          __asan_report_load1(&v9->second.is_success);
        if ( cool_down_info->is_success )
        {
          if ( *(_BYTE *)(((unsigned __int64)&cd_gourp_config->cool_down_success >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)cd_gourp_config + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cd_gourp_config->cool_down_success >> 3)
                                                                          + 0x7FFF8000) )
          {
            __asan_report_load4(&cd_gourp_config->cool_down_success);
          }
          cool_down_success = cd_gourp_config->cool_down_success;
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&cd_gourp_config->cool_down_fail >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)cd_gourp_config + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cd_gourp_config->cool_down_fail >> 3)
                                                                          + 0x7FFF8000) )
          {
            __asan_report_load4(&cd_gourp_config->cool_down_fail);
          }
          cool_down_success = cd_gourp_config->cool_down_fail;
        }
        *(float *)(v2 + 32) = cool_down_success;
        if ( *(_BYTE *)(((unsigned __int64)cool_down_info >> 3) + 0x7FFF8000) )
          __asan_report_load8(cool_down_info);
        v11 = 1000.0 * *(float *)(v2 + 32);
        if ( v11 >= 9.223372e18 )
          v12 = (unsigned int)(int)(float)(v11 - 9.223372e18) ^ 0x8000000000000000LL;
        else
          v12 = (unsigned int)(int)v11;
        if ( v12 + cool_down_info->last_use_time <= *(_QWORD *)(v2 + 128) )
        {
          result = 0LL;
        }
        else
        {
          common::milog::MiLogStream::create(
            &v23,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/widget/player_widget_comp.cpp",
            "checkWidgetGroupCoolDown",
            1217);
          v13 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                  &v23,
                  (const char (*)[15])"last_use_time:");
          v14 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                  v13,
                  &cool_down_info->last_use_time);
          v15 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v14, (const char (*)[5])" CD:");
          v16 = common::milog::MiLogStream::operator<<<float,(float *)0>(v15, (const float *)(v2 + 32));
          v17 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v16, (const char (*)[9])" now_ms:");
          v18 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                  v17,
                  (const unsigned __int64 *)(v2 + 128));
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          operator<<(v18, this->player_);
          common::milog::MiLogStream::~MiLogStream(&v23);
          result = 608LL;
        }
      }
    }
  }
  if ( v24 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 1225: range 00000000143AA3EC-00000000143AA8BE
void __fastcall PlayerWidgetComp::updateWidgetGroupCoolDown(
        PlayerWidgetComp *const this,
        uint32_t group_id,
        bool is_success)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  PlayerGmComp *GmComp; // rax
  int v7; // xmm0_4
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  PlayerBasicComp *BasicComp; // rax
  float cool_down_success; // xmm0_4
  char *v11; // rsi
  std::unordered_map<unsigned int,WidgetCoolDownInfo>::mapped_type *v12; // rax
  float v13; // xmm0_4
  unsigned __int64 v14; // rax
  float cool_down_seconds; // [rsp+1Ch] [rbp-B4h]
  uint64_t cur_time_ms; // [rsp+20h] [rbp-B0h]
  const data::ConfigWidgetCdGroup *cd_gourp_config_ptr; // [rsp+28h] [rbp-A8h]
  WidgetCoolDownInfo *cool_down_info; // [rsp+30h] [rbp-A0h]
  std::shared_ptr<Config> v20; // [rsp+40h] [rbp-90h] BYREF
  common::milog::MiLogStream v21; // [rsp+50h] [rbp-80h] BYREF
  char v22[96]; // [rsp+70h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 13 group_id:1224";
  *(_QWORD *)(v3 + 16) = PlayerWidgetComp::updateWidgetGroupCoolDown;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = group_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  GmComp = Player::getGmComp(this->player_);
  if ( PlayerGmComp::getGmSetValue<bool>(GmComp, 0) )
  {
    PlayerWidgetComp::sendCoolDownNotify(this, *(_DWORD *)(v3 + 32), 1, 0LL, is_success);
  }
  else
  {
    cur_time_ms = common::tools::TimeUtils::getNowMs();
    if ( is_success )
      *(float *)&v7 = 60.0;
    else
      *(float *)&v7 = 5.0;
    cool_down_seconds = *(float *)&v7;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v20);
    v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v20);
    cd_gourp_config_ptr = JsonConfigMgr::queryCoolDownGroupConfig(
                            &v8->design_config.json_config_mgr,
                            *(_DWORD *)(v3 + 32));
    std::shared_ptr<Config>::~shared_ptr(&v20);
    if ( cd_gourp_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)cd_gourp_config_ptr >> 3) + 0x7FFF8000) != 0
        && ((unsigned __int8)cd_gourp_config_ptr & 7) >= *(_BYTE *)(((unsigned __int64)cd_gourp_config_ptr >> 3)
                                                                  + 0x7FFF8000) )
      {
        __asan_report_load1(cd_gourp_config_ptr);
      }
      if ( cd_gourp_config_ptr->is_under_time_scale )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        BasicComp = Player::getBasicComp(this->player_);
        cur_time_ms = PlayerBasicComp::getPlayerTimeMs(BasicComp);
      }
      if ( is_success )
      {
        if ( *(_BYTE *)(((unsigned __int64)&cd_gourp_config_ptr->cool_down_success >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)cd_gourp_config_ptr + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cd_gourp_config_ptr->cool_down_success >> 3)
                                                                            + 0x7FFF8000) )
        {
          __asan_report_load4(&cd_gourp_config_ptr->cool_down_success);
        }
        cool_down_success = cd_gourp_config_ptr->cool_down_success;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&cd_gourp_config_ptr->cool_down_fail >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)cd_gourp_config_ptr + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cd_gourp_config_ptr->cool_down_fail >> 3)
                                                                            + 0x7FFF8000) )
        {
          __asan_report_load4(&cd_gourp_config_ptr->cool_down_fail);
        }
        cool_down_success = cd_gourp_config_ptr->cool_down_fail;
      }
      cool_down_seconds = cool_down_success;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/widget/player_widget_comp.cpp",
        "updateWidgetGroupCoolDown",
        1247);
      common::milog::MiLogStream::operator()(
        &v21,
        "cool down group(%u) json config not found",
        *(unsigned int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v21);
    }
    v11 = (char *)(v3 + 32);
    v12 = std::unordered_map<unsigned int,WidgetCoolDownInfo>::operator[](
            &this->group_cool_down_info_map_,
            (const std::unordered_map<unsigned int,WidgetCoolDownInfo>::key_type *)(v3 + 32));
    cool_down_info = v12;
    if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      __asan_report_store8(v12, v11);
    cool_down_info->last_use_time = cur_time_ms;
    if ( *(char *)(((unsigned __int64)&cool_down_info->is_success >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&cool_down_info->is_success, v11, &cool_down_info->is_success);
    cool_down_info->is_success = is_success;
    v13 = 1000.0 * cool_down_seconds;
    if ( (float)(1000.0 * cool_down_seconds) >= 9.223372e18 )
      v14 = (unsigned int)(int)(float)(v13 - 9.223372e18) ^ 0x8000000000000000LL;
    else
      v14 = (unsigned int)(int)v13;
    PlayerWidgetComp::sendCoolDownNotify(this, *(_DWORD *)(v3 + 32), 1, cur_time_ms + v14, is_success);
  }
  if ( v22 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1260: range 00000000143AA8C0-00000000143AABF7
void __cdecl PlayerWidgetComp::sendCoolDownNotify(
        PlayerWidgetComp *const this,
        uint32_t id,
        bool is_group_cd,
        uint64_t cool_down_time_ms,
        bool is_succ)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  unsigned __int64 v7; // r13
  std::__shared_ptr_access<proto::WidgetCoolDownNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  proto::WidgetCoolDownData *v9; // rax
  Player *player; // r14
  proto::WidgetCoolDownData *cool_down_data_msg_ptr; // [rsp+28h] [rbp-A8h]
  std::shared_ptr<proto::WidgetCoolDownNotify> __r; // [rsp+30h] [rbp-A0h] BYREF
  common::milog::MiLogStream v16; // [rsp+40h] [rbp-90h] BYREF
  char v17[112]; // [rsp+60h] [rbp-70h] BYREF

  v5 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_0(64LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 16 15 notify_ptr:1261";
  *(_QWORD *)(v5 + 16) = PlayerWidgetComp::sendCoolDownNotify;
  v7 = v5 >> 3;
  *(_DWORD *)(v7 + 2147450880) = -235802127;
  *(_DWORD *)(v7 + 2147450884) = -202178560;
  common::tools::perf::make_shared<proto::WidgetCoolDownNotify>();
  if ( std::operator==<proto::WidgetCoolDownNotify>(
         0LL,
         (const std::shared_ptr<proto::WidgetCoolDownNotify> *)(v5 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/widget/player_widget_comp.cpp",
      "sendCoolDownNotify",
      1264);
    common::milog::MiLogStream::operator()(&v16, "create WidgetCoolDownNotify nullptr");
    common::milog::MiLogStream::~MiLogStream(&v16);
  }
  else
  {
    v8 = std::__shared_ptr_access<proto::WidgetCoolDownNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::WidgetCoolDownNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 32));
    if ( is_group_cd )
      v9 = proto::WidgetCoolDownNotify::add_group_cool_down_data_list(v8);
    else
      v9 = proto::WidgetCoolDownNotify::add_normal_cool_down_data_list(v8);
    cool_down_data_msg_ptr = v9;
    if ( v9 )
    {
      proto::WidgetCoolDownData::set_id(v9, id);
      proto::WidgetCoolDownData::set_cool_down_time(cool_down_data_msg_ptr, cool_down_time_ms);
      proto::WidgetCoolDownData::set_is_success(cool_down_data_msg_ptr, is_succ);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      player = this->player_;
      std::dynamic_pointer_cast<google::protobuf::Message const,proto::WidgetCoolDownNotify>(&__r);
      Player::sendMessage(player, (common::minet::ConstMessagePtr *)&__r, 0LL);
      std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&__r);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/widget/player_widget_comp.cpp",
        "sendCoolDownNotify",
        1271);
      common::milog::MiLogStream::operator()(&v16, off_2532B100);
      common::milog::MiLogStream::~MiLogStream(&v16);
    }
  }
  std::shared_ptr<proto::WidgetCoolDownNotify>::~shared_ptr((std::shared_ptr<proto::WidgetCoolDownNotify> *const)(v5 + 32));
  if ( v17 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1281: range 00000000143AABF8-00000000143AADDE
int32_t __cdecl PlayerWidgetComp::onClientReport(
        PlayerWidgetComp *const this,
        const proto::WidgetReportReq *req,
        proto::WidgetReportRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rdx
  int32_t result; // eax
  int32_t ret_code; // [rsp+28h] [rbp-78h]
  uint32_t material_id; // [rsp+2Ch] [rbp-74h]
  char v12[112]; // [rsp+30h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 15 widget_ptr:1286";
  *(_QWORD *)(v3 + 16) = PlayerWidgetComp::onClientReport;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  material_id = proto::WidgetReportReq::material_id(req);
  PlayerWidgetComp::findBaseWidget((PlayerWidgetComp *const)(v3 + 32), (uint32_t)this);
  if ( std::operator==<WidgetBase>(0LL, (const std::shared_ptr<WidgetBase> *)(v3 + 32)) )
  {
    ret_code = 684;
  }
  else
  {
    v6 = (unsigned __int64)std::__shared_ptr_access<WidgetBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<WidgetBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      v6 = __asan_report_load8(v6);
    v7 = *(_QWORD *)v6 + 112LL;
    if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
      v6 = __asan_report_load8(*(_QWORD *)v6 + 112LL);
    ret_code = (*(__int64 (__fastcall **)(unsigned __int64, const proto::WidgetReportReq *))v7)(v6, req);
  }
  std::shared_ptr<WidgetBase>::~shared_ptr((std::shared_ptr<WidgetBase> *const)(v3 + 32));
  proto::WidgetReportRsp::set_material_id(rsp_0, material_id);
  proto::WidgetReportRsp::set_retcode(rsp_0, ret_code);
  result = ret_code;
  if ( v12 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1302: range 00000000143AADE0-00000000143AB357
void __cdecl PlayerWidgetComp::packCoolDownInfo(
        const PlayerWidgetComp *const this,
        proto::AllWidgetDataNotify *notify,
        bool is_group_cd)
{
  std::unordered_map<unsigned int,WidgetCoolDownInfo> *p_group_cool_down_info_map; // rax
  google::protobuf::RepeatedPtrField<proto::WidgetCoolDownData> *v4; // rax
  int v5; // xmm0_4
  JsonConfigMgr *p_json_config_mgr; // rcx
  float cool_down_success; // xmm0_4
  float v8; // xmm0_4
  unsigned __int64 v9; // rax
  float cool_down_seconds; // [rsp+2Ch] [rbp-94h]
  std::unordered_map<unsigned int,WidgetCoolDownInfo>::const_iterator __for_begin; // [rsp+30h] [rbp-90h] BYREF
  std::unordered_map<unsigned int,WidgetCoolDownInfo>::const_iterator __for_end; // [rsp+38h] [rbp-88h] BYREF
  const std::unordered_map<unsigned int,WidgetCoolDownInfo> *cool_down_info_map; // [rsp+40h] [rbp-80h]
  google::protobuf::RepeatedPtrField<proto::WidgetCoolDownData> *msg_data_list; // [rsp+48h] [rbp-78h]
  const std::unordered_map<unsigned int,WidgetCoolDownInfo> *__for_range; // [rsp+50h] [rbp-70h]
  const std::pair<unsigned int const,WidgetCoolDownInfo> *v17; // [rsp+58h] [rbp-68h]
  std::tuple_element<0,const std::pair<unsigned int const,WidgetCoolDownInfo> >::type *id; // [rsp+60h] [rbp-60h]
  std::tuple_element<1,const std::pair<unsigned int const,WidgetCoolDownInfo> >::type *info; // [rsp+68h] [rbp-58h]
  proto::WidgetCoolDownData *new_msg_data; // [rsp+70h] [rbp-50h]
  const data::ConfigWidgetCdGroup *cd_gourp_config_ptr; // [rsp+78h] [rbp-48h]
  std::shared_ptr<Config> v22; // [rsp+80h] [rbp-40h] BYREF
  common::milog::MiLogStream v23; // [rsp+90h] [rbp-30h] BYREF

  if ( is_group_cd )
    p_group_cool_down_info_map = &this->group_cool_down_info_map_;
  else
    p_group_cool_down_info_map = &this->normal_cool_down_info_map_;
  cool_down_info_map = p_group_cool_down_info_map;
  if ( is_group_cd )
    v4 = proto::AllWidgetDataNotify::mutable_cool_down_group_data_list(notify);
  else
    v4 = proto::AllWidgetDataNotify::mutable_normal_cool_down_data_list(notify);
  msg_data_list = v4;
  __for_range = cool_down_info_map;
  __for_begin._M_cur = std::unordered_map<unsigned int,WidgetCoolDownInfo>::begin(cool_down_info_map)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,WidgetCoolDownInfo>::end(cool_down_info_map)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,WidgetCoolDownInfo>,false>(&__for_begin, &__for_end) )
  {
    v17 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,WidgetCoolDownInfo>,false,false>::operator*(&__for_begin);
    id = std::get<0ul,unsigned int const,WidgetCoolDownInfo>(v17);
    info = (std::tuple_element<1,const std::pair<unsigned int const,WidgetCoolDownInfo> >::type *)std::get<1ul,unsigned int const,WidgetCoolDownInfo>(v17);
    new_msg_data = google::protobuf::RepeatedPtrField<proto::WidgetCoolDownData>::Add(msg_data_list);
    if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(id);
    }
    proto::WidgetCoolDownData::set_id(new_msg_data, *id);
    if ( *(char *)(((unsigned __int64)&info->is_success >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&info->is_success);
    if ( info->is_success )
      *(float *)&v5 = 60.0;
    else
      *(float *)&v5 = 5.0;
    cool_down_seconds = *(float *)&v5;
    if ( is_group_cd )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v22);
      p_json_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v22)->design_config.json_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(id);
      }
      cd_gourp_config_ptr = JsonConfigMgr::queryCoolDownGroupConfig(p_json_config_mgr, *id);
      std::shared_ptr<Config>::~shared_ptr(&v22);
      if ( cd_gourp_config_ptr )
      {
        if ( *(char *)(((unsigned __int64)&info->is_success >> 3) + 0x7FFF8000) < 0 )
          __asan_report_load1(&info->is_success);
        if ( info->is_success )
        {
          if ( *(_BYTE *)(((unsigned __int64)&cd_gourp_config_ptr->cool_down_success >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)cd_gourp_config_ptr + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cd_gourp_config_ptr->cool_down_success >> 3)
                                                                              + 0x7FFF8000) )
          {
            __asan_report_load4(&cd_gourp_config_ptr->cool_down_success);
          }
          cool_down_success = cd_gourp_config_ptr->cool_down_success;
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&cd_gourp_config_ptr->cool_down_fail >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)cd_gourp_config_ptr + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cd_gourp_config_ptr->cool_down_fail >> 3)
                                                                              + 0x7FFF8000) )
          {
            __asan_report_load4(&cd_gourp_config_ptr->cool_down_fail);
          }
          cool_down_success = cd_gourp_config_ptr->cool_down_fail;
        }
        cool_down_seconds = cool_down_success;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v23,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/widget/player_widget_comp.cpp",
          "packCoolDownInfo",
          1319);
        if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(id);
        }
        common::milog::MiLogStream::operator()(&v23, "cool down group(%u) json config not found", *id);
        common::milog::MiLogStream::~MiLogStream(&v23);
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/widget/player_widget_comp.cpp",
        "packCoolDownInfo",
        1324);
      if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(id);
      }
      common::milog::MiLogStream::operator()(&v23, "cool down json config not found for widget %u", *id);
      common::milog::MiLogStream::~MiLogStream(&v23);
    }
    if ( *(_BYTE *)(((unsigned __int64)info >> 3) + 0x7FFF8000) )
      __asan_report_load8(info);
    v8 = 1000.0 * cool_down_seconds;
    if ( (float)(1000.0 * cool_down_seconds) >= 9.223372e18 )
      v9 = (unsigned int)(int)(float)(v8 - 9.223372e18) ^ 0x8000000000000000LL;
    else
      v9 = (unsigned int)(int)v8;
    proto::WidgetCoolDownData::set_cool_down_time(new_msg_data, v9 + info->last_use_time);
    if ( *(char *)(((unsigned __int64)&info->is_success >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&info->is_success);
    proto::WidgetCoolDownData::set_is_success(new_msg_data, info->is_success);
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,WidgetCoolDownInfo>,false,false>::operator++(&__for_begin);
  }
};

// Line 1332: range 00000000143AB358-00000000143AB5EB
int32_t __cdecl PlayerWidgetComp::setClientDetectorCoolDownResult(
        PlayerWidgetComp *const this,
        uint32_t material_id,
        bool is_success)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  uint32_t WidgetNewConfig; // eax
  int32_t v8; // r14d
  std::__shared_ptr_access<data::ConfigWidgetToyClintDetector,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  int32_t result; // eax
  std::shared_ptr<Config> v12; // [rsp+10h] [rbp-B0h] BYREF
  std::shared_ptr<data::ConfigBaseWidgetToy> v13; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v14; // [rsp+30h] [rbp-90h] BYREF
  char v15[112]; // [rsp+50h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 24 detector_config_ptr:1333";
  *(_QWORD *)(v3 + 16) = PlayerWidgetComp::setClientDetectorCoolDownResult;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v12);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v12);
  WidgetNewConfig = (unsigned int)JsonConfigMgr::getWidgetNewConfig(&v6->design_config.json_config_mgr);
  WidgetJsonNewConfig::findWidgetConfigById((const WidgetJsonNewConfig *const)&v13, WidgetNewConfig);
  std::dynamic_pointer_cast<data::ConfigWidgetToyClintDetector,data::ConfigBaseWidgetToy>((const std::shared_ptr<data::ConfigBaseWidgetToy> *)(v3 + 32));
  std::shared_ptr<data::ConfigBaseWidgetToy>::~shared_ptr(&v13);
  std::shared_ptr<Config>::~shared_ptr(&v12);
  if ( std::operator==<data::ConfigWidgetToyClintDetector>(
         0LL,
         (const std::shared_ptr<data::ConfigWidgetToyClintDetector> *)(v3 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/widget/player_widget_comp.cpp",
      "setClientDetectorCoolDownResult",
      1336);
    common::milog::MiLogStream::operator()(&v14, "material_id=%u ConfigWidgetToyClintDetector null ptr.", material_id);
    common::milog::MiLogStream::~MiLogStream(&v14);
    v8 = 5;
  }
  else
  {
    v9 = std::__shared_ptr_access<data::ConfigWidgetToyClintDetector,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigWidgetToyClintDetector,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&v9->cd_group >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v9->cd_group >> 3) + 0x7FFF8000) <= 3 )
    {
      v9 = (std::__shared_ptr_access<data::ConfigWidgetToyClintDetector,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v9->cd_group);
    }
    PlayerWidgetComp::updateWidgetGroupCoolDown(this, v9->cd_group, is_success);
    v8 = 0;
  }
  std::shared_ptr<data::ConfigWidgetToyClintDetector>::~shared_ptr((std::shared_ptr<data::ConfigWidgetToyClintDetector> *const)(v3 + 32));
  result = v8;
  if ( v15 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1345: range 00000000143AB64A-00000000143AB826
void __cdecl PlayerWidgetComp::notifyAllOneoffGatherPointDetectorData(PlayerWidgetComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::function<ForeachPolicy(WidgetOneoffGatherPointDetector&)> p_func; // [rsp+10h] [rbp-D0h] BYREF
  char v5[176]; // [rsp+30h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 48 48 11 notify:1346";
  *(_QWORD *)(v1 + 16) = PlayerWidgetComp::notifyAllOneoffGatherPointDetectorData;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862723] = -202116109;
  proto::OneoffGatherPointDetectorDataNotify::OneoffGatherPointDetectorDataNotify((proto::OneoffGatherPointDetectorDataNotify *const)(v1 + 48));
  std::function<ForeachPolicy ()(WidgetOneoffGatherPointDetector &)>::function<PlayerWidgetComp::notifyAllOneoffGatherPointDetectorData(void)::{lambda(WidgetOneoffGatherPointDetector &)#1},void,void>(
    &p_func,
    (PlayerWidgetComp::notifyAllOneoffGatherPointDetectorData::<lambda(WidgetOneoffGatherPointDetector&)>)__PAIR128__(v1 + 48, (unsigned __int64)this));
  PlayerWidgetComp::foreachWidget<WidgetOneoffGatherPointDetector>(this, &p_func);
  std::function<ForeachPolicy ()(WidgetOneoffGatherPointDetector &)>::~function(&p_func);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Player::sendProto(this->player_, (const google::protobuf::Message *)(v1 + 48));
  proto::OneoffGatherPointDetectorDataNotify::~OneoffGatherPointDetectorDataNotify((proto::OneoffGatherPointDetectorDataNotify *const)(v1 + 48));
  if ( v5 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1347: range 00000000143AB5EC-00000000143AB649
ForeachPolicy __cdecl PlayerWidgetComp::notifyAllOneoffGatherPointDetectorData(void)::{lambda(WidgetOneoffGatherPointDetector &)#1}::operator()(
        const PlayerWidgetComp::notifyAllOneoffGatherPointDetectorData::<lambda(WidgetOneoffGatherPointDetector&)> *const __closure,
        WidgetOneoffGatherPointDetector *widget)
{
  proto::OneoffGatherPointDetectorData *v2; // rdx

  if ( *(_BYTE *)(((unsigned __int64)&__closure->__notify >> 3) + 0x7FFF8000) )
    __asan_report_load8(&__closure->__notify);
  v2 = proto::OneoffGatherPointDetectorDataNotify::add_oneoff_gather_point_detector_data_list(__closure->__notify);
  WidgetOneoffGatherPointDetector::fillClientData(widget, v2);
  return 0;
};

// Line 1356: range 00000000143AB828-00000000143ABE8B
__int64 __fastcall PlayerWidgetComp::checkWidgetOccupyTagConflict(
        PlayerWidgetComp *const this,
        uint32_t target_matrial_id,
        uint32_t old_material_id)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  unsigned int v6; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  uint32_t WidgetNewConfig; // eax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  uint32_t v12; // eax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  std::__shared_ptr_access<data::ConfigBaseWidgetToy,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  data::WidgetOccupyTag *M_current; // r14
  std::__shared_ptr_access<data::ConfigBaseWidgetToy,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  std::vector<data::WidgetOccupyTag>::iterator v18; // rax
  std::__shared_ptr_access<data::ConfigBaseWidgetToy,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  data::WidgetOccupyTag *v20; // r14
  std::__shared_ptr_access<data::ConfigBaseWidgetToy,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  std::vector<data::WidgetOccupyTag>::iterator v22; // rax
  std::set<data::WidgetOccupyTag>::iterator v23; // rax
  std::insert_iterator<std::set<data::WidgetOccupyTag> > v24; // rax
  std::set<data::WidgetOccupyTag> *container; // r14
  const std::_Rb_tree_node_base *M_node; // r15
  std::set<data::WidgetOccupyTag>::iterator v27; // rax
  std::insert_iterator<std::set<data::WidgetOccupyTag> > v28; // r8
  __int64 result; // rax
  std::_Rb_tree_const_iterator<data::WidgetOccupyTag>::_Base_ptr __last2; // [rsp+8h] [rbp-208h]
  std::_Rb_tree_const_iterator<data::WidgetOccupyTag>::_Base_ptr __first2; // [rsp+10h] [rbp-200h]
  std::_Rb_tree_const_iterator<data::WidgetOccupyTag>::_Base_ptr __last1; // [rsp+18h] [rbp-1F8h]
  std::shared_ptr<Config> v34; // [rsp+30h] [rbp-1E0h] BYREF
  common::milog::MiLogStream v35; // [rsp+40h] [rbp-1D0h] BYREF
  char v36[432]; // [rsp+60h] [rbp-1B0h] BYREF

  v3 = (unsigned __int64)v36;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(384LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "7 48 4 22 target_matrial_id:1355 64 4 20 old_material_id:1355 80 16 29 target_widget_config_ptr:"
                        "1365 112 16 26 old_widget_config_ptr:1371 144 48 19 target_tag_set:1377 224 48 16 old_tag_set:13"
                        "78 304 48 17 intersection:1379";
  *(_QWORD *)(v3 + 16) = PlayerWidgetComp::checkWidgetOccupyTagConflict;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = 61956;
  v5[536862723] = 62194;
  v5[536862724] = 62194;
  v5[536862726] = -218959118;
  v5[536862728] = -219021312;
  v5[536862729] = 62194;
  v5[536862731] = -202116109;
  *(_DWORD *)(v3 + 48) = target_matrial_id;
  *(_DWORD *)(v3 + 64) = old_material_id;
  if ( *(_DWORD *)(v3 + 48) == *(_DWORD *)(v3 + 64) )
  {
    v6 = 0;
  }
  else if ( *(_DWORD *)(v3 + 64) )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v34);
    v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v34);
    WidgetNewConfig = (unsigned int)JsonConfigMgr::getWidgetNewConfig(&v7->design_config.json_config_mgr);
    WidgetJsonNewConfig::findWidgetConfigById((const WidgetJsonNewConfig *const)(v3 + 80), WidgetNewConfig);
    std::shared_ptr<Config>::~shared_ptr(&v34);
    if ( std::operator==<data::ConfigBaseWidgetToy>(0LL, (const std::shared_ptr<data::ConfigBaseWidgetToy> *)(v3 + 80)) )
    {
      common::milog::MiLogStream::create(
        &v35,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/widget/player_widget_comp.cpp",
        "checkWidgetOccupyTagConflict",
        1368);
      v9 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
             &v35,
             (const char (*)[20])"target_matrial_id: ");
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v10, (const char (*)[18])off_2532B460);
      common::milog::MiLogStream::~MiLogStream(&v35);
      v6 = -1;
    }
    else
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v34);
      v11 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v34);
      v12 = (unsigned int)JsonConfigMgr::getWidgetNewConfig(&v11->design_config.json_config_mgr);
      WidgetJsonNewConfig::findWidgetConfigById((const WidgetJsonNewConfig *const)(v3 + 112), v12);
      std::shared_ptr<Config>::~shared_ptr(&v34);
      if ( std::operator==<data::ConfigBaseWidgetToy>(
             0LL,
             (const std::shared_ptr<data::ConfigBaseWidgetToy> *)(v3 + 112)) )
      {
        common::milog::MiLogStream::create(
          &v35,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/widget/player_widget_comp.cpp",
          "checkWidgetOccupyTagConflict",
          1374);
        v13 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                &v35,
                (const char (*)[24])"old_widget_config_ptr: ");
        v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v13,
                (const unsigned int *)(v3 + 64));
        common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v14, (const char (*)[18])off_2532B460);
        common::milog::MiLogStream::~MiLogStream(&v35);
        v6 = -1;
      }
      else
      {
        v15 = std::__shared_ptr_access<data::ConfigBaseWidgetToy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigBaseWidgetToy,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
        M_current = std::vector<data::WidgetOccupyTag>::end(&v15->tags)._M_current;
        v17 = std::__shared_ptr_access<data::ConfigBaseWidgetToy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigBaseWidgetToy,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
        v18._M_current = std::vector<data::WidgetOccupyTag>::begin(&v17->tags)._M_current;
        std::set<data::WidgetOccupyTag>::set<__gnu_cxx::__normal_iterator<data::WidgetOccupyTag*,std::vector<data::WidgetOccupyTag>>>(
          (std::set<data::WidgetOccupyTag> *const)(v3 + 144),
          v18,
          (__gnu_cxx::__normal_iterator<data::WidgetOccupyTag*,std::vector<data::WidgetOccupyTag> >)M_current);
        v19 = std::__shared_ptr_access<data::ConfigBaseWidgetToy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigBaseWidgetToy,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112));
        v20 = std::vector<data::WidgetOccupyTag>::end(&v19->tags)._M_current;
        v21 = std::__shared_ptr_access<data::ConfigBaseWidgetToy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigBaseWidgetToy,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112));
        v22._M_current = std::vector<data::WidgetOccupyTag>::begin(&v21->tags)._M_current;
        std::set<data::WidgetOccupyTag>::set<__gnu_cxx::__normal_iterator<data::WidgetOccupyTag*,std::vector<data::WidgetOccupyTag>>>(
          (std::set<data::WidgetOccupyTag> *const)(v3 + 224),
          v22,
          (__gnu_cxx::__normal_iterator<data::WidgetOccupyTag*,std::vector<data::WidgetOccupyTag> >)v20);
        std::set<data::WidgetOccupyTag>::set((std::set<data::WidgetOccupyTag> *const)(v3 + 304));
        v23._M_node = std::set<data::WidgetOccupyTag>::begin((const std::set<data::WidgetOccupyTag> *const)(v3 + 304))._M_node;
        v24 = std::inserter<std::set<data::WidgetOccupyTag>,std::_Rb_tree_const_iterator<data::WidgetOccupyTag>>(
                (std::set<data::WidgetOccupyTag> *)(v3 + 304),
                v23);
        container = v24.container;
        M_node = v24.iter._M_node;
        __last2 = std::set<data::WidgetOccupyTag>::end((const std::set<data::WidgetOccupyTag> *const)(v3 + 224))._M_node;
        __first2 = std::set<data::WidgetOccupyTag>::begin((const std::set<data::WidgetOccupyTag> *const)(v3 + 224))._M_node;
        __last1 = std::set<data::WidgetOccupyTag>::end((const std::set<data::WidgetOccupyTag> *const)(v3 + 144))._M_node;
        v27._M_node = std::set<data::WidgetOccupyTag>::begin((const std::set<data::WidgetOccupyTag> *const)(v3 + 144))._M_node;
        v28.container = container;
        v28.iter._M_node = M_node;
        std::set_intersection<std::_Rb_tree_const_iterator<data::WidgetOccupyTag>,std::_Rb_tree_const_iterator<data::WidgetOccupyTag>,std::insert_iterator<std::set<data::WidgetOccupyTag>>>(
          v27,
          (std::_Rb_tree_const_iterator<data::WidgetOccupyTag>)__last1,
          (std::_Rb_tree_const_iterator<data::WidgetOccupyTag>)__first2,
          (std::_Rb_tree_const_iterator<data::WidgetOccupyTag>)__last2,
          v28);
        if ( std::set<data::WidgetOccupyTag>::empty((const std::set<data::WidgetOccupyTag> *const)(v3 + 304)) )
          v6 = 0;
        else
          v6 = -1;
        std::set<data::WidgetOccupyTag>::~set((std::set<data::WidgetOccupyTag> *const)(v3 + 304));
        std::set<data::WidgetOccupyTag>::~set((std::set<data::WidgetOccupyTag> *const)(v3 + 224));
        std::set<data::WidgetOccupyTag>::~set((std::set<data::WidgetOccupyTag> *const)(v3 + 144));
      }
      std::shared_ptr<data::ConfigBaseWidgetToy>::~shared_ptr((std::shared_ptr<data::ConfigBaseWidgetToy> *const)(v3 + 112));
    }
    std::shared_ptr<data::ConfigBaseWidgetToy>::~shared_ptr((std::shared_ptr<data::ConfigBaseWidgetToy> *const)(v3 + 80));
  }
  else
  {
    v6 = 0;
  }
  result = v6;
  if ( v36 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF802C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1386: range 00000000143ABE8C-00000000143ABFEB
int32_t __cdecl PlayerWidgetComp::onLogout(PlayerWidgetComp *const this)
{
  const std::pair<unsigned int const,std::shared_ptr<WidgetBase> > *v1; // rax
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rdx
  WidgetGadgetMgr *WidgetGadgetMgr; // rax
  std::map<unsigned int,std::shared_ptr<WidgetBase>>::iterator __for_begin; // [rsp+18h] [rbp-58h] BYREF
  std::map<unsigned int,std::shared_ptr<WidgetBase>>::iterator __for_end; // [rsp+20h] [rbp-50h] BYREF
  std::map<unsigned int,std::shared_ptr<WidgetBase>> *__for_range; // [rsp+28h] [rbp-48h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<WidgetBase> > >::type *material_id; // [rsp+30h] [rbp-40h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<WidgetBase> > >::type *widget_ptr; // [rsp+38h] [rbp-38h]
  std::pair<unsigned int const,std::shared_ptr<WidgetBase> > __in; // [rsp+40h] [rbp-30h] BYREF

  __for_range = &this->widget_pool_;
  __for_begin._M_node = std::map<unsigned int,std::shared_ptr<WidgetBase>>::begin(&this->widget_pool_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::shared_ptr<WidgetBase>>::end(&this->widget_pool_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v1 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<WidgetBase>>>::operator*(&__for_begin);
    std::pair<unsigned int const,std::shared_ptr<WidgetBase>>::pair(&__in, v1);
    material_id = std::get<0ul,unsigned int const,std::shared_ptr<WidgetBase>>(&__in);
    widget_ptr = std::get<1ul,unsigned int const,std::shared_ptr<WidgetBase>>(&__in);
    if ( std::operator!=<WidgetBase>(widget_ptr, 0LL) )
    {
      v2 = (unsigned __int64)std::__shared_ptr_access<WidgetBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<WidgetBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)widget_ptr);
      if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
        v2 = __asan_report_load8(v2);
      v3 = *(_QWORD *)v2 + 72LL;
      if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
        v2 = __asan_report_load8(*(_QWORD *)v2 + 72LL);
      (*(void (__fastcall **)(unsigned __int64))v3)(v2);
    }
    std::pair<unsigned int const,std::shared_ptr<WidgetBase>>::~pair(&__in);
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<WidgetBase>>>::operator++(&__for_begin);
  }
  WidgetGadgetMgr = PlayerWidgetComp::getWidgetGadgetMgr(this);
  WidgetGadgetMgr::onLogout(WidgetGadgetMgr);
  return 0;
};

// Line 1400: range 00000000143ABFEC-00000000143AC248
void __cdecl PlayerWidgetComp::checkAndModifyWidgetAnchorPointSceneId(PlayerWidgetComp *const this)
{
  GameserverService *v1; // rsi
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  uint32_t DefaultWorldMainSceneId; // edx
  char v4; // al
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rcx
  std::map<unsigned int,WidgetAnchorPointData>::iterator __for_begin; // [rsp+10h] [rbp-70h] BYREF
  std::map<unsigned int,WidgetAnchorPointData>::iterator __for_end; // [rsp+18h] [rbp-68h] BYREF
  std::map<unsigned int,WidgetAnchorPointData> *__for_range; // [rsp+20h] [rbp-60h]
  std::pair<unsigned int const,WidgetAnchorPointData> *__in; // [rsp+28h] [rbp-58h]
  std::tuple_element<0,std::pair<unsigned int const,WidgetAnchorPointData> >::type *_; // [rsp+30h] [rbp-50h]
  std::tuple_element<1,std::pair<unsigned int const,WidgetAnchorPointData> >::type *anchor_point_data; // [rsp+38h] [rbp-48h]
  std::shared_ptr<Config> v16; // [rsp+40h] [rbp-40h] BYREF
  common::milog::MiLogStream v17; // [rsp+50h] [rbp-30h] BYREF

  __for_range = &this->anchor_point_map_;
  __for_begin._M_node = std::map<unsigned int,WidgetAnchorPointData>::begin(&this->anchor_point_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,WidgetAnchorPointData>::end(&this->anchor_point_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<unsigned int const,WidgetAnchorPointData>>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,WidgetAnchorPointData>(__in);
    anchor_point_data = std::get<1ul,unsigned int const,WidgetAnchorPointData>(__in);
    if ( *(_BYTE *)(((unsigned __int64)&anchor_point_data->scene_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&anchor_point_data->scene_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&anchor_point_data->scene_id);
    }
    if ( !anchor_point_data->scene_id )
    {
      v1 = ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v16);
      v2 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v16);
      DefaultWorldMainSceneId = TxtConfigMgr::getDefaultWorldMainSceneId(&v2->design_config.txt_config_mgr);
      v4 = *(_BYTE *)(((unsigned __int64)&anchor_point_data->scene_id >> 3) + 0x7FFF8000);
      if ( v4 != 0 && v4 <= 3 )
      {
        LOBYTE(v1) = v4 != 0;
        __asan_report_store4(&anchor_point_data->scene_id, v1, DefaultWorldMainSceneId);
      }
      anchor_point_data->scene_id = DefaultWorldMainSceneId;
      std::shared_ptr<Config>::~shared_ptr(&v16);
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/widget/player_widget_comp.cpp",
        "checkAndModifyWidgetAnchorPointSceneId",
        1406);
      v5 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v17, (const char (*)[17])"anchor_point_id:");
      v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &anchor_point_data->id);
      v7 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v6, (const char (*)[18])" scene_id set to:");
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &anchor_point_data->scene_id);
      v9 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v8, (const char (*)[9])" player:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      operator<<(v9, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v17);
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,WidgetAnchorPointData>>::operator++(&__for_begin);
  }
};

// Line 1412: range 00000000143AC43E-00000000143AC63A
void __cdecl PlayerWidgetComp::onOneoffGatherCollected(
        PlayerWidgetComp *const this,
        uint32_t group_id,
        uint32_t config_id,
        uint32_t point_type)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  PlayerWidgetComp::onOneoffGatherCollected::<lambda(WidgetOneoffGatherPointDetector&)> v7; // [rsp-20h] [rbp-F0h]
  __int64 __f_8; // [rsp+38h] [rbp-98h]
  std::function<ForeachPolicy(WidgetOneoffGatherPointDetector&)> p_func; // [rsp+50h] [rbp-80h] BYREF
  char v12[96]; // [rsp+70h] [rbp-60h] BYREF
  PlayerWidgetComp::onOneoffGatherCollected::<lambda(WidgetLightStone&)> v13; // 0:rsi.8,8:edx.4

  v4 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 1 14 is_notify:1413";
  *(_QWORD *)(v4 + 16) = PlayerWidgetComp::onOneoffGatherCollected;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116351;
  *(_BYTE *)(v4 + 32) = 0;
  LODWORD(__f_8) = point_type;
  v7.__is_notify = (bool *)(v4 + 32);
  *(_QWORD *)&v7.__point_type = __f_8;
  *(_QWORD *)&v7.__group_id = __PAIR64__(config_id, group_id);
  std::function<ForeachPolicy ()(WidgetOneoffGatherPointDetector &)>::function<PlayerWidgetComp::onOneoffGatherCollected(unsigned int,unsigned int,unsigned int)::{lambda(WidgetOneoffGatherPointDetector &)#1},void,void>(
    &p_func,
    v7);
  PlayerWidgetComp::foreachWidget<WidgetOneoffGatherPointDetector>(this, &p_func);
  std::function<ForeachPolicy ()(WidgetOneoffGatherPointDetector &)>::~function(&p_func);
  if ( *(_BYTE *)(v4 + 32) )
    PlayerWidgetComp::notifyAllOneoffGatherPointDetectorData(this);
  v13.__point_type = point_type;
  *(_QWORD *)&v13.__group_id = __PAIR64__(config_id, group_id);
  std::function<ForeachPolicy ()(WidgetLightStone &)>::function<PlayerWidgetComp::onOneoffGatherCollected(unsigned int,unsigned int,unsigned int)::{lambda(WidgetLightStone &)#2},void,void>(
    (std::function<ForeachPolicy(WidgetLightStone&)> *const)&p_func,
    v13);
  PlayerWidgetComp::foreachWidget<WidgetLightStone>(this, (std::function<ForeachPolicy(WidgetLightStone&)> *)&p_func);
  std::function<ForeachPolicy ()(WidgetLightStone &)>::~function((std::function<ForeachPolicy(WidgetLightStone&)> *const)&p_func);
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

// Line 1414: range 00000000143AC24A-00000000143AC352
ForeachPolicy __cdecl PlayerWidgetComp::onOneoffGatherCollected(unsigned int,unsigned int,unsigned int)::{lambda(WidgetOneoffGatherPointDetector &)#1}::operator()(
        const PlayerWidgetComp::onOneoffGatherCollected::<lambda(WidgetOneoffGatherPointDetector&)> *const __closure,
        WidgetOneoffGatherPointDetector *widget)
{
  bool *is_notify; // rdi
  uint32_t point_type; // ecx
  uint32_t config_id; // edx

  if ( *(_BYTE *)(((unsigned __int64)&__closure->__is_notify >> 3) + 0x7FFF8000) )
    __asan_report_load8(&__closure->__is_notify);
  is_notify = __closure->__is_notify;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__point_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&__closure->__point_type >> 3) + 0x7FFF8000) <= 3 )
  {
    is_notify = (bool *)&__closure->__point_type;
    __asan_report_load4(&__closure->__point_type);
  }
  point_type = __closure->__point_type;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__config_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)__closure + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&__closure->__config_id >> 3)
                                                            + 0x7FFF8000) )
  {
    is_notify = (bool *)&__closure->__config_id;
    __asan_report_load4(&__closure->__config_id);
  }
  config_id = __closure->__config_id;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) <= 3 )
  {
    is_notify = (bool *)__closure;
    __asan_report_load4(__closure);
  }
  WidgetOneoffGatherPointDetector::onOneoffGatherCollected(
    widget,
    __closure->__group_id,
    config_id,
    point_type,
    is_notify);
  return 0;
};

// Line 1425: range 00000000143AC354-00000000143AC43D
ForeachPolicy __cdecl PlayerWidgetComp::onOneoffGatherCollected(unsigned int,unsigned int,unsigned int)::{lambda(WidgetLightStone &)#2}::operator()(
        const PlayerWidgetComp::onOneoffGatherCollected::<lambda(WidgetLightStone&)> *const __closure,
        WidgetLightStone *widget)
{
  uint32_t point_type; // ecx
  uint32_t config_id; // edi

  if ( *(_BYTE *)(((unsigned __int64)&__closure->__point_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)__closure + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&__closure->__point_type >> 3)
                                                            + 0x7FFF8000) )
  {
    __asan_report_load4(&__closure->__point_type);
  }
  point_type = __closure->__point_type;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__config_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)__closure + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&__closure->__config_id >> 3)
                                                            + 0x7FFF8000) )
  {
    __asan_report_load4(&__closure->__config_id);
  }
  config_id = __closure->__config_id;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)__closure & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
  {
    config_id = (unsigned int)__closure;
    __asan_report_load4(__closure);
  }
  WidgetLightStone::onOneoffGatherCollected(widget, __closure->__group_id, config_id, point_type);
  return 0;
};

// Line 1433: range 00000000143AC63C-00000000143AC927
void __fastcall PlayerWidgetComp::sendWidgetSlotChangeNotify(
        PlayerWidgetComp *const this,
        proto::WidgetSlotOp op,
        proto::WidgetSlotTag tag,
        uint32_t material_id,
        uint32_t cd_over_time)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<WidgetBase> > >::pointer v8; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<WidgetBase> > >::pointer v10; // rax
  WidgetBase *v11; // rax
  bool isActive; // al
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<WidgetBase> > >::_Self __y; // [rsp+20h] [rbp-D0h] BYREF
  proto::WidgetSlotData *slot_proto; // [rsp+28h] [rbp-C8h]
  char v18[192]; // [rsp+30h] [rbp-C0h] BYREF

  v5 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(160LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "3 48 4 16 material_id:1432 64 8 14 pool_iter:1440 96 32 11 notify:1434";
  *(_QWORD *)(v5 + 16) = PlayerWidgetComp::sendWidgetSlotChangeNotify;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -218959360;
  v7[536862724] = -202116109;
  *(_DWORD *)(v5 + 48) = material_id;
  proto::WidgetSlotChangeNotify::WidgetSlotChangeNotify((proto::WidgetSlotChangeNotify *const)(v5 + 96));
  proto::WidgetSlotChangeNotify::set_op((proto::WidgetSlotChangeNotify *const)(v5 + 96), op);
  slot_proto = proto::WidgetSlotChangeNotify::mutable_slot((proto::WidgetSlotChangeNotify *const)(v5 + 96));
  proto::WidgetSlotData::set_tag(slot_proto, tag);
  proto::WidgetSlotData::set_material_id(slot_proto, *(_DWORD *)(v5 + 48));
  *(std::map<unsigned int,std::shared_ptr<WidgetBase>>::iterator *)(v5 + 64) = std::map<unsigned int,std::shared_ptr<WidgetBase>>::find(
                                                                                 &this->widget_pool_,
                                                                                 (const std::map<unsigned int,std::shared_ptr<WidgetBase>>::key_type *)(v5 + 48));
  __y._M_node = std::map<unsigned int,std::shared_ptr<WidgetBase>>::end(&this->widget_pool_)._M_node;
  if ( std::operator!=(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<WidgetBase> > >::_Self *)(v5 + 64),
         &__y)
    && (v8 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<WidgetBase>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<WidgetBase> > > *const)(v5 + 64)),
        std::operator!=<WidgetBase>(&v8->second, 0LL)) )
  {
    v10 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<WidgetBase>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<WidgetBase> > > *const)(v5 + 64));
    v11 = std::__shared_ptr_access<WidgetBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<WidgetBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v10->second);
    isActive = WidgetBase::isActive(v11);
    proto::WidgetSlotData::set_is_active(slot_proto, isActive);
  }
  else
  {
    proto::WidgetSlotData::set_is_active(slot_proto, 1);
  }
  proto::WidgetSlotData::set_cd_over_time(slot_proto, cd_over_time);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Player::sendProto(this->player_, (const google::protobuf::Message *)(v5 + 96));
  proto::WidgetSlotChangeNotify::~WidgetSlotChangeNotify((proto::WidgetSlotChangeNotify *const)(v5 + 96));
  if ( v18 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 1457: range 00000000143AC928-00000000143ACD2D
void __fastcall PlayerWidgetComp::addOnePackSlotInfo(
        const PlayerWidgetComp *const this,
        google::protobuf::RepeatedPtrField<proto::WidgetSlotData> *widget_slot_data_list,
        proto::WidgetSlotTag tag)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  WidgetBase *v8; // rax
  uint32_t MaterialId; // eax
  WidgetBase *v10; // rax
  bool isActive; // al
  std::map<data::WidgetOccupyTag,std::weak_ptr<WidgetBase>>::key_type __x; // [rsp+2Ch] [rbp-D4h] BYREF
  std::_Rb_tree_const_iterator<std::pair<const data::WidgetOccupyTag,std::weak_ptr<WidgetBase> > >::_Self __y; // [rsp+30h] [rbp-D0h] BYREF
  proto::WidgetSlotData *slot_data; // [rsp+38h] [rbp-C8h]
  common::milog::MiLogStream v16; // [rsp+40h] [rbp-C0h] BYREF
  char v17[160]; // [rsp+60h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 8 tag:1456 64 8 14 slot_iter:1460 96 16 15 widget_ptr:1482";
  *(_QWORD *)(v3 + 16) = PlayerWidgetComp::addOnePackSlotInfo;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202178560;
  *(_DWORD *)(v3 + 48) = tag;
  slot_data = google::protobuf::RepeatedPtrField<proto::WidgetSlotData>::Add(widget_slot_data_list);
  proto::WidgetSlotData::set_tag(slot_data, *(proto::WidgetSlotTag *)(v3 + 48));
  *(std::map<data::WidgetOccupyTag,std::weak_ptr<WidgetBase>>::const_iterator *)(v3 + 64) = std::map<data::WidgetOccupyTag,std::weak_ptr<WidgetBase>>::end(&this->widget_slot_map_);
  if ( *(_DWORD *)(v3 + 48) )
  {
    if ( *(_DWORD *)(v3 + 48) != 1 )
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/widget/player_widget_comp.cpp",
        "addOnePackSlotInfo",
        1471);
      v6 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(&v16, (const char (*)[41])off_2532B680);
      common::milog::MiLogStream::operator<<<proto::WidgetSlotTag,(proto::WidgetSlotTag*)0>(
        v6,
        (const proto::WidgetSlotTag *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v16);
      goto LABEL_15;
    }
    __x = FlyAttach;
    *(std::map<data::WidgetOccupyTag,std::weak_ptr<WidgetBase>>::const_iterator *)(v3 + 64) = std::map<data::WidgetOccupyTag,std::weak_ptr<WidgetBase>>::find(
                                                                                                &this->widget_slot_map_,
                                                                                                &__x);
  }
  else
  {
    __x = ActionPanel;
    *(std::map<data::WidgetOccupyTag,std::weak_ptr<WidgetBase>>::const_iterator *)(v3 + 64) = std::map<data::WidgetOccupyTag,std::weak_ptr<WidgetBase>>::find(
                                                                                                &this->widget_slot_map_,
                                                                                                &__x);
  }
  __y._M_node = std::map<data::WidgetOccupyTag,std::weak_ptr<WidgetBase>>::end(&this->widget_slot_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<const data::WidgetOccupyTag,std::weak_ptr<WidgetBase> > >::_Self *)(v3 + 64),
         &__y) )
  {
    proto::WidgetSlotData::set_material_id(slot_data, 0);
    proto::WidgetSlotData::set_is_active(slot_data, 0);
  }
  else
  {
    std::_Rb_tree_const_iterator<std::pair<data::WidgetOccupyTag const,std::weak_ptr<WidgetBase>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::WidgetOccupyTag,std::weak_ptr<WidgetBase> > > *const)(v3 + 64));
    std::weak_ptr<WidgetBase>::lock((const std::weak_ptr<WidgetBase> *const)(v3 + 96));
    if ( std::operator==<WidgetBase>((const std::shared_ptr<WidgetBase> *)(v3 + 96), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/widget/player_widget_comp.cpp",
        "addOnePackSlotInfo",
        1485);
      v7 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
             &v16,
             (const char (*)[53])"slot widget found, but widget_ptr is nullptr, tag = ");
      common::milog::MiLogStream::operator<<<proto::WidgetSlotTag,(proto::WidgetSlotTag*)0>(
        v7,
        (const proto::WidgetSlotTag *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v16);
      proto::WidgetSlotData::set_material_id(slot_data, 0);
      proto::WidgetSlotData::set_is_active(slot_data, 0);
    }
    else
    {
      v8 = std::__shared_ptr_access<WidgetBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<WidgetBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      MaterialId = WidgetBase::getMaterialId(v8);
      proto::WidgetSlotData::set_material_id(slot_data, MaterialId);
      v10 = std::__shared_ptr_access<WidgetBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<WidgetBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      isActive = WidgetBase::isActive(v10);
      proto::WidgetSlotData::set_is_active(slot_data, isActive);
    }
    std::shared_ptr<WidgetBase>::~shared_ptr((std::shared_ptr<WidgetBase> *const)(v3 + 96));
  }
LABEL_15:
  if ( v17 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1498: range 00000000143ACD2E-00000000143ACD70
void __cdecl PlayerWidgetComp::packSlotInfo(
        const PlayerWidgetComp *const this,
        google::protobuf::RepeatedPtrField<proto::WidgetSlotData> *repeated)
{
  PlayerWidgetComp::addOnePackSlotInfo(this, repeated, WIDGET_SLOT_QUICK_USE);
  PlayerWidgetComp::addOnePackSlotInfo(this, repeated, WIDGET_SLOT_ATTACH_AVATAR);
};

// Line 1504: range 00000000143ACD72-00000000143AD05C
void __cdecl PlayerWidgetComp::checkAndRepairAttachAbilityGroupWidget(PlayerWidgetComp *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  WidgetBase *v4; // rax
  common::milog::MiLogStream *v5; // rax
  std::__shared_ptr_access<WidgetAttachAbilityGroup,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream v7; // [rsp+10h] [rbp-D0h] BYREF
  char v8[176]; // [rsp+30h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 4 16 material_id:1511 64 16 15 widget_ptr:1505 96 16 36 attach_ability_group_widget_ptr:1517";
  *(_QWORD *)(v1 + 16) = PlayerWidgetComp::checkAndRepairAttachAbilityGroupWidget;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -219021312;
  v3[536862723] = -202178560;
  PlayerWidgetComp::getActionPanelWidget((const PlayerWidgetComp *const)(v1 + 64));
  if ( std::operator==<WidgetBase>(0LL, (const std::shared_ptr<WidgetBase> *)(v1 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/widget/player_widget_comp.cpp",
      "checkAndRepairAttachAbilityGroupWidget",
      1508);
    common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(&v7, (const char (*)[22])"widget_ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v7);
  }
  else
  {
    v4 = std::__shared_ptr_access<WidgetBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<WidgetBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
    *(_DWORD *)(v1 + 48) = WidgetBase::getMaterialId(v4);
    if ( *(_DWORD *)(v1 + 48) )
    {
      std::dynamic_pointer_cast<WidgetAttachAbilityGroup,WidgetBase>((const std::shared_ptr<WidgetBase> *)(v1 + 96));
      if ( std::operator==<WidgetAttachAbilityGroup>((const std::shared_ptr<WidgetAttachAbilityGroup> *)(v1 + 96), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v7,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/widget/player_widget_comp.cpp",
          "checkAndRepairAttachAbilityGroupWidget",
          1520);
        v5 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
               &v7,
               (const char (*)[54])"convert WidgetAttachAbilityGroup failed, material_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 48));
        common::milog::MiLogStream::~MiLogStream(&v7);
      }
      else
      {
        v6 = std::__shared_ptr_access<WidgetAttachAbilityGroup,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<WidgetAttachAbilityGroup,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
        WidgetAttachAbilityGroup::checkAndRepairAttachAbilityGroupWidget(v6);
      }
      std::shared_ptr<WidgetAttachAbilityGroup>::~shared_ptr((std::shared_ptr<WidgetAttachAbilityGroup> *const)(v1 + 96));
    }
  }
  std::shared_ptr<WidgetBase>::~shared_ptr((std::shared_ptr<WidgetBase> *const)(v1 + 64));
  if ( v8 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1527: range 00000000143AD05E-00000000143AD336
void __cdecl PlayerWidgetComp::takeoffUseAttachAbilityGroupWidget(PlayerWidgetComp *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  WidgetBase *v4; // rax
  common::milog::MiLogStream *v5; // rax
  std::__shared_ptr_access<WidgetAttachAbilityGroup,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream v7; // [rsp+10h] [rbp-D0h] BYREF
  char v8[176]; // [rsp+30h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 4 16 material_id:1534 64 16 15 widget_ptr:1528 96 16 36 attach_ability_group_widget_ptr:1536";
  *(_QWORD *)(v1 + 16) = PlayerWidgetComp::takeoffUseAttachAbilityGroupWidget;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -219021312;
  v3[536862723] = -202178560;
  PlayerWidgetComp::getActionPanelWidget((const PlayerWidgetComp *const)(v1 + 64));
  if ( std::operator==<WidgetBase>(0LL, (const std::shared_ptr<WidgetBase> *)(v1 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/widget/player_widget_comp.cpp",
      "takeoffUseAttachAbilityGroupWidget",
      1531);
    common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(&v7, (const char (*)[22])"widget_ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v7);
  }
  else
  {
    v4 = std::__shared_ptr_access<WidgetBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<WidgetBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
    *(_DWORD *)(v1 + 48) = WidgetBase::getMaterialId(v4);
    std::dynamic_pointer_cast<WidgetAttachAbilityGroup,WidgetBase>((const std::shared_ptr<WidgetBase> *)(v1 + 96));
    if ( std::operator==<WidgetAttachAbilityGroup>((const std::shared_ptr<WidgetAttachAbilityGroup> *)(v1 + 96), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v7,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/widget/player_widget_comp.cpp",
        "takeoffUseAttachAbilityGroupWidget",
        1539);
      v5 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
             &v7,
             (const char (*)[54])"convert WidgetAttachAbilityGroup failed, material_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 48));
      common::milog::MiLogStream::~MiLogStream(&v7);
    }
    else
    {
      v6 = std::__shared_ptr_access<WidgetAttachAbilityGroup,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<WidgetAttachAbilityGroup,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
      WidgetAttachAbilityGroup::takeoffUseAttachAbilityGroupWidget(v6);
    }
    std::shared_ptr<WidgetAttachAbilityGroup>::~shared_ptr((std::shared_ptr<WidgetAttachAbilityGroup> *const)(v1 + 96));
  }
  std::shared_ptr<WidgetBase>::~shared_ptr((std::shared_ptr<WidgetBase> *const)(v1 + 64));
  if ( v8 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1546: range 00000000143AD338-00000000143AD356
void __cdecl PlayerWidgetComp::onEnterVehicleEvent(
        PlayerWidgetComp *const this,
        const EnterVehicleEvent *enter_vehicle_event)
{
  PlayerWidgetComp::takeoffUseAttachAbilityGroupWidget(this);
};

// Line 1551: range 00000000143AD358-00000000143AD974
void __cdecl PlayerWidgetComp::onChangeAvatarEvent(
        PlayerWidgetComp *const this,
        const ChangeAvatarEvent *change_avatar_event)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rcx
  WidgetBase *v6; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  uint32_t WidgetNewConfig; // eax
  common::milog::MiLogStream *v9; // rax
  std::__shared_ptr_access<data::ConfigWidgetUseAttachAbilityGroup,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rdx
  common::milog::MiLogStream *v11; // rax
  std::__shared_ptr_access<data::ConfigWidgetUseAttachAbilityGroup,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::_Rb_tree_iterator<std::pair<const data::WidgetOccupyTag,std::weak_ptr<WidgetBase> > >::_Self __y; // [rsp+18h] [rbp-118h] BYREF
  common::milog::MiLogStream v14; // [rsp+20h] [rbp-110h] BYREF
  char v15[240]; // [rsp+40h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 48 4 16 material_id:1565 64 8 14 slot_iter:1552 96 16 15 widget_ptr:1559 128 16 22 config_widg"
                        "et_ptr:1567 160 16 33 config_attach_use_attach_ptr:1573";
  *(_QWORD *)(v2 + 16) = PlayerWidgetComp::onChangeAvatarEvent;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862725] = -202178560;
  *(_DWORD *)(v2 + 48) = 1;
  *(std::map<data::WidgetOccupyTag,std::weak_ptr<WidgetBase>>::iterator *)(v2 + 64) = std::map<data::WidgetOccupyTag,std::weak_ptr<WidgetBase>>::find(
                                                                                        &this->widget_slot_map_,
                                                                                        (const std::map<data::WidgetOccupyTag,std::weak_ptr<WidgetBase>>::key_type *)(v2 + 48));
  __y._M_node = std::map<data::WidgetOccupyTag,std::weak_ptr<WidgetBase>>::end(&this->widget_slot_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<const data::WidgetOccupyTag,std::weak_ptr<WidgetBase> > >::_Self *)(v2 + 64),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/widget/player_widget_comp.cpp",
      "onChangeAvatarEvent",
      1555);
    v5 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
           &v14,
           (const char (*)[41])"quick use slot widget not found, player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    operator<<(v5, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v14);
  }
  else
  {
    std::_Rb_tree_iterator<std::pair<data::WidgetOccupyTag const,std::weak_ptr<WidgetBase>>>::operator->((const std::_Rb_tree_iterator<std::pair<const data::WidgetOccupyTag,std::weak_ptr<WidgetBase> > > *const)(v2 + 64));
    std::weak_ptr<WidgetBase>::lock((const std::weak_ptr<WidgetBase> *const)(v2 + 96));
    if ( std::operator==<WidgetBase>(0LL, (const std::shared_ptr<WidgetBase> *)(v2 + 96)) )
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/widget/player_widget_comp.cpp",
        "onChangeAvatarEvent",
        1562);
      common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(&v14, (const char (*)[22])"widget_ptr is nullptr");
      common::milog::MiLogStream::~MiLogStream(&v14);
    }
    else
    {
      v6 = std::__shared_ptr_access<WidgetBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<WidgetBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      *(_DWORD *)(v2 + 48) = WidgetBase::getMaterialId(v6);
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)(v2 + 160));
      v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
      WidgetNewConfig = (unsigned int)JsonConfigMgr::getWidgetNewConfig(&v7->design_config.json_config_mgr);
      WidgetJsonNewConfig::findWidgetConfigById((const WidgetJsonNewConfig *const)(v2 + 128), WidgetNewConfig);
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 160));
      if ( std::operator==<data::ConfigBaseWidgetToy>(
             0LL,
             (const std::shared_ptr<data::ConfigBaseWidgetToy> *)(v2 + 128)) )
      {
        common::milog::MiLogStream::create(
          &v14,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/widget/player_widget_comp.cpp",
          "onChangeAvatarEvent",
          1570);
        v9 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
               &v14,
               (const char (*)[29])"fidnWidgetConfigById fails, ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 48));
        common::milog::MiLogStream::~MiLogStream(&v14);
      }
      else
      {
        std::dynamic_pointer_cast<data::ConfigWidgetUseAttachAbilityGroup,data::ConfigBaseWidgetToy>((const std::shared_ptr<data::ConfigBaseWidgetToy> *)(v2 + 160));
        if ( std::operator!=<data::ConfigWidgetUseAttachAbilityGroup>(
               0LL,
               (const std::shared_ptr<data::ConfigWidgetUseAttachAbilityGroup> *)(v2 + 160)) )
        {
          v10 = std::__shared_ptr_access<data::ConfigWidgetUseAttachAbilityGroup,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigWidgetUseAttachAbilityGroup,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
          if ( *(_BYTE *)(((unsigned __int64)&v10->is_skip_take_off_ability_group_when_change_avatar >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)v10 - 87) & 7) >= *(_BYTE *)(((unsigned __int64)&v10->is_skip_take_off_ability_group_when_change_avatar >> 3)
                                                             + 0x7FFF8000) )
          {
            __asan_report_load1(&v10->is_skip_take_off_ability_group_when_change_avatar);
          }
          if ( v10->is_skip_take_off_ability_group_when_change_avatar )
          {
            common::milog::MiLogStream::create(
              &v14,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/widget/player_widget_comp.cpp",
              "onChangeAvatarEvent",
              1578);
            v11 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                    &v14,
                    (const char (*)[49])"onChangeAvatarEvent skip take off abilitygroup, ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 48));
            common::milog::MiLogStream::~MiLogStream(&v14);
          }
          else
          {
            v12 = std::__shared_ptr_access<data::ConfigWidgetUseAttachAbilityGroup,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigWidgetUseAttachAbilityGroup,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
            if ( *(char *)(((unsigned __int64)&v12->is_update_cdafter_ability_trigger >> 3) + 0x7FFF8000) < 0 )
              v12 = (std::__shared_ptr_access<data::ConfigWidgetUseAttachAbilityGroup,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load1(&v12->is_update_cdafter_ability_trigger);
            if ( !v12->is_update_cdafter_ability_trigger )
              PlayerWidgetComp::takeoffUseAttachAbilityGroupWidget(this);
          }
        }
        std::shared_ptr<data::ConfigWidgetUseAttachAbilityGroup>::~shared_ptr((std::shared_ptr<data::ConfigWidgetUseAttachAbilityGroup> *const)(v2 + 160));
      }
      std::shared_ptr<data::ConfigBaseWidgetToy>::~shared_ptr((std::shared_ptr<data::ConfigBaseWidgetToy> *const)(v2 + 128));
    }
    std::shared_ptr<WidgetBase>::~shared_ptr((std::shared_ptr<WidgetBase> *const)(v2 + 96));
  }
  if ( v15 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1589: range 00000000143AD976-00000000143AD9A3
int32_t __cdecl PlayerWidgetComp::checkWidgetUse(PlayerWidgetComp *const this, const proto::WidgetDoBagReq *req)
{
  uint32_t v2; // edx

  v2 = proto::WidgetDoBagReq::material_id(req);
  return PlayerWidgetComp::commonCheckWidgetBeforeUse(this, v2);
};

// Line 1594: range 00000000143AD9A4-00000000143ADC0B
int32_t __cdecl PlayerWidgetComp::commonCheckWidgetBeforeUse(PlayerWidgetComp *const this, uint32_t material_id)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  bool v4; // bl
  uint32_t ItemComp; // eax
  bool v6; // bl
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  uint32_t WidgetNewConfig; // eax
  bool v9; // bl
  std::shared_ptr<Config> v10; // [rsp+10h] [rbp-50h] BYREF
  std::shared_ptr<data::ConfigBaseWidgetToy> v11; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v12; // [rsp+30h] [rbp-30h] BYREF

  if ( material_id )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v11);
    v3 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v11);
    v4 = data::MaterialExcelConfigMgrBase::findMaterialExcelConfig(
           &v3->design_config.txt_config_mgr.material_config_mgr,
           material_id) == 0LL;
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v11);
    if ( v4 )
    {
      return 5;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      ItemComp = (unsigned int)Player::getItemComp(this->player_);
      PlayerItemComp::findMaterial((PlayerItemComp *const)&v11, ItemComp);
      v6 = std::operator==<Material>(0LL, (const std::shared_ptr<Material> *)&v11);
      std::shared_ptr<Material>::~shared_ptr((std::shared_ptr<Material> *const)&v11);
      if ( v6 )
      {
        return 647;
      }
      else
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v10);
        v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v10);
        WidgetNewConfig = (unsigned int)JsonConfigMgr::getWidgetNewConfig(&v7->design_config.json_config_mgr);
        WidgetJsonNewConfig::findWidgetConfigById((const WidgetJsonNewConfig *const)&v11, WidgetNewConfig);
        v9 = std::operator==<data::ConfigBaseWidgetToy>(0LL, &v11);
        std::shared_ptr<data::ConfigBaseWidgetToy>::~shared_ptr(&v11);
        std::shared_ptr<Config>::~shared_ptr(&v10);
        if ( v9 )
        {
          return 680;
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          if ( !WidgetBase::checkIsWidgetActive(this->player_, material_id) )
            return 1587;
          else
            return 0;
        }
      }
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/widget/player_widget_comp.cpp",
      "commonCheckWidgetBeforeUse",
      1597);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      &v12,
      (const char (*)[28])"material id should not be 0");
    common::milog::MiLogStream::~MiLogStream(&v12);
    return -1;
  }
};

// Line 1621: range 00000000143ADC0C-00000000143ADFD2
int32_t __cdecl PlayerWidgetComp::changeWidgetBackgroundActiveState(
        PlayerWidgetComp *const this,
        const proto::ChangeWidgetBackgroundActiveStateReq *req,
        proto::ChangeWidgetBackgroundActiveStateRsp *rsp_0)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  uint32_t WidgetNewConfig; // eax
  common::milog::MiLogStream *v8; // rax
  int32_t v9; // r14d
  common::milog::MiLogStream *v10; // rax
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdx
  int32_t result; // eax
  int32_t ret; // [rsp+2Ch] [rbp-D4h]
  common::milog::MiLogStream v16; // [rsp+30h] [rbp-D0h] BYREF
  char v17[176]; // [rsp+50h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 16 material_id:1622 64 16 19 widget_toy_ptr:1623 96 16 15 widget_ptr:1629";
  *(_QWORD *)(v3 + 16) = PlayerWidgetComp::changeWidgetBackgroundActiveState;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -219021312;
  v5[536862723] = -202178560;
  *(_DWORD *)(v3 + 48) = proto::ChangeWidgetBackgroundActiveStateReq::material_id(req);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v3 + 96));
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
  WidgetNewConfig = (unsigned int)JsonConfigMgr::getWidgetNewConfig(&v6->design_config.json_config_mgr);
  WidgetJsonNewConfig::findWidgetConfigById((const WidgetJsonNewConfig *const)(v3 + 64), WidgetNewConfig);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 96));
  if ( std::operator==<data::ConfigBaseWidgetToy>((const std::shared_ptr<data::ConfigBaseWidgetToy> *)(v3 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/widget/player_widget_comp.cpp",
      "changeWidgetBackgroundActiveState",
      1626);
    v8 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
           &v16,
           (const char (*)[38])"widget config not found, material_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v16);
    v9 = 5;
  }
  else
  {
    PlayerWidgetComp::findBaseWidget((PlayerWidgetComp *const)(v3 + 96), (uint32_t)this);
    if ( std::operator==<WidgetBase>((const std::shared_ptr<WidgetBase> *)(v3 + 96), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/widget/player_widget_comp.cpp",
        "changeWidgetBackgroundActiveState",
        1632);
      v10 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
              &v16,
              (const char (*)[37])"findBaseWidget failed, material_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v16);
      v9 = -1;
    }
    else
    {
      v11 = (unsigned __int64)std::__shared_ptr_access<WidgetBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<WidgetBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
        v11 = __asan_report_load8(v11);
      v12 = *(_QWORD *)v11 + 160LL;
      if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
        v11 = __asan_report_load8(*(_QWORD *)v11 + 160LL);
      ret = (*(__int64 (__fastcall **)(unsigned __int64, const proto::ChangeWidgetBackgroundActiveStateReq *, proto::ChangeWidgetBackgroundActiveStateRsp *))v12)(
              v11,
              req,
              rsp_0);
      if ( ret )
      {
        v9 = ret;
      }
      else
      {
        PlayerWidgetComp::notifyAllBackgroundWidgetData(this);
        v9 = 0;
      }
    }
    std::shared_ptr<WidgetBase>::~shared_ptr((std::shared_ptr<WidgetBase> *const)(v3 + 96));
  }
  std::shared_ptr<data::ConfigBaseWidgetToy>::~shared_ptr((std::shared_ptr<data::ConfigBaseWidgetToy> *const)(v3 + 64));
  result = v9;
  if ( v17 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1645: range 00000000143ADFD4-00000000143AE30F
void __cdecl PlayerWidgetComp::onObtainItemEvent(
        PlayerWidgetComp *const this,
        const ObtainItemEvent *obtain_item_event)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  uint32_t WidgetNewConfig; // eax
  bool v7; // r14
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream v9; // [rsp+10h] [rbp-D0h] BYREF
  char v10[176]; // [rsp+30h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 16 material_id:1646 64 16 19 widget_toy_ptr:1647 96 16 15 widget_ptr:1654";
  *(_QWORD *)(v2 + 16) = PlayerWidgetComp::onObtainItemEvent;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&obtain_item_event->item_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&obtain_item_event->item_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&obtain_item_event->item_id);
  }
  *(_DWORD *)(v2 + 48) = obtain_item_event->item_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v2 + 96));
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
  WidgetNewConfig = (unsigned int)JsonConfigMgr::getWidgetNewConfig(&v5->design_config.json_config_mgr);
  WidgetJsonNewConfig::findWidgetConfigById((const WidgetJsonNewConfig *const)(v2 + 64), WidgetNewConfig);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 96));
  if ( !std::operator==<data::ConfigBaseWidgetToy>((const std::shared_ptr<data::ConfigBaseWidgetToy> *)(v2 + 64), 0LL) )
  {
    std::dynamic_pointer_cast<data::ConfigWidgetBackground,data::ConfigBaseWidgetToy>((const std::shared_ptr<data::ConfigBaseWidgetToy> *)(v2 + 96));
    v7 = std::operator!=<data::ConfigWidgetBackground>(
           0LL,
           (const std::shared_ptr<data::ConfigWidgetBackground> *)(v2 + 96));
    std::shared_ptr<data::ConfigWidgetBackground>::~shared_ptr((std::shared_ptr<data::ConfigWidgetBackground> *const)(v2 + 96));
    if ( v7 )
    {
      PlayerWidgetComp::getOrCreateBaseWidget((PlayerWidgetComp *const)(v2 + 96), (uint32_t)this);
      if ( std::operator==<WidgetBase>(0LL, (const std::shared_ptr<WidgetBase> *)(v2 + 96)) )
      {
        common::milog::MiLogStream::create(
          &v9,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/widget/player_widget_comp.cpp",
          "onObtainItemEvent",
          1657);
        v8 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
               &v9,
               (const char (*)[43])"getOrCreateBaseWidget failed, material_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 48));
        common::milog::MiLogStream::~MiLogStream(&v9);
      }
      else
      {
        PlayerWidgetComp::notifyAllBackgroundWidgetData(this);
      }
      std::shared_ptr<WidgetBase>::~shared_ptr((std::shared_ptr<WidgetBase> *const)(v2 + 96));
    }
  }
  std::shared_ptr<data::ConfigBaseWidgetToy>::~shared_ptr((std::shared_ptr<data::ConfigBaseWidgetToy> *const)(v2 + 64));
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1665: range 00000000143AE37C-00000000143AE542
void __cdecl PlayerWidgetComp::notifyAllBackgroundWidgetData(PlayerWidgetComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::function<ForeachPolicy(WidgetBackground&)> p_func; // [rsp+10h] [rbp-C0h] BYREF
  char v5[160]; // [rsp+30h] [rbp-A0h] BYREF

  v1 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 48 40 11 notify:1666";
  *(_QWORD *)(v1 + 16) = PlayerWidgetComp::notifyAllBackgroundWidgetData;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862722] = -218103808;
  v3[536862723] = -202116109;
  proto::AllWidgetBackgroundActiveStateNotify::AllWidgetBackgroundActiveStateNotify((proto::AllWidgetBackgroundActiveStateNotify *const)(v1 + 48));
  std::function<ForeachPolicy ()(WidgetBackground &)>::function<PlayerWidgetComp::notifyAllBackgroundWidgetData(void)::{lambda(WidgetBackground &)#1},void,void>(
    &p_func,
    (PlayerWidgetComp::notifyAllBackgroundWidgetData::<lambda(WidgetBackground&)>)(v1 + 48));
  PlayerWidgetComp::foreachWidget<WidgetBackground>(this, &p_func);
  std::function<ForeachPolicy ()(WidgetBackground &)>::~function(&p_func);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Player::sendProto(this->player_, (const google::protobuf::Message *)(v1 + 48));
  proto::AllWidgetBackgroundActiveStateNotify::~AllWidgetBackgroundActiveStateNotify((proto::AllWidgetBackgroundActiveStateNotify *const)(v1 + 48));
  if ( v5 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1667: range 00000000143AE310-00000000143AE37A
ForeachPolicy __cdecl PlayerWidgetComp::notifyAllBackgroundWidgetData(void)::{lambda(WidgetBackground &)#1}::operator()(
        const PlayerWidgetComp::notifyAllBackgroundWidgetData::<lambda(WidgetBackground&)> *const __closure,
        WidgetBackground *widget)
{
  proto::AllWidgetBackgroundActiveStateNotify *notify; // rbx
  uint32_t MaterialId; // eax

  if ( WidgetBackground::getIsActive(widget) )
  {
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8(__closure);
    notify = __closure->__notify;
    MaterialId = WidgetBase::getMaterialId((WidgetBase *const)widget);
    proto::AllWidgetBackgroundActiveStateNotify::add_background_active_widget_list(notify, MaterialId);
  }
  return 0;
};

// Line 1679: range 00000000143AE544-00000000143AEA33
void __cdecl PlayerWidgetComp::loadBackgroundWidget(PlayerWidgetComp *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  const WidgetJsonNewConfig *WidgetNewConfig; // rax
  std::_Rb_tree_const_iterator<unsigned int>::reference v6; // rax
  _DWORD *v7; // rdx
  char v8; // r15
  uint32_t ItemComp; // eax
  common::milog::MiLogStream *v10; // rax
  int v11; // r14d
  common::milog::MiLogStream *v12; // rax
  bool v13; // [rsp+17h] [rbp-129h]
  std::set<unsigned int>::iterator __for_begin; // [rsp+28h] [rbp-118h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+30h] [rbp-110h] BYREF
  const std::set<unsigned int> *__for_range; // [rsp+38h] [rbp-108h]
  std::shared_ptr<Material> __a; // [rsp+40h] [rbp-100h] BYREF
  common::milog::MiLogStream v18; // [rsp+50h] [rbp-F0h] BYREF
  char v19[208]; // [rsp+70h] [rbp-D0h] BYREF

  v1 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 32 4 16 material_id:1681 48 16 15 widget_ptr:1686 80 48 35 background_widget_material_set:1680";
  *(_QWORD *)(v1 + 16) = PlayerWidgetComp::loadBackgroundWidget;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61956;
  v3[536862722] = 62194;
  v3[536862724] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v1 + 48));
  v4 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 48));
  WidgetNewConfig = JsonConfigMgr::getWidgetNewConfig(&v4->design_config.json_config_mgr);
  std::set<unsigned int>::set(
    (std::set<unsigned int> *const)(v1 + 80),
    &WidgetNewConfig->background_widget_material_set);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v1 + 48));
  __for_range = (const std::set<unsigned int> *)(v1 + 80);
  __for_begin._M_node = std::set<unsigned int>::begin((const std::set<unsigned int> *const)(v1 + 80))._M_node;
  __for_end._M_node = std::set<unsigned int>::end((const std::set<unsigned int> *const)(v1 + 80))._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v6 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    v7 = v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    *(_DWORD *)(v1 + 32) = *v7;
    v8 = 0;
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    ItemComp = (unsigned int)Player::getItemComp(this->player_);
    PlayerItemComp::findMaterial((PlayerItemComp *const)&__a, ItemComp);
    v13 = 0;
    if ( std::operator!=<Material>(0LL, &__a) )
    {
      PlayerWidgetComp::findBaseWidget((PlayerWidgetComp *const)(v1 + 48), (uint32_t)this);
      v8 = 1;
      if ( std::operator==<WidgetBase>(0LL, (const std::shared_ptr<WidgetBase> *)(v1 + 48)) )
        v13 = 1;
    }
    if ( v8 )
      std::shared_ptr<WidgetBase>::~shared_ptr((std::shared_ptr<WidgetBase> *const)(v1 + 48));
    std::shared_ptr<Material>::~shared_ptr(&__a);
    if ( v13 )
    {
      PlayerWidgetComp::getOrCreateBaseWidget((PlayerWidgetComp *const)(v1 + 48), (uint32_t)this);
      if ( std::operator==<WidgetBase>(0LL, (const std::shared_ptr<WidgetBase> *)(v1 + 48)) )
      {
        common::milog::MiLogStream::create(
          &v18,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/widget/player_widget_comp.cpp",
          "loadBackgroundWidget",
          1689);
        v10 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                &v18,
                (const char (*)[43])"getOrCreateBaseWidget failed, material_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v1 + 32));
        common::milog::MiLogStream::~MiLogStream(&v18);
        v11 = 0;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v18,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/widget/player_widget_comp.cpp",
          "loadBackgroundWidget",
          1692);
        v12 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(&v18, (const char (*)[44])off_2532BEA0);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v1 + 32));
        common::milog::MiLogStream::~MiLogStream(&v18);
        v11 = 1;
      }
      std::shared_ptr<WidgetBase>::~shared_ptr((std::shared_ptr<WidgetBase> *const)(v1 + 48));
      if ( v11 != 1 )
        break;
    }
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v1 + 80));
  if ( v19 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 1698: range 00000000143AEA34-00000000143AF658
int32_t __cdecl PlayerWidgetComp::doBag(
        PlayerWidgetComp *const this,
        const proto::WidgetDoBagReq *req,
        proto::WidgetDoBagRsp *rsp_0)
{
  int32_t v3; // r13d
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  uint32_t WidgetNewConfig; // eax
  common::milog::MiLogStream *v9; // rax
  bool v10; // r15
  common::milog::MiLogStream *v11; // rax
  bool v12; // r15
  const proto::WidgetCreateLocationInfo *v13; // rax
  const proto::Vector *v14; // rax
  const proto::WidgetCreateLocationInfo *v15; // rax
  const proto::Vector *v16; // rax
  const proto::WidgetCreateLocationInfo *v18; // rax
  const proto::Vector *v19; // rax
  const proto::WidgetCreateLocationInfo *v20; // rax
  const proto::Vector *v21; // rax
  const proto::WidgetCreateLocationInfo *v22; // rax
  const proto::Vector *v23; // rax
  bool v24; // r15
  int v25; // r15d
  std::__shared_ptr_access<data::ConfigWidgetAddBuff,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // r13
  std::__shared_ptr_access<data::ConfigWidgetAddBuff,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rax
  PlayerAvatarComp *AvatarComp; // r15
  std::__shared_ptr_access<data::ConfigWidgetAddBuff,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v32; // rax
  common::milog::MiLogStream *v33; // r13
  std::__shared_ptr_access<data::ConfigWidgetAddBuff,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v34; // rax
  common::milog::MiLogStream *v35; // rax
  std::__shared_ptr_access<data::ConfigWidgetAddBuff,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v36; // rax
  common::milog::MiLogStream *v37; // rax
  int v38; // r15d
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // rdx
  PlayerEventComp *EventComp; // r13
  int32_t result; // eax
  int32_t ret_1; // [rsp+2Ch] [rbp-104h]
  int32_t ret_0; // [rsp+30h] [rbp-100h]
  int32_t ret; // [rsp+34h] [rbp-FCh]
  Vector3 v47; // [rsp+38h] [rbp-F8h] BYREF
  Vector3 pos; // [rsp+44h] [rbp-ECh] BYREF
  std::shared_ptr<UseWidgetEvent> __r; // [rsp+50h] [rbp-E0h] BYREF
  common::milog::MiLogStream v50; // [rsp+60h] [rbp-D0h] BYREF
  char v51[176]; // [rsp+80h] [rbp-B0h] BYREF

  v4 = (unsigned __int64)v51;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 32 4 16 material_id:1699 48 4 8 ret:1709 64 16 19 widget_toy_ptr:1700 96 16 24 add_buff_config_ptr:1738";
  *(_QWORD *)(v4 + 16) = PlayerWidgetComp::doBag;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -219021312;
  v6[536862723] = -202178560;
  *(_DWORD *)(v4 + 32) = proto::WidgetDoBagReq::material_id(req);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v4 + 96));
  v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
  WidgetNewConfig = (unsigned int)JsonConfigMgr::getWidgetNewConfig(&v7->design_config.json_config_mgr);
  WidgetJsonNewConfig::findWidgetConfigById((const WidgetJsonNewConfig *const)(v4 + 64), WidgetNewConfig);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 96));
  if ( std::operator==<data::ConfigBaseWidgetToy>((const std::shared_ptr<data::ConfigBaseWidgetToy> *)(v4 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v50,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/widget/player_widget_comp.cpp",
      "doBag",
      1703);
    v9 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
           &v50,
           (const char (*)[38])"widget config not found, material_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v4 + 32));
    common::milog::MiLogStream::~MiLogStream(&v50);
    v3 = 5;
    goto LABEL_59;
  }
  std::dynamic_pointer_cast<data::ConfigWidgetToyAnchorPoint,data::ConfigBaseWidgetToy>((const std::shared_ptr<data::ConfigBaseWidgetToy> *)(v4 + 96));
  v10 = std::operator!=<data::ConfigWidgetToyAnchorPoint>(
          (const std::shared_ptr<data::ConfigWidgetToyAnchorPoint> *)(v4 + 96),
          0LL);
  std::shared_ptr<data::ConfigWidgetToyAnchorPoint>::~shared_ptr((std::shared_ptr<data::ConfigWidgetToyAnchorPoint> *const)(v4 + 96));
  if ( v10 )
  {
    *(_DWORD *)(v4 + 48) = PlayerWidgetComp::checkUseAnchorPoint(this);
    if ( *(_DWORD *)(v4 + 48) )
    {
      common::milog::MiLogStream::create(
        &v50,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/widget/player_widget_comp.cpp",
        "doBag",
        1712);
      v11 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
              &v50,
              (const char (*)[31])"checkUseAnchorPoint fail, ret:");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v11, (const int *)(v4 + 48));
      common::milog::MiLogStream::~MiLogStream(&v50);
      v3 = *(_DWORD *)(v4 + 48);
      goto LABEL_59;
    }
    PlayerWidgetComp::useAnchorPoint(this);
    goto LABEL_56;
  }
  std::dynamic_pointer_cast<data::ConfigWidgetToyBonfire,data::ConfigBaseWidgetToy>((const std::shared_ptr<data::ConfigBaseWidgetToy> *)(v4 + 96));
  v12 = std::operator!=<data::ConfigWidgetToyBonfire>(
          (const std::shared_ptr<data::ConfigWidgetToyBonfire> *)(v4 + 96),
          0LL);
  std::shared_ptr<data::ConfigWidgetToyBonfire>::~shared_ptr((std::shared_ptr<data::ConfigWidgetToyBonfire> *const)(v4 + 96));
  if ( v12 )
  {
    if ( proto::WidgetDoBagReq::op_info_case(req) != kLocationInfo )
    {
      common::milog::MiLogStream::create(
        &v50,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/widget/player_widget_comp.cpp",
        "doBag",
        1722);
      common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
        &v50,
        (const char (*)[36])"Anchor point op_info cast not match");
      common::milog::MiLogStream::~MiLogStream(&v50);
      v3 = -1;
      goto LABEL_59;
    }
    v13 = proto::WidgetDoBagReq::location_info(req);
    v14 = proto::WidgetCreateLocationInfo::pos(v13);
    Vector3::Vector3(&v47, v14);
    if ( !Vector3::isValid(&v47)
      || (v15 = proto::WidgetDoBagReq::location_info(req),
          v16 = proto::WidgetCreateLocationInfo::rot(v15),
          Vector3::Vector3(&pos, v16),
          !Vector3::isValid(&pos)) )
    {
      v3 = 201;
      goto LABEL_59;
    }
    v18 = proto::WidgetDoBagReq::location_info(req);
    v19 = proto::WidgetCreateLocationInfo::pos(v18);
    Vector3::Vector3(&pos, v19);
    ret = PlayerWidgetComp::checkUseBonfireWidget(this, &pos);
    if ( ret )
    {
      v3 = ret;
      goto LABEL_59;
    }
    v20 = proto::WidgetDoBagReq::location_info(req);
    v21 = proto::WidgetCreateLocationInfo::rot(v20);
    Vector3::Vector3(&pos, v21);
    v22 = proto::WidgetDoBagReq::location_info(req);
    v23 = proto::WidgetCreateLocationInfo::pos(v22);
    Vector3::Vector3(&v47, v23);
    PlayerWidgetComp::useBonfireWidget(this, &v47, &pos);
    goto LABEL_56;
  }
  std::dynamic_pointer_cast<data::ConfigWidgetAddBuff,data::ConfigBaseWidgetToy>((const std::shared_ptr<data::ConfigBaseWidgetToy> *)(v4 + 96));
  v24 = std::operator!=<data::ConfigWidgetAddBuff>((const std::shared_ptr<data::ConfigWidgetAddBuff> *)(v4 + 96), 0LL);
  std::shared_ptr<data::ConfigWidgetAddBuff>::~shared_ptr((std::shared_ptr<data::ConfigWidgetAddBuff> *const)(v4 + 96));
  if ( v24 )
  {
    std::dynamic_pointer_cast<data::ConfigWidgetAddBuff,data::ConfigBaseWidgetToy>((const std::shared_ptr<data::ConfigBaseWidgetToy> *)(v4 + 96));
    if ( std::operator==<data::ConfigWidgetAddBuff>((const std::shared_ptr<data::ConfigWidgetAddBuff> *)(v4 + 96), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v50,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/widget/player_widget_comp.cpp",
        "doBag",
        1741);
      common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
        &v50,
        (const char (*)[28])"add_buff_config_ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v50);
      v3 = -1;
      v25 = 0;
    }
    else
    {
      v26 = std::__shared_ptr_access<data::ConfigWidgetAddBuff,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigWidgetAddBuff,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
      if ( *(_BYTE *)(((unsigned __int64)&v26->buff_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v26->buff_id >> 3) + 0x7FFF8000) <= 3 )
      {
        v26 = (std::__shared_ptr_access<data::ConfigWidgetAddBuff,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v26->buff_id);
      }
      if ( v26->buff_id )
      {
        v30 = std::__shared_ptr_access<data::ConfigWidgetAddBuff,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigWidgetAddBuff,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
        if ( *(_BYTE *)(((unsigned __int64)&v30->cd_group >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v30->cd_group >> 3) + 0x7FFF8000) <= 3 )
        {
          v30 = (std::__shared_ptr_access<data::ConfigWidgetAddBuff,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v30->cd_group);
        }
        ret_0 = PlayerWidgetComp::checkWidgetGroupCoolDown(this, v30->cd_group);
        if ( ret_0 )
        {
          v3 = ret_0;
          v25 = 0;
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          AvatarComp = Player::getAvatarComp(this->player_);
          v32 = std::__shared_ptr_access<data::ConfigWidgetAddBuff,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigWidgetAddBuff,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
          if ( *(_BYTE *)(((unsigned __int64)&v32->buff_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&v32->buff_id >> 3) + 0x7FFF8000) <= 3 )
          {
            v32 = (std::__shared_ptr_access<data::ConfigWidgetAddBuff,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v32->buff_id);
          }
          if ( PlayerAvatarComp::addServerBuff(AvatarComp, v32->buff_id, 0) )
          {
            common::milog::MiLogStream::create(
              &v50,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/widget/player_widget_comp.cpp",
              "doBag",
              1757);
            v33 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(&v50, (const char (*)[9])"buff_id=");
            v34 = std::__shared_ptr_access<data::ConfigWidgetAddBuff,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigWidgetAddBuff,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
            v35 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v33, &v34->buff_id);
            common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              v35,
              (const char (*)[22])" add team buff failed");
            common::milog::MiLogStream::~MiLogStream(&v50);
            v3 = -1;
            v25 = 0;
          }
          else
          {
            v36 = std::__shared_ptr_access<data::ConfigWidgetAddBuff,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigWidgetAddBuff,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
            if ( *(_BYTE *)(((unsigned __int64)&v36->cd_group >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&v36->cd_group >> 3) + 0x7FFF8000) <= 3 )
            {
              v36 = (std::__shared_ptr_access<data::ConfigWidgetAddBuff,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v36->cd_group);
            }
            PlayerWidgetComp::updateWidgetGroupCoolDown(this, v36->cd_group, 1);
            v25 = 1;
          }
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v50,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/widget/player_widget_comp.cpp",
          "doBag",
          1746);
        v27 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                &v50,
                (const char (*)[34])"buff_id = 0, widget, material_id:");
        v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v27,
                (const unsigned int *)(v4 + 32));
        v29 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v28, (const char (*)[6])" uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        *(_DWORD *)(v4 + 48) = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, (const unsigned int *)(v4 + 48));
        common::milog::MiLogStream::~MiLogStream(&v50);
        v3 = -1;
        v25 = 0;
      }
    }
    std::shared_ptr<data::ConfigWidgetAddBuff>::~shared_ptr((std::shared_ptr<data::ConfigWidgetAddBuff> *const)(v4 + 96));
    if ( v25 == 1 )
    {
LABEL_56:
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      EventComp = Player::getEventComp(this->player_);
      common::tools::perf::make_shared<UseWidgetEvent,unsigned int &>((unsigned int *)&__r, (unsigned int *)(v4 + 32));
      std::shared_ptr<BaseEvent>::shared_ptr<UseWidgetEvent,void>((std::shared_ptr<BaseEvent> *const)(v4 + 96), &__r);
      PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)(v4 + 96));
      std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)(v4 + 96));
      std::shared_ptr<UseWidgetEvent>::~shared_ptr(&__r);
      v3 = 0;
    }
  }
  else
  {
    PlayerWidgetComp::getOrCreateBaseWidget((PlayerWidgetComp *const)(v4 + 96), (uint32_t)this);
    if ( std::operator==<WidgetBase>((const std::shared_ptr<WidgetBase> *)(v4 + 96), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v50,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/widget/player_widget_comp.cpp",
        "doBag",
        1770);
      v37 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
              &v50,
              (const char (*)[47])"widget not support doBag action. material_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v37, (const unsigned int *)(v4 + 32));
      common::milog::MiLogStream::~MiLogStream(&v50);
      v3 = -1;
      v38 = 0;
    }
    else
    {
      v39 = (unsigned __int64)std::__shared_ptr_access<WidgetBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<WidgetBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
      if ( *(_BYTE *)((v39 >> 3) + 0x7FFF8000) )
        v39 = __asan_report_load8(v39);
      v40 = *(_QWORD *)v39 + 144LL;
      if ( *(_BYTE *)((v40 >> 3) + 0x7FFF8000) )
        v39 = __asan_report_load8(*(_QWORD *)v39 + 144LL);
      ret_1 = (*(__int64 (__fastcall **)(unsigned __int64, const proto::WidgetDoBagReq *, proto::WidgetDoBagRsp *))v40)(
                v39,
                req,
                rsp_0);
      if ( ret_1 )
      {
        v3 = ret_1;
        v38 = 0;
      }
      else
      {
        v38 = 1;
      }
    }
    std::shared_ptr<WidgetBase>::~shared_ptr((std::shared_ptr<WidgetBase> *const)(v4 + 96));
    if ( v38 == 1 )
      goto LABEL_56;
  }
LABEL_59:
  std::shared_ptr<data::ConfigBaseWidgetToy>::~shared_ptr((std::shared_ptr<data::ConfigBaseWidgetToy> *const)(v4 + 64));
  result = v3;
  if ( v51 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1784: range 00000000143AF65A-00000000143AF687
int32_t __cdecl PlayerWidgetComp::checkWidgetUse(PlayerWidgetComp *const this, const proto::SetWidgetSlotReq *req)
{
  uint32_t v2; // edx

  v2 = proto::SetWidgetSlotReq::material_id(req);
  return PlayerWidgetComp::commonCheckWidgetBeforeUse(this, v2);
};

// Line 1789: range 00000000143AF688-00000000143AFC18
int32_t __cdecl PlayerWidgetComp::setSlot(
        PlayerWidgetComp *const this,
        const proto::SetWidgetSlotReq *req,
        proto::SetWidgetSlotRsp *rsp_0)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  uint32_t WidgetNewConfig; // eax
  common::milog::MiLogStream *v8; // rax
  int32_t v9; // r14d
  common::milog::MiLogStream *v10; // rax
  __gnu_cxx::__normal_iterator<data::WidgetOccupyTag*,std::vector<data::WidgetOccupyTag> >::reference v11; // rax
  data::WidgetOccupyTag *v12; // rdx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  int32_t result; // eax
  proto::WidgetSlotOp op; // [rsp+2Ch] [rbp-E4h]
  int32_t ret; // [rsp+30h] [rbp-E0h]
  data::WidgetOccupyTag tag; // [rsp+34h] [rbp-DCh]
  std::vector<data::WidgetOccupyTag>::iterator __for_begin; // [rsp+38h] [rbp-D8h] BYREF
  std::vector<data::WidgetOccupyTag>::iterator __for_end; // [rsp+40h] [rbp-D0h] BYREF
  std::vector<data::WidgetOccupyTag> *__for_range; // [rsp+48h] [rbp-C8h]
  std::shared_ptr<Config> v23; // [rsp+50h] [rbp-C0h] BYREF
  common::milog::MiLogStream v24; // [rsp+60h] [rbp-B0h] BYREF
  char v25[144]; // [rsp+80h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 16 material_id:1790 64 16 20 base_widget_ptr:1792";
  *(_QWORD *)(v3 + 16) = PlayerWidgetComp::setSlot;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202178560;
  *(_DWORD *)(v3 + 48) = proto::SetWidgetSlotReq::material_id(req);
  proto::SetWidgetSlotRsp::set_material_id(rsp_0, *(_DWORD *)(v3 + 48));
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v23);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v23);
  WidgetNewConfig = (unsigned int)JsonConfigMgr::getWidgetNewConfig(&v6->design_config.json_config_mgr);
  WidgetJsonNewConfig::findWidgetConfigById((const WidgetJsonNewConfig *const)(v3 + 64), WidgetNewConfig);
  std::shared_ptr<Config>::~shared_ptr(&v23);
  if ( std::operator==<data::ConfigBaseWidgetToy>(0LL, (const std::shared_ptr<data::ConfigBaseWidgetToy> *)(v3 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/widget/player_widget_comp.cpp",
      "setSlot",
      1795);
    v8 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
           &v24,
           (const char (*)[38])"widget config not found, material_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v24);
    v9 = -1;
  }
  else
  {
    op = proto::SetWidgetSlotReq::op(req);
    proto::SetWidgetSlotRsp::set_op(rsp_0, op);
    if ( op || (ret = PlayerWidgetComp::checkWidgetUse(this, req)) == 0 || ret == 1587 )
    {
      __for_range = &std::__shared_ptr_access<data::ConfigBaseWidgetToy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigBaseWidgetToy,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64))->tags;
      __for_begin._M_current = std::vector<data::WidgetOccupyTag>::begin(__for_range)._M_current;
      __for_end._M_current = std::vector<data::WidgetOccupyTag>::end(__for_range)._M_current;
      while ( __gnu_cxx::operator!=<data::WidgetOccupyTag *,std::vector<data::WidgetOccupyTag>>(
                &__for_begin,
                &__for_end) )
      {
        v11 = __gnu_cxx::__normal_iterator<data::WidgetOccupyTag *,std::vector<data::WidgetOccupyTag>>::operator*(&__for_begin);
        v12 = v11;
        if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v11);
        }
        tag = *v12;
        if ( op )
        {
          if ( PlayerWidgetComp::doClearSlot(this, tag) )
          {
            common::milog::MiLogStream::create(
              &v24,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/widget/player_widget_comp.cpp",
              "setSlot",
              1824);
            v14 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                    &v24,
                    (const char (*)[33])"doClearSlot failed, material_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 48));
            common::milog::MiLogStream::~MiLogStream(&v24);
            v9 = -1;
            goto LABEL_21;
          }
        }
        else if ( PlayerWidgetComp::doSetSlot(this, *(_DWORD *)(v3 + 48), tag) )
        {
          common::milog::MiLogStream::create(
            &v24,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/widget/player_widget_comp.cpp",
            "setSlot",
            1816);
          v13 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                  &v24,
                  (const char (*)[31])"doSetSlot failed, material_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream(&v24);
          v9 = -1;
          goto LABEL_21;
        }
        __gnu_cxx::__normal_iterator<data::WidgetOccupyTag *,std::vector<data::WidgetOccupyTag>>::operator++(&__for_begin);
      }
      PlayerWidgetComp::notifyPlayerWidgetInfoToOthers(this);
      v9 = 0;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v24,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/widget/player_widget_comp.cpp",
        "setSlot",
        1805);
      v10 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
              &v24,
              (const char (*)[36])"checkWidgetUse failed, material_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v24);
      v9 = ret;
    }
  }
LABEL_21:
  std::shared_ptr<data::ConfigBaseWidgetToy>::~shared_ptr((std::shared_ptr<data::ConfigBaseWidgetToy> *const)(v3 + 64));
  result = v9;
  if ( v25 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 1835: range 00000000143AFC1A-00000000143B0922
__int64 __fastcall PlayerWidgetComp::doSetSlot(PlayerWidgetComp *const this, __int32 material_id, __int32 tag)
{
  unsigned int v3; // r14d
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  uint32_t WidgetNewConfig; // eax
  common::milog::MiLogStream *v9; // rax
  std::__shared_ptr_access<data::ConfigBaseWidgetToy,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  data::WidgetOccupyTag *M_current; // r15
  std::__shared_ptr_access<data::ConfigBaseWidgetToy,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::vector<data::WidgetOccupyTag>::iterator v13; // rax
  std::__shared_ptr_access<data::ConfigBaseWidgetToy,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<WidgetBase> > >::pointer v15; // rax
  common::milog::MiLogStream *v17; // rax
  int v18; // r15d
  std::shared_ptr<WidgetBase> *v19; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  uint32_t v21; // r15d
  WidgetBase *v22; // rax
  common::milog::MiLogStream *v23; // r14
  WidgetBase *v24; // rax
  int v25; // r15d
  __gnu_cxx::__normal_iterator<data::WidgetOccupyTag*,std::vector<data::WidgetOccupyTag> >::reference v26; // rax
  data::WidgetOccupyTag *v27; // rdx
  int v28; // r15d
  std::map<unsigned int,std::shared_ptr<WidgetBase>>::mapped_type *v29; // rax
  WidgetBase *v30; // rax
  int v31; // eax
  PlayerBasicComp *BasicComp; // rax
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rdx
  std::__shared_ptr_access<proto_log::PlayerLogBodySetQuickUseWidget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v35; // rax
  Player *v36; // r14
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rdx
  std::weak_ptr<WidgetBase> *v39; // rax
  common::milog::MiLogStream *v40; // rax
  __int64 result; // rax
  std::string v42; // [rsp+0h] [rbp-200h]
  unsigned int val; // [rsp+2Ch] [rbp-1D4h] BYREF
  proto::WidgetSlotTag proto_tag; // [rsp+30h] [rbp-1D0h]
  data::WidgetOccupyTag widget_tag; // [rsp+34h] [rbp-1CCh]
  std::vector<data::WidgetOccupyTag>::iterator __for_begin; // [rsp+38h] [rbp-1C8h] BYREF
  std::vector<data::WidgetOccupyTag>::iterator __for_end; // [rsp+40h] [rbp-1C0h] BYREF
  std::vector<data::WidgetOccupyTag> *__for_range; // [rsp+48h] [rbp-1B8h]
  common::milog::MiLogStream v49; // [rsp+50h] [rbp-1B0h] BYREF
  char v50[400]; // [rsp+70h] [rbp-190h] BYREF

  *(&v42._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  HIDWORD(v42._anon_0._M_allocated_capacity) = material_id;
  *(_DWORD *)v42._anon_0._M_local_buf = tag;
  v4 = (unsigned __int64)v50;
  v42._M_string_length = (std::string::size_type)v50;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(352LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "11 48 1 11 holder:1901 64 4 16 material_id:1834 80 4 8 tag:1834 96 8 9 iter:1843 128 8 14 pool_i"
                        "ter:1850 160 8 14 slot_iter:1862 192 16 20 base_widget_ptr:1836 224 16 15 widget_ptr:1882 256 16"
                        " 12 log_ptr:1904 288 16 19 old_widget_ptr:1869 320 16 15 widget_ptr:1853";
  *(_QWORD *)(v4 + 16) = PlayerWidgetComp::doSetSlot;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753551;
  v6[536862722] = -234556924;
  v6[536862723] = -218959360;
  v6[536862724] = -218959360;
  v6[536862725] = -218959360;
  v6[536862726] = -219021312;
  v6[536862727] = -219021312;
  v6[536862728] = -219021312;
  v6[536862729] = -219021312;
  v6[536862730] = -202178560;
  *(_DWORD *)(v4 + 64) = material_id;
  *(_DWORD *)(v4 + 80) = *(_DWORD *)v42._anon_0._M_local_buf;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v4 + 320));
  v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 320));
  WidgetNewConfig = (unsigned int)JsonConfigMgr::getWidgetNewConfig(&v7->design_config.json_config_mgr);
  WidgetJsonNewConfig::findWidgetConfigById((const WidgetJsonNewConfig *const)(v4 + 192), WidgetNewConfig);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 320));
  if ( std::operator==<data::ConfigBaseWidgetToy>(0LL, (const std::shared_ptr<data::ConfigBaseWidgetToy> *)(v4 + 192)) )
  {
    common::milog::MiLogStream::create(
      &v49,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/widget/player_widget_comp.cpp",
      "doSetSlot",
      1839);
    v9 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
           &v49,
           (const char (*)[38])"widget config not found, material_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v4 + 64));
    common::milog::MiLogStream::~MiLogStream(&v49);
    v3 = -1;
  }
  else
  {
    v10 = std::__shared_ptr_access<data::ConfigBaseWidgetToy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigBaseWidgetToy,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 192));
    M_current = std::vector<data::WidgetOccupyTag>::end(&v10->tags)._M_current;
    v12 = std::__shared_ptr_access<data::ConfigBaseWidgetToy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigBaseWidgetToy,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 192));
    v13._M_current = std::vector<data::WidgetOccupyTag>::begin(&v12->tags)._M_current;
    *(__gnu_cxx::__normal_iterator<data::WidgetOccupyTag*,std::vector<data::WidgetOccupyTag> > *)(v4 + 96) = std::find<__gnu_cxx::__normal_iterator<data::WidgetOccupyTag *,std::vector<data::WidgetOccupyTag>>,data::WidgetOccupyTag>(v13, (__gnu_cxx::__normal_iterator<data::WidgetOccupyTag*,std::vector<data::WidgetOccupyTag> >)M_current, (const data::WidgetOccupyTag *)(v4 + 80));
    v14 = std::__shared_ptr_access<data::ConfigBaseWidgetToy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigBaseWidgetToy,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 192));
    __for_end._M_current = std::vector<data::WidgetOccupyTag>::end(&v14->tags)._M_current;
    if ( __gnu_cxx::operator==<data::WidgetOccupyTag *,std::vector<data::WidgetOccupyTag>>(
           (const __gnu_cxx::__normal_iterator<data::WidgetOccupyTag*,std::vector<data::WidgetOccupyTag> > *)(v4 + 96),
           &__for_end) )
    {
      v3 = 680;
    }
    else
    {
      *(std::map<unsigned int,std::shared_ptr<WidgetBase>>::iterator *)(v4 + 128) = std::map<unsigned int,std::shared_ptr<WidgetBase>>::find(
                                                                                      &this->widget_pool_,
                                                                                      (const std::map<unsigned int,std::shared_ptr<WidgetBase>>::key_type *)(v4 + 64));
      __for_end._M_current = (data::WidgetOccupyTag *)std::map<unsigned int,std::shared_ptr<WidgetBase>>::end(&this->widget_pool_)._M_node;
      if ( !std::operator==(
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<WidgetBase> > >::_Self *)(v4 + 128),
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<WidgetBase> > >::_Self *)&__for_end) )
      {
        v15 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<WidgetBase>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<WidgetBase> > > *const)(v4 + 128));
        if ( !std::operator==<WidgetBase>(&v15->second, 0LL) )
          goto LABEL_59;
      }
      PlayerWidgetComp::createAndInitWidget((PlayerWidgetComp *const)(v4 + 320), (uint32_t)this);
      if ( std::operator==<WidgetBase>((const std::shared_ptr<WidgetBase> *)(v4 + 320), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v49,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/widget/player_widget_comp.cpp",
          "doSetSlot",
          1856);
        v17 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                &v49,
                (const char (*)[41])"createAndInitWidget failed, material_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v4 + 64));
        common::milog::MiLogStream::~MiLogStream(&v49);
        v3 = -1;
        v18 = 0;
      }
      else
      {
        v19 = std::map<unsigned int,std::shared_ptr<WidgetBase>>::operator[](
                &this->widget_pool_,
                (const std::map<unsigned int,std::shared_ptr<WidgetBase>>::key_type *)(v4 + 64));
        std::shared_ptr<WidgetBase>::operator=(v19, (const std::shared_ptr<WidgetBase> *)(v4 + 320));
        v18 = 1;
      }
      std::shared_ptr<WidgetBase>::~shared_ptr((std::shared_ptr<WidgetBase> *const)(v4 + 320));
      if ( v18 == 1 )
      {
LABEL_59:
        *(std::map<data::WidgetOccupyTag,std::weak_ptr<WidgetBase>>::iterator *)(v4 + 160) = std::map<data::WidgetOccupyTag,std::weak_ptr<WidgetBase>>::find(
                                                                                               &this->widget_slot_map_,
                                                                                               (const std::map<data::WidgetOccupyTag,std::weak_ptr<WidgetBase>>::key_type *)(v4 + 80));
        __for_end._M_current = (data::WidgetOccupyTag *)std::map<data::WidgetOccupyTag,std::weak_ptr<WidgetBase>>::end(&this->widget_slot_map_)._M_node;
        if ( !std::operator!=(
                (const std::_Rb_tree_iterator<std::pair<const data::WidgetOccupyTag,std::weak_ptr<WidgetBase> > >::_Self *)(v4 + 160),
                (const std::_Rb_tree_iterator<std::pair<const data::WidgetOccupyTag,std::weak_ptr<WidgetBase> > >::_Self *)&__for_end) )
          goto LABEL_31;
        std::_Rb_tree_iterator<std::pair<data::WidgetOccupyTag const,std::weak_ptr<WidgetBase>>>::operator->((const std::_Rb_tree_iterator<std::pair<const data::WidgetOccupyTag,std::weak_ptr<WidgetBase> > > *const)(v4 + 160));
        std::weak_ptr<WidgetBase>::lock((const std::weak_ptr<WidgetBase> *const)(v4 + 256));
        if ( !std::operator!=<WidgetBase>((const std::shared_ptr<WidgetBase> *)(v4 + 256), 0LL) )
          goto LABEL_29;
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)(v4 + 320));
        v20 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 320));
        v21 = (unsigned int)JsonConfigMgr::getWidgetNewConfig(&v20->design_config.json_config_mgr);
        v22 = std::__shared_ptr_access<WidgetBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<WidgetBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 256));
        WidgetBase::getMaterialId(v22);
        WidgetJsonNewConfig::findWidgetConfigById((const WidgetJsonNewConfig *const)(v4 + 288), v21);
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 320));
        if ( std::operator==<data::ConfigBaseWidgetToy>(
               (const std::shared_ptr<data::ConfigBaseWidgetToy> *)(v4 + 288),
               0LL) )
        {
          common::milog::MiLogStream::create(
            &v49,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/widget/player_widget_comp.cpp",
            "doSetSlot",
            1872);
          v23 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                  &v49,
                  (const char (*)[38])"widget config not found, material_id:");
          v24 = std::__shared_ptr_access<WidgetBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<WidgetBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 256));
          val = WidgetBase::getMaterialId(v24);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &val);
          common::milog::MiLogStream::~MiLogStream(&v49);
          v3 = -1;
          v25 = 0;
        }
        else
        {
          __for_range = &std::__shared_ptr_access<data::ConfigBaseWidgetToy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigBaseWidgetToy,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 288))->tags;
          __for_begin._M_current = std::vector<data::WidgetOccupyTag>::begin(__for_range)._M_current;
          __for_end._M_current = std::vector<data::WidgetOccupyTag>::end(__for_range)._M_current;
          while ( __gnu_cxx::operator!=<data::WidgetOccupyTag *,std::vector<data::WidgetOccupyTag>>(
                    &__for_begin,
                    &__for_end) )
          {
            v26 = __gnu_cxx::__normal_iterator<data::WidgetOccupyTag *,std::vector<data::WidgetOccupyTag>>::operator*(&__for_begin);
            v27 = v26;
            if ( *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v26 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v26);
            }
            widget_tag = *v27;
            PlayerWidgetComp::doClearSlot(this, widget_tag);
            __gnu_cxx::__normal_iterator<data::WidgetOccupyTag *,std::vector<data::WidgetOccupyTag>>::operator++(&__for_begin);
          }
          v25 = 1;
        }
        std::shared_ptr<data::ConfigBaseWidgetToy>::~shared_ptr((std::shared_ptr<data::ConfigBaseWidgetToy> *const)(v4 + 288));
        if ( v25 == 1 )
LABEL_29:
          v28 = 1;
        else
          v28 = 0;
        std::shared_ptr<WidgetBase>::~shared_ptr((std::shared_ptr<WidgetBase> *const)(v4 + 256));
        if ( v28 == 1 )
        {
LABEL_31:
          v29 = std::map<unsigned int,std::shared_ptr<WidgetBase>>::operator[](
                  &this->widget_pool_,
                  (const std::map<unsigned int,std::shared_ptr<WidgetBase>>::key_type *)(v4 + 64));
          std::shared_ptr<WidgetBase>::shared_ptr((std::shared_ptr<WidgetBase> *const)(v4 + 224), v29);
          if ( std::operator==<WidgetBase>((const std::shared_ptr<WidgetBase> *)(v4 + 224), 0LL) )
          {
            common::milog::MiLogStream::create(
              &v49,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/widget/player_widget_comp.cpp",
              "doSetSlot",
              1885);
            common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              &v49,
              (const char (*)[22])"widget_ptr is nullptr");
            common::milog::MiLogStream::~MiLogStream(&v49);
            v3 = -1;
          }
          else
          {
            v30 = std::__shared_ptr_access<WidgetBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<WidgetBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 224));
            WidgetBase::setOccupied(v30, 1, *(_DWORD *)(v4 + 80));
            proto_tag = *(_DWORD *)(v4 + 80) == 2;
            PlayerWidgetComp::sendWidgetSlotChangeNotify(
              this,
              WIDGET_SLOT_OP_ATTACH,
              proto_tag,
              *(_DWORD *)(v4 + 64),
              0);
            v31 = *(_DWORD *)(v4 + 80);
            if ( v31 == 1 )
            {
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8(&this->player_);
              BasicComp = Player::getBasicComp(this->player_);
              PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v49, BasicComp);
              StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 48), 0xB54u, v42);
              std::string::~string(&v49);
              v33 = (unsigned __int64)std::__shared_ptr_access<WidgetBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<WidgetBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 224));
              if ( *(_BYTE *)((v33 >> 3) + 0x7FFF8000) )
                v33 = __asan_report_load8(v33);
              v34 = *(_QWORD *)v33 + 80LL;
              if ( *(_BYTE *)((v34 >> 3) + 0x7FFF8000) )
                v33 = __asan_report_load8(*(_QWORD *)v33 + 80LL);
              if ( !(*(unsigned int (__fastcall **)(unsigned __int64))v34)(v33) )
              {
                common::tools::perf::make_shared<proto_log::PlayerLogBodySetQuickUseWidget>();
                v35 = std::__shared_ptr_access<proto_log::PlayerLogBodySetQuickUseWidget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodySetQuickUseWidget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 256));
                proto_log::PlayerLogBodySetQuickUseWidget::set_material_id(v35, *(_DWORD *)(v4 + 64));
                if ( *(_BYTE *)(((*(&v42._anon_0._M_allocated_capacity + 1) + 24) >> 3) + 0x7FFF8000) )
                  __asan_report_load8(*(&v42._anon_0._M_allocated_capacity + 1) + 24);
                v36 = *(Player **)(*(&v42._anon_0._M_allocated_capacity + 1) + 24);
                std::shared_ptr<google::protobuf::Message>::shared_ptr(
                  (std::shared_ptr<google::protobuf::Message> *const)(v4 + 320),
                  0LL);
                std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodySetQuickUseWidget,void>(
                  (std::shared_ptr<google::protobuf::Message> *const)(v4 + 288),
                  (const std::shared_ptr<proto_log::PlayerLogBodySetQuickUseWidget> *)(v4 + 256));
                Player::printStatLog(v36, (MessagePtr *)(v4 + 288), (MessagePtr *)(v4 + 320), 0xEu);
                std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)(v4 + 288));
                std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)(v4 + 320));
                std::shared_ptr<proto_log::PlayerLogBodySetQuickUseWidget>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodySetQuickUseWidget> *const)(v4 + 256));
              }
              StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 48));
            }
            else if ( v31 == 2 )
            {
              v37 = (unsigned __int64)std::__shared_ptr_access<WidgetBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<WidgetBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 224));
              if ( *(_BYTE *)((v37 >> 3) + 0x7FFF8000) )
                v37 = __asan_report_load8(v37);
              v38 = *(_QWORD *)v37 + 96LL;
              if ( *(_BYTE *)((v38 >> 3) + 0x7FFF8000) )
                v37 = __asan_report_load8(*(_QWORD *)v37 + 96LL);
              (*(void (__fastcall **)(unsigned __int64))v38)(v37);
            }
            v39 = std::map<data::WidgetOccupyTag,std::weak_ptr<WidgetBase>>::operator[](
                    (std::map<data::WidgetOccupyTag,std::weak_ptr<WidgetBase>> *const)(*(&v42._anon_0._M_allocated_capacity
                                                                                       + 1)
                                                                                     + 328),
                    (const std::map<data::WidgetOccupyTag,std::weak_ptr<WidgetBase>>::key_type *)(v4 + 80));
            std::weak_ptr<WidgetBase>::operator=<WidgetBase>(v39, (const std::shared_ptr<WidgetBase> *)(v4 + 224));
            common::milog::MiLogStream::create(
              &v49,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/widget/player_widget_comp.cpp",
              "doSetSlot",
              1922);
            v40 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                    &v49,
                    (const char (*)[37])" set action panel succ, material_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v40, (const unsigned int *)(v4 + 64));
            common::milog::MiLogStream::~MiLogStream(&v49);
            v3 = 0;
          }
          std::shared_ptr<WidgetBase>::~shared_ptr((std::shared_ptr<WidgetBase> *const)(v4 + 224));
        }
      }
    }
  }
  std::shared_ptr<data::ConfigBaseWidgetToy>::~shared_ptr((std::shared_ptr<data::ConfigBaseWidgetToy> *const)(v4 + 192));
  result = v3;
  if ( v42._M_string_length == v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8028) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8028) = -168430091;
  }
  return result;
};

// Line 1928: range 00000000143B0924-00000000143B0D2B
__int64 __fastcall PlayerWidgetComp::doClearSlot(PlayerWidgetComp *const this, data::WidgetOccupyTag tag)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  unsigned int v5; // r14d
  WidgetBase *v6; // rax
  int v7; // eax
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdx
  __int64 result; // rax
  proto::WidgetSlotTag proto_tag; // [rsp+14h] [rbp-DCh]
  std::_Rb_tree_iterator<std::pair<const data::WidgetOccupyTag,std::weak_ptr<WidgetBase> > >::_Self __y; // [rsp+18h] [rbp-D8h] BYREF
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-D0h] BYREF
  char v16[176]; // [rsp+40h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 8 tag:1927 64 8 14 slot_iter:1929 96 16 15 widget_ptr:1935";
  *(_QWORD *)(v2 + 16) = PlayerWidgetComp::doClearSlot;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202178560;
  *(_DWORD *)(v2 + 48) = tag;
  *(std::map<data::WidgetOccupyTag,std::weak_ptr<WidgetBase>>::iterator *)(v2 + 64) = std::map<data::WidgetOccupyTag,std::weak_ptr<WidgetBase>>::find(
                                                                                        &this->widget_slot_map_,
                                                                                        (const std::map<data::WidgetOccupyTag,std::weak_ptr<WidgetBase>>::key_type *)(v2 + 48));
  __y._M_node = std::map<data::WidgetOccupyTag,std::weak_ptr<WidgetBase>>::end(&this->widget_slot_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<const data::WidgetOccupyTag,std::weak_ptr<WidgetBase> > >::_Self *)(v2 + 64),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/widget/player_widget_comp.cpp",
      "doClearSlot",
      1932);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
      &v15,
      (const char (*)[26])"action panel not occupied");
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = 0;
  }
  else
  {
    std::_Rb_tree_iterator<std::pair<data::WidgetOccupyTag const,std::weak_ptr<WidgetBase>>>::operator->((const std::_Rb_tree_iterator<std::pair<const data::WidgetOccupyTag,std::weak_ptr<WidgetBase> > > *const)(v2 + 64));
    std::weak_ptr<WidgetBase>::lock((const std::weak_ptr<WidgetBase> *const)(v2 + 96));
    if ( std::operator==<WidgetBase>(0LL, (const std::shared_ptr<WidgetBase> *)(v2 + 96)) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/widget/player_widget_comp.cpp",
        "doClearSlot",
        1938);
      common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
        &v15,
        (const char (*)[27])"slot widget_ptr is nullptr");
      common::milog::MiLogStream::~MiLogStream(&v15);
      v5 = -1;
    }
    else
    {
      v6 = std::__shared_ptr_access<WidgetBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<WidgetBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      WidgetBase::setOccupied(v6, 0, *(_DWORD *)(v2 + 48));
      proto_tag = WIDGET_SLOT_QUICK_USE;
      v7 = *(_DWORD *)(v2 + 48);
      if ( v7 == 1 )
      {
        v8 = (unsigned __int64)std::__shared_ptr_access<WidgetBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<WidgetBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
          v8 = __asan_report_load8(v8);
        v9 = *(_QWORD *)v8 + 88LL;
        if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
          v8 = __asan_report_load8(*(_QWORD *)v8 + 88LL);
        (*(void (__fastcall **)(unsigned __int64))v9)(v8);
        proto_tag = WIDGET_SLOT_QUICK_USE;
      }
      else if ( v7 == 2 )
      {
        v10 = (unsigned __int64)std::__shared_ptr_access<WidgetBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<WidgetBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
          v10 = __asan_report_load8(v10);
        v11 = *(_QWORD *)v10 + 104LL;
        if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
          v10 = __asan_report_load8(*(_QWORD *)v10 + 104LL);
        (*(void (__fastcall **)(unsigned __int64))v11)(v10);
        proto_tag = WIDGET_SLOT_ATTACH_AVATAR;
      }
      std::map<data::WidgetOccupyTag,std::weak_ptr<WidgetBase>>::erase(
        &this->widget_slot_map_,
        (const std::map<data::WidgetOccupyTag,std::weak_ptr<WidgetBase>>::key_type *)(v2 + 48));
      PlayerWidgetComp::sendWidgetSlotChangeNotify(this, WIDGET_SLOT_OP_DETACH, proto_tag, 0, 0);
      v5 = 0;
    }
    std::shared_ptr<WidgetBase>::~shared_ptr((std::shared_ptr<WidgetBase> *const)(v2 + 96));
  }
  result = v5;
  if ( v16 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1966: range 00000000143B0D2C-00000000143B13B6
PlayerWidgetComp *__fastcall PlayerWidgetComp::createAndInitWidget(
        PlayerWidgetComp *const this,
        PlayerWidgetComp *material_id,
        int a3)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  uint32_t WidgetNewConfig; // eax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rcx
  common::tools::Factory<WidgetBase,std::type_index,PlayerWidgetComp&,Player&,unsigned int> *v10; // r14
  Player *v11; // r15
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rcx
  std::__shared_ptr_access<WidgetBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  std::__shared_ptr_access<WidgetBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // r14
  unsigned __int64 v18; // rax
  unsigned int (__fastcall *v19)(std::__shared_ptr_access<WidgetBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<data::ConfigBaseWidgetToy> *); // r15
  bool v20; // r14
  common::milog::MiLogStream *v21; // rax
  unsigned int *args_2; // [rsp+10h] [rbp-120h]
  std::reference_wrapper<PlayerWidgetComp> v25; // [rsp+38h] [rbp-F8h] BYREF
  std::reference_wrapper<Player> v26; // [rsp+40h] [rbp-F0h] BYREF
  std::type_index v27; // [rsp+48h] [rbp-E8h] BYREF
  std::shared_ptr<data::ConfigBaseWidgetToy> v28; // [rsp+50h] [rbp-E0h] BYREF
  common::milog::MiLogStream v29; // [rsp+60h] [rbp-D0h] BYREF
  char v30[176]; // [rsp+80h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 16 material_id:1965 64 16 20 base_widget_ptr:1967 96 16 15 widget_ptr:1974";
  *(_QWORD *)(v3 + 16) = PlayerWidgetComp::createAndInitWidget;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -219021312;
  v5[536862723] = -202178560;
  *(_DWORD *)(v3 + 48) = a3;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v28);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v28);
  WidgetNewConfig = (unsigned int)JsonConfigMgr::getWidgetNewConfig(&v6->design_config.json_config_mgr);
  WidgetJsonNewConfig::findWidgetConfigById((const WidgetJsonNewConfig *const)(v3 + 64), WidgetNewConfig);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v28);
  if ( !std::operator==<data::ConfigBaseWidgetToy>(0LL, (const std::shared_ptr<data::ConfigBaseWidgetToy> *)(v3 + 64)) )
  {
    v10 = common::tools::Factory<WidgetBase,std::type_index,PlayerWidgetComp &,Player &,unsigned int>::instance();
    if ( *(_BYTE *)(((unsigned __int64)&material_id->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&material_id->player_);
    v26._M_data = std::ref<Player>(material_id->player_)._M_data;
    args_2 = (unsigned int *)std::reference_wrapper<Player>::operator Player&(&v26);
    v25._M_data = std::ref<PlayerWidgetComp>(material_id)._M_data;
    v11 = (Player *)std::reference_wrapper<PlayerWidgetComp>::operator PlayerWidgetComp&(&v25);
    v12 = (unsigned __int64)std::__shared_ptr_access<data::ConfigBaseWidgetToy,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<data::ConfigBaseWidgetToy,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    if ( !v12 )
    {
      __asan_handle_no_return();
      __cxa_bad_typeid();
    }
    if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
      v12 = __asan_report_load8(v12);
    v13 = *(_QWORD *)v12;
    if ( *(_BYTE *)(((unsigned __int64)(v13 - 8) >> 3) + 0x7FFF8000) )
      v13 = __asan_report_load8(v13 - 8);
    std::type_index::type_index(&v27, *(const std::type_info **)(v13 - 8));
    common::tools::Factory<WidgetBase,std::type_index,PlayerWidgetComp &,Player &,unsigned int>::create(
      (common::tools::Factory<WidgetBase,std::type_index,PlayerWidgetComp&,Player&,unsigned int> *const)(v3 + 96),
      (std::type_index)v10,
      (PlayerWidgetComp *)v27._M_target,
      v11,
      args_2);
    if ( std::operator==<WidgetBase>(0LL, (const std::shared_ptr<WidgetBase> *)(v3 + 96)) )
    {
      common::milog::MiLogStream::create(
        &v29,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/widget/player_widget_comp.cpp",
        "createAndInitWidget",
        1977);
      v14 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
              &v29,
              (const char (*)[24])"widget not implemented:");
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 48));
      if ( *(_BYTE *)(((unsigned __int64)&material_id->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&material_id->player_);
    }
    else
    {
      v16 = std::__shared_ptr_access<WidgetBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<WidgetBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      v17 = v16;
      if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v16);
      v18 = (unsigned __int64)(v17->_vptr_WidgetBase + 4);
      if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
        v18 = __asan_report_load8(v17->_vptr_WidgetBase + 4);
      v19 = *(unsigned int (__fastcall **)(std::__shared_ptr_access<WidgetBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<data::ConfigBaseWidgetToy> *))v18;
      std::shared_ptr<data::ConfigBaseWidgetToy>::shared_ptr(
        &v28,
        (const std::shared_ptr<data::ConfigBaseWidgetToy> *)(v3 + 64));
      v20 = v19(v17, &v28) != 0;
      std::shared_ptr<data::ConfigBaseWidgetToy>::~shared_ptr(&v28);
      if ( !v20 )
      {
        std::shared_ptr<WidgetBase>::shared_ptr(
          (std::shared_ptr<WidgetBase> *const)this,
          (std::shared_ptr<WidgetBase> *)(v3 + 96));
        goto LABEL_30;
      }
      common::milog::MiLogStream::create(
        &v29,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/widget/player_widget_comp.cpp",
        "createAndInitWidget",
        1982);
      v21 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
              &v29,
              (const char (*)[31])" init widget by config failed.");
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, (const unsigned int *)(v3 + 48));
      if ( *(_BYTE *)(((unsigned __int64)&material_id->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&material_id->player_);
    }
    operator<<(v15, material_id->player_);
    common::milog::MiLogStream::~MiLogStream(&v29);
    std::shared_ptr<WidgetBase>::shared_ptr((std::shared_ptr<WidgetBase> *const)this, 0LL);
LABEL_30:
    std::shared_ptr<WidgetBase>::~shared_ptr((std::shared_ptr<WidgetBase> *const)(v3 + 96));
    goto LABEL_31;
  }
  common::milog::MiLogStream::create(
    &v29,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/player/widget/player_widget_comp.cpp",
    "createAndInitWidget",
    1970);
  v8 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
         &v29,
         (const char (*)[38])"widget config not found, material_id:");
  v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 48));
  if ( *(_BYTE *)(((unsigned __int64)&material_id->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&material_id->player_);
  operator<<(v9, material_id->player_);
  common::milog::MiLogStream::~MiLogStream(&v29);
  std::shared_ptr<WidgetBase>::shared_ptr((std::shared_ptr<WidgetBase> *const)this, 0LL);
LABEL_31:
  std::shared_ptr<data::ConfigBaseWidgetToy>::~shared_ptr((std::shared_ptr<data::ConfigBaseWidgetToy> *const)(v3 + 64));
  if ( v30 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return this;
};

// Line 1989: range 00000000143B13B8-00000000143B1545
PlayerWidgetComp *__fastcall PlayerWidgetComp::findBaseWidget(
        PlayerWidgetComp *const this,
        __int64 material_id,
        int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<WidgetBase> > >::pointer v6; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<WidgetBase> > >::_Self __y; // [rsp+28h] [rbp-88h] BYREF
  char v10[128]; // [rsp+30h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 16 material_id:1988 64 8 9 iter:1990";
  *(_QWORD *)(v3 + 16) = PlayerWidgetComp::findBaseWidget;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 48) = a3;
  *(std::map<unsigned int,std::shared_ptr<WidgetBase>>::iterator *)(v3 + 64) = std::map<unsigned int,std::shared_ptr<WidgetBase>>::find(
                                                                                 (std::map<unsigned int,std::shared_ptr<WidgetBase>> *const)(material_id + 376),
                                                                                 (const std::map<unsigned int,std::shared_ptr<WidgetBase>>::key_type *)(v3 + 48));
  __y._M_node = std::map<unsigned int,std::shared_ptr<WidgetBase>>::end((std::map<unsigned int,std::shared_ptr<WidgetBase>> *const)(material_id + 376))._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<WidgetBase> > >::_Self *)(v3 + 64),
         &__y) )
  {
    std::shared_ptr<WidgetBase>::shared_ptr((std::shared_ptr<WidgetBase> *const)this, 0LL);
  }
  else
  {
    v6 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<WidgetBase>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<WidgetBase> > > *const)(v3 + 64));
    std::shared_ptr<WidgetBase>::shared_ptr((std::shared_ptr<WidgetBase> *const)this, &v6->second);
  }
  if ( v10 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return this;
};

// Line 1999: range 00000000143B1546-00000000143B1961
PlayerWidgetComp *__fastcall PlayerWidgetComp::getOrCreateBaseWidget(
        PlayerWidgetComp *const this,
        PlayerWidgetComp *material_id,
        int a3)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::shared_ptr<WidgetBase> *v6; // r8
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rcx
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<WidgetBase> > >,bool> v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  std::shared_ptr<WidgetBase> __r; // [rsp+20h] [rbp-B0h] BYREF
  common::milog::MiLogStream v15; // [rsp+30h] [rbp-A0h] BYREF
  char v16[128]; // [rsp+50h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 16 material_id:1998 64 16 15 widget_ptr:2000";
  *(_QWORD *)(v3 + 16) = PlayerWidgetComp::getOrCreateBaseWidget;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202178560;
  *(_DWORD *)(v3 + 48) = a3;
  PlayerWidgetComp::findBaseWidget((PlayerWidgetComp *const)(v3 + 64), (__int64)material_id, *(_DWORD *)(v3 + 48));
  if ( std::operator==<WidgetBase>((const std::shared_ptr<WidgetBase> *)(v3 + 64), 0LL) )
  {
    PlayerWidgetComp::createAndInitWidget((PlayerWidgetComp *const)&__r, material_id, *(_DWORD *)(v3 + 48));
    std::shared_ptr<WidgetBase>::operator=((std::shared_ptr<WidgetBase> *const)(v3 + 64), &__r);
    std::shared_ptr<WidgetBase>::~shared_ptr(&__r);
    if ( std::operator==<WidgetBase>((const std::shared_ptr<WidgetBase> *)(v3 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/widget/player_widget_comp.cpp",
        "getOrCreateBaseWidget",
        2006);
      v7 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
             &v15,
             (const char (*)[39])"create widget ptr failed, material_id:");
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
      if ( *(_BYTE *)(((unsigned __int64)&material_id->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&material_id->player_);
LABEL_8:
      operator<<(v8, material_id->player_);
      common::milog::MiLogStream::~MiLogStream(&v15);
      std::shared_ptr<WidgetBase>::shared_ptr((std::shared_ptr<WidgetBase> *const)this, 0LL);
      goto LABEL_15;
    }
    v9 = std::map<unsigned int,std::shared_ptr<WidgetBase>>::emplace<unsigned int &,std::shared_ptr<WidgetBase>&>(
           &material_id->widget_pool_,
           (unsigned int *)(v3 + 48),
           (std::shared_ptr<WidgetBase> *)(v3 + 64),
           (unsigned int *)&material_id->widget_pool_,
           v6);
    if ( !v9.second )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/widget/player_widget_comp.cpp",
        "getOrCreateBaseWidget",
        2011);
      v10 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
              &v15,
              (const char (*)[32])"duplicated widget, material_id:");
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 48));
      if ( *(_BYTE *)(((unsigned __int64)&material_id->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&material_id->player_);
      goto LABEL_8;
    }
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/widget/player_widget_comp.cpp",
      "getOrCreateBaseWidget",
      2014);
    v11 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
            &v15,
            (const char (*)[33])"create base widget, material_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v15);
  }
  std::shared_ptr<WidgetBase>::shared_ptr(
    (std::shared_ptr<WidgetBase> *const)this,
    (std::shared_ptr<WidgetBase> *)(v3 + 64));
LABEL_15:
  std::shared_ptr<WidgetBase>::~shared_ptr((std::shared_ptr<WidgetBase> *const)(v3 + 64));
  if ( v16 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return this;
};

// Line 2020: range 00000000143B1962-00000000143B21EA
int32_t __cdecl PlayerWidgetComp::quickUseWidgetNew(
        PlayerWidgetComp *const this,
        const proto::QuickUseWidgetReq *req,
        proto::QuickUseWidgetRsp *rsp_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  int32_t v6; // r14d
  WidgetBase *v7; // rax
  uint32_t v8; // edx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdx
  PlayerBasicComp *BasicComp; // rax
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rdx
  std::__shared_ptr_access<proto_log::PlayerLogBodyUseWidget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  Player *player; // r14
  PlayerEventComp *EventComp; // r14
  int32_t result; // eax
  std::string v23; // [rsp+0h] [rbp-1A0h]
  PlayerWidgetComp *thisa; // [rsp+18h] [rbp-188h]
  int32_t cd_ret; // [rsp+20h] [rbp-180h]
  int32_t ret; // [rsp+24h] [rbp-17Ch]
  std::_Rb_tree_iterator<std::pair<const data::WidgetOccupyTag,std::weak_ptr<WidgetBase> > >::_Self __y; // [rsp+28h] [rbp-178h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+30h] [rbp-170h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+40h] [rbp-160h] BYREF
  common::milog::MiLogStream v30; // [rsp+50h] [rbp-150h] BYREF
  char v31[304]; // [rsp+70h] [rbp-130h] BYREF

  *(&v23._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  v23._anon_0._M_allocated_capacity = (std::string::size_type)req;
  v23._M_string_length = (std::string::size_type)rsp_0;
  v3 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "7 48 1 11 holder:2054 64 4 16 material_id:2034 80 4 16 cd_group_id:2040 96 8 14 slot_iter:2021 1"
                        "28 16 15 widget_ptr:2028 160 16 12 log_ptr:2055 192 32 13 trans_no:2052";
  *(_QWORD *)(v3 + 16) = PlayerWidgetComp::quickUseWidgetNew;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -234556924;
  v5[536862723] = -218959360;
  v5[536862724] = -219021312;
  v5[536862725] = -219021312;
  v5[536862727] = -202116109;
  *(_DWORD *)(v3 + 80) = 1;
  *(std::map<data::WidgetOccupyTag,std::weak_ptr<WidgetBase>>::iterator *)(v3 + 96) = std::map<data::WidgetOccupyTag,std::weak_ptr<WidgetBase>>::find(
                                                                                        &this->widget_slot_map_,
                                                                                        (const std::map<data::WidgetOccupyTag,std::weak_ptr<WidgetBase>>::key_type *)(v3 + 80));
  __y._M_node = std::map<data::WidgetOccupyTag,std::weak_ptr<WidgetBase>>::end(&this->widget_slot_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<const data::WidgetOccupyTag,std::weak_ptr<WidgetBase> > >::_Self *)(v3 + 96),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v30,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/widget/player_widget_comp.cpp",
      "quickUseWidgetNew",
      2024);
    common::milog::MiLogStream::operator()(&v30, "quick use slot widget not found");
    common::milog::MiLogStream::~MiLogStream(&v30);
    v6 = 689;
  }
  else
  {
    std::_Rb_tree_iterator<std::pair<data::WidgetOccupyTag const,std::weak_ptr<WidgetBase>>>::operator->((const std::_Rb_tree_iterator<std::pair<const data::WidgetOccupyTag,std::weak_ptr<WidgetBase> > > *const)(v3 + 96));
    std::weak_ptr<WidgetBase>::lock((const std::weak_ptr<WidgetBase> *const)(v3 + 128));
    if ( std::operator==<WidgetBase>(0LL, (const std::shared_ptr<WidgetBase> *)(v3 + 128)) )
    {
      common::milog::MiLogStream::create(
        &v30,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/widget/player_widget_comp.cpp",
        "quickUseWidgetNew",
        2031);
      common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(&v30, (const char (*)[22])"widget_ptr is nullptr");
      common::milog::MiLogStream::~MiLogStream(&v30);
      v6 = -1;
    }
    else
    {
      v7 = std::__shared_ptr_access<WidgetBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<WidgetBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
      *(_DWORD *)(v3 + 64) = WidgetBase::getMaterialId(v7);
      proto::QuickUseWidgetRsp::set_material_id(
        (proto::QuickUseWidgetRsp *const)v23._M_string_length,
        *(_DWORD *)(v3 + 64));
      v8 = *(_DWORD *)(v3 + 64);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      if ( !WidgetBase::checkIsWidgetActive(this->player_, v8) )
      {
        v6 = 1587;
      }
      else
      {
        v9 = (unsigned __int64)std::__shared_ptr_access<WidgetBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<WidgetBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
        if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
          v9 = __asan_report_load8(v9);
        v10 = *(_QWORD *)v9 + 128LL;
        if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
          v9 = __asan_report_load8(*(_QWORD *)v9 + 128LL);
        *(_DWORD *)(v3 + 80) = (*(__int64 (__fastcall **)(unsigned __int64))v10)(v9);
        cd_ret = PlayerWidgetComp::checkWidgetGroupCoolDown(this, *(_DWORD *)(v3 + 80));
        if ( cd_ret )
        {
          common::milog::MiLogStream::create(
            &v30,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/widget/player_widget_comp.cpp",
            "quickUseWidgetNew",
            2044);
          v11 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                  &v30,
                  (const char (*)[44])"checkWidgetGroupCoolDown fail, material_id:");
          v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v11,
                  (const unsigned int *)(v3 + 64));
          v13 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                  v12,
                  (const char (*)[14])" cd_group_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 80));
          common::milog::MiLogStream::~MiLogStream(&v30);
          v6 = cd_ret;
        }
        else
        {
          v14 = (unsigned __int64)std::__shared_ptr_access<WidgetBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<WidgetBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
          if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
            v14 = __asan_report_load8(v14);
          v15 = *(_QWORD *)v14 + 136LL;
          if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
            v14 = __asan_report_load8(*(_QWORD *)v14 + 136LL);
          ret = (*(__int64 (__fastcall **)(unsigned __int64, const proto::QuickUseWidgetReq *, std::string::size_type))v15)(
                  v14,
                  req,
                  v23._M_string_length);
          if ( ret )
          {
            v6 = ret;
          }
          else
          {
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            BasicComp = Player::getBasicComp(this->player_);
            PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)(v3 + 192), BasicComp);
            v17 = (unsigned __int64)std::__shared_ptr_access<WidgetBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<WidgetBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
            if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
              v17 = __asan_report_load8(v17);
            v18 = *(_QWORD *)v17 + 120LL;
            if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
              v17 = __asan_report_load8(*(_QWORD *)v17 + 120LL);
            (*(void (__fastcall **)(unsigned __int64, unsigned __int64))v18)(v17, v3 + 192);
            std::string::basic_string(&v30, v3 + 192);
            StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48), 0xB55u, v23);
            std::string::~string(&v30);
            common::tools::perf::make_shared<proto_log::PlayerLogBodyUseWidget>();
            v19 = std::__shared_ptr_access<proto_log::PlayerLogBodyUseWidget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyUseWidget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
            proto_log::PlayerLogBodyUseWidget::set_material_id(v19, *(_DWORD *)(v3 + 64));
            if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&thisa->player_);
            player = thisa->player_;
            std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
            std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyUseWidget,void>(
              &p_body_ptr,
              (const std::shared_ptr<proto_log::PlayerLogBodyUseWidget> *)(v3 + 160));
            Player::printStatLog(player, &p_body_ptr, &p_body_ext_ptr, 0xEu);
            std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
            std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
            if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&thisa->player_);
            EventComp = Player::getEventComp(thisa->player_);
            common::tools::perf::make_shared<UseWidgetEvent,unsigned int &>(
              (unsigned int *)&p_body_ptr,
              (unsigned int *)(v3 + 64));
            std::shared_ptr<BaseEvent>::shared_ptr<UseWidgetEvent,void>(
              (std::shared_ptr<BaseEvent> *const)&p_body_ext_ptr,
              (std::shared_ptr<UseWidgetEvent> *)&p_body_ptr);
            PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&p_body_ext_ptr);
            std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&p_body_ext_ptr);
            std::shared_ptr<UseWidgetEvent>::~shared_ptr((std::shared_ptr<UseWidgetEvent> *const)&p_body_ptr);
            v6 = 0;
            std::shared_ptr<proto_log::PlayerLogBodyUseWidget>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyUseWidget> *const)(v3 + 160));
            StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48));
            std::string::~string((void *)(v3 + 192));
          }
        }
      }
    }
    std::shared_ptr<WidgetBase>::~shared_ptr((std::shared_ptr<WidgetBase> *const)(v3 + 128));
  }
  result = v6;
  if ( v31 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF801C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 2063: range 00000000143B21EC-00000000143B2418
PlayerWidgetComp *__fastcall PlayerWidgetComp::findSlotWidget(PlayerWidgetComp *const this, __int64 tag, int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::_Rb_tree_iterator<std::pair<const data::WidgetOccupyTag,std::weak_ptr<WidgetBase> > >::_Self __y; // [rsp+28h] [rbp-A8h] BYREF
  common::milog::MiLogStream v9; // [rsp+30h] [rbp-A0h] BYREF
  char v10[128]; // [rsp+50h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 8 tag:2062 64 8 14 slot_iter:2064";
  *(_QWORD *)(v3 + 16) = PlayerWidgetComp::findSlotWidget;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 48) = a3;
  *(std::map<data::WidgetOccupyTag,std::weak_ptr<WidgetBase>>::iterator *)(v3 + 64) = std::map<data::WidgetOccupyTag,std::weak_ptr<WidgetBase>>::find(
                                                                                        (std::map<data::WidgetOccupyTag,std::weak_ptr<WidgetBase>> *const)(tag + 328),
                                                                                        (const std::map<data::WidgetOccupyTag,std::weak_ptr<WidgetBase>>::key_type *)(v3 + 48));
  __y._M_node = std::map<data::WidgetOccupyTag,std::weak_ptr<WidgetBase>>::end((std::map<data::WidgetOccupyTag,std::weak_ptr<WidgetBase>> *const)(tag + 328))._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<const data::WidgetOccupyTag,std::weak_ptr<WidgetBase> > >::_Self *)(v3 + 64),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/widget/player_widget_comp.cpp",
      "findSlotWidget",
      2067);
    common::milog::MiLogStream::operator()(&v9, "quick use slot widget not found");
    common::milog::MiLogStream::~MiLogStream(&v9);
    std::shared_ptr<WidgetBase>::shared_ptr((std::shared_ptr<WidgetBase> *const)this, 0LL);
  }
  else
  {
    std::_Rb_tree_iterator<std::pair<data::WidgetOccupyTag const,std::weak_ptr<WidgetBase>>>::operator->((const std::_Rb_tree_iterator<std::pair<const data::WidgetOccupyTag,std::weak_ptr<WidgetBase> > > *const)(v3 + 64));
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this, &__y);
    std::weak_ptr<WidgetBase>::lock((const std::weak_ptr<WidgetBase> *const)this);
  }
  if ( v10 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return this;
};

// Line 2074: range 00000000143B241A-00000000143B2C44
int32_t __cdecl PlayerWidgetComp::tryTransferOneoffGatherPointDetectorData(
        PlayerWidgetComp *const this,
        const proto::PlayerWidgetCompBin *comp_bin)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  unsigned int v6; // eax
  __int64 v7; // rdx
  char v8; // al
  common::milog::MiLogStream *v9; // rcx
  google::protobuf::uint32 v10; // eax
  proto::WidgetDetailBin *v11; // rax
  common::milog::MiLogStream *v12; // r15
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // r15
  int v15; // eax
  common::milog::MiLogStream *v16; // r14
  common::milog::MiLogStream *v17; // rcx
  int v18; // r15d
  WidgetBase *v19; // rax
  common::milog::MiLogStream *v20; // r14
  common::milog::MiLogStream *v21; // rax
  unsigned int *v22; // rcx
  std::shared_ptr<WidgetBase> *v23; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<WidgetBase> > >,bool> v24; // rax
  common::milog::MiLogStream *v25; // r14
  int32_t result; // eax
  const proto::PlayerWidgetCompBin *comp_bina; // [rsp+10h] [rbp-150h]
  unsigned int val; // [rsp+24h] [rbp-13Ch] BYREF
  google::protobuf::RepeatedPtrField<proto::WidgetOneoffGatherPointDetectorBin>::const_iterator __for_begin; // [rsp+28h] [rbp-138h] BYREF
  google::protobuf::RepeatedPtrField<proto::WidgetOneoffGatherPointDetectorBin>::const_iterator __for_end; // [rsp+30h] [rbp-130h] BYREF
  const google::protobuf::RepeatedPtrField<proto::WidgetOneoffGatherPointDetectorBin> *__for_range; // [rsp+38h] [rbp-128h]
  const proto::WidgetOneoffGatherPointDetectorBin *proto; // [rsp+40h] [rbp-120h]
  proto::WidgetOneoffGatherPointDetectorBin *widget_bin; // [rsp+48h] [rbp-118h]
  common::milog::MiLogStream v34; // [rsp+50h] [rbp-110h] BYREF
  common::milog::MiLogStream v35; // [rsp+70h] [rbp-F0h] BYREF
  char v36[208]; // [rsp+90h] [rbp-D0h] BYREF

  comp_bina = comp_bin;
  v3 = (unsigned __int64)v36;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 16 15 widget_ptr:2091 64 56 12 new_bin:2084";
  *(_QWORD *)(v3 + 16) = PlayerWidgetComp::tryTransferOneoffGatherPointDetectorData;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862723] = -218103808;
  v5[536862724] = -202116109;
  LOBYTE(v6) = proto::PlayerWidgetCompBin::is_oneoff_gather_point_detector_transfered(comp_bin);
  v7 = v6;
  v8 = *(_BYTE *)(((unsigned __int64)&this->is_oneoff_gather_point_detector_transfered_ >> 3) + 0x7FFF8000);
  if ( v8 < 0 )
  {
    LOBYTE(comp_bin) = v8 != 0;
    __asan_report_store1(&this->is_oneoff_gather_point_detector_transfered_, comp_bin, v7);
  }
  this->is_oneoff_gather_point_detector_transfered_ = v7;
  if ( this->is_oneoff_gather_point_detector_transfered_ )
  {
    v2 = 0;
    goto LABEL_30;
  }
  common::milog::MiLogStream::create(
    &v35,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/widget/player_widget_comp.cpp",
    "tryTransferOneoffGatherPointDetectorData",
    2080);
  v9 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
         &v35,
         (const char (*)[55])"transfer oneoff gather point detector data for player:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  operator<<(v9, this->player_);
  common::milog::MiLogStream::~MiLogStream(&v35);
  __for_range = proto::PlayerWidgetCompBin::oneoff_gather_point_detector_list(comp_bina);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::WidgetOneoffGatherPointDetectorBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::WidgetOneoffGatherPointDetectorBin>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::WidgetOneoffGatherPointDetectorBin const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    proto = google::protobuf::internal::RepeatedPtrIterator<proto::WidgetOneoffGatherPointDetectorBin const>::operator*(&__for_begin);
    proto::WidgetBin::WidgetBin((proto::WidgetBin *const)(v3 + 64));
    v10 = proto::WidgetOneoffGatherPointDetectorBin::material_id(proto);
    proto::WidgetBin::set_material_id((proto::WidgetBin *const)(v3 + 64), v10);
    v11 = proto::WidgetBin::mutable_detail_bin((proto::WidgetBin *const)(v3 + 64));
    widget_bin = proto::WidgetDetailBin::mutable_oneoff_gather_point_detector(v11);
    proto::WidgetOneoffGatherPointDetectorBin::CopyFrom(widget_bin, proto);
    common::milog::MiLogStream::create(
      &v34,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/widget/player_widget_comp.cpp",
      "tryTransferOneoffGatherPointDetectorData",
      2089);
    v12 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v34, (const char (*)[5])"uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
    v14 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v13, (const char (*)[13])", to proto: ");
    google::protobuf::Message::ShortDebugString[abi:cxx11]((std::string *)&v35, (google::protobuf::Message *)(v3 + 64));
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v14, (const std::string *)&v35);
    std::string::~string(&v35);
    common::milog::MiLogStream::~MiLogStream(&v34);
    v15 = proto::WidgetOneoffGatherPointDetectorBin::material_id(proto);
    PlayerWidgetComp::createAndInitWidget((PlayerWidgetComp *const)(v3 + 32), this, v15);
    if ( std::operator==<WidgetBase>(0LL, (const std::shared_ptr<WidgetBase> *)(v3 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v35,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/widget/player_widget_comp.cpp",
        "tryTransferOneoffGatherPointDetectorData",
        2094);
      v16 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
              &v35,
              (const char (*)[39])"create widget ptr failed, material_id:");
      val = proto::WidgetOneoffGatherPointDetectorBin::material_id(proto);
      v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &val);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
LABEL_17:
      operator<<(v17, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v35);
      v2 = -1;
      v18 = 0;
      goto LABEL_25;
    }
    v19 = std::__shared_ptr_access<WidgetBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<WidgetBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    if ( WidgetBase::fromBin(v19, (const proto::WidgetBin *)(v3 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v35,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/widget/player_widget_comp.cpp",
        "tryTransferOneoffGatherPointDetectorData",
        2100);
      v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v35, (const char (*)[16])"widget fromBin ");
      val = proto::WidgetOneoffGatherPointDetectorBin::material_id(proto);
      v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &val);
      common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v21, (const char (*)[7])" fails");
      common::milog::MiLogStream::~MiLogStream(&v35);
      v2 = -1;
      v18 = 0;
    }
    else
    {
      val = proto::WidgetOneoffGatherPointDetectorBin::material_id(proto);
      v24 = std::map<unsigned int,std::shared_ptr<WidgetBase>>::emplace<unsigned int,std::shared_ptr<WidgetBase>&>(
              &this->widget_pool_,
              &val,
              (std::shared_ptr<WidgetBase> *)(v3 + 32),
              v22,
              v23);
      if ( !v24.second )
      {
        common::milog::MiLogStream::create(
          &v35,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/widget/player_widget_comp.cpp",
          "tryTransferOneoffGatherPointDetectorData",
          2106);
        v25 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                &v35,
                (const char (*)[32])"duplicated widget, material_id:");
        val = proto::WidgetOneoffGatherPointDetectorBin::material_id(proto);
        v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, &val);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        goto LABEL_17;
      }
      v18 = 1;
    }
LABEL_25:
    std::shared_ptr<WidgetBase>::~shared_ptr((std::shared_ptr<WidgetBase> *const)(v3 + 32));
    proto::WidgetBin::~WidgetBin((proto::WidgetBin *const)(v3 + 64));
    if ( v18 != 1 )
      goto LABEL_30;
    google::protobuf::internal::RepeatedPtrIterator<proto::WidgetOneoffGatherPointDetectorBin const>::operator++(&__for_begin);
  }
  if ( *(char *)(((unsigned __int64)&this->is_oneoff_gather_point_detector_transfered_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(
      &this->is_oneoff_gather_point_detector_transfered_,
      &__for_end,
      &this->is_oneoff_gather_point_detector_transfered_);
  this->is_oneoff_gather_point_detector_transfered_ = 1;
  v2 = 0;
LABEL_30:
  result = v2;
  if ( v36 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF800C) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 2115: range 00000000143B2C46-00000000143B347A
int32_t __cdecl PlayerWidgetComp::tryTransferClientCollectorData(
        PlayerWidgetComp *const this,
        const proto::PlayerWidgetCompBin *comp_bin)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  bool is_client_collector_transfered; // cl
  char v7; // dl
  __int64 v8; // rdx
  common::milog::MiLogStream *v9; // rcx
  google::protobuf::uint32 v10; // eax
  proto::WidgetDetailBin *v11; // rax
  common::milog::MiLogStream *v12; // r15
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // r15
  int v15; // eax
  common::milog::MiLogStream *v16; // r14
  common::milog::MiLogStream *v17; // rcx
  int v18; // r15d
  WidgetBase *v19; // rax
  common::milog::MiLogStream *v20; // r14
  common::milog::MiLogStream *v21; // rax
  unsigned int *v22; // rcx
  std::shared_ptr<WidgetBase> *v23; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<WidgetBase> > >,bool> v24; // rax
  common::milog::MiLogStream *v25; // r14
  __int64 v26; // rsi
  __int64 v27; // rdx
  int32_t result; // eax
  const proto::PlayerWidgetCompBin *comp_bina; // [rsp+10h] [rbp-150h]
  unsigned int val; // [rsp+24h] [rbp-13Ch] BYREF
  google::protobuf::RepeatedPtrField<proto::WidgetClientCollectorBin>::const_iterator __for_begin; // [rsp+28h] [rbp-138h] BYREF
  google::protobuf::RepeatedPtrField<proto::WidgetClientCollectorBin>::const_iterator __for_end; // [rsp+30h] [rbp-130h] BYREF
  const google::protobuf::RepeatedPtrField<proto::WidgetClientCollectorBin> *__for_range; // [rsp+38h] [rbp-128h]
  const proto::WidgetClientCollectorBin *proto; // [rsp+40h] [rbp-120h]
  proto::WidgetClientCollectorBin *widget_bin; // [rsp+48h] [rbp-118h]
  common::milog::MiLogStream v36; // [rsp+50h] [rbp-110h] BYREF
  common::milog::MiLogStream v37; // [rsp+70h] [rbp-F0h] BYREF
  char v38[208]; // [rsp+90h] [rbp-D0h] BYREF

  comp_bina = comp_bin;
  v3 = (unsigned __int64)v38;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 16 15 widget_ptr:2132 64 56 12 new_bin:2125";
  *(_QWORD *)(v3 + 16) = PlayerWidgetComp::tryTransferClientCollectorData;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862723] = -218103808;
  v5[536862724] = -202116109;
  is_client_collector_transfered = proto::PlayerWidgetCompBin::is_client_collector_transfered(comp_bin);
  v7 = *(_BYTE *)(((unsigned __int64)&this->is_client_collector_transfered_ >> 3) + 0x7FFF8000);
  LOBYTE(comp_bin) = v7 != 0;
  v8 = (v7 != 0) & (unsigned __int8)((((unsigned __int8)this - 87) & 7) >= v7);
  if ( (_BYTE)v8 )
    __asan_report_store1(&this->is_client_collector_transfered_, comp_bin, v8);
  this->is_client_collector_transfered_ = is_client_collector_transfered;
  if ( this->is_client_collector_transfered_ )
  {
    v2 = 0;
    goto LABEL_30;
  }
  common::milog::MiLogStream::create(
    &v37,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/widget/player_widget_comp.cpp",
    "tryTransferClientCollectorData",
    2121);
  v9 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
         &v37,
         (const char (*)[43])"transfer client collector data for player:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  operator<<(v9, this->player_);
  common::milog::MiLogStream::~MiLogStream(&v37);
  __for_range = proto::PlayerWidgetCompBin::client_collector_list(comp_bina);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::WidgetClientCollectorBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::WidgetClientCollectorBin>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::WidgetClientCollectorBin const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    proto = google::protobuf::internal::RepeatedPtrIterator<proto::WidgetClientCollectorBin const>::operator*(&__for_begin);
    proto::WidgetBin::WidgetBin((proto::WidgetBin *const)(v3 + 64));
    v10 = proto::WidgetClientCollectorBin::material_id(proto);
    proto::WidgetBin::set_material_id((proto::WidgetBin *const)(v3 + 64), v10);
    v11 = proto::WidgetBin::mutable_detail_bin((proto::WidgetBin *const)(v3 + 64));
    widget_bin = proto::WidgetDetailBin::mutable_client_collector(v11);
    proto::WidgetClientCollectorBin::CopyFrom(widget_bin, proto);
    common::milog::MiLogStream::create(
      &v36,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/widget/player_widget_comp.cpp",
      "tryTransferClientCollectorData",
      2130);
    v12 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v36, (const char (*)[5])"uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
    v14 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v13, (const char (*)[13])", to proto: ");
    google::protobuf::Message::ShortDebugString[abi:cxx11]((std::string *)&v37, (google::protobuf::Message *)(v3 + 64));
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v14, (const std::string *)&v37);
    std::string::~string(&v37);
    common::milog::MiLogStream::~MiLogStream(&v36);
    v15 = proto::WidgetClientCollectorBin::material_id(proto);
    PlayerWidgetComp::createAndInitWidget((PlayerWidgetComp *const)(v3 + 32), this, v15);
    if ( std::operator==<WidgetBase>(0LL, (const std::shared_ptr<WidgetBase> *)(v3 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v37,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/widget/player_widget_comp.cpp",
        "tryTransferClientCollectorData",
        2135);
      v16 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
              &v37,
              (const char (*)[39])"create widget ptr failed, material_id:");
      val = proto::WidgetClientCollectorBin::material_id(proto);
      v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &val);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
LABEL_17:
      operator<<(v17, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v37);
      v2 = -1;
      v18 = 0;
      goto LABEL_25;
    }
    v19 = std::__shared_ptr_access<WidgetBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<WidgetBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    if ( WidgetBase::fromBin(v19, (const proto::WidgetBin *)(v3 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v37,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/widget/player_widget_comp.cpp",
        "tryTransferClientCollectorData",
        2141);
      v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v37, (const char (*)[16])"widget fromBin ");
      val = proto::WidgetClientCollectorBin::material_id(proto);
      v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &val);
      common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v21, (const char (*)[7])" fails");
      common::milog::MiLogStream::~MiLogStream(&v37);
      v2 = -1;
      v18 = 0;
    }
    else
    {
      val = proto::WidgetClientCollectorBin::material_id(proto);
      v24 = std::map<unsigned int,std::shared_ptr<WidgetBase>>::emplace<unsigned int,std::shared_ptr<WidgetBase>&>(
              &this->widget_pool_,
              &val,
              (std::shared_ptr<WidgetBase> *)(v3 + 32),
              v22,
              v23);
      if ( !v24.second )
      {
        common::milog::MiLogStream::create(
          &v37,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/widget/player_widget_comp.cpp",
          "tryTransferClientCollectorData",
          2147);
        v25 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                &v37,
                (const char (*)[32])"duplicated widget, material_id:");
        val = proto::WidgetClientCollectorBin::material_id(proto);
        v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, &val);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        goto LABEL_17;
      }
      v18 = 1;
    }
LABEL_25:
    std::shared_ptr<WidgetBase>::~shared_ptr((std::shared_ptr<WidgetBase> *const)(v3 + 32));
    proto::WidgetBin::~WidgetBin((proto::WidgetBin *const)(v3 + 64));
    if ( v18 != 1 )
      goto LABEL_30;
    google::protobuf::internal::RepeatedPtrIterator<proto::WidgetClientCollectorBin const>::operator++(&__for_begin);
  }
  v26 = ((_BYTE)this - 87) & 7;
  v27 = (*(_BYTE *)(((unsigned __int64)&this->is_client_collector_transfered_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v26 >= *(_BYTE *)(((unsigned __int64)&this->is_client_collector_transfered_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v27 )
    __asan_report_store1(&this->is_client_collector_transfered_, v26, v27);
  this->is_client_collector_transfered_ = 1;
  v2 = 0;
LABEL_30:
  result = v2;
  if ( v38 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF800C) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 2157: range 00000000143B347C-00000000143B3791
WidgetBasePtr __cdecl PlayerWidgetComp::getActionPanelWidget(const PlayerWidgetComp *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rcx
  WidgetBasePtr result; // rax
  std::map<data::WidgetOccupyTag,std::weak_ptr<WidgetBase>>::key_type __x; // [rsp+14h] [rbp-ACh] BYREF
  std::_Rb_tree_const_iterator<std::pair<const data::WidgetOccupyTag,std::weak_ptr<WidgetBase> > >::_Self __y; // [rsp+18h] [rbp-A8h] BYREF
  common::milog::MiLogStream v9; // [rsp+20h] [rbp-A0h] BYREF
  char v10[128]; // [rsp+40h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 14 slot_iter:2158 64 16 15 widget_ptr:2165";
  *(_QWORD *)(v2 + 16) = PlayerWidgetComp::getActionPanelWidget;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202178560;
  __x = ActionPanel;
  *(std::map<data::WidgetOccupyTag,std::weak_ptr<WidgetBase>>::const_iterator *)(v2 + 32) = std::map<data::WidgetOccupyTag,std::weak_ptr<WidgetBase>>::find(
                                                                                              (const std::map<data::WidgetOccupyTag,std::weak_ptr<WidgetBase>> *const)(v1 + 328),
                                                                                              &__x);
  __y._M_node = std::map<data::WidgetOccupyTag,std::weak_ptr<WidgetBase>>::end((const std::map<data::WidgetOccupyTag,std::weak_ptr<WidgetBase>> *const)(v1 + 328))._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<const data::WidgetOccupyTag,std::weak_ptr<WidgetBase> > >::_Self *)(v2 + 32),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/widget/player_widget_comp.cpp",
      "getActionPanelWidget",
      2161);
    v5 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
           &v9,
           (const char (*)[41])"quick use slot widget not found, player:");
    if ( *(_BYTE *)(((unsigned __int64)(v1 + 24) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v1 + 24);
    operator<<(v5, *(const Player **)(v1 + 24));
    common::milog::MiLogStream::~MiLogStream(&v9);
    std::shared_ptr<WidgetBase>::shared_ptr((std::shared_ptr<WidgetBase> *const)this, 0LL);
  }
  else
  {
    std::_Rb_tree_const_iterator<std::pair<data::WidgetOccupyTag const,std::weak_ptr<WidgetBase>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::WidgetOccupyTag,std::weak_ptr<WidgetBase> > > *const)(v2 + 32));
    std::weak_ptr<WidgetBase>::lock((const std::weak_ptr<WidgetBase> *const)(v2 + 64));
    if ( std::operator==<WidgetBase>(0LL, (const std::shared_ptr<WidgetBase> *)(v2 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v9,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/widget/player_widget_comp.cpp",
        "getActionPanelWidget",
        2168);
      common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(&v9, (const char (*)[22])"widget_ptr is nullptr");
      common::milog::MiLogStream::~MiLogStream(&v9);
      std::shared_ptr<WidgetBase>::shared_ptr((std::shared_ptr<WidgetBase> *const)this, 0LL);
    }
    else
    {
      std::shared_ptr<WidgetBase>::shared_ptr(
        (std::shared_ptr<WidgetBase> *const)this,
        (std::shared_ptr<WidgetBase> *)(v2 + 64));
    }
    std::shared_ptr<WidgetBase>::~shared_ptr((std::shared_ptr<WidgetBase> *const)(v2 + 64));
  }
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  result._M_ptr = (std::__shared_ptr<WidgetBase,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 2176: range 00000000143B3792-00000000143B3E60
int32_t __cdecl PlayerWidgetComp::doCapture(
        PlayerWidgetComp *const this,
        const proto::WidgetCaptureAnimalReq *req,
        proto::WidgetCaptureAnimalRsp *rsp_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  int32_t v6; // r14d
  WidgetBase *v7; // rax
  common::milog::MiLogStream *v8; // r14
  WidgetBase *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  uint32_t WidgetNewConfig; // eax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rdx
  int32_t result; // eax
  std::map<data::WidgetOccupyTag,std::weak_ptr<WidgetBase>>::key_type __x; // [rsp+20h] [rbp-120h] BYREF
  int32_t ret; // [rsp+24h] [rbp-11Ch]
  std::_Rb_tree_iterator<std::pair<const data::WidgetOccupyTag,std::weak_ptr<WidgetBase> > >::_Self __y; // [rsp+28h] [rbp-118h] BYREF
  common::milog::MiLogStream v23; // [rsp+30h] [rbp-110h] BYREF
  char v24[240]; // [rsp+50h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 48 4 16 material_id:2177 64 8 14 slot_iter:2179 96 16 15 widget_ptr:2186 128 16 22 config_widg"
                        "et_ptr:2198 160 16 36 ability_group_widget_config_ptr:2210";
  *(_QWORD *)(v3 + 16) = PlayerWidgetComp::doCapture;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -219021312;
  v5[536862724] = -219021312;
  v5[536862725] = -202178560;
  *(_DWORD *)(v3 + 48) = proto::WidgetCaptureAnimalReq::material_id(req);
  __x = ActionPanel;
  *(std::map<data::WidgetOccupyTag,std::weak_ptr<WidgetBase>>::iterator *)(v3 + 64) = std::map<data::WidgetOccupyTag,std::weak_ptr<WidgetBase>>::find(
                                                                                        &this->widget_slot_map_,
                                                                                        &__x);
  __y._M_node = std::map<data::WidgetOccupyTag,std::weak_ptr<WidgetBase>>::end(&this->widget_slot_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<const data::WidgetOccupyTag,std::weak_ptr<WidgetBase> > >::_Self *)(v3 + 64),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/widget/player_widget_comp.cpp",
      "doCapture",
      2182);
    common::milog::MiLogStream::operator()(&v23, "quick use slot widget not found");
    common::milog::MiLogStream::~MiLogStream(&v23);
    v6 = 689;
  }
  else
  {
    std::_Rb_tree_iterator<std::pair<data::WidgetOccupyTag const,std::weak_ptr<WidgetBase>>>::operator->((const std::_Rb_tree_iterator<std::pair<const data::WidgetOccupyTag,std::weak_ptr<WidgetBase> > > *const)(v3 + 64));
    std::weak_ptr<WidgetBase>::lock((const std::weak_ptr<WidgetBase> *const)(v3 + 96));
    if ( std::operator==<WidgetBase>(0LL, (const std::shared_ptr<WidgetBase> *)(v3 + 96)) )
    {
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/widget/player_widget_comp.cpp",
        "doCapture",
        2189);
      common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(&v23, (const char (*)[22])"widget_ptr is nullptr");
      common::milog::MiLogStream::~MiLogStream(&v23);
      v6 = -1;
    }
    else
    {
      v7 = std::__shared_ptr_access<WidgetBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<WidgetBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      if ( WidgetBase::getMaterialId(v7) == *(_DWORD *)(v3 + 48) )
      {
        proto::WidgetCaptureAnimalRsp::set_material_id(rsp_0, *(_DWORD *)(v3 + 48));
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)(v3 + 160));
        v12 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
        WidgetNewConfig = (unsigned int)JsonConfigMgr::getWidgetNewConfig(&v12->design_config.json_config_mgr);
        WidgetJsonNewConfig::findWidgetConfigById((const WidgetJsonNewConfig *const)(v3 + 128), WidgetNewConfig);
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 160));
        if ( std::operator==<data::ConfigBaseWidgetToy>(
               0LL,
               (const std::shared_ptr<data::ConfigBaseWidgetToy> *)(v3 + 128)) )
        {
          common::milog::MiLogStream::create(
            &v23,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/widget/player_widget_comp.cpp",
            "doCapture",
            2201);
          v14 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                  &v23,
                  (const char (*)[29])"findWidgetConfigById fails, ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream(&v23);
          v6 = -1;
        }
        else
        {
          ret = PlayerWidgetComp::commonCheckWidgetBeforeUse(this, *(_DWORD *)(v3 + 48));
          if ( ret )
          {
            v6 = ret;
          }
          else
          {
            std::dynamic_pointer_cast<data::ConfigWidgetUseAttachAbilityGroup,data::ConfigBaseWidgetToy>((const std::shared_ptr<data::ConfigBaseWidgetToy> *)(v3 + 160));
            if ( std::operator==<data::ConfigWidgetUseAttachAbilityGroup>(
                   0LL,
                   (const std::shared_ptr<data::ConfigWidgetUseAttachAbilityGroup> *)(v3 + 160)) )
            {
              common::milog::MiLogStream::create(
                &v23,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/widget/player_widget_comp.cpp",
                "doCapture",
                2213);
              v15 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                      &v23,
                      (const char (*)[49])"material not ConfigWidgetUseAttachAbilityGroup, ");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v15,
                (const unsigned int *)(v3 + 48));
              common::milog::MiLogStream::~MiLogStream(&v23);
              v6 = -1;
            }
            else
            {
              v16 = (unsigned __int64)std::__shared_ptr_access<WidgetBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<WidgetBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
              if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
                v16 = __asan_report_load8(v16);
              v17 = *(_QWORD *)v16 + 152LL;
              if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
                v16 = __asan_report_load8(*(_QWORD *)v16 + 152LL);
              ret = (*(__int64 (__fastcall **)(unsigned __int64, const proto::WidgetCaptureAnimalReq *, proto::WidgetCaptureAnimalRsp *))v17)(
                      v16,
                      req,
                      rsp_0);
              if ( ret )
                v6 = ret;
              else
                v6 = 0;
            }
            std::shared_ptr<data::ConfigWidgetUseAttachAbilityGroup>::~shared_ptr((std::shared_ptr<data::ConfigWidgetUseAttachAbilityGroup> *const)(v3 + 160));
          }
        }
        std::shared_ptr<data::ConfigBaseWidgetToy>::~shared_ptr((std::shared_ptr<data::ConfigBaseWidgetToy> *const)(v3 + 128));
      }
      else
      {
        common::milog::MiLogStream::create(
          &v23,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/widget/player_widget_comp.cpp",
          "doCapture",
          2194);
        v8 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
               &v23,
               (const char (*)[19])"client materialid:");
        v9 = std::__shared_ptr_access<WidgetBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<WidgetBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        __x = WidgetBase::getMaterialId(v9);
        v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)&__x);
        v11 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                v10,
                (const char (*)[22])" not equal cur equip:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream(&v23);
        v6 = -1;
      }
    }
    std::shared_ptr<WidgetBase>::~shared_ptr((std::shared_ptr<WidgetBase> *const)(v3 + 96));
  }
  result = v6;
  if ( v24 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 2225: range 00000000143B3E62-00000000143B433A
std::set<unsigned int> *__fastcall PlayerWidgetComp::getWidgetCaptureMonsterMatchTagsSet(
        std::set<unsigned int> *retstr,
        const PlayerWidgetComp *const this,
        uint32_t material_id,
        uint32_t monster_id)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  uint32_t WidgetNewConfig; // eax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rcx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v12; // rax
  _DWORD *v13; // rdx
  std::vector<unsigned int>::iterator __for_begin; // [rsp+28h] [rbp-148h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+30h] [rbp-140h] BYREF
  std::_Rb_tree_const_iterator<unsigned int>::_Self __x; // [rsp+38h] [rbp-138h] BYREF
  std::_Rb_tree_const_iterator<unsigned int>::_Self __y; // [rsp+40h] [rbp-130h] BYREF
  std::vector<unsigned int> *__for_range; // [rsp+48h] [rbp-128h]
  std::shared_ptr<Config> v22; // [rsp+50h] [rbp-120h] BYREF
  std::shared_ptr<data::ConfigBaseWidgetToy> v23; // [rsp+60h] [rbp-110h] BYREF
  common::milog::MiLogStream v24; // [rsp+70h] [rbp-100h] BYREF
  char v25[224]; // [rsp+90h] [rbp-E0h] BYREF

  v4 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(192LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 48 4 16 capture_tag:2234 64 4 16 material_id:2224 80 16 37 config_widget_capture_animal_ptr:22"
                        "27 112 48 33 monster_can_capture_tags_set:2233";
  *(_QWORD *)(v4 + 16) = PlayerWidgetComp::getWidgetCaptureMonsterMatchTagsSet;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = 61956;
  v6[536862723] = 62194;
  v6[536862725] = -202116109;
  *(_DWORD *)(v4 + 64) = material_id;
  std::set<unsigned int>::set(retstr);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v22);
  v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v22);
  WidgetNewConfig = (unsigned int)JsonConfigMgr::getWidgetNewConfig(&v7->design_config.json_config_mgr);
  WidgetJsonNewConfig::findWidgetConfigById((const WidgetJsonNewConfig *const)&v23, WidgetNewConfig);
  std::dynamic_pointer_cast<data::ConfigWidgetCaptureAnimal,data::ConfigBaseWidgetToy>((const std::shared_ptr<data::ConfigBaseWidgetToy> *)(v4 + 80));
  std::shared_ptr<data::ConfigBaseWidgetToy>::~shared_ptr(&v23);
  std::shared_ptr<Config>::~shared_ptr(&v22);
  if ( std::operator==<data::ConfigWidgetCaptureAnimal>(
         0LL,
         (const std::shared_ptr<data::ConfigWidgetCaptureAnimal> *)(v4 + 80)) )
  {
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/widget/player_widget_comp.cpp",
      "getWidgetCaptureMonsterMatchTagsSet",
      2230);
    v9 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
           &v24,
           (const char (*)[56])"ConfigWidgetCaptureAnimal config not found material_id:");
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v4 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    operator<<(v10, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v24);
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v23);
    v11 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v23);
    MonsterExcelConfigMgr::getMonsterTagsSet(
      (std::set<unsigned int> *)(v4 + 112),
      &v11->design_config.txt_config_mgr.monster_config_mgr,
      monster_id);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v23);
    __for_range = &std::__shared_ptr_access<data::ConfigWidgetCaptureAnimal,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigWidgetCaptureAnimal,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 80))->capture_tag_array;
    __for_begin._M_current = std::vector<unsigned int>::begin(__for_range)._M_current;
    __for_end._M_current = std::vector<unsigned int>::end(__for_range)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
    {
      v12 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
      v13 = v12;
      if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v12);
      }
      *(_DWORD *)(v4 + 48) = *v13;
      if ( *(_DWORD *)(v4 + 48) )
      {
        __y._M_node = std::set<unsigned int>::end((const std::set<unsigned int> *const)(v4 + 112))._M_node;
        __x._M_node = std::set<unsigned int>::find(
                        (const std::set<unsigned int> *const)(v4 + 112),
                        (const std::set<unsigned int>::key_type *)(v4 + 48))._M_node;
        if ( std::operator!=(&__x, &__y) )
          std::set<unsigned int>::insert(retstr, (const std::set<unsigned int>::value_type *)(v4 + 48));
      }
      __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
    }
    std::set<unsigned int>::~set((std::set<unsigned int> *const)(v4 + 112));
  }
  std::shared_ptr<data::ConfigWidgetCaptureAnimal>::~shared_ptr((std::shared_ptr<data::ConfigWidgetCaptureAnimal> *const)(v4 + 80));
  if ( v25 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};

// Line 2250: range 00000000143B4AB6-00000000143B566C
int32_t __cdecl PlayerWidgetComp::doUpdateExtraCDGroup(
        PlayerWidgetComp *const this,
        const proto::WidgetUpdateExtraCDReq *req,
        proto::WidgetUpdateExtraCDRsp *rsp_0)
{
  int32_t v3; // r14d
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  proto::WIDGET_EXTRA_CD_TYPE v7; // edx
  google::protobuf::uint32 v8; // edx
  WidgetBase *v9; // rax
  common::milog::MiLogStream *v10; // r14
  WidgetBase *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  uint32_t WidgetNewConfig; // eax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  std::__shared_ptr_access<data::ConfigWidgetUseAttachAbilityGroup,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // r14
  std::__shared_ptr_access<data::ConfigWidgetUseAttachAbilityGroup,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  std::__shared_ptr_access<data::ConfigWidgetUseAttachAbilityGroup,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // r14
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  int v30; // r15d
  std::__shared_ptr_access<WidgetCaptureAnimal,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // r14
  int32_t result; // eax
  std::map<data::WidgetOccupyTag,std::weak_ptr<WidgetBase>>::key_type __x; // [rsp+2Ch] [rbp-164h] BYREF
  int32_t ret; // [rsp+30h] [rbp-160h]
  int32_t ret_0; // [rsp+34h] [rbp-15Ch]
  std::_Rb_tree_iterator<std::pair<const data::WidgetOccupyTag,std::weak_ptr<WidgetBase> > >::_Self __y; // [rsp+38h] [rbp-158h] BYREF
  common::milog::MiLogStream v41; // [rsp+40h] [rbp-150h] BYREF
  char v42[304]; // [rsp+60h] [rbp-130h] BYREF

  v4 = (unsigned __int64)v42;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(256LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "8 32 4 16 material_id:2251 48 4 20 shared_cd_group:2301 64 8 14 slot_iter:2257 96 16 15 widget_p"
                        "tr:2264 128 16 22 config_widget_ptr:2275 160 16 36 ability_group_widget_config_ptr:2287 192 16 3"
                        "0 func_set_cool_info_to_rsp:2307 224 16 30 capture_animal_widget_ptr:2352";
  *(_QWORD *)(v4 + 16) = PlayerWidgetComp::doUpdateExtraCDGroup;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -218959360;
  v6[536862723] = -219021312;
  v6[536862724] = -219021312;
  v6[536862725] = -219021312;
  v6[536862726] = -219021312;
  v6[536862727] = -202178560;
  *(_DWORD *)(v4 + 32) = proto::WidgetUpdateExtraCDReq::material_id(req);
  proto::WidgetUpdateExtraCDRsp::set_material_id(rsp_0, *(_DWORD *)(v4 + 32));
  v7 = proto::WidgetUpdateExtraCDReq::extra_cd_type(req);
  proto::WidgetUpdateExtraCDRsp::set_extra_cd_type(rsp_0, v7);
  v8 = proto::WidgetUpdateExtraCDReq::cd_group(req);
  proto::WidgetUpdateExtraCDRsp::set_cd_group(rsp_0, v8);
  __x = ActionPanel;
  *(std::map<data::WidgetOccupyTag,std::weak_ptr<WidgetBase>>::iterator *)(v4 + 64) = std::map<data::WidgetOccupyTag,std::weak_ptr<WidgetBase>>::find(
                                                                                        &this->widget_slot_map_,
                                                                                        &__x);
  __y._M_node = std::map<data::WidgetOccupyTag,std::weak_ptr<WidgetBase>>::end(&this->widget_slot_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<const data::WidgetOccupyTag,std::weak_ptr<WidgetBase> > >::_Self *)(v4 + 64),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v41,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/widget/player_widget_comp.cpp",
      "doUpdateExtraCDGroup",
      2260);
    common::milog::MiLogStream::operator()(&v41, "quick use slot widget not found");
    common::milog::MiLogStream::~MiLogStream(&v41);
    v3 = 689;
  }
  else
  {
    std::_Rb_tree_iterator<std::pair<data::WidgetOccupyTag const,std::weak_ptr<WidgetBase>>>::operator->((const std::_Rb_tree_iterator<std::pair<const data::WidgetOccupyTag,std::weak_ptr<WidgetBase> > > *const)(v4 + 64));
    std::weak_ptr<WidgetBase>::lock((const std::weak_ptr<WidgetBase> *const)(v4 + 96));
    if ( std::operator==<WidgetBase>(0LL, (const std::shared_ptr<WidgetBase> *)(v4 + 96)) )
    {
      common::milog::MiLogStream::create(
        &v41,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/widget/player_widget_comp.cpp",
        "doUpdateExtraCDGroup",
        2267);
      common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(&v41, (const char (*)[22])"widget_ptr is nullptr");
      common::milog::MiLogStream::~MiLogStream(&v41);
      v3 = -1;
    }
    else
    {
      v9 = std::__shared_ptr_access<WidgetBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<WidgetBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
      if ( WidgetBase::getMaterialId(v9) == *(_DWORD *)(v4 + 32) )
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)(v4 + 224));
        v14 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 224));
        WidgetNewConfig = (unsigned int)JsonConfigMgr::getWidgetNewConfig(&v14->design_config.json_config_mgr);
        WidgetJsonNewConfig::findWidgetConfigById((const WidgetJsonNewConfig *const)(v4 + 128), WidgetNewConfig);
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 224));
        if ( std::operator==<data::ConfigBaseWidgetToy>(
               0LL,
               (const std::shared_ptr<data::ConfigBaseWidgetToy> *)(v4 + 128)) )
        {
          common::milog::MiLogStream::create(
            &v41,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/widget/player_widget_comp.cpp",
            "doUpdateExtraCDGroup",
            2278);
          v16 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                  &v41,
                  (const char (*)[29])"findWidgetConfigById fails, ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v4 + 32));
          common::milog::MiLogStream::~MiLogStream(&v41);
          v3 = -1;
        }
        else
        {
          ret = PlayerWidgetComp::commonCheckWidgetBeforeUse(this, *(_DWORD *)(v4 + 32));
          if ( ret )
          {
            v3 = ret;
          }
          else
          {
            std::dynamic_pointer_cast<data::ConfigWidgetUseAttachAbilityGroup,data::ConfigBaseWidgetToy>((const std::shared_ptr<data::ConfigBaseWidgetToy> *)(v4 + 160));
            if ( std::operator==<data::ConfigWidgetUseAttachAbilityGroup>(
                   0LL,
                   (const std::shared_ptr<data::ConfigWidgetUseAttachAbilityGroup> *)(v4 + 160)) )
            {
              common::milog::MiLogStream::create(
                &v41,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/widget/player_widget_comp.cpp",
                "doUpdateExtraCDGroup",
                2290);
              v17 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                      &v41,
                      (const char (*)[49])"material not ConfigWidgetUseAttachAbilityGroup, ");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v17,
                (const unsigned int *)(v4 + 32));
              common::milog::MiLogStream::~MiLogStream(&v41);
              v3 = -1;
            }
            else if ( proto::WidgetUpdateExtraCDReq::extra_cd_type(req) == WIDGET_EXTRA_CD_TYPE_E_SKILL_SHARED )
            {
              v18 = std::__shared_ptr_access<data::ConfigWidgetUseAttachAbilityGroup,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigWidgetUseAttachAbilityGroup,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
              if ( *(_BYTE *)(((unsigned __int64)&v18->shared_cd_group >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&v18->shared_cd_group >> 3) + 0x7FFF8000) <= 3 )
              {
                v18 = (std::__shared_ptr_access<data::ConfigWidgetUseAttachAbilityGroup,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v18->shared_cd_group);
              }
              if ( v18->shared_cd_group )
              {
                v23 = std::__shared_ptr_access<data::ConfigWidgetUseAttachAbilityGroup,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigWidgetUseAttachAbilityGroup,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
                if ( *(_BYTE *)(((unsigned __int64)&v23->shared_cd_group >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&v23->shared_cd_group >> 3) + 0x7FFF8000) <= 3 )
                {
                  v23 = (std::__shared_ptr_access<data::ConfigWidgetUseAttachAbilityGroup,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v23->shared_cd_group);
                }
                *(_DWORD *)(v4 + 48) = v23->shared_cd_group;
                if ( proto::WidgetUpdateExtraCDReq::cd_group(req) == *(_DWORD *)(v4 + 48) )
                {
                  *(_QWORD *)(v4 + 192) = this;
                  *(_DWORD *)(v4 + 200) = *(_DWORD *)(v4 + 32);
                  ret_0 = PlayerWidgetComp::checkWidgetGroupCoolDown(this, *(_DWORD *)(v4 + 48));
                  if ( ret_0 )
                  {
                    PlayerWidgetComp::doUpdateExtraCDGroup(proto::WidgetUpdateExtraCDReq const&,proto::WidgetUpdateExtraCDRsp &)::{lambda(unsigned int,proto::WidgetUpdateExtraCDRsp &,bool)#1}::operator()(
                      (const PlayerWidgetComp::doUpdateExtraCDGroup::<lambda(uint32_t, proto::WidgetUpdateExtraCDRsp&, bool)> *const)(v4 + 192),
                      *(_DWORD *)(v4 + 48),
                      rsp_0,
                      0);
                    v3 = ret_0;
                  }
                  else
                  {
                    PlayerWidgetComp::updateWidgetGroupCoolDown(this, *(_DWORD *)(v4 + 48), 1);
                    std::dynamic_pointer_cast<WidgetCaptureAnimal,WidgetBase>((const std::shared_ptr<WidgetBase> *)(v4 + 224));
                    if ( std::operator==<WidgetCaptureAnimal>(
                           (const std::shared_ptr<WidgetCaptureAnimal> *)(v4 + 224),
                           0LL) )
                    {
                      common::milog::MiLogStream::create(
                        &v41,
                        &common::milog::MiLogDefault::default_log_obj_,
                        3u,
                        "./src/player/widget/player_widget_comp.cpp",
                        "doUpdateExtraCDGroup",
                        2355);
                      v29 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                              &v41,
                              (const char (*)[51])"capture_animal_widget_ptr is nullptr, material_id:");
                      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v29,
                        (const unsigned int *)(v4 + 32));
                      common::milog::MiLogStream::~MiLogStream(&v41);
                      v3 = -1;
                      v30 = 0;
                    }
                    else
                    {
                      v31 = std::__shared_ptr_access<WidgetCaptureAnimal,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<WidgetCaptureAnimal,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 224));
                      WidgetCaptureAnimal::setSkillFlag(v31, 1u);
                      PlayerWidgetComp::doUpdateExtraCDGroup(proto::WidgetUpdateExtraCDReq const&,proto::WidgetUpdateExtraCDRsp &)::{lambda(unsigned int,proto::WidgetUpdateExtraCDRsp &,bool)#1}::operator()(
                        (const PlayerWidgetComp::doUpdateExtraCDGroup::<lambda(uint32_t, proto::WidgetUpdateExtraCDRsp&, bool)> *const)(v4 + 192),
                        *(_DWORD *)(v4 + 48),
                        rsp_0,
                        1);
                      v30 = 1;
                    }
                    std::shared_ptr<WidgetCaptureAnimal>::~shared_ptr((std::shared_ptr<WidgetCaptureAnimal> *const)(v4 + 224));
                    if ( v30 == 1 )
                      v3 = 0;
                  }
                }
                else
                {
                  common::milog::MiLogStream::create(
                    &v41,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/player/widget/player_widget_comp.cpp",
                    "doUpdateExtraCDGroup",
                    2304);
                  v24 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                          &v41,
                          (const char (*)[33])"material config shared_cd_group:");
                  v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v24,
                          (const unsigned int *)(v4 + 48));
                  v26 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                          v25,
                          (const char (*)[23])" client pass cd_group:");
                  __x = proto::WidgetUpdateExtraCDReq::cd_group(req);
                  v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v26,
                          (const unsigned int *)&__x);
                  v28 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                          v27,
                          (const char (*)[22])" not equal, material:");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v28,
                    (const unsigned int *)(v4 + 32));
                  common::milog::MiLogStream::~MiLogStream(&v41);
                  v3 = -1;
                }
              }
              else
              {
                common::milog::MiLogStream::create(
                  &v41,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/widget/player_widget_comp.cpp",
                  "doUpdateExtraCDGroup",
                  2298);
                v19 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                        &v41,
                        (const char (*)[38])"material not config shared_cd_group, ");
                v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v19,
                        (const unsigned int *)(v4 + 32));
                v21 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                        v20,
                        (const char (*)[15])" shared_group:");
                v22 = std::__shared_ptr_access<data::ConfigWidgetUseAttachAbilityGroup,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigWidgetUseAttachAbilityGroup,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &v22->shared_cd_group);
                common::milog::MiLogStream::~MiLogStream(&v41);
                v3 = -1;
              }
            }
            else
            {
              common::milog::MiLogStream::create(
                &v41,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/widget/player_widget_comp.cpp",
                "doUpdateExtraCDGroup",
                2364);
              v32 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                      &v41,
                      (const char (*)[36])"material extra_cd_type not support:");
              v33 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v32,
                      (const unsigned int *)(v4 + 32));
              v34 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      v33,
                      (const char (*)[16])" extra_cd_type:");
              __x = proto::WidgetUpdateExtraCDReq::extra_cd_type(req);
              common::milog::MiLogStream::operator<<<proto::WIDGET_EXTRA_CD_TYPE,(proto::WIDGET_EXTRA_CD_TYPE*)0>(
                v34,
                (const proto::WIDGET_EXTRA_CD_TYPE *)&__x);
              common::milog::MiLogStream::~MiLogStream(&v41);
              v3 = -1;
            }
            std::shared_ptr<data::ConfigWidgetUseAttachAbilityGroup>::~shared_ptr((std::shared_ptr<data::ConfigWidgetUseAttachAbilityGroup> *const)(v4 + 160));
          }
        }
        std::shared_ptr<data::ConfigBaseWidgetToy>::~shared_ptr((std::shared_ptr<data::ConfigBaseWidgetToy> *const)(v4 + 128));
      }
      else
      {
        common::milog::MiLogStream::create(
          &v41,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/widget/player_widget_comp.cpp",
          "doUpdateExtraCDGroup",
          2272);
        v10 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                &v41,
                (const char (*)[19])"client materialid:");
        v11 = std::__shared_ptr_access<WidgetBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<WidgetBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
        __x = WidgetBase::getMaterialId(v11);
        v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)&__x);
        v13 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                v12,
                (const char (*)[22])" not equal cur equip:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v4 + 32));
        common::milog::MiLogStream::~MiLogStream(&v41);
        v3 = -1;
      }
    }
    std::shared_ptr<WidgetBase>::~shared_ptr((std::shared_ptr<WidgetBase> *const)(v4 + 96));
  }
  result = v3;
  if ( v42 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 2307: range 00000000143B433C-00000000143B4AB5
void __fastcall PlayerWidgetComp::doUpdateExtraCDGroup(proto::WidgetUpdateExtraCDReq const&,proto::WidgetUpdateExtraCDRsp &)::{lambda(unsigned int,proto::WidgetUpdateExtraCDRsp &,bool)#1}::operator()(
        unsigned __int64 __closure,
        __int32 cd_group,
        proto::WidgetUpdateExtraCDRsp *rsp_0,
        __int8 is_update_succ)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  std::__detail::_Node_iterator<std::pair<unsigned int const,WidgetCoolDownInfo>,false,false>::pointer v7; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  float cool_down_success; // xmm0_4
  float v10; // xmm0_4
  unsigned __int64 v11; // rax
  PlayerWidgetComp *v12; // rax
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyCaptureAnimalSkillCdUpdate,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyCaptureAnimalSkillCdUpdate,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rcx
  __int64 v16; // rax
  Player *v17; // r14
  std::string v18; // [rsp+0h] [rbp-140h]
  bool is_update_succa; // [rsp+10h] [rbp-130h]
  PlayerWidgetComp *const *p_this; // [rsp+18h] [rbp-128h]
  float cool_down_seconds; // [rsp+2Ch] [rbp-114h]
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,WidgetCoolDownInfo>,false> __y; // [rsp+30h] [rbp-110h] BYREF
  proto::WidgetCoolDownData *cool_down_data; // [rsp+38h] [rbp-108h]
  const WidgetCoolDownInfo *cool_down_info; // [rsp+40h] [rbp-100h]
  const data::ConfigWidgetCdGroup *cd_gourp_config_ptr; // [rsp+48h] [rbp-F8h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+50h] [rbp-F0h] BYREF
  std::shared_ptr<google::protobuf::Message> v27; // [rsp+60h] [rbp-E0h] BYREF
  common::milog::MiLogStream v28; // [rsp+70h] [rbp-D0h] BYREF
  char v29[176]; // [rsp+90h] [rbp-B0h] BYREF

  *(&v18._anon_0._M_allocated_capacity + 1) = __closure;
  HIDWORD(v18._anon_0._M_allocated_capacity) = cd_group;
  v18._M_string_length = (std::string::size_type)rsp_0;
  v18._anon_0._M_local_buf[0] = is_update_succ;
  v4 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 32 1 11 holder:2331 48 4 13 cd_group:2307 64 8 14 info_iter:2310 96 16 12 log_ptr:2332";
  *(_QWORD *)(v4 + 16) = PlayerWidgetComp::doUpdateExtraCDGroup(proto::WidgetUpdateExtraCDReq const&,proto::WidgetUpdateExtraCDRsp &)::{lambda(unsigned int,proto::WidgetUpdateExtraCDRsp &,bool)#1}::operator();
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556927;
  v6[536862722] = -218959360;
  v6[536862723] = -202178560;
  *(_DWORD *)(v4 + 48) = cd_group;
  cool_down_data = proto::WidgetUpdateExtraCDRsp::mutable_cool_data((proto::WidgetUpdateExtraCDRsp *const)v18._M_string_length);
  if ( *(_BYTE *)((__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  *(std::unordered_map<unsigned int,WidgetCoolDownInfo>::iterator *)(v4 + 64) = std::unordered_map<unsigned int,WidgetCoolDownInfo>::find(
                                                                                  (std::unordered_map<unsigned int,WidgetCoolDownInfo> *const)(*(_QWORD *)__closure + 152LL),
                                                                                  (const std::unordered_map<unsigned int,WidgetCoolDownInfo>::key_type *)(v4 + 48));
  __y._M_cur = std::unordered_map<unsigned int,WidgetCoolDownInfo>::end((std::unordered_map<unsigned int,WidgetCoolDownInfo> *const)(*(_QWORD *)__closure + 152LL))._M_cur;
  if ( !std::__detail::operator==<std::pair<unsigned int const,WidgetCoolDownInfo>,false>(
          (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,WidgetCoolDownInfo>,false> *)(v4 + 64),
          &__y) )
  {
    v7 = std::__detail::_Node_iterator<std::pair<unsigned int const,WidgetCoolDownInfo>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,WidgetCoolDownInfo>,false,false> *const)(v4 + 64));
    cool_down_info = &v7->second;
    if ( *(char *)(((unsigned __int64)&v7->second.is_success >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&v7->second.is_success);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v27);
    v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v27);
    cd_gourp_config_ptr = JsonConfigMgr::queryCoolDownGroupConfig(
                            &v8->design_config.json_config_mgr,
                            *(_DWORD *)(v4 + 48));
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v27);
    if ( cd_gourp_config_ptr )
    {
      if ( *(char *)(((unsigned __int64)&cool_down_info->is_success >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&cool_down_info->is_success);
      if ( cool_down_info->is_success )
      {
        if ( *(_BYTE *)(((unsigned __int64)&cd_gourp_config_ptr->cool_down_success >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)cd_gourp_config_ptr + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cd_gourp_config_ptr->cool_down_success >> 3)
                                                                            + 0x7FFF8000) )
        {
          __asan_report_load4(&cd_gourp_config_ptr->cool_down_success);
        }
        cool_down_success = cd_gourp_config_ptr->cool_down_success;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&cd_gourp_config_ptr->cool_down_fail >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)cd_gourp_config_ptr + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cd_gourp_config_ptr->cool_down_fail >> 3)
                                                                            + 0x7FFF8000) )
        {
          __asan_report_load4(&cd_gourp_config_ptr->cool_down_fail);
        }
        cool_down_success = cd_gourp_config_ptr->cool_down_fail;
      }
      cool_down_seconds = cool_down_success;
      proto::WidgetCoolDownData::set_id(cool_down_data, *(_DWORD *)(v4 + 48));
      if ( *(_BYTE *)(((unsigned __int64)cool_down_info >> 3) + 0x7FFF8000) )
        __asan_report_load8(cool_down_info);
      v10 = 1000.0 * cool_down_success;
      if ( (float)(1000.0 * cool_down_seconds) >= 9.223372e18 )
        v11 = (unsigned int)(int)(float)(v10 - 9.223372e18) ^ 0x8000000000000000LL;
      else
        v11 = (unsigned int)(int)v10;
      proto::WidgetCoolDownData::set_cool_down_time(cool_down_data, v11 + cool_down_info->last_use_time);
      if ( *(char *)(((unsigned __int64)&cool_down_info->is_success >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&cool_down_info->is_success);
      proto::WidgetCoolDownData::set_is_success(cool_down_data, cool_down_info->is_success);
      if ( *(_BYTE *)((__closure >> 3) + 0x7FFF8000) )
        __asan_report_load8(__closure);
      v12 = *(PlayerWidgetComp **)__closure;
      if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)__closure + 24LL) >> 3) + 0x7FFF8000) )
        v12 = (PlayerWidgetComp *)__asan_report_load8(*(_QWORD *)__closure + 24LL);
      BasicComp = Player::getBasicComp(v12->player_);
      PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v28, BasicComp);
      StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 32), 0xDCBu, v18);
      std::string::~string(&v28);
      common::tools::perf::make_shared<proto_log::PlayerLogBodyCaptureAnimalSkillCdUpdate>();
      v14 = std::__shared_ptr_access<proto_log::PlayerLogBodyCaptureAnimalSkillCdUpdate,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCaptureAnimalSkillCdUpdate,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
      if ( is_update_succa )
        proto_log::PlayerLogBodyCaptureAnimalSkillCdUpdate::set_update_result(v14, 1u);
      else
        proto_log::PlayerLogBodyCaptureAnimalSkillCdUpdate::set_update_result(v14, 2u);
      v15 = std::__shared_ptr_access<proto_log::PlayerLogBodyCaptureAnimalSkillCdUpdate,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCaptureAnimalSkillCdUpdate,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
      if ( *(_BYTE *)(((unsigned __int64)(p_this + 1) >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)(p_this + 1) >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(p_this + 1);
      }
      proto_log::PlayerLogBodyCaptureAnimalSkillCdUpdate::set_material_id(v15, *((_DWORD *)p_this + 2));
      if ( *(_BYTE *)(((unsigned __int64)p_this >> 3) + 0x7FFF8000) )
        __asan_report_load8(p_this);
      v16 = (__int64)*p_this;
      if ( *(_BYTE *)(((unsigned __int64)&(*p_this)->player_ >> 3) + 0x7FFF8000) )
        v16 = __asan_report_load8(&(*p_this)->player_);
      v17 = *(Player **)(v16 + 24);
      std::shared_ptr<google::protobuf::Message>::shared_ptr(&v27, 0LL);
      std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyCaptureAnimalSkillCdUpdate,void>(
        &p_body_ptr,
        (const std::shared_ptr<proto_log::PlayerLogBodyCaptureAnimalSkillCdUpdate> *)(v4 + 96));
      Player::printStatLog(v17, &p_body_ptr, &v27, 0xEu);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v27);
      std::shared_ptr<proto_log::PlayerLogBodyCaptureAnimalSkillCdUpdate>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyCaptureAnimalSkillCdUpdate> *const)(v4 + 96));
      StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 32));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v28,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/widget/player_widget_comp.cpp",
        "operator()",
        2324);
      common::milog::MiLogStream::operator()(
        &v28,
        "cool down group(%u) json config not found",
        *(unsigned int *)(v4 + 48));
      common::milog::MiLogStream::~MiLogStream(&v28);
    }
  }
  if ( v29 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 2371: range 00000000143B566E-00000000143B5814
bool __cdecl PlayerWidgetComp::isOnQuickUse(const PlayerWidgetComp *const this, uint32_t material_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  bool v5; // r14
  WidgetBase *v6; // rax
  bool result; // al
  common::milog::MiLogStream v8; // [rsp+10h] [rbp-90h] BYREF
  char v9[112]; // [rsp+30h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 15 widget_ptr:2372";
  *(_QWORD *)(v2 + 16) = PlayerWidgetComp::isOnQuickUse;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  PlayerWidgetComp::getActionPanelWidget((const PlayerWidgetComp *const)(v2 + 32));
  if ( std::operator==<WidgetBase>(0LL, (const std::shared_ptr<WidgetBase> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/widget/player_widget_comp.cpp",
      "isOnQuickUse",
      2375);
    common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(&v8, (const char (*)[22])"widget_ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v8);
    v5 = 0;
  }
  else
  {
    v6 = std::__shared_ptr_access<WidgetBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<WidgetBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    v5 = material_id == WidgetBase::getMaterialId(v6);
  }
  std::shared_ptr<WidgetBase>::~shared_ptr((std::shared_ptr<WidgetBase> *const)(v2 + 32));
  result = v5;
  if ( v9 == (char *)v2 )
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

// Line 2383: range 00000000143B5816-00000000143B59AF
uint32_t __cdecl PlayerWidgetComp::getQuickUseMaterialId(PlayerWidgetComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  uint32_t MaterialId; // r14d
  WidgetBase *v5; // rax
  uint32_t result; // eax
  common::milog::MiLogStream v7; // [rsp+10h] [rbp-90h] BYREF
  char v8[112]; // [rsp+30h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 15 widget_ptr:2384";
  *(_QWORD *)(v1 + 16) = PlayerWidgetComp::getQuickUseMaterialId;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  PlayerWidgetComp::getActionPanelWidget((const PlayerWidgetComp *const)(v1 + 32));
  if ( std::operator==<WidgetBase>(0LL, (const std::shared_ptr<WidgetBase> *)(v1 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/widget/player_widget_comp.cpp",
      "getQuickUseMaterialId",
      2387);
    common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(&v7, (const char (*)[22])"widget_ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v7);
    MaterialId = 0;
  }
  else
  {
    v5 = std::__shared_ptr_access<WidgetBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<WidgetBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    MaterialId = WidgetBase::getMaterialId(v5);
  }
  std::shared_ptr<WidgetBase>::~shared_ptr((std::shared_ptr<WidgetBase> *const)(v1 + 32));
  result = MaterialId;
  if ( v8 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 2395: range 00000000143B59B0-00000000143B5A25
void __cdecl PlayerWidgetComp::packPlayerWidgetInfo(const PlayerWidgetComp *const this, proto::PlayerWidgetInfo *proto)
{
  uint32_t Uid; // edx
  google::protobuf::RepeatedPtrField<proto::WidgetSlotData> *v3; // rdx

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Uid = Player::getUid(this->player_);
  proto::PlayerWidgetInfo::set_uid(proto, Uid);
  v3 = proto::PlayerWidgetInfo::mutable_slot_list(proto);
  PlayerWidgetComp::packSlotInfo(this, v3);
};

// Line 2401: range 00000000143B5B26-00000000143B5DD2
void __cdecl PlayerWidgetComp::notifyPlayerWidgetInfoToOthers(const PlayerWidgetComp *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  std::__shared_ptr_access<proto::RemotePlayerWidgetNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  proto::PlayerWidgetInfo *v7; // rdx
  World *v8; // r14
  PlayerWidgetComp::notifyPlayerWidgetInfoToOthers::<lambda(Player&)> v9; // [rsp+10h] [rbp-D0h] BYREF
  std::function<ForeachPolicy(Player&)> p_func; // [rsp+30h] [rbp-B0h] BYREF
  char v11[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 14 world_ptr:2402 64 16 15 notify_ptr:2407";
  *(_QWORD *)(v1 + 16) = PlayerWidgetComp::notifyPlayerWidgetInfoToOthers;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurWorld((const PlayerSceneComp *const)(v1 + 32));
  if ( !std::operator==<World>(0LL, (const std::shared_ptr<World> *)(v1 + 32)) )
  {
    v4 = std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    if ( World::getPlayerCount(v4) > 1 )
    {
      common::tools::perf::make_shared<proto::RemotePlayerWidgetNotify>();
      v6 = std::__shared_ptr_access<proto::RemotePlayerWidgetNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::RemotePlayerWidgetNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      v7 = proto::RemotePlayerWidgetNotify::add_player_widget_info_list(v6);
      PlayerWidgetComp::packPlayerWidgetInfo(this, v7);
      v8 = std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      std::shared_ptr<proto::RemotePlayerWidgetNotify>::shared_ptr(
        &v9.__notify_ptr,
        (const std::shared_ptr<proto::RemotePlayerWidgetNotify> *)(v1 + 64));
      v9.__this = this;
      std::function<ForeachPolicy ()(Player &)>::function<PlayerWidgetComp::notifyPlayerWidgetInfoToOthers(void)::{lambda(Player &)#1},void,void>(
        &p_func,
        &v9);
      World::foreachPlayer(v8, &p_func);
      std::function<ForeachPolicy ()(Player &)>::~function(&p_func);
      PlayerWidgetComp::notifyPlayerWidgetInfoToOthers(void)const::{lambda(Player &)#1}::~Player(&v9);
      std::shared_ptr<proto::RemotePlayerWidgetNotify>::~shared_ptr((std::shared_ptr<proto::RemotePlayerWidgetNotify> *const)(v1 + 64));
    }
  }
  std::shared_ptr<World>::~shared_ptr((std::shared_ptr<World> *const)(v1 + 32));
  if ( v11 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 2409: range 00000000143B5A26-00000000143B5B08
ForeachPolicy __cdecl PlayerWidgetComp::notifyPlayerWidgetInfoToOthers(void)const::{lambda(Player &)#1}::operator()(
        const PlayerWidgetComp::notifyPlayerWidgetInfoToOthers::<lambda(Player&)> *const __closure,
        Player *other_player)
{
  uint32_t Uid; // ebx
  const PlayerWidgetComp *this; // rax
  std::shared_ptr<proto::RemotePlayerWidgetNotify> __r; // [rsp+10h] [rbp-20h] BYREF

  Uid = Player::getUid(other_player);
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__this >> 3) + 0x7FFF8000) )
    __asan_report_load8(&__closure->__this);
  this = __closure->__this;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    this = (const PlayerWidgetComp *)__asan_report_load8(&this->player_);
  if ( Uid != Player::getUid(this->player_) )
  {
    std::dynamic_pointer_cast<google::protobuf::Message const,proto::RemotePlayerWidgetNotify>(&__r);
    Player::sendMessage(other_player, (common::minet::ConstMessagePtr *)&__r, 0LL);
    std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&__r);
  }
  return 0;
};

// Line 2409: range 00000000143ECEE0-00000000143ECF5F
void __cdecl PlayerWidgetComp::notifyPlayerWidgetInfoToOthers(void)const::{lambda(Player &)#1}::Player(
        PlayerWidgetComp::notifyPlayerWidgetInfoToOthers::<lambda(Player&)> *const this,
        PlayerWidgetComp::notifyPlayerWidgetInfoToOthers::<lambda(Player&)> *a2)
{
  const PlayerWidgetComp *v2; // rdx

  std::shared_ptr<proto::RemotePlayerWidgetNotify>::shared_ptr(&this->__notify_ptr, &a2->__notify_ptr);
  if ( *(_BYTE *)(((unsigned __int64)&a2->__this >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->__this);
  v2 = a2->__this;
  if ( *(_BYTE *)(((unsigned __int64)&this->__this >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->__this, a2);
  this->__this = v2;
};

// Line 2409: range 00000000143ED02A-00000000143ED0A9
void __cdecl PlayerWidgetComp::notifyPlayerWidgetInfoToOthers(void)const::{lambda(Player &)#1}::Player(
        PlayerWidgetComp::notifyPlayerWidgetInfoToOthers::<lambda(Player&)> *const this,
        const PlayerWidgetComp::notifyPlayerWidgetInfoToOthers::<lambda(Player&)> *a2)
{
  const PlayerWidgetComp *v2; // rdx

  std::shared_ptr<proto::RemotePlayerWidgetNotify>::shared_ptr(&this->__notify_ptr, &a2->__notify_ptr);
  if ( *(_BYTE *)(((unsigned __int64)&a2->__this >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->__this);
  v2 = a2->__this;
  if ( *(_BYTE *)(((unsigned __int64)&this->__this >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->__this, a2);
  this->__this = v2;
};

// Line 2409: range 00000000143B5B0A-00000000143B5B24
void __cdecl PlayerWidgetComp::notifyPlayerWidgetInfoToOthers(void)const::{lambda(Player &)#1}::~Player(
        PlayerWidgetComp::notifyPlayerWidgetInfoToOthers::<lambda(Player&)> *const this)
{
  std::shared_ptr<proto::RemotePlayerWidgetNotify>::~shared_ptr(&this->__notify_ptr);
};
