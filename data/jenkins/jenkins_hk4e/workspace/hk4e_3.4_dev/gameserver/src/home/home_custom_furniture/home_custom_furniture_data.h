// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/home/home_custom_furniture/home_custom_furniture_data.h

// Line 30: range 00000000147D3324-00000000147D33C1
void __cdecl HomeCustomFurnitureNodeData::HomeCustomFurnitureNodeData(HomeCustomFurnitureNodeData *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->parent_index = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->furniture_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->furniture_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->furniture_id);
  }
  this->furniture_id = 0;
  std::string::basic_string(&this->slot_identifier);
};

// Line 30: range 0000000014743BBE-0000000014743CDB
void __cdecl HomeCustomFurnitureNodeData::HomeCustomFurnitureNodeData(
        HomeCustomFurnitureNodeData *const this,
        HomeCustomFurnitureNodeData *a2)
{
  double v2; // xmm0_8
  int32_t parent_index; // ecx
  uint32_t furniture_id; // ecx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    v2 = __asan_report_load4();
  }
  parent_index = a2->parent_index;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->parent_index = parent_index;
  if ( *(_BYTE *)(((unsigned __int64)&a2->furniture_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->furniture_id >> 3) + 0x7FFF8000) )
  {
    v2 = __asan_report_load4();
  }
  furniture_id = a2->furniture_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->furniture_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->furniture_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->furniture_id);
  }
  this->furniture_id = furniture_id;
  std::string::basic_string(&this->slot_identifier, &a2->slot_identifier, v2);
};

// Line 30: range 0000000014625F5A-0000000014626077
void __cdecl HomeCustomFurnitureNodeData::HomeCustomFurnitureNodeData(
        HomeCustomFurnitureNodeData *const this,
        const HomeCustomFurnitureNodeData *a2)
{
  int32_t parent_index; // ecx
  uint32_t furniture_id; // ecx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  parent_index = a2->parent_index;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->parent_index = parent_index;
  if ( *(_BYTE *)(((unsigned __int64)&a2->furniture_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->furniture_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  furniture_id = a2->furniture_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->furniture_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->furniture_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->furniture_id);
  }
  this->furniture_id = furniture_id;
  std::string::basic_string(&this->slot_identifier, &a2->slot_identifier);
};

// Line 30: range 0000000014626078-0000000014626096
void __cdecl HomeCustomFurnitureNodeData::~HomeCustomFurnitureNodeData(HomeCustomFurnitureNodeData *const this)
{
  std::string::~string(&this->slot_identifier);
};

// Line 43: range 00000000147D1FD6-00000000147D20D1
void __cdecl HomeOneCustomFurnitureData::HomeOneCustomFurnitureData(HomeOneCustomFurnitureData *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->scene_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->guid >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->guid >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->guid);
  }
  this->guid = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->furniture_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->furniture_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->furniture_id);
  }
  this->furniture_id = 0;
  std::vector<HomeCustomFurnitureNodeData>::vector(&this->sub_furniture_vec);
  std::map<unsigned int,unsigned int>::map(&this->used_sub_furniture_count_map);
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->used_pass_part_item_count_map);
};

