// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/ability/ability_def.cpp

// Line 21: range 00000000130C4774-00000000130C4832
common::milog::MiLogStream *__cdecl operator<<(common::milog::MiLogStream *stream, const ActionParam *action_param)
{
  std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rdx
  std::__shared_ptr_access<ActorModifier,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rdx
  std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rdx

  if ( std::operator!=<ActorAbility>(&action_param->ability_ptr, 0LL) )
  {
    v2 = std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false> *const)action_param);
    common::milog::MiLogStream::operator<<<ActorAbility,(ActorAbility*)0>(stream, v2);
  }
  if ( std::operator!=<ActorModifier>(&action_param->modifier_ptr, 0LL) )
  {
    v3 = std::__shared_ptr_access<ActorModifier,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<ActorModifier,(__gnu_cxx::_Lock_policy)2,false,false> *const)&action_param->modifier_ptr);
    common::milog::MiLogStream::operator<<<ActorModifier,(ActorModifier*)0>(stream, v3);
  }
  if ( std::operator!=<Creature>(&action_param->target_ptr, 0LL) )
  {
    v4 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)&action_param->target_ptr);
    common::milog::MiLogStream::operator<<<Creature,(Creature*)0>(stream, v4);
  }
  return stream;
};

// Line 38: range 00000000130C4833-00000000130C48B6
common::milog::MiLogStream *__cdecl operator<<(common::milog::MiLogStream *stream, const MixinParam *mixin_param)
{
  std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rdx
  std::__shared_ptr_access<ActorModifier,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rdx

  if ( std::operator!=<ActorAbility>(&mixin_param->ability_ptr, 0LL) )
  {
    v2 = std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false> *const)mixin_param);
    common::milog::MiLogStream::operator<<<ActorAbility,(ActorAbility*)0>(stream, v2);
  }
  if ( std::operator!=<ActorModifier>(&mixin_param->modifier_ptr, 0LL) )
  {
    v3 = std::__shared_ptr_access<ActorModifier,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<ActorModifier,(__gnu_cxx::_Lock_policy)2,false,false> *const)&mixin_param->modifier_ptr);
    common::milog::MiLogStream::operator<<<ActorModifier,(ActorModifier*)0>(stream, v3);
  }
  return stream;
};

// Line 51: range 00000000130C48B7-00000000130C49CC
common::milog::MiLogStream *__cdecl operator<<(
        common::milog::MiLogStream *stream,
        const PredicateParam *predicate_param)
{
  std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rdx
  std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rdx
  common::milog::MiLogStream *v4; // rbx
  std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rbx
  std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax

  if ( std::operator!=<ActorAbility>(&predicate_param->ability_ptr, 0LL) )
  {
    v2 = std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false> *const)predicate_param);
    common::milog::MiLogStream::operator<<<ActorAbility,(ActorAbility*)0>(stream, v2);
  }
  if ( std::operator!=<ActorAbility>(&predicate_param->ability_ptr, 0LL) )
  {
    v3 = std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false> *const)predicate_param);
    common::milog::MiLogStream::operator<<<ActorAbility,(ActorAbility*)0>(stream, v3);
  }
  if ( std::operator!=<Creature>(&predicate_param->source_ptr, 0LL) )
  {
    v4 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(stream, (const char (*)[8])"source:");
    v5 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)&predicate_param->source_ptr);
    common::milog::MiLogStream::operator<<<Creature,(Creature*)0>(v4, v5);
  }
  if ( std::operator!=<Creature>(&predicate_param->target_ptr, 0LL) )
  {
    v6 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(stream, (const char (*)[8])"target:");
    v7 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)&predicate_param->target_ptr);
    common::milog::MiLogStream::operator<<<Creature,(Creature*)0>(v6, v7);
  }
  return stream;
};

// Line 73: range 00000000130C49CD-00000000130C4A84
common::milog::MiLogStream *__cdecl operator<<(common::milog::MiLogStream *stream, const TalentParam *talent_param)
{
  common::milog::MiLogStream *v2; // rcx
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v4; // rcx
  common::milog::MiLogStream *v5; // rax

  v2 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
         stream,
         (const char (*)[20])"TalentParam[avatar:");
  if ( *(_BYTE *)(((unsigned __int64)talent_param >> 3) + 0x7FFF8000) )
    __asan_report_load8(talent_param);
  v3 = common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v2, talent_param->target);
  v4 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v3, (const char (*)[2])" ");
  if ( *(_BYTE *)(((unsigned __int64)&talent_param->base_talent >> 3) + 0x7FFF8000) )
    __asan_report_load8(&talent_param->base_talent);
  v5 = operator<<(v4, talent_param->base_talent);
  common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v5, (const char (*)[2])"]");
  return stream;
};
