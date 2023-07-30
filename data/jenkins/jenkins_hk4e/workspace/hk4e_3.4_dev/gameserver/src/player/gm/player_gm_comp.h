// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/gm/player_gm_comp.h

// Line 40: range 0000000017D71BD4-0000000017D71BF2
void __cdecl GmContext::~GmContext(GmContext *const this)
{
  std::vector<std::string>::~vector((std::vector<std::string> *const)&this->raw_param_vec);
};

// Line 68: range 0000000017F53922-0000000017F5394C
void __cdecl PlayerGmComp::~PlayerGmComp(PlayerGmComp *const this)
{
  PlayerGmComp::~PlayerGmComp(this);
  operator delete(this, 0xC8uLL);
};

// Line 68: range 0000000017F538A2-0000000017F53921
void __cdecl PlayerGmComp::~PlayerGmComp(PlayerGmComp *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'PlayerGmComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_PlayerCompBase = v2;
  std::vector<std::weak_ptr<Monster>>::~vector(&this->last_create_monster_by_yace);
  GroupLuaTestStub::~GroupLuaTestStub(&this->group_lua_test_stub_);
  PlayerGmComp::GmValueContainer::~GmValueContainer(&this->gm_set_value_container_);
  PlayerCompBase::~PlayerCompBase(this);
};

