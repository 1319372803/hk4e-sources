// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_misc_comp.h

// Line 22: range 0000000015BFA368-0000000015BFA3E5
void __cdecl SceneMiscComp::~SceneMiscComp(SceneMiscComp *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'SceneMiscComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_SceneCompBase = v2;
  std::shared_ptr<SceneTimer>::~shared_ptr(&this->camera_look_timer_ptr_);
  std::set<unsigned int>::~set(&this->wait_cutscene_over_uid_set_);
  std::shared_ptr<SceneTimer>::~shared_ptr(&this->wait_cutscene_timer_ptr_);
  SceneCompBase::~SceneCompBase(this);
};

// Line 22: range 0000000015BFA3E6-0000000015BFA410
void __cdecl SceneMiscComp::~SceneMiscComp(SceneMiscComp *const this)
{
  SceneMiscComp::~SceneMiscComp(this);
  operator delete(this, 0x78uLL);
};

// Line 28: range 0000000015BED5C0-0000000015BED70A
void __cdecl ZN13SceneMiscCompCI213SceneCompBaseER5Scene(SceneMiscComp *const this, Scene *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  bool v4; // dl

  SceneCompBase::SceneCompBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'SceneMiscComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_SceneCompBase = v2;
  std::shared_ptr<SceneTimer>::shared_ptr(&this->wait_cutscene_timer_ptr_);
  if ( *(_BYTE *)(((unsigned __int64)&this->wait_cutscene_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->wait_cutscene_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->wait_cutscene_id_, a2, (_BYTE)this + 40);
  }
  this->wait_cutscene_id_ = 0;
  v3 = (((_BYTE)this + 44) & 7u) + 3;
  v4 = *(_BYTE *)(((unsigned __int64)&this->wait_group_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->wait_group_id_ >> 3) + 0x7FFF8000);
  if ( v4 )
    __asan_report_store4(&this->wait_group_id_, v3, v4);
  this->wait_group_id_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->wait_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->wait_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->wait_time_, v3, (_BYTE)this + 48);
  }
  this->wait_time_ = 0;
  std::set<unsigned int>::set(&this->wait_cutscene_over_uid_set_);
  std::shared_ptr<SceneTimer>::shared_ptr(&this->camera_look_timer_ptr_);
};

// Line 37: range 00000000149ECDFC-00000000149ECE2F
void __cdecl SceneMiscComp::updateCameraLookTimer(SceneMiscComp *const this, SceneTimerPtr *p_timer_ptr)
{
  std::shared_ptr<SceneTimer> *v2; // rax

  v2 = std::move<std::shared_ptr<SceneTimer> &>(p_timer_ptr);
  std::shared_ptr<SceneTimer>::operator=(&this->camera_look_timer_ptr_, v2);
};

// Line 38: range 00000000149ECE30-00000000149ECE52
bool __cdecl SceneMiscComp::isCameraLookTimerValid(const SceneMiscComp *const this)
{
  return std::operator!=<SceneTimer>(&this->camera_look_timer_ptr_, 0LL);
};