// Line 43: range 0000000017D84728-0000000017D8492C
void __cdecl HomeOneCustomFurnitureData::HomeOneCustomFurnitureData(
        HomeOneCustomFurnitureData *const this,
        const HomeOneCustomFurnitureData *a2)
{
  uint32_t scene_id; // ecx
  uint32_t guid; // ecx
  uint32_t furniture_id; // ecx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  scene_id = a2->scene_id;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->scene_id = scene_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->guid >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->guid >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  guid = a2->guid;
  if ( *(_BYTE *)(((unsigned __int64)&this->guid >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->guid >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->guid);
  }
  this->guid = guid;
  if ( *(_BYTE *)(((unsigned __int64)&a2->furniture_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->furniture_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  furniture_id = a2->furniture_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->furniture_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->furniture_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->furniture_id);
  }
  this->furniture_id = furniture_id;
  std::vector<HomeCustomFurnitureNodeData>::vector(&this->sub_furniture_vec, &a2->sub_furniture_vec);
  std::map<unsigned int,unsigned int>::map(&this->used_sub_furniture_count_map, &a2->used_sub_furniture_count_map);
  std::unordered_map<unsigned int,unsigned int>::unordered_map(
    &this->used_pass_part_item_count_map,
    &a2->used_pass_part_item_count_map);
};

// Line 43: range 00000000147A60B0-00000000147A60EE
void __cdecl HomeOneCustomFurnitureData::~HomeOneCustomFurnitureData(HomeOneCustomFurnitureData *const this)
{
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->used_pass_part_item_count_map);
  std::map<unsigned int,unsigned int>::~map(&this->used_sub_furniture_count_map);
  std::vector<HomeCustomFurnitureNodeData>::~vector(&this->sub_furniture_vec);
};

// Line 66: range 00000000147D1C82-00000000147D1C9C
void __cdecl HomeModuleCustomFurnitureData::HomeModuleCustomFurnitureData(HomeModuleCustomFurnitureData *const this)
{
  std::unordered_map<unsigned int,HomeOneCustomFurnitureData>::unordered_map(&this->custom_furniture_data_map);
};

// Line 66: range 00000000147A5BBA-00000000147A5BD4
void __cdecl HomeModuleCustomFurnitureData::~HomeModuleCustomFurnitureData(HomeModuleCustomFurnitureData *const this)
{
  std::unordered_map<unsigned int,HomeOneCustomFurnitureData>::~unordered_map(&this->custom_furniture_data_map);
};

// Line 81: range 000000001465D3EE-000000001465D5A0
int32_t __cdecl HomeModuleCustomFurnitureData::getUsedSubFurnitureCountData<google::protobuf::Map<unsigned int,unsigned int>>(
        const HomeModuleCustomFurnitureData *const this,
        google::protobuf::Map<unsigned int,unsigned int> *sub_furniture_count_map)
{
  unsigned int *v2; // rax
  int v3; // esi
  std::unordered_map<unsigned int,HomeOneCustomFurnitureData>::const_iterator __for_begin; // [rsp+10h] [rbp-60h] BYREF
  std::unordered_map<unsigned int,HomeOneCustomFurnitureData>::const_iterator __for_end; // [rsp+18h] [rbp-58h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_begin_0; // [rsp+20h] [rbp-50h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_end_0; // [rsp+28h] [rbp-48h] BYREF
  const std::unordered_map<unsigned int,HomeOneCustomFurnitureData> *__for_range; // [rsp+30h] [rbp-40h]
  const std::pair<unsigned int const,HomeOneCustomFurnitureData> *v11; // [rsp+38h] [rbp-38h]
  std::tuple_element<0,const std::pair<unsigned int const,HomeOneCustomFurnitureData> >::type *_; // [rsp+40h] [rbp-30h]
  std::tuple_element<1,const std::pair<unsigned int const,HomeOneCustomFurnitureData> >::type *custom_furniture_data; // [rsp+48h] [rbp-28h]
  const std::map<unsigned int,unsigned int> *__for_range_0; // [rsp+50h] [rbp-20h]
  const std::pair<unsigned int const,unsigned int> *v15; // [rsp+58h] [rbp-18h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *furniture_id; // [rsp+60h] [rbp-10h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *count; // [rsp+68h] [rbp-8h]

  __for_range = &this->custom_furniture_data_map;
  __for_begin._M_cur = std::unordered_map<unsigned int,HomeOneCustomFurnitureData>::begin(&this->custom_furniture_data_map)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,HomeOneCustomFurnitureData>::end(&this->custom_furniture_data_map)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,HomeOneCustomFurnitureData>,false>(
            &__for_begin,
            &__for_end) )
  {
    v11 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,HomeOneCustomFurnitureData>,false,false>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,HomeOneCustomFurnitureData>(v11);
    custom_furniture_data = (std::tuple_element<1,const std::pair<unsigned int const,HomeOneCustomFurnitureData> >::type *)std::get<1ul,unsigned int const,HomeOneCustomFurnitureData>(v11);
    __for_range_0 = &custom_furniture_data->used_sub_furniture_count_map;
    __for_begin_0._M_node = std::map<unsigned int,unsigned int>::begin(&custom_furniture_data->used_sub_furniture_count_map)._M_node;
    __for_end_0._M_node = std::map<unsigned int,unsigned int>::end(__for_range_0)._M_node;
    while ( std::operator!=(&__for_begin_0, &__for_end_0) )
    {
      v15 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin_0);
      furniture_id = std::get<0ul,unsigned int const,unsigned int>(v15);
      count = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v15);
      v2 = google::protobuf::Map<unsigned int,unsigned int>::operator[](sub_furniture_count_map, furniture_id);
      if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      v3 = *v2;
      if ( *(_BYTE *)(((unsigned __int64)count >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)count >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *v2 = v3 + *count;
      std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin_0);
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,HomeOneCustomFurnitureData>,false,false>::operator++(&__for_begin);
  }
  return 0;
};

