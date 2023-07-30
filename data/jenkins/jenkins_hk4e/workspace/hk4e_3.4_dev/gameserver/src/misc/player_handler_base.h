// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/misc/player_handler_base.h

// Line 27: range 0000000017209D8E-0000000017209E04
void __cdecl PlayerHandlerBase::PlayerHandlerBase(PlayerHandlerBase *const this, Player *player)
{
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'PlayerHandlerBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_PlayerHandlerBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->player_);
  this->player_ = player;
};

// Line 28: range 000000001361186C-00000000136118AD
void __cdecl PlayerHandlerBase::~PlayerHandlerBase(PlayerHandlerBase *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'PlayerHandlerBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_PlayerHandlerBase = v1;
};

// Line 28: range 00000000136118AE-00000000136118D8
void __cdecl PlayerHandlerBase::~PlayerHandlerBase(PlayerHandlerBase *const this)
{
  PlayerHandlerBase::~PlayerHandlerBase(this);
  operator delete(this, 0x10uLL);
};

// Line 32: range 00000000131D2D3E-00000000131D2D50
int32_t __cdecl PlayerHandlerBase::addBytesFuncToMap(
        PlayerHandlerBase *const this,
        BytesFuncMap *process_bytes_func_map)
{
  return 0;
};
