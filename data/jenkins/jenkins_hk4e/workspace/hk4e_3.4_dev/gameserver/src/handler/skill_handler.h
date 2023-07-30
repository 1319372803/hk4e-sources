// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/handler/skill_handler.h

// Line 29: range 0000000015F4600C-0000000015F46059
void __cdecl SkillHandler::~SkillHandler(SkillHandler *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'SkillHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_PlayerHandlerBase = v1;
  PlayerHandlerBase::~PlayerHandlerBase(this);
};

// Line 29: range 0000000015F4605A-0000000015F46084
void __cdecl SkillHandler::~SkillHandler(SkillHandler *const this)
{
  SkillHandler::~SkillHandler(this);
  operator delete(this, 0x10uLL);
};

// Line 32: range 0000000017491CE0-0000000017491D38
void __cdecl ZN12SkillHandlerCI217PlayerHandlerBaseER6Player(SkillHandler *const this, Player *a2)
{
  int (**v2)(...); // rdx

  PlayerHandlerBase::PlayerHandlerBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'SkillHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_PlayerHandlerBase = v2;
};
