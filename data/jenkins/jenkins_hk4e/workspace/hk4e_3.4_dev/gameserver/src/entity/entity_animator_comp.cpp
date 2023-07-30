// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/entity/entity_animator_comp.cpp

// Line 17: range 000000001660DF34-000000001660E06E
int32_t __cdecl EntityAnimatorComp::toClient(const EntityAnimatorComp *const this, proto::SceneEntityInfo *entity_info)
{
  proto::EntityAuthorityInfo *v2; // rdx
  std::map<int,proto::AnimatorParameterValueInfo>::const_iterator __for_begin; // [rsp+10h] [rbp-40h] BYREF
  std::map<int,proto::AnimatorParameterValueInfo>::const_iterator __for_end; // [rsp+18h] [rbp-38h] BYREF
  proto::AnimatorParameterValueInfoPair *animator_para_pair; // [rsp+20h] [rbp-30h]
  const std::map<int,proto::AnimatorParameterValueInfo> *__for_range; // [rsp+28h] [rbp-28h]
  const std::pair<int const,proto::AnimatorParameterValueInfo> *v8; // [rsp+30h] [rbp-20h]
  std::tuple_element<0,const std::pair<int const,proto::AnimatorParameterValueInfo> >::type *name_id; // [rsp+38h] [rbp-18h]
  std::tuple_element<1,const std::pair<int const,proto::AnimatorParameterValueInfo> >::type *param; // [rsp+40h] [rbp-10h]
  proto::AnimatorParameterValueInfo *animator_para; // [rsp+48h] [rbp-8h]

  animator_para_pair = proto::SceneEntityInfo::add_animator_para_list(entity_info);
  __for_range = &this->anim_param_map_;
  __for_begin._M_node = std::map<int,proto::AnimatorParameterValueInfo>::begin(&this->anim_param_map_)._M_node;
  __for_end._M_node = std::map<int,proto::AnimatorParameterValueInfo>::end(&this->anim_param_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v8 = std::_Rb_tree_const_iterator<std::pair<int const,proto::AnimatorParameterValueInfo>>::operator*(&__for_begin);
    name_id = std::get<0ul,int const,proto::AnimatorParameterValueInfo>(v8);
    param = (std::tuple_element<1,const std::pair<int const,proto::AnimatorParameterValueInfo> >::type *)std::get<1ul,int const,proto::AnimatorParameterValueInfo>(v8);
    if ( *(_BYTE *)(((unsigned __int64)name_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)name_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)name_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(name_id);
    }
    proto::AnimatorParameterValueInfoPair::set_name_id(animator_para_pair, *name_id);
    animator_para = proto::AnimatorParameterValueInfoPair::mutable_animator_para(animator_para_pair);
    proto::AnimatorParameterValueInfo::operator=(animator_para, param);
    std::_Rb_tree_const_iterator<std::pair<int const,proto::AnimatorParameterValueInfo>>::operator++(&__for_begin);
  }
  v2 = proto::SceneEntityInfo::mutable_entity_authority_info(entity_info);
  EntityAnimatorComp::toClient(this, v2);
  return 0;
};

