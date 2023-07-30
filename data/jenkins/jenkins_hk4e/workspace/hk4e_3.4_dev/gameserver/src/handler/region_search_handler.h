// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/handler/region_search_handler.h

// Line 27: range 0000000015F462E8-0000000015F46335
void __cdecl RegionSearchHandler::~RegionSearchHandler(RegionSearchHandler *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'RegionSearchHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_PlayerHandlerBase = v1;
  PlayerHandlerBase::~PlayerHandlerBase(this);
};

// Line 27: range 0000000015F46336-0000000015F46360
void __cdecl RegionSearchHandler::~RegionSearchHandler(RegionSearchHandler *const this)
{
  RegionSearchHandler::~RegionSearchHandler(this);
  operator delete(this, 0x10uLL);
};

// Line 30: range 0000000017496482-00000000174964DA
void __cdecl ZN19RegionSearchHandlerCI217PlayerHandlerBaseER6Player(RegionSearchHandler *const this, Player *a2)
{
  int (**v2)(...); // rdx

  PlayerHandlerBase::PlayerHandlerBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'RegionSearchHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_PlayerHandlerBase = v2;
};
