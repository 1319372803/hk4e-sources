// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/gm/group_lua_test_stub.h

// Line 24: range 0000000017213762-00000000172137E8
void __cdecl GroupLuaTestStub::GroupLuaTestStub(GroupLuaTestStub *const this, Player *player)
{
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'GroupLuaTestStub + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, player);
  this->_vptr_GroupLuaTestStub = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->player_, player);
  this->player_ = player;
  std::unordered_map<data::EventType,std::function<std::vector<std::shared_ptr<Event>> ()(std::shared_ptr<Group>)>>::unordered_map(&this->build_group_event_func_map_);
};

// Line 25: range 00000000174B2610-00000000174B2661
void __cdecl GroupLuaTestStub::~GroupLuaTestStub(GroupLuaTestStub *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'GroupLuaTestStub + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GroupLuaTestStub = v2;
  std::unordered_map<data::EventType,std::function<std::vector<std::shared_ptr<Event>> ()(std::shared_ptr<Group>)>>::~unordered_map(&this->build_group_event_func_map_);
};

// Line 25: range 00000000174B2662-00000000174B268C
void __cdecl GroupLuaTestStub::~GroupLuaTestStub(GroupLuaTestStub *const this)
{
  GroupLuaTestStub::~GroupLuaTestStub(this);
  operator delete(this, 0x48uLL);
};