// Line 71: range 000000001747AE36-000000001747B0EE
void __cdecl ZN12PlayerGmCompCI214PlayerCompBaseER6Player(PlayerGmComp *const this, Player *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rdx
  GroupLuaTestStub *p_group_lua_test_stub; // rdx
  Player *player; // rsi

  PlayerCompBase::PlayerCompBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'PlayerGmComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_PlayerCompBase = v2;
  if ( *(char *)(((unsigned __int64)&this->is_equip_level_off_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_equip_level_off_, a2, &this->is_equip_level_off_);
  this->is_equip_level_off_ = 0;
  v3 = ((_BYTE)this + 33) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_monster_invincible_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_monster_invincible_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_monster_invincible_, v3, v4);
  this->is_monster_invincible_ = 0;
  v5 = ((_BYTE)this + 34) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->is_stamina_infinite_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&this->is_stamina_infinite_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store1(&this->is_stamina_infinite_, v5, v6);
  this->is_stamina_infinite_ = 0;
  v7 = ((_BYTE)this + 35) & 7;
  v8 = (*(_BYTE *)(((unsigned __int64)&this->is_energy_infinite_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&this->is_energy_infinite_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_store1(&this->is_energy_infinite_, v7, v8);
  this->is_energy_infinite_ = 0;
  v9 = ((_BYTE)this + 36) & 7;
  v10 = (*(_BYTE *)(((unsigned __int64)&this->is_force_authority_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v9 >= *(_BYTE *)(((unsigned __int64)&this->is_force_authority_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v10 )
    __asan_report_store1(&this->is_force_authority_, v9, v10);
  this->is_force_authority_ = 0;
  v11 = ((_BYTE)this + 37) & 7;
  v12 = (*(_BYTE *)(((unsigned __int64)&this->is_move_packet_to_self_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v11 >= *(_BYTE *)(((unsigned __int64)&this->is_move_packet_to_self_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v12 )
    __asan_report_store1(&this->is_move_packet_to_self_, v11, v12);
  this->is_move_packet_to_self_ = 0;
  v13 = ((_BYTE)this + 38) & 7;
  v14 = (*(_BYTE *)(((unsigned __int64)&this->is_global_avatar_invincible_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v13 >= *(_BYTE *)(((unsigned __int64)&this->is_global_avatar_invincible_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v14 )
    __asan_report_store1(&this->is_global_avatar_invincible_, v13, v14);
  this->is_global_avatar_invincible_ = 0;
  PlayerGmComp::GmValueContainer::GmValueContainer(&this->gm_set_value_container_);
  p_group_lua_test_stub = &this->group_lua_test_stub_;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  player = this->player_;
  GroupLuaTestStub::GroupLuaTestStub(p_group_lua_test_stub, player);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_time_release_coro_lua_script_mgr >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_time_release_coro_lua_script_mgr >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(
      &this->last_time_release_coro_lua_script_mgr,
      player,
      &this->last_time_release_coro_lua_script_mgr);
  }
  this->last_time_release_coro_lua_script_mgr = 0;
  std::vector<std::weak_ptr<Monster>>::vector(&this->last_create_monster_by_yace);
};

// Line 74: range 00000000144E4932-00000000144E497F
void __cdecl PlayerGmComp::GmSetValue<unsigned int>::GmSetValue(PlayerGmComp::GmSetValue<unsigned int> *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  PlayerGmComp::GmValueBase::GmValueBase(this);
  v2 = (int (**)(...))(&`vtable for'PlayerGmComp::GmSetValue<unsigned int> + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GmValueBase = v2;
};

// Line 74: range 00000000144E48F0-00000000144E4931
void __cdecl PlayerGmComp::GmValueBase::GmValueBase(PlayerGmComp::GmValueBase *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'PlayerGmComp::GmValueBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GmValueBase = v2;
};

// Line 76: range 00000000144024EA-000000001440252B
void __cdecl PlayerGmComp::GmValueBase::~GmValueBase(PlayerGmComp::GmValueBase *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'PlayerGmComp::GmValueBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GmValueBase = v2;
};

// Line 76: range 000000001440252C-0000000014402556
void __cdecl PlayerGmComp::GmValueBase::~GmValueBase(PlayerGmComp::GmValueBase *const this)
{
  PlayerGmComp::GmValueBase::~GmValueBase(this);
  operator delete(this, 8uLL);
};

// Line 80: range 0000000017F5322E-0000000017F53258
void __cdecl PlayerGmComp::GmSetValue<bool>::~GmSetValue(PlayerGmComp::GmSetValue<bool> *const this)
{
  PlayerGmComp::GmSetValue<bool>::~GmSetValue(this);
  operator delete(this, 0x10uLL);
};

// Line 80: range 0000000017F531E0-0000000017F5322D
void __cdecl PlayerGmComp::GmSetValue<bool>::~GmSetValue(PlayerGmComp::GmSetValue<bool> *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'PlayerGmComp::GmSetValue<bool> + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GmValueBase = v2;
  PlayerGmComp::GmValueBase::~GmValueBase(this);
};

// Line 80: range 0000000017F4E05E-0000000017F4E0AB
void __cdecl PlayerGmComp::GmSetValue<float>::GmSetValue(PlayerGmComp::GmSetValue<float> *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  PlayerGmComp::GmValueBase::GmValueBase(this);
  v2 = (int (**)(...))(&`vtable for'PlayerGmComp::GmSetValue<float> + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GmValueBase = v2;
};

// Line 80: range 0000000017F532A8-0000000017F532D2
void __cdecl PlayerGmComp::GmSetValue<float>::~GmSetValue(PlayerGmComp::GmSetValue<float> *const this)
{
  PlayerGmComp::GmSetValue<float>::~GmSetValue(this);
  operator delete(this, 0x10uLL);
};

// Line 80: range 0000000017F5325A-0000000017F532A7
void __cdecl PlayerGmComp::GmSetValue<float>::~GmSetValue(PlayerGmComp::GmSetValue<float> *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'PlayerGmComp::GmSetValue<float> + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GmValueBase = v2;
  PlayerGmComp::GmValueBase::~GmValueBase(this);
};

// Line 80: range 0000000017F4E638-0000000017F4E695
void __cdecl PlayerGmComp::GmSetValue<std::unordered_set<unsigned int>>::GmSetValue(
        PlayerGmComp::GmSetValue<std::unordered_set<unsigned int> > *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  PlayerGmComp::GmValueBase::GmValueBase(this);
  v2 = (int (**)(...))(&`vtable for'PlayerGmComp::GmSetValue<std::unordered_set<unsigned int>> + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GmValueBase = v2;
  std::unordered_set<unsigned int>::unordered_set(&this->value);
};

// Line 80: range 0000000017F531B4-0000000017F531DE
void __cdecl PlayerGmComp::GmSetValue<std::unordered_set<unsigned int>>::~GmSetValue(
        PlayerGmComp::GmSetValue<std::unordered_set<unsigned int> > *const this)
{
  PlayerGmComp::GmSetValue<std::unordered_set<unsigned int>>::~GmSetValue(this);
  operator delete(this, 0x40uLL);
};

// Line 80: range 0000000017F53156-0000000017F531B3
void __cdecl PlayerGmComp::GmSetValue<std::unordered_set<unsigned int>>::~GmSetValue(
        PlayerGmComp::GmSetValue<std::unordered_set<unsigned int> > *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'PlayerGmComp::GmSetValue<std::unordered_set<unsigned int>> + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GmValueBase = v2;
  std::unordered_set<unsigned int>::~unordered_set(&this->value);
  PlayerGmComp::GmValueBase::~GmValueBase(this);
};

// Line 80: range 00000000144ED994-00000000144ED9E1
void __cdecl PlayerGmComp::GmSetValue<unsigned int>::~GmSetValue(PlayerGmComp::GmSetValue<unsigned int> *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'PlayerGmComp::GmSetValue<unsigned int> + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GmValueBase = v2;
  PlayerGmComp::GmValueBase::~GmValueBase(this);
};

// Line 80: range 00000000144ED9E2-00000000144EDA0C
void __cdecl PlayerGmComp::GmSetValue<unsigned int>::~GmSetValue(PlayerGmComp::GmSetValue<unsigned int> *const this)
{
  PlayerGmComp::GmSetValue<unsigned int>::~GmSetValue(this);
  operator delete(this, 0x10uLL);
};

// Line 87: range 000000001747ADE2-000000001747ADFC
void __cdecl PlayerGmComp::GmValueContainer::GmValueContainer(PlayerGmComp::GmValueContainer *const this)
{
  std::unordered_map<unsigned int,std::shared_ptr<PlayerGmComp::GmValueBase>>::unordered_map(&this->gm_set_value_map_);
};

// Line 87: range 0000000017F53886-0000000017F538A0
void __cdecl PlayerGmComp::GmValueContainer::~GmValueContainer(PlayerGmComp::GmValueContainer *const this)
{
  std::unordered_map<unsigned int,std::shared_ptr<PlayerGmComp::GmValueBase>>::~unordered_map(&this->gm_set_value_map_);
};

// Line 91: range 0000000017DC30C8-0000000017DC32D0
__int64 __fastcall PlayerGmComp::GmValueContainer::setValue<bool>(
        PlayerGmComp::GmValueContainer *const this,
        uint32_t key,
        unsigned __int64 value)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  unsigned int v6; // r14d
  unsigned __int64 v7; // rsi
  char v8; // r14
  __int64 v9; // rax
  char v10; // dl
  _BOOL8 v11; // rdx
  std::shared_ptr<PlayerGmComp::GmValueBase> *v12; // rax
  __int64 result; // rax
  char v15[144]; // [rsp+20h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 6 key:91 64 16 12 value_ptr:93";
  *(_QWORD *)(v3 + 16) = PlayerGmComp::GmValueContainer::setValue<bool>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202178560;
  *(_DWORD *)(v3 + 48) = key;
  common::tools::perf::make_shared<PlayerGmComp::GmSetValue<bool>>();
  if ( std::operator==<PlayerGmComp::GmSetValue<bool>>(
         (const std::shared_ptr<PlayerGmComp::GmSetValue<bool> > *)(v3 + 64),
         0LL) )
  {
    v6 = 0;
  }
  else
  {
    v7 = value & 7;
    if ( *(_BYTE *)((value >> 3) + 0x7FFF8000) != 0 && (char)v7 >= *(_BYTE *)((value >> 3) + 0x7FFF8000) )
      __asan_report_load1(value);
    v8 = *(_BYTE *)value;
    v9 = (__int64)std::__shared_ptr_access<PlayerGmComp::GmSetValue<bool>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerGmComp::GmSetValue<bool>,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    v10 = *(_BYTE *)(((unsigned __int64)(v9 + 8) >> 3) + 0x7FFF8000);
    LOBYTE(v7) = v10 != 0;
    v11 = v10 < 0;
    if ( v11 )
      v9 = __asan_report_store1(v9 + 8, v7, v11);
    *(_BYTE *)(v9 + 8) = v8;
    v12 = std::unordered_map<unsigned int,std::shared_ptr<PlayerGmComp::GmValueBase>>::operator[](
            &this->gm_set_value_map_,
            (const std::unordered_map<unsigned int,std::shared_ptr<PlayerGmComp::GmValueBase>>::key_type *)(v3 + 48));
    std::shared_ptr<PlayerGmComp::GmValueBase>::operator=<PlayerGmComp::GmSetValue<bool>>(
      v12,
      (const std::shared_ptr<PlayerGmComp::GmSetValue<bool> > *)(v3 + 64));
    v6 = 1;
  }
  std::shared_ptr<PlayerGmComp::GmSetValue<bool>>::~shared_ptr((std::shared_ptr<PlayerGmComp::GmSetValue<bool> > *const)(v3 + 64));
  result = v6;
  if ( v15 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 91: range 0000000017DC28AC-0000000017DC2AC9
__int64 __fastcall PlayerGmComp::GmValueContainer::setValue<float>(
        PlayerGmComp::GmValueContainer *const this,
        uint32_t key,
        unsigned __int64 value)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  unsigned int v6; // r15d
  __int64 v7; // rsi
  __int64 v8; // rax
  char v9; // dl
  __int64 v10; // rdx
  std::shared_ptr<PlayerGmComp::GmValueBase> *v11; // rax
  __int64 result; // rax
  int v13; // [rsp+4h] [rbp-ACh]
  char v15[144]; // [rsp+20h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 6 key:91 64 16 12 value_ptr:93";
  *(_QWORD *)(v3 + 16) = PlayerGmComp::GmValueContainer::setValue<float>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202178560;
  *(_DWORD *)(v3 + 48) = key;
  common::tools::perf::make_shared<PlayerGmComp::GmSetValue<float>>();
  if ( std::operator==<PlayerGmComp::GmSetValue<float>>(
         (const std::shared_ptr<PlayerGmComp::GmSetValue<float> > *)(v3 + 64),
         0LL) )
  {
    v6 = 0;
  }
  else
  {
    v7 = (unsigned int)(value & 7) + 3;
    if ( *(_BYTE *)((value >> 3) + 0x7FFF8000) != 0 && (char)((value & 7) + 3) >= *(_BYTE *)((value >> 3) + 0x7FFF8000) )
      __asan_report_load4(value);
    v13 = *(_DWORD *)value;
    v8 = (__int64)std::__shared_ptr_access<PlayerGmComp::GmSetValue<float>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerGmComp::GmSetValue<float>,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    v9 = *(_BYTE *)(((unsigned __int64)(v8 + 8) >> 3) + 0x7FFF8000);
    LOBYTE(v7) = v9 != 0;
    v10 = (v9 != 0) & (unsigned __int8)(v9 <= 3);
    if ( (_BYTE)v10 )
      v8 = __asan_report_store4(v8 + 8, v7, v10);
    *(_DWORD *)(v8 + 8) = v13;
    v11 = std::unordered_map<unsigned int,std::shared_ptr<PlayerGmComp::GmValueBase>>::operator[](
            &this->gm_set_value_map_,
            (const std::unordered_map<unsigned int,std::shared_ptr<PlayerGmComp::GmValueBase>>::key_type *)(v3 + 48));
    std::shared_ptr<PlayerGmComp::GmValueBase>::operator=<PlayerGmComp::GmSetValue<float>>(
      v11,
      (const std::shared_ptr<PlayerGmComp::GmSetValue<float> > *)(v3 + 64));
    v6 = 1;
  }
  std::shared_ptr<PlayerGmComp::GmSetValue<float>>::~shared_ptr((std::shared_ptr<PlayerGmComp::GmSetValue<float> > *const)(v3 + 64));
  result = v6;
  if ( v15 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 91: range 0000000017DC503E-0000000017DC51E2
__int64 __fastcall PlayerGmComp::GmValueContainer::setValue<std::unordered_set<unsigned int>>(
        PlayerGmComp::GmValueContainer *const this,
        uint32_t key,
        const std::unordered_set<unsigned int> *value)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  unsigned int v6; // r15d
  std::__shared_ptr_access<PlayerGmComp::GmSetValue<std::unordered_set<unsigned int> >,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::shared_ptr<PlayerGmComp::GmValueBase> *v8; // rax
  __int64 result; // rax
  char v11[144]; // [rsp+20h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 6 key:91 64 16 12 value_ptr:93";
  *(_QWORD *)(v3 + 16) = PlayerGmComp::GmValueContainer::setValue<std::unordered_set<unsigned int>>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202178560;
  *(_DWORD *)(v3 + 48) = key;
  common::tools::perf::make_shared<PlayerGmComp::GmSetValue<std::unordered_set<unsigned int>>>();
  if ( std::operator==<PlayerGmComp::GmSetValue<std::unordered_set<unsigned int>>>(
         (const std::shared_ptr<PlayerGmComp::GmSetValue<std::unordered_set<unsigned int> > > *)(v3 + 64),
         0LL) )
  {
    v6 = 0;
  }
  else
  {
    v7 = std::__shared_ptr_access<PlayerGmComp::GmSetValue<std::unordered_set<unsigned int>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerGmComp::GmSetValue<std::unordered_set<unsigned int> >,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    std::unordered_set<unsigned int>::operator=(&v7->value, value);
    v8 = std::unordered_map<unsigned int,std::shared_ptr<PlayerGmComp::GmValueBase>>::operator[](
           &this->gm_set_value_map_,
           (const std::unordered_map<unsigned int,std::shared_ptr<PlayerGmComp::GmValueBase>>::key_type *)(v3 + 48));
    std::shared_ptr<PlayerGmComp::GmValueBase>::operator=<PlayerGmComp::GmSetValue<std::unordered_set<unsigned int>>>(
      v8,
      (const std::shared_ptr<PlayerGmComp::GmSetValue<std::unordered_set<unsigned int> > > *)(v3 + 64));
    v6 = 1;
  }
  std::shared_ptr<PlayerGmComp::GmSetValue<std::unordered_set<unsigned int>>>::~shared_ptr((std::shared_ptr<PlayerGmComp::GmSetValue<std::unordered_set<unsigned int> > > *const)(v3 + 64));
  result = v6;
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 91: range 000000001442DFAA-000000001442E1B5
__int64 __fastcall PlayerGmComp::GmValueContainer::setValue<unsigned int>(
        PlayerGmComp::GmValueContainer *const this,
        uint32_t key,
        unsigned __int64 value)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  unsigned int v6; // r14d
  __int64 v7; // rsi
  int v8; // r14d
  __int64 v9; // rax
  char v10; // dl
  __int64 v11; // rdx
  std::shared_ptr<PlayerGmComp::GmValueBase> *v12; // rax
  __int64 result; // rax
  char v15[144]; // [rsp+20h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 6 key:91 64 16 12 value_ptr:93";
  *(_QWORD *)(v3 + 16) = PlayerGmComp::GmValueContainer::setValue<unsigned int>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202178560;
  *(_DWORD *)(v3 + 48) = key;
  common::tools::perf::make_shared<PlayerGmComp::GmSetValue<unsigned int>>();
  if ( std::operator==<PlayerGmComp::GmSetValue<unsigned int>>(
         (const std::shared_ptr<PlayerGmComp::GmSetValue<unsigned int> > *)(v3 + 64),
         0LL) )
  {
    v6 = 0;
  }
  else
  {
    v7 = (unsigned int)(value & 7) + 3;
    if ( *(_BYTE *)((value >> 3) + 0x7FFF8000) != 0 && (char)((value & 7) + 3) >= *(_BYTE *)((value >> 3) + 0x7FFF8000) )
      __asan_report_load4(value);
    v8 = *(_DWORD *)value;
    v9 = (__int64)std::__shared_ptr_access<PlayerGmComp::GmSetValue<unsigned int>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerGmComp::GmSetValue<unsigned int>,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    v10 = *(_BYTE *)(((unsigned __int64)(v9 + 8) >> 3) + 0x7FFF8000);
    LOBYTE(v7) = v10 != 0;
    v11 = (v10 != 0) & (unsigned __int8)(v10 <= 3);
    if ( (_BYTE)v11 )
      v9 = __asan_report_store4(v9 + 8, v7, v11);
    *(_DWORD *)(v9 + 8) = v8;
    v12 = std::unordered_map<unsigned int,std::shared_ptr<PlayerGmComp::GmValueBase>>::operator[](
            &this->gm_set_value_map_,
            (const std::unordered_map<unsigned int,std::shared_ptr<PlayerGmComp::GmValueBase>>::key_type *)(v3 + 48));
    std::shared_ptr<PlayerGmComp::GmValueBase>::operator=<PlayerGmComp::GmSetValue<unsigned int>>(
      v12,
      (const std::shared_ptr<PlayerGmComp::GmSetValue<unsigned int> > *)(v3 + 64));
    v6 = 1;
  }
  std::shared_ptr<PlayerGmComp::GmSetValue<unsigned int>>::~shared_ptr((std::shared_ptr<PlayerGmComp::GmSetValue<unsigned int> > *const)(v3 + 64));
  result = v6;
  if ( v15 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 104: range 0000000013931560-0000000013931785
_BOOL8 __fastcall PlayerGmComp::GmValueContainer::getValue<bool>(
        PlayerGmComp::GmValueContainer *const this,
        uint32_t key)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  _BOOL4 value; // r14d
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<PlayerGmComp::GmValueBase> >,false,false>::pointer v6; // rax
  std::__shared_ptr_access<PlayerGmComp::GmSetValue<bool>,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  _BOOL8 result; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<PlayerGmComp::GmValueBase> >,false> __y; // [rsp+18h] [rbp-B8h] BYREF
  char v10[176]; // [rsp+20h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 7 key:104 64 8 6 it:107 96 16 13 value_ptr:116";
  *(_QWORD *)(v2 + 16) = PlayerGmComp::GmValueContainer::getValue<bool>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202178560;
  *(_DWORD *)(v2 + 48) = key;
  *(std::unordered_map<unsigned int,std::shared_ptr<PlayerGmComp::GmValueBase>>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::shared_ptr<PlayerGmComp::GmValueBase>>::find(&this->gm_set_value_map_, (const std::unordered_map<unsigned int,std::shared_ptr<PlayerGmComp::GmValueBase>>::key_type *)(v2 + 48));
  __y._M_cur = std::unordered_map<unsigned int,std::shared_ptr<PlayerGmComp::GmValueBase>>::end(&this->gm_set_value_map_)._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned int const,std::shared_ptr<PlayerGmComp::GmValueBase>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<PlayerGmComp::GmValueBase> >,false> *)(v2 + 64),
         &__y) )
  {
    value = PlayerGmComp::GmValueContainer::getValue<bool>(unsigned int)::t_value;
  }
  else
  {
    v6 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<PlayerGmComp::GmValueBase>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<PlayerGmComp::GmValueBase> >,false,false> *const)(v2 + 64));
    if ( std::operator==<PlayerGmComp::GmValueBase>(&v6->second, 0LL) )
    {
      value = PlayerGmComp::GmValueContainer::getValue<bool>(unsigned int)::t_value;
    }
    else
    {
      std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<PlayerGmComp::GmValueBase>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<PlayerGmComp::GmValueBase> >,false,false> *const)(v2 + 64));
      std::dynamic_pointer_cast<PlayerGmComp::GmSetValue<bool>,PlayerGmComp::GmValueBase>((const std::shared_ptr<PlayerGmComp::GmValueBase> *)(v2 + 96));
      if ( std::operator==<PlayerGmComp::GmSetValue<bool>>(
             (const std::shared_ptr<PlayerGmComp::GmSetValue<bool> > *)(v2 + 96),
             0LL) )
      {
        value = PlayerGmComp::GmValueContainer::getValue<bool>(unsigned int)::t_value;
      }
      else
      {
        v7 = std::__shared_ptr_access<PlayerGmComp::GmSetValue<bool>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerGmComp::GmSetValue<bool>,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        if ( *(char *)(((unsigned __int64)&v7->value >> 3) + 0x7FFF8000) < 0 )
          v7 = (std::__shared_ptr_access<PlayerGmComp::GmSetValue<bool>,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load1(&v7->value);
        value = v7->value;
      }
      std::shared_ptr<PlayerGmComp::GmSetValue<bool>>::~shared_ptr((std::shared_ptr<PlayerGmComp::GmSetValue<bool> > *const)(v2 + 96));
    }
  }
  result = value;
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 104: range 000000001728414C-0000000017284393
float __fastcall PlayerGmComp::GmValueContainer::getValue<float>(
        PlayerGmComp::GmValueContainer *const this,
        uint32_t key)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<PlayerGmComp::GmValueBase> >,false,false>::pointer v5; // rax
  std::__shared_ptr_access<PlayerGmComp::GmSetValue<float>,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  float result; // xmm0_4
  float value; // [rsp+0h] [rbp-C0h]
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<PlayerGmComp::GmValueBase> >,false> __y; // [rsp+18h] [rbp-A8h] BYREF
  char v10[160]; // [rsp+20h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 7 key:104 64 8 6 it:107 96 16 13 value_ptr:116";
  *(_QWORD *)(v2 + 16) = PlayerGmComp::GmValueContainer::getValue<float>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202178560;
  *(_DWORD *)(v2 + 48) = key;
  *(std::unordered_map<unsigned int,std::shared_ptr<PlayerGmComp::GmValueBase>>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::shared_ptr<PlayerGmComp::GmValueBase>>::find(&this->gm_set_value_map_, (const std::unordered_map<unsigned int,std::shared_ptr<PlayerGmComp::GmValueBase>>::key_type *)(v2 + 48));
  __y._M_cur = std::unordered_map<unsigned int,std::shared_ptr<PlayerGmComp::GmValueBase>>::end(&this->gm_set_value_map_)._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned int const,std::shared_ptr<PlayerGmComp::GmValueBase>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<PlayerGmComp::GmValueBase> >,false> *)(v2 + 64),
         &__y) )
  {
    value = PlayerGmComp::GmValueContainer::getValue<float>(unsigned int)::t_value;
  }
  else
  {
    v5 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<PlayerGmComp::GmValueBase>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<PlayerGmComp::GmValueBase> >,false,false> *const)(v2 + 64));
    if ( std::operator==<PlayerGmComp::GmValueBase>(&v5->second, 0LL) )
    {
      value = PlayerGmComp::GmValueContainer::getValue<float>(unsigned int)::t_value;
    }
    else
    {
      std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<PlayerGmComp::GmValueBase>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<PlayerGmComp::GmValueBase> >,false,false> *const)(v2 + 64));
      std::dynamic_pointer_cast<PlayerGmComp::GmSetValue<float>,PlayerGmComp::GmValueBase>((const std::shared_ptr<PlayerGmComp::GmValueBase> *)(v2 + 96));
      if ( std::operator==<PlayerGmComp::GmSetValue<float>>(
             (const std::shared_ptr<PlayerGmComp::GmSetValue<float> > *)(v2 + 96),
             0LL) )
      {
        value = PlayerGmComp::GmValueContainer::getValue<float>(unsigned int)::t_value;
      }
      else
      {
        v6 = std::__shared_ptr_access<PlayerGmComp::GmSetValue<float>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerGmComp::GmSetValue<float>,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        if ( *(_BYTE *)(((unsigned __int64)&v6->value >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v6->value >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&v6->value);
        }
        value = v6->value;
      }
      std::shared_ptr<PlayerGmComp::GmSetValue<float>>::~shared_ptr((std::shared_ptr<PlayerGmComp::GmSetValue<float> > *const)(v2 + 96));
    }
  }
  result = value;
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 104: range 000000001520A7F2-000000001520AAB2
std::unordered_set<unsigned int> *__fastcall PlayerGmComp::GmValueContainer::getValue<std::unordered_set<unsigned int>>(
        std::unordered_set<unsigned int> *retstr,
        PlayerGmComp::GmValueContainer *const this,
        uint32_t key)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<PlayerGmComp::GmValueBase> >,false,false>::pointer v6; // rax
  std::__shared_ptr_access<PlayerGmComp::GmSetValue<std::unordered_set<unsigned int> >,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<PlayerGmComp::GmValueBase> >,false> __y; // [rsp+28h] [rbp-A8h] BYREF
  char v11[160]; // [rsp+30h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 7 key:104 64 8 6 it:107 96 16 13 value_ptr:116";
  *(_QWORD *)(v3 + 16) = PlayerGmComp::GmValueContainer::getValue<std::unordered_set<unsigned int>>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202178560;
  *(_DWORD *)(v3 + 48) = key;
  if ( !(_BYTE)`guard variable for'std::unordered_set<unsigned int> PlayerGmComp::GmValueContainer::getValue<std::unordered_set<unsigned int>>(unsigned int)::t_value
    && __cxa_guard_acquire(&`guard variable for'std::unordered_set<unsigned int> PlayerGmComp::GmValueContainer::getValue<std::unordered_set<unsigned int>>(unsigned int)::t_value) )
  {
    std::unordered_set<unsigned int>::unordered_set(&PlayerGmComp::GmValueContainer::getValue<std::unordered_set<unsigned int>>(unsigned int)::t_value);
    __cxa_guard_release(&`guard variable for'std::unordered_set<unsigned int> PlayerGmComp::GmValueContainer::getValue<std::unordered_set<unsigned int>>(unsigned int)::t_value);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::unordered_set<unsigned int>::~unordered_set,
      &PlayerGmComp::GmValueContainer::getValue<std::unordered_set<unsigned int>>(unsigned int)::t_value,
      &_dso_handle);
  }
  *(std::unordered_map<unsigned int,std::shared_ptr<PlayerGmComp::GmValueBase>>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::shared_ptr<PlayerGmComp::GmValueBase>>::find(&this->gm_set_value_map_, (const std::unordered_map<unsigned int,std::shared_ptr<PlayerGmComp::GmValueBase>>::key_type *)(v3 + 48));
  __y._M_cur = std::unordered_map<unsigned int,std::shared_ptr<PlayerGmComp::GmValueBase>>::end(&this->gm_set_value_map_)._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned int const,std::shared_ptr<PlayerGmComp::GmValueBase>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<PlayerGmComp::GmValueBase> >,false> *)(v3 + 64),
         &__y)
    || (v6 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<PlayerGmComp::GmValueBase>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<PlayerGmComp::GmValueBase> >,false,false> *const)(v3 + 64)),
        std::operator==<PlayerGmComp::GmValueBase>(&v6->second, 0LL)) )
  {
    std::unordered_set<unsigned int>::unordered_set(
      retstr,
      &PlayerGmComp::GmValueContainer::getValue<std::unordered_set<unsigned int>>(unsigned int)::t_value);
  }
  else
  {
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<PlayerGmComp::GmValueBase>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<PlayerGmComp::GmValueBase> >,false,false> *const)(v3 + 64));
    std::dynamic_pointer_cast<PlayerGmComp::GmSetValue<std::unordered_set<unsigned int>>,PlayerGmComp::GmValueBase>((const std::shared_ptr<PlayerGmComp::GmValueBase> *)(v3 + 96));
    if ( std::operator==<PlayerGmComp::GmSetValue<std::unordered_set<unsigned int>>>(
           (const std::shared_ptr<PlayerGmComp::GmSetValue<std::unordered_set<unsigned int> > > *)(v3 + 96),
           0LL) )
    {
      std::unordered_set<unsigned int>::unordered_set(
        retstr,
        &PlayerGmComp::GmValueContainer::getValue<std::unordered_set<unsigned int>>(unsigned int)::t_value);
    }
    else
    {
      v7 = std::__shared_ptr_access<PlayerGmComp::GmSetValue<std::unordered_set<unsigned int>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerGmComp::GmSetValue<std::unordered_set<unsigned int> >,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      std::unordered_set<unsigned int>::unordered_set(retstr, &v7->value);
    }
    std::shared_ptr<PlayerGmComp::GmSetValue<std::unordered_set<unsigned int>>>::~shared_ptr((std::shared_ptr<PlayerGmComp::GmSetValue<std::unordered_set<unsigned int> > > *const)(v3 + 96));
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};

// Line 104: range 00000000144298B2-0000000014429AD4
__int64 __fastcall PlayerGmComp::GmValueContainer::getValue<unsigned int>(
        PlayerGmComp::GmValueContainer *const this,
        uint32_t key)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  unsigned int value; // r14d
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<PlayerGmComp::GmValueBase> >,false,false>::pointer v6; // rax
  std::__shared_ptr_access<PlayerGmComp::GmSetValue<unsigned int>,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  __int64 result; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<PlayerGmComp::GmValueBase> >,false> __y; // [rsp+18h] [rbp-B8h] BYREF
  char v10[176]; // [rsp+20h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 7 key:104 64 8 6 it:107 96 16 13 value_ptr:116";
  *(_QWORD *)(v2 + 16) = PlayerGmComp::GmValueContainer::getValue<unsigned int>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202178560;
  *(_DWORD *)(v2 + 48) = key;
  *(std::unordered_map<unsigned int,std::shared_ptr<PlayerGmComp::GmValueBase>>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::shared_ptr<PlayerGmComp::GmValueBase>>::find(&this->gm_set_value_map_, (const std::unordered_map<unsigned int,std::shared_ptr<PlayerGmComp::GmValueBase>>::key_type *)(v2 + 48));
  __y._M_cur = std::unordered_map<unsigned int,std::shared_ptr<PlayerGmComp::GmValueBase>>::end(&this->gm_set_value_map_)._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned int const,std::shared_ptr<PlayerGmComp::GmValueBase>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<PlayerGmComp::GmValueBase> >,false> *)(v2 + 64),
         &__y) )
  {
    value = PlayerGmComp::GmValueContainer::getValue<unsigned int>(unsigned int)::t_value;
  }
  else
  {
    v6 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<PlayerGmComp::GmValueBase>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<PlayerGmComp::GmValueBase> >,false,false> *const)(v2 + 64));
    if ( std::operator==<PlayerGmComp::GmValueBase>(&v6->second, 0LL) )
    {
      value = PlayerGmComp::GmValueContainer::getValue<unsigned int>(unsigned int)::t_value;
    }
    else
    {
      std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<PlayerGmComp::GmValueBase>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<PlayerGmComp::GmValueBase> >,false,false> *const)(v2 + 64));
      std::dynamic_pointer_cast<PlayerGmComp::GmSetValue<unsigned int>,PlayerGmComp::GmValueBase>((const std::shared_ptr<PlayerGmComp::GmValueBase> *)(v2 + 96));
      if ( std::operator==<PlayerGmComp::GmSetValue<unsigned int>>(
             (const std::shared_ptr<PlayerGmComp::GmSetValue<unsigned int> > *)(v2 + 96),
             0LL) )
      {
        value = PlayerGmComp::GmValueContainer::getValue<unsigned int>(unsigned int)::t_value;
      }
      else
      {
        v7 = std::__shared_ptr_access<PlayerGmComp::GmSetValue<unsigned int>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerGmComp::GmSetValue<unsigned int>,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        if ( *(_BYTE *)(((unsigned __int64)&v7->value >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v7->value >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&v7->value);
        }
        value = v7->value;
      }
      std::shared_ptr<PlayerGmComp::GmSetValue<unsigned int>>::~shared_ptr((std::shared_ptr<PlayerGmComp::GmSetValue<unsigned int> > *const)(v2 + 96));
    }
  }
  result = value;
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 111: range 0000000017F4E32C-0000000017F4E379
void __cdecl PlayerGmComp::GmSetValue<bool>::GmSetValue(PlayerGmComp::GmSetValue<bool> *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  PlayerGmComp::GmValueBase::GmValueBase(this);
  v2 = (int (**)(...))(&`vtable for'PlayerGmComp::GmSetValue<bool> + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GmValueBase = v2;
};

// Line 124: range 0000000014402558-0000000014402624
void __fastcall PlayerGmComp::GmValueContainer::clearValue(PlayerGmComp::GmValueContainer *const this, uint32_t key)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  char v5[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 7 key:124";
  *(_QWORD *)(v2 + 16) = PlayerGmComp::GmValueContainer::clearValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = key;
  std::unordered_map<unsigned int,std::shared_ptr<PlayerGmComp::GmValueBase>>::erase(
    &this->gm_set_value_map_,
    (const std::unordered_map<unsigned int,std::shared_ptr<PlayerGmComp::GmValueBase>>::key_type *)(v2 + 32));
  if ( v5 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 140: range 00000000138D890A-00000000138D892F
bool __cdecl PlayerGmComp::getGmSetValue<bool>(PlayerGmComp *const this, uint32_t key)
{
  return PlayerGmComp::GmValueContainer::getValue<bool>(&this->gm_set_value_container_, key);
};

// Line 140: range 000000001725160E-0000000017251633
float __cdecl PlayerGmComp::getGmSetValue<float>(PlayerGmComp *const this, uint32_t key)
{
  return PlayerGmComp::GmValueContainer::getValue<float>(&this->gm_set_value_container_, key);
};

// Line 142: range 0000000017D895FA-0000000017D89627
bool __cdecl PlayerGmComp::setGmSetValue<bool>(PlayerGmComp *const this, uint32_t key, const bool *value)
{
  return PlayerGmComp::GmValueContainer::setValue<bool>(&this->gm_set_value_container_, key, (unsigned __int64)value);
};

// Line 142: range 0000000017D88FB8-0000000017D88FE5
bool __cdecl PlayerGmComp::setGmSetValue<float>(PlayerGmComp *const this, uint32_t key, const float *value)
{
  return PlayerGmComp::GmValueContainer::setValue<float>(&this->gm_set_value_container_, key, (unsigned __int64)value);
};

// Line 142: range 0000000017D8B310-0000000017D8B33D
bool __cdecl PlayerGmComp::setGmSetValue<std::unordered_set<unsigned int>>(
        PlayerGmComp *const this,
        uint32_t key,
        const std::unordered_set<unsigned int> *value)
{
  return PlayerGmComp::GmValueContainer::setValue<std::unordered_set<unsigned int>>(
           &this->gm_set_value_container_,
           key,
           value);
};

// Line 142: range 000000001440F208-000000001440F235
bool __cdecl PlayerGmComp::setGmSetValue<unsigned int>(
        PlayerGmComp *const this,
        uint32_t key,
        const unsigned int *value)
{
  return PlayerGmComp::GmValueContainer::setValue<unsigned int>(
           &this->gm_set_value_container_,
           key,
           (unsigned __int64)value);
};

// Line 144: range 0000000017D8CA9E-0000000017D8CAC3
void __cdecl PlayerGmComp::clearSetValue<bool>(PlayerGmComp *const this, uint32_t key)
{
  PlayerGmComp::GmValueContainer::clearValue(&this->gm_set_value_container_, key);
};

// Line 144: range 0000000017D88FE6-0000000017D8900B
void __cdecl PlayerGmComp::clearSetValue<float>(PlayerGmComp *const this, uint32_t key)
{
  PlayerGmComp::GmValueContainer::clearValue(&this->gm_set_value_container_, key);
};

// Line 144: range 000000001440F1E2-000000001440F207
void __cdecl PlayerGmComp::clearSetValue<unsigned int>(PlayerGmComp *const this, uint32_t key)
{
  PlayerGmComp::GmValueContainer::clearValue(&this->gm_set_value_container_, key);
};

// Line 149: range 0000000017D645D6-0000000017D64627
// local variable allocation has failed, the output may be wrong!
void __cdecl PlayerGmComp::setIsEquipLevelOff(PlayerGmComp *const this, bool is_equip_level_off__out)
{
  if ( *(char *)(((unsigned __int64)&this->is_equip_level_off_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_equip_level_off_, is_equip_level_off__out, &this->is_equip_level_off_);
  this->is_equip_level_off_ = is_equip_level_off__out;
};

// Line 150: range 00000000160513C4-0000000016051411
bool __cdecl PlayerGmComp::getIsMonsterInvincible(const PlayerGmComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_monster_invincible_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 33) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_monster_invincible_ >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_monster_invincible_);
  }
  return this->is_monster_invincible_;
};

// Line 150: range 0000000017D64628-0000000017D6467E
void __cdecl PlayerGmComp::setIsMonsterInvincible(PlayerGmComp *const this, bool is_monster_invincible__out)
{
  __int64 v2; // rsi
  __int64 v3; // rdx

  v2 = ((_BYTE)this + 33) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->is_monster_invincible_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->is_monster_invincible_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->is_monster_invincible_, v2, v3);
  this->is_monster_invincible_ = is_monster_invincible__out;
};

// Line 151: range 00000000172137EA-0000000017213837
bool __cdecl PlayerGmComp::getIsStaminaInfinite(const PlayerGmComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_stamina_infinite_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 34) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_stamina_infinite_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_stamina_infinite_);
  }
  return this->is_stamina_infinite_;
};

// Line 151: range 0000000017D64680-0000000017D646D6
void __cdecl PlayerGmComp::setIsStaminaInfinite(PlayerGmComp *const this, bool is_stamina_infinite__out)
{
  __int64 v2; // rsi
  __int64 v3; // rdx

  v2 = ((_BYTE)this + 34) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->is_stamina_infinite_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->is_stamina_infinite_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->is_stamina_infinite_, v2, v3);
  this->is_stamina_infinite_ = is_stamina_infinite__out;
};

// Line 152: range 0000000017A07364-0000000017A073B1
bool __cdecl PlayerGmComp::getIsEnergyInfinite(const PlayerGmComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_energy_infinite_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 35) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_energy_infinite_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_energy_infinite_);
  }
  return this->is_energy_infinite_;
};

// Line 152: range 0000000017D646D8-0000000017D6472E
void __cdecl PlayerGmComp::setIsEnergyInfinite(PlayerGmComp *const this, bool is_energy_infinite__out)
{
  __int64 v2; // rsi
  __int64 v3; // rdx

  v2 = ((_BYTE)this + 35) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->is_energy_infinite_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->is_energy_infinite_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->is_energy_infinite_, v2, v3);
  this->is_energy_infinite_ = is_energy_infinite__out;
};

// Line 153: range 0000000014F7988A-0000000014F798D7
bool __cdecl PlayerGmComp::getIsForceAuthority(const PlayerGmComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_force_authority_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 36) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_force_authority_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_force_authority_);
  }
  return this->is_force_authority_;
};

// Line 153: range 0000000014F798D8-0000000014F79925
bool __cdecl PlayerGmComp::getIsGlobalAvatarInvincible(const PlayerGmComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_global_avatar_invincible_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 38) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_global_avatar_invincible_ >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_global_avatar_invincible_);
  }
  return this->is_global_avatar_invincible_;
};

// Line 154: range 0000000017D64730-0000000017D64786
void __cdecl PlayerGmComp::setIsMovePacketToSelf(PlayerGmComp *const this, bool is_move_packet_to_self__out)
{
  __int64 v2; // rsi
  __int64 v3; // rdx

  v2 = ((_BYTE)this + 37) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->is_move_packet_to_self_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->is_move_packet_to_self_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->is_move_packet_to_self_, v2, v3);
  this->is_move_packet_to_self_ = is_move_packet_to_self__out;
};

// Line 155: range 0000000017D64788-0000000017D647DE
void __cdecl PlayerGmComp::setIsGlobalAvatarInvincible(PlayerGmComp *const this, bool is_global_avatar_invincible__out)
{
  __int64 v2; // rsi
  __int64 v3; // rdx

  v2 = ((_BYTE)this + 38) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->is_global_avatar_invincible_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->is_global_avatar_invincible_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->is_global_avatar_invincible_, v2, v3);
  this->is_global_avatar_invincible_ = is_global_avatar_invincible__out;
};

// Line 170: range 0000000017213838-0000000017213842
uint32_t __cdecl PlayerGmComp::getType()
{
  return 3;
};

// Line 174: range 0000000017D647DF-0000000017D64802
void __cdecl PlayerGmComp::setLogMovePacket(bool is_log)
{
  std::atomic<bool>::operator=(&PlayerGmComp::is_log_move_packet, is_log);
};

// Line 176: range 000000001518EAAA-000000001518EABE
bool __cdecl PlayerGmComp::isGlobalOpenBored()
{
  return std::atomic<bool>::operator bool(&PlayerGmComp::is_global_open_bored);
};

// Line 177: range 0000000017D64803-0000000017D64826
void __cdecl PlayerGmComp::setGlobalOpenBored(bool is_open)
{
  std::atomic<bool>::operator=(&PlayerGmComp::is_global_open_bored, is_open);
};

// Line 397: range 00000000151AE7D4-00000000151AE869
std::unordered_set<unsigned int> *__cdecl PlayerGmComp::getGmSetValue<std::unordered_set<unsigned int>>(
        std::unordered_set<unsigned int> *retstr,
        PlayerGmComp *const this,
        uint32_t key)
{
  PlayerGmComp::GmValueContainer *p_gm_set_value_container; // rsi

  p_gm_set_value_container = &this->gm_set_value_container_;
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_M_h._M_single_bucket + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 55) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_M_h._M_single_bucket + 7) >> 3)
                                                        + 0x7FFF8000) )
  {
    p_gm_set_value_container = (PlayerGmComp::GmValueContainer *)56;
    __asan_report_store_n(retstr, 56LL);
  }
  PlayerGmComp::GmValueContainer::getValue<std::unordered_set<unsigned int>>(retstr, p_gm_set_value_container, key);
  return retstr;
};

// Line 820: range 000000001440BCCA-000000001440BCEF
unsigned int __cdecl PlayerGmComp::getGmSetValue<unsigned int>(PlayerGmComp *const this, uint32_t key)
{
  return PlayerGmComp::GmValueContainer::getValue<unsigned int>(&this->gm_set_value_container_, key);
};
