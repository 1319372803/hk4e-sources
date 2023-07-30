// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/regional_play/player_regional_play_comp.h

// Line 19: range 0000000015D40704-0000000015D40793
void __cdecl DeathZoneData::DeathZoneData(DeathZoneData *const this)
{
  bool v1; // dl
  __int64 v2; // rsi
  __int64 v3; // rdx

  v1 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v1 )
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3, v1);
  this->id = 0;
  v2 = ((_BYTE)this + 4) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->is_open, v2, v3);
  this->is_open = 0;
};

// Line 29: range 0000000015F45C86-0000000015F45D29
void __cdecl PlayerRegionalPlayComp::~PlayerRegionalPlayComp(PlayerRegionalPlayComp *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'PlayerRegionalPlayComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_PlayerCompBase = v2;
  std::map<unsigned int,DeathZoneData>::~map(&this->death_zone_map_);
  std::string::~string(&this->last_play_name_);
  std::map<unsigned int,float>::~map(&this->mp_var_map_);
  std::map<unsigned int,float>::~map(&this->var_map_);
  std::map<std::string,std::shared_ptr<BaseRegionalPlay>>::~map(&this->play_ptr_map_);
  PlayerCompBase::~PlayerCompBase(this);
};

// Line 29: range 0000000015F45D2A-0000000015F45D54
void __cdecl PlayerRegionalPlayComp::~PlayerRegionalPlayComp(PlayerRegionalPlayComp *const this)
{
  PlayerRegionalPlayComp::~PlayerRegionalPlayComp(this);
  operator delete(this, 0x108uLL);
};

// Line 32: range 0000000017214AA7-0000000017214AB1
uint32_t __cdecl PlayerRegionalPlayComp::getType()
{
  return 65;
};

// Line 35: range 000000001748ECFC-000000001748EDE8
void __cdecl ZN22PlayerRegionalPlayCompCI214PlayerCompBaseER6Player(PlayerRegionalPlayComp *const this, Player *a2)
{
  int (**v2)(...); // rdx

  PlayerCompBase::PlayerCompBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'PlayerRegionalPlayComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_PlayerCompBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_death_zone_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_death_zone_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_death_zone_id_, a2, (_BYTE)this + 32);
  }
  this->cur_death_zone_id_ = 0;
  std::map<std::string,std::shared_ptr<BaseRegionalPlay>>::map(&this->play_ptr_map_);
  std::map<unsigned int,float>::map(&this->var_map_);
  std::map<unsigned int,float>::map(&this->mp_var_map_);
  std::string::basic_string(&this->last_play_name_);
  std::map<unsigned int,DeathZoneData>::map(&this->death_zone_map_);
};

// Line 65: range 0000000013EC26CE-0000000013EC26E1
const std::string *__cdecl PlayerRegionalPlayComp::getLastPlayName[abi:cxx11](const PlayerRegionalPlayComp *const this)
{
  return &this->last_play_name_;
};

// Line 84: range 0000000015D375C4-0000000015D375EF
void __cdecl PlayerRegionalPlayComp::setLastPlayName(PlayerRegionalPlayComp *const this, const std::string *play_name)
{
  std::string::operator=(&this->last_play_name_, play_name);
};

// Line 115: range 000000001386B3AA-000000001386B4CB
std::shared_ptr<DeathZoneRegionalPlay> __cdecl PlayerRegionalPlayComp::findRegionalPlay<DeathZoneRegionalPlay>(
        PlayerRegionalPlayComp *const this)
{
  __int64 v1; // rsi
  bool v2; // bl
  std::shared_ptr<DeathZoneRegionalPlay> result; // rax
  std::map<std::string,std::shared_ptr<BaseRegionalPlay>>::iterator __for_begin; // [rsp+10h] [rbp-50h] BYREF
  std::map<std::string,std::shared_ptr<BaseRegionalPlay>>::iterator __for_end; // [rsp+18h] [rbp-48h] BYREF
  std::map<std::string,std::shared_ptr<BaseRegionalPlay>> *__for_range; // [rsp+20h] [rbp-40h]
  std::pair<const std::string,std::shared_ptr<BaseRegionalPlay> > *__in; // [rsp+28h] [rbp-38h]
  std::tuple_element<0,std::pair<const std::string,std::shared_ptr<BaseRegionalPlay> > >::type *play_name; // [rsp+30h] [rbp-30h]
  std::tuple_element<1,std::pair<const std::string,std::shared_ptr<BaseRegionalPlay> > >::type *play_ptr; // [rsp+38h] [rbp-28h]
  std::shared_ptr<BaseRegionalPlay> __r; // [rsp+40h] [rbp-20h] BYREF

  __for_range = (std::map<std::string,std::shared_ptr<BaseRegionalPlay>> *)(v1 + 40);
  __for_begin._M_node = std::map<std::string,std::shared_ptr<BaseRegionalPlay>>::begin((std::map<std::string,std::shared_ptr<BaseRegionalPlay>> *const)(v1 + 40))._M_node;
  __for_end._M_node = std::map<std::string,std::shared_ptr<BaseRegionalPlay>>::end((std::map<std::string,std::shared_ptr<BaseRegionalPlay>> *const)(v1 + 40))._M_node;
  while ( 1 )
  {
    if ( !std::operator!=(&__for_begin, &__for_end) )
    {
      std::shared_ptr<DeathZoneRegionalPlay>::shared_ptr((std::shared_ptr<DeathZoneRegionalPlay> *const)this, 0LL);
      goto LABEL_9;
    }
    __in = std::_Rb_tree_iterator<std::pair<std::string const,std::shared_ptr<BaseRegionalPlay>>>::operator*(&__for_begin);
    play_name = std::get<0ul,std::string const,std::shared_ptr<BaseRegionalPlay>>(__in);
    play_ptr = std::get<1ul,std::string const,std::shared_ptr<BaseRegionalPlay>>(__in);
    std::dynamic_pointer_cast<DeathZoneRegionalPlay,BaseRegionalPlay>(&__r);
    v2 = std::operator!=<DeathZoneRegionalPlay>(0LL, (const std::shared_ptr<DeathZoneRegionalPlay> *)&__r);
    std::shared_ptr<DeathZoneRegionalPlay>::~shared_ptr((std::shared_ptr<DeathZoneRegionalPlay> *const)&__r);
    if ( v2 )
      break;
    std::_Rb_tree_iterator<std::pair<std::string const,std::shared_ptr<BaseRegionalPlay>>>::operator++(&__for_begin);
  }
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, &__r);
  result = std::dynamic_pointer_cast<DeathZoneRegionalPlay,BaseRegionalPlay>((const std::shared_ptr<BaseRegionalPlay> *)this);
LABEL_9:
  result._M_ptr = (std::__shared_ptr<DeathZoneRegionalPlay,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};
