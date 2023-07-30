// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_multistage_play_comp.h

// Line 37: range 0000000015189DD0-0000000015189E56
void __cdecl SceneMultistagePlayCompBase::SceneMultistagePlayCompBase(
        SceneMultistagePlayCompBase *const this,
        SceneMultistagePlay *play)
{
  int (**v2)(...); // rdx

  std::enable_shared_from_this<SceneMultistagePlayCompBase>::enable_shared_from_this(&this->std::enable_shared_from_this<SceneMultistagePlayCompBase>);
  v2 = (int (**)(...))(&`vtable for'SceneMultistagePlayCompBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, play);
  this->_vptr_SceneMultistagePlayCompBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_multistage_play_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->scene_multistage_play_, play);
  this->scene_multistage_play_ = play;
};

// Line 38: range 000000001519996E-0000000015199998
void __cdecl SceneMultistagePlayCompBase::~SceneMultistagePlayCompBase(SceneMultistagePlayCompBase *const this)
{
  SceneMultistagePlayCompBase::~SceneMultistagePlayCompBase(this);
  operator delete(this, 0x20uLL);
};

// Line 38: range 000000001519991C-000000001519996D
void __cdecl SceneMultistagePlayCompBase::~SceneMultistagePlayCompBase(SceneMultistagePlayCompBase *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'SceneMultistagePlayCompBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_SceneMultistagePlayCompBase = v2;
  std::enable_shared_from_this<SceneMultistagePlayCompBase>::~enable_shared_from_this(&this->std::enable_shared_from_this<SceneMultistagePlayCompBase>);
};

// Line 43: range 0000000016238E46-0000000016238E80
const SceneMultistagePlay *__cdecl SceneMultistagePlayCompBase::getSceneMultistagePlay(
        const SceneMultistagePlayCompBase *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_multistage_play_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return this->scene_multistage_play_;
};

// Line 56: range 000000001518B3AC-000000001518B3D6
void __cdecl SceneMultistagePlay::~SceneMultistagePlay(SceneMultistagePlay *const this)
{
  SceneMultistagePlay::~SceneMultistagePlay(this);
  operator delete(this, 0x160uLL);
};

// Line 56: range 000000001518B2E2-000000001518B3AB
void __cdecl SceneMultistagePlay::~SceneMultistagePlay(SceneMultistagePlay *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'SceneMultistagePlay + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  std::set<unsigned int>::~set(&this->player_uid_set_);
  std::unordered_map<unsigned int,std::map<std::string,int>>::~unordered_map(&this->uid_value_map_);
  std::unordered_map<std::string,std::function<void ()(unsigned int)>>::~unordered_map(&this->value_setter_map_);
  std::shared_ptr<SceneTimer>::~shared_ptr(&this->stage_timer_ptr_);
  std::string::~string(&this->current_stage_name_);
  std::weak_ptr<Group>::~weak_ptr(&this->group_wtr_);
  EcsBase<SceneMultistagePlay,SceneMultistagePlayCompBase,2u>::~EcsBase(&this->EcsBase<SceneMultistagePlay,SceneMultistagePlayCompBase,2>);
  std::enable_shared_from_this<SceneMultistagePlay>::~enable_shared_from_this(&this->std::enable_shared_from_this<SceneMultistagePlay>);
};

// Line 58: range 0000000015189E58-0000000015189EA6
GroupPtr __cdecl SceneMultistagePlay::getGroupPtr(SceneMultistagePlay *const this)
{
  __int64 v1; // rsi
  GroupPtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, v1);
  result = std::weak_ptr<Group>::lock((const std::weak_ptr<Group> *const)this);
  result._M_ptr = (std::__shared_ptr<Group,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 59: range 0000000015189EA8-0000000015189EE2
Scene *__cdecl SceneMultistagePlay::getScene(SceneMultistagePlay *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return this->scene_;
};

// Line 60: range 0000000015189EE4-0000000015189F1E
const Scene *__cdecl SceneMultistagePlay::getScene(const SceneMultistagePlay *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return this->scene_;
};

// Line 83: range 0000000015189F20-0000000015189FF1
bool __fastcall SceneMultistagePlay::isPlayerInPlay(SceneMultistagePlay *const this, uint32_t uid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  bool result; // al
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 6 uid:83";
  *(_QWORD *)(v2 + 16) = SceneMultistagePlay::isPlayerInPlay;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = uid;
  result = common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
             &this->player_uid_set_,
             (const unsigned int *)(v2 + 32));
  if ( v6 == (char *)v2 )
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

// Line 89: range 0000000015189FF2-000000001518A004
int32_t __cdecl SceneMultistagePlay::initByParamTable(
        SceneMultistagePlay *const this,
        const luabind::adl::object *param_table)
{
  return -1;
};

// Line 90: range 000000001518A006-000000001518A018
int32_t __cdecl SceneMultistagePlay::initByParamMap(
        SceneMultistagePlay *const this,
        const std::unordered_map<std::string,unsigned int> *param_map)
{
  return -1;
};

// Line 98: range 000000001518A01A-000000001518A066
void __cdecl SceneMultistagePlay::procStageOnTimer(SceneMultistagePlay *const this, bool *is_end)
{
  char v3; // dl
  __int64 v4; // rsi
  __int64 v5; // rdx

  v3 = *(_BYTE *)(((unsigned __int64)is_end >> 3) + 0x7FFF8000);
  v4 = (unsigned __int8)is_end & 7;
  v5 = (v3 != 0) & (unsigned __int8)((char)v4 >= v3);
  if ( (_BYTE)v5 )
    __asan_report_store1(is_end, v4, v5);
  *is_end = 1;
};

// Line 103: range 000000001518A068-000000001518A0B4
uint32_t __cdecl SceneMultistagePlay::getStageType(SceneMultistagePlay *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  return this->stage_type_;
};

// Line 106: range 000000001518A0B6-000000001518A0C0
void __cdecl SceneMultistagePlay::onStageStart(SceneMultistagePlay *const this)
{
  ;
};

// Line 108: range 000000001518A0C2-000000001518A0D0
void __cdecl SceneMultistagePlay::onPlayerEnter(SceneMultistagePlay *const this, Player *player)
{
  ;
};

// Line 110: range 000000001518A0D2-000000001518A0E4
void __cdecl SceneMultistagePlay::onMonsterDie(
        SceneMultistagePlay *const this,
        ChangeHpContext *context,
        Monster *monster)
{
  ;
};

// Line 112: range 000000001518A0E6-000000001518A0FD
void __cdecl SceneMultistagePlay::onMonsterHurt(
        SceneMultistagePlay *const this,
        Monster *monster,
        Creature *attacker,
        float final_damage)
{
  ;
};

// Line 114: range 000000001518A0FE-000000001518A112
void __cdecl SceneMultistagePlay::onDungeonSettle(
        SceneMultistagePlay *const this,
        Player *player,
        uint32_t result,
        uint32_t use_time)
{
  ;
};

// Line 116: range 000000001518A114-000000001518A129
void __cdecl SceneMultistagePlay::onSelectWorktopOption(
        SceneMultistagePlay *const this,
        Player *player,
        Gadget *gadget,
        uint32_t option_id)
{
  ;
};

// Line 118: range 000000001518A12A-000000001518A138
void __cdecl SceneMultistagePlay::onPostEnterScene(SceneMultistagePlay *const this, Player *player)
{
  ;
};

// Line 120: range 000000001518A13A-000000001518A148
void __cdecl SceneMultistagePlay::onLeaveScene(SceneMultistagePlay *const this, Player *player)
{
  ;
};

// Line 122: range 000000001518A14A-000000001518A15B
void __cdecl SceneMultistagePlay::onPlayerLeaveWorld(
        SceneMultistagePlay *const this,
        Player *player,
        proto::LeaveWorldReason leave_world_reason)
{
  ;
};

// Line 124: range 000000001518A15C-000000001518A16A
void __cdecl SceneMultistagePlay::onPlayerDisconnect(SceneMultistagePlay *const this, Player *player)
{
  ;
};

// Line 131: range 000000001518A16C-000000001518A179
void __cdecl SceneMultistagePlay::onAvatarDie(SceneMultistagePlay *const this, uint32_t uid)
{
  ;
};

// Line 133: range 000000001518A17A-000000001518A184
void __cdecl SceneMultistagePlay::onClear(SceneMultistagePlay *const this)
{
  ;
};

// Line 135: range 000000001518A186-000000001518A197
int32_t __cdecl SceneMultistagePlay::checkMpSceneEnterable(SceneMultistagePlay *const this, uint32_t uid)
{
  return 0;
};

// Line 192: range 0000000015F453E8-0000000015F45412
void __cdecl SceneMultistagePlayComp::~SceneMultistagePlayComp(SceneMultistagePlayComp *const this)
{
  SceneMultistagePlayComp::~SceneMultistagePlayComp(this);
  operator delete(this, 0x50uLL);
};

// Line 192: range 0000000015F4538A-0000000015F453E7
void __cdecl SceneMultistagePlayComp::~SceneMultistagePlayComp(SceneMultistagePlayComp *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'SceneMultistagePlayComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_SceneCompBase = v2;
  std::unordered_map<unsigned long,std::shared_ptr<SceneMultistagePlay>>::~unordered_map(&this->group_muiltistage_play_map_);
  SceneCompBase::~SceneCompBase(this);
};

// Line 198: range 0000000015BEDA76-0000000015BEDADE
void __cdecl ZN23SceneMultistagePlayCompCI213SceneCompBaseER5Scene(SceneMultistagePlayComp *const this, Scene *a2)
{
  int (**v2)(...); // rdx

  SceneCompBase::SceneCompBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'SceneMultistagePlayComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_SceneCompBase = v2;
  std::unordered_map<unsigned long,std::shared_ptr<SceneMultistagePlay>>::unordered_map(&this->group_muiltistage_play_map_);
};

// Line 219: range 0000000015D31BF6-0000000015D31C03
void __cdecl SceneMultistagePlayComp::onTimer(SceneMultistagePlayComp *const this, uint32_t now)
{
  ;
};

// Line 221: range 00000000146169B2-00000000146169CD
uint64_t __cdecl SceneMultistagePlayComp::toKey(uint32_t group_id, uint32_t play_index)
{
  return ((unsigned __int64)group_id << 32) | play_index;
};

// Line 230: range 00000000138CD9DE-00000000138CDBCD
std::shared_ptr<ChessMultistagePlay> __cdecl SceneMultistagePlayComp::findPlay<ChessMultistagePlay>(
        const SceneMultistagePlayComp *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int v5; // r14d
  std::shared_ptr<ChessMultistagePlay> result; // rax
  std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>>::const_iterator __for_begin; // [rsp+10h] [rbp-A0h] BYREF
  std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>>::const_iterator __for_end; // [rsp+18h] [rbp-98h] BYREF
  const std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>> *__for_range; // [rsp+20h] [rbp-90h]
  const std::pair<long unsigned int const,std::shared_ptr<SceneMultistagePlay> > *v10; // [rsp+28h] [rbp-88h]
  std::tuple_element<0,const std::pair<long unsigned int const,std::shared_ptr<SceneMultistagePlay> > >::type *_; // [rsp+30h] [rbp-80h]
  std::tuple_element<1,const std::pair<long unsigned int const,std::shared_ptr<SceneMultistagePlay> > >::type *play_ptr; // [rsp+38h] [rbp-78h]
  char v13[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 19 target_play_ptr:293";
  *(_QWORD *)(v2 + 16) = SceneMultistagePlayComp::findPlay<ChessMultistagePlay>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  __for_range = (const std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>> *)(v1 + 24);
  __for_begin._M_cur = std::unordered_map<unsigned long,std::shared_ptr<SceneMultistagePlay>>::begin((const std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>> *const)(v1 + 24))._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned long,std::shared_ptr<SceneMultistagePlay>>::end((const std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>> *const)(v1 + 24))._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned long const,std::shared_ptr<SceneMultistagePlay>>,false>(
            &__for_begin,
            &__for_end) )
  {
    v10 = std::__detail::_Node_const_iterator<std::pair<unsigned long const,std::shared_ptr<SceneMultistagePlay>>,false,false>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned long const,std::shared_ptr<SceneMultistagePlay>>(v10);
    play_ptr = (std::tuple_element<1,const std::pair<long unsigned int const,std::shared_ptr<SceneMultistagePlay> > >::type *)std::get<1ul,unsigned long const,std::shared_ptr<SceneMultistagePlay>>(v10);
    std::dynamic_pointer_cast<ChessMultistagePlay,SceneMultistagePlay>((const std::shared_ptr<SceneMultistagePlay> *)(v2 + 32));
    if ( std::operator!=<ChessMultistagePlay>(0LL, (const std::shared_ptr<ChessMultistagePlay> *)(v2 + 32)) )
    {
      std::shared_ptr<ChessMultistagePlay>::shared_ptr(
        (std::shared_ptr<ChessMultistagePlay> *const)this,
        (std::shared_ptr<ChessMultistagePlay> *)(v2 + 32));
      v5 = 0;
    }
    else
    {
      v5 = 1;
    }
    std::shared_ptr<ChessMultistagePlay>::~shared_ptr((std::shared_ptr<ChessMultistagePlay> *const)(v2 + 32));
    if ( v5 != 1 )
      goto LABEL_12;
    std::__detail::_Node_const_iterator<std::pair<unsigned long const,std::shared_ptr<SceneMultistagePlay>>,false,false>::operator++(&__for_begin);
  }
  std::shared_ptr<ChessMultistagePlay>::shared_ptr((std::shared_ptr<ChessMultistagePlay> *const)this, 0LL);
LABEL_12:
  if ( v13 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<ChessMultistagePlay,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 282: range 0000000014F82A06-0000000014F82B91
// local variable allocation has failed, the output may be wrong!
std::shared_ptr<BrickBreakerMultistagePlay> __cdecl SceneMultistagePlayComp::findPlay<BrickBreakerMultistagePlay>(
        const SceneMultistagePlayComp *const this,
        uint32_t group_id,
        uint32_t play_index)
{
  uint32_t v3; // ecx
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  std::shared_ptr<BrickBreakerMultistagePlay> result; // rax
  uint32_t play_indexa; // [rsp+8h] [rbp-98h]
  std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>>::mapped_type p_default_value; // [rsp+28h] [rbp-78h] BYREF
  char v11[96]; // [rsp+40h] [rbp-60h] BYREF

  play_indexa = v3;
  v4 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 17 base_play_ptr:284";
  *(_QWORD *)(v4 + 16) = SceneMultistagePlayComp::findPlay<BrickBreakerMultistagePlay>;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  std::shared_ptr<SceneMultistagePlay>::shared_ptr(
    (std::shared_ptr<SceneMultistagePlay> *const)&p_default_value._M_refcount,
    0LL);
  p_default_value._M_ptr = (std::__shared_ptr<SceneMultistagePlay,(__gnu_cxx::_Lock_policy)2>::element_type *)SceneMultistagePlayComp::toKey(play_index, play_indexa);
  common::tools::MiscUtils::findMapWithDefaultValue<std::unordered_map<unsigned long,std::shared_ptr<SceneMultistagePlay>>>(
    (const std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>> *)(v4 + 32),
    (const std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>>::key_type *)(*(_QWORD *)&group_id
                                                                                                 + 24LL),
    &p_default_value);
  std::shared_ptr<SceneMultistagePlay>::~shared_ptr((std::shared_ptr<SceneMultistagePlay> *const)&p_default_value._M_refcount);
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, *(_QWORD *)&group_id + 24LL);
  std::dynamic_pointer_cast<BrickBreakerMultistagePlay,SceneMultistagePlay>((const std::shared_ptr<SceneMultistagePlay> *)this);
  std::shared_ptr<SceneMultistagePlay>::~shared_ptr((std::shared_ptr<SceneMultistagePlay> *const)(v4 + 32));
  if ( v11 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<BrickBreakerMultistagePlay,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 282: range 0000000014A101E8-0000000014A10373
// local variable allocation has failed, the output may be wrong!
std::shared_ptr<CharAmusementMultistagePlay> __cdecl SceneMultistagePlayComp::findPlay<CharAmusementMultistagePlay>(
        const SceneMultistagePlayComp *const this,
        uint32_t group_id,
        uint32_t play_index)
{
  uint32_t v3; // ecx
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  std::shared_ptr<CharAmusementMultistagePlay> result; // rax
  uint32_t play_indexa; // [rsp+8h] [rbp-98h]
  std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>>::mapped_type p_default_value; // [rsp+28h] [rbp-78h] BYREF
  char v11[96]; // [rsp+40h] [rbp-60h] BYREF

  play_indexa = v3;
  v4 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 17 base_play_ptr:284";
  *(_QWORD *)(v4 + 16) = SceneMultistagePlayComp::findPlay<CharAmusementMultistagePlay>;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  std::shared_ptr<SceneMultistagePlay>::shared_ptr(
    (std::shared_ptr<SceneMultistagePlay> *const)&p_default_value._M_refcount,
    0LL);
  p_default_value._M_ptr = (std::__shared_ptr<SceneMultistagePlay,(__gnu_cxx::_Lock_policy)2>::element_type *)SceneMultistagePlayComp::toKey(play_index, play_indexa);
  common::tools::MiscUtils::findMapWithDefaultValue<std::unordered_map<unsigned long,std::shared_ptr<SceneMultistagePlay>>>(
    (const std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>> *)(v4 + 32),
    (const std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>>::key_type *)(*(_QWORD *)&group_id
                                                                                                 + 24LL),
    &p_default_value);
  std::shared_ptr<SceneMultistagePlay>::~shared_ptr((std::shared_ptr<SceneMultistagePlay> *const)&p_default_value._M_refcount);
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, *(_QWORD *)&group_id + 24LL);
  std::dynamic_pointer_cast<CharAmusementMultistagePlay,SceneMultistagePlay>((const std::shared_ptr<SceneMultistagePlay> *)this);
  std::shared_ptr<SceneMultistagePlay>::~shared_ptr((std::shared_ptr<SceneMultistagePlay> *const)(v4 + 32));
  if ( v11 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<CharAmusementMultistagePlay,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 282: range 0000000014A0D486-0000000014A0D611
// local variable allocation has failed, the output may be wrong!
std::shared_ptr<ChessMultistagePlay> __cdecl SceneMultistagePlayComp::findPlay<ChessMultistagePlay>(
        const SceneMultistagePlayComp *const this,
        uint32_t group_id,
        uint32_t play_index)
{
  uint32_t v3; // ecx
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  std::shared_ptr<ChessMultistagePlay> result; // rax
  uint32_t play_indexa; // [rsp+8h] [rbp-98h]
  std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>>::mapped_type p_default_value; // [rsp+28h] [rbp-78h] BYREF
  char v11[96]; // [rsp+40h] [rbp-60h] BYREF

  play_indexa = v3;
  v4 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 17 base_play_ptr:284";
  *(_QWORD *)(v4 + 16) = SceneMultistagePlayComp::findPlay<ChessMultistagePlay>;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  std::shared_ptr<SceneMultistagePlay>::shared_ptr(
    (std::shared_ptr<SceneMultistagePlay> *const)&p_default_value._M_refcount,
    0LL);
  p_default_value._M_ptr = (std::__shared_ptr<SceneMultistagePlay,(__gnu_cxx::_Lock_policy)2>::element_type *)SceneMultistagePlayComp::toKey(play_index, play_indexa);
  common::tools::MiscUtils::findMapWithDefaultValue<std::unordered_map<unsigned long,std::shared_ptr<SceneMultistagePlay>>>(
    (const std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>> *)(v4 + 32),
    (const std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>>::key_type *)(*(_QWORD *)&group_id
                                                                                                 + 24LL),
    &p_default_value);
  std::shared_ptr<SceneMultistagePlay>::~shared_ptr((std::shared_ptr<SceneMultistagePlay> *const)&p_default_value._M_refcount);
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, *(_QWORD *)&group_id + 24LL);
  std::dynamic_pointer_cast<ChessMultistagePlay,SceneMultistagePlay>((const std::shared_ptr<SceneMultistagePlay> *)this);
  std::shared_ptr<SceneMultistagePlay>::~shared_ptr((std::shared_ptr<SceneMultistagePlay> *const)(v4 + 32));
  if ( v11 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<ChessMultistagePlay,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 282: range 0000000014A0ADFC-0000000014A0AF87
// local variable allocation has failed, the output may be wrong!
std::shared_ptr<FleurFairMultistagePlay> __cdecl SceneMultistagePlayComp::findPlay<FleurFairMultistagePlay>(
        const SceneMultistagePlayComp *const this,
        uint32_t group_id,
        uint32_t play_index)
{
  uint32_t v3; // ecx
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  std::shared_ptr<FleurFairMultistagePlay> result; // rax
  uint32_t play_indexa; // [rsp+8h] [rbp-98h]
  std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>>::mapped_type p_default_value; // [rsp+28h] [rbp-78h] BYREF
  char v11[96]; // [rsp+40h] [rbp-60h] BYREF

  play_indexa = v3;
  v4 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 17 base_play_ptr:284";
  *(_QWORD *)(v4 + 16) = SceneMultistagePlayComp::findPlay<FleurFairMultistagePlay>;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  std::shared_ptr<SceneMultistagePlay>::shared_ptr(
    (std::shared_ptr<SceneMultistagePlay> *const)&p_default_value._M_refcount,
    0LL);
  p_default_value._M_ptr = (std::__shared_ptr<SceneMultistagePlay,(__gnu_cxx::_Lock_policy)2>::element_type *)SceneMultistagePlayComp::toKey(play_index, play_indexa);
  common::tools::MiscUtils::findMapWithDefaultValue<std::unordered_map<unsigned long,std::shared_ptr<SceneMultistagePlay>>>(
    (const std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>> *)(v4 + 32),
    (const std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>>::key_type *)(*(_QWORD *)&group_id
                                                                                                 + 24LL),
    &p_default_value);
  std::shared_ptr<SceneMultistagePlay>::~shared_ptr((std::shared_ptr<SceneMultistagePlay> *const)&p_default_value._M_refcount);
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, *(_QWORD *)&group_id + 24LL);
  std::dynamic_pointer_cast<FleurFairMultistagePlay,SceneMultistagePlay>((const std::shared_ptr<SceneMultistagePlay> *)this);
  std::shared_ptr<SceneMultistagePlay>::~shared_ptr((std::shared_ptr<SceneMultistagePlay> *const)(v4 + 32));
  if ( v11 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<FleurFairMultistagePlay,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 282: range 000000001462E41E-000000001462E5A9
// local variable allocation has failed, the output may be wrong!
std::shared_ptr<HideAndSeekMultistagePlay> __cdecl SceneMultistagePlayComp::findPlay<HideAndSeekMultistagePlay>(
        const SceneMultistagePlayComp *const this,
        uint32_t group_id,
        uint32_t play_index)
{
  uint32_t v3; // ecx
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  std::shared_ptr<HideAndSeekMultistagePlay> result; // rax
  uint32_t play_indexa; // [rsp+8h] [rbp-98h]
  std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>>::mapped_type p_default_value; // [rsp+28h] [rbp-78h] BYREF
  char v11[96]; // [rsp+40h] [rbp-60h] BYREF

  play_indexa = v3;
  v4 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 17 base_play_ptr:284";
  *(_QWORD *)(v4 + 16) = SceneMultistagePlayComp::findPlay<HideAndSeekMultistagePlay>;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  std::shared_ptr<SceneMultistagePlay>::shared_ptr(
    (std::shared_ptr<SceneMultistagePlay> *const)&p_default_value._M_refcount,
    0LL);
  p_default_value._M_ptr = (std::__shared_ptr<SceneMultistagePlay,(__gnu_cxx::_Lock_policy)2>::element_type *)SceneMultistagePlayComp::toKey(play_index, play_indexa);
  common::tools::MiscUtils::findMapWithDefaultValue<std::unordered_map<unsigned long,std::shared_ptr<SceneMultistagePlay>>>(
    (const std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>> *)(v4 + 32),
    (const std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>>::key_type *)(*(_QWORD *)&group_id
                                                                                                 + 24LL),
    &p_default_value);
  std::shared_ptr<SceneMultistagePlay>::~shared_ptr((std::shared_ptr<SceneMultistagePlay> *const)&p_default_value._M_refcount);
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, *(_QWORD *)&group_id + 24LL);
  std::dynamic_pointer_cast<HideAndSeekMultistagePlay,SceneMultistagePlay>((const std::shared_ptr<SceneMultistagePlay> *)this);
  std::shared_ptr<SceneMultistagePlay>::~shared_ptr((std::shared_ptr<SceneMultistagePlay> *const)(v4 + 32));
  if ( v11 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<HideAndSeekMultistagePlay,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 282: range 0000000014A09ECA-0000000014A0A055
// local variable allocation has failed, the output may be wrong!
std::shared_ptr<MechanicusMultistagePlay> __cdecl SceneMultistagePlayComp::findPlay<MechanicusMultistagePlay>(
        const SceneMultistagePlayComp *const this,
        uint32_t group_id,
        uint32_t play_index)
{
  uint32_t v3; // ecx
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  std::shared_ptr<MechanicusMultistagePlay> result; // rax
  uint32_t play_indexa; // [rsp+8h] [rbp-98h]
  std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>>::mapped_type p_default_value; // [rsp+28h] [rbp-78h] BYREF
  char v11[96]; // [rsp+40h] [rbp-60h] BYREF

  play_indexa = v3;
  v4 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 17 base_play_ptr:284";
  *(_QWORD *)(v4 + 16) = SceneMultistagePlayComp::findPlay<MechanicusMultistagePlay>;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  std::shared_ptr<SceneMultistagePlay>::shared_ptr(
    (std::shared_ptr<SceneMultistagePlay> *const)&p_default_value._M_refcount,
    0LL);
  p_default_value._M_ptr = (std::__shared_ptr<SceneMultistagePlay,(__gnu_cxx::_Lock_policy)2>::element_type *)SceneMultistagePlayComp::toKey(play_index, play_indexa);
  common::tools::MiscUtils::findMapWithDefaultValue<std::unordered_map<unsigned long,std::shared_ptr<SceneMultistagePlay>>>(
    (const std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>> *)(v4 + 32),
    (const std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>>::key_type *)(*(_QWORD *)&group_id
                                                                                                 + 24LL),
    &p_default_value);
  std::shared_ptr<SceneMultistagePlay>::~shared_ptr((std::shared_ptr<SceneMultistagePlay> *const)&p_default_value._M_refcount);
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, *(_QWORD *)&group_id + 24LL);
  std::dynamic_pointer_cast<MechanicusMultistagePlay,SceneMultistagePlay>((const std::shared_ptr<SceneMultistagePlay> *)this);
  std::shared_ptr<SceneMultistagePlay>::~shared_ptr((std::shared_ptr<SceneMultistagePlay> *const)(v4 + 32));
  if ( v11 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<MechanicusMultistagePlay,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 282: range 0000000014A0D0BE-0000000014A0D249
// local variable allocation has failed, the output may be wrong!
std::shared_ptr<SceneMultistagePlay> __cdecl SceneMultistagePlayComp::findPlay<SceneMultistagePlay>(
        const SceneMultistagePlayComp *const this,
        uint32_t group_id,
        uint32_t play_index)
{
  uint32_t v3; // ecx
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  std::shared_ptr<SceneMultistagePlay> result; // rax
  uint32_t play_indexa; // [rsp+8h] [rbp-98h]
  std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>>::mapped_type p_default_value; // [rsp+28h] [rbp-78h] BYREF
  char v11[96]; // [rsp+40h] [rbp-60h] BYREF

  play_indexa = v3;
  v4 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 17 base_play_ptr:284";
  *(_QWORD *)(v4 + 16) = SceneMultistagePlayComp::findPlay<SceneMultistagePlay>;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  std::shared_ptr<SceneMultistagePlay>::shared_ptr(
    (std::shared_ptr<SceneMultistagePlay> *const)&p_default_value._M_refcount,
    0LL);
  p_default_value._M_ptr = (std::__shared_ptr<SceneMultistagePlay,(__gnu_cxx::_Lock_policy)2>::element_type *)SceneMultistagePlayComp::toKey(play_index, play_indexa);
  common::tools::MiscUtils::findMapWithDefaultValue<std::unordered_map<unsigned long,std::shared_ptr<SceneMultistagePlay>>>(
    (const std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>> *)(v4 + 32),
    (const std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>>::key_type *)(*(_QWORD *)&group_id
                                                                                                 + 24LL),
    &p_default_value);
  std::shared_ptr<SceneMultistagePlay>::~shared_ptr((std::shared_ptr<SceneMultistagePlay> *const)&p_default_value._M_refcount);
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, *(_QWORD *)&group_id + 24LL);
  std::dynamic_pointer_cast<SceneMultistagePlay,SceneMultistagePlay>((const std::shared_ptr<SceneMultistagePlay> *)this);
  std::shared_ptr<SceneMultistagePlay>::~shared_ptr((std::shared_ptr<SceneMultistagePlay> *const)(v4 + 32));
  if ( v11 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<SceneMultistagePlay,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 289: range 0000000014F82246-0000000014F82435
std::shared_ptr<BrickBreakerMultistagePlay> __cdecl SceneMultistagePlayComp::findPlay<BrickBreakerMultistagePlay>(
        const SceneMultistagePlayComp *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int v5; // r14d
  std::shared_ptr<BrickBreakerMultistagePlay> result; // rax
  std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>>::const_iterator __for_begin; // [rsp+10h] [rbp-A0h] BYREF
  std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>>::const_iterator __for_end; // [rsp+18h] [rbp-98h] BYREF
  const std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>> *__for_range; // [rsp+20h] [rbp-90h]
  const std::pair<long unsigned int const,std::shared_ptr<SceneMultistagePlay> > *v10; // [rsp+28h] [rbp-88h]
  std::tuple_element<0,const std::pair<long unsigned int const,std::shared_ptr<SceneMultistagePlay> > >::type *_; // [rsp+30h] [rbp-80h]
  std::tuple_element<1,const std::pair<long unsigned int const,std::shared_ptr<SceneMultistagePlay> > >::type *play_ptr; // [rsp+38h] [rbp-78h]
  char v13[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 19 target_play_ptr:293";
  *(_QWORD *)(v2 + 16) = SceneMultistagePlayComp::findPlay<BrickBreakerMultistagePlay>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  __for_range = (const std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>> *)(v1 + 24);
  __for_begin._M_cur = std::unordered_map<unsigned long,std::shared_ptr<SceneMultistagePlay>>::begin((const std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>> *const)(v1 + 24))._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned long,std::shared_ptr<SceneMultistagePlay>>::end((const std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>> *const)(v1 + 24))._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned long const,std::shared_ptr<SceneMultistagePlay>>,false>(
            &__for_begin,
            &__for_end) )
  {
    v10 = std::__detail::_Node_const_iterator<std::pair<unsigned long const,std::shared_ptr<SceneMultistagePlay>>,false,false>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned long const,std::shared_ptr<SceneMultistagePlay>>(v10);
    play_ptr = (std::tuple_element<1,const std::pair<long unsigned int const,std::shared_ptr<SceneMultistagePlay> > >::type *)std::get<1ul,unsigned long const,std::shared_ptr<SceneMultistagePlay>>(v10);
    std::dynamic_pointer_cast<BrickBreakerMultistagePlay,SceneMultistagePlay>((const std::shared_ptr<SceneMultistagePlay> *)(v2 + 32));
    if ( std::operator!=<BrickBreakerMultistagePlay>(
           0LL,
           (const std::shared_ptr<BrickBreakerMultistagePlay> *)(v2 + 32)) )
    {
      std::shared_ptr<BrickBreakerMultistagePlay>::shared_ptr(
        (std::shared_ptr<BrickBreakerMultistagePlay> *const)this,
        (std::shared_ptr<BrickBreakerMultistagePlay> *)(v2 + 32));
      v5 = 0;
    }
    else
    {
      v5 = 1;
    }
    std::shared_ptr<BrickBreakerMultistagePlay>::~shared_ptr((std::shared_ptr<BrickBreakerMultistagePlay> *const)(v2 + 32));
    if ( v5 != 1 )
      goto LABEL_12;
    std::__detail::_Node_const_iterator<std::pair<unsigned long const,std::shared_ptr<SceneMultistagePlay>>,false,false>::operator++(&__for_begin);
  }
  std::shared_ptr<BrickBreakerMultistagePlay>::shared_ptr((std::shared_ptr<BrickBreakerMultistagePlay> *const)this, 0LL);
LABEL_12:
  if ( v13 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<BrickBreakerMultistagePlay,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 289: range 0000000017A2C6B8-0000000017A2C8A7
std::shared_ptr<CharAmusementMultistagePlay> __cdecl SceneMultistagePlayComp::findPlay<CharAmusementMultistagePlay>(
        const SceneMultistagePlayComp *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int v5; // r14d
  std::shared_ptr<CharAmusementMultistagePlay> result; // rax
  std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>>::const_iterator __for_begin; // [rsp+10h] [rbp-A0h] BYREF
  std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>>::const_iterator __for_end; // [rsp+18h] [rbp-98h] BYREF
  const std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>> *__for_range; // [rsp+20h] [rbp-90h]
  const std::pair<long unsigned int const,std::shared_ptr<SceneMultistagePlay> > *v10; // [rsp+28h] [rbp-88h]
  std::tuple_element<0,const std::pair<long unsigned int const,std::shared_ptr<SceneMultistagePlay> > >::type *_; // [rsp+30h] [rbp-80h]
  std::tuple_element<1,const std::pair<long unsigned int const,std::shared_ptr<SceneMultistagePlay> > >::type *play_ptr; // [rsp+38h] [rbp-78h]
  char v13[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 19 target_play_ptr:293";
  *(_QWORD *)(v2 + 16) = SceneMultistagePlayComp::findPlay<CharAmusementMultistagePlay>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  __for_range = (const std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>> *)(v1 + 24);
  __for_begin._M_cur = std::unordered_map<unsigned long,std::shared_ptr<SceneMultistagePlay>>::begin((const std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>> *const)(v1 + 24))._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned long,std::shared_ptr<SceneMultistagePlay>>::end((const std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>> *const)(v1 + 24))._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned long const,std::shared_ptr<SceneMultistagePlay>>,false>(
            &__for_begin,
            &__for_end) )
  {
    v10 = std::__detail::_Node_const_iterator<std::pair<unsigned long const,std::shared_ptr<SceneMultistagePlay>>,false,false>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned long const,std::shared_ptr<SceneMultistagePlay>>(v10);
    play_ptr = (std::tuple_element<1,const std::pair<long unsigned int const,std::shared_ptr<SceneMultistagePlay> > >::type *)std::get<1ul,unsigned long const,std::shared_ptr<SceneMultistagePlay>>(v10);
    std::dynamic_pointer_cast<CharAmusementMultistagePlay,SceneMultistagePlay>((const std::shared_ptr<SceneMultistagePlay> *)(v2 + 32));
    if ( std::operator!=<CharAmusementMultistagePlay>(
           0LL,
           (const std::shared_ptr<CharAmusementMultistagePlay> *)(v2 + 32)) )
    {
      std::shared_ptr<CharAmusementMultistagePlay>::shared_ptr(
        (std::shared_ptr<CharAmusementMultistagePlay> *const)this,
        (std::shared_ptr<CharAmusementMultistagePlay> *)(v2 + 32));
      v5 = 0;
    }
    else
    {
      v5 = 1;
    }
    std::shared_ptr<CharAmusementMultistagePlay>::~shared_ptr((std::shared_ptr<CharAmusementMultistagePlay> *const)(v2 + 32));
    if ( v5 != 1 )
      goto LABEL_12;
    std::__detail::_Node_const_iterator<std::pair<unsigned long const,std::shared_ptr<SceneMultistagePlay>>,false,false>::operator++(&__for_begin);
  }
  std::shared_ptr<CharAmusementMultistagePlay>::shared_ptr(
    (std::shared_ptr<CharAmusementMultistagePlay> *const)this,
    0LL);
LABEL_12:
  if ( v13 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<CharAmusementMultistagePlay,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 289: range 0000000017A16E58-0000000017A17047
std::shared_ptr<CoinCollectMultistagePlay> __cdecl SceneMultistagePlayComp::findPlay<CoinCollectMultistagePlay>(
        const SceneMultistagePlayComp *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int v5; // r14d
  std::shared_ptr<CoinCollectMultistagePlay> result; // rax
  std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>>::const_iterator __for_begin; // [rsp+10h] [rbp-A0h] BYREF
  std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>>::const_iterator __for_end; // [rsp+18h] [rbp-98h] BYREF
  const std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>> *__for_range; // [rsp+20h] [rbp-90h]
  const std::pair<long unsigned int const,std::shared_ptr<SceneMultistagePlay> > *v10; // [rsp+28h] [rbp-88h]
  std::tuple_element<0,const std::pair<long unsigned int const,std::shared_ptr<SceneMultistagePlay> > >::type *_; // [rsp+30h] [rbp-80h]
  std::tuple_element<1,const std::pair<long unsigned int const,std::shared_ptr<SceneMultistagePlay> > >::type *play_ptr; // [rsp+38h] [rbp-78h]
  char v13[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 19 target_play_ptr:293";
  *(_QWORD *)(v2 + 16) = SceneMultistagePlayComp::findPlay<CoinCollectMultistagePlay>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  __for_range = (const std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>> *)(v1 + 24);
  __for_begin._M_cur = std::unordered_map<unsigned long,std::shared_ptr<SceneMultistagePlay>>::begin((const std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>> *const)(v1 + 24))._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned long,std::shared_ptr<SceneMultistagePlay>>::end((const std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>> *const)(v1 + 24))._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned long const,std::shared_ptr<SceneMultistagePlay>>,false>(
            &__for_begin,
            &__for_end) )
  {
    v10 = std::__detail::_Node_const_iterator<std::pair<unsigned long const,std::shared_ptr<SceneMultistagePlay>>,false,false>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned long const,std::shared_ptr<SceneMultistagePlay>>(v10);
    play_ptr = (std::tuple_element<1,const std::pair<long unsigned int const,std::shared_ptr<SceneMultistagePlay> > >::type *)std::get<1ul,unsigned long const,std::shared_ptr<SceneMultistagePlay>>(v10);
    std::dynamic_pointer_cast<CoinCollectMultistagePlay,SceneMultistagePlay>((const std::shared_ptr<SceneMultistagePlay> *)(v2 + 32));
    if ( std::operator!=<CoinCollectMultistagePlay>(0LL, (const std::shared_ptr<CoinCollectMultistagePlay> *)(v2 + 32)) )
    {
      std::shared_ptr<CoinCollectMultistagePlay>::shared_ptr(
        (std::shared_ptr<CoinCollectMultistagePlay> *const)this,
        (std::shared_ptr<CoinCollectMultistagePlay> *)(v2 + 32));
      v5 = 0;
    }
    else
    {
      v5 = 1;
    }
    std::shared_ptr<CoinCollectMultistagePlay>::~shared_ptr((std::shared_ptr<CoinCollectMultistagePlay> *const)(v2 + 32));
    if ( v5 != 1 )
      goto LABEL_12;
    std::__detail::_Node_const_iterator<std::pair<unsigned long const,std::shared_ptr<SceneMultistagePlay>>,false,false>::operator++(&__for_begin);
  }
  std::shared_ptr<CoinCollectMultistagePlay>::shared_ptr((std::shared_ptr<CoinCollectMultistagePlay> *const)this, 0LL);
LABEL_12:
  if ( v13 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<CoinCollectMultistagePlay,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 289: range 000000001465C728-000000001465C917
std::shared_ptr<LanV3BoatMultistagePlay> __cdecl SceneMultistagePlayComp::findPlay<LanV3BoatMultistagePlay>(
        const SceneMultistagePlayComp *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int v5; // r14d
  std::shared_ptr<LanV3BoatMultistagePlay> result; // rax
  std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>>::const_iterator __for_begin; // [rsp+10h] [rbp-A0h] BYREF
  std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>>::const_iterator __for_end; // [rsp+18h] [rbp-98h] BYREF
  const std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>> *__for_range; // [rsp+20h] [rbp-90h]
  const std::pair<long unsigned int const,std::shared_ptr<SceneMultistagePlay> > *v10; // [rsp+28h] [rbp-88h]
  std::tuple_element<0,const std::pair<long unsigned int const,std::shared_ptr<SceneMultistagePlay> > >::type *_; // [rsp+30h] [rbp-80h]
  std::tuple_element<1,const std::pair<long unsigned int const,std::shared_ptr<SceneMultistagePlay> > >::type *play_ptr; // [rsp+38h] [rbp-78h]
  char v13[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 19 target_play_ptr:293";
  *(_QWORD *)(v2 + 16) = SceneMultistagePlayComp::findPlay<LanV3BoatMultistagePlay>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  __for_range = (const std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>> *)(v1 + 24);
  __for_begin._M_cur = std::unordered_map<unsigned long,std::shared_ptr<SceneMultistagePlay>>::begin((const std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>> *const)(v1 + 24))._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned long,std::shared_ptr<SceneMultistagePlay>>::end((const std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>> *const)(v1 + 24))._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned long const,std::shared_ptr<SceneMultistagePlay>>,false>(
            &__for_begin,
            &__for_end) )
  {
    v10 = std::__detail::_Node_const_iterator<std::pair<unsigned long const,std::shared_ptr<SceneMultistagePlay>>,false,false>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned long const,std::shared_ptr<SceneMultistagePlay>>(v10);
    play_ptr = (std::tuple_element<1,const std::pair<long unsigned int const,std::shared_ptr<SceneMultistagePlay> > >::type *)std::get<1ul,unsigned long const,std::shared_ptr<SceneMultistagePlay>>(v10);
    std::dynamic_pointer_cast<LanV3BoatMultistagePlay,SceneMultistagePlay>((const std::shared_ptr<SceneMultistagePlay> *)(v2 + 32));
    if ( std::operator!=<LanV3BoatMultistagePlay>(0LL, (const std::shared_ptr<LanV3BoatMultistagePlay> *)(v2 + 32)) )
    {
      std::shared_ptr<LanV3BoatMultistagePlay>::shared_ptr(
        (std::shared_ptr<LanV3BoatMultistagePlay> *const)this,
        (std::shared_ptr<LanV3BoatMultistagePlay> *)(v2 + 32));
      v5 = 0;
    }
    else
    {
      v5 = 1;
    }
    std::shared_ptr<LanV3BoatMultistagePlay>::~shared_ptr((std::shared_ptr<LanV3BoatMultistagePlay> *const)(v2 + 32));
    if ( v5 != 1 )
      goto LABEL_12;
    std::__detail::_Node_const_iterator<std::pair<unsigned long const,std::shared_ptr<SceneMultistagePlay>>,false,false>::operator++(&__for_begin);
  }
  std::shared_ptr<LanV3BoatMultistagePlay>::shared_ptr((std::shared_ptr<LanV3BoatMultistagePlay> *const)this, 0LL);
LABEL_12:
  if ( v13 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<LanV3BoatMultistagePlay,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 303: range 0000000017D8F940-0000000017D8FA3A
std::shared_ptr<ChessMultistagePlay> __cdecl SceneMultistagePlayComp::findAnyPlayByGm<ChessMultistagePlay>(
        SceneMultistagePlayComp *const this)
{
  __int64 v1; // rsi
  std::shared_ptr<ChessMultistagePlay> result; // rax
  std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>>::iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>>::iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>> *__for_range; // [rsp+20h] [rbp-20h]
  std::pair<long unsigned int const,std::shared_ptr<SceneMultistagePlay> > *__in; // [rsp+28h] [rbp-18h]
  std::tuple_element<0,std::pair<long unsigned int const,std::shared_ptr<SceneMultistagePlay> > >::type *_; // [rsp+30h] [rbp-10h]
  std::tuple_element<1,std::pair<long unsigned int const,std::shared_ptr<SceneMultistagePlay> > >::type *play_ptr; // [rsp+38h] [rbp-8h]

  __for_range = (std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>> *)(v1 + 24);
  __for_begin._M_cur = std::unordered_map<unsigned long,std::shared_ptr<SceneMultistagePlay>>::begin((std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>> *const)(v1 + 24))._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned long,std::shared_ptr<SceneMultistagePlay>>::end((std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>> *const)(v1 + 24))._M_cur;
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned long const,std::shared_ptr<SceneMultistagePlay>>,false>(
            &__for_begin,
            &__for_end) )
    {
      std::shared_ptr<ChessMultistagePlay>::shared_ptr((std::shared_ptr<ChessMultistagePlay> *const)this, 0LL);
      goto LABEL_9;
    }
    __in = std::__detail::_Node_iterator<std::pair<unsigned long const,std::shared_ptr<SceneMultistagePlay>>,false,false>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned long const,std::shared_ptr<SceneMultistagePlay>>(__in);
    play_ptr = std::get<1ul,unsigned long const,std::shared_ptr<SceneMultistagePlay>>(__in);
    if ( std::operator!=<SceneMultistagePlay>(play_ptr, 0LL) )
      break;
    std::__detail::_Node_iterator<std::pair<unsigned long const,std::shared_ptr<SceneMultistagePlay>>,false,false>::operator++(&__for_begin);
  }
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, 0LL);
  result = std::dynamic_pointer_cast<ChessMultistagePlay,SceneMultistagePlay>((const std::shared_ptr<SceneMultistagePlay> *)this);
LABEL_9:
  result._M_ptr = (std::__shared_ptr<ChessMultistagePlay,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 303: range 0000000017D8EB26-0000000017D8EC20
std::shared_ptr<FleurFairMultistagePlay> __cdecl SceneMultistagePlayComp::findAnyPlayByGm<FleurFairMultistagePlay>(
        SceneMultistagePlayComp *const this)
{
  __int64 v1; // rsi
  std::shared_ptr<FleurFairMultistagePlay> result; // rax
  std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>>::iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>>::iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>> *__for_range; // [rsp+20h] [rbp-20h]
  std::pair<long unsigned int const,std::shared_ptr<SceneMultistagePlay> > *__in; // [rsp+28h] [rbp-18h]
  std::tuple_element<0,std::pair<long unsigned int const,std::shared_ptr<SceneMultistagePlay> > >::type *_; // [rsp+30h] [rbp-10h]
  std::tuple_element<1,std::pair<long unsigned int const,std::shared_ptr<SceneMultistagePlay> > >::type *play_ptr; // [rsp+38h] [rbp-8h]

  __for_range = (std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>> *)(v1 + 24);
  __for_begin._M_cur = std::unordered_map<unsigned long,std::shared_ptr<SceneMultistagePlay>>::begin((std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>> *const)(v1 + 24))._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned long,std::shared_ptr<SceneMultistagePlay>>::end((std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>> *const)(v1 + 24))._M_cur;
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned long const,std::shared_ptr<SceneMultistagePlay>>,false>(
            &__for_begin,
            &__for_end) )
    {
      std::shared_ptr<FleurFairMultistagePlay>::shared_ptr((std::shared_ptr<FleurFairMultistagePlay> *const)this, 0LL);
      goto LABEL_9;
    }
    __in = std::__detail::_Node_iterator<std::pair<unsigned long const,std::shared_ptr<SceneMultistagePlay>>,false,false>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned long const,std::shared_ptr<SceneMultistagePlay>>(__in);
    play_ptr = std::get<1ul,unsigned long const,std::shared_ptr<SceneMultistagePlay>>(__in);
    if ( std::operator!=<SceneMultistagePlay>(play_ptr, 0LL) )
      break;
    std::__detail::_Node_iterator<std::pair<unsigned long const,std::shared_ptr<SceneMultistagePlay>>,false,false>::operator++(&__for_begin);
  }
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, 0LL);
  result = std::dynamic_pointer_cast<FleurFairMultistagePlay,SceneMultistagePlay>((const std::shared_ptr<SceneMultistagePlay> *)this);
LABEL_9:
  result._M_ptr = (std::__shared_ptr<FleurFairMultistagePlay,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 303: range 0000000017D904A0-0000000017D9059A
std::shared_ptr<IrodoriChessMultistagePlay> __cdecl SceneMultistagePlayComp::findAnyPlayByGm<IrodoriChessMultistagePlay>(
        SceneMultistagePlayComp *const this)
{
  __int64 v1; // rsi
  std::shared_ptr<IrodoriChessMultistagePlay> result; // rax
  std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>>::iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>>::iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>> *__for_range; // [rsp+20h] [rbp-20h]
  std::pair<long unsigned int const,std::shared_ptr<SceneMultistagePlay> > *__in; // [rsp+28h] [rbp-18h]
  std::tuple_element<0,std::pair<long unsigned int const,std::shared_ptr<SceneMultistagePlay> > >::type *_; // [rsp+30h] [rbp-10h]
  std::tuple_element<1,std::pair<long unsigned int const,std::shared_ptr<SceneMultistagePlay> > >::type *play_ptr; // [rsp+38h] [rbp-8h]

  __for_range = (std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>> *)(v1 + 24);
  __for_begin._M_cur = std::unordered_map<unsigned long,std::shared_ptr<SceneMultistagePlay>>::begin((std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>> *const)(v1 + 24))._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned long,std::shared_ptr<SceneMultistagePlay>>::end((std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>> *const)(v1 + 24))._M_cur;
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned long const,std::shared_ptr<SceneMultistagePlay>>,false>(
            &__for_begin,
            &__for_end) )
    {
      std::shared_ptr<IrodoriChessMultistagePlay>::shared_ptr(
        (std::shared_ptr<IrodoriChessMultistagePlay> *const)this,
        0LL);
      goto LABEL_9;
    }
    __in = std::__detail::_Node_iterator<std::pair<unsigned long const,std::shared_ptr<SceneMultistagePlay>>,false,false>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned long const,std::shared_ptr<SceneMultistagePlay>>(__in);
    play_ptr = std::get<1ul,unsigned long const,std::shared_ptr<SceneMultistagePlay>>(__in);
    if ( std::operator!=<SceneMultistagePlay>(play_ptr, 0LL) )
      break;
    std::__detail::_Node_iterator<std::pair<unsigned long const,std::shared_ptr<SceneMultistagePlay>>,false,false>::operator++(&__for_begin);
  }
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, 0LL);
  result = std::dynamic_pointer_cast<IrodoriChessMultistagePlay,SceneMultistagePlay>((const std::shared_ptr<SceneMultistagePlay> *)this);
LABEL_9:
  result._M_ptr = (std::__shared_ptr<IrodoriChessMultistagePlay,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 303: range 0000000017D8E944-0000000017D8EA3E
std::shared_ptr<MechanicusMultistagePlay> __cdecl SceneMultistagePlayComp::findAnyPlayByGm<MechanicusMultistagePlay>(
        SceneMultistagePlayComp *const this)
{
  __int64 v1; // rsi
  std::shared_ptr<MechanicusMultistagePlay> result; // rax
  std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>>::iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>>::iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>> *__for_range; // [rsp+20h] [rbp-20h]
  std::pair<long unsigned int const,std::shared_ptr<SceneMultistagePlay> > *__in; // [rsp+28h] [rbp-18h]
  std::tuple_element<0,std::pair<long unsigned int const,std::shared_ptr<SceneMultistagePlay> > >::type *_; // [rsp+30h] [rbp-10h]
  std::tuple_element<1,std::pair<long unsigned int const,std::shared_ptr<SceneMultistagePlay> > >::type *play_ptr; // [rsp+38h] [rbp-8h]

  __for_range = (std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>> *)(v1 + 24);
  __for_begin._M_cur = std::unordered_map<unsigned long,std::shared_ptr<SceneMultistagePlay>>::begin((std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>> *const)(v1 + 24))._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned long,std::shared_ptr<SceneMultistagePlay>>::end((std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>> *const)(v1 + 24))._M_cur;
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned long const,std::shared_ptr<SceneMultistagePlay>>,false>(
            &__for_begin,
            &__for_end) )
    {
      std::shared_ptr<MechanicusMultistagePlay>::shared_ptr((std::shared_ptr<MechanicusMultistagePlay> *const)this, 0LL);
      goto LABEL_9;
    }
    __in = std::__detail::_Node_iterator<std::pair<unsigned long const,std::shared_ptr<SceneMultistagePlay>>,false,false>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned long const,std::shared_ptr<SceneMultistagePlay>>(__in);
    play_ptr = std::get<1ul,unsigned long const,std::shared_ptr<SceneMultistagePlay>>(__in);
    if ( std::operator!=<SceneMultistagePlay>(play_ptr, 0LL) )
      break;
    std::__detail::_Node_iterator<std::pair<unsigned long const,std::shared_ptr<SceneMultistagePlay>>,false,false>::operator++(&__for_begin);
  }
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, 0LL);
  result = std::dynamic_pointer_cast<MechanicusMultistagePlay,SceneMultistagePlay>((const std::shared_ptr<SceneMultistagePlay> *)this);
LABEL_9:
  result._M_ptr = (std::__shared_ptr<MechanicusMultistagePlay,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 383: range 0000000016238E0A-0000000016238E44
SceneMultistagePlay *__cdecl SceneMultistagePlayCompBase::getSceneMultistagePlay(
        SceneMultistagePlayCompBase *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_multistage_play_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return this->scene_multistage_play_;
};