// Line 81: range 000000001465D9D4-000000001465DB86
int32_t __cdecl HomeModuleCustomFurnitureData::getUsedSubFurnitureCountData<std::map<unsigned int,unsigned int>>(
        const HomeModuleCustomFurnitureData *const this,
        std::map<unsigned int,unsigned int> *sub_furniture_count_map)
{
  std::map<unsigned int,unsigned int>::mapped_type *v2; // rax
  int v3; // esi
  std::unordered_map<unsigned int,HomeOneCustomFurnitureData>::const_iterator __for_begin; // [rsp+10h] [rbp-60h] BYREF
  std::unordered_map<unsigned int,HomeOneCustomFurnitureData>::const_iterator __for_end; // [rsp+18h] [rbp-58h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_begin_0; // [rsp+20h] [rbp-50h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_end_0; // [rsp+28h] [rbp-48h] BYREF
  const std::unordered_map<unsigned int,HomeOneCustomFurnitureData> *__for_range; // [rsp+30h] [rbp-40h]
  const std::pair<unsigned int const,HomeOneCustomFurnitureData> *v11; // [rsp+38h] [rbp-38h]
  std::tuple_element<0,const std::pair<unsigned int const,HomeOneCustomFurnitureData> >::type *_; // [rsp+40h] [rbp-30h]
  std::tuple_element<1,const std::pair<unsigned int const,HomeOneCustomFurnitureData> >::type *custom_furniture_data; // [rsp+48h] [rbp-28h]
  const std::map<unsigned int,unsigned int> *__for_range_0; // [rsp+50h] [rbp-20h]
  const std::pair<unsigned int const,unsigned int> *v15; // [rsp+58h] [rbp-18h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *furniture_id; // [rsp+60h] [rbp-10h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *count; // [rsp+68h] [rbp-8h]

  __for_range = &this->custom_furniture_data_map;
  __for_begin._M_cur = std::unordered_map<unsigned int,HomeOneCustomFurnitureData>::begin(&this->custom_furniture_data_map)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,HomeOneCustomFurnitureData>::end(&this->custom_furniture_data_map)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,HomeOneCustomFurnitureData>,false>(
            &__for_begin,
            &__for_end) )
  {
    v11 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,HomeOneCustomFurnitureData>,false,false>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,HomeOneCustomFurnitureData>(v11);
    custom_furniture_data = (std::tuple_element<1,const std::pair<unsigned int const,HomeOneCustomFurnitureData> >::type *)std::get<1ul,unsigned int const,HomeOneCustomFurnitureData>(v11);
    __for_range_0 = &custom_furniture_data->used_sub_furniture_count_map;
    __for_begin_0._M_node = std::map<unsigned int,unsigned int>::begin(&custom_furniture_data->used_sub_furniture_count_map)._M_node;
    __for_end_0._M_node = std::map<unsigned int,unsigned int>::end(__for_range_0)._M_node;
    while ( std::operator!=(&__for_begin_0, &__for_end_0) )
    {
      v15 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin_0);
      furniture_id = std::get<0ul,unsigned int const,unsigned int>(v15);
      count = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v15);
      v2 = std::map<unsigned int,unsigned int>::operator[](sub_furniture_count_map, furniture_id);
      if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      v3 = *v2;
      if ( *(_BYTE *)(((unsigned __int64)count >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)count >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *v2 = v3 + *count;
      std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin_0);
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,HomeOneCustomFurnitureData>,false,false>::operator++(&__for_begin);
  }
  return 0;
};
