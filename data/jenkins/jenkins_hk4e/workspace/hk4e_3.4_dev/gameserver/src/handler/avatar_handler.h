// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/handler/avatar_handler.h

// Line 73: range 0000000013611C30-0000000013611C7D
void __cdecl AvatarHandler::~AvatarHandler(AvatarHandler *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'AvatarHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_PlayerHandlerBase = v1;
  PlayerHandlerBase::~PlayerHandlerBase(this);
};

// Line 73: range 0000000013611C7E-0000000013611CA8
void __cdecl AvatarHandler::~AvatarHandler(AvatarHandler *const this)
{
  AvatarHandler::~AvatarHandler(this);
  operator delete(this, 0x10uLL);
};

// Line 76: range 00000000174901F2-000000001749024A
void __cdecl ZN13AvatarHandlerCI217PlayerHandlerBaseER6Player(AvatarHandler *const this, Player *a2)
{
  int (**v2)(...); // rdx

  PlayerHandlerBase::PlayerHandlerBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'AvatarHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_PlayerHandlerBase = v2;
};
