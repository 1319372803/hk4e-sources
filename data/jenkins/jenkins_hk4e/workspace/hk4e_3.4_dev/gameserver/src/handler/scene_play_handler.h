// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/handler/scene_play_handler.h

// Line 28: range 0000000015F46100-0000000015F4614D
void __cdecl ScenePlayHandler::~ScenePlayHandler(ScenePlayHandler *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ScenePlayHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_PlayerHandlerBase = v1;
  PlayerHandlerBase::~PlayerHandlerBase(this);
};

// Line 28: range 0000000015F4614E-0000000015F46178
void __cdecl ScenePlayHandler::~ScenePlayHandler(ScenePlayHandler *const this)
{
  ScenePlayHandler::~ScenePlayHandler(this);
  operator delete(this, 0x10uLL);
};

// Line 31: range 0000000017495182-00000000174951DA
void __cdecl ZN16ScenePlayHandlerCI217PlayerHandlerBaseER6Player(ScenePlayHandler *const this, Player *a2)
{
  int (**v2)(...); // rdx

  PlayerHandlerBase::PlayerHandlerBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'ScenePlayHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_PlayerHandlerBase = v2;
};