// Line 30: range 000000001660E070-000000001660E14F
void __cdecl EntityAnimatorComp::toClient(
        const EntityAnimatorComp *const this,
        proto::EntityAuthorityInfo *authority_info)
{
  std::map<int,proto::AnimatorParameterValueInfoPair>::const_iterator __for_begin; // [rsp+10h] [rbp-40h] BYREF
  std::map<int,proto::AnimatorParameterValueInfoPair>::const_iterator __for_end; // [rsp+18h] [rbp-38h] BYREF
  proto::EntityRendererChangedInfo *renderer_changed_info; // [rsp+20h] [rbp-30h]
  const std::map<int,proto::AnimatorParameterValueInfoPair> *__for_range; // [rsp+28h] [rbp-28h]
  const std::pair<int const,proto::AnimatorParameterValueInfoPair> *v6; // [rsp+30h] [rbp-20h]
  std::tuple_element<0,const std::pair<int const,proto::AnimatorParameterValueInfoPair> >::type *name_id; // [rsp+38h] [rbp-18h]
  std::tuple_element<1,const std::pair<int const,proto::AnimatorParameterValueInfoPair> >::type *param; // [rsp+40h] [rbp-10h]
  proto::AnimatorParameterValueInfoPair *pose_para_pair; // [rsp+48h] [rbp-8h]

  renderer_changed_info = proto::EntityAuthorityInfo::mutable_renderer_changed_info(authority_info);
  proto::EntityRendererChangedInfo::operator=(renderer_changed_info, &this->renderer_change_info_);
  __for_range = &this->pose_param_map_;
  __for_begin._M_node = std::map<int,proto::AnimatorParameterValueInfoPair>::begin(&this->pose_param_map_)._M_node;
  __for_end._M_node = std::map<int,proto::AnimatorParameterValueInfoPair>::end(&this->pose_param_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v6 = std::_Rb_tree_const_iterator<std::pair<int const,proto::AnimatorParameterValueInfoPair>>::operator*(&__for_begin);
    name_id = std::get<0ul,int const,proto::AnimatorParameterValueInfoPair>(v6);
    param = (std::tuple_element<1,const std::pair<int const,proto::AnimatorParameterValueInfoPair> >::type *)std::get<1ul,int const,proto::AnimatorParameterValueInfoPair>(v6);
    pose_para_pair = proto::EntityAuthorityInfo::add_pose_para_list(authority_info);
    proto::AnimatorParameterValueInfoPair::operator=(pose_para_pair, param);
    std::_Rb_tree_const_iterator<std::pair<int const,proto::AnimatorParameterValueInfoPair>>::operator++(&__for_begin);
  }
};

// Line 41: range 000000001660E150-000000001660E179
void __cdecl EntityAnimatorComp::toClient(
        const EntityAnimatorComp *const this,
        proto::EntityRendererChangedInfo *renderer_changed_info)
{
  proto::EntityRendererChangedInfo::operator=(renderer_changed_info, &this->renderer_change_info_);
};

// Line 46: range 000000001660E17A-000000001660E260
void __fastcall EntityAnimatorComp::cacheAnimatorParam(
        EntityAnimatorComp *const this,
        int32_t name_id,
        const proto::AnimatorParameterValueInfo *param)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  proto::AnimatorParameterValueInfo *v6; // rax
  char v8[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 10 name_id:45";
  *(_QWORD *)(v3 + 16) = EntityAnimatorComp::cacheAnimatorParam;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = name_id;
  v6 = std::map<int,proto::AnimatorParameterValueInfo>::operator[](
         &this->anim_param_map_,
         (const std::map<int,proto::AnimatorParameterValueInfo>::key_type *)(v3 + 32));
  proto::AnimatorParameterValueInfo::operator=(v6, param);
  if ( v8 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 51: range 000000001660E262-000000001660E2D0
void __cdecl EntityAnimatorComp::cacheRendererChangedInfo(
        EntityAnimatorComp *const this,
        const proto::EntityRendererChangedInfo *renderer_change_info)
{
  google::protobuf::uint32 v2; // eax
  bool is_cached; // al

  proto::EntityRendererChangedInfo::MergeFrom(&this->renderer_change_info_, renderer_change_info);
  v2 = proto::EntityRendererChangedInfo::visibility_count(renderer_change_info);
  proto::EntityRendererChangedInfo::set_visibility_count(&this->renderer_change_info_, v2);
  is_cached = proto::EntityRendererChangedInfo::is_cached(renderer_change_info);
  proto::EntityRendererChangedInfo::set_is_cached(&this->renderer_change_info_, is_cached);
};

// Line 58: range 000000001660E2D2-000000001660E2F0
void __cdecl EntityAnimatorComp::clearRendererChangedInfo(EntityAnimatorComp *const this)
{
  proto::EntityRendererChangedInfo::Clear(&this->renderer_change_info_);
};

// Line 63: range 000000001660E2F2-000000001660E345
void __cdecl EntityAnimatorComp::cachePoseParam(
        EntityAnimatorComp *const this,
        const proto::AnimatorParameterValueInfoPair *param)
{
  proto::AnimatorParameterValueInfoPair *v2; // rdx
  std::map<int,proto::AnimatorParameterValueInfoPair>::key_type __k[5]; // [rsp+1Ch] [rbp-14h] BYREF

  __k[0] = proto::AnimatorParameterValueInfoPair::name_id(param);
  v2 = std::map<int,proto::AnimatorParameterValueInfoPair>::operator[](&this->pose_param_map_, __k);
  proto::AnimatorParameterValueInfoPair::operator=(v2, param);
};
