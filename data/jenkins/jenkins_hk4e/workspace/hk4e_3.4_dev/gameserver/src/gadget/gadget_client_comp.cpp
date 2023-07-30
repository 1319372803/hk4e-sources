// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/gadget/gadget_client_comp.cpp

// Line 18: range 0000000017536ED8-00000000175371DC
void __cdecl GadgetClientComp::GadgetClientComp(
        GadgetClientComp *const this,
        Gadget *gadget,
        const ClientGadgetParam *param)
{
  int (**v3)(...); // rdx
  uint32_t camp_id; // ecx
  uint32_t camp_type; // ecx
  uint32_t target_entity_id; // ecx
  bool is_async_load; // cl
  bool is_peer_id_from_player; // cl

  GadgetCompBase::GadgetCompBase(this, gadget);
  v3 = (int (**)(...))(&`vtable for'GadgetClientComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GadgetCompBase = v3;
  if ( *(_BYTE *)(((unsigned __int64)&param->camp_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&param->camp_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  camp_id = param->camp_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->camp_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->camp_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->camp_id_);
  }
  this->camp_id_ = camp_id;
  if ( *(_BYTE *)(((unsigned __int64)&param->camp_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)param + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->camp_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  camp_type = param->camp_type;
  if ( *(_BYTE *)(((unsigned __int64)&this->camp_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->camp_type_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->camp_type_);
  }
  this->camp_type_ = camp_type;
  if ( *(_BYTE *)(((unsigned __int64)&param->target_entity_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&param->target_entity_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  target_entity_id = param->target_entity_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->target_entity_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->target_entity_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->target_entity_id_);
  }
  this->target_entity_id_ = target_entity_id;
  if ( *(char *)(((unsigned __int64)&param->is_async_load >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&param->is_async_load);
  is_async_load = param->is_async_load;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_async_load_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 28) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_async_load_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_async_load_);
  }
  this->is_async_load_ = is_async_load;
  if ( *(_BYTE *)(((unsigned __int64)&param->is_peer_id_from_player >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)param + 116) & 7) >= *(_BYTE *)(((unsigned __int64)&param->is_peer_id_from_player >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load1(&param->is_peer_id_from_player);
  }
  is_peer_id_from_player = param->is_peer_id_from_player;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_peer_id_from_player_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 29) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_peer_id_from_player_ >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_peer_id_from_player_);
  }
  this->is_peer_id_from_player_ = is_peer_id_from_player;
  std::vector<unsigned int>::vector(&this->target_entity_id_vec_, &param->target_entity_id_vec);
};

// Line 30: range 00000000175371DE-000000001753745A
int32_t __cdecl GadgetClientComp::toClient(const GadgetClientComp *const this, proto::SceneGadgetInfo *gadget_info)
{
  const Gadget *Gadget; // rax
  uint32_t OwnerEntityId; // eax
  google::protobuf::uint32 *v4; // rdx
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+20h] [rbp-20h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+28h] [rbp-18h] BYREF
  proto::ClientGadgetInfo *client_gadget; // [rsp+30h] [rbp-10h]
  const std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-8h]

  client_gadget = proto::SceneGadgetInfo::mutable_client_gadget(gadget_info);
  if ( *(_BYTE *)(((unsigned __int64)&this->camp_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->camp_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::ClientGadgetInfo::set_camp_id(client_gadget, this->camp_id_);
  if ( *(_BYTE *)(((unsigned __int64)&this->camp_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->camp_type_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::ClientGadgetInfo::set_camp_type(client_gadget, this->camp_type_);
  Gadget = GadgetCompBase::getGadget(this);
  OwnerEntityId = Creature::getOwnerEntityId(Gadget);
  proto::ClientGadgetInfo::set_owner_entity_id(client_gadget, OwnerEntityId);
  if ( *(_BYTE *)(((unsigned __int64)&this->target_entity_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->target_entity_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::ClientGadgetInfo::set_target_entity_id(client_gadget, this->target_entity_id_);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_async_load_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 28) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_async_load_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_async_load_);
  }
  proto::ClientGadgetInfo::set_async_load(client_gadget, this->is_async_load_);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_peer_id_from_player_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 29) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_peer_id_from_player_ >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_peer_id_from_player_);
  }
  proto::ClientGadgetInfo::set_is_peer_id_from_player(client_gadget, this->is_peer_id_from_player_);
  __for_range = &this->target_entity_id_vec_;
  __for_begin._M_current = std::vector<unsigned int>::begin(&this->target_entity_id_vec_)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(&this->target_entity_id_vec_)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v4 = (google::protobuf::uint32 *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::ClientGadgetInfo::add_target_entity_id_list(client_gadget, *v4);
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  return 0;
};
