// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/cook/player_cook_comp.cpp

// Line 36: range 00000000175DD27E-00000000175DD695
int32_t __cdecl PlayerCookComp::fromBin(PlayerCookComp *const this, const proto::PlayerDataBin *player_data_bin)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  __int64 v5; // rdx
  char v6; // al
  google::protobuf::uint32 v7; // r14d
  google::protobuf::Map<unsigned int,proto::CookRecipeDataBin>::const_reference v8; // rsi
  std::unordered_map<unsigned int,CookRecipeData>::mapped_type *v9; // rax
  std::unordered_map<unsigned int,CookRecipeData>::mapped_type *v10; // rdx
  char v11; // cl
  int32_t result; // eax
  int32_t idx; // [rsp+10h] [rbp-F0h]
  int32_t idx_0; // [rsp+14h] [rbp-ECh]
  const proto::PlayerCookCompBin *proto_comp; // [rsp+18h] [rbp-E8h]
  const google::protobuf::Map<unsigned int,proto::CookRecipeDataBin> *__for_range; // [rsp+20h] [rbp-E0h]
  const google::protobuf::Map<unsigned int,proto::CompoundQueueBin> *__for_range_0; // [rsp+28h] [rbp-D8h]
  google::protobuf::Map<unsigned int,proto::CompoundQueueBin>::const_reference p_compound_id; // [rsp+30h] [rbp-D0h]
  std::unordered_map<unsigned int,std::deque<CompoundOutputData>>::mapped_type *output_data_que; // [rsp+38h] [rbp-C8h]
  const proto::CompoundOutputBin *output_bin; // [rsp+40h] [rbp-C0h]
  google::protobuf::Map<unsigned int,proto::CookRecipeDataBin>::const_reference p_recipe_id; // [rsp+48h] [rbp-B8h]
  google::protobuf::Map<unsigned int,proto::CookRecipeDataBin>::const_iterator __for_begin; // [rsp+50h] [rbp-B0h] BYREF
  google::protobuf::Map<unsigned int,proto::CookRecipeDataBin>::const_iterator __for_end; // [rsp+70h] [rbp-90h] BYREF
  char v24[112]; // [rsp+90h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 9 output:60";
  *(_QWORD *)(v2 + 16) = PlayerCookComp::fromBin;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  proto_comp = proto::PlayerDataBin::cook_bin(player_data_bin);
  v5 = proto::PlayerCookCompBin::grade(proto_comp);
  v6 = *(_BYTE *)(((unsigned __int64)&this->grade_ >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(player_data_bin) = v6 != 0;
    __asan_report_store4(&this->grade_, player_data_bin, v5);
  }
  this->grade_ = v5;
  std::unordered_map<unsigned int,CookRecipeData>::clear(&this->recipe_data_map_);
  __for_range = proto::PlayerCookCompBin::recipe_data_map(proto_comp);
  google::protobuf::Map<unsigned int,proto::CookRecipeDataBin>::begin(&__for_begin, __for_range);
  google::protobuf::Map<unsigned int,proto::CookRecipeDataBin>::end(&__for_end, __for_range);
  while ( google::protobuf::operator!=(&__for_begin, &__for_end) )
  {
    p_recipe_id = google::protobuf::Map<unsigned int,proto::CookRecipeDataBin>::const_iterator::operator*(&__for_begin);
    v7 = proto::CookRecipeDataBin::proficiency(&p_recipe_id->second);
    v8 = p_recipe_id;
    v9 = std::unordered_map<unsigned int,CookRecipeData>::operator[](&this->recipe_data_map_, &p_recipe_id->first);
    v10 = v9;
    v11 = *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000);
    if ( v11 != 0 && (char)(((unsigned __int8)v9 & 7) + 3) >= v11 )
    {
      LOBYTE(v8) = v11 != 0;
      __asan_report_store4(v9, v8, v9);
    }
    v10->proficiency = v7;
    google::protobuf::Map<unsigned int,proto::CookRecipeDataBin>::const_iterator::operator++(&__for_begin);
  }
  std::unordered_set<unsigned int>::clear(&this->unlocked_compound_set_);
  for ( idx = 0; idx < proto::PlayerCookCompBin::unlock_compound_list_size(proto_comp); ++idx )
  {
    *(_DWORD *)(v2 + 32) = proto::PlayerCookCompBin::unlock_compound_list(proto_comp, idx);
    std::unordered_set<unsigned int>::insert(
      &this->unlocked_compound_set_,
      (std::unordered_set<unsigned int>::value_type *)(v2 + 32));
  }
  std::unordered_map<unsigned int,std::deque<CompoundOutputData>>::clear(&this->compound_output_map_);
  __for_range_0 = proto::PlayerCookCompBin::compound_que_bin_map(proto_comp);
  google::protobuf::Map<unsigned int,proto::CompoundQueueBin>::begin(
    (google::protobuf::Map<unsigned int,proto::CompoundQueueBin>::const_iterator *)&__for_begin,
    __for_range_0);
  google::protobuf::Map<unsigned int,proto::CompoundQueueBin>::end(
    (google::protobuf::Map<unsigned int,proto::CompoundQueueBin>::const_iterator *)&__for_end,
    __for_range_0);
  while ( google::protobuf::operator!=(
            (const google::protobuf::Map<unsigned int,proto::CompoundQueueBin>::const_iterator *)&__for_begin,
            (const google::protobuf::Map<unsigned int,proto::CompoundQueueBin>::const_iterator *)&__for_end) )
  {
    p_compound_id = google::protobuf::Map<unsigned int,proto::CompoundQueueBin>::const_iterator::operator*((const google::protobuf::Map<unsigned int,proto::CompoundQueueBin>::const_iterator *const)&__for_begin);
    output_data_que = std::unordered_map<unsigned int,std::deque<CompoundOutputData>>::operator[](
                        &this->compound_output_map_,
                        &p_compound_id->first);
    for ( idx_0 = 0; idx_0 < proto::CompoundQueueBin::output_list_size(&p_compound_id->second); ++idx_0 )
    {
      output_bin = proto::CompoundQueueBin::output_list(&p_compound_id->second, idx_0);
      *(_DWORD *)(v2 + 32) = 0;
      *(_DWORD *)(v2 + 32) = proto::CompoundOutputBin::output_time(output_bin);
      std::deque<CompoundOutputData>::push_back(
        output_data_que,
        (const std::deque<CompoundOutputData>::value_type *)(v2 + 32));
    }
    google::protobuf::Map<unsigned int,proto::CompoundQueueBin>::const_iterator::operator++((google::protobuf::Map<unsigned int,proto::CompoundQueueBin>::const_iterator *const)&__for_begin);
  }
  result = 0;
  if ( v24 == (char *)v2 )
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

// Line 72: range 00000000175DD696-00000000175DDADA
int32_t __cdecl PlayerCookComp::toBin(PlayerCookComp *const this, proto::PlayerDataBin *player_data_bin)
{
  unsigned int *v2; // rax
  google::protobuf::uint32 *v3; // rdx
  std::unordered_map<unsigned int,CookRecipeData>::iterator __for_begin; // [rsp+18h] [rbp-D8h] BYREF
  std::unordered_map<unsigned int,CookRecipeData>::iterator __for_end; // [rsp+20h] [rbp-D0h] BYREF
  proto::PlayerCookCompBin *proto_comp; // [rsp+28h] [rbp-C8h]
  google::protobuf::Map<unsigned int,proto::CookRecipeDataBin> *recipe_bin_map; // [rsp+30h] [rbp-C0h]
  std::unordered_map<unsigned int,CookRecipeData> *__for_range; // [rsp+38h] [rbp-B8h]
  std::unordered_set<unsigned int> *__for_range_0; // [rsp+40h] [rbp-B0h]
  google::protobuf::Map<unsigned int,proto::CompoundQueueBin> *que_bin_map; // [rsp+48h] [rbp-A8h]
  std::unordered_map<unsigned int,std::deque<CompoundOutputData>> *__for_range_1; // [rsp+50h] [rbp-A0h]
  const std::pair<unsigned int const,std::deque<CompoundOutputData> > *v13; // [rsp+58h] [rbp-98h]
  std::tuple_element<0,const std::pair<unsigned int const,std::deque<CompoundOutputData> > >::type *compound_id_0; // [rsp+60h] [rbp-90h]
  std::tuple_element<1,const std::pair<unsigned int const,std::deque<CompoundOutputData> > >::type *output_data_que; // [rsp+68h] [rbp-88h]
  proto::CompoundQueueBin *que_bin; // [rsp+70h] [rbp-80h]
  const std::deque<CompoundOutputData> *__for_range_2; // [rsp+78h] [rbp-78h]
  const CompoundOutputData *output; // [rsp+80h] [rbp-70h]
  proto::CompoundOutputBin *output_bin; // [rsp+88h] [rbp-68h]
  const std::pair<unsigned int const,CookRecipeData> *v20; // [rsp+90h] [rbp-60h]
  std::tuple_element<0,const std::pair<unsigned int const,CookRecipeData> >::type *recipe_id; // [rsp+98h] [rbp-58h]
  std::tuple_element<1,const std::pair<unsigned int const,CookRecipeData> >::type *recipe_data; // [rsp+A0h] [rbp-50h]
  proto::CookRecipeDataBin *recipe_bin; // [rsp+A8h] [rbp-48h]
  std::deque<CompoundOutputData>::const_iterator __for_begin_0; // [rsp+B0h] [rbp-40h] BYREF
  std::deque<CompoundOutputData>::const_iterator __for_end_0; // [rsp+D0h] [rbp-20h] BYREF

  proto_comp = proto::PlayerDataBin::mutable_cook_bin(player_data_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->grade_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->grade_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->grade_);
  }
  proto::PlayerCookCompBin::set_grade(proto_comp, this->grade_);
  recipe_bin_map = proto::PlayerCookCompBin::mutable_recipe_data_map(proto_comp);
  __for_range = &this->recipe_data_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,CookRecipeData>::begin(&this->recipe_data_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,CookRecipeData>::end(&this->recipe_data_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,CookRecipeData>,false>(&__for_begin, &__for_end) )
  {
    v20 = std::__detail::_Node_iterator<std::pair<unsigned int const,CookRecipeData>,false,false>::operator*(&__for_begin);
    recipe_id = std::get<0ul,unsigned int const,CookRecipeData>(v20);
    recipe_data = (std::tuple_element<1,const std::pair<unsigned int const,CookRecipeData> >::type *)std::get<1ul,unsigned int const,CookRecipeData>(v20);
    recipe_bin = google::protobuf::Map<unsigned int,proto::CookRecipeDataBin>::operator[](recipe_bin_map, recipe_id);
    if ( *(_BYTE *)(((unsigned __int64)recipe_data >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)recipe_data & 7) + 3) >= *(_BYTE *)(((unsigned __int64)recipe_data >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(recipe_data);
    }
    proto::CookRecipeDataBin::set_proficiency(recipe_bin, recipe_data->proficiency);
    std::__detail::_Node_iterator<std::pair<unsigned int const,CookRecipeData>,false,false>::operator++(&__for_begin);
  }
  __for_range_0 = &this->unlocked_compound_set_;
  __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,CookRecipeData>,false>::__node_type *)std::unordered_set<unsigned int>::begin(&this->unlocked_compound_set_)._M_cur;
  __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,CookRecipeData>,false>::__node_type *)std::unordered_set<unsigned int>::end(__for_range_0)._M_cur;
  while ( std::__detail::operator!=<unsigned int,false>(
            (const std::__detail::_Node_iterator_base<unsigned int,false> *)&__for_begin,
            (const std::__detail::_Node_iterator_base<unsigned int,false> *)&__for_end) )
  {
    v2 = (unsigned int *)std::__detail::_Node_iterator<unsigned int,true,false>::operator*((const std::__detail::_Node_iterator<unsigned int,true,false> *const)&__for_begin);
    v3 = v2;
    if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v2);
    }
    proto::PlayerCookCompBin::add_unlock_compound_list(proto_comp, *v3);
    std::__detail::_Node_iterator<unsigned int,true,false>::operator++((std::__detail::_Node_iterator<unsigned int,true,false> *const)&__for_begin);
  }
  que_bin_map = proto::PlayerCookCompBin::mutable_compound_que_bin_map(proto_comp);
  __for_range_1 = &this->compound_output_map_;
  __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,CookRecipeData>,false>::__node_type *)std::unordered_map<unsigned int,std::deque<CompoundOutputData>>::begin(&this->compound_output_map_)._M_cur;
  __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,CookRecipeData>,false>::__node_type *)std::unordered_map<unsigned int,std::deque<CompoundOutputData>>::end(__for_range_1)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::deque<CompoundOutputData>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::deque<CompoundOutputData> >,false> *)&__for_begin,
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::deque<CompoundOutputData> >,false> *)&__for_end) )
  {
    v13 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::deque<CompoundOutputData>>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::deque<CompoundOutputData> >,false,false> *const)&__for_begin);
    compound_id_0 = std::get<0ul,unsigned int const,std::deque<CompoundOutputData>>(v13);
    output_data_que = (std::tuple_element<1,const std::pair<unsigned int const,std::deque<CompoundOutputData> > >::type *)std::get<1ul,unsigned int const,std::deque<CompoundOutputData>>(v13);
    if ( !std::deque<CompoundOutputData>::empty(output_data_que) )
    {
      que_bin = google::protobuf::Map<unsigned int,proto::CompoundQueueBin>::operator[](que_bin_map, compound_id_0);
      __for_range_2 = output_data_que;
      std::deque<CompoundOutputData>::begin(&__for_begin_0, output_data_que);
      std::deque<CompoundOutputData>::end(&__for_end_0, __for_range_2);
      while ( std::operator!=<CompoundOutputData,CompoundOutputData const&,CompoundOutputData const*>(
                &__for_begin_0,
                &__for_end_0) )
      {
        output = std::_Deque_iterator<CompoundOutputData,CompoundOutputData const&,CompoundOutputData const*>::operator*(&__for_begin_0);
        output_bin = proto::CompoundQueueBin::add_output_list(que_bin);
        if ( *(_BYTE *)(((unsigned __int64)output >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)output & 7) + 3) >= *(_BYTE *)(((unsigned __int64)output >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(output);
        }
        proto::CompoundOutputBin::set_output_time(output_bin, output->output_time);
        std::_Deque_iterator<CompoundOutputData,CompoundOutputData const&,CompoundOutputData const*>::operator++(&__for_begin_0);
      }
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::deque<CompoundOutputData>>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,std::deque<CompoundOutputData> >,false,false> *const)&__for_begin);
  }
  return 0;
};

// Line 109: range 00000000175DDADC-00000000175DDCD5
int32_t __cdecl PlayerCookComp::onLogin(PlayerCookComp *const this, bool is_new_player)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v5; // rax
  _DWORD *v6; // rdx
  unsigned int *v7; // rcx
  CookRecipeData *v8; // r8
  int32_t result; // eax
  CookRecipeData v10; // [rsp+14h] [rbp-9Ch] BYREF
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-98h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+20h] [rbp-90h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+28h] [rbp-88h]
  std::shared_ptr<Config> v14; // [rsp+30h] [rbp-80h] BYREF
  char v15[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 13 recipe_id:111";
  *(_QWORD *)(v2 + 16) = PlayerCookComp::onLogin;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v14);
  __for_range = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v14)->design_config.txt_config_mgr.cook_config_mgr.default_unlocked_recipe_vec;
  std::shared_ptr<Config>::~shared_ptr(&v14);
  __for_begin._M_current = std::vector<unsigned int>::begin(__for_range)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(__for_range)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v5 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
    v6 = v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v5);
    }
    *(_DWORD *)(v2 + 32) = *v6;
    v10.proficiency = 0;
    CookRecipeData::CookRecipeData(&v10);
    std::unordered_map<unsigned int,CookRecipeData>::emplace<unsigned int &,CookRecipeData>(
      &this->recipe_data_map_,
      (unsigned int *)(v2 + 32),
      &v10,
      v7,
      v8);
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  result = 0;
  if ( v15 == (char *)v2 )
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

// Line 120: range 00000000175DDCD6-00000000175DE335
int32_t __cdecl PlayerCookComp::notifyAllData(PlayerCookComp *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::__shared_ptr_access<proto::CookDataNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rcx
  std::__shared_ptr_access<proto::CookDataNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  bool *p_is_default_unlocked; // rax
  std::__shared_ptr_access<proto::CookDataNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  Player *player; // r14
  std::__shared_ptr_access<proto::CompoundDataNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rdx
  Player *v11; // r14
  int32_t result; // eax
  std::unordered_map<unsigned int,data::CookRecipeExcelConfig>::const_iterator __for_begin_0; // [rsp+10h] [rbp-110h] BYREF
  std::unordered_map<unsigned int,data::CookRecipeExcelConfig>::const_iterator __for_end_0; // [rsp+18h] [rbp-108h] BYREF
  std::unordered_map<unsigned int,CookRecipeData>::iterator __for_begin; // [rsp+20h] [rbp-100h] BYREF
  std::unordered_map<unsigned int,CookRecipeData>::iterator __for_end; // [rsp+28h] [rbp-F8h] BYREF
  std::unordered_map<unsigned int,CookRecipeData> *__for_range; // [rsp+30h] [rbp-F0h]
  const std::unordered_map<unsigned int,data::CookRecipeExcelConfig> *__for_range_0; // [rsp+38h] [rbp-E8h]
  const std::pair<unsigned int const,data::CookRecipeExcelConfig> *v19; // [rsp+40h] [rbp-E0h]
  std::tuple_element<0,const std::pair<unsigned int const,data::CookRecipeExcelConfig> >::type *recipe_id_0; // [rsp+48h] [rbp-D8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::CookRecipeExcelConfig> >::type *recipe_config; // [rsp+50h] [rbp-D0h]
  proto::CookRecipeData *recipe_proto_0; // [rsp+58h] [rbp-C8h]
  const std::pair<unsigned int const,CookRecipeData> *v23; // [rsp+60h] [rbp-C0h]
  std::tuple_element<0,const std::pair<unsigned int const,CookRecipeData> >::type *recipe_id; // [rsp+68h] [rbp-B8h]
  std::tuple_element<1,const std::pair<unsigned int const,CookRecipeData> >::type *recipe_data; // [rsp+70h] [rbp-B0h]
  proto::CookRecipeData *recipe_proto; // [rsp+78h] [rbp-A8h]
  std::shared_ptr<const google::protobuf::Message> v27; // [rsp+80h] [rbp-A0h] BYREF
  char v28[144]; // [rsp+90h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 19 cook_notify_ptr:121 64 16 23 compound_notify_ptr:142";
  *(_QWORD *)(v1 + 16) = PlayerCookComp::notifyAllData;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  common::tools::perf::make_shared<proto::CookDataNotify>();
  v4 = std::__shared_ptr_access<proto::CookDataNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::CookDataNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->grade_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->grade_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->grade_);
  }
  proto::CookDataNotify::set_grade(v4, this->grade_);
  __for_range = &this->recipe_data_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,CookRecipeData>::begin(&this->recipe_data_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,CookRecipeData>::end(&this->recipe_data_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,CookRecipeData>,false>(&__for_begin, &__for_end) )
  {
    v23 = std::__detail::_Node_iterator<std::pair<unsigned int const,CookRecipeData>,false,false>::operator*(&__for_begin);
    recipe_id = std::get<0ul,unsigned int const,CookRecipeData>(v23);
    recipe_data = (std::tuple_element<1,const std::pair<unsigned int const,CookRecipeData> >::type *)std::get<1ul,unsigned int const,CookRecipeData>(v23);
    v5 = std::__shared_ptr_access<proto::CookDataNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::CookDataNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    recipe_proto = proto::CookDataNotify::add_recipe_data_list(v5);
    if ( *(_BYTE *)(((unsigned __int64)recipe_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)recipe_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)recipe_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(recipe_id);
    }
    proto::CookRecipeData::set_recipe_id(recipe_proto, *recipe_id);
    if ( *(_BYTE *)(((unsigned __int64)recipe_data >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)recipe_data & 7) + 3) >= *(_BYTE *)(((unsigned __int64)recipe_data >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(recipe_data);
    }
    proto::CookRecipeData::set_proficiency(recipe_proto, recipe_data->proficiency);
    std::__detail::_Node_iterator<std::pair<unsigned int const,CookRecipeData>,false,false>::operator++(&__for_begin);
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v27);
  __for_range_0 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v27)->design_config.txt_config_mgr.cook_config_mgr.cook_recipe_excel_config_map;
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v27);
  __for_begin_0._M_cur = std::unordered_map<unsigned int,data::CookRecipeExcelConfig>::begin(__for_range_0)._M_cur;
  __for_end_0._M_cur = std::unordered_map<unsigned int,data::CookRecipeExcelConfig>::end(__for_range_0)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::CookRecipeExcelConfig>,false>(
            &__for_begin_0,
            &__for_end_0) )
  {
    v19 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::CookRecipeExcelConfig>,false,false>::operator*(&__for_begin_0);
    recipe_id_0 = std::get<0ul,unsigned int const,data::CookRecipeExcelConfig>(v19);
    recipe_config = (std::tuple_element<1,const std::pair<unsigned int const,data::CookRecipeExcelConfig> >::type *)std::get<1ul,unsigned int const,data::CookRecipeExcelConfig>(v19);
    p_is_default_unlocked = &recipe_config->is_default_unlocked;
    if ( *(_BYTE *)(((unsigned __int64)p_is_default_unlocked >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)p_is_default_unlocked & 7) >= *(_BYTE *)(((unsigned __int64)p_is_default_unlocked >> 3)
                                                                  + 0x7FFF8000) )
    {
      __asan_report_load1(p_is_default_unlocked);
    }
    if ( recipe_config->is_default_unlocked )
    {
      __for_end._M_cur = std::unordered_map<unsigned int,CookRecipeData>::end(&this->recipe_data_map_)._M_cur;
      __for_begin._M_cur = std::unordered_map<unsigned int,CookRecipeData>::find(&this->recipe_data_map_, recipe_id_0)._M_cur;
      if ( std::__detail::operator==<std::pair<unsigned int const,CookRecipeData>,false>(&__for_begin, &__for_end) )
      {
        v8 = std::__shared_ptr_access<proto::CookDataNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::CookDataNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
        recipe_proto_0 = proto::CookDataNotify::add_recipe_data_list(v8);
        if ( *(_BYTE *)(((unsigned __int64)recipe_id_0 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)recipe_id_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)recipe_id_0 >> 3)
                                                                        + 0x7FFF8000) )
        {
          __asan_report_load4(recipe_id_0);
        }
        proto::CookRecipeData::set_recipe_id(recipe_proto_0, *recipe_id_0);
      }
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::CookRecipeExcelConfig>,false,false>::operator++(&__for_begin_0);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  player = this->player_;
  std::dynamic_pointer_cast<google::protobuf::Message const,proto::CookDataNotify>((const std::shared_ptr<proto::CookDataNotify> *)&v27);
  Player::sendMessage(player, &v27, 0LL);
  std::shared_ptr<google::protobuf::Message const>::~shared_ptr(&v27);
  common::tools::perf::make_shared<proto::CompoundDataNotify>();
  v10 = std::__shared_ptr_access<proto::CompoundDataNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::CompoundDataNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
  PlayerCookComp::fillCompoundDataProto<proto::CompoundDataNotify>(this, v10);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  v11 = this->player_;
  std::dynamic_pointer_cast<google::protobuf::Message const,proto::CompoundDataNotify>((const std::shared_ptr<proto::CompoundDataNotify> *)&v27);
  Player::sendMessage(v11, &v27, 0LL);
  std::shared_ptr<google::protobuf::Message const>::~shared_ptr(&v27);
  std::shared_ptr<proto::CompoundDataNotify>::~shared_ptr((std::shared_ptr<proto::CompoundDataNotify> *const)(v1 + 64));
  std::shared_ptr<proto::CookDataNotify>::~shared_ptr((std::shared_ptr<proto::CookDataNotify> *const)(v1 + 32));
  result = 0;
  if ( v28 == (char *)v1 )
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
  return result;
};

// Line 151: range 00000000175DE520-00000000175E1373
void __cdecl PlayerCookComp::onPlayerCookReq(
        PlayerCookComp *const this,
        const proto::PlayerCookReq *req,
        proto::PlayerCookRsp *rsp_0)
{
  unsigned __int64 v3; // r15
  __int64 v4; // rax
  _DWORD *v5; // r14
  PlayerBasicComp *BasicComp; // rax
  common::milog::MiLogStream *v7; // rbx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  bool isCookSystemClosed; // bl
  FeatureSwitchMgr *p_feature_switch_mgr; // rbx
  uint32_t v11; // eax
  common::milog::MiLogStream *v12; // rbx
  common::milog::MiLogStream *v13; // rax
  PlayerBasicComp *v14; // rax
  uint32_t AvatarComp; // eax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  uint64_t Guid; // rsi
  bool v22; // al
  int *v23; // r8
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  Player *Player; // rax
  CookExcelConfigMgr *p_cook_config_mgr; // r13
  uint32_t v33; // ebx
  uint32_t v34; // eax
  std::pair<unsigned int const,unsigned int> *v35; // r8
  std::vector<data::IdCountConfig>::size_type v36; // rbx
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  const std::vector<data::IdCountConfig> *p_quality_output_vec; // rdi
  const data::IdCountConfig *v40; // rax
  unsigned int *v41; // rdi
  SelectType v42; // ebx
  char *v43; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v44; // rdi
  __int64 v45; // rdx
  std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v46; // rax
  uint64_t v47; // r9
  uint32_t v48; // r8d
  unsigned int v49; // ebx
  unsigned int *v50; // rdi
  SelectType v51; // ebx
  const ItemParam *v52; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v53; // rdi
  __int64 v54; // rdx
  uint32_t v55; // ebx
  std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v56; // rax
  uint64_t v57; // rax
  std::map<unsigned int,unsigned int>::mapped_type *v58; // rdi
  std::map<unsigned int,unsigned int>::mapped_type v59; // r8d
  std::map<unsigned int,unsigned int>::mapped_type *v60; // rdi
  std::map<unsigned int,unsigned int>::mapped_type v61; // r8d
  common::milog::MiLogStream *v62; // rbx
  common::milog::MiLogStream *v63; // rax
  common::milog::MiLogStream *v64; // rcx
  common::milog::MiLogStream *v65; // rbx
  common::milog::MiLogStream *v66; // rax
  common::milog::MiLogStream *v67; // rcx
  std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v68; // rax
  uint64_t v69; // rax
  uint32_t ProudSkillExtraProficiency; // eax
  std::unordered_map<unsigned int,CookRecipeData>::mapped_type *v71; // rdi
  google::protobuf::RepeatedPtrField<proto::ItemParam> *v72; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v73; // rax
  google::protobuf::RepeatedPtrField<proto::ItemParam> *v74; // rax
  std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v75; // rax
  uint64_t v76; // r9
  PlayerEventComp *EventComp; // rbx
  unsigned int *v78; // r8
  unsigned int *v79; // r9
  std::__shared_ptr_access<proto_log::PlayerLogBodyCook,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v80; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyCook,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v81; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyCook,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v82; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyCook,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v83; // rax
  google::protobuf::RepeatedPtrField<proto_log::ItemLog> *v84; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyCook,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v85; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyCook,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v86; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyCook,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v87; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyCook,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v88; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyCook,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v89; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyCook,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v90; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v91; // rax
  uint32_t *v92; // rdx
  std::__shared_ptr_access<proto_log::PlayerLogBodyCook,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v93; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyCook,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v94; // rax
  Player *v95; // rbx
  std::string mem_func; // [rsp+0h] [rbp-680h]
  PlayerCookComp::onPlayerCookReq::<lambda(uint32_t, const LifeEffectCookWidenJudgeArea&)> func; // [rsp+20h] [rbp-660h]
  bool is_can_auto_qte; // [rsp+66h] [rbp-61Ah]
  bool is_auto_qte; // [rsp+67h] [rbp-619h]
  uint32_t assist_avatar_id; // [rsp+68h] [rbp-618h]
  uint32_t old_proficiency; // [rsp+6Ch] [rbp-614h]
  google::protobuf::int32 ret; // [rsp+70h] [rbp-610h]
  google::protobuf::int32 reta; // [rsp+70h] [rbp-610h]
  uint32_t new_recipe_proficiency; // [rsp+74h] [rbp-60Ch]
  uint32_t proud_skill_id; // [rsp+78h] [rbp-608h]
  unsigned int default_item_count; // [rsp+7Ch] [rbp-604h]
  std::map<unsigned int,unsigned int>::iterator __for_begin_0; // [rsp+80h] [rbp-600h] BYREF
  std::map<unsigned int,unsigned int>::iterator __for_end_0; // [rsp+88h] [rbp-5F8h] BYREF
  std::vector<ItemParam>::iterator __for_begin_1; // [rsp+90h] [rbp-5F0h] BYREF
  std::map<unsigned int,unsigned int>::iterator __for_begin; // [rsp+98h] [rbp-5E8h] BYREF
  const data::CookRecipeExcelConfig *recipe_config_ptr; // [rsp+A0h] [rbp-5E0h]
  const std::vector<data::IdCountConfig> *__for_range; // [rsp+A8h] [rbp-5D8h]
  PlayerItemComp *item_comp; // [rsp+B0h] [rbp-5D0h]
  const data::CookBonusExcelConfig *bonus_config_ptr; // [rsp+B8h] [rbp-5C8h]
  std::map<unsigned int,unsigned int> *__for_range_0; // [rsp+C0h] [rbp-5C0h]
  std::map<unsigned int,unsigned int> *__for_range_2; // [rsp+C8h] [rbp-5B8h]
  std::map<unsigned int,unsigned int> *__for_range_3; // [rsp+D0h] [rbp-5B0h]
  std::map<unsigned int,unsigned int> *__for_range_4; // [rsp+D8h] [rbp-5A8h]
  proto::CookRecipeData *recipe_data; // [rsp+E0h] [rbp-5A0h]
  std::map<unsigned int,unsigned int> *__for_range_5; // [rsp+E8h] [rbp-598h]
  std::map<unsigned int,unsigned int> *__for_range_6; // [rsp+F0h] [rbp-590h]
  const std::vector<data::IdCountConfig> *__for_range_7; // [rsp+F8h] [rbp-588h]
  std::vector<unsigned int> *__for_range_8; // [rsp+100h] [rbp-580h]
  const data::IdCountConfig *id_count_config_0; // [rsp+108h] [rbp-578h]
  proto_log::ItemLog *item_log; // [rsp+110h] [rbp-570h]
  const std::pair<unsigned int const,unsigned int> *v129; // [rsp+118h] [rbp-568h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *item_id_3; // [rsp+120h] [rbp-560h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *count_3; // [rsp+128h] [rbp-558h]
  const std::pair<unsigned int const,unsigned int> *v132; // [rsp+130h] [rbp-550h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *item_id_2; // [rsp+138h] [rbp-548h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *count_2; // [rsp+140h] [rbp-540h]
  const std::pair<unsigned int const,unsigned int> *v135; // [rsp+148h] [rbp-538h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *item_id_1; // [rsp+150h] [rbp-530h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *count_1; // [rsp+158h] [rbp-528h]
  const std::pair<unsigned int const,unsigned int> *v138; // [rsp+160h] [rbp-520h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *item_id_0; // [rsp+168h] [rbp-518h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *count_0; // [rsp+170h] [rbp-510h]
  const std::pair<unsigned int const,unsigned int> *v141; // [rsp+178h] [rbp-508h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *item_id; // [rsp+180h] [rbp-500h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *count; // [rsp+188h] [rbp-4F8h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *qte_quality; // [rsp+190h] [rbp-4F0h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *qte_quality_cook_count; // [rsp+198h] [rbp-4E8h]
  std::vector<ItemParam> *__for_range_1; // [rsp+1A0h] [rbp-4E0h]
  const ItemParam *item_param; // [rsp+1A8h] [rbp-4D8h]
  const data::IdCountConfig *id_count_config; // [rsp+1B0h] [rbp-4D0h]
  std::pair<unsigned int const,unsigned int> __for_end; // [rsp+1B8h] [rbp-4C8h] BYREF
  common::milog::MiLogStream v150; // [rsp+1C0h] [rbp-4C0h] BYREF
  common::milog::MiLogStream v151; // [rsp+1E0h] [rbp-4A0h] BYREF
  std::map<unsigned int,unsigned int> v152; // [rsp+200h] [rbp-480h] BYREF
  char v153[1104]; // [rsp+230h] [rbp-450h] BYREF

  v3 = (unsigned __int64)v153;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_5(1056LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "22 32 1 9 holer:175 48 1 32 is_talent_forbid_avatar_cook:216 64 4 13 recipe_id:177 80 4 15 qte_q"
                        "uality:178 96 4 14 cook_count:180 112 4 22 opt_proud_skill_id:400 128 4 19 max_widen_ratio:401 1"
                        "44 16 21 assist_avatar_ptr:190 176 16 16 cook_log_ptr:421 208 16 19 id_count_config:293 240 16 1"
                        "4 item_param:262 272 24 22 proud_skill_id_vec:232 336 24 24 input_item_param_vec:259 400 24 17 a"
                        "ction_reason:313 464 24 31 total_output_item_param_vec:324 528 24 25 output_item_param_vec:380 5"
                        "92 24 32 extral_output_item_param_vec:389 656 48 25 qte_quality_count_map:231 736 48 27 default_"
                        "output_item_map:282 816 48 19 output_item_map:283 896 48 26 extral_output_item_map:284 976 48 25"
                        " total_output_item_map:323";
  *(_QWORD *)(v3 + 16) = PlayerCookComp::onPlayerCookReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753535;
  v5[536862722] = -234556924;
  v5[536862723] = -234556924;
  v5[536862724] = 61956;
  v5[536862725] = 62194;
  v5[536862726] = 62194;
  v5[536862727] = 62194;
  v5[536862728] = 62194;
  v5[536862729] = -218959360;
  v5[536862730] = 62194;
  v5[536862731] = -218959360;
  v5[536862732] = 62194;
  v5[536862733] = -218959360;
  v5[536862734] = 62194;
  v5[536862735] = -218959360;
  v5[536862736] = 62194;
  v5[536862737] = -218959360;
  v5[536862738] = 62194;
  v5[536862739] = -218959360;
  v5[536862740] = 62194;
  v5[536862742] = -218959118;
  v5[536862744] = -219021312;
  v5[536862745] = 62194;
  v5[536862747] = -218959118;
  v5[536862749] = -219021312;
  v5[536862750] = 62194;
  v5[536862752] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  BasicComp = Player::getBasicComp(this->player_);
  if ( PlayerBasicComp::isStateOpen(BasicComp, 9u) )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v3 + 240));
    v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 240));
    isCookSystemClosed = FeatureSwitchMgr::isCookSystemClosed(&v8->feature_switch_mgr);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 240));
    if ( isCookSystemClosed )
    {
      common::milog::MiLogStream::create(
        &v151,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/cook/player_cook_comp.cpp",
        "onPlayerCookReq",
        163);
      common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
        &v151,
        (const char (*)[35])"[FEATURE_SWITCH] CookSystem closed");
      common::milog::MiLogStream::~MiLogStream(&v151);
      proto::PlayerCookRsp::set_retcode(rsp_0, 142);
      goto LABEL_179;
    }
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v3 + 240));
    p_feature_switch_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 240))->feature_switch_mgr;
    v11 = proto::PlayerCookReq::recipe_id(req);
    LOBYTE(p_feature_switch_mgr) = FeatureSwitchMgr::isCookClosed(p_feature_switch_mgr, v11);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 240));
    if ( (_BYTE)p_feature_switch_mgr )
    {
      common::milog::MiLogStream::create(
        &v151,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/cook/player_cook_comp.cpp",
        "onPlayerCookReq",
        170);
      v12 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
              &v151,
              (const char (*)[40])"[FEATURE_SWITCH] CookSystem recipe_id: ");
      *(_DWORD *)(v3 + 128) = proto::PlayerCookReq::recipe_id(req);
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v12,
              (const unsigned int *)(v3 + 128));
      common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v13, (const char (*)[8])" closed");
      common::milog::MiLogStream::~MiLogStream(&v151);
      proto::PlayerCookRsp::set_retcode(rsp_0, 142);
      goto LABEL_179;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    v14 = Player::getBasicComp(this->player_);
    PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v151, v14);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 32), 0x76Du, mem_func);
    std::string::~string(&v151);
    *(_DWORD *)(v3 + 64) = proto::PlayerCookReq::recipe_id(req);
    *(_DWORD *)(v3 + 80) = proto::PlayerCookReq::qte_quality(req);
    assist_avatar_id = proto::PlayerCookReq::assist_avatar(req);
    *(_DWORD *)(v3 + 96) = proto::PlayerCookReq::cook_count(req);
    proto::PlayerCookRsp::set_retcode(rsp_0, -1);
    if ( !*(_DWORD *)(v3 + 96) )
      *(_DWORD *)(v3 + 96) = 1;
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    AvatarComp = (unsigned int)Player::getAvatarComp(this->player_);
    PlayerAvatarComp::findFormalAvatarByAvatarId((const PlayerAvatarComp *const)(v3 + 144), AvatarComp);
    if ( std::operator==<FormalAvatar>(0LL, (const std::shared_ptr<FormalAvatar> *)(v3 + 144)) )
    {
      proto::PlayerCookRsp::set_retcode(rsp_0, 104);
LABEL_178:
      std::shared_ptr<FormalAvatar>::~shared_ptr((std::shared_ptr<FormalAvatar> *const)(v3 + 144));
      StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 32));
      goto LABEL_179;
    }
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v3 + 240));
    v16 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 240));
    recipe_config_ptr = data::CookExcelConfigMgrBase::findCookRecipeExcelConfig(
                          &v16->design_config.txt_config_mgr.cook_config_mgr,
                          *(_DWORD *)(v3 + 64));
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 240));
    if ( !recipe_config_ptr )
    {
      proto::PlayerCookRsp::set_retcode(rsp_0, 611);
      goto LABEL_178;
    }
    if ( !PlayerCookComp::isRecipeUnlocked(this, *(_DWORD *)(v3 + 64)) )
    {
      proto::PlayerCookRsp::set_retcode(rsp_0, 612);
      goto LABEL_178;
    }
    if ( *(_DWORD *)(v3 + 80) > 3u )
    {
      common::milog::MiLogStream::create(
        &v151,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/cook/player_cook_comp.cpp",
        "onPlayerCookReq",
        210);
      v17 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
              &v151,
              (const char (*)[20])"max_qte_quality is ");
      v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v17,
              &CookExcelConfigMgr::max_quality);
      v19 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
              v18,
              (const char (*)[21])" req.qte_quality(): ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v3 + 80));
      common::milog::MiLogStream::~MiLogStream(&v151);
      proto::PlayerCookRsp::set_retcode(rsp_0, -1);
      goto LABEL_178;
    }
    *(_BYTE *)(v3 + 48) = 0;
    v20 = std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 144));
    Guid = Avatar::getGuid(v20);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    PlayerCookComp::foreachProudCookConfig<LifeEffectCookCanNotCook,PlayerCookComp::onPlayerCookReq(proto::PlayerCookReq const&,proto::PlayerCookRsp &)::{lambda(unsigned int,LifeEffectCookCanNotCook const&)#1}>(
      this->player_,
      Guid,
      recipe_config_ptr,
      (PlayerCookComp::onPlayerCookReq::<lambda(uint32_t, const LifeEffectCookCanNotCook&)>)(v3 + 48));
    if ( *(_BYTE *)(v3 + 48) )
    {
      proto::PlayerCookRsp::set_retcode(rsp_0, 666);
      goto LABEL_178;
    }
    old_proficiency = PlayerCookComp::getRecipeProficiency(this, *(_DWORD *)(v3 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&recipe_config_ptr->max_proficiency >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&recipe_config_ptr->max_proficiency >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&recipe_config_ptr->max_proficiency);
    }
    is_can_auto_qte = old_proficiency >= recipe_config_ptr->max_proficiency;
    v22 = !*(_DWORD *)(v3 + 80) || *(_DWORD *)(v3 + 96) > 1u;
    is_auto_qte = v22;
    std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v3 + 656));
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 272));
    if ( is_auto_qte )
    {
      if ( !is_can_auto_qte )
      {
        proto::PlayerCookRsp::set_retcode(rsp_0, 620);
LABEL_177:
        std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 272));
        std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v3 + 656));
        goto LABEL_178;
      }
      PlayerCookComp::randAutoCookQualityMap(&v152, this, recipe_config_ptr, *(_DWORD *)(v3 + 96));
      std::map<unsigned int,unsigned int>::operator=((std::map<unsigned int,unsigned int> *const)(v3 + 656), &v152);
      std::map<unsigned int,unsigned int>::~map(&v152);
      if ( std::map<unsigned int,unsigned int>::empty((const std::map<unsigned int,unsigned int> *const)(v3 + 656)) )
      {
        common::milog::MiLogStream::create(
          &v151,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/cook/player_cook_comp.cpp",
          "onPlayerCookReq",
          247);
        v24 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                &v151,
                (const char (*)[24])"randAutoCookQualityMap ");
        v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v24,
                (const unsigned int *)(v3 + 64));
        common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v25, (const char (*)[8])" failed");
        common::milog::MiLogStream::~MiLogStream(&v151);
        goto LABEL_177;
      }
      *(_DWORD *)(v3 + 80) = 3;
    }
    else
    {
      *(_DWORD *)(v3 + 128) = 1;
      std::map<unsigned int,unsigned int>::emplace<unsigned int &,int>(
        (std::map<unsigned int,unsigned int> *const)(v3 + 656),
        (unsigned int *)(v3 + 80),
        (int *)(v3 + 128),
        (unsigned int *)(v3 + 80),
        v23);
    }
    std::vector<ItemParam>::vector((std::vector<ItemParam> *const)(v3 + 336));
    __for_range = &recipe_config_ptr->input_vec;
    __for_begin._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr)std::vector<data::IdCountConfig>::begin(&recipe_config_ptr->input_vec)._M_current;
    __for_end = (std::pair<unsigned int const,unsigned int>)std::vector<data::IdCountConfig>::end(&recipe_config_ptr->input_vec)._M_current;
    while ( __gnu_cxx::operator!=<data::IdCountConfig const*,std::vector<data::IdCountConfig>>(
              (const __gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *)&__for_begin,
              (const __gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *)&__for_end) )
    {
      id_count_config = __gnu_cxx::__normal_iterator<data::IdCountConfig const*,std::vector<data::IdCountConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *const)&__for_begin);
      *(_DWORD *)(v3 + 240) = 0;
      *(_DWORD *)(v3 + 244) = 0;
      *(_DWORD *)(v3 + 248) = 0;
      *(_DWORD *)(v3 + 252) = 0;
      ItemParam::fromIdCountConfig((ItemParam *const)(v3 + 240), id_count_config);
      *(_DWORD *)(v3 + 244) = SAFE_MULTIPLY<unsigned int,unsigned int>(*(_DWORD *)(v3 + 244), *(_DWORD *)(v3 + 96));
      if ( *(_BYTE *)(((unsigned __int64)&id_count_config->count >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)id_count_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&id_count_config->count >> 3)
                                                                       + 0x7FFF8000) )
      {
        __asan_report_load4(&id_count_config->count);
      }
      if ( *(_DWORD *)(v3 + 96) * id_count_config->count != *(_DWORD *)(v3 + 244) )
      {
        common::milog::MiLogStream::create(
          &v151,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/cook/player_cook_comp.cpp",
          "onPlayerCookReq",
          267);
        v26 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(&v151, (const char (*)[12])"item_param:");
        v27 = operator<<(v26, (const ItemParam *)(v3 + 240));
        v28 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v27, (const char (*)[12])" recipe_id:");
        v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v28,
                (const unsigned int *)(v3 + 64));
        v30 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v29, (const char (*)[13])" cook_count:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, (const unsigned int *)(v3 + 96));
        common::milog::MiLogStream::~MiLogStream(&v151);
        goto LABEL_176;
      }
      std::vector<ItemParam>::push_back(
        (std::vector<ItemParam> *const)(v3 + 336),
        (const std::vector<ItemParam>::value_type *)(v3 + 240));
      __gnu_cxx::__normal_iterator<data::IdCountConfig const*,std::vector<data::IdCountConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *const)&__for_begin);
    }
    Player = PlayerCompBase::getPlayer(this);
    item_comp = Player::getItemComp(Player);
    if ( PlayerItemComp::checkSubItemBatch(item_comp, (const std::vector<ItemParam> *)(v3 + 336)) )
    {
      proto::PlayerCookRsp::set_retcode(rsp_0, 609);
    }
    else
    {
      std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v3 + 736));
      std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v3 + 816));
      std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v3 + 896));
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)(v3 + 240));
      p_cook_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 240))->design_config.txt_config_mgr.cook_config_mgr;
      v33 = *(_DWORD *)(v3 + 64);
      v34 = proto::PlayerCookReq::assist_avatar(req);
      bonus_config_ptr = CookExcelConfigMgr::findCookBonusExcelConfig(p_cook_config_mgr, v34, v33);
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 240));
      __for_range_0 = (std::map<unsigned int,unsigned int> *)(v3 + 656);
      __for_begin_0._M_node = std::map<unsigned int,unsigned int>::begin((std::map<unsigned int,unsigned int> *const)(v3 + 656))._M_node;
      __for_end_0._M_node = std::map<unsigned int,unsigned int>::end(__for_range_0)._M_node;
      while ( std::operator!=(&__for_begin_0, &__for_end_0) )
      {
        v35 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin_0);
        if ( ((unsigned __int8)v35 & 7) >= *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&v35->second + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)v35 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v35->second + 3) >> 3) + 0x7FFF8000) )
        {
          __asan_report_load_n(v35, 8LL);
        }
        __for_end = *v35;
        qte_quality = std::get<0ul,unsigned int const,unsigned int>(&__for_end);
        qte_quality_cook_count = std::get<1ul,unsigned int const,unsigned int>(&__for_end);
        if ( *(_BYTE *)(((unsigned __int64)qte_quality >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)qte_quality & 7) + 3) >= *(_BYTE *)(((unsigned __int64)qte_quality >> 3)
                                                                        + 0x7FFF8000) )
        {
          __asan_report_load4(qte_quality);
        }
        v36 = *qte_quality - 1;
        if ( v36 >= std::vector<data::IdCountConfig>::size(&recipe_config_ptr->quality_output_vec) )
        {
          common::milog::MiLogStream::create(
            &v151,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/cook/player_cook_comp.cpp",
            "onPlayerCookReq",
            290);
          v37 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v151, (const char (*)[18])off_2615D9A0);
          v38 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v37, qte_quality);
          common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v38, (const char (*)[14])off_2615D9E0);
          common::milog::MiLogStream::~MiLogStream(&v151);
          goto LABEL_175;
        }
        p_quality_output_vec = &recipe_config_ptr->quality_output_vec;
        if ( *(_BYTE *)(((unsigned __int64)qte_quality >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)qte_quality & 7) + 3) >= *(_BYTE *)(((unsigned __int64)qte_quality >> 3)
                                                                        + 0x7FFF8000) )
        {
          p_quality_output_vec = (const std::vector<data::IdCountConfig> *)qte_quality;
          __asan_report_load4(qte_quality);
        }
        v40 = std::vector<data::IdCountConfig>::operator[](p_quality_output_vec, *qte_quality - 1);
        data::IdCountConfig::IdCountConfig((data::IdCountConfig *const)(v3 + 208), v40);
        std::vector<ItemParam>::vector((std::vector<ItemParam> *const)(v3 + 592));
        if ( *(_BYTE *)(((unsigned __int64)qte_quality_cook_count >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)qte_quality_cook_count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)qte_quality_cook_count >> 3)
                                                                                   + 0x7FFF8000) )
        {
          __asan_report_load4(qte_quality_cook_count);
        }
        default_item_count = SAFE_MULTIPLY<unsigned int,unsigned int>(*(_DWORD *)(v3 + 220), *qte_quality_cook_count);
        *(_DWORD *)(v3 + 240) = *(_DWORD *)(v3 + 216);
        *(_DWORD *)(v3 + 244) = default_item_count;
        *(_DWORD *)(v3 + 248) = 0;
        *(_DWORD *)(v3 + 252) = 0;
        std::vector<ItemParam>::push_back(
          (std::vector<ItemParam> *const)(v3 + 592),
          (std::vector<ItemParam>::value_type *)(v3 + 240));
        v41 = std::map<unsigned int,unsigned int>::operator[](
                (std::map<unsigned int,unsigned int> *const)(v3 + 736),
                (const std::map<unsigned int,unsigned int>::key_type *)(v3 + 216));
        if ( *(_BYTE *)(((unsigned __int64)v41 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v41 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v41 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v41);
        }
        v42 = SAFE_ADD<unsigned int,unsigned int>(*v41, default_item_count);
        v43 = (char *)(v3 + 216);
        v44 = std::map<unsigned int,unsigned int>::operator[](
                (std::map<unsigned int,unsigned int> *const)(v3 + 736),
                (const std::map<unsigned int,unsigned int>::key_type *)(v3 + 216));
        v45 = *(unsigned __int8 *)(((unsigned __int64)v44 >> 3) + 0x7FFF8000);
        if ( (_BYTE)v45 != 0 && (char)(((unsigned __int8)v44 & 7) + 3) >= (char)v45 )
        {
          LOBYTE(v43) = (_BYTE)v45 != 0;
          __asan_report_store4(v44, v43, v45);
        }
        *v44 = v42;
        if ( bonus_config_ptr )
        {
          v46 = std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 144));
          v47 = Avatar::getGuid(v46);
          if ( *(_BYTE *)(((unsigned __int64)qte_quality_cook_count >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)qte_quality_cook_count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)qte_quality_cook_count >> 3)
                                                                                     + 0x7FFF8000) )
          {
            __asan_report_load4(qte_quality_cook_count);
          }
          v48 = *qte_quality_cook_count;
          if ( *(_BYTE *)(((unsigned __int64)qte_quality >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)qte_quality & 7) + 3) >= *(_BYTE *)(((unsigned __int64)qte_quality >> 3)
                                                                          + 0x7FFF8000) )
          {
            __asan_report_load4(qte_quality);
          }
          PlayerCookComp::bonusReplaceOutput(
            this,
            bonus_config_ptr,
            *qte_quality,
            (const data::IdCountConfig *)(v3 + 208),
            v48,
            v47,
            (std::vector<unsigned int> *)(v3 + 272),
            (std::vector<ItemParam> *)(v3 + 592));
        }
        __for_range_1 = (std::vector<ItemParam> *)(v3 + 592);
        __for_begin_1._M_current = std::vector<ItemParam>::begin((std::vector<ItemParam> *const)(v3 + 592))._M_current;
        __for_begin._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr)std::vector<ItemParam>::end(__for_range_1)._M_current;
        while ( __gnu_cxx::operator!=<ItemParam *,std::vector<ItemParam>>(
                  &__for_begin_1,
                  (const __gnu_cxx::__normal_iterator<ItemParam*,std::vector<ItemParam> > *)&__for_begin) )
        {
          item_param = __gnu_cxx::__normal_iterator<ItemParam *,std::vector<ItemParam>>::operator*(&__for_begin_1);
          if ( *(_BYTE *)(((unsigned __int64)&item_param->count >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)item_param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&item_param->count >> 3)
                                                                     + 0x7FFF8000) )
          {
            __asan_report_load4(&item_param->count);
          }
          v49 = item_param->count;
          v50 = std::map<unsigned int,unsigned int>::operator[](
                  (std::map<unsigned int,unsigned int> *const)(v3 + 816),
                  &item_param->item_id);
          if ( *(_BYTE *)(((unsigned __int64)v50 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v50 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v50 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v50);
          }
          v51 = SAFE_ADD<unsigned int,unsigned int>(*v50, v49);
          v52 = item_param;
          v53 = std::map<unsigned int,unsigned int>::operator[](
                  (std::map<unsigned int,unsigned int> *const)(v3 + 816),
                  &item_param->item_id);
          v54 = *(unsigned __int8 *)(((unsigned __int64)v53 >> 3) + 0x7FFF8000);
          if ( (_BYTE)v54 != 0 && (char)(((unsigned __int8)v53 & 7) + 3) >= (char)v54 )
          {
            LOBYTE(v52) = (_BYTE)v54 != 0;
            __asan_report_store4(v53, v52, v54);
          }
          *v53 = v51;
          __gnu_cxx::__normal_iterator<ItemParam *,std::vector<ItemParam>>::operator++(&__for_begin_1);
        }
        if ( *(_BYTE *)(((unsigned __int64)qte_quality >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)qte_quality & 7) + 3) >= *(_BYTE *)(((unsigned __int64)qte_quality >> 3)
                                                                        + 0x7FFF8000) )
        {
          __asan_report_load4(qte_quality);
        }
        v55 = *qte_quality;
        v56 = std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 144));
        v57 = Avatar::getGuid(v56);
        PlayerCookComp::extraOutputOnSpecificQuality(
          this,
          *(_DWORD *)(v3 + 64),
          v57,
          (const std::vector<ItemParam> *)(v3 + 592),
          (std::map<unsigned int,unsigned int> *)(v3 + 896),
          (std::vector<unsigned int> *)(v3 + 272),
          v55);
        std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v3 + 592));
        data::IdCountConfig::~IdCountConfig((data::IdCountConfig *const)(v3 + 208));
        std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin_0);
      }
      ActionReason::ActionReason((ActionReason *const)(v3 + 400), ACTION_REASON_COOK, ITEM_LIMIT_UNLIMITED);
      ItemParam::vecFromItemCountMap(
        (std::vector<ItemParam> *)(v3 + 592),
        (const std::map<unsigned int,unsigned int> *)(v3 + 736));
      ret = PlayerItemComp::checkAddItemBatch(
              item_comp,
              (const std::vector<ItemParam> *)(v3 + 592),
              (const ActionReason *)(v3 + 400));
      std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v3 + 592));
      if ( ret )
      {
        common::milog::MiLogStream::create(
          &v151,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/cook/player_cook_comp.cpp",
          "onPlayerCookReq",
          317);
        common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
          &v151,
          (const char (*)[20])"checkAddItem failed");
        common::milog::MiLogStream::~MiLogStream(&v151);
        proto::PlayerCookRsp::set_retcode(rsp_0, ret);
      }
      else
      {
        std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v3 + 976));
        std::vector<ItemParam>::vector((std::vector<ItemParam> *const)(v3 + 464));
        __for_range_2 = (std::map<unsigned int,unsigned int> *)(v3 + 816);
        __for_begin._M_node = std::map<unsigned int,unsigned int>::begin((std::map<unsigned int,unsigned int> *const)(v3 + 816))._M_node;
        __for_end = (std::pair<unsigned int const,unsigned int>)std::map<unsigned int,unsigned int>::end(__for_range_2)._M_node;
        while ( std::operator!=(
                  &__for_begin,
                  (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_end) )
        {
          v141 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
          item_id = std::get<0ul,unsigned int const,unsigned int>(v141);
          count = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v141);
          v58 = std::map<unsigned int,unsigned int>::operator[](
                  (std::map<unsigned int,unsigned int> *const)(v3 + 976),
                  item_id);
          if ( *(_BYTE *)(((unsigned __int64)v58 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v58 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v58 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v58);
          }
          v59 = *v58;
          if ( *(_BYTE *)(((unsigned __int64)count >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)count >> 3) + 0x7FFF8000) )
          {
            v58 = count;
            __asan_report_load4(count);
          }
          *v58 = v59 + *count;
          std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
        }
        __for_range_3 = (std::map<unsigned int,unsigned int> *)(v3 + 896);
        __for_begin._M_node = std::map<unsigned int,unsigned int>::begin((std::map<unsigned int,unsigned int> *const)(v3 + 896))._M_node;
        __for_end = (std::pair<unsigned int const,unsigned int>)std::map<unsigned int,unsigned int>::end(__for_range_3)._M_node;
        while ( std::operator!=(
                  &__for_begin,
                  (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_end) )
        {
          v138 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
          item_id_0 = std::get<0ul,unsigned int const,unsigned int>(v138);
          count_0 = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v138);
          v60 = std::map<unsigned int,unsigned int>::operator[](
                  (std::map<unsigned int,unsigned int> *const)(v3 + 976),
                  item_id_0);
          if ( *(_BYTE *)(((unsigned __int64)v60 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v60 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v60 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v60);
          }
          v61 = *v60;
          if ( *(_BYTE *)(((unsigned __int64)count_0 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)count_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)count_0 >> 3) + 0x7FFF8000) )
          {
            v60 = count_0;
            __asan_report_load4(count_0);
          }
          *v60 = v61 + *count_0;
          std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
        }
        __for_range_4 = (std::map<unsigned int,unsigned int> *)(v3 + 976);
        __for_begin._M_node = std::map<unsigned int,unsigned int>::begin((std::map<unsigned int,unsigned int> *const)(v3 + 976))._M_node;
        __for_end = (std::pair<unsigned int const,unsigned int>)std::map<unsigned int,unsigned int>::end(__for_range_4)._M_node;
        while ( std::operator!=(
                  &__for_begin,
                  (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_end) )
        {
          v135 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
          item_id_1 = std::get<0ul,unsigned int const,unsigned int>(v135);
          count_1 = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v135);
          if ( *(_BYTE *)(((unsigned __int64)count_1 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)count_1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)count_1 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(count_1);
          }
          if ( *count_1 )
          {
            if ( *(_BYTE *)(((unsigned __int64)item_id_1 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)item_id_1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)item_id_1 >> 3)
                                                                          + 0x7FFF8000) )
            {
              __asan_report_load4(item_id_1);
            }
            *(_DWORD *)(v3 + 240) = *item_id_1;
            if ( *(_BYTE *)(((unsigned __int64)count_1 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)count_1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)count_1 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(count_1);
            }
            *(_DWORD *)(v3 + 244) = *count_1;
            *(_DWORD *)(v3 + 248) = 0;
            *(_DWORD *)(v3 + 252) = 0;
            std::vector<ItemParam>::push_back(
              (std::vector<ItemParam> *const)(v3 + 464),
              (std::vector<ItemParam>::value_type *)(v3 + 240));
          }
          else
          {
            common::milog::MiLogStream::create(
              &v150,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/cook/player_cook_comp.cpp",
              "onPlayerCookReq",
              337);
            v62 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                    &v150,
                    (const char (*)[17])"count is 0, req:");
            google::protobuf::Message::ShortDebugString[abi:cxx11](
              (std::string *)&v151,
              &req->google::protobuf::Message);
            v63 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v62, (const std::string *)&v151);
            v64 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v63, (const char (*)[9])" player:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            operator<<(v64, this->player_);
            std::string::~string(&v151);
            common::milog::MiLogStream::~MiLogStream(&v150);
          }
          std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
        }
        if ( std::vector<ItemParam>::empty((const std::vector<ItemParam> *const)(v3 + 464)) )
        {
          common::milog::MiLogStream::create(
            &v150,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/cook/player_cook_comp.cpp",
            "onPlayerCookReq",
            344);
          v65 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  &v150,
                  (const char (*)[22])"output is empty, req:");
          google::protobuf::Message::ShortDebugString[abi:cxx11]((std::string *)&v151, &req->google::protobuf::Message);
          v66 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v65, (const std::string *)&v151);
          v67 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v66, (const char (*)[9])" player:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          operator<<(v67, this->player_);
          std::string::~string(&v151);
          common::milog::MiLogStream::~MiLogStream(&v150);
        }
        else
        {
          reta = PlayerItemComp::checkAddItemBatch(
                   item_comp,
                   (const std::vector<ItemParam> *)(v3 + 464),
                   (const ActionReason *)(v3 + 400));
          if ( reta )
          {
            common::milog::MiLogStream::create(
              &v151,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/cook/player_cook_comp.cpp",
              "onPlayerCookReq",
              352);
            common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
              &v151,
              (const char (*)[20])"checkAddItem failed");
            common::milog::MiLogStream::~MiLogStream(&v151);
            proto::PlayerCookRsp::set_retcode(rsp_0, reta);
          }
          else
          {
            SubItemReason::SubItemReason((SubItemReason *const)&__for_end, (const ActionReason *)(v3 + 400));
            PlayerItemComp::subItemBatch(
              item_comp,
              (const std::vector<ItemParam> *)(v3 + 336),
              (const SubItemReason *)&__for_end);
            PlayerItemComp::addItemBatch(
              item_comp,
              (const std::vector<ItemParam> *)(v3 + 464),
              (const ActionReason *)(v3 + 400),
              0LL);
            if ( *(_DWORD *)(v3 + 80) == 3 )
            {
              v68 = std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 144));
              v69 = Avatar::getGuid(v68);
              ProudSkillExtraProficiency = PlayerCookComp::getProudSkillExtraProficiency(
                                             this,
                                             recipe_config_ptr,
                                             v69,
                                             (std::vector<unsigned int> *)(v3 + 272));
              PlayerCookComp::addRecipeProficiency(this, recipe_config_ptr, ProudSkillExtraProficiency + 1);
            }
            if ( bonus_config_ptr )
              PlayerCookComp::takeBonusExtraOutput(this, recipe_config_ptr, bonus_config_ptr);
            proto::PlayerCookRsp::set_retcode(rsp_0, 0);
            proto::PlayerCookRsp::set_qte_quality(rsp_0, *(_DWORD *)(v3 + 80));
            proto::PlayerCookRsp::set_cook_count(rsp_0, *(_DWORD *)(v3 + 96));
            recipe_data = proto::PlayerCookRsp::mutable_recipe_data(rsp_0);
            proto::CookRecipeData::set_recipe_id(recipe_data, *(_DWORD *)(v3 + 64));
            v71 = std::unordered_map<unsigned int,CookRecipeData>::operator[](
                    &this->recipe_data_map_,
                    (const std::unordered_map<unsigned int,CookRecipeData>::key_type *)(v3 + 64));
            if ( *(_BYTE *)(((unsigned __int64)v71 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v71 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v71 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v71);
            }
            proto::CookRecipeData::set_proficiency(recipe_data, v71->proficiency);
            std::vector<ItemParam>::vector((std::vector<ItemParam> *const)(v3 + 528));
            __for_range_5 = (std::map<unsigned int,unsigned int> *)(v3 + 816);
            __for_begin._M_node = std::map<unsigned int,unsigned int>::begin((std::map<unsigned int,unsigned int> *const)(v3 + 816))._M_node;
            __for_end = (std::pair<unsigned int const,unsigned int>)std::map<unsigned int,unsigned int>::end(__for_range_5)._M_node;
            while ( std::operator!=(
                      &__for_begin,
                      (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_end) )
            {
              v132 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
              item_id_2 = std::get<0ul,unsigned int const,unsigned int>(v132);
              count_2 = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v132);
              if ( *(_BYTE *)(((unsigned __int64)count_2 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)count_2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)count_2 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(count_2);
              }
              if ( *count_2 )
              {
                if ( *(_BYTE *)(((unsigned __int64)item_id_2 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)item_id_2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)item_id_2 >> 3)
                                                                              + 0x7FFF8000) )
                {
                  __asan_report_load4(item_id_2);
                }
                *(_DWORD *)(v3 + 240) = *item_id_2;
                *(_DWORD *)(v3 + 244) = *count_2;
                *(_DWORD *)(v3 + 248) = 0;
                *(_DWORD *)(v3 + 252) = 0;
                std::vector<ItemParam>::push_back(
                  (std::vector<ItemParam> *const)(v3 + 528),
                  (std::vector<ItemParam>::value_type *)(v3 + 240));
              }
              std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
            }
            v72 = proto::PlayerCookRsp::mutable_item_list(rsp_0);
            common::tools::MiscUtils::vectorToRepeated<ItemParam,proto::ItemParam,int (ItemParam::*)(proto::ItemParam&)const>(
              (const std::vector<ItemParam> *)(v3 + 528),
              v72,
              (int (*)(const ItemParam *, proto::ItemParam *))ItemParam::toClient);
            std::vector<ItemParam>::vector((std::vector<ItemParam> *const)(v3 + 592));
            __for_range_6 = (std::map<unsigned int,unsigned int> *)(v3 + 896);
            __for_begin._M_node = std::map<unsigned int,unsigned int>::begin((std::map<unsigned int,unsigned int> *const)(v3 + 896))._M_node;
            __for_end = (std::pair<unsigned int const,unsigned int>)std::map<unsigned int,unsigned int>::end(__for_range_6)._M_node;
            while ( std::operator!=(
                      &__for_begin,
                      (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_end) )
            {
              v129 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
              item_id_3 = std::get<0ul,unsigned int const,unsigned int>(v129);
              v73 = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v129);
              count_3 = v73;
              if ( *(_BYTE *)(((unsigned __int64)v73 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v73 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v73 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v73);
              }
              if ( *count_3 )
              {
                if ( *(_BYTE *)(((unsigned __int64)item_id_3 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)item_id_3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)item_id_3 >> 3)
                                                                              + 0x7FFF8000) )
                {
                  __asan_report_load4(item_id_3);
                }
                *(_DWORD *)(v3 + 240) = *item_id_3;
                *(_DWORD *)(v3 + 244) = *count_3;
                *(_DWORD *)(v3 + 248) = 0;
                *(_DWORD *)(v3 + 252) = 0;
                std::vector<ItemParam>::push_back(
                  (std::vector<ItemParam> *const)(v3 + 592),
                  (std::vector<ItemParam>::value_type *)(v3 + 240));
              }
              std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
            }
            v74 = proto::PlayerCookRsp::mutable_extral_item_list(rsp_0);
            common::tools::MiscUtils::vectorToRepeated<ItemParam,proto::ItemParam,int (ItemParam::*)(proto::ItemParam&)const>(
              (const std::vector<ItemParam> *)(v3 + 592),
              v74,
              (int (*)(const ItemParam *, proto::ItemParam *))ItemParam::toClient);
            if ( !is_auto_qte )
            {
              *(_DWORD *)(v3 + 112) = 0;
              *(_DWORD *)(v3 + 128) = 0;
              v75 = std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 144));
              v76 = Avatar::getGuid(v75);
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8(&this->player_);
              func.__opt_proud_skill_id = (uint32_t *)(v3 + 112);
              func.__max_widen_ratio = (float *)(v3 + 128);
              PlayerCookComp::foreachProudCookConfig<LifeEffectCookWidenJudgeArea,PlayerCookComp::onPlayerCookReq(proto::PlayerCookReq const&,proto::PlayerCookRsp &)::{lambda(unsigned int,LifeEffectCookWidenJudgeArea const&)#2}>(
                this->player_,
                v76,
                recipe_config_ptr,
                func);
              if ( *(_DWORD *)(v3 + 112) )
                std::vector<unsigned int>::push_back(
                  (std::vector<unsigned int> *const)(v3 + 272),
                  (const std::vector<unsigned int>::value_type *)(v3 + 112));
            }
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            EventComp = Player::getEventComp(this->player_);
            common::tools::perf::make_shared<PlayerCookEvent,unsigned int &,unsigned int &,unsigned int &>(
              (unsigned int *)(v3 + 208),
              (unsigned int *)(v3 + 64),
              (unsigned int *)(v3 + 80),
              (unsigned int *)(v3 + 96),
              v78,
              v79);
            std::shared_ptr<BaseEvent>::shared_ptr<PlayerCookEvent,void>(
              (std::shared_ptr<BaseEvent> *const)(v3 + 240),
              (std::shared_ptr<PlayerCookEvent> *)(v3 + 208));
            PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)(v3 + 240));
            std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)(v3 + 240));
            std::shared_ptr<PlayerCookEvent>::~shared_ptr((std::shared_ptr<PlayerCookEvent> *const)(v3 + 208));
            common::tools::perf::make_shared<proto_log::PlayerLogBodyCook>();
            v80 = std::__shared_ptr_access<proto_log::PlayerLogBodyCook,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCook,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 176));
            proto_log::PlayerLogBodyCook::set_recipe_id(v80, *(_DWORD *)(v3 + 64));
            __for_range_7 = &recipe_config_ptr->input_vec;
            __for_begin._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr)std::vector<data::IdCountConfig>::begin(&recipe_config_ptr->input_vec)._M_current;
            __for_end = (std::pair<unsigned int const,unsigned int>)std::vector<data::IdCountConfig>::end(__for_range_7)._M_current;
            while ( __gnu_cxx::operator!=<data::IdCountConfig const*,std::vector<data::IdCountConfig>>(
                      (const __gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *)&__for_begin,
                      (const __gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *)&__for_end) )
            {
              id_count_config_0 = __gnu_cxx::__normal_iterator<data::IdCountConfig const*,std::vector<data::IdCountConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *const)&__for_begin);
              v81 = std::__shared_ptr_access<proto_log::PlayerLogBodyCook,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCook,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 176));
              item_log = proto_log::PlayerLogBodyCook::add_item_list(v81);
              if ( *(_BYTE *)(((unsigned __int64)&id_count_config_0->id >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&id_count_config_0->id >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&id_count_config_0->id);
              }
              proto_log::ItemLog::set_item_id(item_log, id_count_config_0->id);
              if ( *(_BYTE *)(((unsigned __int64)&id_count_config_0->count >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)id_count_config_0 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&id_count_config_0->count >> 3)
                                                                                 + 0x7FFF8000) )
              {
                __asan_report_load4(&id_count_config_0->count);
              }
              proto_log::ItemLog::set_count(item_log, id_count_config_0->count);
              __gnu_cxx::__normal_iterator<data::IdCountConfig const*,std::vector<data::IdCountConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *const)&__for_begin);
            }
            v82 = std::__shared_ptr_access<proto_log::PlayerLogBodyCook,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCook,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 176));
            proto_log::PlayerLogBodyCook::set_type(v82, 1u);
            v83 = std::__shared_ptr_access<proto_log::PlayerLogBodyCook,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCook,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 176));
            v84 = proto_log::PlayerLogBodyCook::mutable_food_list(v83);
            common::tools::MiscUtils::vectorToRepeated<ItemParam,proto_log::ItemLog,void (ItemParam::*)(proto_log::ItemLog&)const>(
              (const std::vector<ItemParam> *)(v3 + 528),
              v84,
              (void (*)(const ItemParam *, proto_log::ItemLog *))ItemParam::toItemLog);
            v85 = std::__shared_ptr_access<proto_log::PlayerLogBodyCook,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCook,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 176));
            proto_log::PlayerLogBodyCook::set_help_avatar_id(v85, assist_avatar_id);
            if ( bonus_config_ptr )
            {
              v86 = std::__shared_ptr_access<proto_log::PlayerLogBodyCook,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCook,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 176));
              if ( *(_BYTE *)(((unsigned __int64)&bonus_config_ptr->bonus_type >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&bonus_config_ptr->bonus_type >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&bonus_config_ptr->bonus_type);
              }
              proto_log::PlayerLogBodyCook::set_help_addition(v86, bonus_config_ptr->bonus_type);
            }
            new_recipe_proficiency = PlayerCookComp::getRecipeProficiency(this, *(_DWORD *)(v3 + 64));
            v87 = std::__shared_ptr_access<proto_log::PlayerLogBodyCook,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCook,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 176));
            proto_log::PlayerLogBodyCook::set_add_point(v87, new_recipe_proficiency - old_proficiency);
            v88 = std::__shared_ptr_access<proto_log::PlayerLogBodyCook,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCook,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 176));
            proto_log::PlayerLogBodyCook::set_recipe_point_after(v88, new_recipe_proficiency);
            v89 = std::__shared_ptr_access<proto_log::PlayerLogBodyCook,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCook,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 176));
            proto_log::PlayerLogBodyCook::set_can_auto_qte(v89, is_can_auto_qte);
            v90 = std::__shared_ptr_access<proto_log::PlayerLogBodyCook,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCook,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 176));
            proto_log::PlayerLogBodyCook::set_is_auto_qte(v90, is_auto_qte);
            __for_range_8 = (std::vector<unsigned int> *)(v3 + 272);
            __for_begin._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr)std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v3 + 272))._M_current;
            __for_end = (std::pair<unsigned int const,unsigned int>)std::vector<unsigned int>::end(__for_range_8)._M_current;
            while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
                      (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_begin,
                      (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_end) )
            {
              v91 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin);
              v92 = v91;
              if ( *(_BYTE *)(((unsigned __int64)v91 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v91 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v91 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v91);
              }
              proud_skill_id = *v92;
              v93 = std::__shared_ptr_access<proto_log::PlayerLogBodyCook,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCook,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 176));
              proto_log::PlayerLogBodyCook::add_proud_skill_id_list(v93, proud_skill_id);
              __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin);
            }
            v94 = std::__shared_ptr_access<proto_log::PlayerLogBodyCook,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCook,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 176));
            proto_log::PlayerLogBodyCook::set_cook_count(v94, *(_DWORD *)(v3 + 96));
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            v95 = this->player_;
            std::shared_ptr<google::protobuf::Message>::shared_ptr(
              (std::shared_ptr<google::protobuf::Message> *const)(v3 + 240),
              0LL);
            std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyCook,void>(
              (std::shared_ptr<google::protobuf::Message> *const)(v3 + 208),
              (const std::shared_ptr<proto_log::PlayerLogBodyCook> *)(v3 + 176));
            Player::printStatLog(v95, (MessagePtr *)(v3 + 208), (MessagePtr *)(v3 + 240), 0xEu);
            std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)(v3 + 208));
            std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)(v3 + 240));
            std::shared_ptr<proto_log::PlayerLogBodyCook>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyCook> *const)(v3 + 176));
            std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v3 + 592));
            std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v3 + 528));
          }
        }
        std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v3 + 464));
        std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v3 + 976));
      }
LABEL_175:
      std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v3 + 896));
      std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v3 + 816));
      std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v3 + 736));
    }
LABEL_176:
    std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v3 + 336));
    goto LABEL_177;
  }
  common::milog::MiLogStream::create(
    &v151,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/player/cook/player_cook_comp.cpp",
    "onPlayerCookReq",
    155);
  v7 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
         &v151,
         (const char (*)[32])"OPEN_STATE_COOK is locked. uid:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  *(_DWORD *)(v3 + 128) = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 128));
  common::milog::MiLogStream::~MiLogStream(&v151);
  proto::PlayerCookRsp::set_retcode(rsp_0, 141);
LABEL_179:
  if ( v153 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF804C) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 84) & 0xFFFFFFF8) >> 3));
    *(_DWORD *)((v3 >> 3) + 0x7FFF8058) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8060) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF806C) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8074) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8080) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_5(v3, 1056LL, v153);
  }
};

// Line 217: range 00000000175DE336-00000000175DE3AE
// local variable allocation has failed, the output may be wrong!
ForeachPolicy __cdecl PlayerCookComp::onPlayerCookReq(proto::PlayerCookReq const&,proto::PlayerCookRsp &)::{lambda(unsigned int,LifeEffectCookCanNotCook const&)#1}::operator()(
        const PlayerCookComp::onPlayerCookReq::<lambda(uint32_t, const LifeEffectCookCanNotCook&)> *const __closure,
        uint32_t proud_skill_id,
        const LifeEffectCookCanNotCook *config)
{
  bool *is_talent_forbid_avatar_cook; // rdx
  char v4; // cl

  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  is_talent_forbid_avatar_cook = __closure->__is_talent_forbid_avatar_cook;
  v4 = *(_BYTE *)(((unsigned __int64)__closure->__is_talent_forbid_avatar_cook >> 3) + 0x7FFF8000);
  if ( v4 != 0 && ((__int64)__closure->__is_talent_forbid_avatar_cook & 7) >= v4 )
  {
    LOBYTE(proud_skill_id) = v4 != 0;
    __asan_report_store1(
      __closure->__is_talent_forbid_avatar_cook,
      *(_QWORD *)&proud_skill_id,
      is_talent_forbid_avatar_cook);
  }
  *is_talent_forbid_avatar_cook = 1;
  return 1;
};

// Line 230: range 00000000176E2394-00000000176E271F
int32_t __cdecl PlayerCookComp::fillCompoundDataProto<proto::CompoundDataNotify>(
        PlayerCookComp *const this,
        proto::CompoundDataNotify *proto)
{
  unsigned int *v2; // rax
  google::protobuf::uint32 *v3; // rdx
  bool *p_is_default_unlocked; // rax
  std::unordered_map<unsigned int,data::CompoundExcelConfig>::const_iterator __for_begin_0; // [rsp+20h] [rbp-80h] BYREF
  std::unordered_map<unsigned int,data::CompoundExcelConfig>::const_iterator __for_end_0; // [rsp+28h] [rbp-78h] BYREF
  std::unordered_set<unsigned int>::iterator __for_begin; // [rsp+30h] [rbp-70h] BYREF
  std::unordered_set<unsigned int>::iterator __for_end; // [rsp+38h] [rbp-68h] BYREF
  std::unordered_set<unsigned int> *__for_range; // [rsp+40h] [rbp-60h]
  const std::unordered_map<unsigned int,data::CompoundExcelConfig> *__for_range_0; // [rsp+48h] [rbp-58h]
  std::unordered_map<unsigned int,std::deque<CompoundOutputData>> *__for_range_1; // [rsp+50h] [rbp-50h]
  const std::pair<unsigned int const,std::deque<CompoundOutputData> > *v14; // [rsp+58h] [rbp-48h]
  std::tuple_element<0,const std::pair<unsigned int const,std::deque<CompoundOutputData> > >::type *compound_id_1; // [rsp+60h] [rbp-40h]
  std::tuple_element<1,const std::pair<unsigned int const,std::deque<CompoundOutputData> > >::type *output_data_que; // [rsp+68h] [rbp-38h]
  proto::CompoundQueueData *que_proto; // [rsp+70h] [rbp-30h]
  const std::pair<unsigned int const,data::CompoundExcelConfig> *v18; // [rsp+78h] [rbp-28h]
  std::tuple_element<0,const std::pair<unsigned int const,data::CompoundExcelConfig> >::type *compound_id_0; // [rsp+80h] [rbp-20h]
  std::tuple_element<1,const std::pair<unsigned int const,data::CompoundExcelConfig> >::type *compound_config; // [rsp+88h] [rbp-18h]
  std::shared_ptr<Config> v21; // [rsp+90h] [rbp-10h] BYREF

  __for_range = &this->unlocked_compound_set_;
  __for_begin._M_cur = std::unordered_set<unsigned int>::begin(&this->unlocked_compound_set_)._M_cur;
  __for_end._M_cur = std::unordered_set<unsigned int>::end(&this->unlocked_compound_set_)._M_cur;
  while ( std::__detail::operator!=<unsigned int,false>(&__for_begin, &__for_end) )
  {
    v2 = (unsigned int *)std::__detail::_Node_iterator<unsigned int,true,false>::operator*(&__for_begin);
    v3 = v2;
    if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v2);
    }
    proto::CompoundDataNotify::add_unlock_compound_list(proto, *v3);
    std::__detail::_Node_iterator<unsigned int,true,false>::operator++(&__for_begin);
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v21);
  __for_range_0 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v21)->design_config.txt_config_mgr.compound_config_mgr.compound_excel_config_map;
  std::shared_ptr<Config>::~shared_ptr(&v21);
  __for_begin_0._M_cur = std::unordered_map<unsigned int,data::CompoundExcelConfig>::begin(__for_range_0)._M_cur;
  __for_end_0._M_cur = std::unordered_map<unsigned int,data::CompoundExcelConfig>::end(__for_range_0)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::CompoundExcelConfig>,false>(
            &__for_begin_0,
            &__for_end_0) )
  {
    v18 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::CompoundExcelConfig>,false,false>::operator*(&__for_begin_0);
    compound_id_0 = std::get<0ul,unsigned int const,data::CompoundExcelConfig>(v18);
    compound_config = (std::tuple_element<1,const std::pair<unsigned int const,data::CompoundExcelConfig> >::type *)std::get<1ul,unsigned int const,data::CompoundExcelConfig>(v18);
    p_is_default_unlocked = &compound_config->is_default_unlocked;
    if ( *(_BYTE *)(((unsigned __int64)p_is_default_unlocked >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)p_is_default_unlocked & 7) >= *(_BYTE *)(((unsigned __int64)p_is_default_unlocked >> 3)
                                                                  + 0x7FFF8000) )
    {
      __asan_report_load1(p_is_default_unlocked);
    }
    if ( compound_config->is_default_unlocked )
    {
      __for_end._M_cur = std::unordered_set<unsigned int>::end(&this->unlocked_compound_set_)._M_cur;
      __for_begin._M_cur = std::unordered_set<unsigned int>::find(&this->unlocked_compound_set_, compound_id_0)._M_cur;
      if ( std::__detail::operator==<unsigned int,false>(&__for_begin, &__for_end) )
      {
        if ( *(_BYTE *)(((unsigned __int64)compound_id_0 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)compound_id_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)compound_id_0 >> 3)
                                                                          + 0x7FFF8000) )
        {
          __asan_report_load4(compound_id_0);
        }
        proto::CompoundDataNotify::add_unlock_compound_list(proto, *compound_id_0);
      }
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::CompoundExcelConfig>,false,false>::operator++(&__for_begin_0);
  }
  __for_range_1 = &this->compound_output_map_;
  __for_begin._M_cur = (std::__detail::_Node_iterator_base<unsigned int,false>::__node_type *)std::unordered_map<unsigned int,std::deque<CompoundOutputData>>::begin(&this->compound_output_map_)._M_cur;
  __for_end._M_cur = (std::__detail::_Node_iterator_base<unsigned int,false>::__node_type *)std::unordered_map<unsigned int,std::deque<CompoundOutputData>>::end(__for_range_1)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::deque<CompoundOutputData>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::deque<CompoundOutputData> >,false> *)&__for_begin,
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::deque<CompoundOutputData> >,false> *)&__for_end) )
  {
    v14 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::deque<CompoundOutputData>>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::deque<CompoundOutputData> >,false,false> *const)&__for_begin);
    compound_id_1 = std::get<0ul,unsigned int const,std::deque<CompoundOutputData>>(v14);
    output_data_que = (std::tuple_element<1,const std::pair<unsigned int const,std::deque<CompoundOutputData> > >::type *)std::get<1ul,unsigned int const,std::deque<CompoundOutputData>>(v14);
    if ( !std::deque<CompoundOutputData>::empty(output_data_que) )
    {
      que_proto = proto::CompoundDataNotify::add_compound_que_data_list(proto);
      if ( *(_BYTE *)(((unsigned __int64)compound_id_1 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)compound_id_1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)compound_id_1 >> 3)
                                                                        + 0x7FFF8000) )
      {
        __asan_report_load4(compound_id_1);
      }
      PlayerCookComp::fillCompoundQueueDataProto(this, *compound_id_1, output_data_que, que_proto);
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::deque<CompoundOutputData>>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,std::deque<CompoundOutputData> >,false,false> *const)&__for_begin);
  }
  return 0;
};

// Line 402: range 00000000175DE3B0-00000000175DE51F
// local variable allocation has failed, the output may be wrong!
ForeachPolicy __cdecl PlayerCookComp::onPlayerCookReq(proto::PlayerCookReq const&,proto::PlayerCookRsp &)::{lambda(unsigned int,LifeEffectCookWidenJudgeArea const&)#2}::operator()(
        const PlayerCookComp::onPlayerCookReq::<lambda(uint32_t, const LifeEffectCookWidenJudgeArea&)> *const __closure,
        uint32_t proud_skill_id,
        const LifeEffectCookWidenJudgeArea *config)
{
  double v3; // xmm0_8
  float *max_widen_ratio; // rdx
  float *v5; // rdx
  float widen_ratio; // xmm0_4
  char v7; // cl
  uint32_t *opt_proud_skill_id; // rdx
  char v9; // cl
  uint32_t proud_skill_ida; // [rsp+14h] [rbp-Ch]

  proud_skill_ida = proud_skill_id;
  if ( *(_BYTE *)(((unsigned __int64)config >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)config >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(config);
  }
  *(float *)&v3 = config->widen_ratio;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    v3 = __asan_report_load8(__closure);
  max_widen_ratio = __closure->__max_widen_ratio;
  if ( *(_BYTE *)(((unsigned __int64)__closure->__max_widen_ratio >> 3) + 0x7FFF8000) != 0
    && (char)(((__int64)__closure->__max_widen_ratio & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__closure->__max_widen_ratio >> 3)
                                                                           + 0x7FFF8000) )
  {
    __asan_report_load4(__closure->__max_widen_ratio);
  }
  if ( *(float *)&v3 > *max_widen_ratio )
  {
    v5 = __closure->__max_widen_ratio;
    widen_ratio = config->widen_ratio;
    v7 = *(_BYTE *)(((unsigned __int64)__closure->__max_widen_ratio >> 3) + 0x7FFF8000);
    if ( v7 != 0 && (char)(((__int64)__closure->__max_widen_ratio & 7) + 3) >= v7 )
    {
      LOBYTE(proud_skill_id) = v7 != 0;
      __asan_report_store4(__closure->__max_widen_ratio, *(_QWORD *)&proud_skill_id, v5);
    }
    *v5 = widen_ratio;
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__opt_proud_skill_id >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__closure->__opt_proud_skill_id);
    opt_proud_skill_id = __closure->__opt_proud_skill_id;
    v9 = *(_BYTE *)(((unsigned __int64)opt_proud_skill_id >> 3) + 0x7FFF8000);
    if ( v9 != 0 && (char)(((unsigned __int8)opt_proud_skill_id & 7) + 3) >= v9 )
    {
      LOBYTE(proud_skill_id) = v9 != 0;
      __asan_report_store4(__closure->__opt_proud_skill_id, *(_QWORD *)&proud_skill_id, opt_proud_skill_id);
    }
    *opt_proud_skill_id = proud_skill_ida;
  }
  return 0;
};

// Line 451: range 00000000175E1374-00000000175E17ED
std::map<unsigned int,unsigned int> *__cdecl PlayerCookComp::randAutoCookQualityMap(
        std::map<unsigned int,unsigned int> *retstr,
        const PlayerCookComp *const this,
        const data::CookRecipeExcelConfig *recipe_config,
        uint32_t cook_count)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r12
  const unsigned int *M_current; // r14
  std::vector<unsigned int>::const_iterator v8; // rax
  std::vector<unsigned int>::const_reference v9; // rax
  _DWORD *v10; // rdx
  const unsigned int *v11; // rax
  _DWORD *v12; // rdx
  char *v13; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v14; // rax
  uint32_t *v15; // rdx
  char v16; // cl
  const unsigned int *v17; // rax
  _DWORD *v18; // rdx
  unsigned __int64 v19; // rax
  unsigned int __a; // [rsp+24h] [rbp-CCh] BYREF
  uint32_t index; // [rsp+28h] [rbp-C8h]
  uint32_t index_0; // [rsp+2Ch] [rbp-C4h]
  uint32_t total_weight; // [rsp+30h] [rbp-C0h]
  uint32_t auto_cook_limit; // [rsp+34h] [rbp-BCh]
  const std::vector<unsigned int> *weight_vec; // [rsp+38h] [rbp-B8h]
  common::milog::MiLogStream v29; // [rsp+40h] [rbp-B0h] BYREF
  char v30[144]; // [rsp+60h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 16 selected_idx:468 64 4 15 qte_quality:474";
  *(_QWORD *)(v4 + 16) = PlayerCookComp::randAutoCookQualityMap;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202116348;
  std::map<unsigned int,unsigned int>::map(retstr);
  weight_vec = &recipe_config->qte_quality_weight_vec;
  M_current = std::vector<unsigned int>::end(&recipe_config->qte_quality_weight_vec)._M_current;
  v8._M_current = std::vector<unsigned int>::begin(&recipe_config->qte_quality_weight_vec)._M_current;
  total_weight = std::accumulate<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>,int>(
                   v8,
                   (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current,
                   0);
  for ( index = 0; index < std::vector<unsigned int>::size(weight_vec); ++index )
  {
    v9 = std::vector<unsigned int>::operator[](weight_vec, index);
    v10 = v9;
    if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v9);
    }
    if ( total_weight == *v10 )
    {
      __a = index + 1;
      v11 = std::min<unsigned int>(&__a, &CookExcelConfigMgr::max_quality);
      v12 = v11;
      if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v11);
      }
      *(_DWORD *)(v4 + 64) = *v12;
      v13 = (char *)(v4 + 64);
      v14 = std::map<unsigned int,unsigned int>::operator[](
              retstr,
              (const std::map<unsigned int,unsigned int>::key_type *)(v4 + 64));
      v15 = v14;
      v16 = *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000);
      if ( v16 != 0 && (char)(((unsigned __int8)v14 & 7) + 3) >= v16 )
      {
        LOBYTE(v13) = v16 != 0;
        __asan_report_store4(v14, v13, v14);
      }
      *v15 = cook_count;
      goto LABEL_25;
    }
  }
  auto_cook_limit = 1000;
  for ( index_0 = 0; index_0 <= 0x3E7 && index_0 < cook_count; ++index_0 )
  {
    *(_DWORD *)(v4 + 48) = 0;
    if ( common::tools::RandomUtils::weightSelectOne<unsigned int>(
           &recipe_config->qte_quality_weight_vec,
           (uint32_t *)(v4 + 48),
           0) )
    {
      common::milog::MiLogStream::create(
        &v29,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/cook/player_cook_comp.cpp",
        "randAutoCookQualityMap",
        471);
      common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
        &v29,
        (const char (*)[23])"weightSelectOne failed");
      common::milog::MiLogStream::~MiLogStream(&v29);
      break;
    }
    __a = *(_DWORD *)(v4 + 48) + 1;
    v17 = std::min<unsigned int>(&__a, &CookExcelConfigMgr::max_quality);
    v18 = v17;
    if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v17 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v17);
    }
    *(_DWORD *)(v4 + 64) = *v18;
    v19 = (unsigned __int64)std::map<unsigned int,unsigned int>::operator[](
                              retstr,
                              (const std::map<unsigned int,unsigned int>::key_type *)(v4 + 64));
    if ( *(_BYTE *)((v19 >> 3) + 0x7FFF8000) != 0 && (char)((v19 & 7) + 3) >= *(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
      v19 = __asan_report_load4(v19);
    ++*(_DWORD *)v19;
  }
LABEL_25:
  if ( v30 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = -168430091;
  }
  return retstr;
};

// Line 484: range 00000000175E17EE-00000000175E1EF1
void __fastcall PlayerCookComp::bonusReplaceOutput(
        const PlayerCookComp *const this,
        const data::CookBonusExcelConfig *bonus_config,
        uint32_t qte_quality,
        const data::IdCountConfig *id_count_config,
        uint32_t qte_quality_cook_count,
        uint64_t assist_avatar_guid,
        std::vector<unsigned int> *proud_skill_id_vec,
        std::vector<ItemParam> *output_item_param_vec)
{
  unsigned __int64 v8; // r13
  __int64 v9; // rax
  _DWORD *v10; // r12
  common::milog::MiLogStream *v11; // rax
  std::vector<unsigned int>::const_reference v12; // rax
  _DWORD *v13; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  bool v15; // r14
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  std::vector<unsigned int>::const_reference v18; // rax
  _DWORD *v19; // rdx
  std::mersenne_twister_engine<long unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253> *RandGenerator; // rax
  unsigned int bonus_count; // [rsp+34h] [rbp-18Ch]
  uint32_t item_count; // [rsp+38h] [rbp-188h]
  uint32_t item_count_0; // [rsp+3Ch] [rbp-184h]
  std::shared_ptr<Config> v28; // [rsp+40h] [rbp-180h] BYREF
  common::milog::MiLogStream v29; // [rsp+50h] [rbp-170h] BYREF
  char v30[336]; // [rsp+70h] [rbp-150h] BYREF

  v8 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v9 = __asan_stack_malloc_3(288LL);
    if ( v9 )
      v8 = v9;
  }
  *(_QWORD *)v8 = 1102416563LL;
  *(_QWORD *)(v8 + 8) = "4 32 4 17 bonus_item_id:499 48 4 17 bonus_percent:506 64 4 15 qte_quality:480 80 144 16 distribution:509";
  *(_QWORD *)(v8 + 16) = PlayerCookComp::bonusReplaceOutput;
  v10 = (_DWORD *)(v8 >> 3);
  v10[536862720] = -235802127;
  v10[536862721] = -234556924;
  v10[536862722] = 61956;
  v10[536862727] = -202116109;
  v10[536862728] = -202116109;
  *(_DWORD *)(v8 + 64) = qte_quality;
  if ( *(_BYTE *)(((unsigned __int64)&bonus_config->bonus_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&bonus_config->bonus_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&bonus_config->bonus_type);
  }
  if ( bonus_config->bonus_type == COOK_BONUS_REPLACE )
  {
    if ( std::vector<unsigned int>::size(&bonus_config->complex_param_vec) >= *(unsigned int *)(v8 + 64) )
    {
      if ( std::vector<unsigned int>::empty(&bonus_config->param_vec) )
      {
        common::milog::MiLogStream::create(
          &v29,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/cook/player_cook_comp.cpp",
          "bonusReplaceOutput",
          496);
        common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v29, (const char (*)[19])"param_vec is empty");
        common::milog::MiLogStream::~MiLogStream(&v29);
      }
      else
      {
        v12 = std::vector<unsigned int>::operator[](&bonus_config->param_vec, 0LL);
        v13 = v12;
        if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v12);
        }
        *(_DWORD *)(v8 + 32) = *v13;
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v28);
        v14 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v28);
        v15 = data::MaterialExcelConfigMgrBase::findMaterialExcelConfig(
                &v14->design_config.txt_config_mgr.material_config_mgr,
                *(_DWORD *)(v8 + 32)) == 0LL;
        std::shared_ptr<Config>::~shared_ptr(&v28);
        if ( v15 )
        {
          common::milog::MiLogStream::create(
            &v29,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/cook/player_cook_comp.cpp",
            "bonusReplaceOutput",
            502);
          v16 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                  &v29,
                  (const char (*)[15])"bonus_item_id:");
          v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v16,
                  (const unsigned int *)(v8 + 32));
          common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v17, (const char (*)[9])" invalid");
          common::milog::MiLogStream::~MiLogStream(&v29);
        }
        else
        {
          v18 = std::vector<unsigned int>::operator[](
                  &bonus_config->complex_param_vec,
                  (unsigned int)(*(_DWORD *)(v8 + 64) - 1));
          v19 = v18;
          if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v18 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v18);
          }
          *(_DWORD *)(v8 + 48) = *v19;
          PlayerCookComp::modifyBonusPercentProudSkill(
            this,
            (uint32_t *)(v8 + 48),
            bonus_config,
            assist_avatar_guid,
            proud_skill_id_vec);
          std::binomial_distribution<unsigned int>::binomial_distribution(
            (std::binomial_distribution<unsigned int> *const)(v8 + 80),
            qte_quality_cook_count,
            (double)*(int *)(v8 + 48) / 100.0);
          RandGenerator = common::tools::RandomUtils::getRandGenerator();
          bonus_count = std::binomial_distribution<unsigned int>::operator()<std::mersenne_twister_engine<unsigned long,32ul,624ul,397ul,31ul,2567483615ul,11ul,4294967295ul,7ul,2636928640ul,15ul,4022730752ul,18ul,1812433253ul>>(
                          (std::binomial_distribution<unsigned int> *const)(v8 + 80),
                          RandGenerator);
          std::vector<ItemParam>::clear(output_item_param_vec);
          if ( bonus_count )
          {
            if ( *(_BYTE *)(((unsigned __int64)&id_count_config->count >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)id_count_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&id_count_config->count >> 3)
                                                                             + 0x7FFF8000) )
            {
              __asan_report_load4(&id_count_config->count);
            }
            item_count = SAFE_MULTIPLY<unsigned int,unsigned int>(bonus_count, id_count_config->count);
            LODWORD(v28._M_ptr) = *(_DWORD *)(v8 + 32);
            HIDWORD(v28._M_ptr) = item_count;
            v28._M_refcount._M_pi = 0LL;
            std::vector<ItemParam>::push_back(output_item_param_vec, (std::vector<ItemParam>::value_type *)&v28);
          }
          if ( bonus_count < qte_quality_cook_count )
          {
            if ( *(_BYTE *)(((unsigned __int64)&id_count_config->count >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)id_count_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&id_count_config->count >> 3)
                                                                             + 0x7FFF8000) )
            {
              __asan_report_load4(&id_count_config->count);
            }
            item_count_0 = SAFE_MULTIPLY<unsigned int,unsigned int>(
                             qte_quality_cook_count - bonus_count,
                             id_count_config->count);
            if ( *(_BYTE *)(((unsigned __int64)&id_count_config->id >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&id_count_config->id >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&id_count_config->id);
            }
            LODWORD(v28._M_ptr) = id_count_config->id;
            HIDWORD(v28._M_ptr) = item_count_0;
            v28._M_refcount._M_pi = 0LL;
            std::vector<ItemParam>::push_back(output_item_param_vec, (std::vector<ItemParam>::value_type *)&v28);
          }
        }
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v29,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/cook/player_cook_comp.cpp",
        "bonusReplaceOutput",
        491);
      v11 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
              &v29,
              (const char (*)[28])"complex_param_vec.size() < ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v8 + 64));
      common::milog::MiLogStream::~MiLogStream(&v29);
    }
  }
  if ( v30 == (char *)v8 )
  {
    *(_QWORD *)((v8 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v8 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v8 >> 3) + 0x7FFF801C) = 0LL;
  }
  else
  {
    *(_QWORD *)v8 = 1172321806LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v8 >> 3) + 0x7FFF8020) = -168430091;
  }
};

// Line 526: range 00000000175E1EF2-00000000175E2047
void __cdecl PlayerCookComp::takeBonusExtraOutput(
        PlayerCookComp *const this,
        const data::CookRecipeExcelConfig *recipe_config,
        const data::CookBonusExcelConfig *bonus_config)
{
  data::CookBonusType *p_bonus_type; // rdx
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v4; // rax
  uint32_t *v5; // rdx
  common::milog::MiLogStream v7; // [rsp+20h] [rbp-30h] BYREF

  p_bonus_type = &bonus_config->bonus_type;
  if ( *(_BYTE *)(((unsigned __int64)p_bonus_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_bonus_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(p_bonus_type);
  }
  if ( bonus_config->bonus_type == COOK_BONUS_PROFICIENCY )
  {
    if ( std::vector<unsigned int>::size(&bonus_config->param_vec) )
    {
      v4 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                 &bonus_config->param_vec,
                                                                                                 0LL);
      v5 = v4;
      if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v4);
      }
      PlayerCookComp::addRecipeProficiency(this, recipe_config, *v5);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v7,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/cook/player_cook_comp.cpp",
        "takeBonusExtraOutput",
        534);
      common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
        &v7,
        (const char (*)[36])"bonus_config.param_vec.size() == 0 ");
      common::milog::MiLogStream::~MiLogStream(&v7);
    }
  }
};

// Line 549: range 00000000175E2048-00000000175E21D5
__int64 __fastcall PlayerCookComp::getRecipeProficiency(PlayerCookComp *const this, uint32_t recipe_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,CookRecipeData>,false,false>::pointer v6; // rdx
  CookRecipeData *p_second; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,CookRecipeData>,false> __y; // [rsp+18h] [rbp-88h] BYREF
  char v9[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 13 recipe_id:548 64 8 8 iter:550";
  *(_QWORD *)(v2 + 16) = PlayerCookComp::getRecipeProficiency;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = recipe_id;
  *(std::unordered_map<unsigned int,CookRecipeData>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,CookRecipeData>::find(
                                                                              &this->recipe_data_map_,
                                                                              (const std::unordered_map<unsigned int,CookRecipeData>::key_type *)(v2 + 48));
  __y._M_cur = std::unordered_map<unsigned int,CookRecipeData>::end(&this->recipe_data_map_)._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned int const,CookRecipeData>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,CookRecipeData>,false> *)(v2 + 64),
         &__y) )
  {
    result = 0LL;
  }
  else
  {
    v6 = std::__detail::_Node_iterator<std::pair<unsigned int const,CookRecipeData>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,CookRecipeData>,false,false> *const)(v2 + 64));
    p_second = &v6->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
    }
    result = v6->second.proficiency;
  }
  if ( v9 == (char *)v2 )
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

// Line 555: range 00000000175E21D6-00000000175E23BA
void __cdecl PlayerCookComp::addRecipeProficiency(
        PlayerCookComp *const this,
        const data::CookRecipeExcelConfig *recipe_config,
        uint32_t delta)
{
  std::unordered_map<unsigned int,CookRecipeData>::mapped_type *v3; // rax
  unsigned int *p_b; // rsi
  uint32_t *v5; // rax
  uint32_t *v6; // rdx
  uint32_t v7; // ecx
  char v8; // dl
  __int64 v9; // rdx
  PlayerWatcherComp *WatcherComp; // rcx
  unsigned int __b; // [rsp+20h] [rbp-10h] BYREF
  uint32_t old_proficiency; // [rsp+24h] [rbp-Ch]
  uint32_t *proficiency; // [rsp+28h] [rbp-8h]

  v3 = std::unordered_map<unsigned int,CookRecipeData>::operator[](&this->recipe_data_map_, &recipe_config->id);
  proficiency = &v3->proficiency;
  if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v3);
  }
  old_proficiency = *proficiency;
  __b = *proficiency + delta;
  p_b = &__b;
  v5 = (uint32_t *)std::min<unsigned int>(&recipe_config->max_proficiency, &__b);
  v6 = v5;
  if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v5);
  }
  v7 = *v6;
  v8 = *(_BYTE *)(((unsigned __int64)proficiency >> 3) + 0x7FFF8000);
  LOBYTE(p_b) = v8 != 0;
  v9 = (v8 != 0) & (unsigned __int8)((char)(((unsigned __int8)proficiency & 7) + 3) >= v8);
  if ( (_BYTE)v9 )
    __asan_report_store4(proficiency, p_b, v9);
  *proficiency = v7;
  if ( *(_BYTE *)(((unsigned __int64)&recipe_config->max_proficiency >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&recipe_config->max_proficiency >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&recipe_config->max_proficiency);
  }
  if ( old_proficiency < recipe_config->max_proficiency && *proficiency >= recipe_config->max_proficiency )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    WatcherComp = Player::getWatcherComp(this->player_);
    if ( *(_BYTE *)(((unsigned __int64)&recipe_config->id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&recipe_config->id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&recipe_config->id);
    }
    PlayerWatcherComp::triggerSkilledAtRecipe(WatcherComp, recipe_config->id);
  }
};

// Line 567: range 00000000175E23BC-00000000175E264C
uint32_t __cdecl PlayerCookComp::countMaxProficiencyRecipes(const PlayerCookComp *const this)
{
  CookExcelConfigMgr *p_cook_config_mgr; // rcx
  uint32_t proficiency; // ecx
  uint32_t num; // [rsp+14h] [rbp-7Ch]
  std::unordered_map<unsigned int,CookRecipeData>::const_iterator __for_begin; // [rsp+18h] [rbp-78h] BYREF
  std::unordered_map<unsigned int,CookRecipeData>::const_iterator __for_end; // [rsp+20h] [rbp-70h] BYREF
  const std::unordered_map<unsigned int,CookRecipeData> *__for_range; // [rsp+28h] [rbp-68h]
  const std::pair<unsigned int const,CookRecipeData> *v8; // [rsp+30h] [rbp-60h]
  std::tuple_element<0,const std::pair<unsigned int const,CookRecipeData> >::type *recipe_id; // [rsp+38h] [rbp-58h]
  std::tuple_element<1,const std::pair<unsigned int const,CookRecipeData> >::type *data; // [rsp+40h] [rbp-50h]
  const data::CookRecipeExcelConfig *recipe_config_ptr; // [rsp+48h] [rbp-48h]
  std::shared_ptr<Config> v12; // [rsp+50h] [rbp-40h] BYREF
  common::milog::MiLogStream v13; // [rsp+60h] [rbp-30h] BYREF

  num = 0;
  __for_range = &this->recipe_data_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,CookRecipeData>::begin(&this->recipe_data_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,CookRecipeData>::end(&this->recipe_data_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,CookRecipeData>,false>(&__for_begin, &__for_end) )
  {
    v8 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,CookRecipeData>,false,false>::operator*(&__for_begin);
    recipe_id = std::get<0ul,unsigned int const,CookRecipeData>(v8);
    data = (std::tuple_element<1,const std::pair<unsigned int const,CookRecipeData> >::type *)std::get<1ul,unsigned int const,CookRecipeData>(v8);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v12);
    p_cook_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v12)->design_config.txt_config_mgr.cook_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)recipe_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)recipe_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)recipe_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(recipe_id);
    }
    recipe_config_ptr = data::CookExcelConfigMgrBase::findCookRecipeExcelConfig(p_cook_config_mgr, *recipe_id);
    std::shared_ptr<Config>::~shared_ptr(&v12);
    if ( recipe_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)data >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)data & 7) + 3) >= *(_BYTE *)(((unsigned __int64)data >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(data);
      }
      proficiency = data->proficiency;
      if ( *(_BYTE *)(((unsigned __int64)&recipe_config_ptr->max_proficiency >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&recipe_config_ptr->max_proficiency >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&recipe_config_ptr->max_proficiency);
      }
      if ( proficiency >= recipe_config_ptr->max_proficiency )
        ++num;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/cook/player_cook_comp.cpp",
        "countMaxProficiencyRecipes",
        574);
      if ( *(_BYTE *)(((unsigned __int64)recipe_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)recipe_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)recipe_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(recipe_id);
      }
      common::milog::MiLogStream::operator()(&v13, "recipe_id=%u not found in config.", *recipe_id);
      common::milog::MiLogStream::~MiLogStream(&v13);
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,CookRecipeData>,false,false>::operator++(&__for_begin);
  }
  return num;
};

// Line 588: range 00000000175FC354-00000000175FCB83
// local variable allocation has failed, the output may be wrong!
void __fastcall PlayerCookComp::foreachProudCookConfig<LifeEffectCookAddBonusProb,PlayerCookComp::modifyBonusPercentProudSkill(unsigned int &,data::CookBonusExcelConfig const&,unsigned long,std::vector<unsigned int> &)::{lambda(unsigned int,LifeEffectCookAddBonusProb const&)#1}>(
        Player *player,
        uint64_t assist_avatar_guid,
        const data::CookRecipeExcelConfig *recipe_config,
        PlayerCookComp::modifyBonusPercentProudSkill::<lambda(uint32_t, const LifeEffectCookAddBonusProb&)> func)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rax
  SceneTeam *v8; // r14
  PlayerAvatarComp *AvatarComp; // rax
  std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  TalentComp *TalentComp; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v12; // rax
  _DWORD *v13; // rdx
  std::set<long unsigned int> *v14; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::variant<LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook> >,false,false>::pointer v15; // rax
  float *max_add_bonus_percent; // [rsp+0h] [rbp-220h]
  uint32_t *opt_proud_skill_id; // [rsp+8h] [rbp-218h]
  std::map<unsigned int,std::set<long unsigned int>>::iterator __for_begin; // [rsp+30h] [rbp-1F0h] BYREF
  std::map<unsigned int,std::set<long unsigned int>>::iterator __for_end_0; // [rsp+38h] [rbp-1E8h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+40h] [rbp-1E0h] BYREF
  std::vector<unsigned int> *__for_range; // [rsp+48h] [rbp-1D8h]
  const std::unordered_map<unsigned int,std::variant<LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook>> *proud_cook_config_map; // [rsp+50h] [rbp-1D0h]
  std::map<unsigned int,std::set<long unsigned int>> *__for_range_0; // [rsp+58h] [rbp-1C8h]
  const std::pair<unsigned int const,std::set<long unsigned int> > *v28; // [rsp+60h] [rbp-1C0h]
  std::tuple_element<0,const std::pair<unsigned int const,std::set<long unsigned int> > >::type *proud_skill_id; // [rsp+68h] [rbp-1B8h]
  std::tuple_element<1,const std::pair<unsigned int const,std::set<long unsigned int> > >::type *avatar_guid_set; // [rsp+70h] [rbp-1B0h]
  const LifeEffectCookAddBonusProb *config_ptr; // [rsp+78h] [rbp-1A8h]
  std::shared_ptr<Config> v32; // [rsp+80h] [rbp-1A0h] BYREF
  std::vector<unsigned int> v33; // [rsp+90h] [rbp-190h] BYREF
  common::milog::MiLogStream v34; // [rsp+B0h] [rbp-170h] BYREF
  char v35[336]; // [rsp+D0h] [rbp-150h] BYREF

  max_add_bonus_percent = func.__max_add_bonus_percent;
  opt_proud_skill_id = func.__opt_proud_skill_id;
  v4 = (unsigned __int64)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(288LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "7 32 4 18 proud_skill_id:613 48 8 8 iter:622 80 8 22 assist_avatar_guid:588 112 16 18 scene_team"
                        "_ptr:594 144 16 21 assist_avatar_ptr:610 176 16 8 func:588 208 48 19 proud_skill_map:591";
  *(_QWORD *)(v4 + 16) = PlayerCookComp::foreachProudCookConfig<LifeEffectCookAddBonusProb,PlayerCookComp::modifyBonusPercentProudSkill(unsigned int &,data::CookBonusExcelConfig const&,unsigned long,std::vector<unsigned int> &)::{lambda(unsigned int,LifeEffectCookAddBonusProb const&)#1}>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = 61956;
  v6[536862721] = -234881024;
  v6[536862722] = 62194;
  v6[536862722] = -234881024;
  v6[536862723] = 62194;
  v6[536862724] = 62194;
  v6[536862725] = 62194;
  v6[536862726] = 62194;
  v6[536862728] = -202116109;
  *(_QWORD *)(v4 + 80) = assist_avatar_guid;
  *(_QWORD *)(v4 + 176) = max_add_bonus_percent;
  *(_QWORD *)(v4 + 184) = opt_proud_skill_id;
  std::map<unsigned int,std::set<unsigned long>>::map((std::map<unsigned int,std::set<long unsigned int>> *const)(v4 + 208));
  Player::getAvatarComp(player);
  PlayerAvatarComp::findSceneTeam((PlayerAvatarComp *const)(v4 + 112));
  if ( std::operator==<SceneTeam>(0LL, (const std::shared_ptr<SceneTeam> *)(v4 + 112)) )
  {
    common::milog::MiLogStream::create(
      &v34,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/cook/player_cook_comp.cpp",
      "foreachProudCookConfig",
      597);
    v7 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
           &v34,
           (const char (*)[28])"findSceneTeam fail, player:");
    operator<<(v7, player);
    common::milog::MiLogStream::~MiLogStream(&v34);
  }
  else
  {
    v8 = std::__shared_ptr_access<SceneTeam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneTeam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 112));
    std::function<ForeachPolicy ()(Avatar &)>::function<void PlayerCookComp::foreachProudCookConfig<LifeEffectCookAddBonusProb,PlayerCookComp::modifyBonusPercentProudSkill(unsigned int &,data::CookBonusExcelConfig const&,unsigned long,std::vector<unsigned int> &)::{lambda(unsigned int,LifeEffectCookAddBonusProb const&)#1}>(Player &,unsigned long,data::CookRecipeExcelConfig const&,PlayerCookComp::modifyBonusPercentProudSkill(unsigned int &,data::CookBonusExcelConfig const&,unsigned long,std::vector<unsigned int> &)::{lambda(unsigned int,LifeEffectCookAddBonusProb const&)#1})::{lambda(Avatar const&)#1},void,void>(
      (std::function<ForeachPolicy(Avatar&)> *const)&v34,
      (PlayerCookComp::foreachProudCookConfig<LifeEffectCookAddBonusProb,PlayerCookComp::modifyBonusPercentProudSkill(uint32_t&,const data::CookBonusExcelConfig&,uint64_t,std::vector<unsigned int>&) const::<lambda(uint32_t,const LifeEffectCookAddBonusProb&)> >::<lambda(const Avatar&)>)(v4 + 208));
    SceneTeam::foreachAvatar(v8, (std::function<ForeachPolicy(Avatar&)> *)&v34);
    std::function<ForeachPolicy ()(Avatar &)>::~function((std::function<ForeachPolicy(Avatar&)> *const)&v34);
    AvatarComp = Player::getAvatarComp(player);
    PlayerAvatarComp::findFormalAvatar(
      (const PlayerAvatarComp *const)(v4 + 144),
      (uint64_t)AvatarComp,
      *(_QWORD *)(v4 + 80));
    if ( std::operator!=<FormalAvatar>(0LL, (const std::shared_ptr<FormalAvatar> *)(v4 + 144)) )
    {
      v10 = std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 144));
      TalentComp = Avatar::getTalentComp(v10);
      TalentComp::getProudSkills(&v33, TalentComp);
      __for_range = &v33;
      *(std::vector<unsigned int>::iterator *)(v4 + 48) = std::vector<unsigned int>::begin(&v33);
      __for_end._M_current = std::vector<unsigned int>::end(__for_range)._M_current;
      while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v4 + 48),
                &__for_end) )
      {
        v12 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v4 + 48));
        v13 = v12;
        if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v12);
        }
        *(_DWORD *)(v4 + 32) = *v13;
        v14 = std::map<unsigned int,std::set<unsigned long>>::operator[](
                (std::map<unsigned int,std::set<long unsigned int>> *const)(v4 + 208),
                (const std::map<unsigned int,std::set<long unsigned int>>::key_type *)(v4 + 32));
        std::set<unsigned long>::insert(v14, (const std::set<long unsigned int>::value_type *)(v4 + 80));
        __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v4 + 48));
      }
      std::vector<unsigned int>::~vector(&v33);
    }
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v32);
    proud_cook_config_map = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v32)->design_config.txt_config_mgr.avatar_talent_config_mgr.proud_cook_config_map;
    std::shared_ptr<Config>::~shared_ptr(&v32);
    __for_range_0 = (std::map<unsigned int,std::set<long unsigned int>> *)(v4 + 208);
    __for_begin._M_node = std::map<unsigned int,std::set<unsigned long>>::begin((std::map<unsigned int,std::set<long unsigned int>> *const)(v4 + 208))._M_node;
    __for_end_0._M_node = std::map<unsigned int,std::set<unsigned long>>::end(__for_range_0)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end_0) )
    {
      v28 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::set<unsigned long>>>::operator*(&__for_begin);
      proud_skill_id = std::get<0ul,unsigned int const,std::set<unsigned long>>(v28);
      avatar_guid_set = (std::tuple_element<1,const std::pair<unsigned int const,std::set<long unsigned int> > >::type *)std::get<1ul,unsigned int const,std::set<unsigned long>>(v28);
      *(std::unordered_map<unsigned int,std::variant<LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook>>::const_iterator *)(v4 + 48) = std::unordered_map<unsigned int,std::variant<LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook>>::find(proud_cook_config_map, proud_skill_id);
      __for_end._M_current = (unsigned int *)std::unordered_map<unsigned int,std::variant<LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook>>::end(proud_cook_config_map)._M_cur;
      if ( !std::__detail::operator==<std::pair<unsigned int const,std::variant<LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook>>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::variant<LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook> >,false> *)(v4 + 48),
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::variant<LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook> >,false> *)&__for_end) )
      {
        v15 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::variant<LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::variant<LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook> >,false,false> *const)(v4 + 48));
        config_ptr = std::get_if<LifeEffectCookAddBonusProb,LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook>(&v15->second);
        if ( config_ptr )
        {
          if ( *(_BYTE *)(((unsigned __int64)&config_ptr->effect_target_type >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&config_ptr->effect_target_type >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&config_ptr->effect_target_type);
          }
          if ( (config_ptr->effect_target_type == EFFECT_TARGET_TEAM
             || common::tools::MiscUtils::isContains<std::set<unsigned long> const,unsigned long>(
                  avatar_guid_set,
                  (const unsigned __int64 *)(v4 + 80)))
            && (std::set<data::CookFoodType>::empty(&config_ptr->cook_food_type_set)
             || common::tools::MiscUtils::isContains<std::set<data::CookFoodType> const,data::CookFoodType>(
                  &config_ptr->cook_food_type_set,
                  &recipe_config->food_type))
            && (std::set<data::CookMethodType>::empty(&config_ptr->cook_method_type_set)
             || common::tools::MiscUtils::isContains<std::set<data::CookMethodType> const,data::CookMethodType>(
                  &config_ptr->cook_method_type_set,
                  &recipe_config->cook_method)) )
          {
            if ( *(_BYTE *)(((unsigned __int64)proud_skill_id >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)proud_skill_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)proud_skill_id >> 3)
                                                                               + 0x7FFF8000) )
            {
              __asan_report_load4(proud_skill_id);
            }
            if ( PlayerCookComp::modifyBonusPercentProudSkill(unsigned int &,data::CookBonusExcelConfig const&,unsigned long,std::vector<unsigned int> &)const::{lambda(unsigned int,LifeEffectCookAddBonusProb const&)#1}::operator()(
                   (const PlayerCookComp::modifyBonusPercentProudSkill::<lambda(uint32_t, const LifeEffectCookAddBonusProb&)> *const)(v4 + 176),
                   *proud_skill_id,
                   config_ptr) )
            {
              break;
            }
          }
        }
      }
      std::_Rb_tree_iterator<std::pair<unsigned int const,std::set<unsigned long>>>::operator++(&__for_begin);
    }
    std::shared_ptr<FormalAvatar>::~shared_ptr((std::shared_ptr<FormalAvatar> *const)(v4 + 144));
  }
  std::shared_ptr<SceneTeam>::~shared_ptr((std::shared_ptr<SceneTeam> *const)(v4 + 112));
  std::map<unsigned int,std::set<unsigned long>>::~map((std::map<unsigned int,std::set<long unsigned int>> *const)(v4 + 208));
  if ( v35 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8020) = -168430091;
  }
};

// Line 588: range 00000000175F99AB-00000000175FA1BA
void __fastcall PlayerCookComp::foreachProudCookConfig<LifeEffectCookCanNotCook,PlayerCookComp::onPlayerCookReq(proto::PlayerCookReq const&,proto::PlayerCookRsp &)::{lambda(unsigned int,LifeEffectCookCanNotCook const&)#1}>(
        Player *player,
        uint64_t assist_avatar_guid,
        const data::CookRecipeExcelConfig *recipe_config,
        PlayerCookComp::onPlayerCookReq::<lambda(uint32_t, const LifeEffectCookCanNotCook&)> func)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rax
  SceneTeam *v8; // r14
  PlayerAvatarComp *AvatarComp; // rax
  std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  TalentComp *TalentComp; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v12; // rax
  _DWORD *v13; // rdx
  std::set<long unsigned int> *v14; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::variant<LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook> >,false,false>::pointer v15; // rax
  std::map<unsigned int,std::set<long unsigned int>>::iterator __for_begin; // [rsp+20h] [rbp-1F0h] BYREF
  std::map<unsigned int,std::set<long unsigned int>>::iterator __for_end_0; // [rsp+28h] [rbp-1E8h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+30h] [rbp-1E0h] BYREF
  std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-1D8h]
  const std::unordered_map<unsigned int,std::variant<LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook>> *proud_cook_config_map; // [rsp+40h] [rbp-1D0h]
  std::map<unsigned int,std::set<long unsigned int>> *__for_range_0; // [rsp+48h] [rbp-1C8h]
  const std::pair<unsigned int const,std::set<long unsigned int> > *v27; // [rsp+50h] [rbp-1C0h]
  std::tuple_element<0,const std::pair<unsigned int const,std::set<long unsigned int> > >::type *proud_skill_id; // [rsp+58h] [rbp-1B8h]
  std::tuple_element<1,const std::pair<unsigned int const,std::set<long unsigned int> > >::type *avatar_guid_set; // [rsp+60h] [rbp-1B0h]
  const LifeEffectCookCanNotCook *config_ptr; // [rsp+68h] [rbp-1A8h]
  std::shared_ptr<Config> v31; // [rsp+70h] [rbp-1A0h] BYREF
  std::vector<unsigned int> v32; // [rsp+80h] [rbp-190h] BYREF
  common::milog::MiLogStream v33; // [rsp+A0h] [rbp-170h] BYREF
  char v34[336]; // [rsp+C0h] [rbp-150h] BYREF

  v4 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(288LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "7 32 4 18 proud_skill_id:613 48 8 8 iter:622 80 8 18 assist_avatar_guid 112 8 4 func 144 16 18 s"
                        "cene_team_ptr:594 176 16 21 assist_avatar_ptr:610 208 48 19 proud_skill_map:591";
  *(_QWORD *)(v4 + 16) = PlayerCookComp::foreachProudCookConfig<LifeEffectCookCanNotCook,PlayerCookComp::onPlayerCookReq(proto::PlayerCookReq const&,proto::PlayerCookRsp &)::{lambda(unsigned int,LifeEffectCookCanNotCook const&)#1}>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = 61956;
  v6[536862721] = -234881024;
  v6[536862722] = 62194;
  v6[536862722] = -234881024;
  v6[536862723] = 62194;
  v6[536862723] = -234881024;
  v6[536862724] = 62194;
  v6[536862725] = 62194;
  v6[536862726] = 62194;
  v6[536862728] = -202116109;
  *(_QWORD *)(v4 + 80) = assist_avatar_guid;
  *(PlayerCookComp::onPlayerCookReq::<lambda(uint32_t, const LifeEffectCookCanNotCook&)> *)(v4 + 112) = func;
  std::map<unsigned int,std::set<unsigned long>>::map((std::map<unsigned int,std::set<long unsigned int>> *const)(v4 + 208));
  Player::getAvatarComp(player);
  PlayerAvatarComp::findSceneTeam((PlayerAvatarComp *const)(v4 + 144));
  if ( std::operator==<SceneTeam>(0LL, (const std::shared_ptr<SceneTeam> *)(v4 + 144)) )
  {
    common::milog::MiLogStream::create(
      &v33,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/cook/player_cook_comp.cpp",
      "foreachProudCookConfig",
      597);
    v7 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
           &v33,
           (const char (*)[28])"findSceneTeam fail, player:");
    operator<<(v7, player);
    common::milog::MiLogStream::~MiLogStream(&v33);
  }
  else
  {
    v8 = std::__shared_ptr_access<SceneTeam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneTeam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 144));
    std::function<ForeachPolicy ()(Avatar &)>::function<void PlayerCookComp::foreachProudCookConfig<LifeEffectCookCanNotCook,PlayerCookComp::onPlayerCookReq(proto::PlayerCookReq const&,proto::PlayerCookRsp &)::{lambda(unsigned int,LifeEffectCookCanNotCook const&)#1}>(Player &,unsigned long,data::CookRecipeExcelConfig const&,PlayerCookComp::onPlayerCookReq(proto::PlayerCookReq const&,proto::PlayerCookRsp &)::{lambda(unsigned int,LifeEffectCookCanNotCook const&)#1})::{lambda(Avatar const&)#1},void,void>(
      (std::function<ForeachPolicy(Avatar&)> *const)&v33,
      (PlayerCookComp::foreachProudCookConfig<LifeEffectCookCanNotCook,PlayerCookComp::onPlayerCookReq(const proto::PlayerCookReq&,proto::PlayerCookRsp&)::<lambda(uint32_t,const LifeEffectCookCanNotCook&)> >::<lambda(const Avatar&)>)(v4 + 208));
    SceneTeam::foreachAvatar(v8, (std::function<ForeachPolicy(Avatar&)> *)&v33);
    std::function<ForeachPolicy ()(Avatar &)>::~function((std::function<ForeachPolicy(Avatar&)> *const)&v33);
    AvatarComp = Player::getAvatarComp(player);
    PlayerAvatarComp::findFormalAvatar(
      (const PlayerAvatarComp *const)(v4 + 176),
      (uint64_t)AvatarComp,
      *(_QWORD *)(v4 + 80));
    if ( std::operator!=<FormalAvatar>(0LL, (const std::shared_ptr<FormalAvatar> *)(v4 + 176)) )
    {
      v10 = std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 176));
      TalentComp = Avatar::getTalentComp(v10);
      TalentComp::getProudSkills(&v32, TalentComp);
      __for_range = &v32;
      *(std::vector<unsigned int>::iterator *)(v4 + 48) = std::vector<unsigned int>::begin(&v32);
      __for_end._M_current = std::vector<unsigned int>::end(__for_range)._M_current;
      while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v4 + 48),
                &__for_end) )
      {
        v12 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v4 + 48));
        v13 = v12;
        if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v12);
        }
        *(_DWORD *)(v4 + 32) = *v13;
        v14 = std::map<unsigned int,std::set<unsigned long>>::operator[](
                (std::map<unsigned int,std::set<long unsigned int>> *const)(v4 + 208),
                (const std::map<unsigned int,std::set<long unsigned int>>::key_type *)(v4 + 32));
        std::set<unsigned long>::insert(v14, (const std::set<long unsigned int>::value_type *)(v4 + 80));
        __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v4 + 48));
      }
      std::vector<unsigned int>::~vector(&v32);
    }
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v31);
    proud_cook_config_map = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v31)->design_config.txt_config_mgr.avatar_talent_config_mgr.proud_cook_config_map;
    std::shared_ptr<Config>::~shared_ptr(&v31);
    __for_range_0 = (std::map<unsigned int,std::set<long unsigned int>> *)(v4 + 208);
    __for_begin._M_node = std::map<unsigned int,std::set<unsigned long>>::begin((std::map<unsigned int,std::set<long unsigned int>> *const)(v4 + 208))._M_node;
    __for_end_0._M_node = std::map<unsigned int,std::set<unsigned long>>::end(__for_range_0)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end_0) )
    {
      v27 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::set<unsigned long>>>::operator*(&__for_begin);
      proud_skill_id = std::get<0ul,unsigned int const,std::set<unsigned long>>(v27);
      avatar_guid_set = (std::tuple_element<1,const std::pair<unsigned int const,std::set<long unsigned int> > >::type *)std::get<1ul,unsigned int const,std::set<unsigned long>>(v27);
      *(std::unordered_map<unsigned int,std::variant<LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook>>::const_iterator *)(v4 + 48) = std::unordered_map<unsigned int,std::variant<LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook>>::find(proud_cook_config_map, proud_skill_id);
      __for_end._M_current = (unsigned int *)std::unordered_map<unsigned int,std::variant<LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook>>::end(proud_cook_config_map)._M_cur;
      if ( !std::__detail::operator==<std::pair<unsigned int const,std::variant<LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook>>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::variant<LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook> >,false> *)(v4 + 48),
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::variant<LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook> >,false> *)&__for_end) )
      {
        v15 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::variant<LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::variant<LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook> >,false,false> *const)(v4 + 48));
        config_ptr = std::get_if<LifeEffectCookCanNotCook,LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook>(&v15->second);
        if ( config_ptr )
        {
          if ( *(_BYTE *)(((unsigned __int64)&config_ptr->effect_target_type >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&config_ptr->effect_target_type >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&config_ptr->effect_target_type);
          }
          if ( (config_ptr->effect_target_type == EFFECT_TARGET_TEAM
             || common::tools::MiscUtils::isContains<std::set<unsigned long> const,unsigned long>(
                  avatar_guid_set,
                  (const unsigned __int64 *)(v4 + 80)))
            && (std::set<data::CookFoodType>::empty(&config_ptr->cook_food_type_set)
             || common::tools::MiscUtils::isContains<std::set<data::CookFoodType> const,data::CookFoodType>(
                  &config_ptr->cook_food_type_set,
                  &recipe_config->food_type))
            && (std::set<data::CookMethodType>::empty(&config_ptr->cook_method_type_set)
             || common::tools::MiscUtils::isContains<std::set<data::CookMethodType> const,data::CookMethodType>(
                  &config_ptr->cook_method_type_set,
                  &recipe_config->cook_method)) )
          {
            if ( *(_BYTE *)(((unsigned __int64)proud_skill_id >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)proud_skill_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)proud_skill_id >> 3)
                                                                               + 0x7FFF8000) )
            {
              __asan_report_load4(proud_skill_id);
            }
            if ( PlayerCookComp::onPlayerCookReq(proto::PlayerCookReq const&,proto::PlayerCookRsp &)::{lambda(unsigned int,LifeEffectCookCanNotCook const&)#1}::operator()(
                   (const PlayerCookComp::onPlayerCookReq::<lambda(uint32_t, const LifeEffectCookCanNotCook&)> *const)(v4 + 112),
                   *proud_skill_id,
                   config_ptr) )
            {
              break;
            }
          }
        }
      }
      std::_Rb_tree_iterator<std::pair<unsigned int const,std::set<unsigned long>>>::operator++(&__for_begin);
    }
    std::shared_ptr<FormalAvatar>::~shared_ptr((std::shared_ptr<FormalAvatar> *const)(v4 + 176));
  }
  std::shared_ptr<SceneTeam>::~shared_ptr((std::shared_ptr<SceneTeam> *const)(v4 + 144));
  std::map<unsigned int,std::set<unsigned long>>::~map((std::map<unsigned int,std::set<long unsigned int>> *const)(v4 + 208));
  if ( v34 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8020) = -168430091;
  }
};

// Line 588: range 00000000175FB8DC-00000000175FC10B
// local variable allocation has failed, the output may be wrong!
void __fastcall PlayerCookComp::foreachProudCookConfig<LifeEffectCookExtraProficiency,PlayerCookComp::getProudSkillExtraProficiency(data::CookRecipeExcelConfig const&,unsigned long,std::vector<unsigned int> &)::{lambda(unsigned int,LifeEffectCookExtraProficiency const&)#1}>(
        Player *player,
        uint64_t assist_avatar_guid,
        const data::CookRecipeExcelConfig *recipe_config,
        PlayerCookComp::getProudSkillExtraProficiency::<lambda(uint32_t, const LifeEffectCookExtraProficiency&)> func)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rax
  SceneTeam *v8; // r14
  PlayerAvatarComp *AvatarComp; // rax
  std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  TalentComp *TalentComp; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v12; // rax
  _DWORD *v13; // rdx
  std::set<long unsigned int> *v14; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::variant<LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook> >,false,false>::pointer v15; // rax
  uint32_t *max_extra_proficiency; // [rsp+0h] [rbp-220h]
  uint32_t *opt_proud_skill_id; // [rsp+8h] [rbp-218h]
  std::map<unsigned int,std::set<long unsigned int>>::iterator __for_begin; // [rsp+30h] [rbp-1F0h] BYREF
  std::map<unsigned int,std::set<long unsigned int>>::iterator __for_end_0; // [rsp+38h] [rbp-1E8h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+40h] [rbp-1E0h] BYREF
  std::vector<unsigned int> *__for_range; // [rsp+48h] [rbp-1D8h]
  const std::unordered_map<unsigned int,std::variant<LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook>> *proud_cook_config_map; // [rsp+50h] [rbp-1D0h]
  std::map<unsigned int,std::set<long unsigned int>> *__for_range_0; // [rsp+58h] [rbp-1C8h]
  const std::pair<unsigned int const,std::set<long unsigned int> > *v28; // [rsp+60h] [rbp-1C0h]
  std::tuple_element<0,const std::pair<unsigned int const,std::set<long unsigned int> > >::type *proud_skill_id; // [rsp+68h] [rbp-1B8h]
  std::tuple_element<1,const std::pair<unsigned int const,std::set<long unsigned int> > >::type *avatar_guid_set; // [rsp+70h] [rbp-1B0h]
  const LifeEffectCookExtraProficiency *config_ptr; // [rsp+78h] [rbp-1A8h]
  std::shared_ptr<Config> v32; // [rsp+80h] [rbp-1A0h] BYREF
  std::vector<unsigned int> v33; // [rsp+90h] [rbp-190h] BYREF
  common::milog::MiLogStream v34; // [rsp+B0h] [rbp-170h] BYREF
  char v35[336]; // [rsp+D0h] [rbp-150h] BYREF

  max_extra_proficiency = func.__max_extra_proficiency;
  opt_proud_skill_id = func.__opt_proud_skill_id;
  v4 = (unsigned __int64)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(288LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "7 32 4 18 proud_skill_id:613 48 8 8 iter:622 80 8 22 assist_avatar_guid:588 112 16 18 scene_team"
                        "_ptr:594 144 16 21 assist_avatar_ptr:610 176 16 8 func:588 208 48 19 proud_skill_map:591";
  *(_QWORD *)(v4 + 16) = PlayerCookComp::foreachProudCookConfig<LifeEffectCookExtraProficiency,PlayerCookComp::getProudSkillExtraProficiency(data::CookRecipeExcelConfig const&,unsigned long,std::vector<unsigned int> &)::{lambda(unsigned int,LifeEffectCookExtraProficiency const&)#1}>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = 61956;
  v6[536862721] = -234881024;
  v6[536862722] = 62194;
  v6[536862722] = -234881024;
  v6[536862723] = 62194;
  v6[536862724] = 62194;
  v6[536862725] = 62194;
  v6[536862726] = 62194;
  v6[536862728] = -202116109;
  *(_QWORD *)(v4 + 80) = assist_avatar_guid;
  *(_QWORD *)(v4 + 176) = max_extra_proficiency;
  *(_QWORD *)(v4 + 184) = opt_proud_skill_id;
  std::map<unsigned int,std::set<unsigned long>>::map((std::map<unsigned int,std::set<long unsigned int>> *const)(v4 + 208));
  Player::getAvatarComp(player);
  PlayerAvatarComp::findSceneTeam((PlayerAvatarComp *const)(v4 + 112));
  if ( std::operator==<SceneTeam>(0LL, (const std::shared_ptr<SceneTeam> *)(v4 + 112)) )
  {
    common::milog::MiLogStream::create(
      &v34,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/cook/player_cook_comp.cpp",
      "foreachProudCookConfig",
      597);
    v7 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
           &v34,
           (const char (*)[28])"findSceneTeam fail, player:");
    operator<<(v7, player);
    common::milog::MiLogStream::~MiLogStream(&v34);
  }
  else
  {
    v8 = std::__shared_ptr_access<SceneTeam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneTeam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 112));
    std::function<ForeachPolicy ()(Avatar &)>::function<void PlayerCookComp::foreachProudCookConfig<LifeEffectCookExtraProficiency,PlayerCookComp::getProudSkillExtraProficiency(data::CookRecipeExcelConfig const&,unsigned long,std::vector<unsigned int> &)::{lambda(unsigned int,LifeEffectCookExtraProficiency const&)#1}>(Player &,unsigned long,data::CookRecipeExcelConfig const&,PlayerCookComp::getProudSkillExtraProficiency(data::CookRecipeExcelConfig const&,unsigned long,std::vector<unsigned int> &)::{lambda(unsigned int,LifeEffectCookExtraProficiency const&)#1})::{lambda(Avatar const&)#1},void,void>(
      (std::function<ForeachPolicy(Avatar&)> *const)&v34,
      (PlayerCookComp::foreachProudCookConfig<LifeEffectCookExtraProficiency,PlayerCookComp::getProudSkillExtraProficiency(const data::CookRecipeExcelConfig&,uint64_t,std::vector<unsigned int>&)::<lambda(uint32_t,const LifeEffectCookExtraProficiency&)> >::<lambda(const Avatar&)>)(v4 + 208));
    SceneTeam::foreachAvatar(v8, (std::function<ForeachPolicy(Avatar&)> *)&v34);
    std::function<ForeachPolicy ()(Avatar &)>::~function((std::function<ForeachPolicy(Avatar&)> *const)&v34);
    AvatarComp = Player::getAvatarComp(player);
    PlayerAvatarComp::findFormalAvatar(
      (const PlayerAvatarComp *const)(v4 + 144),
      (uint64_t)AvatarComp,
      *(_QWORD *)(v4 + 80));
    if ( std::operator!=<FormalAvatar>(0LL, (const std::shared_ptr<FormalAvatar> *)(v4 + 144)) )
    {
      v10 = std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 144));
      TalentComp = Avatar::getTalentComp(v10);
      TalentComp::getProudSkills(&v33, TalentComp);
      __for_range = &v33;
      *(std::vector<unsigned int>::iterator *)(v4 + 48) = std::vector<unsigned int>::begin(&v33);
      __for_end._M_current = std::vector<unsigned int>::end(__for_range)._M_current;
      while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v4 + 48),
                &__for_end) )
      {
        v12 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v4 + 48));
        v13 = v12;
        if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v12);
        }
        *(_DWORD *)(v4 + 32) = *v13;
        v14 = std::map<unsigned int,std::set<unsigned long>>::operator[](
                (std::map<unsigned int,std::set<long unsigned int>> *const)(v4 + 208),
                (const std::map<unsigned int,std::set<long unsigned int>>::key_type *)(v4 + 32));
        std::set<unsigned long>::insert(v14, (const std::set<long unsigned int>::value_type *)(v4 + 80));
        __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v4 + 48));
      }
      std::vector<unsigned int>::~vector(&v33);
    }
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v32);
    proud_cook_config_map = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v32)->design_config.txt_config_mgr.avatar_talent_config_mgr.proud_cook_config_map;
    std::shared_ptr<Config>::~shared_ptr(&v32);
    __for_range_0 = (std::map<unsigned int,std::set<long unsigned int>> *)(v4 + 208);
    __for_begin._M_node = std::map<unsigned int,std::set<unsigned long>>::begin((std::map<unsigned int,std::set<long unsigned int>> *const)(v4 + 208))._M_node;
    __for_end_0._M_node = std::map<unsigned int,std::set<unsigned long>>::end(__for_range_0)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end_0) )
    {
      v28 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::set<unsigned long>>>::operator*(&__for_begin);
      proud_skill_id = std::get<0ul,unsigned int const,std::set<unsigned long>>(v28);
      avatar_guid_set = (std::tuple_element<1,const std::pair<unsigned int const,std::set<long unsigned int> > >::type *)std::get<1ul,unsigned int const,std::set<unsigned long>>(v28);
      *(std::unordered_map<unsigned int,std::variant<LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook>>::const_iterator *)(v4 + 48) = std::unordered_map<unsigned int,std::variant<LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook>>::find(proud_cook_config_map, proud_skill_id);
      __for_end._M_current = (unsigned int *)std::unordered_map<unsigned int,std::variant<LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook>>::end(proud_cook_config_map)._M_cur;
      if ( !std::__detail::operator==<std::pair<unsigned int const,std::variant<LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook>>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::variant<LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook> >,false> *)(v4 + 48),
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::variant<LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook> >,false> *)&__for_end) )
      {
        v15 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::variant<LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::variant<LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook> >,false,false> *const)(v4 + 48));
        config_ptr = std::get_if<LifeEffectCookExtraProficiency,LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook>(&v15->second);
        if ( config_ptr )
        {
          if ( *(_BYTE *)(((unsigned __int64)&config_ptr->effect_target_type >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&config_ptr->effect_target_type >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&config_ptr->effect_target_type);
          }
          if ( (config_ptr->effect_target_type == EFFECT_TARGET_TEAM
             || common::tools::MiscUtils::isContains<std::set<unsigned long> const,unsigned long>(
                  avatar_guid_set,
                  (const unsigned __int64 *)(v4 + 80)))
            && (std::set<data::CookFoodType>::empty(&config_ptr->cook_food_type_set)
             || common::tools::MiscUtils::isContains<std::set<data::CookFoodType> const,data::CookFoodType>(
                  &config_ptr->cook_food_type_set,
                  &recipe_config->food_type))
            && (std::set<data::CookMethodType>::empty(&config_ptr->cook_method_type_set)
             || common::tools::MiscUtils::isContains<std::set<data::CookMethodType> const,data::CookMethodType>(
                  &config_ptr->cook_method_type_set,
                  &recipe_config->cook_method)) )
          {
            if ( *(_BYTE *)(((unsigned __int64)proud_skill_id >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)proud_skill_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)proud_skill_id >> 3)
                                                                               + 0x7FFF8000) )
            {
              __asan_report_load4(proud_skill_id);
            }
            if ( PlayerCookComp::getProudSkillExtraProficiency(data::CookRecipeExcelConfig const&,unsigned long,std::vector<unsigned int> &)::{lambda(unsigned int,LifeEffectCookExtraProficiency const&)#1}::operator()(
                   (const PlayerCookComp::getProudSkillExtraProficiency::<lambda(uint32_t, const LifeEffectCookExtraProficiency&)> *const)(v4 + 176),
                   *proud_skill_id,
                   config_ptr) )
            {
              break;
            }
          }
        }
      }
      std::_Rb_tree_iterator<std::pair<unsigned int const,std::set<unsigned long>>>::operator++(&__for_begin);
    }
    std::shared_ptr<FormalAvatar>::~shared_ptr((std::shared_ptr<FormalAvatar> *const)(v4 + 144));
  }
  std::shared_ptr<SceneTeam>::~shared_ptr((std::shared_ptr<SceneTeam> *const)(v4 + 112));
  std::map<unsigned int,std::set<unsigned long>>::~map((std::map<unsigned int,std::set<long unsigned int>> *const)(v4 + 208));
  if ( v35 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8020) = -168430091;
  }
};

// Line 588: range 00000000175FCDCC-00000000175FD601
void __fastcall PlayerCookComp::foreachProudCookConfig<LifeEffectCookPerfectMultiOutput,PlayerCookComp::extraOutputOnSpecificQuality(unsigned int,unsigned long,std::vector<ItemParam> const&,std::map<unsigned int,unsigned int> &,std::vector&<unsigned int,std::allocator<unsigned int>>,unsigned int)::{lambda(unsigned int,LifeEffectCookPerfectMultiOutput const&)#1}>(
        Player *player,
        uint64_t assist_avatar_guid,
        const data::CookRecipeExcelConfig *recipe_config,
        PlayerCookComp::extraOutputOnSpecificQuality::<lambda(uint32_t, const LifeEffectCookPerfectMultiOutput&)> func)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rax
  SceneTeam *v8; // r14
  PlayerAvatarComp *AvatarComp; // rax
  std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  TalentComp *TalentComp; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v12; // rax
  _DWORD *v13; // rdx
  std::set<long unsigned int> *v14; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::variant<LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook> >,false,false>::pointer v15; // rax
  std::map<unsigned int,std::set<long unsigned int>>::iterator __for_begin; // [rsp+20h] [rbp-210h] BYREF
  std::map<unsigned int,std::set<long unsigned int>>::iterator __for_end_0; // [rsp+28h] [rbp-208h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+30h] [rbp-200h] BYREF
  std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-1F8h]
  const std::unordered_map<unsigned int,std::variant<LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook>> *proud_cook_config_map; // [rsp+40h] [rbp-1F0h]
  std::map<unsigned int,std::set<long unsigned int>> *__for_range_0; // [rsp+48h] [rbp-1E8h]
  const std::pair<unsigned int const,std::set<long unsigned int> > *v26; // [rsp+50h] [rbp-1E0h]
  std::tuple_element<0,const std::pair<unsigned int const,std::set<long unsigned int> > >::type *proud_skill_id; // [rsp+58h] [rbp-1D8h]
  std::tuple_element<1,const std::pair<unsigned int const,std::set<long unsigned int> > >::type *avatar_guid_set; // [rsp+60h] [rbp-1D0h]
  const LifeEffectCookPerfectMultiOutput *config_ptr; // [rsp+68h] [rbp-1C8h]
  std::shared_ptr<Config> v30; // [rsp+70h] [rbp-1C0h] BYREF
  std::vector<unsigned int> v31; // [rsp+80h] [rbp-1B0h] BYREF
  common::milog::MiLogStream v32; // [rsp+A0h] [rbp-190h] BYREF
  char v33[368]; // [rsp+C0h] [rbp-170h] BYREF

  v4 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(320LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "7 32 4 18 proud_skill_id:613 48 8 8 iter:622 80 8 22 assist_avatar_guid:588 112 16 18 scene_team"
                        "_ptr:594 144 16 21 assist_avatar_ptr:610 176 24 8 func:588 240 48 19 proud_skill_map:591";
  *(_QWORD *)(v4 + 16) = PlayerCookComp::foreachProudCookConfig<LifeEffectCookPerfectMultiOutput,PlayerCookComp::extraOutputOnSpecificQuality(unsigned int,unsigned long,std::vector<ItemParam> const&,std::map<unsigned int,unsigned int> &,std::vector&<unsigned int,std::allocator<unsigned int>>,unsigned int)::{lambda(unsigned int,LifeEffectCookPerfectMultiOutput const&)#1}>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = 61956;
  v6[536862721] = -234881024;
  v6[536862722] = 62194;
  v6[536862722] = -234881024;
  v6[536862723] = 62194;
  v6[536862724] = 62194;
  v6[536862725] = 62194;
  v6[536862726] = -218959360;
  v6[536862727] = 62194;
  v6[536862729] = -202116109;
  *(_QWORD *)(v4 + 80) = assist_avatar_guid;
  *(PlayerCookComp::extraOutputOnSpecificQuality::<lambda(uint32_t, const LifeEffectCookPerfectMultiOutput&)> *)(v4 + 176) = func;
  std::map<unsigned int,std::set<unsigned long>>::map((std::map<unsigned int,std::set<long unsigned int>> *const)(v4 + 240));
  Player::getAvatarComp(player);
  PlayerAvatarComp::findSceneTeam((PlayerAvatarComp *const)(v4 + 112));
  if ( std::operator==<SceneTeam>(0LL, (const std::shared_ptr<SceneTeam> *)(v4 + 112)) )
  {
    common::milog::MiLogStream::create(
      &v32,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/cook/player_cook_comp.cpp",
      "foreachProudCookConfig",
      597);
    v7 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
           &v32,
           (const char (*)[28])"findSceneTeam fail, player:");
    operator<<(v7, player);
    common::milog::MiLogStream::~MiLogStream(&v32);
  }
  else
  {
    v8 = std::__shared_ptr_access<SceneTeam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneTeam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 112));
    std::function<ForeachPolicy ()(Avatar &)>::function<void PlayerCookComp::foreachProudCookConfig<LifeEffectCookPerfectMultiOutput,PlayerCookComp::extraOutputOnSpecificQuality(unsigned int,unsigned long,std::vector<ItemParam> const&,std::map<unsigned int,unsigned int> &,std::vector&<unsigned int,std::allocator<unsigned int>>,unsigned int)::{lambda(unsigned int,LifeEffectCookPerfectMultiOutput const&)#1}>(Player &,unsigned long,data::CookRecipeExcelConfig const&,PlayerCookComp::extraOutputOnSpecificQuality(unsigned int,unsigned long,std::vector<ItemParam> const&,std::map<unsigned int,unsigned int> &,std::vector&<unsigned int,std::allocator<unsigned int>>,unsigned int)::{lambda(unsigned int,LifeEffectCookPerfectMultiOutput const&)#1})::{lambda(Avatar const&)#1},void,void>(
      (std::function<ForeachPolicy(Avatar&)> *const)&v32,
      (PlayerCookComp::foreachProudCookConfig<LifeEffectCookPerfectMultiOutput,PlayerCookComp::extraOutputOnSpecificQuality(uint32_t,uint64_t,const std::vector<ItemParam>&,std::map<unsigned int,unsigned int>&,std::vector<unsigned int>&,uint32_t) const::<lambda(uint32_t,const LifeEffectCookPerfectMultiOutput&)> >::<lambda(const Avatar&)>)(v4 + 240));
    SceneTeam::foreachAvatar(v8, (std::function<ForeachPolicy(Avatar&)> *)&v32);
    std::function<ForeachPolicy ()(Avatar &)>::~function((std::function<ForeachPolicy(Avatar&)> *const)&v32);
    AvatarComp = Player::getAvatarComp(player);
    PlayerAvatarComp::findFormalAvatar(
      (const PlayerAvatarComp *const)(v4 + 144),
      (uint64_t)AvatarComp,
      *(_QWORD *)(v4 + 80));
    if ( std::operator!=<FormalAvatar>(0LL, (const std::shared_ptr<FormalAvatar> *)(v4 + 144)) )
    {
      v10 = std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 144));
      TalentComp = Avatar::getTalentComp(v10);
      TalentComp::getProudSkills(&v31, TalentComp);
      __for_range = &v31;
      *(std::vector<unsigned int>::iterator *)(v4 + 48) = std::vector<unsigned int>::begin(&v31);
      __for_end._M_current = std::vector<unsigned int>::end(__for_range)._M_current;
      while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v4 + 48),
                &__for_end) )
      {
        v12 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v4 + 48));
        v13 = v12;
        if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v12);
        }
        *(_DWORD *)(v4 + 32) = *v13;
        v14 = std::map<unsigned int,std::set<unsigned long>>::operator[](
                (std::map<unsigned int,std::set<long unsigned int>> *const)(v4 + 240),
                (const std::map<unsigned int,std::set<long unsigned int>>::key_type *)(v4 + 32));
        std::set<unsigned long>::insert(v14, (const std::set<long unsigned int>::value_type *)(v4 + 80));
        __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v4 + 48));
      }
      std::vector<unsigned int>::~vector(&v31);
    }
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v30);
    proud_cook_config_map = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v30)->design_config.txt_config_mgr.avatar_talent_config_mgr.proud_cook_config_map;
    std::shared_ptr<Config>::~shared_ptr(&v30);
    __for_range_0 = (std::map<unsigned int,std::set<long unsigned int>> *)(v4 + 240);
    __for_begin._M_node = std::map<unsigned int,std::set<unsigned long>>::begin((std::map<unsigned int,std::set<long unsigned int>> *const)(v4 + 240))._M_node;
    __for_end_0._M_node = std::map<unsigned int,std::set<unsigned long>>::end(__for_range_0)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end_0) )
    {
      v26 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::set<unsigned long>>>::operator*(&__for_begin);
      proud_skill_id = std::get<0ul,unsigned int const,std::set<unsigned long>>(v26);
      avatar_guid_set = (std::tuple_element<1,const std::pair<unsigned int const,std::set<long unsigned int> > >::type *)std::get<1ul,unsigned int const,std::set<unsigned long>>(v26);
      *(std::unordered_map<unsigned int,std::variant<LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook>>::const_iterator *)(v4 + 48) = std::unordered_map<unsigned int,std::variant<LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook>>::find(proud_cook_config_map, proud_skill_id);
      __for_end._M_current = (unsigned int *)std::unordered_map<unsigned int,std::variant<LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook>>::end(proud_cook_config_map)._M_cur;
      if ( !std::__detail::operator==<std::pair<unsigned int const,std::variant<LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook>>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::variant<LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook> >,false> *)(v4 + 48),
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::variant<LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook> >,false> *)&__for_end) )
      {
        v15 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::variant<LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::variant<LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook> >,false,false> *const)(v4 + 48));
        config_ptr = std::get_if<LifeEffectCookPerfectMultiOutput,LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook>(&v15->second);
        if ( config_ptr )
        {
          if ( *(_BYTE *)(((unsigned __int64)&config_ptr->effect_target_type >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&config_ptr->effect_target_type >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&config_ptr->effect_target_type);
          }
          if ( (config_ptr->effect_target_type == EFFECT_TARGET_TEAM
             || common::tools::MiscUtils::isContains<std::set<unsigned long> const,unsigned long>(
                  avatar_guid_set,
                  (const unsigned __int64 *)(v4 + 80)))
            && (std::set<data::CookFoodType>::empty(&config_ptr->cook_food_type_set)
             || common::tools::MiscUtils::isContains<std::set<data::CookFoodType> const,data::CookFoodType>(
                  &config_ptr->cook_food_type_set,
                  &recipe_config->food_type))
            && (std::set<data::CookMethodType>::empty(&config_ptr->cook_method_type_set)
             || common::tools::MiscUtils::isContains<std::set<data::CookMethodType> const,data::CookMethodType>(
                  &config_ptr->cook_method_type_set,
                  &recipe_config->cook_method)) )
          {
            if ( *(_BYTE *)(((unsigned __int64)proud_skill_id >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)proud_skill_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)proud_skill_id >> 3)
                                                                               + 0x7FFF8000) )
            {
              __asan_report_load4(proud_skill_id);
            }
            if ( PlayerCookComp::extraOutputOnSpecificQuality(unsigned int,unsigned long,std::vector<ItemParam> const&,std::map<unsigned int,unsigned int> &,std::vector&<unsigned int,std::allocator<unsigned int>>,unsigned int)const::{lambda(unsigned int,LifeEffectCookPerfectMultiOutput const&)#1}::operator()(
                   (const PlayerCookComp::extraOutputOnSpecificQuality::<lambda(uint32_t, const LifeEffectCookPerfectMultiOutput&)> *const)(v4 + 176),
                   *proud_skill_id,
                   config_ptr) )
            {
              break;
            }
          }
        }
      }
      std::_Rb_tree_iterator<std::pair<unsigned int const,std::set<unsigned long>>>::operator++(&__for_begin);
    }
    std::shared_ptr<FormalAvatar>::~shared_ptr((std::shared_ptr<FormalAvatar> *const)(v4 + 144));
  }
  std::shared_ptr<SceneTeam>::~shared_ptr((std::shared_ptr<SceneTeam> *const)(v4 + 112));
  std::map<unsigned int,std::set<unsigned long>>::~map((std::map<unsigned int,std::set<long unsigned int>> *const)(v4 + 240));
  if ( v33 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8024) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 588: range 00000000175FD84A-00000000175FE0B4
void __fastcall PlayerCookComp::foreachProudCookConfig<LifeEffectCookProbMultiOutput,PlayerCookComp::extraOutputOnSpecificQuality(unsigned int,unsigned long,std::vector<ItemParam> const&,std::map<unsigned int,unsigned int> &,std::vector&<unsigned int,std::allocator<unsigned int>>,unsigned int)::{lambda(unsigned int,LifeEffectCookProbMultiOutput const&)#2}>(
        Player *player,
        uint64_t assist_avatar_guid,
        const data::CookRecipeExcelConfig *recipe_config,
        PlayerCookComp::extraOutputOnSpecificQuality::<lambda(uint32_t, const LifeEffectCookProbMultiOutput&)> func)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rax
  SceneTeam *v8; // r14
  PlayerAvatarComp *AvatarComp; // rax
  std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  TalentComp *TalentComp; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v12; // rax
  _DWORD *v13; // rdx
  std::set<long unsigned int> *v14; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::variant<LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook> >,false,false>::pointer v15; // rax
  std::map<unsigned int,std::set<long unsigned int>>::iterator __for_begin; // [rsp+20h] [rbp-230h] BYREF
  std::map<unsigned int,std::set<long unsigned int>>::iterator __for_end_0; // [rsp+28h] [rbp-228h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+30h] [rbp-220h] BYREF
  std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-218h]
  const std::unordered_map<unsigned int,std::variant<LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook>> *proud_cook_config_map; // [rsp+40h] [rbp-210h]
  std::map<unsigned int,std::set<long unsigned int>> *__for_range_0; // [rsp+48h] [rbp-208h]
  const std::pair<unsigned int const,std::set<long unsigned int> > *v26; // [rsp+50h] [rbp-200h]
  std::tuple_element<0,const std::pair<unsigned int const,std::set<long unsigned int> > >::type *proud_skill_id; // [rsp+58h] [rbp-1F8h]
  std::tuple_element<1,const std::pair<unsigned int const,std::set<long unsigned int> > >::type *avatar_guid_set; // [rsp+60h] [rbp-1F0h]
  const LifeEffectCookProbMultiOutput *config_ptr; // [rsp+68h] [rbp-1E8h]
  std::shared_ptr<Config> v30; // [rsp+70h] [rbp-1E0h] BYREF
  std::vector<unsigned int> v31; // [rsp+80h] [rbp-1D0h] BYREF
  common::milog::MiLogStream v32; // [rsp+A0h] [rbp-1B0h] BYREF
  char v33[400]; // [rsp+C0h] [rbp-190h] BYREF

  v4 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(352LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "7 32 4 18 proud_skill_id:613 48 8 8 iter:622 80 8 22 assist_avatar_guid:588 112 16 18 scene_team"
                        "_ptr:594 144 16 21 assist_avatar_ptr:610 176 48 19 proud_skill_map:591 256 56 8 func:588";
  *(_QWORD *)(v4 + 16) = PlayerCookComp::foreachProudCookConfig<LifeEffectCookProbMultiOutput,PlayerCookComp::extraOutputOnSpecificQuality(unsigned int,unsigned long,std::vector<ItemParam> const&,std::map<unsigned int,unsigned int> &,std::vector&<unsigned int,std::allocator<unsigned int>>,unsigned int)::{lambda(unsigned int,LifeEffectCookProbMultiOutput const&)#2}>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = 61956;
  v6[536862721] = -234881024;
  v6[536862722] = 62194;
  v6[536862722] = -234881024;
  v6[536862723] = 62194;
  v6[536862724] = 62194;
  v6[536862725] = 62194;
  v6[536862727] = -218959118;
  v6[536862729] = -218103808;
  v6[536862730] = -202116109;
  *(_QWORD *)(v4 + 80) = assist_avatar_guid;
  *(PlayerCookComp::extraOutputOnSpecificQuality::<lambda(uint32_t, const LifeEffectCookProbMultiOutput&)> *)(v4 + 256) = func;
  std::map<unsigned int,std::set<unsigned long>>::map((std::map<unsigned int,std::set<long unsigned int>> *const)(v4 + 176));
  Player::getAvatarComp(player);
  PlayerAvatarComp::findSceneTeam((PlayerAvatarComp *const)(v4 + 112));
  if ( std::operator==<SceneTeam>(0LL, (const std::shared_ptr<SceneTeam> *)(v4 + 112)) )
  {
    common::milog::MiLogStream::create(
      &v32,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/cook/player_cook_comp.cpp",
      "foreachProudCookConfig",
      597);
    v7 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
           &v32,
           (const char (*)[28])"findSceneTeam fail, player:");
    operator<<(v7, player);
    common::milog::MiLogStream::~MiLogStream(&v32);
  }
  else
  {
    v8 = std::__shared_ptr_access<SceneTeam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneTeam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 112));
    std::function<ForeachPolicy ()(Avatar &)>::function<void PlayerCookComp::foreachProudCookConfig<LifeEffectCookProbMultiOutput,PlayerCookComp::extraOutputOnSpecificQuality(unsigned int,unsigned long,std::vector<ItemParam> const&,std::map<unsigned int,unsigned int> &,std::vector&<unsigned int,std::allocator<unsigned int>>,unsigned int)::{lambda(unsigned int,LifeEffectCookProbMultiOutput const&)#2}>(Player &,unsigned long,data::CookRecipeExcelConfig const&,PlayerCookComp::extraOutputOnSpecificQuality(unsigned int,unsigned long,std::vector<ItemParam> const&,std::map<unsigned int,unsigned int> &,std::vector&<unsigned int,std::allocator<unsigned int>>,unsigned int)::{lambda(unsigned int,LifeEffectCookProbMultiOutput const&)#2})::{lambda(Avatar const&)#1},void,void>(
      (std::function<ForeachPolicy(Avatar&)> *const)&v32,
      (PlayerCookComp::foreachProudCookConfig<LifeEffectCookProbMultiOutput,PlayerCookComp::extraOutputOnSpecificQuality(uint32_t,uint64_t,const std::vector<ItemParam>&,std::map<unsigned int,unsigned int>&,std::vector<unsigned int>&,uint32_t) const::<lambda(uint32_t,const LifeEffectCookProbMultiOutput&)> >::<lambda(const Avatar&)>)(v4 + 176));
    SceneTeam::foreachAvatar(v8, (std::function<ForeachPolicy(Avatar&)> *)&v32);
    std::function<ForeachPolicy ()(Avatar &)>::~function((std::function<ForeachPolicy(Avatar&)> *const)&v32);
    AvatarComp = Player::getAvatarComp(player);
    PlayerAvatarComp::findFormalAvatar(
      (const PlayerAvatarComp *const)(v4 + 144),
      (uint64_t)AvatarComp,
      *(_QWORD *)(v4 + 80));
    if ( std::operator!=<FormalAvatar>(0LL, (const std::shared_ptr<FormalAvatar> *)(v4 + 144)) )
    {
      v10 = std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 144));
      TalentComp = Avatar::getTalentComp(v10);
      TalentComp::getProudSkills(&v31, TalentComp);
      __for_range = &v31;
      *(std::vector<unsigned int>::iterator *)(v4 + 48) = std::vector<unsigned int>::begin(&v31);
      __for_end._M_current = std::vector<unsigned int>::end(__for_range)._M_current;
      while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v4 + 48),
                &__for_end) )
      {
        v12 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v4 + 48));
        v13 = v12;
        if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v12);
        }
        *(_DWORD *)(v4 + 32) = *v13;
        v14 = std::map<unsigned int,std::set<unsigned long>>::operator[](
                (std::map<unsigned int,std::set<long unsigned int>> *const)(v4 + 176),
                (const std::map<unsigned int,std::set<long unsigned int>>::key_type *)(v4 + 32));
        std::set<unsigned long>::insert(v14, (const std::set<long unsigned int>::value_type *)(v4 + 80));
        __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v4 + 48));
      }
      std::vector<unsigned int>::~vector(&v31);
    }
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v30);
    proud_cook_config_map = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v30)->design_config.txt_config_mgr.avatar_talent_config_mgr.proud_cook_config_map;
    std::shared_ptr<Config>::~shared_ptr(&v30);
    __for_range_0 = (std::map<unsigned int,std::set<long unsigned int>> *)(v4 + 176);
    __for_begin._M_node = std::map<unsigned int,std::set<unsigned long>>::begin((std::map<unsigned int,std::set<long unsigned int>> *const)(v4 + 176))._M_node;
    __for_end_0._M_node = std::map<unsigned int,std::set<unsigned long>>::end(__for_range_0)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end_0) )
    {
      v26 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::set<unsigned long>>>::operator*(&__for_begin);
      proud_skill_id = std::get<0ul,unsigned int const,std::set<unsigned long>>(v26);
      avatar_guid_set = (std::tuple_element<1,const std::pair<unsigned int const,std::set<long unsigned int> > >::type *)std::get<1ul,unsigned int const,std::set<unsigned long>>(v26);
      *(std::unordered_map<unsigned int,std::variant<LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook>>::const_iterator *)(v4 + 48) = std::unordered_map<unsigned int,std::variant<LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook>>::find(proud_cook_config_map, proud_skill_id);
      __for_end._M_current = (unsigned int *)std::unordered_map<unsigned int,std::variant<LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook>>::end(proud_cook_config_map)._M_cur;
      if ( !std::__detail::operator==<std::pair<unsigned int const,std::variant<LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook>>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::variant<LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook> >,false> *)(v4 + 48),
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::variant<LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook> >,false> *)&__for_end) )
      {
        v15 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::variant<LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::variant<LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook> >,false,false> *const)(v4 + 48));
        config_ptr = std::get_if<LifeEffectCookProbMultiOutput,LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook>(&v15->second);
        if ( config_ptr )
        {
          if ( *(_BYTE *)(((unsigned __int64)&config_ptr->effect_target_type >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&config_ptr->effect_target_type >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&config_ptr->effect_target_type);
          }
          if ( (config_ptr->effect_target_type == EFFECT_TARGET_TEAM
             || common::tools::MiscUtils::isContains<std::set<unsigned long> const,unsigned long>(
                  avatar_guid_set,
                  (const unsigned __int64 *)(v4 + 80)))
            && (std::set<data::CookFoodType>::empty(&config_ptr->cook_food_type_set)
             || common::tools::MiscUtils::isContains<std::set<data::CookFoodType> const,data::CookFoodType>(
                  &config_ptr->cook_food_type_set,
                  &recipe_config->food_type))
            && (std::set<data::CookMethodType>::empty(&config_ptr->cook_method_type_set)
             || common::tools::MiscUtils::isContains<std::set<data::CookMethodType> const,data::CookMethodType>(
                  &config_ptr->cook_method_type_set,
                  &recipe_config->cook_method)) )
          {
            if ( *(_BYTE *)(((unsigned __int64)proud_skill_id >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)proud_skill_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)proud_skill_id >> 3)
                                                                               + 0x7FFF8000) )
            {
              __asan_report_load4(proud_skill_id);
            }
            if ( PlayerCookComp::extraOutputOnSpecificQuality(unsigned int,unsigned long,std::vector<ItemParam> const&,std::map<unsigned int,unsigned int> &,std::vector&<unsigned int,std::allocator<unsigned int>>,unsigned int)const::{lambda(unsigned int,LifeEffectCookProbMultiOutput const&)#2}::operator()(
                   (const PlayerCookComp::extraOutputOnSpecificQuality::<lambda(uint32_t, const LifeEffectCookProbMultiOutput&)> *const)(v4 + 256),
                   *proud_skill_id,
                   config_ptr) )
            {
              break;
            }
          }
        }
      }
      std::_Rb_tree_iterator<std::pair<unsigned int const,std::set<unsigned long>>>::operator++(&__for_begin);
    }
    std::shared_ptr<FormalAvatar>::~shared_ptr((std::shared_ptr<FormalAvatar> *const)(v4 + 144));
  }
  std::shared_ptr<SceneTeam>::~shared_ptr((std::shared_ptr<SceneTeam> *const)(v4 + 112));
  std::map<unsigned int,std::set<unsigned long>>::~map((std::map<unsigned int,std::set<long unsigned int>> *const)(v4 + 176));
  if ( v33 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF801C) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8024) = 0LL;
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
};

// Line 588: range 00000000175FAE7C-00000000175FB693
void __fastcall PlayerCookComp::foreachProudCookConfig<LifeEffectCookWidenJudgeArea,PlayerCookComp::onPlayerCookArgsReq(proto::PlayerCookArgsReq const&,proto::PlayerCookArgsRsp &)::{lambda(unsigned int,LifeEffectCookWidenJudgeArea const&)#1}>(
        Player *player,
        uint64_t assist_avatar_guid,
        const data::CookRecipeExcelConfig *recipe_config,
        PlayerCookComp::onPlayerCookArgsReq::<lambda(uint32_t, const LifeEffectCookWidenJudgeArea&)> func)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rax
  SceneTeam *v8; // r14
  PlayerAvatarComp *AvatarComp; // rax
  std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  TalentComp *TalentComp; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v12; // rax
  _DWORD *v13; // rdx
  std::set<long unsigned int> *v14; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::variant<LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook> >,false,false>::pointer v15; // rax
  std::map<unsigned int,std::set<long unsigned int>>::iterator __for_begin; // [rsp+20h] [rbp-1F0h] BYREF
  std::map<unsigned int,std::set<long unsigned int>>::iterator __for_end_0; // [rsp+28h] [rbp-1E8h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+30h] [rbp-1E0h] BYREF
  std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-1D8h]
  const std::unordered_map<unsigned int,std::variant<LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook>> *proud_cook_config_map; // [rsp+40h] [rbp-1D0h]
  std::map<unsigned int,std::set<long unsigned int>> *__for_range_0; // [rsp+48h] [rbp-1C8h]
  const std::pair<unsigned int const,std::set<long unsigned int> > *v27; // [rsp+50h] [rbp-1C0h]
  std::tuple_element<0,const std::pair<unsigned int const,std::set<long unsigned int> > >::type *proud_skill_id; // [rsp+58h] [rbp-1B8h]
  std::tuple_element<1,const std::pair<unsigned int const,std::set<long unsigned int> > >::type *avatar_guid_set; // [rsp+60h] [rbp-1B0h]
  const LifeEffectCookWidenJudgeArea *config_ptr; // [rsp+68h] [rbp-1A8h]
  std::shared_ptr<Config> v31; // [rsp+70h] [rbp-1A0h] BYREF
  std::vector<unsigned int> v32; // [rsp+80h] [rbp-190h] BYREF
  common::milog::MiLogStream v33; // [rsp+A0h] [rbp-170h] BYREF
  char v34[336]; // [rsp+C0h] [rbp-150h] BYREF

  v4 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(288LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "7 32 4 18 proud_skill_id:613 48 8 8 iter:622 80 8 22 assist_avatar_guid:588 112 8 8 func:588 144"
                        " 16 18 scene_team_ptr:594 176 16 21 assist_avatar_ptr:610 208 48 19 proud_skill_map:591";
  *(_QWORD *)(v4 + 16) = PlayerCookComp::foreachProudCookConfig<LifeEffectCookWidenJudgeArea,PlayerCookComp::onPlayerCookArgsReq(proto::PlayerCookArgsReq const&,proto::PlayerCookArgsRsp &)::{lambda(unsigned int,LifeEffectCookWidenJudgeArea const&)#1}>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = 61956;
  v6[536862721] = -234881024;
  v6[536862722] = 62194;
  v6[536862722] = -234881024;
  v6[536862723] = 62194;
  v6[536862723] = -234881024;
  v6[536862724] = 62194;
  v6[536862725] = 62194;
  v6[536862726] = 62194;
  v6[536862728] = -202116109;
  *(_QWORD *)(v4 + 80) = assist_avatar_guid;
  *(PlayerCookComp::onPlayerCookArgsReq::<lambda(uint32_t, const LifeEffectCookWidenJudgeArea&)> *)(v4 + 112) = func;
  std::map<unsigned int,std::set<unsigned long>>::map((std::map<unsigned int,std::set<long unsigned int>> *const)(v4 + 208));
  Player::getAvatarComp(player);
  PlayerAvatarComp::findSceneTeam((PlayerAvatarComp *const)(v4 + 144));
  if ( std::operator==<SceneTeam>(0LL, (const std::shared_ptr<SceneTeam> *)(v4 + 144)) )
  {
    common::milog::MiLogStream::create(
      &v33,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/cook/player_cook_comp.cpp",
      "foreachProudCookConfig",
      597);
    v7 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
           &v33,
           (const char (*)[28])"findSceneTeam fail, player:");
    operator<<(v7, player);
    common::milog::MiLogStream::~MiLogStream(&v33);
  }
  else
  {
    v8 = std::__shared_ptr_access<SceneTeam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneTeam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 144));
    std::function<ForeachPolicy ()(Avatar &)>::function<void PlayerCookComp::foreachProudCookConfig<LifeEffectCookWidenJudgeArea,PlayerCookComp::onPlayerCookArgsReq(proto::PlayerCookArgsReq const&,proto::PlayerCookArgsRsp &)::{lambda(unsigned int,LifeEffectCookWidenJudgeArea const&)#1}>(Player &,unsigned long,data::CookRecipeExcelConfig const&,PlayerCookComp::onPlayerCookArgsReq(proto::PlayerCookArgsReq const&,proto::PlayerCookArgsRsp &)::{lambda(unsigned int,LifeEffectCookWidenJudgeArea const&)#1})::{lambda(Avatar const&)#1},void,void>(
      (std::function<ForeachPolicy(Avatar&)> *const)&v33,
      (PlayerCookComp::foreachProudCookConfig<LifeEffectCookWidenJudgeArea,PlayerCookComp::onPlayerCookArgsReq(const proto::PlayerCookArgsReq&,proto::PlayerCookArgsRsp&)::<lambda(uint32_t,const LifeEffectCookWidenJudgeArea&)> >::<lambda(const Avatar&)>)(v4 + 208));
    SceneTeam::foreachAvatar(v8, (std::function<ForeachPolicy(Avatar&)> *)&v33);
    std::function<ForeachPolicy ()(Avatar &)>::~function((std::function<ForeachPolicy(Avatar&)> *const)&v33);
    AvatarComp = Player::getAvatarComp(player);
    PlayerAvatarComp::findFormalAvatar(
      (const PlayerAvatarComp *const)(v4 + 176),
      (uint64_t)AvatarComp,
      *(_QWORD *)(v4 + 80));
    if ( std::operator!=<FormalAvatar>(0LL, (const std::shared_ptr<FormalAvatar> *)(v4 + 176)) )
    {
      v10 = std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 176));
      TalentComp = Avatar::getTalentComp(v10);
      TalentComp::getProudSkills(&v32, TalentComp);
      __for_range = &v32;
      *(std::vector<unsigned int>::iterator *)(v4 + 48) = std::vector<unsigned int>::begin(&v32);
      __for_end._M_current = std::vector<unsigned int>::end(__for_range)._M_current;
      while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v4 + 48),
                &__for_end) )
      {
        v12 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v4 + 48));
        v13 = v12;
        if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v12);
        }
        *(_DWORD *)(v4 + 32) = *v13;
        v14 = std::map<unsigned int,std::set<unsigned long>>::operator[](
                (std::map<unsigned int,std::set<long unsigned int>> *const)(v4 + 208),
                (const std::map<unsigned int,std::set<long unsigned int>>::key_type *)(v4 + 32));
        std::set<unsigned long>::insert(v14, (const std::set<long unsigned int>::value_type *)(v4 + 80));
        __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v4 + 48));
      }
      std::vector<unsigned int>::~vector(&v32);
    }
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v31);
    proud_cook_config_map = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v31)->design_config.txt_config_mgr.avatar_talent_config_mgr.proud_cook_config_map;
    std::shared_ptr<Config>::~shared_ptr(&v31);
    __for_range_0 = (std::map<unsigned int,std::set<long unsigned int>> *)(v4 + 208);
    __for_begin._M_node = std::map<unsigned int,std::set<unsigned long>>::begin((std::map<unsigned int,std::set<long unsigned int>> *const)(v4 + 208))._M_node;
    __for_end_0._M_node = std::map<unsigned int,std::set<unsigned long>>::end(__for_range_0)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end_0) )
    {
      v27 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::set<unsigned long>>>::operator*(&__for_begin);
      proud_skill_id = std::get<0ul,unsigned int const,std::set<unsigned long>>(v27);
      avatar_guid_set = (std::tuple_element<1,const std::pair<unsigned int const,std::set<long unsigned int> > >::type *)std::get<1ul,unsigned int const,std::set<unsigned long>>(v27);
      *(std::unordered_map<unsigned int,std::variant<LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook>>::const_iterator *)(v4 + 48) = std::unordered_map<unsigned int,std::variant<LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook>>::find(proud_cook_config_map, proud_skill_id);
      __for_end._M_current = (unsigned int *)std::unordered_map<unsigned int,std::variant<LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook>>::end(proud_cook_config_map)._M_cur;
      if ( !std::__detail::operator==<std::pair<unsigned int const,std::variant<LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook>>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::variant<LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook> >,false> *)(v4 + 48),
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::variant<LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook> >,false> *)&__for_end) )
      {
        v15 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::variant<LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::variant<LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook> >,false,false> *const)(v4 + 48));
        config_ptr = std::get_if<LifeEffectCookWidenJudgeArea,LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook>(&v15->second);
        if ( config_ptr )
        {
          if ( *(_BYTE *)(((unsigned __int64)&config_ptr->effect_target_type >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&config_ptr->effect_target_type >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&config_ptr->effect_target_type);
          }
          if ( (config_ptr->effect_target_type == EFFECT_TARGET_TEAM
             || common::tools::MiscUtils::isContains<std::set<unsigned long> const,unsigned long>(
                  avatar_guid_set,
                  (const unsigned __int64 *)(v4 + 80)))
            && (std::set<data::CookFoodType>::empty(&config_ptr->cook_food_type_set)
             || common::tools::MiscUtils::isContains<std::set<data::CookFoodType> const,data::CookFoodType>(
                  &config_ptr->cook_food_type_set,
                  &recipe_config->food_type))
            && (std::set<data::CookMethodType>::empty(&config_ptr->cook_method_type_set)
             || common::tools::MiscUtils::isContains<std::set<data::CookMethodType> const,data::CookMethodType>(
                  &config_ptr->cook_method_type_set,
                  &recipe_config->cook_method)) )
          {
            if ( *(_BYTE *)(((unsigned __int64)proud_skill_id >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)proud_skill_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)proud_skill_id >> 3)
                                                                               + 0x7FFF8000) )
            {
              __asan_report_load4(proud_skill_id);
            }
            if ( PlayerCookComp::onPlayerCookArgsReq(proto::PlayerCookArgsReq const&,proto::PlayerCookArgsRsp &)::{lambda(unsigned int,LifeEffectCookWidenJudgeArea const&)#1}::operator()(
                   (const PlayerCookComp::onPlayerCookArgsReq::<lambda(uint32_t, const LifeEffectCookWidenJudgeArea&)> *const)(v4 + 112),
                   *proud_skill_id,
                   config_ptr) )
            {
              break;
            }
          }
        }
      }
      std::_Rb_tree_iterator<std::pair<unsigned int const,std::set<unsigned long>>>::operator++(&__for_begin);
    }
    std::shared_ptr<FormalAvatar>::~shared_ptr((std::shared_ptr<FormalAvatar> *const)(v4 + 176));
  }
  std::shared_ptr<SceneTeam>::~shared_ptr((std::shared_ptr<SceneTeam> *const)(v4 + 144));
  std::map<unsigned int,std::set<unsigned long>>::~map((std::map<unsigned int,std::set<long unsigned int>> *const)(v4 + 208));
  if ( v34 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8020) = -168430091;
  }
};

// Line 588: range 00000000175FA403-00000000175FAC32
// local variable allocation has failed, the output may be wrong!
void __fastcall PlayerCookComp::foreachProudCookConfig<LifeEffectCookWidenJudgeArea,PlayerCookComp::onPlayerCookReq(proto::PlayerCookReq const&,proto::PlayerCookRsp &)::{lambda(unsigned int,LifeEffectCookWidenJudgeArea const&)#2}>(
        Player *player,
        uint64_t assist_avatar_guid,
        const data::CookRecipeExcelConfig *recipe_config,
        PlayerCookComp::onPlayerCookReq::<lambda(uint32_t, const LifeEffectCookWidenJudgeArea&)> func)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rax
  SceneTeam *v8; // r14
  PlayerAvatarComp *AvatarComp; // rax
  std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  TalentComp *TalentComp; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v12; // rax
  _DWORD *v13; // rdx
  std::set<long unsigned int> *v14; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::variant<LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook> >,false,false>::pointer v15; // rax
  float *max_widen_ratio; // [rsp+0h] [rbp-220h]
  uint32_t *opt_proud_skill_id; // [rsp+8h] [rbp-218h]
  std::map<unsigned int,std::set<long unsigned int>>::iterator __for_begin; // [rsp+30h] [rbp-1F0h] BYREF
  std::map<unsigned int,std::set<long unsigned int>>::iterator __for_end_0; // [rsp+38h] [rbp-1E8h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+40h] [rbp-1E0h] BYREF
  std::vector<unsigned int> *__for_range; // [rsp+48h] [rbp-1D8h]
  const std::unordered_map<unsigned int,std::variant<LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook>> *proud_cook_config_map; // [rsp+50h] [rbp-1D0h]
  std::map<unsigned int,std::set<long unsigned int>> *__for_range_0; // [rsp+58h] [rbp-1C8h]
  const std::pair<unsigned int const,std::set<long unsigned int> > *v28; // [rsp+60h] [rbp-1C0h]
  std::tuple_element<0,const std::pair<unsigned int const,std::set<long unsigned int> > >::type *proud_skill_id; // [rsp+68h] [rbp-1B8h]
  std::tuple_element<1,const std::pair<unsigned int const,std::set<long unsigned int> > >::type *avatar_guid_set; // [rsp+70h] [rbp-1B0h]
  const LifeEffectCookWidenJudgeArea *config_ptr; // [rsp+78h] [rbp-1A8h]
  std::shared_ptr<Config> v32; // [rsp+80h] [rbp-1A0h] BYREF
  std::vector<unsigned int> v33; // [rsp+90h] [rbp-190h] BYREF
  common::milog::MiLogStream v34; // [rsp+B0h] [rbp-170h] BYREF
  char v35[336]; // [rsp+D0h] [rbp-150h] BYREF

  max_widen_ratio = func.__max_widen_ratio;
  opt_proud_skill_id = func.__opt_proud_skill_id;
  v4 = (unsigned __int64)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(288LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "7 32 4 18 proud_skill_id:613 48 8 8 iter:622 80 8 18 assist_avatar_guid 112 16 18 scene_team_ptr"
                        ":594 144 16 21 assist_avatar_ptr:610 176 16 4 func 208 48 19 proud_skill_map:591";
  *(_QWORD *)(v4 + 16) = PlayerCookComp::foreachProudCookConfig<LifeEffectCookWidenJudgeArea,PlayerCookComp::onPlayerCookReq(proto::PlayerCookReq const&,proto::PlayerCookRsp &)::{lambda(unsigned int,LifeEffectCookWidenJudgeArea const&)#2}>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = 61956;
  v6[536862721] = -234881024;
  v6[536862722] = 62194;
  v6[536862722] = -234881024;
  v6[536862723] = 62194;
  v6[536862724] = 62194;
  v6[536862725] = 62194;
  v6[536862726] = 62194;
  v6[536862728] = -202116109;
  *(_QWORD *)(v4 + 80) = assist_avatar_guid;
  *(_QWORD *)(v4 + 176) = max_widen_ratio;
  *(_QWORD *)(v4 + 184) = opt_proud_skill_id;
  std::map<unsigned int,std::set<unsigned long>>::map((std::map<unsigned int,std::set<long unsigned int>> *const)(v4 + 208));
  Player::getAvatarComp(player);
  PlayerAvatarComp::findSceneTeam((PlayerAvatarComp *const)(v4 + 112));
  if ( std::operator==<SceneTeam>(0LL, (const std::shared_ptr<SceneTeam> *)(v4 + 112)) )
  {
    common::milog::MiLogStream::create(
      &v34,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/cook/player_cook_comp.cpp",
      "foreachProudCookConfig",
      597);
    v7 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
           &v34,
           (const char (*)[28])"findSceneTeam fail, player:");
    operator<<(v7, player);
    common::milog::MiLogStream::~MiLogStream(&v34);
  }
  else
  {
    v8 = std::__shared_ptr_access<SceneTeam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneTeam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 112));
    std::function<ForeachPolicy ()(Avatar &)>::function<void PlayerCookComp::foreachProudCookConfig<LifeEffectCookWidenJudgeArea,PlayerCookComp::onPlayerCookReq(proto::PlayerCookReq const&,proto::PlayerCookRsp &)::{lambda(unsigned int,LifeEffectCookWidenJudgeArea const&)#2}>(Player &,unsigned long,data::CookRecipeExcelConfig const&,PlayerCookComp::onPlayerCookReq(proto::PlayerCookReq const&,proto::PlayerCookRsp &)::{lambda(unsigned int,LifeEffectCookWidenJudgeArea const&)#2})::{lambda(Avatar const&)#1},void,void>(
      (std::function<ForeachPolicy(Avatar&)> *const)&v34,
      (PlayerCookComp::foreachProudCookConfig<LifeEffectCookWidenJudgeArea,PlayerCookComp::onPlayerCookReq(const proto::PlayerCookReq&,proto::PlayerCookRsp&)::<lambda(uint32_t,const LifeEffectCookWidenJudgeArea&)> >::<lambda(const Avatar&)>)(v4 + 208));
    SceneTeam::foreachAvatar(v8, (std::function<ForeachPolicy(Avatar&)> *)&v34);
    std::function<ForeachPolicy ()(Avatar &)>::~function((std::function<ForeachPolicy(Avatar&)> *const)&v34);
    AvatarComp = Player::getAvatarComp(player);
    PlayerAvatarComp::findFormalAvatar(
      (const PlayerAvatarComp *const)(v4 + 144),
      (uint64_t)AvatarComp,
      *(_QWORD *)(v4 + 80));
    if ( std::operator!=<FormalAvatar>(0LL, (const std::shared_ptr<FormalAvatar> *)(v4 + 144)) )
    {
      v10 = std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 144));
      TalentComp = Avatar::getTalentComp(v10);
      TalentComp::getProudSkills(&v33, TalentComp);
      __for_range = &v33;
      *(std::vector<unsigned int>::iterator *)(v4 + 48) = std::vector<unsigned int>::begin(&v33);
      __for_end._M_current = std::vector<unsigned int>::end(__for_range)._M_current;
      while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v4 + 48),
                &__for_end) )
      {
        v12 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v4 + 48));
        v13 = v12;
        if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v12);
        }
        *(_DWORD *)(v4 + 32) = *v13;
        v14 = std::map<unsigned int,std::set<unsigned long>>::operator[](
                (std::map<unsigned int,std::set<long unsigned int>> *const)(v4 + 208),
                (const std::map<unsigned int,std::set<long unsigned int>>::key_type *)(v4 + 32));
        std::set<unsigned long>::insert(v14, (const std::set<long unsigned int>::value_type *)(v4 + 80));
        __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v4 + 48));
      }
      std::vector<unsigned int>::~vector(&v33);
    }
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v32);
    proud_cook_config_map = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v32)->design_config.txt_config_mgr.avatar_talent_config_mgr.proud_cook_config_map;
    std::shared_ptr<Config>::~shared_ptr(&v32);
    __for_range_0 = (std::map<unsigned int,std::set<long unsigned int>> *)(v4 + 208);
    __for_begin._M_node = std::map<unsigned int,std::set<unsigned long>>::begin((std::map<unsigned int,std::set<long unsigned int>> *const)(v4 + 208))._M_node;
    __for_end_0._M_node = std::map<unsigned int,std::set<unsigned long>>::end(__for_range_0)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end_0) )
    {
      v28 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::set<unsigned long>>>::operator*(&__for_begin);
      proud_skill_id = std::get<0ul,unsigned int const,std::set<unsigned long>>(v28);
      avatar_guid_set = (std::tuple_element<1,const std::pair<unsigned int const,std::set<long unsigned int> > >::type *)std::get<1ul,unsigned int const,std::set<unsigned long>>(v28);
      *(std::unordered_map<unsigned int,std::variant<LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook>>::const_iterator *)(v4 + 48) = std::unordered_map<unsigned int,std::variant<LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook>>::find(proud_cook_config_map, proud_skill_id);
      __for_end._M_current = (unsigned int *)std::unordered_map<unsigned int,std::variant<LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook>>::end(proud_cook_config_map)._M_cur;
      if ( !std::__detail::operator==<std::pair<unsigned int const,std::variant<LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook>>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::variant<LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook> >,false> *)(v4 + 48),
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::variant<LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook> >,false> *)&__for_end) )
      {
        v15 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::variant<LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::variant<LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook> >,false,false> *const)(v4 + 48));
        config_ptr = std::get_if<LifeEffectCookWidenJudgeArea,LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook>(&v15->second);
        if ( config_ptr )
        {
          if ( *(_BYTE *)(((unsigned __int64)&config_ptr->effect_target_type >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&config_ptr->effect_target_type >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&config_ptr->effect_target_type);
          }
          if ( (config_ptr->effect_target_type == EFFECT_TARGET_TEAM
             || common::tools::MiscUtils::isContains<std::set<unsigned long> const,unsigned long>(
                  avatar_guid_set,
                  (const unsigned __int64 *)(v4 + 80)))
            && (std::set<data::CookFoodType>::empty(&config_ptr->cook_food_type_set)
             || common::tools::MiscUtils::isContains<std::set<data::CookFoodType> const,data::CookFoodType>(
                  &config_ptr->cook_food_type_set,
                  &recipe_config->food_type))
            && (std::set<data::CookMethodType>::empty(&config_ptr->cook_method_type_set)
             || common::tools::MiscUtils::isContains<std::set<data::CookMethodType> const,data::CookMethodType>(
                  &config_ptr->cook_method_type_set,
                  &recipe_config->cook_method)) )
          {
            if ( *(_BYTE *)(((unsigned __int64)proud_skill_id >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)proud_skill_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)proud_skill_id >> 3)
                                                                               + 0x7FFF8000) )
            {
              __asan_report_load4(proud_skill_id);
            }
            if ( PlayerCookComp::onPlayerCookReq(proto::PlayerCookReq const&,proto::PlayerCookRsp &)::{lambda(unsigned int,LifeEffectCookWidenJudgeArea const&)#2}::operator()(
                   (const PlayerCookComp::onPlayerCookReq::<lambda(uint32_t, const LifeEffectCookWidenJudgeArea&)> *const)(v4 + 176),
                   *proud_skill_id,
                   config_ptr) )
            {
              break;
            }
          }
        }
      }
      std::_Rb_tree_iterator<std::pair<unsigned int const,std::set<unsigned long>>>::operator++(&__for_begin);
    }
    std::shared_ptr<FormalAvatar>::~shared_ptr((std::shared_ptr<FormalAvatar> *const)(v4 + 144));
  }
  std::shared_ptr<SceneTeam>::~shared_ptr((std::shared_ptr<SceneTeam> *const)(v4 + 112));
  std::map<unsigned int,std::set<unsigned long>>::~map((std::map<unsigned int,std::set<long unsigned int>> *const)(v4 + 208));
  if ( v35 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8020) = -168430091;
  }
};

// Line 600: range 00000000175FC10C-00000000175FC352
ForeachPolicy __cdecl PlayerCookComp::foreachProudCookConfig<LifeEffectCookAddBonusProb,PlayerCookComp::modifyBonusPercentProudSkill(unsigned int &,data::CookBonusExcelConfig const&,unsigned long,std::vector<unsigned int> &)::{lambda(unsigned int,LifeEffectCookAddBonusProb const&)#1}>(Player &,unsigned long,data::CookRecipeExcelConfig const&,PlayerCookComp::modifyBonusPercentProudSkill(unsigned int &,data::CookBonusExcelConfig const&,unsigned long,std::vector<unsigned int> &)::{lambda(unsigned int,LifeEffectCookAddBonusProb const&)#1})::{lambda(Avatar const&)#1}::operator()(
        const PlayerCookComp::foreachProudCookConfig<LifeEffectCookAddBonusProb,PlayerCookComp::modifyBonusPercentProudSkill(uint32_t&,const data::CookBonusExcelConfig&,uint64_t,std::vector<unsigned int>&) const::<lambda(uint32_t,const LifeEffectCookAddBonusProb&)> >::<lambda(const Avatar&)> *const this,
        const Avatar *avatar)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  TalentComp *TalentComp; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v6; // rax
  _DWORD *v7; // rdx
  std::set<long unsigned int> *v8; // r14
  ForeachPolicy result; // eax
  std::vector<unsigned int>::iterator __for_begin; // [rsp+10h] [rbp-B0h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+18h] [rbp-A8h] BYREF
  std::set<long unsigned int>::value_type __x; // [rsp+20h] [rbp-A0h] BYREF
  std::vector<unsigned int> *__for_range; // [rsp+28h] [rbp-98h]
  std::vector<unsigned int> v14; // [rsp+30h] [rbp-90h] BYREF
  char v15[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 18 proud_skill_id:602";
  *(_QWORD *)(v2 + 16) = PlayerCookComp::foreachProudCookConfig<LifeEffectCookAddBonusProb,PlayerCookComp::modifyBonusPercentProudSkill(unsigned int &,data::CookBonusExcelConfig const&,unsigned long,std::vector<unsigned int> &)::{lambda(unsigned int,LifeEffectCookAddBonusProb const&)#1}>(Player &,unsigned long,data::CookRecipeExcelConfig const&,PlayerCookComp::modifyBonusPercentProudSkill(unsigned int &,data::CookBonusExcelConfig const&,unsigned long,std::vector<unsigned int> &)::{lambda(unsigned int,LifeEffectCookAddBonusProb const&)#1})::{lambda(Avatar const&)#1}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  TalentComp = Avatar::getTalentComp(avatar);
  TalentComp::getProudSkills(&v14, TalentComp);
  __for_range = &v14;
  __for_begin._M_current = std::vector<unsigned int>::begin(&v14)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(&v14)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v6 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
    v7 = v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    *(_DWORD *)(v2 + 32) = *v7;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    v8 = std::map<unsigned int,std::set<unsigned long>>::operator[](
           this->__proud_skill_map,
           (const std::map<unsigned int,std::set<long unsigned int>>::key_type *)(v2 + 32));
    __x = Avatar::getGuid(avatar);
    std::set<unsigned long>::insert(v8, &__x);
    __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  std::vector<unsigned int>::~vector(&v14);
  result = FOREACH_CONTINUE;
  if ( v15 == (char *)v2 )
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

// Line 600: range 00000000175F9764-00000000175F99AA
ForeachPolicy __cdecl PlayerCookComp::foreachProudCookConfig<LifeEffectCookCanNotCook,PlayerCookComp::onPlayerCookReq(proto::PlayerCookReq const&,proto::PlayerCookRsp &)::{lambda(unsigned int,LifeEffectCookCanNotCook const&)#1}>(Player &,unsigned long,data::CookRecipeExcelConfig const&,PlayerCookComp::onPlayerCookReq(proto::PlayerCookReq const&,proto::PlayerCookRsp &)::{lambda(unsigned int,LifeEffectCookCanNotCook const&)#1})::{lambda(Avatar const&)#1}::operator()(
        const PlayerCookComp::foreachProudCookConfig<LifeEffectCookCanNotCook,PlayerCookComp::onPlayerCookReq(const proto::PlayerCookReq&,proto::PlayerCookRsp&)::<lambda(uint32_t,const LifeEffectCookCanNotCook&)> >::<lambda(const Avatar&)> *const this,
        const Avatar *avatar)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  TalentComp *TalentComp; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v6; // rax
  _DWORD *v7; // rdx
  std::set<long unsigned int> *v8; // r14
  ForeachPolicy result; // eax
  std::vector<unsigned int>::iterator __for_begin; // [rsp+10h] [rbp-B0h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+18h] [rbp-A8h] BYREF
  std::set<long unsigned int>::value_type __x; // [rsp+20h] [rbp-A0h] BYREF
  std::vector<unsigned int> *__for_range; // [rsp+28h] [rbp-98h]
  std::vector<unsigned int> v14; // [rsp+30h] [rbp-90h] BYREF
  char v15[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 18 proud_skill_id:602";
  *(_QWORD *)(v2 + 16) = PlayerCookComp::foreachProudCookConfig<LifeEffectCookCanNotCook,PlayerCookComp::onPlayerCookReq(proto::PlayerCookReq const&,proto::PlayerCookRsp &)::{lambda(unsigned int,LifeEffectCookCanNotCook const&)#1}>(Player &,unsigned long,data::CookRecipeExcelConfig const&,PlayerCookComp::onPlayerCookReq(proto::PlayerCookReq const&,proto::PlayerCookRsp &)::{lambda(unsigned int,LifeEffectCookCanNotCook const&)#1})::{lambda(Avatar const&)#1}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  TalentComp = Avatar::getTalentComp(avatar);
  TalentComp::getProudSkills(&v14, TalentComp);
  __for_range = &v14;
  __for_begin._M_current = std::vector<unsigned int>::begin(&v14)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(&v14)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v6 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
    v7 = v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    *(_DWORD *)(v2 + 32) = *v7;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    v8 = std::map<unsigned int,std::set<unsigned long>>::operator[](
           this->__proud_skill_map,
           (const std::map<unsigned int,std::set<long unsigned int>>::key_type *)(v2 + 32));
    __x = Avatar::getGuid(avatar);
    std::set<unsigned long>::insert(v8, &__x);
    __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  std::vector<unsigned int>::~vector(&v14);
  result = FOREACH_CONTINUE;
  if ( v15 == (char *)v2 )
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

// Line 600: range 00000000175FB694-00000000175FB8DA
ForeachPolicy __cdecl PlayerCookComp::foreachProudCookConfig<LifeEffectCookExtraProficiency,PlayerCookComp::getProudSkillExtraProficiency(data::CookRecipeExcelConfig const&,unsigned long,std::vector<unsigned int> &)::{lambda(unsigned int,LifeEffectCookExtraProficiency const&)#1}>(Player &,unsigned long,data::CookRecipeExcelConfig const&,PlayerCookComp::getProudSkillExtraProficiency(data::CookRecipeExcelConfig const&,unsigned long,std::vector<unsigned int> &)::{lambda(unsigned int,LifeEffectCookExtraProficiency const&)#1})::{lambda(Avatar const&)#1}::operator()(
        const PlayerCookComp::foreachProudCookConfig<LifeEffectCookExtraProficiency,PlayerCookComp::getProudSkillExtraProficiency(const data::CookRecipeExcelConfig&,uint64_t,std::vector<unsigned int>&)::<lambda(uint32_t,const LifeEffectCookExtraProficiency&)> >::<lambda(const Avatar&)> *const this,
        const Avatar *avatar)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  TalentComp *TalentComp; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v6; // rax
  _DWORD *v7; // rdx
  std::set<long unsigned int> *v8; // r14
  ForeachPolicy result; // eax
  std::vector<unsigned int>::iterator __for_begin; // [rsp+10h] [rbp-B0h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+18h] [rbp-A8h] BYREF
  std::set<long unsigned int>::value_type __x; // [rsp+20h] [rbp-A0h] BYREF
  std::vector<unsigned int> *__for_range; // [rsp+28h] [rbp-98h]
  std::vector<unsigned int> v14; // [rsp+30h] [rbp-90h] BYREF
  char v15[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 18 proud_skill_id:602";
  *(_QWORD *)(v2 + 16) = PlayerCookComp::foreachProudCookConfig<LifeEffectCookExtraProficiency,PlayerCookComp::getProudSkillExtraProficiency(data::CookRecipeExcelConfig const&,unsigned long,std::vector<unsigned int> &)::{lambda(unsigned int,LifeEffectCookExtraProficiency const&)#1}>(Player &,unsigned long,data::CookRecipeExcelConfig const&,PlayerCookComp::getProudSkillExtraProficiency(data::CookRecipeExcelConfig const&,unsigned long,std::vector<unsigned int> &)::{lambda(unsigned int,LifeEffectCookExtraProficiency const&)#1})::{lambda(Avatar const&)#1}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  TalentComp = Avatar::getTalentComp(avatar);
  TalentComp::getProudSkills(&v14, TalentComp);
  __for_range = &v14;
  __for_begin._M_current = std::vector<unsigned int>::begin(&v14)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(&v14)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v6 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
    v7 = v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    *(_DWORD *)(v2 + 32) = *v7;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    v8 = std::map<unsigned int,std::set<unsigned long>>::operator[](
           this->__proud_skill_map,
           (const std::map<unsigned int,std::set<long unsigned int>>::key_type *)(v2 + 32));
    __x = Avatar::getGuid(avatar);
    std::set<unsigned long>::insert(v8, &__x);
    __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  std::vector<unsigned int>::~vector(&v14);
  result = FOREACH_CONTINUE;
  if ( v15 == (char *)v2 )
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

// Line 600: range 00000000175FCB84-00000000175FCDCA
ForeachPolicy __cdecl PlayerCookComp::foreachProudCookConfig<LifeEffectCookPerfectMultiOutput,PlayerCookComp::extraOutputOnSpecificQuality(unsigned int,unsigned long,std::vector<ItemParam> const&,std::map<unsigned int,unsigned int> &,std::vector&<unsigned int,std::allocator<unsigned int>>,unsigned int)::{lambda(unsigned int,LifeEffectCookPerfectMultiOutput const&)#1}>(Player &,unsigned long,data::CookRecipeExcelConfig const&,PlayerCookComp::extraOutputOnSpecificQuality(unsigned int,unsigned long,std::vector<ItemParam> const&,std::map<unsigned int,unsigned int> &,std::vector&<unsigned int,std::allocator<unsigned int>>,unsigned int)::{lambda(unsigned int,LifeEffectCookPerfectMultiOutput const&)#1})::{lambda(Avatar const&)#1}::operator()(
        const PlayerCookComp::foreachProudCookConfig<LifeEffectCookPerfectMultiOutput,PlayerCookComp::extraOutputOnSpecificQuality(uint32_t,uint64_t,const std::vector<ItemParam>&,std::map<unsigned int,unsigned int>&,std::vector<unsigned int>&,uint32_t) const::<lambda(uint32_t,const LifeEffectCookPerfectMultiOutput&)> >::<lambda(const Avatar&)> *const this,
        const Avatar *avatar)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  TalentComp *TalentComp; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v6; // rax
  _DWORD *v7; // rdx
  std::set<long unsigned int> *v8; // r14
  ForeachPolicy result; // eax
  std::vector<unsigned int>::iterator __for_begin; // [rsp+10h] [rbp-B0h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+18h] [rbp-A8h] BYREF
  std::set<long unsigned int>::value_type __x; // [rsp+20h] [rbp-A0h] BYREF
  std::vector<unsigned int> *__for_range; // [rsp+28h] [rbp-98h]
  std::vector<unsigned int> v14; // [rsp+30h] [rbp-90h] BYREF
  char v15[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 18 proud_skill_id:602";
  *(_QWORD *)(v2 + 16) = PlayerCookComp::foreachProudCookConfig<LifeEffectCookPerfectMultiOutput,PlayerCookComp::extraOutputOnSpecificQuality(unsigned int,unsigned long,std::vector<ItemParam> const&,std::map<unsigned int,unsigned int> &,std::vector&<unsigned int,std::allocator<unsigned int>>,unsigned int)::{lambda(unsigned int,LifeEffectCookPerfectMultiOutput const&)#1}>(Player &,unsigned long,data::CookRecipeExcelConfig const&,PlayerCookComp::extraOutputOnSpecificQuality(unsigned int,unsigned long,std::vector<ItemParam> const&,std::map<unsigned int,unsigned int> &,std::vector&<unsigned int,std::allocator<unsigned int>>,unsigned int)::{lambda(unsigned int,LifeEffectCookPerfectMultiOutput const&)#1})::{lambda(Avatar const&)#1}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  TalentComp = Avatar::getTalentComp(avatar);
  TalentComp::getProudSkills(&v14, TalentComp);
  __for_range = &v14;
  __for_begin._M_current = std::vector<unsigned int>::begin(&v14)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(&v14)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v6 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
    v7 = v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    *(_DWORD *)(v2 + 32) = *v7;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    v8 = std::map<unsigned int,std::set<unsigned long>>::operator[](
           this->__proud_skill_map,
           (const std::map<unsigned int,std::set<long unsigned int>>::key_type *)(v2 + 32));
    __x = Avatar::getGuid(avatar);
    std::set<unsigned long>::insert(v8, &__x);
    __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  std::vector<unsigned int>::~vector(&v14);
  result = FOREACH_CONTINUE;
  if ( v15 == (char *)v2 )
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

// Line 600: range 00000000175FD602-00000000175FD848
ForeachPolicy __cdecl PlayerCookComp::foreachProudCookConfig<LifeEffectCookProbMultiOutput,PlayerCookComp::extraOutputOnSpecificQuality(unsigned int,unsigned long,std::vector<ItemParam> const&,std::map<unsigned int,unsigned int> &,std::vector&<unsigned int,std::allocator<unsigned int>>,unsigned int)::{lambda(unsigned int,LifeEffectCookProbMultiOutput const&)#2}>(Player &,unsigned long,data::CookRecipeExcelConfig const&,PlayerCookComp::extraOutputOnSpecificQuality(unsigned int,unsigned long,std::vector<ItemParam> const&,std::map<unsigned int,unsigned int> &,std::vector&<unsigned int,std::allocator<unsigned int>>,unsigned int)::{lambda(unsigned int,LifeEffectCookProbMultiOutput const&)#2})::{lambda(Avatar const&)#1}::operator()(
        const PlayerCookComp::foreachProudCookConfig<LifeEffectCookProbMultiOutput,PlayerCookComp::extraOutputOnSpecificQuality(uint32_t,uint64_t,const std::vector<ItemParam>&,std::map<unsigned int,unsigned int>&,std::vector<unsigned int>&,uint32_t) const::<lambda(uint32_t,const LifeEffectCookProbMultiOutput&)> >::<lambda(const Avatar&)> *const this,
        const Avatar *avatar)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  TalentComp *TalentComp; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v6; // rax
  _DWORD *v7; // rdx
  std::set<long unsigned int> *v8; // r14
  ForeachPolicy result; // eax
  std::vector<unsigned int>::iterator __for_begin; // [rsp+10h] [rbp-B0h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+18h] [rbp-A8h] BYREF
  std::set<long unsigned int>::value_type __x; // [rsp+20h] [rbp-A0h] BYREF
  std::vector<unsigned int> *__for_range; // [rsp+28h] [rbp-98h]
  std::vector<unsigned int> v14; // [rsp+30h] [rbp-90h] BYREF
  char v15[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 18 proud_skill_id:602";
  *(_QWORD *)(v2 + 16) = PlayerCookComp::foreachProudCookConfig<LifeEffectCookProbMultiOutput,PlayerCookComp::extraOutputOnSpecificQuality(unsigned int,unsigned long,std::vector<ItemParam> const&,std::map<unsigned int,unsigned int> &,std::vector&<unsigned int,std::allocator<unsigned int>>,unsigned int)::{lambda(unsigned int,LifeEffectCookProbMultiOutput const&)#2}>(Player &,unsigned long,data::CookRecipeExcelConfig const&,PlayerCookComp::extraOutputOnSpecificQuality(unsigned int,unsigned long,std::vector<ItemParam> const&,std::map<unsigned int,unsigned int> &,std::vector&<unsigned int,std::allocator<unsigned int>>,unsigned int)::{lambda(unsigned int,LifeEffectCookProbMultiOutput const&)#2})::{lambda(Avatar const&)#1}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  TalentComp = Avatar::getTalentComp(avatar);
  TalentComp::getProudSkills(&v14, TalentComp);
  __for_range = &v14;
  __for_begin._M_current = std::vector<unsigned int>::begin(&v14)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(&v14)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v6 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
    v7 = v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    *(_DWORD *)(v2 + 32) = *v7;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    v8 = std::map<unsigned int,std::set<unsigned long>>::operator[](
           this->__proud_skill_map,
           (const std::map<unsigned int,std::set<long unsigned int>>::key_type *)(v2 + 32));
    __x = Avatar::getGuid(avatar);
    std::set<unsigned long>::insert(v8, &__x);
    __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  std::vector<unsigned int>::~vector(&v14);
  result = FOREACH_CONTINUE;
  if ( v15 == (char *)v2 )
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

// Line 600: range 00000000175FAC34-00000000175FAE7A
ForeachPolicy __cdecl PlayerCookComp::foreachProudCookConfig<LifeEffectCookWidenJudgeArea,PlayerCookComp::onPlayerCookArgsReq(proto::PlayerCookArgsReq const&,proto::PlayerCookArgsRsp &)::{lambda(unsigned int,LifeEffectCookWidenJudgeArea const&)#1}>(Player &,unsigned long,data::CookRecipeExcelConfig const&,PlayerCookComp::onPlayerCookArgsReq(proto::PlayerCookArgsReq const&,proto::PlayerCookArgsRsp &)::{lambda(unsigned int,LifeEffectCookWidenJudgeArea const&)#1})::{lambda(Avatar const&)#1}::operator()(
        const PlayerCookComp::foreachProudCookConfig<LifeEffectCookWidenJudgeArea,PlayerCookComp::onPlayerCookArgsReq(const proto::PlayerCookArgsReq&,proto::PlayerCookArgsRsp&)::<lambda(uint32_t,const LifeEffectCookWidenJudgeArea&)> >::<lambda(const Avatar&)> *const this,
        const Avatar *avatar)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  TalentComp *TalentComp; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v6; // rax
  _DWORD *v7; // rdx
  std::set<long unsigned int> *v8; // r14
  ForeachPolicy result; // eax
  std::vector<unsigned int>::iterator __for_begin; // [rsp+10h] [rbp-B0h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+18h] [rbp-A8h] BYREF
  std::set<long unsigned int>::value_type __x; // [rsp+20h] [rbp-A0h] BYREF
  std::vector<unsigned int> *__for_range; // [rsp+28h] [rbp-98h]
  std::vector<unsigned int> v14; // [rsp+30h] [rbp-90h] BYREF
  char v15[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 18 proud_skill_id:602";
  *(_QWORD *)(v2 + 16) = PlayerCookComp::foreachProudCookConfig<LifeEffectCookWidenJudgeArea,PlayerCookComp::onPlayerCookArgsReq(proto::PlayerCookArgsReq const&,proto::PlayerCookArgsRsp &)::{lambda(unsigned int,LifeEffectCookWidenJudgeArea const&)#1}>(Player &,unsigned long,data::CookRecipeExcelConfig const&,PlayerCookComp::onPlayerCookArgsReq(proto::PlayerCookArgsReq const&,proto::PlayerCookArgsRsp &)::{lambda(unsigned int,LifeEffectCookWidenJudgeArea const&)#1})::{lambda(Avatar const&)#1}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  TalentComp = Avatar::getTalentComp(avatar);
  TalentComp::getProudSkills(&v14, TalentComp);
  __for_range = &v14;
  __for_begin._M_current = std::vector<unsigned int>::begin(&v14)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(&v14)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v6 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
    v7 = v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    *(_DWORD *)(v2 + 32) = *v7;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    v8 = std::map<unsigned int,std::set<unsigned long>>::operator[](
           this->__proud_skill_map,
           (const std::map<unsigned int,std::set<long unsigned int>>::key_type *)(v2 + 32));
    __x = Avatar::getGuid(avatar);
    std::set<unsigned long>::insert(v8, &__x);
    __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  std::vector<unsigned int>::~vector(&v14);
  result = FOREACH_CONTINUE;
  if ( v15 == (char *)v2 )
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

// Line 600: range 00000000175FA1BC-00000000175FA402
ForeachPolicy __cdecl PlayerCookComp::foreachProudCookConfig<LifeEffectCookWidenJudgeArea,PlayerCookComp::onPlayerCookReq(proto::PlayerCookReq const&,proto::PlayerCookRsp &)::{lambda(unsigned int,LifeEffectCookWidenJudgeArea const&)#2}>(Player &,unsigned long,data::CookRecipeExcelConfig const&,PlayerCookComp::onPlayerCookReq(proto::PlayerCookReq const&,proto::PlayerCookRsp &)::{lambda(unsigned int,LifeEffectCookWidenJudgeArea const&)#2})::{lambda(Avatar const&)#1}::operator()(
        const PlayerCookComp::foreachProudCookConfig<LifeEffectCookWidenJudgeArea,PlayerCookComp::onPlayerCookReq(const proto::PlayerCookReq&,proto::PlayerCookRsp&)::<lambda(uint32_t,const LifeEffectCookWidenJudgeArea&)> >::<lambda(const Avatar&)> *const this,
        const Avatar *avatar)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  TalentComp *TalentComp; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v6; // rax
  _DWORD *v7; // rdx
  std::set<long unsigned int> *v8; // r14
  ForeachPolicy result; // eax
  std::vector<unsigned int>::iterator __for_begin; // [rsp+10h] [rbp-B0h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+18h] [rbp-A8h] BYREF
  std::set<long unsigned int>::value_type __x; // [rsp+20h] [rbp-A0h] BYREF
  std::vector<unsigned int> *__for_range; // [rsp+28h] [rbp-98h]
  std::vector<unsigned int> v14; // [rsp+30h] [rbp-90h] BYREF
  char v15[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 18 proud_skill_id:602";
  *(_QWORD *)(v2 + 16) = PlayerCookComp::foreachProudCookConfig<LifeEffectCookWidenJudgeArea,PlayerCookComp::onPlayerCookReq(proto::PlayerCookReq const&,proto::PlayerCookRsp &)::{lambda(unsigned int,LifeEffectCookWidenJudgeArea const&)#2}>(Player &,unsigned long,data::CookRecipeExcelConfig const&,PlayerCookComp::onPlayerCookReq(proto::PlayerCookReq const&,proto::PlayerCookRsp &)::{lambda(unsigned int,LifeEffectCookWidenJudgeArea const&)#2})::{lambda(Avatar const&)#1}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  TalentComp = Avatar::getTalentComp(avatar);
  TalentComp::getProudSkills(&v14, TalentComp);
  __for_range = &v14;
  __for_begin._M_current = std::vector<unsigned int>::begin(&v14)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(&v14)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v6 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
    v7 = v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    *(_DWORD *)(v2 + 32) = *v7;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    v8 = std::map<unsigned int,std::set<unsigned long>>::operator[](
           this->__proud_skill_map,
           (const std::map<unsigned int,std::set<long unsigned int>>::key_type *)(v2 + 32));
    __x = Avatar::getGuid(avatar);
    std::set<unsigned long>::insert(v8, &__x);
    __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  std::vector<unsigned int>::~vector(&v14);
  result = FOREACH_CONTINUE;
  if ( v15 == (char *)v2 )
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

// Line 654: range 00000000175E2746-00000000175E29FE
int32_t __cdecl PlayerCookComp::onPlayerCookArgsReq(
        PlayerCookComp *const this,
        const proto::PlayerCookArgsReq *req,
        proto::PlayerCookArgsRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  uint32_t AvatarComp; // r14d
  int32_t v7; // r14d
  CookExcelConfigMgr *p_cook_config_mgr; // r14
  uint32_t v9; // eax
  std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  uint64_t Guid; // rsi
  int32_t result; // eax
  const data::CookRecipeExcelConfig *recipe_config_ptr; // [rsp+28h] [rbp-A8h]
  std::shared_ptr<Config> v15; // [rsp+30h] [rbp-A0h] BYREF
  char v16[144]; // [rsp+40h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 19 max_widen_ratio:667 64 16 21 assist_avatar_ptr:655";
  *(_QWORD *)(v3 + 16) = PlayerCookComp::onPlayerCookArgsReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  AvatarComp = (unsigned int)Player::getAvatarComp(this->player_);
  proto::PlayerCookArgsReq::assist_avatar(req);
  PlayerAvatarComp::findFormalAvatarByAvatarId((const PlayerAvatarComp *const)(v3 + 64), AvatarComp);
  if ( std::operator==<FormalAvatar>(0LL, (const std::shared_ptr<FormalAvatar> *)(v3 + 64)) )
  {
    v7 = 104;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v15);
    p_cook_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v15)->design_config.txt_config_mgr.cook_config_mgr;
    v9 = proto::PlayerCookArgsReq::recipe_id(req);
    recipe_config_ptr = data::CookExcelConfigMgrBase::findCookRecipeExcelConfig(p_cook_config_mgr, v9);
    std::shared_ptr<Config>::~shared_ptr(&v15);
    if ( recipe_config_ptr )
    {
      *(_DWORD *)(v3 + 48) = 0;
      v10 = std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      Guid = Avatar::getGuid(v10);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      PlayerCookComp::foreachProudCookConfig<LifeEffectCookWidenJudgeArea,PlayerCookComp::onPlayerCookArgsReq(proto::PlayerCookArgsReq const&,proto::PlayerCookArgsRsp &)::{lambda(unsigned int,LifeEffectCookWidenJudgeArea const&)#1}>(
        this->player_,
        Guid,
        recipe_config_ptr,
        (PlayerCookComp::onPlayerCookArgsReq::<lambda(uint32_t, const LifeEffectCookWidenJudgeArea&)>)(v3 + 48));
      proto::PlayerCookArgsRsp::set_qte_range_ratio(rsp_0, *(float *)(v3 + 48));
      v7 = 0;
    }
    else
    {
      v7 = 611;
    }
  }
  std::shared_ptr<FormalAvatar>::~shared_ptr((std::shared_ptr<FormalAvatar> *const)(v3 + 64));
  result = v7;
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
  return result;
};

// Line 668: range 00000000175E264E-00000000175E2744
ForeachPolicy __cdecl PlayerCookComp::onPlayerCookArgsReq(proto::PlayerCookArgsReq const&,proto::PlayerCookArgsRsp &)::{lambda(unsigned int,LifeEffectCookWidenJudgeArea const&)#1}::operator()(
        const PlayerCookComp::onPlayerCookArgsReq::<lambda(uint32_t, const LifeEffectCookWidenJudgeArea&)> *const __closure,
        uint32_t proud_skill_id,
        const LifeEffectCookWidenJudgeArea *config)
{
  const float *v3; // rdx
  float *max_widen_ratio; // rcx
  __int64 v5; // rsi
  int v6; // xmm0_4
  char v7; // dl
  __int64 v8; // rdx

  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  v3 = std::max<float>(__closure->__max_widen_ratio, &config->widen_ratio);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  max_widen_ratio = __closure->__max_widen_ratio;
  v5 = (*(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)(((unsigned __int8)v3 & 7)
                                                                                            + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_load4(v3);
  v6 = *(_DWORD *)v3;
  v7 = *(_BYTE *)(((unsigned __int64)max_widen_ratio >> 3) + 0x7FFF8000);
  LOBYTE(v5) = v7 != 0;
  v8 = (v7 != 0) & (unsigned __int8)((char)(((unsigned __int8)max_widen_ratio & 7) + 3) >= v7);
  if ( (_BYTE)v8 )
    __asan_report_store4(max_widen_ratio, v5, v8);
  *(_DWORD *)max_widen_ratio = v6;
  return 0;
};

// Line 680: range 00000000175E2B6C-00000000175E2D0B
uint32_t __cdecl PlayerCookComp::getProudSkillExtraProficiency(
        PlayerCookComp *const this,
        const data::CookRecipeExcelConfig *recipe_config,
        uint64_t assist_avatar_guid,
        std::vector<unsigned int> *proud_skill_id_vec)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r12
  uint32_t result; // eax
  char v10[144]; // [rsp+30h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 25 max_extra_proficiency:681 64 4 22 opt_proud_skill_id:682";
  *(_QWORD *)(v4 + 16) = PlayerCookComp::getProudSkillExtraProficiency;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202116348;
  *(_DWORD *)(v4 + 48) = 0;
  *(_DWORD *)(v4 + 64) = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  PlayerCookComp::foreachProudCookConfig<LifeEffectCookExtraProficiency,PlayerCookComp::getProudSkillExtraProficiency(data::CookRecipeExcelConfig const&,unsigned long,std::vector<unsigned int> &)::{lambda(unsigned int,LifeEffectCookExtraProficiency const&)#1}>(
    this->player_,
    assist_avatar_guid,
    recipe_config,
    (PlayerCookComp::getProudSkillExtraProficiency::<lambda(uint32_t, const LifeEffectCookExtraProficiency&)>)__PAIR128__(v4 + 64, v4 + 48));
  if ( *(_DWORD *)(v4 + 64) )
    std::vector<unsigned int>::push_back(proud_skill_id_vec, (const std::vector<unsigned int>::value_type *)(v4 + 64));
  result = *(_DWORD *)(v4 + 48);
  if ( v10 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 683: range 00000000175E2A00-00000000175E2B6A
ForeachPolicy __cdecl PlayerCookComp::getProudSkillExtraProficiency(data::CookRecipeExcelConfig const&,unsigned long,std::vector<unsigned int> &)::{lambda(unsigned int,LifeEffectCookExtraProficiency const&)#1}::operator()(
        const PlayerCookComp::getProudSkillExtraProficiency::<lambda(uint32_t, const LifeEffectCookExtraProficiency&)> *const __closure,
        uint32_t proud_skill_id,
        const LifeEffectCookExtraProficiency *config)
{
  uint32_t extra_proficiency; // esi
  uint32_t *max_extra_proficiency; // rdx
  uint32_t *v5; // rdx
  __int64 v6; // rsi
  uint32_t *opt_proud_skill_id; // rdx
  char v8; // cl

  if ( *(_BYTE *)(((unsigned __int64)config >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)config >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(config);
  }
  extra_proficiency = config->extra_proficiency;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  max_extra_proficiency = __closure->__max_extra_proficiency;
  if ( *(_BYTE *)(((unsigned __int64)__closure->__max_extra_proficiency >> 3) + 0x7FFF8000) != 0
    && (char)(((__int64)__closure->__max_extra_proficiency & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__closure->__max_extra_proficiency >> 3)
                                                                                 + 0x7FFF8000) )
  {
    __asan_report_load4(__closure->__max_extra_proficiency);
  }
  if ( extra_proficiency > *max_extra_proficiency )
  {
    v5 = __closure->__max_extra_proficiency;
    v6 = config->extra_proficiency;
    if ( *(_BYTE *)(((unsigned __int64)__closure->__max_extra_proficiency >> 3) + 0x7FFF8000) != 0
      && (char)(((__int64)__closure->__max_extra_proficiency & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__closure->__max_extra_proficiency >> 3)
                                                                                   + 0x7FFF8000) )
    {
      __asan_report_store4(__closure->__max_extra_proficiency, v6, v5);
    }
    *v5 = v6;
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__opt_proud_skill_id >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__closure->__opt_proud_skill_id);
    opt_proud_skill_id = __closure->__opt_proud_skill_id;
    v8 = *(_BYTE *)(((unsigned __int64)opt_proud_skill_id >> 3) + 0x7FFF8000);
    if ( v8 != 0 && (char)(((unsigned __int8)opt_proud_skill_id & 7) + 3) >= v8 )
    {
      LOBYTE(v6) = v8 != 0;
      __asan_report_store4(__closure->__opt_proud_skill_id, v6, opt_proud_skill_id);
    }
    *opt_proud_skill_id = proud_skill_id;
  }
  return 0;
};

// Line 701: range 00000000175E2E7C-00000000175E3267
void __cdecl PlayerCookComp::modifyBonusPercentProudSkill(
        const PlayerCookComp *const this,
        uint32_t *bonus_percent,
        const data::CookBonusExcelConfig *bonus_config,
        uint64_t assist_avatar_guid,
        std::vector<unsigned int> *proud_skill_id_vec)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  _DWORD *v7; // r12
  CookExcelConfigMgr *p_cook_config_mgr; // rcx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rcx
  const data::CookRecipeExcelConfig *recipe_config_ptr; // [rsp+38h] [rbp-C8h]
  std::shared_ptr<Config> v16; // [rsp+40h] [rbp-C0h] BYREF
  common::milog::MiLogStream v17; // [rsp+50h] [rbp-B0h] BYREF
  char v18[144]; // [rsp+70h] [rbp-90h] BYREF

  v5 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 48 4 25 max_add_bonus_percent:708 64 4 22 opt_proud_skill_id:709";
  *(_QWORD *)(v5 + 16) = PlayerCookComp::modifyBonusPercentProudSkill;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -202116348;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v16);
  p_cook_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v16)->design_config.txt_config_mgr.cook_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&bonus_config->recipe_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)bonus_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&bonus_config->recipe_id >> 3)
                                                                + 0x7FFF8000) )
  {
    __asan_report_load4(&bonus_config->recipe_id);
  }
  recipe_config_ptr = data::CookExcelConfigMgrBase::findCookRecipeExcelConfig(
                        p_cook_config_mgr,
                        bonus_config->recipe_id);
  std::shared_ptr<Config>::~shared_ptr(&v16);
  if ( recipe_config_ptr )
  {
    *(_DWORD *)(v5 + 48) = 0;
    *(_DWORD *)(v5 + 64) = 0;
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    PlayerCookComp::foreachProudCookConfig<LifeEffectCookAddBonusProb,PlayerCookComp::modifyBonusPercentProudSkill(unsigned int &,data::CookBonusExcelConfig const&,unsigned long,std::vector<unsigned int> &)::{lambda(unsigned int,LifeEffectCookAddBonusProb const&)#1}>(
      this->player_,
      assist_avatar_guid,
      recipe_config_ptr,
      (PlayerCookComp::modifyBonusPercentProudSkill::<lambda(uint32_t, const LifeEffectCookAddBonusProb&)>)__PAIR128__(v5 + 64, v5 + 48));
    if ( *(_DWORD *)(v5 + 64) )
      std::vector<unsigned int>::push_back(proud_skill_id_vec, (const std::vector<unsigned int>::value_type *)(v5 + 64));
    if ( *(_BYTE *)(((unsigned __int64)bonus_percent >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)bonus_percent & 7) + 3) >= *(_BYTE *)(((unsigned __int64)bonus_percent >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4(bonus_percent);
    }
    *bonus_percent = (int)(float)((float)((float)(*(float *)(v5 + 48) + 1.0) * (float)(int)*bonus_percent) + 0.5);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/cook/player_cook_comp.cpp",
      "modifyBonusPercentProudSkill",
      705);
    v9 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
           &v17,
           (const char (*)[43])"findCookRecipeExcelConfig fail, recipe_id:");
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &bonus_config->recipe_id);
    v11 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v10, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    operator<<(v11, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v17);
  }
  if ( v18 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 710: range 00000000175E2D0C-00000000175E2E7B
// local variable allocation has failed, the output may be wrong!
ForeachPolicy __cdecl PlayerCookComp::modifyBonusPercentProudSkill(unsigned int &,data::CookBonusExcelConfig const&,unsigned long,std::vector<unsigned int> &)const::{lambda(unsigned int,LifeEffectCookAddBonusProb const&)#1}::operator()(
        const PlayerCookComp::modifyBonusPercentProudSkill::<lambda(uint32_t, const LifeEffectCookAddBonusProb&)> *const __closure,
        uint32_t proud_skill_id,
        const LifeEffectCookAddBonusProb *config)
{
  double v3; // xmm0_8
  float *max_add_bonus_percent; // rdx
  float *v5; // rdx
  float add_bonus_prob; // xmm0_4
  char v7; // cl
  uint32_t *opt_proud_skill_id; // rdx
  char v9; // cl
  uint32_t proud_skill_ida; // [rsp+14h] [rbp-Ch]

  proud_skill_ida = proud_skill_id;
  if ( *(_BYTE *)(((unsigned __int64)config >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)config >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(config);
  }
  *(float *)&v3 = config->add_bonus_prob;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    v3 = __asan_report_load8(__closure);
  max_add_bonus_percent = __closure->__max_add_bonus_percent;
  if ( *(_BYTE *)(((unsigned __int64)__closure->__max_add_bonus_percent >> 3) + 0x7FFF8000) != 0
    && (char)(((__int64)__closure->__max_add_bonus_percent & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__closure->__max_add_bonus_percent >> 3)
                                                                                 + 0x7FFF8000) )
  {
    __asan_report_load4(__closure->__max_add_bonus_percent);
  }
  if ( *(float *)&v3 > *max_add_bonus_percent )
  {
    v5 = __closure->__max_add_bonus_percent;
    add_bonus_prob = config->add_bonus_prob;
    v7 = *(_BYTE *)(((unsigned __int64)__closure->__max_add_bonus_percent >> 3) + 0x7FFF8000);
    if ( v7 != 0 && (char)(((__int64)__closure->__max_add_bonus_percent & 7) + 3) >= v7 )
    {
      LOBYTE(proud_skill_id) = v7 != 0;
      __asan_report_store4(__closure->__max_add_bonus_percent, *(_QWORD *)&proud_skill_id, v5);
    }
    *v5 = add_bonus_prob;
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__opt_proud_skill_id >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__closure->__opt_proud_skill_id);
    opt_proud_skill_id = __closure->__opt_proud_skill_id;
    v9 = *(_BYTE *)(((unsigned __int64)opt_proud_skill_id >> 3) + 0x7FFF8000);
    if ( v9 != 0 && (char)(((unsigned __int8)opt_proud_skill_id & 7) + 3) >= v9 )
    {
      LOBYTE(proud_skill_id) = v9 != 0;
      __asan_report_store4(__closure->__opt_proud_skill_id, *(_QWORD *)&proud_skill_id, opt_proud_skill_id);
    }
    *opt_proud_skill_id = proud_skill_ida;
  }
  return 0;
};

// Line 732: range 00000000175E4450-00000000175E4827
void __fastcall PlayerCookComp::extraOutputOnSpecificQuality(
        const PlayerCookComp *const this,
        uint32_t recipe_id,
        uint64_t assist_avatar_guid,
        const std::vector<ItemParam> *output_item_param_vec,
        std::map<unsigned int,unsigned int> *extral_output_item_map,
        std::vector<unsigned int> *proud_skill_id_vec,
        uint32_t qte_quality)
{
  unsigned __int64 v7; // r12
  __int64 v8; // rax
  _DWORD *v9; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rcx
  const data::CookRecipeExcelConfig *v14; // rdx
  const data::CookRecipeExcelConfig *v15; // rdx
  std::shared_ptr<Config> v20; // [rsp+30h] [rbp-110h] BYREF
  PlayerCookComp::extraOutputOnSpecificQuality::<lambda(uint32_t, const LifeEffectCookPerfectMultiOutput&)> func; // [rsp+40h] [rbp-100h]
  common::milog::MiLogStream v22; // [rsp+60h] [rbp-E0h] BYREF
  PlayerCookComp::extraOutputOnSpecificQuality::<lambda(uint32_t, const LifeEffectCookProbMultiOutput&)> v23; // [rsp+80h] [rbp-C0h]
  char v24[128]; // [rsp+C0h] [rbp-80h] BYREF

  v7 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_1(96LL);
    if ( v8 )
      v7 = v8;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "3 32 4 13 recipe_id:727 48 4 15 qte_quality:731 64 8 21 recipe_config_ptr:733";
  *(_QWORD *)(v7 + 16) = PlayerCookComp::extraOutputOnSpecificQuality;
  v9 = (_DWORD *)(v7 >> 3);
  v9[536862720] = -235802127;
  v9[536862721] = -234556924;
  v9[536862722] = -202116352;
  *(_DWORD *)(v7 + 32) = recipe_id;
  *(_DWORD *)(v7 + 48) = qte_quality;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v20);
  v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v20);
  *(_QWORD *)(v7 + 64) = data::CookExcelConfigMgrBase::findCookRecipeExcelConfig(
                           &v10->design_config.txt_config_mgr.cook_config_mgr,
                           *(_DWORD *)(v7 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v20);
  if ( *(_QWORD *)(v7 + 64) )
  {
    if ( *(_DWORD *)(v7 + 48) == 3 )
    {
      func.__output_item_param_vec = output_item_param_vec;
      func.__extral_output_item_map = extral_output_item_map;
      func.__proud_skill_id_vec = proud_skill_id_vec;
      v14 = *(const data::CookRecipeExcelConfig **)(v7 + 64);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      PlayerCookComp::foreachProudCookConfig<LifeEffectCookPerfectMultiOutput,PlayerCookComp::extraOutputOnSpecificQuality(unsigned int,unsigned long,std::vector<ItemParam> const&,std::map<unsigned int,unsigned int> &,std::vector&<unsigned int,std::allocator<unsigned int>>,unsigned int)::{lambda(unsigned int,LifeEffectCookPerfectMultiOutput const&)#1}>(
        this->player_,
        assist_avatar_guid,
        v14,
        func);
    }
    v23.__qte_quality = (uint32_t *)(v7 + 48);
    v23.__recipe_config_ptr = (const data::CookRecipeExcelConfig **)(v7 + 64);
    v23.__this = this;
    v23.__recipe_id = (uint32_t *)(v7 + 32);
    v23.__output_item_param_vec = output_item_param_vec;
    v23.__extral_output_item_map = extral_output_item_map;
    v23.__proud_skill_id_vec = proud_skill_id_vec;
    v15 = *(const data::CookRecipeExcelConfig **)(v7 + 64);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    PlayerCookComp::foreachProudCookConfig<LifeEffectCookProbMultiOutput,PlayerCookComp::extraOutputOnSpecificQuality(unsigned int,unsigned long,std::vector<ItemParam> const&,std::map<unsigned int,unsigned int> &,std::vector&<unsigned int,std::allocator<unsigned int>>,unsigned int)::{lambda(unsigned int,LifeEffectCookProbMultiOutput const&)#2}>(
      this->player_,
      assist_avatar_guid,
      v15,
      v23);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/cook/player_cook_comp.cpp",
      "extraOutputOnSpecificQuality",
      736);
    v11 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
            &v22,
            (const char (*)[43])"findCookRecipeExcelConfig fail, recipe_id:");
    v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v7 + 32));
    v13 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v12, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    operator<<(v13, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v22);
  }
  if ( v24 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 742: range 00000000175E3268-00000000175E36FE
__int64 __fastcall PlayerCookComp::extraOutputOnSpecificQuality(unsigned int,unsigned long,std::vector<ItemParam> const&,std::map<unsigned int,unsigned int> &,std::vector&<unsigned int,std::allocator<unsigned int>>,unsigned int)const::{lambda(unsigned int,LifeEffectCookPerfectMultiOutput const&)#1}::operator()(
        unsigned __int64 __closure,
        uint32_t proud_skill_id,
        unsigned __int64 config)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  double v6; // xmm0_8
  std::mersenne_twister_engine<long unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253> *RandGenerator; // rax
  float v8; // xmm0_4
  std::map<unsigned int,unsigned int>::mapped_type *v9; // rax
  unsigned int *v10; // rdx
  SelectType v11; // r14d
  const ItemParam *v12; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v13; // rax
  SelectType *v14; // rdx
  char v15; // cl
  __int64 result; // rax
  unsigned int extra_item_count; // [rsp+2Ch] [rbp-154h]
  std::vector<ItemParam>::const_iterator __for_begin; // [rsp+30h] [rbp-150h] BYREF
  std::vector<ItemParam>::const_iterator __for_end; // [rsp+38h] [rbp-148h] BYREF
  const std::vector<ItemParam> *__for_range; // [rsp+40h] [rbp-140h]
  const ItemParam *item_param; // [rsp+48h] [rbp-138h]
  char v23[304]; // [rsp+50h] [rbp-130h] BYREF

  v3 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 4 18 proud_skill_id:742 48 144 16 distribution:747";
  *(_QWORD *)(v3 + 16) = PlayerCookComp::extraOutputOnSpecificQuality(unsigned int,unsigned long,std::vector<ItemParam> const&,std::map<unsigned int,unsigned int> &,std::vector&<unsigned int,std::allocator<unsigned int>>,unsigned int)const::{lambda(unsigned int,LifeEffectCookPerfectMultiOutput const&)#1}::operator();
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61956;
  v5[536862726] = -202116109;
  v5[536862727] = -202116109;
  *(_DWORD *)(v3 + 32) = proud_skill_id;
  if ( *(_BYTE *)((__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  __for_range = *(const std::vector<ItemParam> **)__closure;
  __for_begin._M_current = std::vector<ItemParam>::begin(__for_range)._M_current;
  __for_end._M_current = std::vector<ItemParam>::end(__for_range)._M_current;
  while ( __gnu_cxx::operator!=<ItemParam const*,std::vector<ItemParam>>(&__for_begin, &__for_end) )
  {
    item_param = __gnu_cxx::__normal_iterator<ItemParam const*,std::vector<ItemParam>>::operator*(&__for_begin);
    if ( *(_BYTE *)((config >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((config >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_load4(config);
    v6 = *(float *)config;
    if ( *(_BYTE *)(((unsigned __int64)&item_param->count >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)item_param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&item_param->count >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&item_param->count);
    }
    std::binomial_distribution<unsigned int>::binomial_distribution(
      (std::binomial_distribution<unsigned int> *const)(v3 + 48),
      item_param->count,
      v6);
    RandGenerator = common::tools::RandomUtils::getRandGenerator();
    v8 = (float)(int)std::binomial_distribution<unsigned int>::operator()<std::mersenne_twister_engine<unsigned long,32ul,624ul,397ul,31ul,2567483615ul,11ul,4294967295ul,7ul,2636928640ul,15ul,4022730752ul,18ul,1812433253ul>>(
                       (std::binomial_distribution<unsigned int> *const)(v3 + 48),
                       RandGenerator);
    if ( *(_BYTE *)(((config + 108) >> 3) + 0x7FFF8000) != 0
      && (char)(((config + 108) & 7) + 3) >= *(_BYTE *)(((config + 108) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(config + 108);
    }
    extra_item_count = (int)(float)(v8 * (float)(*(float *)(config + 108) + 0.00000011920929));
    if ( extra_item_count )
    {
      if ( *(_BYTE *)(((__closure + 8) >> 3) + 0x7FFF8000) )
        __asan_report_load8(__closure + 8);
      v9 = std::map<unsigned int,unsigned int>::operator[](
             *(std::map<unsigned int,unsigned int> *const *)(__closure + 8),
             &item_param->item_id);
      v10 = v9;
      if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v9);
      }
      v11 = SAFE_ADD<unsigned int,unsigned int>(*v10, extra_item_count);
      if ( *(_BYTE *)(((__closure + 8) >> 3) + 0x7FFF8000) )
        __asan_report_load8(__closure + 8);
      v12 = item_param;
      v13 = std::map<unsigned int,unsigned int>::operator[](
              *(std::map<unsigned int,unsigned int> *const *)(__closure + 8),
              &item_param->item_id);
      v14 = v13;
      v15 = *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000);
      if ( v15 != 0 && (char)(((unsigned __int8)v13 & 7) + 3) >= v15 )
      {
        LOBYTE(v12) = v15 != 0;
        __asan_report_store4(v13, v12, v13);
      }
      *v14 = v11;
    }
    __gnu_cxx::__normal_iterator<ItemParam const*,std::vector<ItemParam>>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((__closure + 16) >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure + 16);
  std::vector<unsigned int>::push_back(
    *(std::vector<unsigned int> *const *)(__closure + 16),
    (const std::vector<unsigned int>::value_type *)(v3 + 32));
  result = 0LL;
  if ( v23 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
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

// Line 760: range 00000000175E3700-00000000175E444E
__int64 __fastcall PlayerCookComp::extraOutputOnSpecificQuality(unsigned int,unsigned long,std::vector<ItemParam> const&,std::map<unsigned int,unsigned int> &,std::vector&<unsigned int,std::allocator<unsigned int>>,unsigned int)const::{lambda(unsigned int,LifeEffectCookProbMultiOutput const&)#2}::operator()(
        unsigned __int64 __closure,
        uint32_t proud_skill_id,
        unsigned __int64 config)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  __int64 result; // rax
  unsigned __int64 v7; // rax
  common::milog::MiLogStream *p_player; // rdi
  const PlayerCookComp *v9; // rax
  uint32_t v10; // eax
  std::vector<data::IdCountConfig>::size_type v11; // r14
  unsigned __int64 v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rcx
  common::milog::MiLogStream *v20; // rax
  unsigned __int64 v21; // rax
  std::vector<data::IdCountConfig>::const_reference v22; // rax
  uint32_t *p_count; // rax
  common::milog::MiLogStream *v24; // rcx
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rdi
  const PlayerCookComp *v29; // rax
  std::mersenne_twister_engine<long unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253> *RandGenerator; // rax
  unsigned int v31; // r14d
  std::map<unsigned int,unsigned int>::mapped_type *v32; // rax
  unsigned int *v33; // rdx
  SelectType v34; // r14d
  char *v35; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v36; // rax
  SelectType *v37; // rdx
  char v38; // cl
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // rax
  common::milog::MiLogStream *v50; // rax
  common::milog::MiLogStream *v51; // rax
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // rax
  common::milog::MiLogStream *v55; // rcx
  common::milog::MiLogStream *v56; // rax
  std::vector<ItemParam>::const_iterator __for_begin; // [rsp+20h] [rbp-1D0h] BYREF
  std::vector<ItemParam>::const_iterator __for_end; // [rsp+28h] [rbp-1C8h] BYREF
  const std::vector<ItemParam> *__for_range; // [rsp+30h] [rbp-1C0h]
  const ItemParam *item_param; // [rsp+38h] [rbp-1B8h]
  common::milog::MiLogStream v63; // [rsp+40h] [rbp-1B0h] BYREF
  char v64[400]; // [rsp+60h] [rbp-190h] BYREF

  v3 = (unsigned __int64)v64;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(352LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "7 48 4 7 idx:771 64 4 11 item_id:778 80 4 20 total_cook_count:780 96 4 19 candidate_count:791 11"
                        "2 4 20 extra_item_count:792 128 4 18 proud_skill_id:760 144 144 16 distribution:790";
  *(_QWORD *)(v3 + 16) = PlayerCookComp::extraOutputOnSpecificQuality(unsigned int,unsigned long,std::vector<ItemParam> const&,std::map<unsigned int,unsigned int> &,std::vector&<unsigned int,std::allocator<unsigned int>>,unsigned int)const::{lambda(unsigned int,LifeEffectCookProbMultiOutput const&)#2}::operator();
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862723] = -234556924;
  v5[536862724] = 61956;
  v5[536862729] = -202116109;
  v5[536862730] = -202116109;
  *(_DWORD *)(v3 + 128) = proud_skill_id;
  if ( *(_BYTE *)((__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  if ( !common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(
          (const std::set<unsigned int> *)(config + 112),
          *(const unsigned int **)__closure) )
  {
    result = 0LL;
    goto LABEL_79;
  }
  if ( *(_BYTE *)(((__closure + 8) >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure + 8);
  v7 = *(_QWORD *)(__closure + 8);
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
    __asan_report_load8(*(_QWORD *)(__closure + 8));
  if ( !*(_QWORD *)v7 )
  {
    common::milog::MiLogStream::create(
      &v63,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/cook/player_cook_comp.cpp",
      "operator()",
      768);
    p_player = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                 &v63,
                 (const char (*)[35])"recipe_config_ptr is null, player:");
    if ( *(_BYTE *)(((__closure + 16) >> 3) + 0x7FFF8000) )
    {
      p_player = (common::milog::MiLogStream *)(__closure + 16);
      __asan_report_load8(__closure + 16);
    }
    v9 = *(const PlayerCookComp **)(__closure + 16);
    if ( *(_BYTE *)(((unsigned __int64)&v9->player_ >> 3) + 0x7FFF8000) )
    {
      p_player = (common::milog::MiLogStream *)&v9->player_;
      __asan_report_load8(&v9->player_);
    }
LABEL_17:
    operator<<(p_player, v9->player_);
    common::milog::MiLogStream::~MiLogStream(&v63);
    result = 0LL;
    goto LABEL_79;
  }
  if ( *(_BYTE *)(((config + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((config + 160) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(config + 160);
  if ( *(_DWORD *)(config + 160) )
    v10 = *(_DWORD *)(config + 160) - 1;
  else
    v10 = 0;
  *(_DWORD *)(v3 + 48) = v10;
  v11 = *(unsigned int *)(v3 + 48);
  if ( *(_BYTE *)(((__closure + 8) >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure + 8);
  v12 = *(_QWORD *)(__closure + 8);
  if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
    __asan_report_load8(*(_QWORD *)(__closure + 8));
  if ( v11 >= std::vector<data::IdCountConfig>::size((const std::vector<data::IdCountConfig> *const)(*(_QWORD *)v12 + 32LL)) )
  {
    common::milog::MiLogStream::create(
      &v63,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/cook/player_cook_comp.cpp",
      "operator()",
      774);
    v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v63, (const char (*)[16])"proud_skill_id:");
    v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 128));
    v15 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
            v14,
            (const char (*)[40])" config.extra_cook_output_item_quality:");
    v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
            v15,
            (const unsigned int *)(config + 160));
    v17 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v16, (const char (*)[6])" idx:");
    v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v3 + 48));
    v19 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v18, (const char (*)[12])" recipe_id:");
    if ( *(_BYTE *)(((__closure + 24) >> 3) + 0x7FFF8000) )
      __asan_report_load8(__closure + 24);
    v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
            v19,
            *(const unsigned int **)(__closure + 24));
    p_player = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                 v20,
                 (const char (*)[43])" has no coresspond quality output, player:");
    if ( *(_BYTE *)(((__closure + 16) >> 3) + 0x7FFF8000) )
    {
      p_player = (common::milog::MiLogStream *)(__closure + 16);
      __asan_report_load8(__closure + 16);
    }
    v9 = *(const PlayerCookComp **)(__closure + 16);
    if ( *(_BYTE *)(((unsigned __int64)&v9->player_ >> 3) + 0x7FFF8000) )
    {
      p_player = (common::milog::MiLogStream *)&v9->player_;
      __asan_report_load8(&v9->player_);
    }
    goto LABEL_17;
  }
  if ( *(_BYTE *)(((__closure + 8) >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure + 8);
  v21 = *(_QWORD *)(__closure + 8);
  if ( *(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
    __asan_report_load8(*(_QWORD *)(__closure + 8));
  v22 = std::vector<data::IdCountConfig>::operator[](
          (const std::vector<data::IdCountConfig> *const)(*(_QWORD *)v21 + 32LL),
          *(unsigned int *)(v3 + 48));
  if ( *(_BYTE *)(((unsigned __int64)&v22->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v22->id >> 3) + 0x7FFF8000) <= 3 )
  {
    v22 = (std::vector<data::IdCountConfig>::const_reference)__asan_report_load4(&v22->id);
  }
  *(_DWORD *)(v3 + 64) = v22->id;
  *(_DWORD *)(v3 + 80) = 0;
  if ( *(_BYTE *)(((__closure + 32) >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure + 32);
  __for_range = *(const std::vector<ItemParam> **)(__closure + 32);
  __for_begin._M_current = std::vector<ItemParam>::begin(__for_range)._M_current;
  __for_end._M_current = std::vector<ItemParam>::end(__for_range)._M_current;
  while ( __gnu_cxx::operator!=<ItemParam const*,std::vector<ItemParam>>(&__for_begin, &__for_end) )
  {
    item_param = __gnu_cxx::__normal_iterator<ItemParam const*,std::vector<ItemParam>>::operator*(&__for_begin);
    p_count = &item_param->count;
    if ( *(_BYTE *)(((unsigned __int64)p_count >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_count >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_count);
    }
    *(_DWORD *)(v3 + 80) = SAFE_ADD<unsigned int,unsigned int>(*(_DWORD *)(v3 + 80), item_param->count);
    __gnu_cxx::__normal_iterator<ItemParam const*,std::vector<ItemParam>>::operator++(&__for_begin);
  }
  if ( *(_DWORD *)(v3 + 80) )
  {
    if ( *(_BYTE *)((config >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((config >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_load4(config);
    std::binomial_distribution<unsigned int>::binomial_distribution(
      (std::binomial_distribution<unsigned int> *const)(v3 + 144),
      *(_DWORD *)(v3 + 80),
      *(float *)config);
    RandGenerator = common::tools::RandomUtils::getRandGenerator();
    *(_DWORD *)(v3 + 96) = std::binomial_distribution<unsigned int>::operator()<std::mersenne_twister_engine<unsigned long,32ul,624ul,397ul,31ul,2567483615ul,11ul,4294967295ul,7ul,2636928640ul,15ul,4022730752ul,18ul,1812433253ul>>(
                             (std::binomial_distribution<unsigned int> *const)(v3 + 144),
                             RandGenerator);
    if ( *(_BYTE *)(((config + 108) >> 3) + 0x7FFF8000) != 0
      && (char)(((config + 108) & 7) + 3) >= *(_BYTE *)(((config + 108) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(config + 108);
    }
    *(_DWORD *)(v3 + 112) = SAFE_MULTIPLY<unsigned int,unsigned int>(*(_DWORD *)(v3 + 96), *(_DWORD *)(config + 108));
    if ( *(_DWORD *)(v3 + 112) )
    {
      v31 = *(_DWORD *)(v3 + 112);
      if ( *(_BYTE *)(((__closure + 40) >> 3) + 0x7FFF8000) )
        __asan_report_load8(__closure + 40);
      v32 = std::map<unsigned int,unsigned int>::operator[](
              *(std::map<unsigned int,unsigned int> *const *)(__closure + 40),
              (const std::map<unsigned int,unsigned int>::key_type *)(v3 + 64));
      v33 = v32;
      if ( *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v32 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v32);
      }
      v34 = SAFE_ADD<unsigned int,unsigned int>(*v33, v31);
      if ( *(_BYTE *)(((__closure + 40) >> 3) + 0x7FFF8000) )
        __asan_report_load8(__closure + 40);
      v35 = (char *)(v3 + 64);
      v36 = std::map<unsigned int,unsigned int>::operator[](
              *(std::map<unsigned int,unsigned int> *const *)(__closure + 40),
              (const std::map<unsigned int,unsigned int>::key_type *)(v3 + 64));
      v37 = v36;
      v38 = *(_BYTE *)(((unsigned __int64)v36 >> 3) + 0x7FFF8000);
      if ( v38 != 0 && (char)(((unsigned __int8)v36 & 7) + 3) >= v38 )
      {
        LOBYTE(v35) = v38 != 0;
        __asan_report_store4(v36, v35, v36);
      }
      *v37 = v34;
    }
    if ( *(_BYTE *)(((__closure + 48) >> 3) + 0x7FFF8000) )
      __asan_report_load8(__closure + 48);
    std::vector<unsigned int>::push_back(
      *(std::vector<unsigned int> *const *)(__closure + 48),
      (const std::vector<unsigned int>::value_type *)(v3 + 128));
    common::milog::MiLogStream::create(
      &v63,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/cook/player_cook_comp.cpp",
      "operator()",
      798);
    v39 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v63, (const char (*)[16])"proud_skill_id:");
    v40 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v39, (const unsigned int *)(v3 + 128));
    v41 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
            v40,
            (const char (*)[40])" config.extra_cook_output_item_quality:");
    v42 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
            v41,
            (const unsigned int *)(config + 160));
    v43 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v42, (const char (*)[14])" probability:");
    v44 = common::milog::MiLogStream::operator<<<float,(float *)0>(v43, (const float *)config);
    v45 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v44, (const char (*)[19])" total_cook_count:");
    v46 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v45, (const unsigned int *)(v3 + 80));
    v47 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v46, (const char (*)[18])" candidate_count:");
    v48 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v47, (const unsigned int *)(v3 + 96));
    v49 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v48, (const char (*)[19])" extra_item_count:");
    v50 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v49, (const unsigned int *)(v3 + 112));
    v51 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v50, (const char (*)[10])" item_id:");
    v52 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v51, (const unsigned int *)(v3 + 64));
    v53 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v52, (const char (*)[6])" idx:");
    v54 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v53, (const unsigned int *)(v3 + 48));
    v55 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v54, (const char (*)[12])" recipe_id:");
    if ( *(_BYTE *)(((__closure + 24) >> 3) + 0x7FFF8000) )
      __asan_report_load8(__closure + 24);
    v56 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
            v55,
            *(const unsigned int **)(__closure + 24));
    v28 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
            v56,
            (const char (*)[43])" has no coresspond quality output, player:");
    if ( *(_BYTE *)(((__closure + 16) >> 3) + 0x7FFF8000) )
    {
      v28 = (common::milog::MiLogStream *)(__closure + 16);
      __asan_report_load8(__closure + 16);
    }
    v29 = *(const PlayerCookComp **)(__closure + 16);
    if ( *(_BYTE *)(((unsigned __int64)&v29->player_ >> 3) + 0x7FFF8000) )
    {
      v28 = (common::milog::MiLogStream *)&v29->player_;
      __asan_report_load8(&v29->player_);
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v63,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/cook/player_cook_comp.cpp",
      "operator()",
      787);
    v24 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
            &v63,
            (const char (*)[34])"total_cook_count is 0, recipe_id:");
    if ( *(_BYTE *)(((__closure + 24) >> 3) + 0x7FFF8000) )
      __asan_report_load8(__closure + 24);
    v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
            v24,
            *(const unsigned int **)(__closure + 24));
    v26 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v25, (const char (*)[17])" proud_skill_id:");
    v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, (const unsigned int *)(v3 + 128));
    v28 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v27, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((__closure + 16) >> 3) + 0x7FFF8000) )
    {
      v28 = (common::milog::MiLogStream *)(__closure + 16);
      __asan_report_load8(__closure + 16);
    }
    v29 = *(const PlayerCookComp **)(__closure + 16);
    if ( *(_BYTE *)(((unsigned __int64)&v29->player_ >> 3) + 0x7FFF8000) )
    {
      v28 = (common::milog::MiLogStream *)&v29->player_;
      __asan_report_load8(&v29->player_);
    }
  }
  operator<<(v28, v29->player_);
  common::milog::MiLogStream::~MiLogStream(&v63);
  result = 0LL;
LABEL_79:
  if ( v64 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8024) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8028) = -168430091;
  }
  return result;
};

// Line 807: range 00000000175E4828-00000000175E4AAA
_BOOL8 __fastcall PlayerCookComp::isRecipeUnlocked(PlayerCookComp *const this, uint32_t recipe_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  _BOOL8 result; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,CookRecipeData>,false> __x; // [rsp+18h] [rbp-A8h] BYREF
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,CookRecipeData>,false> __y; // [rsp+20h] [rbp-A0h] BYREF
  const data::CookRecipeExcelConfig *recipe_config_ptr; // [rsp+28h] [rbp-98h]
  std::shared_ptr<Config> v11; // [rsp+30h] [rbp-90h] BYREF
  common::milog::MiLogStream v12; // [rsp+40h] [rbp-80h] BYREF
  char v13[96]; // [rsp+60h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 13 recipe_id:806";
  *(_QWORD *)(v2 + 16) = PlayerCookComp::isRecipeUnlocked;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = recipe_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v11);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v11);
  recipe_config_ptr = data::CookExcelConfigMgrBase::findCookRecipeExcelConfig(
                        &v5->design_config.txt_config_mgr.cook_config_mgr,
                        *(_DWORD *)(v2 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v11);
  if ( recipe_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&recipe_config_ptr->is_default_unlocked >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)recipe_config_ptr + 20) & 7) >= *(_BYTE *)(((unsigned __int64)&recipe_config_ptr->is_default_unlocked >> 3)
                                                                     + 0x7FFF8000) )
    {
      __asan_report_load1(&recipe_config_ptr->is_default_unlocked);
    }
    result = 1;
    if ( !recipe_config_ptr->is_default_unlocked )
    {
      __y._M_cur = std::unordered_map<unsigned int,CookRecipeData>::find(
                     &this->recipe_data_map_,
                     (const std::unordered_map<unsigned int,CookRecipeData>::key_type *)(v2 + 32))._M_cur;
      __x._M_cur = std::unordered_map<unsigned int,CookRecipeData>::end(&this->recipe_data_map_)._M_cur;
      if ( !std::__detail::operator!=<std::pair<unsigned int const,CookRecipeData>,false>(&__x, &__y) )
        result = 0;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/cook/player_cook_comp.cpp",
      "isRecipeUnlocked",
      811);
    v6 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
           &v12,
           (const char (*)[35])"findCookRecipeExcelConfig failed: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v12);
    result = 0LL;
  }
  if ( v13 == (char *)v2 )
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

// Line 819: range 00000000175E4AAC-00000000175E5264
// local variable allocation has failed, the output may be wrong!
__int64 __fastcall PlayerCookComp::unlockRecipe(PlayerCookComp *const this, uint32_t recipe_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  unsigned int v8; // r14d
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // r14
  char *v12; // rsi
  std::unordered_map<unsigned int,CookRecipeData>::mapped_type *v13; // rax
  std::unordered_map<unsigned int,CookRecipeData>::mapped_type *v14; // rdx
  char v15; // cl
  common::milog::MiLogStream *v16; // rax
  PlayerEventComp *EventComp; // r14
  std::__shared_ptr_access<proto::CookRecipeDataNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  std::unordered_map<unsigned int,CookRecipeData>::mapped_type *v19; // rax
  google::protobuf::uint32 *p_proficiency; // rdx
  Player *v21; // r14
  std::__shared_ptr_access<proto_log::PlayerLogBodyUnlockRecipe,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  Player *v23; // r14
  __int64 result; // rax
  std::string v25; // [rsp+0h] [rbp-120h] OVERLAPPED BYREF
  const data::CookRecipeExcelConfig *recipe_config_ptr; // [rsp+20h] [rbp-100h]
  proto::CookRecipeData *recipe_proto; // [rsp+28h] [rbp-F8h]
  std::shared_ptr<UnlockRecipeEvent> __r; // [rsp+30h] [rbp-F0h] BYREF
  std::shared_ptr<google::protobuf::Message> v29; // [rsp+40h] [rbp-E0h] BYREF
  std::string v30; // [rsp+50h] [rbp-D0h] BYREF
  char v31[176]; // [rsp+70h] [rbp-B0h] BYREF

  v25._M_string_length = (std::string::size_type)this;
  HIDWORD(v25._M_dataplus._M_p) = recipe_id;
  v2 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 1 9 holer:820 48 4 13 recipe_id:818 64 16 14 notify_ptr:841 96 16 25 unlock_recipe_log_ptr:847";
  *(_QWORD *)(v2 + 16) = PlayerCookComp::unlockRecipe;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556927;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  *(_DWORD *)(v2 + 48) = HIDWORD(v25._M_dataplus._M_p);
  if ( *(_BYTE *)(((v25._M_string_length + 24) >> 3) + 0x7FFF8000) )
    __asan_report_load8(v25._M_string_length + 24);
  BasicComp = Player::getBasicComp(*(Player *const *)(v25._M_string_length + 24));
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v30, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 32), 0x76Fu, v25);
  std::string::~string(&v30);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v29);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v29);
  recipe_config_ptr = data::CookExcelConfigMgrBase::findCookRecipeExcelConfig(
                        &v6->design_config.txt_config_mgr.cook_config_mgr,
                        *(_DWORD *)(v2 + 48));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v29);
  if ( recipe_config_ptr )
  {
    if ( PlayerCookComp::isRecipeUnlocked((PlayerCookComp *const)v25._M_string_length, *(_DWORD *)(v2 + 48)) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v30,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "./src/player/cook/player_cook_comp.cpp",
        "unlockRecipe",
        832);
      v9 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
             (common::milog::MiLogStream *const)&v30,
             (const char (*)[12])"recipe_id: ");
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 48));
      v11 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
              v10,
              (const char (*)[25])" already unlocked, uid: ");
      if ( *(_BYTE *)(((v25._M_string_length + 24) >> 3) + 0x7FFF8000) )
        __asan_report_load8(v25._M_string_length + 24);
      *((_DWORD *)&v25._anon_0._M_allocated_capacity + 3) = Player::getUid(*(const Player *const *)(v25._M_string_length
                                                                                                  + 24));
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
        v11,
        (const unsigned int *)&v25._anon_0._M_allocated_capacity + 3);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v30);
      v8 = 0;
    }
    else
    {
      v12 = (char *)(v2 + 48);
      v13 = std::unordered_map<unsigned int,CookRecipeData>::operator[](
              (std::unordered_map<unsigned int,CookRecipeData> *const)(v25._M_string_length + 40),
              (const std::unordered_map<unsigned int,CookRecipeData>::key_type *)(v2 + 48));
      v14 = v13;
      v15 = *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000);
      if ( v15 != 0 && (char)(((unsigned __int8)v13 & 7) + 3) >= v15 )
      {
        LOBYTE(v12) = v15 != 0;
        __asan_report_store4(v13, v12, v13);
      }
      v14->proficiency = 0;
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v30,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/cook/player_cook_comp.cpp",
        "unlockRecipe",
        837);
      v16 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
              (common::milog::MiLogStream *const)&v30,
              (const char (*)[19])"unlock recipe_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v30);
      if ( *(_BYTE *)(((v25._M_string_length + 24) >> 3) + 0x7FFF8000) )
        __asan_report_load8(v25._M_string_length + 24);
      EventComp = Player::getEventComp(*(Player *const *)(v25._M_string_length + 24));
      common::tools::perf::make_shared<UnlockRecipeEvent,unsigned int &>(
        (unsigned int *)&__r,
        (unsigned int *)(v2 + 48));
      std::shared_ptr<BaseEvent>::shared_ptr<UnlockRecipeEvent,void>((std::shared_ptr<BaseEvent> *const)&v29, &__r);
      PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&v29);
      std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&v29);
      std::shared_ptr<UnlockRecipeEvent>::~shared_ptr(&__r);
      common::tools::perf::make_shared<proto::CookRecipeDataNotify>();
      v18 = std::__shared_ptr_access<proto::CookRecipeDataNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::CookRecipeDataNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      recipe_proto = proto::CookRecipeDataNotify::mutable_recipe_data(v18);
      proto::CookRecipeData::set_recipe_id(recipe_proto, *(_DWORD *)(v2 + 48));
      v19 = std::unordered_map<unsigned int,CookRecipeData>::operator[](
              (std::unordered_map<unsigned int,CookRecipeData> *const)(v25._M_string_length + 40),
              (const std::unordered_map<unsigned int,CookRecipeData>::key_type *)(v2 + 48));
      p_proficiency = &v19->proficiency;
      if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v19 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v19);
      }
      proto::CookRecipeData::set_proficiency(recipe_proto, *p_proficiency);
      if ( *(_BYTE *)(((v25._M_string_length + 24) >> 3) + 0x7FFF8000) )
        __asan_report_load8(v25._M_string_length + 24);
      v21 = *(Player **)(v25._M_string_length + 24);
      std::dynamic_pointer_cast<google::protobuf::Message const,proto::CookRecipeDataNotify>((const std::shared_ptr<proto::CookRecipeDataNotify> *)&v29);
      Player::sendMessage(v21, (common::minet::ConstMessagePtr *)&v29, 0LL);
      std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&v29);
      common::tools::perf::make_shared<proto_log::PlayerLogBodyUnlockRecipe>();
      v22 = std::__shared_ptr_access<proto_log::PlayerLogBodyUnlockRecipe,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyUnlockRecipe,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      proto_log::PlayerLogBodyUnlockRecipe::set_recipe_id(v22, *(_DWORD *)(v2 + 48));
      if ( *(_BYTE *)(((v25._M_string_length + 24) >> 3) + 0x7FFF8000) )
        __asan_report_load8(v25._M_string_length + 24);
      v23 = *(Player **)(v25._M_string_length + 24);
      std::shared_ptr<google::protobuf::Message>::shared_ptr(&v29, 0LL);
      std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyUnlockRecipe,void>(
        (std::shared_ptr<google::protobuf::Message> *const)&__r,
        (const std::shared_ptr<proto_log::PlayerLogBodyUnlockRecipe> *)(v2 + 96));
      Player::printStatLog(v23, (MessagePtr *)&__r, &v29, 0xEu);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)&__r);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v29);
      v8 = 0;
      std::shared_ptr<proto_log::PlayerLogBodyUnlockRecipe>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyUnlockRecipe> *const)(v2 + 96));
      std::shared_ptr<proto::CookRecipeDataNotify>::~shared_ptr((std::shared_ptr<proto::CookRecipeDataNotify> *const)(v2 + 64));
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v30,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/cook/player_cook_comp.cpp",
      "unlockRecipe",
      825);
    v7 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
           (common::milog::MiLogStream *const)&v30,
           (const char (*)[35])"findCookRecipeExcelConfig failed: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v30);
    v8 = -1;
  }
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 32));
  result = v8;
  if ( v31 == (char *)v2 )
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

// Line 854: range 00000000175E5266-00000000175E53A9
void __fastcall PlayerCookComp::setGradeByGm(PlayerCookComp *const this, uint32_t grade)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  const unsigned int *v5; // rsi
  uint32_t *v6; // rax
  uint32_t *v7; // rdx
  uint32_t v8; // ecx
  char v9; // al
  char v10[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 9 grade:853";
  *(_QWORD *)(v2 + 16) = PlayerCookComp::setGradeByGm;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = grade;
  v5 = &CookExcelConfigMgr::max_grade;
  v6 = (uint32_t *)std::min<unsigned int>((const unsigned int *)(v2 + 32), &CookExcelConfigMgr::max_grade);
  v7 = v6;
  if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v6);
  }
  v8 = *v7;
  v9 = *(_BYTE *)(((unsigned __int64)&this->grade_ >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->grade_, v5, &this->grade_);
  }
  this->grade_ = v8;
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 860: range 00000000175E53AA-00000000175E53CC
void __cdecl PlayerCookComp::unlockRecipeByGm(PlayerCookComp *const this, uint32_t recipe_id)
{
  PlayerCookComp::unlockRecipe(this, recipe_id);
};

// Line 865: range 00000000175E53CE-00000000175E53E0
void __cdecl PlayerCookComp::onPlayerRandomCookReq(
        PlayerCookComp *const this,
        const proto::PlayerRandomCookReq *req,
        proto::PlayerRandomCookRsp *rsp_0)
{
  ;
};

// Line 870: range 00000000176E39EE-00000000176E3D79
int32_t __cdecl PlayerCookComp::fillCompoundDataProto<proto::GetCompoundDataRsp>(
        PlayerCookComp *const this,
        proto::GetCompoundDataRsp *proto)
{
  unsigned int *v2; // rax
  google::protobuf::uint32 *v3; // rdx
  bool *p_is_default_unlocked; // rax
  std::unordered_map<unsigned int,data::CompoundExcelConfig>::const_iterator __for_begin_0; // [rsp+20h] [rbp-80h] BYREF
  std::unordered_map<unsigned int,data::CompoundExcelConfig>::const_iterator __for_end_0; // [rsp+28h] [rbp-78h] BYREF
  std::unordered_set<unsigned int>::iterator __for_begin; // [rsp+30h] [rbp-70h] BYREF
  std::unordered_set<unsigned int>::iterator __for_end; // [rsp+38h] [rbp-68h] BYREF
  std::unordered_set<unsigned int> *__for_range; // [rsp+40h] [rbp-60h]
  const std::unordered_map<unsigned int,data::CompoundExcelConfig> *__for_range_0; // [rsp+48h] [rbp-58h]
  std::unordered_map<unsigned int,std::deque<CompoundOutputData>> *__for_range_1; // [rsp+50h] [rbp-50h]
  const std::pair<unsigned int const,std::deque<CompoundOutputData> > *v14; // [rsp+58h] [rbp-48h]
  std::tuple_element<0,const std::pair<unsigned int const,std::deque<CompoundOutputData> > >::type *compound_id_1; // [rsp+60h] [rbp-40h]
  std::tuple_element<1,const std::pair<unsigned int const,std::deque<CompoundOutputData> > >::type *output_data_que; // [rsp+68h] [rbp-38h]
  proto::CompoundQueueData *que_proto; // [rsp+70h] [rbp-30h]
  const std::pair<unsigned int const,data::CompoundExcelConfig> *v18; // [rsp+78h] [rbp-28h]
  std::tuple_element<0,const std::pair<unsigned int const,data::CompoundExcelConfig> >::type *compound_id_0; // [rsp+80h] [rbp-20h]
  std::tuple_element<1,const std::pair<unsigned int const,data::CompoundExcelConfig> >::type *compound_config; // [rsp+88h] [rbp-18h]
  std::shared_ptr<Config> v21; // [rsp+90h] [rbp-10h] BYREF

  __for_range = &this->unlocked_compound_set_;
  __for_begin._M_cur = std::unordered_set<unsigned int>::begin(&this->unlocked_compound_set_)._M_cur;
  __for_end._M_cur = std::unordered_set<unsigned int>::end(&this->unlocked_compound_set_)._M_cur;
  while ( std::__detail::operator!=<unsigned int,false>(&__for_begin, &__for_end) )
  {
    v2 = (unsigned int *)std::__detail::_Node_iterator<unsigned int,true,false>::operator*(&__for_begin);
    v3 = v2;
    if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v2);
    }
    proto::GetCompoundDataRsp::add_unlock_compound_list(proto, *v3);
    std::__detail::_Node_iterator<unsigned int,true,false>::operator++(&__for_begin);
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v21);
  __for_range_0 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v21)->design_config.txt_config_mgr.compound_config_mgr.compound_excel_config_map;
  std::shared_ptr<Config>::~shared_ptr(&v21);
  __for_begin_0._M_cur = std::unordered_map<unsigned int,data::CompoundExcelConfig>::begin(__for_range_0)._M_cur;
  __for_end_0._M_cur = std::unordered_map<unsigned int,data::CompoundExcelConfig>::end(__for_range_0)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::CompoundExcelConfig>,false>(
            &__for_begin_0,
            &__for_end_0) )
  {
    v18 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::CompoundExcelConfig>,false,false>::operator*(&__for_begin_0);
    compound_id_0 = std::get<0ul,unsigned int const,data::CompoundExcelConfig>(v18);
    compound_config = (std::tuple_element<1,const std::pair<unsigned int const,data::CompoundExcelConfig> >::type *)std::get<1ul,unsigned int const,data::CompoundExcelConfig>(v18);
    p_is_default_unlocked = &compound_config->is_default_unlocked;
    if ( *(_BYTE *)(((unsigned __int64)p_is_default_unlocked >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)p_is_default_unlocked & 7) >= *(_BYTE *)(((unsigned __int64)p_is_default_unlocked >> 3)
                                                                  + 0x7FFF8000) )
    {
      __asan_report_load1(p_is_default_unlocked);
    }
    if ( compound_config->is_default_unlocked )
    {
      __for_end._M_cur = std::unordered_set<unsigned int>::end(&this->unlocked_compound_set_)._M_cur;
      __for_begin._M_cur = std::unordered_set<unsigned int>::find(&this->unlocked_compound_set_, compound_id_0)._M_cur;
      if ( std::__detail::operator==<unsigned int,false>(&__for_begin, &__for_end) )
      {
        if ( *(_BYTE *)(((unsigned __int64)compound_id_0 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)compound_id_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)compound_id_0 >> 3)
                                                                          + 0x7FFF8000) )
        {
          __asan_report_load4(compound_id_0);
        }
        proto::GetCompoundDataRsp::add_unlock_compound_list(proto, *compound_id_0);
      }
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::CompoundExcelConfig>,false,false>::operator++(&__for_begin_0);
  }
  __for_range_1 = &this->compound_output_map_;
  __for_begin._M_cur = (std::__detail::_Node_iterator_base<unsigned int,false>::__node_type *)std::unordered_map<unsigned int,std::deque<CompoundOutputData>>::begin(&this->compound_output_map_)._M_cur;
  __for_end._M_cur = (std::__detail::_Node_iterator_base<unsigned int,false>::__node_type *)std::unordered_map<unsigned int,std::deque<CompoundOutputData>>::end(__for_range_1)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::deque<CompoundOutputData>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::deque<CompoundOutputData> >,false> *)&__for_begin,
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::deque<CompoundOutputData> >,false> *)&__for_end) )
  {
    v14 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::deque<CompoundOutputData>>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::deque<CompoundOutputData> >,false,false> *const)&__for_begin);
    compound_id_1 = std::get<0ul,unsigned int const,std::deque<CompoundOutputData>>(v14);
    output_data_que = (std::tuple_element<1,const std::pair<unsigned int const,std::deque<CompoundOutputData> > >::type *)std::get<1ul,unsigned int const,std::deque<CompoundOutputData>>(v14);
    if ( !std::deque<CompoundOutputData>::empty(output_data_que) )
    {
      que_proto = proto::GetCompoundDataRsp::add_compound_que_data_list(proto);
      if ( *(_BYTE *)(((unsigned __int64)compound_id_1 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)compound_id_1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)compound_id_1 >> 3)
                                                                        + 0x7FFF8000) )
      {
        __asan_report_load4(compound_id_1);
      }
      PlayerCookComp::fillCompoundQueueDataProto(this, *compound_id_1, output_data_que, que_proto);
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::deque<CompoundOutputData>>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,std::deque<CompoundOutputData> >,false,false> *const)&__for_begin);
  }
  return 0;
};

// Line 899: range 00000000175E53E2-00000000175E554A
void __cdecl PlayerCookComp::fillCompoundQueueDataProto(
        PlayerCookComp *const this,
        uint32_t compound_id,
        const std::deque<CompoundOutputData> *output_data_que,
        proto::CompoundQueueData *que_proto)
{
  std::_Deque_iterator<CompoundOutputData,const CompoundOutputData&,const CompoundOutputData*>::reference v4; // rax
  google::protobuf::uint32 v5; // edx
  uint32_t output_count; // [rsp+28h] [rbp-58h]
  uint32_t now; // [rsp+2Ch] [rbp-54h]
  const CompoundOutputData *output_data; // [rsp+38h] [rbp-48h]
  std::deque<CompoundOutputData>::const_iterator __for_begin; // [rsp+40h] [rbp-40h] BYREF
  std::deque<CompoundOutputData>::const_iterator __for_end; // [rsp+60h] [rbp-20h] BYREF

  proto::CompoundQueueData::set_compound_id(que_proto, compound_id);
  now = common::tools::TimeUtils::getNow();
  output_count = 0;
  std::deque<CompoundOutputData>::begin(&__for_begin, output_data_que);
  std::deque<CompoundOutputData>::end(&__for_end, output_data_que);
  while ( std::operator!=<CompoundOutputData,CompoundOutputData const&,CompoundOutputData const*>(
            &__for_begin,
            &__for_end) )
  {
    v4 = std::_Deque_iterator<CompoundOutputData,CompoundOutputData const&,CompoundOutputData const*>::operator*(&__for_begin);
    output_data = v4;
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v4);
    }
    if ( now < output_data->output_time )
    {
      if ( *(_BYTE *)(((unsigned __int64)output_data >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)output_data & 7) + 3) >= *(_BYTE *)(((unsigned __int64)output_data >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(output_data);
      }
      proto::CompoundQueueData::set_output_time(que_proto, output_data->output_time);
      break;
    }
    ++output_count;
    std::_Deque_iterator<CompoundOutputData,CompoundOutputData const&,CompoundOutputData const*>::operator++(&__for_begin);
  }
  proto::CompoundQueueData::set_output_count(que_proto, output_count);
  v5 = std::deque<CompoundOutputData>::size(output_data_que) - output_count;
  proto::CompoundQueueData::set_wait_count(que_proto, v5);
};

// Line 921: range 00000000175E554C-00000000175E72D6
void __cdecl PlayerCookComp::onPlayerCompoundMaterialReq(
        PlayerCookComp *const this,
        const proto::PlayerCompoundMaterialReq *req,
        proto::PlayerCompoundMaterialRsp *rsp_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  unsigned int v17; // ecx
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  Player *Player; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  unsigned int v29; // ecx
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v33; // rax
  bool isMaterialVecEmpty; // r14
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v37; // rax
  std::deque<CompoundOutputData>::size_type v38; // rcx
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // r14
  std::deque<CompoundOutputData>::reference v42; // rax
  const unsigned int *v43; // rax
  _DWORD *v44; // rdx
  PlayerEventComp *EventComp; // r14
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyProcessIngredients,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v49; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyProcessIngredients,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v50; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyProcessIngredients,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v51; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyProcessIngredients,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v52; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyProcessIngredients,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v53; // rax
  Player *v54; // r14
  std::string v55; // [rsp+0h] [rbp-330h]
  proto::PlayerCompoundMaterialRsp *rsp_0a; // [rsp+8h] [rbp-328h]
  const proto::PlayerCompoundMaterialReq *const reqa; // [rsp+10h] [rbp-320h]
  PlayerCookComp *thisa; // [rsp+18h] [rbp-318h]
  uint32_t busy_que_count; // [rsp+24h] [rbp-30Ch]
  unsigned int i; // [rsp+28h] [rbp-308h]
  uint32_t compound_que_count; // [rsp+2Ch] [rbp-304h]
  std::vector<data::IdCountConfig>::iterator __for_begin; // [rsp+30h] [rbp-300h] BYREF
  std::vector<data::IdCountConfig>::iterator __for_end; // [rsp+38h] [rbp-2F8h] BYREF
  const data::CompoundExcelConfig *compound_config_ptr; // [rsp+40h] [rbp-2F0h]
  const std::vector<data::IdCountConfig> *__for_range; // [rsp+48h] [rbp-2E8h]
  PlayerItemComp *item_comp; // [rsp+50h] [rbp-2E0h]
  const std::vector<data::IdCountConfig> *__for_range_0; // [rsp+58h] [rbp-2D8h]
  const data::IdCountConfig *output_item; // [rsp+60h] [rbp-2D0h]
  std::unordered_map<unsigned int,std::deque<CompoundOutputData>> *__for_range_1; // [rsp+68h] [rbp-2C8h]
  std::deque<CompoundOutputData> *output_data_que; // [rsp+70h] [rbp-2C0h]
  proto::CompoundQueueData *que_proto; // [rsp+78h] [rbp-2B8h]
  std::vector<data::IdCountConfig> *__for_range_2; // [rsp+80h] [rbp-2B0h]
  std::vector<data::IdCountConfig> *__for_range_3; // [rsp+88h] [rbp-2A8h]
  const data::IdCountConfig *id_count_config_0; // [rsp+90h] [rbp-2A0h]
  proto_log::ItemLog *item_log_0; // [rsp+98h] [rbp-298h]
  const data::IdCountConfig *id_count_config; // [rsp+A0h] [rbp-290h]
  proto_log::ItemLog *item_log; // [rsp+A8h] [rbp-288h]
  const std::pair<unsigned int const,std::deque<CompoundOutputData> > *v78; // [rsp+B0h] [rbp-280h]
  std::tuple_element<0,const std::pair<unsigned int const,std::deque<CompoundOutputData> > >::type *compound_id; // [rsp+B8h] [rbp-278h]
  std::tuple_element<1,const std::pair<unsigned int const,std::deque<CompoundOutputData> > >::type *output_que; // [rsp+C0h] [rbp-270h]
  const data::IdCountConfig *input_item; // [rsp+C8h] [rbp-268h]
  std::shared_ptr<PlayerCompoundEvent> __r; // [rsp+D0h] [rbp-260h] BYREF
  common::milog::MiLogStream v83; // [rsp+E0h] [rbp-250h] BYREF
  std::string v84; // [rsp+100h] [rbp-230h] BYREF
  char v85[528]; // [rsp+120h] [rbp-210h] BYREF

  *(&v55._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  v55._anon_0._M_allocated_capacity = (std::string::size_type)req;
  v55._M_string_length = (std::string::size_type)rsp_0;
  v3 = (unsigned __int64)v85;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(480LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "13 32 1 10 holder:922 48 4 15 compound_id:923 64 4 9 count:924 80 4 7 ret:971 96 4 21 last_outpu"
                        "t_time:1046 112 4 11 result:1053 128 8 11 reason:1039 160 16 24 ingredients_log_ptr:1073 192 16 "
                        "18 new_input_item:957 224 24 13 input_vec:944 288 24 17 normal_reason:972 352 24 17 random_reaso"
                        "n:973 416 24 14 output_vec:974";
  *(_QWORD *)(v3 + 16) = PlayerCookComp::onPlayerCompoundMaterialReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556927;
  v5[536862722] = -234556924;
  v5[536862723] = -234556924;
  v5[536862724] = -218959360;
  v5[536862725] = -219021312;
  v5[536862726] = -219021312;
  v5[536862727] = -234881024;
  v5[536862728] = -218959118;
  v5[536862729] = -234881024;
  v5[536862730] = -218959118;
  v5[536862731] = -234881024;
  v5[536862732] = -218959118;
  v5[536862733] = -218103808;
  v5[536862734] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  BasicComp = Player::getBasicComp(this->player_);
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v84, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 32), 0x76Eu, v55);
  std::string::~string(&v84);
  *(_DWORD *)(v3 + 48) = proto::PlayerCompoundMaterialReq::compound_id(reqa);
  *(_DWORD *)(v3 + 64) = proto::PlayerCompoundMaterialReq::count(reqa);
  proto::PlayerCompoundMaterialRsp::set_retcode(rsp_0a, -1);
  if ( *(_DWORD *)(v3 + 64) )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v3 + 192));
    v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
    compound_config_ptr = data::CompoundExcelConfigMgrBase::findCompoundExcelConfig(
                            &v7->design_config.txt_config_mgr.compound_config_mgr,
                            *(_DWORD *)(v3 + 48));
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 192));
    if ( !compound_config_ptr )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v84,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/cook/player_cook_comp.cpp",
        "onPlayerCompoundMaterialReq",
        934);
      v8 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
             (common::milog::MiLogStream *const)&v84,
             (const char (*)[33])"findCompoundExcelConfig failed: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v84);
      goto LABEL_134;
    }
    if ( *(_BYTE *)(((unsigned __int64)&compound_config_ptr->is_default_unlocked >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)compound_config_ptr + 20) & 7) >= *(_BYTE *)(((unsigned __int64)&compound_config_ptr->is_default_unlocked >> 3)
                                                                       + 0x7FFF8000) )
    {
      __asan_report_load1(&compound_config_ptr->is_default_unlocked);
    }
    if ( !compound_config_ptr->is_default_unlocked
      && !common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
            &thisa->unlocked_compound_set_,
            (const unsigned int *)(v3 + 48)) )
    {
      proto::PlayerCompoundMaterialRsp::set_retcode(rsp_0a, 612);
      goto LABEL_134;
    }
    std::vector<data::IdCountConfig>::vector((std::vector<data::IdCountConfig> *const)(v3 + 224));
    __for_range = &compound_config_ptr->input_vec;
    __for_end._M_current = (data::IdCountConfig *)std::vector<data::IdCountConfig>::begin(&compound_config_ptr->input_vec)._M_current;
    *(std::vector<data::IdCountConfig>::const_iterator *)(v3 + 128) = std::vector<data::IdCountConfig>::end(&compound_config_ptr->input_vec);
    while ( __gnu_cxx::operator!=<data::IdCountConfig const*,std::vector<data::IdCountConfig>>(
              (const __gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *)&__for_end,
              (const __gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *)(v3 + 128)) )
    {
      input_item = __gnu_cxx::__normal_iterator<data::IdCountConfig const*,std::vector<data::IdCountConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *const)&__for_end);
      if ( *(_BYTE *)(((unsigned __int64)&input_item->id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&input_item->id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&input_item->id);
      }
      if ( !input_item->id )
        goto LABEL_25;
      if ( *(_BYTE *)(((unsigned __int64)&input_item->count >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)input_item + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&input_item->count >> 3)
                                                                  + 0x7FFF8000) )
      {
        __asan_report_load4(&input_item->count);
      }
      if ( !input_item->count )
      {
LABEL_25:
        common::milog::MiLogStream::create(
          &v83,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/cook/player_cook_comp.cpp",
          "onPlayerCompoundMaterialReq",
          949);
        v10 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                &v83,
                (const char (*)[19])"input_item error, ");
        v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &input_item->id);
        v12 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v11, (const char (*)[2])":");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &input_item->count);
        common::milog::MiLogStream::~MiLogStream(&v83);
        goto LABEL_133;
      }
      if ( *(_BYTE *)(((unsigned __int64)&input_item->count >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)input_item + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&input_item->count >> 3)
                                                                  + 0x7FFF8000) )
      {
        __asan_report_load4(&input_item->count);
      }
      if ( input_item->count
        && *(_DWORD *)(v3 + 64)
        && input_item->count * *(_DWORD *)(v3 + 64) / input_item->count != *(_DWORD *)(v3 + 64) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&v84,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/cook/player_cook_comp.cpp",
          "onPlayerCompoundMaterialReq",
          954);
        v13 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                (common::milog::MiLogStream *const)&v84,
                (const char (*)[18])"input_item.count:");
        v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &input_item->count);
        v15 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v14, (const char (*)[10])" * count:");
        v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v15,
                (const unsigned int *)(v3 + 64));
        common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v16, (const char (*)[10])" overflow");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v84);
        goto LABEL_133;
      }
      *(_QWORD *)(v3 + 192) = &`vtable for'data::IdCountConfig + 2;
      *(_DWORD *)(v3 + 200) = 0;
      *(_DWORD *)(v3 + 204) = 0;
      if ( *(_BYTE *)(((unsigned __int64)&input_item->id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&input_item->id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&input_item->id);
      }
      *(_DWORD *)(v3 + 200) = input_item->id;
      v17 = *(_DWORD *)(v3 + 64);
      if ( *(_BYTE *)(((unsigned __int64)&input_item->count >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)input_item + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&input_item->count >> 3)
                                                                  + 0x7FFF8000) )
      {
        __asan_report_load4(&input_item->count);
      }
      *(_DWORD *)(v3 + 204) = SAFE_MULTIPLY<unsigned int,unsigned int>(input_item->count, v17);
      std::vector<data::IdCountConfig>::push_back(
        (std::vector<data::IdCountConfig> *const)(v3 + 224),
        (const std::vector<data::IdCountConfig>::value_type *)(v3 + 192));
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v84,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/cook/player_cook_comp.cpp",
        "onPlayerCompoundMaterialReq",
        961);
      v18 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
              (common::milog::MiLogStream *const)&v84,
              (const char (*)[17])"new_input_item: ");
      v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v18,
              (const unsigned int *)(v3 + 200));
      v20 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v19, (const char (*)[2])":");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)(v3 + 204));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v84);
      data::IdCountConfig::~IdCountConfig((data::IdCountConfig *const)(v3 + 192));
      __gnu_cxx::__normal_iterator<data::IdCountConfig const*,std::vector<data::IdCountConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *const)&__for_end);
    }
    Player = PlayerCompBase::getPlayer(thisa);
    item_comp = Player::getItemComp(Player);
    if ( PlayerItemComp::checkSubItemBatch(item_comp, (const std::vector<data::IdCountConfig> *)(v3 + 224)) )
    {
      proto::PlayerCompoundMaterialRsp::set_retcode(rsp_0a, 609);
LABEL_133:
      std::vector<data::IdCountConfig>::~vector((std::vector<data::IdCountConfig> *const)(v3 + 224));
      goto LABEL_134;
    }
    *(_DWORD *)(v3 + 80) = 0;
    ActionReason::ActionReason((ActionReason *const)(v3 + 288), ACTION_REASON_COMPOUND, ITEM_LIMIT_UNLIMITED);
    ActionReason::ActionReason((ActionReason *const)(v3 + 352), ACTION_REASON_COMPOUND, ITEM_LIMIT_COMPOUND_DROP);
    std::vector<data::IdCountConfig>::vector((std::vector<data::IdCountConfig> *const)(v3 + 416));
    if ( *(_BYTE *)(((unsigned __int64)&compound_config_ptr->type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&compound_config_ptr->type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&compound_config_ptr->type);
    }
    if ( compound_config_ptr->type == COMPOUND_RANDOM_COOK )
    {
      if ( *(_BYTE *)(((unsigned __int64)&compound_config_ptr->drop_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&compound_config_ptr->drop_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&compound_config_ptr->drop_id);
      }
      *(_DWORD *)(v3 + 80) = PlayerItemComp::checkFrontLooseGrantDropItems(
                               item_comp,
                               compound_config_ptr->drop_id,
                               0,
                               (const ActionReason *)(v3 + 352),
                               0LL);
    }
    else
    {
      __for_range_0 = &compound_config_ptr->output_vec;
      __for_end._M_current = (data::IdCountConfig *)std::vector<data::IdCountConfig>::begin(&compound_config_ptr->output_vec)._M_current;
      *(std::vector<data::IdCountConfig>::const_iterator *)(v3 + 128) = std::vector<data::IdCountConfig>::end(__for_range_0);
      while ( __gnu_cxx::operator!=<data::IdCountConfig const*,std::vector<data::IdCountConfig>>(
                (const __gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *)&__for_end,
                (const __gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *)(v3 + 128)) )
      {
        output_item = __gnu_cxx::__normal_iterator<data::IdCountConfig const*,std::vector<data::IdCountConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *const)&__for_end);
        if ( *(_BYTE *)(((unsigned __int64)&output_item->id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&output_item->id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&output_item->id);
        }
        if ( !output_item->id )
          goto LABEL_53;
        if ( *(_BYTE *)(((unsigned __int64)&output_item->count >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)output_item + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&output_item->count >> 3)
                                                                     + 0x7FFF8000) )
        {
          __asan_report_load4(&output_item->count);
        }
        if ( !output_item->count )
        {
LABEL_53:
          common::milog::MiLogStream::create(
            &v83,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/cook/player_cook_comp.cpp",
            "onPlayerCompoundMaterialReq",
            987);
          v22 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                  &v83,
                  (const char (*)[20])"output_item error, ");
          v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &output_item->id);
          v24 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v23, (const char (*)[2])":");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, &output_item->count);
          common::milog::MiLogStream::~MiLogStream(&v83);
          goto LABEL_132;
        }
        if ( *(_BYTE *)(((unsigned __int64)&output_item->count >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)output_item + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&output_item->count >> 3)
                                                                     + 0x7FFF8000) )
        {
          __asan_report_load4(&output_item->count);
        }
        if ( output_item->count
          && *(_DWORD *)(v3 + 64)
          && output_item->count * *(_DWORD *)(v3 + 64) / output_item->count != *(_DWORD *)(v3 + 64) )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&v84,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/cook/player_cook_comp.cpp",
            "onPlayerCompoundMaterialReq",
            992);
          v25 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                  (common::milog::MiLogStream *const)&v84,
                  (const char (*)[19])"output_item.count:");
          v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, &output_item->count);
          v27 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v26, (const char (*)[10])" * count:");
          v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v27,
                  (const unsigned int *)(v3 + 64));
          common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v28, (const char (*)[10])" overflow");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v84);
          goto LABEL_132;
        }
        *(_QWORD *)(v3 + 192) = &`vtable for'data::IdCountConfig + 2;
        *(_DWORD *)(v3 + 200) = 0;
        *(_DWORD *)(v3 + 204) = 0;
        if ( *(_BYTE *)(((unsigned __int64)&output_item->id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&output_item->id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&output_item->id);
        }
        *(_DWORD *)(v3 + 200) = output_item->id;
        v29 = *(_DWORD *)(v3 + 64);
        if ( *(_BYTE *)(((unsigned __int64)&output_item->count >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)output_item + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&output_item->count >> 3)
                                                                     + 0x7FFF8000) )
        {
          __asan_report_load4(&output_item->count);
        }
        *(_DWORD *)(v3 + 204) = SAFE_MULTIPLY<unsigned int,unsigned int>(output_item->count, v29);
        std::vector<data::IdCountConfig>::push_back(
          (std::vector<data::IdCountConfig> *const)(v3 + 416),
          (const std::vector<data::IdCountConfig>::value_type *)(v3 + 192));
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&v84,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/cook/player_cook_comp.cpp",
          "onPlayerCompoundMaterialReq",
          999);
        v30 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                (common::milog::MiLogStream *const)&v84,
                (const char (*)[18])"new_output_item: ");
        v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v30,
                (const unsigned int *)(v3 + 200));
        v32 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v31, (const char (*)[2])":");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, (const unsigned int *)(v3 + 204));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v84);
        data::IdCountConfig::~IdCountConfig((data::IdCountConfig *const)(v3 + 192));
        __gnu_cxx::__normal_iterator<data::IdCountConfig const*,std::vector<data::IdCountConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *const)&__for_end);
      }
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)(v3 + 192));
      v33 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
      isMaterialVecEmpty = MaterialExcelConfigMgr::isMaterialVecEmpty(
                             &v33->design_config.txt_config_mgr.material_config_mgr,
                             &compound_config_ptr->output_vec);
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 192));
      if ( isMaterialVecEmpty )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&v84,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/cook/player_cook_comp.cpp",
          "onPlayerCompoundMaterialReq",
          1003);
        v35 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                (common::milog::MiLogStream *const)&v84,
                (const char (*)[14])"Compound id: ");
        v36 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v35,
                (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
          v36,
          (const char (*)[22])" output_vec is empty!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v84);
LABEL_132:
        std::vector<data::IdCountConfig>::~vector((std::vector<data::IdCountConfig> *const)(v3 + 416));
        goto LABEL_133;
      }
      *(_DWORD *)(v3 + 80) = PlayerItemComp::checkAddItemBatch(
                               item_comp,
                               (const std::vector<data::IdCountConfig> *)(v3 + 416),
                               (const ActionReason *)(v3 + 288));
    }
    if ( *(_DWORD *)(v3 + 80) )
    {
      proto::PlayerCompoundMaterialRsp::set_retcode(rsp_0a, *(_DWORD *)(v3 + 80));
    }
    else
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)(v3 + 192));
      v37 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
      compound_que_count = ConstValueExcelConfigMgr::getCompoundQueueMaxCount(&v37->design_config.txt_config_mgr.const_value_config_mgr);
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 192));
      busy_que_count = 0;
      __for_range_1 = &thisa->compound_output_map_;
      __for_end._M_current = (data::IdCountConfig *)std::unordered_map<unsigned int,std::deque<CompoundOutputData>>::begin(&thisa->compound_output_map_)._M_cur;
      *(std::unordered_map<unsigned int,std::deque<CompoundOutputData>>::iterator *)(v3 + 128) = std::unordered_map<unsigned int,std::deque<CompoundOutputData>>::end(__for_range_1);
      while ( std::__detail::operator!=<std::pair<unsigned int const,std::deque<CompoundOutputData>>,false>(
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::deque<CompoundOutputData> >,false> *)&__for_end,
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::deque<CompoundOutputData> >,false> *)(v3 + 128)) )
      {
        v78 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::deque<CompoundOutputData>>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::deque<CompoundOutputData> >,false,false> *const)&__for_end);
        compound_id = std::get<0ul,unsigned int const,std::deque<CompoundOutputData>>(v78);
        output_que = (std::tuple_element<1,const std::pair<unsigned int const,std::deque<CompoundOutputData> > >::type *)std::get<1ul,unsigned int const,std::deque<CompoundOutputData>>(v78);
        if ( !std::deque<CompoundOutputData>::empty(output_que) )
          ++busy_que_count;
        std::__detail::_Node_iterator<std::pair<unsigned int const,std::deque<CompoundOutputData>>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,std::deque<CompoundOutputData> >,false,false> *const)&__for_end);
      }
      if ( busy_que_count < compound_que_count )
      {
        output_data_que = std::unordered_map<unsigned int,std::deque<CompoundOutputData>>::operator[](
                            &thisa->compound_output_map_,
                            (const std::unordered_map<unsigned int,std::deque<CompoundOutputData>>::key_type *)(v3 + 48));
        v38 = std::deque<CompoundOutputData>::size(output_data_que) + *(unsigned int *)(v3 + 64);
        if ( *(_BYTE *)(((unsigned __int64)&compound_config_ptr->queue_size >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)compound_config_ptr + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&compound_config_ptr->queue_size >> 3)
                                                                             + 0x7FFF8000) )
        {
          __asan_report_load4(&compound_config_ptr->queue_size);
        }
        if ( v38 <= compound_config_ptr->queue_size )
        {
          SubItemReason::SubItemReason((SubItemReason *const)(v3 + 128), ACTION_REASON_COMPOUND);
          if ( PlayerItemComp::subItemBatch(
                 item_comp,
                 (const std::vector<data::IdCountConfig> *)(v3 + 224),
                 (const SubItemReason *)(v3 + 128)) )
          {
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)&v84,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/player/cook/player_cook_comp.cpp",
              "onPlayerCompoundMaterialReq",
              1042);
            v39 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                    (common::milog::MiLogStream *const)&v84,
                    (const char (*)[25])"subItemBatch fails! ret:");
            v40 = common::milog::MiLogStream::operator<<<int,(int *)0>(v39, (const int *)(v3 + 80));
            v41 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v40, (const char (*)[6])" uid:");
            if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&thisa->player_);
            *(_DWORD *)(v3 + 112) = Player::getUid(thisa->player_);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v41,
              (const unsigned int *)(v3 + 112));
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v84);
          }
          *(_DWORD *)(v3 + 96) = common::tools::TimeUtils::getNow();
          if ( !std::deque<CompoundOutputData>::empty(output_data_que) )
          {
            v42 = std::deque<CompoundOutputData>::back(output_data_que);
            v43 = std::max<unsigned int>(&v42->output_time, (const unsigned int *)(v3 + 96));
            v44 = v43;
            if ( *(_BYTE *)(((unsigned __int64)v43 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v43 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v43 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v43);
            }
            *(_DWORD *)(v3 + 96) = *v44;
          }
          for ( i = 0; i < *(_DWORD *)(v3 + 64); ++i )
          {
            *(_DWORD *)(v3 + 112) = 0;
            if ( *(_BYTE *)(((unsigned __int64)&compound_config_ptr->cost_time >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&compound_config_ptr->cost_time >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&compound_config_ptr->cost_time);
            }
            *(_DWORD *)(v3 + 112) = compound_config_ptr->cost_time + *(_DWORD *)(v3 + 96);
            std::deque<CompoundOutputData>::push_back(
              output_data_que,
              (const std::deque<CompoundOutputData>::value_type *)(v3 + 112));
            *(_DWORD *)(v3 + 96) = *(_DWORD *)(v3 + 112);
          }
          proto::PlayerCompoundMaterialRsp::set_retcode(rsp_0a, 0);
          que_proto = proto::PlayerCompoundMaterialRsp::mutable_compound_que_data(rsp_0a);
          PlayerCookComp::fillCompoundQueueDataProto(thisa, *(_DWORD *)(v3 + 48), output_data_que, que_proto);
          if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&thisa->player_);
          EventComp = Player::getEventComp(thisa->player_);
          common::tools::perf::make_shared<PlayerCompoundEvent,unsigned int &>(
            (unsigned int *)&__r,
            (unsigned int *)(v3 + 48));
          std::shared_ptr<BaseEvent>::shared_ptr<PlayerCompoundEvent,void>(
            (std::shared_ptr<BaseEvent> *const)(v3 + 192),
            &__r);
          PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)(v3 + 192));
          std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)(v3 + 192));
          std::shared_ptr<PlayerCompoundEvent>::~shared_ptr(&__r);
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&v84,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/cook/player_cook_comp.cpp",
            "onPlayerCompoundMaterialReq",
            1068);
          v46 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                  (common::milog::MiLogStream *const)&v84,
                  (const char (*)[23])"compound compound_id: ");
          v47 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v46,
                  (const unsigned int *)(v3 + 48));
          v48 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v47, (const char (*)[9])" count: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v48, (const unsigned int *)(v3 + 64));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v84);
          if ( *(_BYTE *)(((unsigned __int64)&compound_config_ptr->type >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&compound_config_ptr->type >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&compound_config_ptr->type);
          }
          if ( compound_config_ptr->type != COMPOUND_RANDOM_COOK )
          {
            common::tools::perf::make_shared<proto_log::PlayerLogBodyProcessIngredients>();
            __for_range_2 = (std::vector<data::IdCountConfig> *)(v3 + 224);
            __for_begin._M_current = std::vector<data::IdCountConfig>::begin((std::vector<data::IdCountConfig> *const)(v3 + 224))._M_current;
            __for_end._M_current = std::vector<data::IdCountConfig>::end(__for_range_2)._M_current;
            while ( __gnu_cxx::operator!=<data::IdCountConfig *,std::vector<data::IdCountConfig>>(
                      &__for_begin,
                      &__for_end) )
            {
              id_count_config = __gnu_cxx::__normal_iterator<data::IdCountConfig *,std::vector<data::IdCountConfig>>::operator*(&__for_begin);
              if ( *(_BYTE *)(((unsigned __int64)&id_count_config->id >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&id_count_config->id >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&id_count_config->id);
              }
              if ( id_count_config->id )
                goto LABEL_107;
              if ( *(_BYTE *)(((unsigned __int64)&id_count_config->count >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)id_count_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&id_count_config->count >> 3)
                                                                               + 0x7FFF8000) )
              {
                __asan_report_load4(&id_count_config->count);
              }
              if ( id_count_config->count )
              {
LABEL_107:
                v49 = std::__shared_ptr_access<proto_log::PlayerLogBodyProcessIngredients,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyProcessIngredients,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
                item_log = proto_log::PlayerLogBodyProcessIngredients::add_material_input(v49);
                if ( *(_BYTE *)(((unsigned __int64)&id_count_config->id >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&id_count_config->id >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4(&id_count_config->id);
                }
                proto_log::ItemLog::set_item_id(item_log, id_count_config->id);
                if ( *(_BYTE *)(((unsigned __int64)&id_count_config->count >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)id_count_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&id_count_config->count >> 3)
                                                                                 + 0x7FFF8000) )
                {
                  __asan_report_load4(&id_count_config->count);
                }
                proto_log::ItemLog::set_count(item_log, id_count_config->count);
              }
              __gnu_cxx::__normal_iterator<data::IdCountConfig *,std::vector<data::IdCountConfig>>::operator++(&__for_begin);
            }
            __for_range_3 = (std::vector<data::IdCountConfig> *)(v3 + 416);
            __for_begin._M_current = std::vector<data::IdCountConfig>::begin((std::vector<data::IdCountConfig> *const)(v3 + 416))._M_current;
            __for_end._M_current = std::vector<data::IdCountConfig>::end(__for_range_3)._M_current;
            while ( __gnu_cxx::operator!=<data::IdCountConfig *,std::vector<data::IdCountConfig>>(
                      &__for_begin,
                      &__for_end) )
            {
              id_count_config_0 = __gnu_cxx::__normal_iterator<data::IdCountConfig *,std::vector<data::IdCountConfig>>::operator*(&__for_begin);
              if ( *(_BYTE *)(((unsigned __int64)&id_count_config_0->id >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&id_count_config_0->id >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&id_count_config_0->id);
              }
              if ( id_count_config_0->id )
                goto LABEL_121;
              if ( *(_BYTE *)(((unsigned __int64)&id_count_config_0->count >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)id_count_config_0 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&id_count_config_0->count >> 3)
                                                                                 + 0x7FFF8000) )
              {
                __asan_report_load4(&id_count_config_0->count);
              }
              if ( id_count_config_0->count )
              {
LABEL_121:
                v50 = std::__shared_ptr_access<proto_log::PlayerLogBodyProcessIngredients,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyProcessIngredients,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
                item_log_0 = proto_log::PlayerLogBodyProcessIngredients::add_material_output(v50);
                if ( *(_BYTE *)(((unsigned __int64)&id_count_config_0->id >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&id_count_config_0->id >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4(&id_count_config_0->id);
                }
                proto_log::ItemLog::set_item_id(item_log_0, id_count_config_0->id);
                if ( *(_BYTE *)(((unsigned __int64)&id_count_config_0->count >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)id_count_config_0 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&id_count_config_0->count >> 3)
                                                                                   + 0x7FFF8000) )
                {
                  __asan_report_load4(&id_count_config_0->count);
                }
                proto_log::ItemLog::set_count(item_log_0, id_count_config_0->count);
              }
              __gnu_cxx::__normal_iterator<data::IdCountConfig *,std::vector<data::IdCountConfig>>::operator++(&__for_begin);
            }
            v51 = std::__shared_ptr_access<proto_log::PlayerLogBodyProcessIngredients,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyProcessIngredients,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
            if ( *(_BYTE *)(((unsigned __int64)&compound_config_ptr->cost_time >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&compound_config_ptr->cost_time >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&compound_config_ptr->cost_time);
            }
            proto_log::PlayerLogBodyProcessIngredients::set_cost_time(v51, compound_config_ptr->cost_time);
            v52 = std::__shared_ptr_access<proto_log::PlayerLogBodyProcessIngredients,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyProcessIngredients,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
            proto_log::PlayerLogBodyProcessIngredients::set_compound_id(v52, *(_DWORD *)(v3 + 48));
            v53 = std::__shared_ptr_access<proto_log::PlayerLogBodyProcessIngredients,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyProcessIngredients,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
            proto_log::PlayerLogBodyProcessIngredients::set_count(v53, *(_DWORD *)(v3 + 64));
            if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&thisa->player_);
            v54 = thisa->player_;
            std::shared_ptr<google::protobuf::Message>::shared_ptr(
              (std::shared_ptr<google::protobuf::Message> *const)(v3 + 192),
              0LL);
            std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyProcessIngredients,void>(
              (std::shared_ptr<google::protobuf::Message> *const)&__r,
              (const std::shared_ptr<proto_log::PlayerLogBodyProcessIngredients> *)(v3 + 160));
            Player::printStatLog(v54, (MessagePtr *)&__r, (MessagePtr *)(v3 + 192), 0xEu);
            std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)&__r);
            std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)(v3 + 192));
            std::shared_ptr<proto_log::PlayerLogBodyProcessIngredients>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyProcessIngredients> *const)(v3 + 160));
          }
        }
        else
        {
          proto::PlayerCompoundMaterialRsp::set_retcode(rsp_0a, 614);
        }
      }
      else
      {
        proto::PlayerCompoundMaterialRsp::set_retcode(rsp_0a, 621);
      }
    }
    goto LABEL_132;
  }
LABEL_134:
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 32));
  if ( v85 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8038) = 0;
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
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8038) = -168430091;
  }
};

// Line 1101: range 00000000175E72D8-00000000175E9197
void __cdecl PlayerCookComp::onPlayerCompoundMaterialBoostReq(
        PlayerCookComp *const this,
        const proto::PlayerCompoundMaterialBoostReq *req,
        proto::PlayerCompoundMaterialBoostRsp *rsp_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  Player *Player; // rax
  common::milog::MiLogStream *v7; // r14
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r14
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false>::pointer v14; // rax
  std::vector<unsigned int>::iterator v15; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v16; // rax
  _DWORD *v17; // rdx
  common::milog::MiLogStream *v18; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::deque<CompoundOutputData> >,false,false>::pointer v19; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  std::deque<CompoundOutputData>::const_reference v24; // rax
  _DWORD *p_output_time; // rdx
  char v26; // al
  std::deque<CompoundOutputData>::const_reference v27; // rax
  _DWORD *v28; // rdx
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rax
  unsigned int *v32; // rax
  unsigned int *v33; // rdx
  common::milog::MiLogStream *v34; // r14
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // r14
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // r14
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v41; // rax
  _DWORD *v42; // rdx
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::deque<CompoundOutputData> >,false,false>::pointer v43; // rax
  const CompoundOutputData *v45; // rax
  unsigned int v46; // eax
  CompoundOutputData *v47; // rax
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // rax
  common::milog::MiLogStream *v50; // rax
  common::milog::MiLogStream *v51; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v52; // rax
  _DWORD *v53; // rdx
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::deque<CompoundOutputData> >,false,false>::pointer v54; // rax
  std::deque<CompoundOutputData> *p_second; // rdx
  google::protobuf::RepeatedPtrField<proto::ItemParam> *v57; // rax
  common::milog::MiLogStream *v58; // r14
  common::milog::MiLogStream *v59; // rax
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyCompoundBoost,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v61; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyCompoundBoost,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v62; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyCompoundBoost,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v63; // rdx
  google::protobuf::uint32 v64; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyCompoundBoost,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v65; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyCompoundBoost,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v66; // rcx
  Player *v67; // r14
  std::string v68; // [rsp+0h] [rbp-3E0h]
  bool is_boost_all; // [rsp+3Fh] [rbp-3A1h]
  unsigned int fixed_now; // [rsp+40h] [rbp-3A0h]
  unsigned int compound_need_time_total; // [rsp+44h] [rbp-39Ch]
  unsigned int boost_time_past; // [rsp+48h] [rbp-398h]
  uint32_t boost_time_point; // [rsp+4Ch] [rbp-394h]
  uint32_t compound_boost_item_id; // [rsp+50h] [rbp-390h]
  unsigned int now; // [rsp+54h] [rbp-38Ch]
  unsigned int material_can_boost_time; // [rsp+58h] [rbp-388h]
  unsigned int compound_boost_time_tolerance; // [rsp+5Ch] [rbp-384h]
  unsigned int consume_material_count_final; // [rsp+60h] [rbp-380h]
  uint32_t total_boost_time; // [rsp+64h] [rbp-37Ch]
  unsigned int next_boost_time_past; // [rsp+68h] [rbp-378h]
  int32_t take_ret_code; // [rsp+6Ch] [rbp-374h]
  std::vector<unsigned int>::iterator __for_begin; // [rsp+70h] [rbp-370h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+78h] [rbp-368h] BYREF
  const ConstValueExcelConfigMgr *const_value_config_mgr; // [rsp+80h] [rbp-360h]
  PlayerItemComp *item_comp; // [rsp+88h] [rbp-358h]
  const CompoundExcelConfigMgr *compound_config_mgr; // [rsp+90h] [rbp-350h]
  const data::CompoundBoostExcelConfig *compound_boost_config_ptr; // [rsp+98h] [rbp-348h]
  const std::unordered_map<unsigned int,std::vector<unsigned int>> *compound_group_ids_map; // [rsp+A0h] [rbp-340h]
  std::vector<unsigned int> *__for_range; // [rsp+A8h] [rbp-338h]
  std::vector<unsigned int> *__for_range_0; // [rsp+B0h] [rbp-330h]
  std::deque<CompoundOutputData> *output_queue_0; // [rsp+C0h] [rbp-320h]
  const CompoundOutputData *cur_que_back; // [rsp+C8h] [rbp-318h]
  std::deque<CompoundOutputData> *__for_range_1; // [rsp+D0h] [rbp-310h]
  CompoundOutputData *output_data; // [rsp+D8h] [rbp-308h]
  std::vector<unsigned int> *__for_range_2; // [rsp+E0h] [rbp-300h]
  std::vector<ItemParam> *__for_range_3; // [rsp+E8h] [rbp-2F8h]
  const ItemParam *item_param; // [rsp+F0h] [rbp-2F0h]
  const std::deque<CompoundOutputData> *output_queue; // [rsp+100h] [rbp-2E0h]
  std::vector<ItemParam>::iterator __for_end_1; // [rsp+108h] [rbp-2D8h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+110h] [rbp-2D0h] BYREF
  std::shared_ptr<google::protobuf::Message> v103; // [rsp+120h] [rbp-2C0h] BYREF
  std::deque<CompoundOutputData>::iterator __for_begin_0; // [rsp+130h] [rbp-2B0h] BYREF
  std::deque<CompoundOutputData>::iterator __for_end_0; // [rsp+150h] [rbp-290h] BYREF
  common::milog::MiLogStream v106; // [rsp+170h] [rbp-270h] BYREF
  char v107[592]; // [rsp+190h] [rbp-250h] BYREF

  *(&v68._anon_0._M_allocated_capacity + 1) = (std::string::size_type)rsp_0;
  v3 = (unsigned __int64)v107;
  v68._M_string_length = (std::string::size_type)v107;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(544LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "15 48 1 11 holder:1290 64 4 29 target_compound_group_id:1115 80 4 24 consume_material_id:1116 96"
                        " 4 27 consume_material_count:1117 112 4 39 compound_need_total_material_count:1186 128 4 23 targ"
                        "et_compound_id:1215 144 4 23 target_compound_id:1261 160 8 15 group_iter:1140 192 8 16 output_it"
                        "er:1163 224 16 19 sub_item_param:1196 256 16 12 log_ptr:1291 288 24 25 temp_compound_id_vec:1146"
                        " 352 24 33 valid_target_compound_id_vec:1151 416 24 11 reason:1205 480 24 19 item_param_vec:1272";
  *(_QWORD *)(v3 + 16) = PlayerCookComp::onPlayerCompoundMaterialBoostReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -234556924;
  v5[536862723] = -234556924;
  v5[536862724] = -234556924;
  v5[536862725] = -218959360;
  v5[536862726] = -218959360;
  v5[536862727] = -219021312;
  v5[536862728] = -219021312;
  v5[536862729] = -234881024;
  v5[536862730] = -218959118;
  v5[536862731] = -234881024;
  v5[536862732] = -218959118;
  v5[536862733] = -234881024;
  v5[536862734] = -218959118;
  v5[536862735] = -218103808;
  v5[536862736] = -202116109;
  proto::PlayerCompoundMaterialBoostRsp::set_retcode(
    *((proto::PlayerCompoundMaterialBoostRsp *const *)&v68._anon_0._M_allocated_capacity + 1),
    -1);
  proto::PlayerCompoundMaterialBoostRsp::set_take_status(
    *((proto::PlayerCompoundMaterialBoostRsp *const *)&v68._anon_0._M_allocated_capacity + 1),
    COMPOUND_BOOST_TAKE_STATUS_NONE);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v103);
  const_value_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v103)->design_config.txt_config_mgr.const_value_config_mgr;
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v103);
  compound_boost_item_id = ConstValueExcelConfigMgr::getCompoundBoostItemID(const_value_config_mgr);
  Player = PlayerCompBase::getPlayer(this);
  item_comp = Player::getItemComp(Player);
  if ( !PlayerItemComp::hasItemById(item_comp, compound_boost_item_id) )
  {
    proto::PlayerCompoundMaterialBoostRsp::set_retcode(
      *((proto::PlayerCompoundMaterialBoostRsp *const *)&v68._anon_0._M_allocated_capacity + 1),
      11201);
    common::milog::MiLogStream::create(
      &v106,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/cook/player_cook_comp.cpp",
      "onPlayerCompoundMaterialBoostReq",
      1111);
    v7 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v106, (const char (*)[6])"Uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    *(_DWORD *)(v3 + 144) = Player::getUid(this->player_);
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 144));
    common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
      v8,
      (const char (*)[27])", boost item doesn't exist");
    common::milog::MiLogStream::~MiLogStream(&v106);
  }
  else
  {
    *(_DWORD *)(v3 + 64) = proto::PlayerCompoundMaterialBoostReq::target_compound_group_id(req);
    *(_DWORD *)(v3 + 80) = proto::PlayerCompoundMaterialBoostReq::consume_material_id(req);
    *(_DWORD *)(v3 + 96) = proto::PlayerCompoundMaterialBoostReq::consume_material_count(req);
    is_boost_all = proto::PlayerCompoundMaterialBoostReq::is_boost_all(req);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v103);
    compound_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v103)->design_config.txt_config_mgr.compound_config_mgr;
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v103);
    compound_boost_config_ptr = data::CompoundExcelConfigMgrBase::findCompoundBoostExcelConfig(
                                  compound_config_mgr,
                                  *(_DWORD *)(v3 + 80));
    if ( compound_boost_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&compound_boost_config_ptr->boost_time >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)compound_boost_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&compound_boost_config_ptr->boost_time >> 3)
                                                                                 + 0x7FFF8000) )
      {
        __asan_report_load4(&compound_boost_config_ptr->boost_time);
      }
      if ( compound_boost_config_ptr->boost_time )
      {
        if ( *(_DWORD *)(v3 + 96) )
        {
          compound_group_ids_map = &compound_config_mgr->compound_group_ids_map;
          *(std::unordered_map<unsigned int,std::vector<unsigned int>>::const_iterator *)(v3 + 160) = std::unordered_map<unsigned int,std::vector<unsigned int>>::find(&compound_config_mgr->compound_group_ids_map, (const std::unordered_map<unsigned int,std::vector<unsigned int>>::key_type *)(v3 + 64));
          __for_end_1._M_current = (ItemParam *)std::unordered_map<unsigned int,std::vector<unsigned int>>::end(compound_group_ids_map)._M_cur;
          if ( std::__detail::operator==<std::pair<unsigned int const,std::vector<unsigned int>>,false>(
                 (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)(v3 + 160),
                 (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)&__for_end_1) )
          {
            proto::PlayerCompoundMaterialBoostRsp::set_retcode(
              *((proto::PlayerCompoundMaterialBoostRsp *const *)&v68._anon_0._M_allocated_capacity + 1),
              11202);
          }
          else
          {
            v14 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false> *const)(v3 + 160));
            std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 288), &v14->second);
            *(std::vector<unsigned int>::iterator *)v68._anon_0._M_local_buf = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v3 + 288));
            v15._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v3 + 288))._M_current;
            std::sort<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>>(
              v15,
              *(__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)v68._anon_0._M_local_buf);
            now = common::tools::TimeUtils::getNow();
            fixed_now = now;
            std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 352));
            compound_need_time_total = 0;
            __for_range = (std::vector<unsigned int> *)(v3 + 288);
            __for_begin._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v3 + 288))._M_current;
            __for_end._M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v3 + 288))._M_current;
            while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
            {
              v16 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
              v17 = v16;
              if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v16);
              }
              *(_DWORD *)(v3 + 128) = *v17;
              if ( data::CompoundExcelConfigMgrBase::findCompoundExcelConfig(compound_config_mgr, *(_DWORD *)(v3 + 128)) )
              {
                *(std::unordered_map<unsigned int,std::deque<CompoundOutputData>>::iterator *)(v3 + 192) = std::unordered_map<unsigned int,std::deque<CompoundOutputData>>::find(&this->compound_output_map_, (const std::unordered_map<unsigned int,std::deque<CompoundOutputData>>::key_type *)(v3 + 128));
                __for_end_1._M_current = (ItemParam *)std::unordered_map<unsigned int,std::deque<CompoundOutputData>>::end(&this->compound_output_map_)._M_cur;
                if ( std::__detail::operator==<std::pair<unsigned int const,std::deque<CompoundOutputData>>,false>(
                       (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::deque<CompoundOutputData> >,false> *)(v3 + 192),
                       (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::deque<CompoundOutputData> >,false> *)&__for_end_1)
                  || (v19 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::deque<CompoundOutputData>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::deque<CompoundOutputData> >,false,false> *const)(v3 + 192)),
                      std::deque<CompoundOutputData>::empty(&v19->second)) )
                {
                  common::milog::MiLogStream::create(
                    &v106,
                    &common::milog::MiLogDefault::default_log_obj_,
                    1u,
                    "./src/player/cook/player_cook_comp.cpp",
                    "onPlayerCompoundMaterialBoostReq",
                    1166);
                  v68._anon_0._M_allocated_capacity = (std::string::size_type)common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(
                                                                                &v106,
                                                                                (const char (*)[6])"Uid: ");
                  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                    __asan_report_load8(&this->player_);
                  *(_DWORD *)(v3 + 144) = Player::getUid(this->player_);
                  v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          (common::milog::MiLogStream *const)v68._anon_0._M_allocated_capacity,
                          (const unsigned int *)(v3 + 144));
                  v22 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                          v21,
                          (const char (*)[23])", target compound id: ");
                  v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v22,
                          (const unsigned int *)(v3 + 128));
                  common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                    v23,
                    (const char (*)[15])" doesn't exist");
                  common::milog::MiLogStream::~MiLogStream(&v106);
                }
                else
                {
                  output_queue = &std::__detail::_Node_iterator<std::pair<unsigned int const,std::deque<CompoundOutputData>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::deque<CompoundOutputData> >,false,false> *const)(v3 + 192))->second;
                  if ( std::deque<CompoundOutputData>::empty(output_queue) )
                    goto LABEL_41;
                  v24 = std::deque<CompoundOutputData>::back(output_queue);
                  p_output_time = &v24->output_time;
                  if ( *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)v24 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_load4(v24);
                  }
                  if ( now < *p_output_time )
                    v26 = 1;
                  else
LABEL_41:
                    v26 = 0;
                  if ( v26 )
                  {
                    v27 = std::deque<CompoundOutputData>::back(output_queue);
                    v28 = &v27->output_time;
                    if ( *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) != 0
                      && (char)(((unsigned __int8)v27 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_load4(v27);
                    }
                    compound_need_time_total = SAFE_ADD<unsigned int,unsigned int>(compound_need_time_total, *v28 - now);
                    std::vector<unsigned int>::push_back(
                      (std::vector<unsigned int> *const)(v3 + 352),
                      (const std::vector<unsigned int>::value_type *)(v3 + 128));
                  }
                }
              }
              else
              {
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)&__for_end_0,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/cook/player_cook_comp.cpp",
                  "onPlayerCompoundMaterialBoostReq",
                  1160);
                v18 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                        (common::milog::MiLogStream *const)&__for_end_0,
                        (const char (*)[33])"findCompoundExcelConfig failed: ");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v18,
                  (const unsigned int *)(v3 + 128));
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__for_end_0);
              }
              __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
            }
            if ( *(_BYTE *)(((unsigned __int64)&compound_boost_config_ptr->boost_time >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)compound_boost_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&compound_boost_config_ptr->boost_time >> 3)
                                                                                       + 0x7FFF8000) )
            {
              __asan_report_load4(&compound_boost_config_ptr->boost_time);
            }
            material_can_boost_time = SAFE_MULTIPLY<unsigned int,unsigned int>(
                                        *(_DWORD *)(v3 + 96),
                                        compound_boost_config_ptr->boost_time);
            compound_boost_time_tolerance = ConstValueExcelConfigMgr::getCompoundBoostTimeTolerance(const_value_config_mgr);
            if ( is_boost_all && material_can_boost_time < compound_need_time_total )
            {
              v29 = std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v3 + 352));
              v30 = SAFE_MULTIPLY<unsigned long,unsigned int>(v29, compound_boost_time_tolerance);
              if ( SAFE_ADD<unsigned int,unsigned long>(material_can_boost_time, v30) >= compound_need_time_total )
                fixed_now = SAFE_ADD<unsigned int,unsigned int>(now, compound_boost_time_tolerance);
            }
            if ( *(_BYTE *)(((unsigned __int64)&compound_boost_config_ptr->boost_time >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)compound_boost_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&compound_boost_config_ptr->boost_time >> 3)
                                                                                       + 0x7FFF8000) )
            {
              __asan_report_load4(&compound_boost_config_ptr->boost_time);
            }
            *(_DWORD *)(v3 + 112) = compound_need_time_total / compound_boost_config_ptr->boost_time
                                  + (compound_need_time_total % compound_boost_config_ptr->boost_time != 0);
            v32 = (unsigned int *)std::min<unsigned int>(
                                    (const unsigned int *)(v3 + 96),
                                    (const unsigned int *)(v3 + 112));
            v33 = v32;
            if ( *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v32 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v32);
            }
            consume_material_count_final = *v33;
            if ( *v33 )
            {
              *(_QWORD *)(v3 + 224) = 0LL;
              *(_QWORD *)(v3 + 232) = 0LL;
              *(_DWORD *)(v3 + 224) = *(_DWORD *)(v3 + 80);
              *(_DWORD *)(v3 + 228) = consume_material_count_final;
              if ( PlayerItemComp::checkSubItem(item_comp, (const ItemParam *)(v3 + 224)) )
              {
                proto::PlayerCompoundMaterialBoostRsp::set_retcode(
                  *((proto::PlayerCompoundMaterialBoostRsp *const *)&v68._anon_0._M_allocated_capacity + 1),
                  609);
                common::milog::MiLogStream::create(
                  &v106,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/cook/player_cook_comp.cpp",
                  "onPlayerCompoundMaterialBoostReq",
                  1200);
                v38 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v106, (const char (*)[6])"Uid: ");
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8(&this->player_);
                *(_DWORD *)(v3 + 144) = Player::getUid(this->player_);
                v39 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v38,
                        (const unsigned int *)(v3 + 144));
                common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                  v39,
                  (const char (*)[33])", consume material is not enough");
                common::milog::MiLogStream::~MiLogStream(&v106);
              }
              else
              {
                ActionReason::ActionReason(
                  (ActionReason *const)(v3 + 416),
                  ACTION_REASON_COMPOUND_BOOST,
                  ITEM_LIMIT_NONE);
                SubItemReason::SubItemReason((SubItemReason *const)&__for_end_1, (const ActionReason *)(v3 + 416));
                if ( PlayerItemComp::subItem(
                       item_comp,
                       (const ItemParam *)(v3 + 224),
                       (const SubItemReason *)&__for_end_1) )
                {
                  common::milog::MiLogStream::create(
                    &v106,
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/player/cook/player_cook_comp.cpp",
                    "onPlayerCompoundMaterialBoostReq",
                    1208);
                  v40 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                          &v106,
                          (const char (*)[20])"subItem fails! uid:");
                  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                    __asan_report_load8(&this->player_);
                  *(_DWORD *)(v3 + 144) = Player::getUid(this->player_);
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v40,
                    (const unsigned int *)(v3 + 144));
                  common::milog::MiLogStream::~MiLogStream(&v106);
                }
                else
                {
                  if ( *(_BYTE *)(((unsigned __int64)&compound_boost_config_ptr->boost_time >> 3) + 0x7FFF8000) != 0
                    && (char)((((_BYTE)compound_boost_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&compound_boost_config_ptr->boost_time >> 3)
                                                                                             + 0x7FFF8000) )
                  {
                    __asan_report_load4(&compound_boost_config_ptr->boost_time);
                  }
                  boost_time_past = SAFE_MULTIPLY<unsigned int,unsigned int>(
                                      consume_material_count_final,
                                      compound_boost_config_ptr->boost_time);
                  total_boost_time = boost_time_past;
                  boost_time_point = SAFE_ADD<unsigned int,unsigned int>(fixed_now, boost_time_past);
                  __for_range_0 = (std::vector<unsigned int> *)(v3 + 352);
                  __for_begin._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v3 + 352))._M_current;
                  __for_end._M_current = std::vector<unsigned int>::end(__for_range_0)._M_current;
                  while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
                  {
                    v41 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
                    v42 = v41;
                    if ( *(_BYTE *)(((unsigned __int64)v41 >> 3) + 0x7FFF8000) != 0
                      && (char)(((unsigned __int8)v41 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v41 >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_load4(v41);
                    }
                    *(_DWORD *)(v3 + 128) = *v42;
                    if ( data::CompoundExcelConfigMgrBase::findCompoundExcelConfig(
                           compound_config_mgr,
                           *(_DWORD *)(v3 + 128)) )
                    {
                      *(std::unordered_map<unsigned int,std::deque<CompoundOutputData>>::iterator *)(v3 + 192) = std::unordered_map<unsigned int,std::deque<CompoundOutputData>>::find(&this->compound_output_map_, (const std::unordered_map<unsigned int,std::deque<CompoundOutputData>>::key_type *)(v3 + 128));
                      __for_end_1._M_current = (ItemParam *)std::unordered_map<unsigned int,std::deque<CompoundOutputData>>::end(&this->compound_output_map_)._M_cur;
                      if ( !std::__detail::operator==<std::pair<unsigned int const,std::deque<CompoundOutputData>>,false>(
                              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::deque<CompoundOutputData> >,false> *)(v3 + 192),
                              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::deque<CompoundOutputData> >,false> *)&__for_end_1) )
                      {
                        v43 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::deque<CompoundOutputData>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::deque<CompoundOutputData> >,false,false> *const)(v3 + 192));
                        if ( !std::deque<CompoundOutputData>::empty(&v43->second) )
                        {
                          output_queue_0 = &std::__detail::_Node_iterator<std::pair<unsigned int const,std::deque<CompoundOutputData>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::deque<CompoundOutputData> >,false,false> *const)(v3 + 192))->second;
                          v45 = std::deque<CompoundOutputData>::back(output_queue_0);
                          cur_que_back = v45;
                          if ( *(_BYTE *)(((unsigned __int64)v45 >> 3) + 0x7FFF8000) != 0
                            && (char)(((unsigned __int8)v45 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v45 >> 3)
                                                                                  + 0x7FFF8000) )
                          {
                            __asan_report_load4(v45);
                          }
                          if ( boost_time_point <= cur_que_back->output_time )
                            v46 = 0;
                          else
                            v46 = boost_time_point - cur_que_back->output_time;
                          next_boost_time_past = v46;
                          __for_range_1 = output_queue_0;
                          std::deque<CompoundOutputData>::begin(&__for_begin_0, output_queue_0);
                          std::deque<CompoundOutputData>::end(&__for_end_0, __for_range_1);
                          while ( std::operator!=<CompoundOutputData,CompoundOutputData&,CompoundOutputData*>(
                                    &__for_begin_0,
                                    &__for_end_0) )
                          {
                            v47 = std::_Deque_iterator<CompoundOutputData,CompoundOutputData&,CompoundOutputData*>::operator*(&__for_begin_0);
                            output_data = v47;
                            if ( *(_BYTE *)(((unsigned __int64)v47 >> 3) + 0x7FFF8000) != 0
                              && (char)(((unsigned __int8)v47 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v47 >> 3)
                                                                                    + 0x7FFF8000) )
                            {
                              __asan_report_load4(v47);
                            }
                            if ( now < output_data->output_time )
                            {
                              if ( *(_BYTE *)(((unsigned __int64)output_data >> 3) + 0x7FFF8000) != 0
                                && (char)(((unsigned __int8)output_data & 7) + 3) >= *(_BYTE *)(((unsigned __int64)output_data >> 3)
                                                                                              + 0x7FFF8000) )
                              {
                                __asan_report_load4(output_data);
                              }
                              if ( boost_time_point < output_data->output_time )
                              {
                                if ( *(_BYTE *)(((unsigned __int64)output_data >> 3) + 0x7FFF8000) != 0
                                  && (char)(((unsigned __int8)output_data & 7) + 3) >= *(_BYTE *)(((unsigned __int64)output_data >> 3)
                                                                                                + 0x7FFF8000) )
                                {
                                  __asan_report_load4(output_data);
                                }
                                output_data->output_time -= boost_time_past;
                                if ( is_boost_all && fixed_now > now )
                                {
                                  common::milog::MiLogStream::create(
                                    &v106,
                                    &common::milog::MiLogDefault::default_log_obj_,
                                    3u,
                                    "./src/player/cook/player_cook_comp.cpp",
                                    "onPlayerCompoundMaterialBoostReq",
                                    1246);
                                  v68._anon_0._M_allocated_capacity = (std::string::size_type)common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(
                                                                                                &v106,
                                                                                                (const char (*)[6])"Uid: ");
                                  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                                    __asan_report_load8(&this->player_);
                                  *(_DWORD *)(v3 + 144) = Player::getUid(this->player_);
                                  v48 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                          (common::milog::MiLogStream *const)v68._anon_0._M_allocated_capacity,
                                          (const unsigned int *)(v3 + 144));
                                  v49 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                                          v48,
                                          (const char (*)[30])", boost all error, group id: ");
                                  v50 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                          v49,
                                          (const unsigned int *)(v3 + 64));
                                  v51 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                          v50,
                                          (const char (*)[16])", compound id: ");
                                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                    v51,
                                    (const unsigned int *)(v3 + 128));
                                  common::milog::MiLogStream::~MiLogStream(&v106);
                                }
                              }
                              else
                              {
                                output_data->output_time = now;
                              }
                            }
                            std::_Deque_iterator<CompoundOutputData,CompoundOutputData&,CompoundOutputData*>::operator++(&__for_begin_0);
                          }
                          if ( !next_boost_time_past )
                          {
                            boost_time_past = 0;
                            break;
                          }
                          boost_time_past = next_boost_time_past;
                          boost_time_point = SAFE_ADD<unsigned int,unsigned int>(fixed_now, next_boost_time_past);
                        }
                      }
                    }
                    __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
                  }
                  proto::PlayerCompoundMaterialBoostRsp::set_retcode(
                    *((proto::PlayerCompoundMaterialBoostRsp *const *)&v68._anon_0._M_allocated_capacity + 1),
                    0);
                  __for_range_2 = (std::vector<unsigned int> *)(v3 + 352);
                  __for_begin._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v3 + 352))._M_current;
                  __for_end._M_current = std::vector<unsigned int>::end(__for_range_2)._M_current;
                  while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
                  {
                    v52 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
                    v53 = v52;
                    if ( *(_BYTE *)(((unsigned __int64)v52 >> 3) + 0x7FFF8000) != 0
                      && (char)(((unsigned __int8)v52 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v52 >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_load4(v52);
                    }
                    *(_DWORD *)(v3 + 144) = *v53;
                    *(std::unordered_map<unsigned int,std::deque<CompoundOutputData>>::iterator *)(v3 + 192) = std::unordered_map<unsigned int,std::deque<CompoundOutputData>>::find(&this->compound_output_map_, (const std::unordered_map<unsigned int,std::deque<CompoundOutputData>>::key_type *)(v3 + 144));
                    __for_end_1._M_current = (ItemParam *)std::unordered_map<unsigned int,std::deque<CompoundOutputData>>::end(&this->compound_output_map_)._M_cur;
                    if ( !std::__detail::operator==<std::pair<unsigned int const,std::deque<CompoundOutputData>>,false>(
                            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::deque<CompoundOutputData> >,false> *)(v3 + 192),
                            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::deque<CompoundOutputData> >,false> *)&__for_end_1) )
                    {
                      v54 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::deque<CompoundOutputData>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::deque<CompoundOutputData> >,false,false> *const)(v3 + 192));
                      if ( !std::deque<CompoundOutputData>::empty(&v54->second) )
                      {
                        v68._anon_0._M_allocated_capacity = (std::string::size_type)proto::PlayerCompoundMaterialBoostRsp::add_compound_que_data_list(*((proto::PlayerCompoundMaterialBoostRsp *const *)&v68._anon_0._M_allocated_capacity + 1));
                        p_second = &std::__detail::_Node_iterator<std::pair<unsigned int const,std::deque<CompoundOutputData>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::deque<CompoundOutputData> >,false,false> *const)(v3 + 192))->second;
                        PlayerCookComp::fillCompoundQueueDataProto(
                          this,
                          *(_DWORD *)(v3 + 144),
                          p_second,
                          (proto::CompoundQueueData *)v68._anon_0._M_allocated_capacity);
                      }
                    }
                    __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
                  }
                  std::vector<ItemParam>::vector((std::vector<ItemParam> *const)(v3 + 480));
                  take_ret_code = PlayerCookComp::internalTakeCompoundOutput(
                                    this,
                                    *(_DWORD *)(v3 + 64),
                                    0,
                                    (std::vector<ItemParam> *)(v3 + 480));
                  if ( take_ret_code )
                  {
                    common::milog::MiLogStream::create(
                      &v106,
                      &common::milog::MiLogDefault::default_log_obj_,
                      1u,
                      "./src/player/cook/player_cook_comp.cpp",
                      "onPlayerCompoundMaterialBoostReq",
                      1281);
                    v58 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(
                            &v106,
                            (const char (*)[6])"Uid: ");
                    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                      __asan_report_load8(&this->player_);
                    *(_DWORD *)(v3 + 144) = Player::getUid(this->player_);
                    v59 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                            v58,
                            (const unsigned int *)(v3 + 144));
                    common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                      v59,
                      (const char (*)[35])", auto take compound output failed");
                    common::milog::MiLogStream::~MiLogStream(&v106);
                    proto::PlayerCompoundMaterialBoostRsp::set_take_status(
                      *((proto::PlayerCompoundMaterialBoostRsp *const *)&v68._anon_0._M_allocated_capacity + 1),
                      COMPOUND_BOOST_TAKE_STATUS_BOOST_ONLY);
                    if ( take_ret_code == 617 )
                      proto::PlayerCompoundMaterialBoostRsp::set_take_status(
                        *((proto::PlayerCompoundMaterialBoostRsp *const *)&v68._anon_0._M_allocated_capacity + 1),
                        COMPOUND_BOOST_TAKE_STATUS_BAG_FULL);
                  }
                  else
                  {
                    proto::PlayerCompoundMaterialBoostRsp::set_take_status(
                      *((proto::PlayerCompoundMaterialBoostRsp *const *)&v68._anon_0._M_allocated_capacity + 1),
                      COMPOUND_BOOST_TAKE_STATUS_BOOST_AND_TAKE);
                    v57 = proto::PlayerCompoundMaterialBoostRsp::mutable_take_item_list(*((proto::PlayerCompoundMaterialBoostRsp *const *)&v68._anon_0._M_allocated_capacity
                                                                                        + 1));
                    common::tools::MiscUtils::vectorToRepeated<ItemParam,proto::ItemParam,int (ItemParam::*)(proto::ItemParam&)const>(
                      (const std::vector<ItemParam> *)(v3 + 480),
                      v57,
                      (int (*)(const ItemParam *, proto::ItemParam *))ItemParam::toClient);
                  }
                  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                    __asan_report_load8(&this->player_);
                  BasicComp = Player::getBasicComp(this->player_);
                  PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v106, BasicComp);
                  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48), 0xE38u, v68);
                  std::string::~string(&v106);
                  common::tools::perf::make_shared<proto_log::PlayerLogBodyCompoundBoost>();
                  v61 = std::__shared_ptr_access<proto_log::PlayerLogBodyCompoundBoost,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCompoundBoost,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 256));
                  proto_log::PlayerLogBodyCompoundBoost::set_use_material(v61, *(_DWORD *)(v3 + 80));
                  v62 = std::__shared_ptr_access<proto_log::PlayerLogBodyCompoundBoost,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCompoundBoost,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 256));
                  proto_log::PlayerLogBodyCompoundBoost::set_use_num(v62, consume_material_count_final);
                  v63 = std::__shared_ptr_access<proto_log::PlayerLogBodyCompoundBoost,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCompoundBoost,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 256));
                  if ( total_boost_time <= boost_time_past )
                    v64 = 0;
                  else
                    v64 = total_boost_time - boost_time_past;
                  proto_log::PlayerLogBodyCompoundBoost::set_reduce_time(v63, v64);
                  __for_range_3 = (std::vector<ItemParam> *)(v3 + 480);
                  *(std::vector<ItemParam>::iterator *)(v3 + 192) = std::vector<ItemParam>::begin((std::vector<ItemParam> *const)(v3 + 480));
                  __for_end_1._M_current = std::vector<ItemParam>::end(__for_range_3)._M_current;
                  while ( __gnu_cxx::operator!=<ItemParam *,std::vector<ItemParam>>(
                            (const __gnu_cxx::__normal_iterator<ItemParam*,std::vector<ItemParam> > *)(v3 + 192),
                            &__for_end_1) )
                  {
                    item_param = __gnu_cxx::__normal_iterator<ItemParam *,std::vector<ItemParam>>::operator*((const __gnu_cxx::__normal_iterator<ItemParam*,std::vector<ItemParam> > *const)(v3 + 192));
                    v65 = std::__shared_ptr_access<proto_log::PlayerLogBodyCompoundBoost,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCompoundBoost,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 256));
                    if ( *(_BYTE *)(((unsigned __int64)item_param >> 3) + 0x7FFF8000) != 0
                      && (char)(((unsigned __int8)item_param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)item_param >> 3)
                                                                                   + 0x7FFF8000) )
                    {
                      __asan_report_load4(item_param);
                    }
                    proto_log::PlayerLogBodyCompoundBoost::add_obtain_material(v65, item_param->item_id);
                    v66 = std::__shared_ptr_access<proto_log::PlayerLogBodyCompoundBoost,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCompoundBoost,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 256));
                    if ( *(_BYTE *)(((unsigned __int64)&item_param->count >> 3) + 0x7FFF8000) != 0
                      && (char)((((_BYTE)item_param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&item_param->count >> 3)
                                                                               + 0x7FFF8000) )
                    {
                      __asan_report_load4(&item_param->count);
                    }
                    proto_log::PlayerLogBodyCompoundBoost::add_obtain_num(v66, item_param->count);
                    __gnu_cxx::__normal_iterator<ItemParam *,std::vector<ItemParam>>::operator++((__gnu_cxx::__normal_iterator<ItemParam*,std::vector<ItemParam> > *const)(v3 + 192));
                  }
                  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                    __asan_report_load8(&this->player_);
                  v67 = this->player_;
                  std::shared_ptr<google::protobuf::Message>::shared_ptr(&v103, 0LL);
                  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyCompoundBoost,void>(
                    &p_body_ptr,
                    (const std::shared_ptr<proto_log::PlayerLogBodyCompoundBoost> *)(v3 + 256));
                  Player::printStatLog(v67, &p_body_ptr, &v103, 0xEu);
                  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
                  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v103);
                  std::shared_ptr<proto_log::PlayerLogBodyCompoundBoost>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyCompoundBoost> *const)(v3 + 256));
                  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48));
                  std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v3 + 480));
                }
              }
            }
            else
            {
              common::milog::MiLogStream::create(
                &v106,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/player/cook/player_cook_comp.cpp",
                "onPlayerCompoundMaterialBoostReq",
                1192);
              v34 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v106, (const char (*)[6])"Uid: ");
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8(&this->player_);
              *(_DWORD *)(v3 + 144) = Player::getUid(this->player_);
              v35 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v34,
                      (const unsigned int *)(v3 + 144));
              v36 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                      v35,
                      (const char (*)[29])", target compound group id: ");
              v37 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v36,
                      (const unsigned int *)(v3 + 64));
              common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v37, (const char (*)[21])off_2615F120);
              common::milog::MiLogStream::~MiLogStream(&v106);
            }
            std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 352));
            std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 288));
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v106,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/cook/player_cook_comp.cpp",
            "onPlayerCompoundMaterialBoostReq",
            1135);
          v12 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v106, (const char (*)[6])"Uid: ");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          *(_DWORD *)(v3 + 144) = Player::getUid(this->player_);
          v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v12,
                  (const unsigned int *)(v3 + 144));
          common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
            v13,
            (const char (*)[33])", consume_material_count is zero");
          common::milog::MiLogStream::~MiLogStream(&v106);
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v106,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/cook/player_cook_comp.cpp",
          "onPlayerCompoundMaterialBoostReq",
          1130);
        v10 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v106, (const char (*)[6])"Uid: ");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        *(_DWORD *)(v3 + 144) = Player::getUid(this->player_);
        v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v10,
                (const unsigned int *)(v3 + 144));
        common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v11, (const char (*)[21])", boost_time is zero");
        common::milog::MiLogStream::~MiLogStream(&v106);
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v106,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/cook/player_cook_comp.cpp",
        "onPlayerCompoundMaterialBoostReq",
        1125);
      v9 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
             &v106,
             (const char (*)[38])"findCompoundBoostExcelConfig failed: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 80));
      common::milog::MiLogStream::~MiLogStream(&v106);
    }
  }
  if ( v68._M_string_length == v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8040) = 0;
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
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8040) = -168430091;
  }
};

// Line 1305: range 00000000175E9198-00000000175E91D2
void __cdecl PlayerCookComp::onGetCompoundDataReq(
        PlayerCookComp *const this,
        const proto::GetCompoundDataReq *req,
        proto::GetCompoundDataRsp *rsp_0)
{
  proto::GetCompoundDataRsp::set_retcode(rsp_0, 0);
  PlayerCookComp::fillCompoundDataProto<proto::GetCompoundDataRsp>(this, rsp_0);
};

// Line 1312: range 00000000175E91D4-00000000175E93B5
void __cdecl PlayerCookComp::onTakeCompoundOutputReq(
        PlayerCookComp *const this,
        const proto::TakeCompoundOutputReq *req,
        proto::TakeCompoundOutputRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  google::protobuf::uint32 v6; // esi
  google::protobuf::RepeatedPtrField<proto::ItemParam> *v7; // rax
  uint32_t take_compound_id; // [rsp+14h] [rbp-BCh]
  google::protobuf::int32 ret_code; // [rsp+3Ch] [rbp-94h]
  char v11[144]; // [rsp+40h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 24 19 item_param_vec:1313";
  *(_QWORD *)(v3 + 16) = PlayerCookComp::onTakeCompoundOutputReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218103808;
  v5[536862722] = -202116109;
  std::vector<ItemParam>::vector((std::vector<ItemParam> *const)(v3 + 32));
  take_compound_id = proto::TakeCompoundOutputReq::compound_id(req);
  v6 = proto::TakeCompoundOutputReq::compound_group_id(req);
  ret_code = PlayerCookComp::internalTakeCompoundOutput(this, v6, take_compound_id, (std::vector<ItemParam> *)(v3 + 32));
  proto::TakeCompoundOutputRsp::set_retcode(rsp_0, ret_code);
  if ( !ret_code )
  {
    v7 = proto::TakeCompoundOutputRsp::mutable_item_list(rsp_0);
    common::tools::MiscUtils::vectorToRepeated<ItemParam,proto::ItemParam,int (ItemParam::*)(proto::ItemParam&)const>(
      (const std::vector<ItemParam> *)(v3 + 32),
      v7,
      (int (*)(const ItemParam *, proto::ItemParam *))ItemParam::toClient);
  }
  std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v3 + 32));
  if ( v11 == (char *)v3 )
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

// Line 1325: range 00000000175E93B6-00000000175EAB37
__int64 __fastcall PlayerCookComp::internalTakeCompoundOutput(
        PlayerCookComp *const this,
        __int32 take_compound_group_id,
        __int32 take_compound_id,
        std::vector<ItemParam> *item_param_vec)
{
  unsigned __int64 v4; // r14
  __int64 v5; // rax
  _DWORD *v6; // r12
  PlayerBasicComp *BasicComp; // rax
  unsigned int v8; // r13d
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false>::pointer v9; // rax
  const unsigned int *M_current; // r13
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false>::pointer v11; // rax
  std::vector<unsigned int>::const_iterator v12; // rax
  std::_Rb_tree_const_iterator<unsigned int>::reference v13; // rax
  _DWORD *v14; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  common::milog::MiLogStream *v16; // rax
  std::_Rb_tree_const_iterator<unsigned int>::reference v17; // rax
  _DWORD *v18; // rdx
  const CompoundOutputData *v19; // rax
  int v20; // r13d
  char *v21; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v22; // rax
  _DWORD *v23; // rdx
  char v24; // cl
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rax
  common::milog::MiLogStream *v26; // rax
  uint32_t *p_count; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  unsigned int v32; // ecx
  unsigned int v33; // r13d
  std::map<unsigned int,unsigned int>::mapped_type *v34; // rax
  unsigned int *v35; // rdx
  SelectType v36; // r13d
  uint32_t *p_id; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v38; // rax
  SelectType *v39; // rdx
  char v40; // cl
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::reference v42; // rax
  std::pair<unsigned int const,unsigned int> *v43; // rdx
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // rax
  common::milog::MiLogStream *v50; // rax
  common::milog::MiLogStream *v51; // rax
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // rax
  common::milog::MiLogStream *v55; // rax
  common::milog::MiLogStream *v56; // rax
  common::milog::MiLogStream *v57; // rax
  common::milog::MiLogStream *v58; // rax
  common::milog::MiLogStream *v59; // rax
  common::milog::MiLogStream *v60; // rcx
  __int64 result; // rax
  std::string v62; // [rsp+0h] [rbp-3E0h]
  std::vector<ItemParam> *item_param_veca; // [rsp+8h] [rbp-3D8h]
  PlayerCookComp *thisa; // [rsp+18h] [rbp-3C8h]
  PlayerCookComp::internalTakeCompoundOutput::STATE state; // [rsp+28h] [rbp-3B8h]
  uint32_t drop_id; // [rsp+2Ch] [rbp-3B4h]
  uint32_t drop_count; // [rsp+30h] [rbp-3B0h]
  uint32_t idx; // [rsp+34h] [rbp-3ACh]
  uint32_t now; // [rsp+3Ch] [rbp-3A4h]
  int32_t ret_0; // [rsp+40h] [rbp-3A0h]
  int32_t ret; // [rsp+44h] [rbp-39Ch]
  std::set<unsigned int>::iterator __for_begin; // [rsp+48h] [rbp-398h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+50h] [rbp-390h] BYREF
  const std::unordered_map<unsigned int,std::vector<unsigned int>> *compound_group_ids_map; // [rsp+58h] [rbp-388h]
  const data::CompoundExcelConfig *compound_config_ptr; // [rsp+60h] [rbp-380h]
  std::set<unsigned int> *__for_range; // [rsp+68h] [rbp-378h]
  PlayerItemComp *item_comp; // [rsp+70h] [rbp-370h]
  std::map<unsigned int,unsigned int> *__for_range_2; // [rsp+78h] [rbp-368h]
  std::vector<AddItemResult> *__for_range_3; // [rsp+80h] [rbp-360h]
  const AddItemResult *add_result; // [rsp+88h] [rbp-358h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *compound_id; // [rsp+90h] [rbp-350h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *finish_count; // [rsp+98h] [rbp-348h]
  std::deque<CompoundOutputData> *output_data_que_0; // [rsp+A0h] [rbp-340h]
  std::deque<CompoundOutputData> *output_data_que; // [rsp+A8h] [rbp-338h]
  std::deque<CompoundOutputData> *__for_range_0; // [rsp+B0h] [rbp-330h]
  const CompoundOutputData *output_data; // [rsp+B8h] [rbp-328h]
  const data::CompoundExcelConfig *compound_config_ptr_0; // [rsp+C0h] [rbp-320h]
  const std::vector<data::IdCountConfig> *__for_range_1; // [rsp+C8h] [rbp-318h]
  const data::IdCountConfig *output_item; // [rsp+D0h] [rbp-310h]
  std::pair<unsigned int const,unsigned int> __for_end_1; // [rsp+D8h] [rbp-308h] BYREF
  std::shared_ptr<Config> v91; // [rsp+E0h] [rbp-300h] BYREF
  std::deque<CompoundOutputData>::iterator __for_begin_0; // [rsp+F0h] [rbp-2F0h] BYREF
  std::deque<CompoundOutputData>::iterator __for_end_0; // [rsp+110h] [rbp-2D0h] BYREF
  char v94[688]; // [rsp+130h] [rbp-2B0h] BYREF

  *(&v62._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  HIDWORD(v62._anon_0._M_allocated_capacity) = take_compound_group_id;
  *(_DWORD *)v62._anon_0._M_local_buf = take_compound_id;
  v62._M_string_length = (std::string::size_type)item_param_vec;
  v4 = (unsigned __int64)v94;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_4(640LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "14 48 1 11 holder:1333 64 4 23 total_finish_count:1373 80 4 16 compound_id:1374 96 4 28 real_tot"
                        "al_finish_count:1459 112 4 27 take_compound_group_id:1324 128 4 21 take_compound_id:1324 144 8 9"
                        " iter:1462 176 8 9 iter:1340 208 24 25 normal_action_reason:1436 272 24 25 random_action_reason:"
                        "1437 336 24 11 result:1494 400 48 20 compound_id_set:1336 480 48 26 total_output_item_map:1370 5"
                        "60 48 21 finish_count_map:1372";
  *(_QWORD *)(v4 + 16) = PlayerCookComp::internalTakeCompoundOutput;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753551;
  v6[536862722] = -234556924;
  v6[536862723] = -234556924;
  v6[536862724] = 61956;
  v6[536862724] = -234881024;
  v6[536862725] = 62194;
  v6[536862725] = -234881024;
  v6[536862726] = 62194;
  v6[536862727] = -218959360;
  v6[536862728] = 62194;
  v6[536862729] = -218959360;
  v6[536862730] = 62194;
  v6[536862731] = -218959360;
  v6[536862732] = 62194;
  v6[536862734] = -218959118;
  v6[536862736] = -219021312;
  v6[536862737] = 62194;
  v6[536862739] = -202116109;
  *(_DWORD *)(v4 + 112) = take_compound_group_id;
  *(_DWORD *)(v4 + 128) = *(_DWORD *)v62._anon_0._M_local_buf;
  state = NORMAL_4;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  BasicComp = Player::getBasicComp(this->player_);
  PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&__for_end_0, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 48), 0x770u, v62);
  std::string::~string(&__for_end_0);
  std::set<unsigned int>::set((std::set<unsigned int> *const)(v4 + 400));
  if ( *(_DWORD *)(v4 + 112) )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v91);
    compound_group_ids_map = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v91)->design_config.txt_config_mgr.compound_config_mgr.compound_group_ids_map;
    std::shared_ptr<Config>::~shared_ptr(&v91);
    *(std::unordered_map<unsigned int,std::vector<unsigned int>>::const_iterator *)(v4 + 176) = std::unordered_map<unsigned int,std::vector<unsigned int>>::find(
                                                                                                  compound_group_ids_map,
                                                                                                  (const std::unordered_map<unsigned int,std::vector<unsigned int>>::key_type *)(v4 + 112));
    __for_end_1 = (std::pair<unsigned int const,unsigned int>)std::unordered_map<unsigned int,std::vector<unsigned int>>::end(compound_group_ids_map)._M_cur;
    if ( std::__detail::operator==<std::pair<unsigned int const,std::vector<unsigned int>>,false>(
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)(v4 + 176),
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)&__for_end_1) )
    {
      v8 = 5;
      goto LABEL_102;
    }
    v9 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false> *const)(v4 + 176));
    M_current = std::vector<unsigned int>::end(&v9->second)._M_current;
    v11 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false> *const)(v4 + 176));
    v12._M_current = std::vector<unsigned int>::begin(&v11->second)._M_current;
    std::set<unsigned int>::insert<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>>(
      (std::set<unsigned int> *const)(v4 + 400),
      v12,
      (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current);
  }
  else
  {
    std::set<unsigned int>::insert(
      (std::set<unsigned int> *const)(v4 + 400),
      (const std::set<unsigned int>::value_type *)(v4 + 128));
  }
  if ( std::set<unsigned int>::size((const std::set<unsigned int> *const)(v4 + 400)) == 1 )
  {
    __for_end_1 = (std::pair<unsigned int const,unsigned int>)std::set<unsigned int>::begin((const std::set<unsigned int> *const)(v4 + 400))._M_node;
    v13 = std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)&__for_end_1);
    v14 = v13;
    if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v13);
    }
    *(_DWORD *)(v4 + 96) = *v14;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v91);
    v15 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v91);
    compound_config_ptr = data::CompoundExcelConfigMgrBase::findCompoundExcelConfig(
                            &v15->design_config.txt_config_mgr.compound_config_mgr,
                            *(_DWORD *)(v4 + 96));
    std::shared_ptr<Config>::~shared_ptr(&v91);
    if ( !compound_config_ptr )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&__for_end_0,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/cook/player_cook_comp.cpp",
        "internalTakeCompoundOutput",
        1359);
      v16 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              (common::milog::MiLogStream *const)&__for_end_0,
              (const char (*)[33])"findCompoundExcelConfig failed: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v4 + 96));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__for_end_0);
      v8 = -1;
      goto LABEL_102;
    }
    if ( *(_BYTE *)(((unsigned __int64)&compound_config_ptr->type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&compound_config_ptr->type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&compound_config_ptr->type);
    }
    if ( compound_config_ptr->type == COMPOUND_RANDOM_COOK )
      state = RANDOM_0;
  }
  now = common::tools::TimeUtils::getNow();
  std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v4 + 480));
  drop_id = 0;
  drop_count = 0;
  std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v4 + 560));
  *(_DWORD *)(v4 + 64) = 0;
  __for_range = (std::set<unsigned int> *)(v4 + 400);
  __for_begin._M_node = std::set<unsigned int>::begin((const std::set<unsigned int> *const)(v4 + 400))._M_node;
  __for_end._M_node = std::set<unsigned int>::end((const std::set<unsigned int> *const)(v4 + 400))._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v17 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    v18 = v17;
    if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v17 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v17);
    }
    *(_DWORD *)(v4 + 80) = *v18;
    *(std::unordered_map<unsigned int,std::deque<CompoundOutputData>>::iterator *)(v4 + 144) = std::unordered_map<unsigned int,std::deque<CompoundOutputData>>::find(
                                                                                                 &thisa->compound_output_map_,
                                                                                                 (const std::unordered_map<unsigned int,std::deque<CompoundOutputData>>::key_type *)(v4 + 80));
    __for_end_1 = (std::pair<unsigned int const,unsigned int>)std::unordered_map<unsigned int,std::deque<CompoundOutputData>>::end(&thisa->compound_output_map_)._M_cur;
    if ( !std::__detail::operator==<std::pair<unsigned int const,std::deque<CompoundOutputData>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::deque<CompoundOutputData> >,false> *)(v4 + 144),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::deque<CompoundOutputData> >,false> *)&__for_end_1) )
    {
      output_data_que = &std::__detail::_Node_iterator<std::pair<unsigned int const,std::deque<CompoundOutputData>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::deque<CompoundOutputData> >,false,false> *const)(v4 + 144))->second;
      *(_DWORD *)(v4 + 96) = 0;
      __for_range_0 = output_data_que;
      std::deque<CompoundOutputData>::begin(&__for_begin_0, output_data_que);
      std::deque<CompoundOutputData>::end(&__for_end_0, __for_range_0);
      while ( std::operator!=<CompoundOutputData,CompoundOutputData&,CompoundOutputData*>(&__for_begin_0, &__for_end_0) )
      {
        v19 = std::_Deque_iterator<CompoundOutputData,CompoundOutputData&,CompoundOutputData*>::operator*(&__for_begin_0);
        output_data = v19;
        if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v19 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v19);
        }
        if ( now < output_data->output_time )
          break;
        ++*(_DWORD *)(v4 + 96);
        std::_Deque_iterator<CompoundOutputData,CompoundOutputData&,CompoundOutputData*>::operator++(&__for_begin_0);
      }
      if ( *(_DWORD *)(v4 + 96) )
      {
        v20 = *(_DWORD *)(v4 + 96);
        v21 = (char *)(v4 + 80);
        v22 = std::map<unsigned int,unsigned int>::operator[](
                (std::map<unsigned int,unsigned int> *const)(v4 + 560),
                (const std::map<unsigned int,unsigned int>::key_type *)(v4 + 80));
        v23 = v22;
        v24 = *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000);
        if ( v24 != 0 && (char)(((unsigned __int8)v22 & 7) + 3) >= v24 )
        {
          LOBYTE(v21) = v24 != 0;
          __asan_report_store4(v22, v21, v22);
        }
        *v23 = v20;
        *(_DWORD *)(v4 + 64) = SAFE_ADD<unsigned int,unsigned int>(*(_DWORD *)(v4 + 64), *(_DWORD *)(v4 + 96));
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v91);
        v25 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v91);
        compound_config_ptr_0 = data::CompoundExcelConfigMgrBase::findCompoundExcelConfig(
                                  &v25->design_config.txt_config_mgr.compound_config_mgr,
                                  *(_DWORD *)(v4 + 80));
        std::shared_ptr<Config>::~shared_ptr(&v91);
        if ( !compound_config_ptr_0 )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&__for_begin_0,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/cook/player_cook_comp.cpp",
            "internalTakeCompoundOutput",
            1403);
          v26 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                  (common::milog::MiLogStream *const)&__for_begin_0,
                  (const char (*)[33])"findCompoundExcelConfig failed: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, (const unsigned int *)(v4 + 80));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__for_begin_0);
          v8 = -1;
          goto LABEL_101;
        }
        if ( state )
        {
          if ( *(_BYTE *)(((unsigned __int64)&compound_config_ptr_0->drop_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&compound_config_ptr_0->drop_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&compound_config_ptr_0->drop_id);
          }
          drop_id = compound_config_ptr_0->drop_id;
          drop_count = *(_DWORD *)(v4 + 96);
        }
        else
        {
          __for_range_1 = &compound_config_ptr_0->output_vec;
          *(std::vector<data::IdCountConfig>::const_iterator *)(v4 + 176) = std::vector<data::IdCountConfig>::begin(&compound_config_ptr_0->output_vec);
          __for_end_1 = (std::pair<unsigned int const,unsigned int>)std::vector<data::IdCountConfig>::end(__for_range_1)._M_current;
          while ( __gnu_cxx::operator!=<data::IdCountConfig const*,std::vector<data::IdCountConfig>>(
                    (const __gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *)(v4 + 176),
                    (const __gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *)&__for_end_1) )
          {
            output_item = __gnu_cxx::__normal_iterator<data::IdCountConfig const*,std::vector<data::IdCountConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *const)(v4 + 176));
            p_count = &output_item->count;
            if ( *(_BYTE *)(((unsigned __int64)p_count >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)p_count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_count >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(p_count);
            }
            if ( output_item->count
              && *(_DWORD *)(v4 + 96)
              && output_item->count * *(_DWORD *)(v4 + 96) / output_item->count != *(_DWORD *)(v4 + 96) )
            {
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)&__for_end_0,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/player/cook/player_cook_comp.cpp",
                "internalTakeCompoundOutput",
                1414);
              v28 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                      (common::milog::MiLogStream *const)&__for_end_0,
                      (const char (*)[19])"output_item.count:");
              v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, &output_item->count);
              v30 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                      v29,
                      (const char (*)[10])" * count:");
              v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v30,
                      (const unsigned int *)(v4 + 96));
              common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v31, (const char (*)[10])" overflow");
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__for_end_0);
              v8 = -1;
              goto LABEL_101;
            }
            v32 = *(_DWORD *)(v4 + 96);
            if ( *(_BYTE *)(((unsigned __int64)&output_item->count >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)output_item + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&output_item->count >> 3)
                                                                         + 0x7FFF8000) )
            {
              __asan_report_load4(&output_item->count);
            }
            v33 = SAFE_MULTIPLY<unsigned int,unsigned int>(output_item->count, v32);
            v34 = std::map<unsigned int,unsigned int>::operator[](
                    (std::map<unsigned int,unsigned int> *const)(v4 + 480),
                    &output_item->id);
            v35 = v34;
            if ( *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v34 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v34);
            }
            v36 = SAFE_ADD<unsigned int,unsigned int>(*v35, v33);
            p_id = &output_item->id;
            v38 = std::map<unsigned int,unsigned int>::operator[](
                    (std::map<unsigned int,unsigned int> *const)(v4 + 480),
                    &output_item->id);
            v39 = v38;
            v40 = *(_BYTE *)(((unsigned __int64)v38 >> 3) + 0x7FFF8000);
            if ( v40 != 0 && (char)(((unsigned __int8)v38 & 7) + 3) >= v40 )
            {
              LOBYTE(p_id) = v40 != 0;
              __asan_report_store4(v38, p_id, v38);
            }
            *v39 = v36;
            __gnu_cxx::__normal_iterator<data::IdCountConfig const*,std::vector<data::IdCountConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *const)(v4 + 176));
          }
        }
      }
    }
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  if ( !std::map<unsigned int,unsigned int>::empty((const std::map<unsigned int,unsigned int> *const)(v4 + 560))
    && (state
     || !std::map<unsigned int,unsigned int>::empty((const std::map<unsigned int,unsigned int> *const)(v4 + 480)))
    && (state != RANDOM_0 || drop_count) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&thisa->player_);
    item_comp = Player::getItemComp(thisa->player_);
    ActionReason::ActionReason((ActionReason *const)(v4 + 208), ACTION_REASON_COMPOUND, ITEM_LIMIT_UNLIMITED);
    ActionReason::ActionReason((ActionReason *const)(v4 + 272), ACTION_REASON_COMPOUND, ITEM_LIMIT_COMPOUND_DROP);
    if ( state )
    {
      ret_0 = PlayerItemComp::checkFrontLooseGrantDropItems(
                item_comp,
                drop_id,
                drop_count,
                (const ActionReason *)(v4 + 272),
                0LL);
      if ( ret_0 )
      {
        v8 = ret_0;
        goto LABEL_101;
      }
    }
    else
    {
      ItemParam::vecFromItemCountMap(
        (std::vector<ItemParam> *)(v4 + 336),
        (const std::map<unsigned int,unsigned int> *)(v4 + 480));
      std::vector<ItemParam>::operator=(item_param_veca, (std::vector<ItemParam> *)(v4 + 336));
      std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v4 + 336));
      ret = PlayerItemComp::checkAddItemBatch(item_comp, item_param_veca, (const ActionReason *)(v4 + 208));
      if ( ret )
      {
        v8 = ret;
        goto LABEL_101;
      }
    }
    *(_DWORD *)(v4 + 96) = 0;
    __for_range_2 = (std::map<unsigned int,unsigned int> *)(v4 + 560);
    __for_begin._M_node = std::map<unsigned int,unsigned int>::begin((std::map<unsigned int,unsigned int> *const)(v4 + 560))._M_node;
    __for_end._M_node = std::map<unsigned int,unsigned int>::end(__for_range_2)._M_node;
    while ( std::operator!=(
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_begin,
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_end) )
    {
      v42 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)&__for_begin);
      v43 = v42;
      if ( ((unsigned __int8)v42 & 7) >= *(_BYTE *)(((unsigned __int64)v42 >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)v42 >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&v42->second + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)v42 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v42->second + 3) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load_n(v42, 8LL);
      }
      __for_end_1 = *v43;
      compound_id = std::get<0ul,unsigned int const,unsigned int>(&__for_end_1);
      finish_count = std::get<1ul,unsigned int const,unsigned int>(&__for_end_1);
      *(std::unordered_map<unsigned int,std::deque<CompoundOutputData>>::iterator *)(v4 + 144) = std::unordered_map<unsigned int,std::deque<CompoundOutputData>>::find(
                                                                                                   &thisa->compound_output_map_,
                                                                                                   compound_id);
      *(std::unordered_map<unsigned int,std::deque<CompoundOutputData>>::iterator *)(v4 + 176) = std::unordered_map<unsigned int,std::deque<CompoundOutputData>>::end(&thisa->compound_output_map_);
      if ( std::__detail::operator==<std::pair<unsigned int const,std::deque<CompoundOutputData>>,false>(
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::deque<CompoundOutputData> >,false> *)(v4 + 144),
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::deque<CompoundOutputData> >,false> *)(v4 + 176)) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&__for_begin_0,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/cook/player_cook_comp.cpp",
          "internalTakeCompoundOutput",
          1465);
        v44 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                (common::milog::MiLogStream *const)&__for_begin_0,
                (const char (*)[13])"compound_id:");
        v45 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v44, compound_id);
        common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v45, (const char (*)[11])" not exist");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__for_begin_0);
        v8 = -1;
        goto LABEL_101;
      }
      output_data_que_0 = &std::__detail::_Node_iterator<std::pair<unsigned int const,std::deque<CompoundOutputData>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::deque<CompoundOutputData> >,false,false> *const)(v4 + 144))->second;
      for ( idx = 0; ; ++idx )
      {
        if ( *(_BYTE *)(((unsigned __int64)finish_count >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)finish_count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)finish_count >> 3)
                                                                         + 0x7FFF8000) )
        {
          __asan_report_load4(finish_count);
        }
        if ( idx >= *finish_count )
          break;
        if ( std::deque<CompoundOutputData>::empty(output_data_que_0) )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&__for_end_0,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/cook/player_cook_comp.cpp",
            "internalTakeCompoundOutput",
            1473);
          v46 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                  (common::milog::MiLogStream *const)&__for_end_0,
                  (const char (*)[39])"output_data_que is empty! compound_id:");
          v47 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v46, compound_id);
          v48 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                  v47,
                  (const char (*)[15])" finish_count:");
          v49 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v48, finish_count);
          v50 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  v49,
                  (const char (*)[16])" finish_counts:");
          common::milog::MiLogStream::operator<<<unsigned int,unsigned int>(
            v50,
            (const std::map<unsigned int,unsigned int> *)(v4 + 560));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__for_end_0);
          v8 = -1;
          goto LABEL_101;
        }
        std::deque<CompoundOutputData>::pop_front(output_data_que_0);
        ++*(_DWORD *)(v4 + 96);
      }
      std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)&__for_begin);
    }
    if ( *(_DWORD *)(v4 + 96) == *(_DWORD *)(v4 + 64) )
    {
      if ( state )
      {
        std::vector<AddItemResult>::vector((std::vector<AddItemResult> *const)(v4 + 336));
        PlayerItemComp::grantDropItems(
          item_comp,
          drop_id,
          drop_count,
          (const ActionReason *)(v4 + 272),
          (std::vector<AddItemResult> *)(v4 + 336));
        std::vector<ItemParam>::clear(item_param_veca);
        __for_range_3 = (std::vector<AddItemResult> *)(v4 + 336);
        *(std::vector<AddItemResult>::iterator *)(v4 + 176) = std::vector<AddItemResult>::begin((std::vector<AddItemResult> *const)(v4 + 336));
        __for_end_1 = (std::pair<unsigned int const,unsigned int>)std::vector<AddItemResult>::end(__for_range_3)._M_current;
        while ( __gnu_cxx::operator!=<AddItemResult *,std::vector<AddItemResult>>(
                  (const __gnu_cxx::__normal_iterator<AddItemResult*,std::vector<AddItemResult> > *)(v4 + 176),
                  (const __gnu_cxx::__normal_iterator<AddItemResult*,std::vector<AddItemResult> > *)&__for_end_1) )
        {
          add_result = __gnu_cxx::__normal_iterator<AddItemResult *,std::vector<AddItemResult>>::operator*((const __gnu_cxx::__normal_iterator<AddItemResult*,std::vector<AddItemResult> > *const)(v4 + 176));
          if ( *(_BYTE *)(((unsigned __int64)&add_result->item_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&add_result->item_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&add_result->item_id);
          }
          LODWORD(v91._M_ptr) = add_result->item_id;
          if ( *(_BYTE *)(((unsigned __int64)&add_result->add_count >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)add_result + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&add_result->add_count >> 3)
                                                                      + 0x7FFF8000) )
          {
            __asan_report_load4(&add_result->add_count);
          }
          HIDWORD(v91._M_ptr) = add_result->add_count;
          v91._M_refcount._M_pi = 0LL;
          std::vector<ItemParam>::push_back(item_param_veca, (std::vector<ItemParam>::value_type *)&v91);
          __gnu_cxx::__normal_iterator<AddItemResult *,std::vector<AddItemResult>>::operator++((__gnu_cxx::__normal_iterator<AddItemResult*,std::vector<AddItemResult> > *const)(v4 + 176));
        }
        std::vector<AddItemResult>::~vector((std::vector<AddItemResult> *const)(v4 + 336));
      }
      else
      {
        PlayerItemComp::addItemBatch(item_comp, item_param_veca, (const ActionReason *)(v4 + 208), 0LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&__for_end_0,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/cook/player_cook_comp.cpp",
        "internalTakeCompoundOutput",
        1503);
      v56 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
              (common::milog::MiLogStream *const)&__for_end_0,
              (const char (*)[15])"finish_counts:");
      v57 = common::milog::MiLogStream::operator<<<unsigned int,unsigned int>(
              v56,
              (const std::map<unsigned int,unsigned int> *)(v4 + 560));
      v58 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v57, (const char (*)[12])" add_items:");
      v59 = common::milog::MiLogStream::operator<<<ItemParam>(v58, item_param_veca);
      v60 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v59, (const char (*)[9])" player:");
      if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&thisa->player_);
      operator<<(v60, thisa->player_);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__for_end_0);
      v8 = 0;
    }
    else
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&__for_end_0,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/cook/player_cook_comp.cpp",
        "internalTakeCompoundOutput",
        1482);
      v51 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)&__for_end_0,
              (const char (*)[27])"expect total_finish_count:");
      v52 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v51, (const unsigned int *)(v4 + 64));
      v53 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
              v52,
              (const char (*)[26])" real_total_finish_count:");
      v54 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v53, (const unsigned int *)(v4 + 96));
      v55 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v54, (const char (*)[16])" finish_counts:");
      common::milog::MiLogStream::operator<<<unsigned int,unsigned int>(
        v55,
        (const std::map<unsigned int,unsigned int> *)(v4 + 560));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__for_end_0);
      v8 = -1;
    }
    goto LABEL_101;
  }
  v8 = 615;
LABEL_101:
  std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v4 + 560));
  std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v4 + 480));
LABEL_102:
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v4 + 400));
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 48));
  result = v8;
  if ( v94 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8030) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8038) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8040) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF804C) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1510: range 00000000175EAB38-00000000175EAFB0
__int64 __fastcall PlayerCookComp::unlockCompoundId(PlayerCookComp *const this, uint32_t compound_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  unsigned int v5; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rcx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  __int64 result; // rax
  const data::CompoundExcelConfig *compound_config_ptr; // [rsp+18h] [rbp-E8h]
  std::shared_ptr<Config> v14; // [rsp+20h] [rbp-E0h] BYREF
  common::milog::MiLogStream v15; // [rsp+30h] [rbp-D0h] BYREF
  char v16[176]; // [rsp+50h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 16 compound_id:1509 64 24 11 notify:1529";
  *(_QWORD *)(v2 + 16) = PlayerCookComp::unlockCompoundId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  *(_DWORD *)(v2 + 48) = compound_id;
  if ( common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
         &this->unlocked_compound_set_,
         (const unsigned int *)(v2 + 48)) )
  {
    v5 = -1;
    goto LABEL_19;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v14);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v14);
  compound_config_ptr = data::CompoundExcelConfigMgrBase::findCompoundExcelConfig(
                          &v6->design_config.txt_config_mgr.compound_config_mgr,
                          *(_DWORD *)(v2 + 48));
  std::shared_ptr<Config>::~shared_ptr(&v14);
  if ( !compound_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/cook/player_cook_comp.cpp",
      "unlockCompoundId",
      1519);
    v7 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
           &v15,
           (const char (*)[33])"findCompoundExcelConfig failed: ");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 48));
    v9 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v8, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
LABEL_9:
    operator<<(v9, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
    goto LABEL_19;
  }
  if ( *(_BYTE *)(((unsigned __int64)&compound_config_ptr->is_default_unlocked >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)compound_config_ptr + 20) & 7) >= *(_BYTE *)(((unsigned __int64)&compound_config_ptr->is_default_unlocked >> 3)
                                                                     + 0x7FFF8000) )
  {
    __asan_report_load1(&compound_config_ptr->is_default_unlocked);
  }
  if ( compound_config_ptr->is_default_unlocked )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/cook/player_cook_comp.cpp",
      "unlockCompoundId",
      1524);
    v10 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
            &v15,
            (const char (*)[28])"compound is default unlock:");
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 48));
    v9 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v11, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    goto LABEL_9;
  }
  std::unordered_set<unsigned int>::insert(
    &this->unlocked_compound_set_,
    (const std::unordered_set<unsigned int>::value_type *)(v2 + 48));
  proto::CompoundUnlockNotify::CompoundUnlockNotify((proto::CompoundUnlockNotify *const)(v2 + 64));
  proto::CompoundUnlockNotify::set_compound_id((proto::CompoundUnlockNotify *const)(v2 + 64), *(_DWORD *)(v2 + 48));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 64));
  v5 = 0;
  proto::CompoundUnlockNotify::~CompoundUnlockNotify((proto::CompoundUnlockNotify *const)(v2 + 64));
LABEL_19:
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
