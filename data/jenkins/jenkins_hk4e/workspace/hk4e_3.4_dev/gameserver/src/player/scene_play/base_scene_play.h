// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/scene_play/base_scene_play.h

// Line 42: range 0000000016D70388-0000000016D7041D
void __cdecl ScenePlaySourceInfo::ScenePlaySourceInfo(ScenePlaySourceInfo *const this)
{
  bool v1; // dl
  bool v2; // dl

  v1 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v1 )
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3, v1);
  this->type = None_23;
  v2 = *(_BYTE *)(((unsigned __int64)&this->param >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->param >> 3) + 0x7FFF8000);
  if ( v2 )
    __asan_report_store4(&this->param, (((_BYTE)this + 4) & 7u) + 3, v2);
  this->param = 0;
};

// Line 52: range 0000000016D7041E-0000000016D705D3
void __cdecl BaseScenePlay::BaseScenePlay(BaseScenePlay *const this, Player *player, uint32_t play_id)
{
  int (**v3)(...); // rdx
  __int64 v4; // rsi
  bool v5; // dl
  bool v6; // dl

  std::enable_shared_from_this<BaseScenePlay>::enable_shared_from_this(&this->std::enable_shared_from_this<BaseScenePlay>);
  v3 = (int (**)(...))(&`vtable for'BaseScenePlay + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, player);
  this->_vptr_BaseScenePlay = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->player_, player);
  this->player_ = player;
  if ( *(_BYTE *)(((unsigned __int64)&this->play_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->play_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->play_id_, player, (_BYTE)this + 32);
  }
  this->play_id_ = play_id;
  v4 = (((_BYTE)this + 36) & 7u) + 3;
  v5 = *(_BYTE *)(((unsigned __int64)&this->play_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->play_type_ >> 3) + 0x7FFF8000);
  if ( v5 )
    __asan_report_store4(&this->play_type_, v4, v5);
  this->play_type_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->entry_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->entry_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->entry_id_, v4, (_BYTE)this + 40);
  }
  this->entry_id_ = 0;
  v6 = *(_BYTE *)(((unsigned __int64)&this->phase_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->phase_ >> 3) + 0x7FFF8000);
  if ( v6 )
    __asan_report_store4(&this->phase_, (((_BYTE)this + 44) & 7u) + 3, v6);
  this->phase_ = None_22;
  ScenePlaySourceInfo::ScenePlaySourceInfo(&this->source_info_);
  std::shared_ptr<BaseScenePlayBattle>::shared_ptr(&this->battle_ptr_, 0LL);
};

// Line 53: range 00000000170944C8-0000000017094529
void __cdecl BaseScenePlay::~BaseScenePlay(BaseScenePlay *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'BaseScenePlay + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseScenePlay = v2;
  std::shared_ptr<BaseScenePlayBattle>::~shared_ptr(&this->battle_ptr_);
  std::enable_shared_from_this<BaseScenePlay>::~enable_shared_from_this(&this->std::enable_shared_from_this<BaseScenePlay>);
};

// Line 53: range 000000001709452A-0000000017094554
void __cdecl BaseScenePlay::~BaseScenePlay(BaseScenePlay *const this)
{
  BaseScenePlay::~BaseScenePlay(this);
  operator delete(this, 0x48uLL);
};

// Line 71: range 00000000149EDD1C-00000000149EDD48
BaseScenePlayBattlePtr __cdecl BaseScenePlay::findBattlePtr(BaseScenePlay *const this)
{
  __int64 v1; // rsi
  BaseScenePlayBattlePtr result; // rax

  std::shared_ptr<BaseScenePlayBattle>::shared_ptr(
    (std::shared_ptr<BaseScenePlayBattle> *const)this,
    (const std::shared_ptr<BaseScenePlayBattle> *)(v1 + 56));
  result._M_ptr = (std::__shared_ptr<BaseScenePlayBattle,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 95: range 0000000014F76B02-0000000014F76B49
uint32_t __cdecl BaseScenePlay::getPlayId(const BaseScenePlay *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->play_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->play_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->play_id_);
  }
  return this->play_id_;
};

// Line 96: range 0000000014F76B9A-0000000014F76BE1
uint32_t __cdecl BaseScenePlay::getEntryId(const BaseScenePlay *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->entry_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->entry_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->entry_id_);
  }
  return this->entry_id_;
};

// Line 96: range 0000000014F76B4A-0000000014F76B99
uint32_t __cdecl BaseScenePlay::getPlayType(const BaseScenePlay *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->play_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->play_type_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->play_type_);
  }
  return this->play_type_;
};

// Line 98: range 0000000013844E9A-0000000013844EE9
ScenePlayPhase __cdecl BaseScenePlay::getPhase(const BaseScenePlay *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->phase_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->phase_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->phase_);
  }
  return this->phase_;
};
