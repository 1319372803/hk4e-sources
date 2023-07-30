// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/visitor.cpp

// Line 20: range 0000000017F9F850-0000000017F9F923
int32_t __cdecl Visitor::visitEntity(Visitor *const this, Entity *entity)
{
  unsigned __int64 v2; // rax
  std::vector<std::shared_ptr<Entity>>::value_type __x; // [rsp+10h] [rbp-20h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v2 = (unsigned __int64)(this->_vptr_Visitor + 1);
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    v2 = __asan_report_load8();
  if ( (*(unsigned __int8 (__fastcall **)(Visitor *const, Entity *))v2)(this, entity) )
  {
    toThisPtr<Entity>((Entity *)&__x);
    std::vector<std::shared_ptr<Entity>>::push_back(&this->entity_vec_, &__x);
    std::shared_ptr<Entity>::~shared_ptr(&__x);
  }
  return 0;
};

// Line 31: range 0000000017F9F924-0000000017F9FDA7
bool __cdecl EntityVisitor::canAddEntity(EntityVisitor *const this, Entity *entity)
{
  unsigned __int64 v2; // rax
  bool v3; // bl
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rdx
  std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rdx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdx
  proto::ProtEntityType entity_type; // [rsp+14h] [rbp-3Ch]
  proto::ProtEntityType visitor_entity_type_0; // [rsp+18h] [rbp-38h]
  proto::ProtEntityType visitor_entity_type; // [rsp+1Ch] [rbp-34h]
  std::shared_ptr<Player> __a; // [rsp+20h] [rbp-30h] BYREF
  std::shared_ptr<Player> __b; // [rsp+30h] [rbp-20h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)entity >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v2 = (unsigned __int64)(entity->_vptr_DescribalBase + 3);
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    v2 = __asan_report_load8();
  entity_type = (*(unsigned int (__fastcall **)(Entity *))v2)(entity);
  if ( entity_type == PROT_ENTITY_EYE_POINT )
  {
    if ( std::operator==<Entity>(&this->entity_ptr_, 0LL) )
      return 0;
    v10 = (unsigned __int64)std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->entity_ptr_);
    if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
      v10 = __asan_report_load8();
    v11 = *(_QWORD *)v10 + 24LL;
    if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
      v10 = __asan_report_load8();
    visitor_entity_type_0 = (*(unsigned int (__fastcall **)(unsigned __int64))v11)(v10);
    if ( visitor_entity_type_0 != PROT_ENTITY_AVATAR )
    {
      if ( visitor_entity_type_0 != PROT_ENTITY_EYE_POINT )
        return 1;
      goto LABEL_20;
    }
    v12 = (unsigned __int64)std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->entity_ptr_);
    if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
      v12 = __asan_report_load8();
    v13 = *(_QWORD *)v12 + 152LL;
    if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
      v12 = __asan_report_load8();
    (*(void (__fastcall **)(std::shared_ptr<Player> *, unsigned __int64))v13)(&__b, v12);
    if ( *(_BYTE *)(((unsigned __int64)entity >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v9 = (unsigned __int64)(entity->_vptr_DescribalBase + 19);
    if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
      v9 = __asan_report_load8();
LABEL_30:
    (*(void (__fastcall **)(std::shared_ptr<Player> *, Entity *))v9)(&__a, entity);
    v3 = std::operator!=<Player,Player>(&__a, &__b);
    std::shared_ptr<Player>::~shared_ptr(&__a);
    std::shared_ptr<Player>::~shared_ptr(&__b);
    return v3;
  }
  if ( entity_type > PROT_ENTITY_EYE_POINT )
    return 0;
  if ( entity_type != PROT_ENTITY_WEATHER )
  {
    if ( entity_type > PROT_ENTITY_WEATHER )
      return 0;
    if ( entity_type != PROT_ENTITY_AVATAR )
      return entity_type > PROT_ENTITY_NONE && (unsigned int)(entity_type - 2) <= 2;
    if ( std::operator==<Entity>(&this->entity_ptr_, 0LL) )
      return 0;
    v4 = (unsigned __int64)std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->entity_ptr_);
    if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
      v4 = __asan_report_load8();
    v5 = *(_QWORD *)v4 + 24LL;
    if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
      v4 = __asan_report_load8();
    visitor_entity_type = (*(unsigned int (__fastcall **)(unsigned __int64))v5)(v4);
    if ( visitor_entity_type == PROT_ENTITY_AVATAR )
    {
LABEL_20:
      v6 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->entity_ptr_);
      return operator!=(entity, v6);
    }
    if ( visitor_entity_type != PROT_ENTITY_EYE_POINT )
      return 1;
    v7 = (unsigned __int64)std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->entity_ptr_);
    if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
      v7 = __asan_report_load8();
    v8 = *(_QWORD *)v7 + 152LL;
    if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
      v7 = __asan_report_load8();
    (*(void (__fastcall **)(std::shared_ptr<Player> *, unsigned __int64))v8)(&__b, v7);
    if ( *(_BYTE *)(((unsigned __int64)entity >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v9 = (unsigned __int64)(entity->_vptr_DescribalBase + 19);
    if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
      v9 = __asan_report_load8();
    goto LABEL_30;
  }
  return 1;
};

// Line 80: range 0000000017F9FDA8-0000000017FA026C
bool __cdecl AuthorityVisitor::canAddEntity(AuthorityVisitor *const this, Entity *entity)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rax
  char v4; // bl
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdx
  std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rdx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rdx
  proto::ProtEntityType visitor_entity_type_0; // [rsp+18h] [rbp-38h]
  proto::ProtEntityType visitor_entity_type; // [rsp+1Ch] [rbp-34h]
  std::shared_ptr<Player> __a; // [rsp+20h] [rbp-30h] BYREF
  std::shared_ptr<Player> __b; // [rsp+30h] [rbp-20h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)entity >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v2 = (unsigned __int64)(entity->_vptr_DescribalBase + 3);
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    v2 = __asan_report_load8();
  switch ( (*(unsigned int (__fastcall **)(Entity *))v2)(entity) )
  {
    case 1u:
      if ( std::operator==<Entity>(&this->entity_ptr_, 0LL) )
      {
        v4 = 0;
      }
      else
      {
        v5 = (unsigned __int64)std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->entity_ptr_);
        if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
          v5 = __asan_report_load8();
        v6 = *(_QWORD *)v5 + 24LL;
        if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
          v5 = __asan_report_load8();
        visitor_entity_type = (*(unsigned int (__fastcall **)(unsigned __int64))v6)(v5);
        if ( visitor_entity_type == PROT_ENTITY_AVATAR )
          goto LABEL_18;
        if ( visitor_entity_type == PROT_ENTITY_EYE_POINT )
        {
          v8 = (unsigned __int64)std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->entity_ptr_);
          if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
            v8 = __asan_report_load8();
          v9 = *(_QWORD *)v8 + 152LL;
          if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
            v8 = __asan_report_load8();
          (*(void (__fastcall **)(std::shared_ptr<Player> *, unsigned __int64))v9)(&__b, v8);
          if ( *(_BYTE *)(((unsigned __int64)entity >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v10 = (unsigned __int64)(entity->_vptr_DescribalBase + 19);
          if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
            v10 = __asan_report_load8();
          goto LABEL_28;
        }
        v4 = 1;
      }
      break;
    case 2u:
    case 4u:
    case 7u:
      if ( *(_BYTE *)(((unsigned __int64)entity >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v3 = (unsigned __int64)(entity->_vptr_DescribalBase + 27);
      if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
        v3 = __asan_report_load8();
      v4 = (*(__int64 (__fastcall **)(Entity *))v3)(entity);
      break;
    case 0xDu:
      if ( std::operator==<Entity>(&this->entity_ptr_, 0LL) )
      {
        v4 = 0;
      }
      else
      {
        v11 = (unsigned __int64)std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->entity_ptr_);
        if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
          v11 = __asan_report_load8();
        v12 = *(_QWORD *)v11 + 24LL;
        if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
          v11 = __asan_report_load8();
        visitor_entity_type_0 = (*(unsigned int (__fastcall **)(unsigned __int64))v12)(v11);
        if ( visitor_entity_type_0 == PROT_ENTITY_AVATAR )
        {
          v13 = (unsigned __int64)std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->entity_ptr_);
          if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
            v13 = __asan_report_load8();
          v14 = *(_QWORD *)v13 + 152LL;
          if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
            v13 = __asan_report_load8();
          (*(void (__fastcall **)(std::shared_ptr<Player> *, unsigned __int64))v14)(&__b, v13);
          if ( *(_BYTE *)(((unsigned __int64)entity >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v10 = (unsigned __int64)(entity->_vptr_DescribalBase + 19);
          if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
            v10 = __asan_report_load8();
LABEL_28:
          (*(void (__fastcall **)(std::shared_ptr<Player> *, Entity *))v10)(&__a, entity);
          v4 = std::operator!=<Player,Player>(&__a, &__b);
          std::shared_ptr<Player>::~shared_ptr(&__a);
          std::shared_ptr<Player>::~shared_ptr(&__b);
        }
        else if ( visitor_entity_type_0 == PROT_ENTITY_EYE_POINT )
        {
LABEL_18:
          v7 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->entity_ptr_);
          v4 = operator!=(entity, v7);
        }
        else
        {
          v4 = 1;
        }
      }
      break;
    default:
      v4 = 0;
      break;
  }
  return v4;
};

// Line 128: range 0000000017FA026E-0000000017FA042E
bool __cdecl GatherVisitor::canAddEntity(GatherVisitor *const this, Entity *entity)
{
  unsigned __int64 p_M_end_of_storage; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // rax
  bool v6; // r14
  bool result; // al
  EcsBase<Gadget,GadgetCompBase,28> v8; // [rsp+20h] [rbp-80h] BYREF

  p_M_end_of_storage = (unsigned __int64)&v8.comp_vec_._M_impl._M_end_of_storage;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      p_M_end_of_storage = v3;
  }
  *(_QWORD *)p_M_end_of_storage = 1102416563LL;
  *(_QWORD *)(p_M_end_of_storage + 8) = "1 32 16 14 gadget_ptr:132";
  *(_QWORD *)(p_M_end_of_storage + 16) = GatherVisitor::canAddEntity;
  v4 = p_M_end_of_storage >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)entity >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v5 = (unsigned __int64)(entity->_vptr_DescribalBase + 3);
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v5 = __asan_report_load8();
  if ( (*(unsigned int (__fastcall **)(Entity *))v5)(entity) == 4 )
  {
    toPtr<Gadget,Entity>((Entity *)(p_M_end_of_storage + 32));
    if ( std::operator!=<Gadget>((const std::shared_ptr<Gadget> *)(p_M_end_of_storage + 32), 0LL) )
    {
      std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_end_of_storage + 32));
      EcsBase<Gadget,GadgetCompBase,28u>::findComp<GatherComp>(&v8);
      v6 = std::operator!=<GatherComp>((const std::shared_ptr<GatherComp> *)&v8, 0LL);
      std::shared_ptr<GatherComp>::~shared_ptr((std::shared_ptr<GatherComp> *const)&v8);
    }
    else
    {
      v6 = 0;
    }
    std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(p_M_end_of_storage + 32));
  }
  else
  {
    v6 = 0;
  }
  result = v6;
  if ( &v8.comp_vec_._M_impl._M_end_of_storage == (std::_Vector_base<std::pair<unsigned int,std::shared_ptr<GadgetCompBase> >>::pointer *)p_M_end_of_storage )
  {
    *(_QWORD *)((p_M_end_of_storage >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)p_M_end_of_storage = 1172321806LL;
    *(_QWORD *)((p_M_end_of_storage >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};
